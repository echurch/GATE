#ifdef HDF5
#include <hdf5.h>
#endif

#include <HDF5Writer.h>
#include <sstream>
#include <cstring>
#include <stdlib.h>

#define NPMT 12

ClassImp(gate::HDF5Writer)

typedef struct{
	int channel;
	int sensorID;
	//int active;
	float position[3];
	double coeff;
	float adc_to_pes;
	float noise_rms;
} sensor_t;

typedef struct{
	float x[2];
	float y[2];
	float z[2];
	float r;
} geometry_t;

typedef struct{
	int event_indx;
	int mctrk_indx;
	//const char *particle_name;
	char particle_name[10];
	int pdg_code;
	float initial_vertex[3];
	float final_vertex[3];
	float momentum[3];
	float energy;
	int nof_hits;
	int hit_indx;
	float hit_position[3];
	float hit_time;
	float hit_energy;
} mctrk_t;



gate::HDF5Writer::HDF5Writer() :   IWriter(), 
  
    _file(0), _pmtrd(0), _evt(0), _run(0), _ievt(0), _pmtDatasize(0), _sipmDatasize(0),_npmt(0),_nsipm(0),_dType(gate::DATA), _maxNumPmt(32), _maxNumSipm(1792) {

			_activePmts = (bool*) malloc(_maxNumPmt*sizeof(bool));
			memset(_activePmts,0,_maxNumPmt*sizeof(bool));
			_activePmtsBlr = (bool*) malloc(_maxNumPmt*sizeof(bool));
			memset(_activePmtsBlr,0,_maxNumPmt*sizeof(bool));
			_activeSipms = (bool*)malloc(_maxNumSipm*sizeof(bool));
			memset(_activeSipms,0,_maxNumSipm*sizeof(bool));
			_blrOn = false;

			_deconv = std::vector<double>(_maxNumPmt, 0);

			_deconv[0] = 0.001652348;
			_deconv[1] = 0.00163149;
			_deconv[4] = 0.001611269;
			_deconv[5] = 0.001600633;
			_deconv[8] = 0.001642566;
			_deconv[9] = 0.001624928;
			_deconv[18] = 0.001631774;
			_deconv[19] = 0.00162948;
			_deconv[22] = 0.001620873;
			_deconv[23] = 0.001626805;
			_deconv[26] = 0.001594688;
			_deconv[27] = 0.001582021;
}


gate::HDF5Writer::~HDF5Writer(){

}


#ifdef HDF5

void gate::HDF5Writer::Open(std::string fileName, std::string option){
	_mctrkCount=0;
	_firstEvent= true;

	_file =  H5Fcreate( fileName.c_str(), H5F_ACC_TRUNC,
			H5P_DEFAULT, H5P_DEFAULT ); 

	_isOpen=true; 
}


void gate::HDF5Writer::Close(){
  _isOpen=false;

  H5Fclose(_file);
}  
 
void gate::HDF5Writer::Write(Event& evt){
	//We need to create the tables on the first call.
	//Here is where we can check the size of the waveform

	if(_firstEvent){

		//Create group for sensors
		hid_t wfgroup;
		if (GetDataType() == gate::MC){
			wfgroup = _file;
		}else{
			wfgroup = H5Gcreate2(_file, "/RD", H5P_DEFAULT, H5P_DEFAULT, H5P_DEFAULT);
		}


		_firstEvent = false;

		_npmt = evt.GetHits(gate::PMT).size();
		_nsipm = evt.GetHits(gate::SIPM).size();

		const hsize_t ndims = 3;
		hid_t file_space;

		//PMTs
		//Check PMT exists and get WF length
		if(_npmt){
			//Get WF length
			_pmtDatasize = evt.GetHits(gate::PMT)[0]->GetWaveform().GetData().size();

			//Create 3D dataspace (evt,pmt,data). First dimension is unlimited (initially 0)
			hsize_t dims[ndims] = {0, NPMT, _pmtDatasize};
			hsize_t max_dims[ndims] = {H5S_UNLIMITED, NPMT,_pmtDatasize};
			file_space = H5Screate_simple(ndims, dims, max_dims);

			// Create a dataset creation property list
			// The layout of the dataset have to be chunked when using unlimited dimensions
			hid_t plistPmt = H5Pcreate(H5P_DATASET_CREATE);
			H5Pset_layout(plistPmt, H5D_CHUNKED);
			//  hsize_t chunk_dims[ndims] = {1,_npmt,_pmtDatasize};
			hsize_t chunk_dims[ndims] = {1,1,32768};
			if(_pmtDatasize < 32768){
				chunk_dims[2] = _pmtDatasize;
			}
			H5Pset_chunk(plistPmt, ndims, chunk_dims);

			//Set compression
			H5Pset_deflate (plistPmt, 4);

			// Create the dataset 'pmtrd1'
			if (GetDataType() == gate::MC){
				_pmtrd = H5Dcreate(wfgroup, "pmtrd", H5T_NATIVE_USHORT, file_space, H5P_DEFAULT, plistPmt, H5P_DEFAULT);
			}else{
				_pmtrd = H5Dcreate(wfgroup, "pmtrwf", H5T_NATIVE_USHORT, file_space, H5P_DEFAULT, plistPmt, H5P_DEFAULT);

				//Check if we need to create pmtblr
				const std::vector<gate::Hit*>& hitsPmtUnsorted = evt.GetHits(gate::PMT);
				typedef std::vector<gate::Hit*>::const_iterator ih;
				for(ih i=hitsPmtUnsorted.begin(); i !=hitsPmtUnsorted.end(); ++i){
					if ((*i)->GetLabel().compare("BLR") == 0){
						_pmtblr = H5Dcreate(wfgroup, "pmtblr", H5T_NATIVE_USHORT, file_space, H5P_DEFAULT, plistPmt, H5P_DEFAULT);
						break;
					}
				}

			}

			//Close resources
			H5Pclose(plistPmt);
		}


		//SIPM
		//Check SIPM exists and get WF length
		if(_nsipm > 0){
			//Get WF length
			_sipmDatasize = evt.GetHits(gate::SIPM)[0]->GetWaveform().GetData().size();

			//Create 3D dataspace (evt,sipm,data). First dimension is unlimited (initially 0)
			hsize_t dimsSipm[ndims] = {0, NPMT, _sipmDatasize};
			hsize_t max_dimsSipm[ndims] = {H5S_UNLIMITED,GetMaxNumSipm(),_sipmDatasize};
			file_space = H5Screate_simple(ndims, dimsSipm, max_dimsSipm);

			// Create a dataset creation property list
			// The layout of the dataset have to be chunked when using unlimited dimensions
			hid_t plistSipm = H5Pcreate(H5P_DATASET_CREATE);
			H5Pset_layout(plistSipm, H5D_CHUNKED);
			//  hsize_t chunk_dimsSipm[ndims] = {1,_nsipm,_sipmDatasize};
			hsize_t chunk_dimsSipm[ndims] = {1,50,_sipmDatasize};
			H5Pset_chunk(plistSipm, ndims, chunk_dimsSipm);

			//Set compression
			H5Pset_deflate (plistSipm, 4); 

			// Create the dataset 'pmtrd1'
			if (GetDataType() == gate::MC){
				_sipmrd = H5Dcreate(wfgroup, "sipmrd", H5T_NATIVE_USHORT, file_space, H5P_DEFAULT, plistSipm, H5P_DEFAULT);
			}else{
				_sipmrd = H5Dcreate(wfgroup, "sipmrwf", H5T_NATIVE_USHORT, file_space, H5P_DEFAULT, plistSipm, H5P_DEFAULT);
			}

			//Close resources
			H5Pclose(plistSipm);
		}

		//MC
		//Check if there are MCTracks and create MC/MCTracks in that case
		if (evt.GetMCTracks().size() > 0){
			//Group for MC
			hid_t mcG = H5Gcreate2(_file, "/MC", H5P_DEFAULT, H5P_DEFAULT, H5P_DEFAULT);
			const hsize_t ndimsMC = 1;

			//Create 1D dataspace
			hsize_t dimsMC[ndimsMC] = {0};
			hsize_t max_dimsMC[ndimsMC] = {H5S_UNLIMITED};
			file_space = H5Screate_simple(ndimsMC, dimsMC, max_dimsMC);

			// Create a dataset creation property list
			// The layout of the dataset have to be chunked when using unlimited dimensions
			hid_t plistMC = H5Pcreate(H5P_DATASET_CREATE);
			H5Pset_layout(plistMC, H5D_CHUNKED);
			hsize_t chunk_dimsMC[ndimsMC] = {1};
			H5Pset_chunk(plistMC, ndimsMC, chunk_dimsMC);

			//create compound datatype for MC tracks
			hsize_t point_dim[1] = {3};
			hid_t point = H5Tarray_create(H5T_NATIVE_FLOAT, 1, point_dim);
			//string type
			//hid_t strtype = H5Tcopy (H5T_C_S1);
			//H5Tset_size (strtype, H5T_VARIABLE);

			hid_t strtype = H5Tcopy (H5T_C_S1);
			H5Tset_size (strtype, 10);
			//Create compound datatype for the table
			_memtypeMC = H5Tcreate (H5T_COMPOUND, sizeof (mctrk_t));
			H5Tinsert (_memtypeMC, "event_indx",HOFFSET (mctrk_t, event_indx), H5T_NATIVE_INT);
			H5Tinsert (_memtypeMC, "mctrk_indx",HOFFSET (mctrk_t, mctrk_indx),H5T_NATIVE_INT);
			H5Tinsert (_memtypeMC, "particle_name",HOFFSET (mctrk_t, particle_name),strtype);
			H5Tinsert (_memtypeMC, "pdg_code",HOFFSET (mctrk_t, pdg_code),H5T_NATIVE_INT);
			H5Tinsert (_memtypeMC, "initial_vertex",HOFFSET (mctrk_t, initial_vertex), point);
			H5Tinsert (_memtypeMC, "final_vertex",HOFFSET (mctrk_t, final_vertex), point);
			H5Tinsert (_memtypeMC, "momentum",HOFFSET (mctrk_t, momentum), point);
			H5Tinsert (_memtypeMC, "energy",HOFFSET (mctrk_t, energy), H5T_NATIVE_FLOAT);
			H5Tinsert (_memtypeMC, "nof_hits",HOFFSET (mctrk_t, nof_hits), H5T_NATIVE_INT);
			H5Tinsert (_memtypeMC, "hit_indx",HOFFSET (mctrk_t, hit_indx), H5T_NATIVE_INT);
			H5Tinsert (_memtypeMC, "hit_position",HOFFSET (mctrk_t, hit_position), point);
			H5Tinsert (_memtypeMC, "hit_time",HOFFSET (mctrk_t, hit_time), H5T_NATIVE_FLOAT);
			H5Tinsert (_memtypeMC, "hit_energy",HOFFSET (mctrk_t, hit_energy), H5T_NATIVE_FLOAT);

			//Set compression
			H5Pset_deflate (plistMC, 4);

			// Create the dataset 'MCTracks'
			_mctrks = H5Dcreate(mcG, "MCTracks", _memtypeMC, file_space, H5P_DEFAULT, plistMC, H5P_DEFAULT);

			//Close resources
			H5Pclose(plistMC);

			H5Sclose(file_space);
		}
	}

	hid_t memspace, file_space;

	//Read PMT waveforms
	if (_pmtDatasize > 0){
		unsigned short int *pmtdata = new unsigned short int[NPMT*_pmtDatasize];
		int index=0;
		int indexBlr=0;

		//Sensors can have any order in any event
		const std::vector<gate::Hit*>& hitsPmtUnsorted = evt.GetHits(gate::PMT);
		typedef std::vector<gate::Hit*>::const_iterator ih;

		//Sort them
		memset(_activePmts,0,_maxNumPmt*sizeof(bool));
		memset(_activePmtsBlr,0,_maxNumPmt*sizeof(bool));
		gate::Hit* hitsPmt[GetMaxNumPmt()];
		gate::Hit* hitsPmtBlr[GetMaxNumPmt()];
		int sensorID;
		for(ih i=hitsPmtUnsorted.begin(); i !=hitsPmtUnsorted.end(); ++i){
			sensorID = (*i)->GetSensorID();
			if ((*i)->GetLabel().compare("BLR") == 0){
				_blrOn = true;
				_activePmtsBlr[sensorID] = true;
				hitsPmtBlr[sensorID] = *i;
			}else{
				_activePmts[sensorID] = true;
				hitsPmt[sensorID] = *i;
			}
		}

		//Read waveforms always in the same order
		for(unsigned int sensIndx=0; sensIndx<NPMT; sensIndx++){
			if(_activePmts[sensIndx]){
				const gate::Waveform& wf =  hitsPmt[sensIndx]->GetWaveform();
				const std::vector<std::pair<unsigned int,float> >& d = wf.GetData();

				for (unsigned int samp = 0; samp<d.size(); samp++){
					//index = sensIndx*_pmtDatasize + samp;
					pmtdata[index] = (unsigned short int) (d[samp].second);
					index++;
				}
			/*}else{
				for (unsigned int samp = 0; samp<_pmtDatasize; samp++){
					index = sensIndx*_sipmDatasize + samp;
					pmtdata[index] = (unsigned short int) (-1);
				}*/
			}
		}

		//Create memspace for one PMT row
		const hsize_t ndims = 3;
		hsize_t dims[ndims] = {1, NPMT, _pmtDatasize};
		memspace = H5Screate_simple(ndims, dims, NULL);

		//Extend PMT dataset
		dims[0] = _ievt+1;
		dims[1] = NPMT;
		dims[2] = _pmtDatasize;
		H5Dset_extent(_pmtrd, dims);

		//Write PMT waveforms
		file_space = H5Dget_space(_pmtrd);
		hsize_t startPmt[3] = {_ievt, 0, 0};
		hsize_t countPmt[3] = {1,NPMT,_pmtDatasize};
		H5Sselect_hyperslab(file_space, H5S_SELECT_SET, startPmt, NULL, countPmt, NULL);
		H5Dwrite(_pmtrd, H5T_NATIVE_USHORT, memspace, file_space, H5P_DEFAULT, pmtdata);
		H5Sclose(file_space);


		//Write BLR channels (if they exists)
		//Read waveforms always in the same order
		if(_blrOn){
			for(unsigned int sensIndx=0; sensIndx<NPMT; sensIndx++){
				if(_activePmtsBlr[sensIndx]){
					const gate::Waveform& wf =  hitsPmtBlr[sensIndx]->GetWaveform();
					const std::vector<std::pair<unsigned int,float> >& d = wf.GetData();

					for (unsigned int samp = 0; samp<d.size(); samp++){
						//indexBlr = sensIndx*_pmtDatasize + samp;
						pmtdata[indexBlr] = (unsigned short int) (d[samp].second);
						indexBlr++;
					}
				/*}else{
					for (unsigned int samp = 0; samp<_pmtDatasize; samp++){
						indexBlr = sensIndx*_sipmDatasize + samp;
						pmtdata[indexBlr] = (unsigned short int) (-1);
					}*/
				}
			}

			//Create memspace for one PMT row
			dims[0] = 1;
			dims[1] = NPMT;
			dims[2] = _pmtDatasize;
			memspace = H5Screate_simple(ndims, dims, NULL);

			//Extend PMT dataset
			dims[0] = _ievt+1;
			dims[1] = NPMT;
			dims[2] = _pmtDatasize;
			H5Dset_extent(_pmtblr, dims);

			//Write PMT waveforms
			file_space = H5Dget_space(_pmtblr);
			H5Sselect_hyperslab(file_space, H5S_SELECT_SET, startPmt, NULL, countPmt, NULL);
			H5Dwrite(_pmtblr, H5T_NATIVE_USHORT, memspace, file_space, H5P_DEFAULT, pmtdata);
			H5Sclose(file_space);
		}

		delete pmtdata;
	}

	//Read SiPM waveforms
	if (_sipmDatasize){
		unsigned short int *sipmdata = new unsigned short int[GetMaxNumSipm()*_sipmDatasize];
		int index=0;

		//Sensors can have any order in any event
		const std::vector<gate::Hit*>& hitsSipmUnsorted = evt.GetHits(gate::SIPM);
		typedef std::vector<gate::Hit*>::const_iterator ih;

		//Sort them
		memset(_activeSipms,0,_maxNumSipm*sizeof(bool));
		gate::Hit* hitsSipm[GetMaxNumSipm()];
		int sensorID;
		for(ih i=hitsSipmUnsorted.begin(); i !=hitsSipmUnsorted.end(); ++i){
			sensorID = SipmIDtoPosition((*i)->GetSensorID());
			_activeSipms[sensorID] = true;
			hitsSipm[sensorID] = *i;
		}

		//Read waveforms always in the same order
		for(unsigned int sensIndx=0; sensIndx<GetMaxNumSipm(); sensIndx++){
			if(_activeSipms[sensIndx]){
				const gate::Waveform& wf =  hitsSipm[sensIndx]->GetWaveform();
				const std::vector<std::pair<unsigned int,float> >& d = wf.GetData();

				for (unsigned int samp = 0; samp<d.size(); samp++){
					index = sensIndx*_sipmDatasize + samp;
					sipmdata[index] = (unsigned short int) (d[samp].second);
				}
			}else{
				for (unsigned int samp = 0; samp<_sipmDatasize; samp++){
					index = sensIndx*_sipmDatasize + samp;
					sipmdata[index] = (unsigned short int) (-1);
				}
			}
		}


		//Create memspace for one SIPM row
		const hsize_t ndims = 3;
		hsize_t dims[ndims] = {1, GetMaxNumSipm(), _sipmDatasize};
		memspace = H5Screate_simple(ndims, dims, NULL);

		//Extend SIPM dataset
		dims[0] = _ievt+1;
		dims[1] = GetMaxNumSipm();
		dims[2] = _sipmDatasize;
		H5Dset_extent(_sipmrd, dims);

		//Write SIPM waveforms
		file_space = H5Dget_space(_sipmrd);
		hsize_t startSipm[3] = {_ievt, 0, 0};
		hsize_t countSipm[3] = {1,GetMaxNumSipm(),_sipmDatasize};
		H5Sselect_hyperslab(file_space, H5S_SELECT_SET, startSipm, NULL, countSipm, NULL);
		H5Dwrite(_sipmrd, H5T_NATIVE_USHORT, memspace, file_space, H5P_DEFAULT, sipmdata);
		H5Sclose(file_space);

		delete sipmdata;
	}


	//MC tracks
	//Get mc tracks
	for(int unsigned i=0; i<evt.GetMCTracks().size(); i++){
		gate::MCTrack* trk = evt.GetMCTracks()[i];
		gate::MCParticle pt = trk->GetParticle();
		for(int unsigned j=0; j< trk->GetHits().size(); j++){
			mctrk_t mctrk;

			gate::BHit* hit = evt.GetMCTracks()[i]->GetHits()[j];

			mctrk.event_indx = _ievt;
			mctrk.mctrk_indx = i;
			mctrk.energy = trk->GetEnergy();
			mctrk.hit_energy = hit->GetAmplitude();
			mctrk.hit_time = hit->GetTime();
			mctrk.hit_indx = j;
			mctrk.nof_hits = trk->GetHits().size();
			mctrk.pdg_code = pt.GetPDG();
			//mctrk.particle_name = pt.GetLabel().c_str();
			strncpy(mctrk.particle_name,pt.GetLabel().c_str(),10);

			mctrk.initial_vertex[0] = pt.GetInitialVtx().x();
			mctrk.initial_vertex[1] = pt.GetInitialVtx().y();
			mctrk.initial_vertex[2] = pt.GetInitialVtx().z();

			mctrk.final_vertex[0] = pt.GetFinalVtx().x();
			mctrk.final_vertex[1] = pt.GetFinalVtx().y();
			mctrk.final_vertex[2] = pt.GetFinalVtx().z();

			mctrk.momentum[0] = pt.GetInitialMom().x();
			mctrk.momentum[1] = pt.GetInitialMom().y();
			mctrk.momentum[2] = pt.GetInitialMom().z();

			mctrk.hit_position[0] = hit->GetPosition().x();
			mctrk.hit_position[1] = hit->GetPosition().y();
			mctrk.hit_position[2] = hit->GetPosition().z();

			//Create memspace for one MCTrack row
			const hsize_t ndimsMC = 1;
			hsize_t dimsMC[ndimsMC] = {1};
			memspace = H5Screate_simple(ndimsMC, dimsMC, NULL);

			//Extend MCTrack dataset
			dimsMC[0] = _mctrkCount+1;
			H5Dset_extent(_mctrks, dimsMC);

			//Write MCTrack waveforms
			file_space = H5Dget_space(_mctrks);
			hsize_t startMC[1] = {_mctrkCount};
			hsize_t countMC[1] = {1};
			H5Sselect_hyperslab(file_space, H5S_SELECT_SET, startMC, NULL, countMC, NULL);
			H5Dwrite(_mctrks, _memtypeMC, memspace, file_space, H5P_DEFAULT, &mctrk);
//			H5Dwrite (dset, memtype, H5S_ALL, H5S_ALL, H5P_DEFAULT, &gm);
			H5Sclose(file_space);


			_mctrkCount++;
		}
	}


	_ievt++;
}

void gate::HDF5Writer::WriteRunInfo(Run& runInfo){
	hid_t space, dset, memtype;

	sensor_t pmts[GetMaxNumPmt()];
	sensor_t sipms[GetMaxNumSipm()];
	hsize_t lastPMT=0, lastSiPM=0;//indexes

	if (runInfo.GetGeometry() != NULL){
		std::map<int, gate::Sensor*> sensors = runInfo.GetGeometry()->GetSensors();

		//Get active PMTs info
		for(unsigned int i=0; i<GetMaxNumPmt(); i++) {
			if(_activePmts[i]){
				gate::Sensor* s = sensors[i];
				pmts[lastPMT].channel = s->GetElecID();
				pmts[lastPMT].sensorID = s->GetSensorID();
				//pmts[lastPMT].active = _activePmts[s->GetID()];
				if (GetDataType() == gate::MC){
					pmts[lastPMT].coeff = 0.0;
				}else{
					if(s->find_dstore("deconvFactor")){
						pmts[lastPMT].coeff = s->fetch_dstore("deconvFactor");
					}else{
						pmts[lastPMT].coeff = _deconv[s->GetID()];
					}
				}
				pmts[lastPMT].adc_to_pes = s->GetGain();
				pmts[lastPMT].noise_rms = s->GetBaselineSig();
				pmts[lastPMT].position[0] = s->GetPosition().x();
				pmts[lastPMT].position[1] = s->GetPosition().y();
				pmts[lastPMT].position[2] = s->GetPosition().z();
				lastPMT++;
			}
		}

		//Get active SiPMs info
		for(unsigned int i=0; i<GetMaxNumSipm(); i++) {
			//if(_activeSipms[i]){
				int sID = PositiontoSipmID(i);
				gate::Sensor* s = sensors[sID];
				if (sID == 14010 || sID == 15047 || sID == 25049){
					sipms[lastSiPM].channel = sID;
					sipms[lastSiPM].sensorID = sID;
					//sipms[lastSiPM].active = _activeSipms[i];
					sipms[lastSiPM].coeff = 1;
					sipms[lastSiPM].adc_to_pes = 0;
					sipms[lastSiPM].noise_rms = 0.0;
					if (sID==14010){
						sipms[lastSiPM].position[0] = -65.0;
						sipms[lastSiPM].position[1] = -215.0;
					}
					if (sID==15047){
						sipms[lastSiPM].position[0] = 55.0;
						sipms[lastSiPM].position[1] = 235.0;
					}
					if (sID==25049){
						sipms[lastSiPM].position[0] = 145.0;
						sipms[lastSiPM].position[1] = -185.0;
					}
					sipms[lastSiPM].position[2] = -10000.0;
				}
				else{
					sipms[lastSiPM].channel = s->GetElecID();
					sipms[lastSiPM].sensorID = s->GetSensorID();
					//sipms[lastSiPM].active = _activeSipms[i];
					sipms[lastSiPM].coeff = 1;
					sipms[lastSiPM].adc_to_pes = s->GetGain();
					sipms[lastSiPM].noise_rms = 0.0;
					sipms[lastSiPM].position[0] = s->GetPosition().x();
					sipms[lastSiPM].position[1] = s->GetPosition().y();
					sipms[lastSiPM].position[2] = s->GetPosition().z();
				}
				lastSiPM++;
				//}
		}

		//Create group for sensors
		hid_t sensorsG = H5Gcreate2(_file, "/Sensors", H5P_DEFAULT, H5P_DEFAULT, H5P_DEFAULT);
		//Create datatype for position
		hsize_t point_dim[1] = {3};
		hid_t point = H5Tarray_create(H5T_NATIVE_FLOAT, 1, point_dim);
		//Create compound datatype for the table
		memtype = H5Tcreate (H5T_COMPOUND, sizeof (sensor_t));
		H5Tinsert (memtype, "channel",HOFFSET (sensor_t, channel), H5T_NATIVE_INT);
		H5Tinsert (memtype, "sensorID",HOFFSET (sensor_t, sensorID), H5T_NATIVE_INT);
		//H5Tinsert (memtype, "active",HOFFSET (sensor_t, active),H5T_NATIVE_INT);
		H5Tinsert (memtype, "position",HOFFSET (sensor_t, position),point);
		H5Tinsert (memtype, "coeff",HOFFSET (sensor_t, coeff), H5T_NATIVE_DOUBLE);
		H5Tinsert (memtype, "adc_to_pes",HOFFSET (sensor_t, adc_to_pes), H5T_NATIVE_FLOAT);
		H5Tinsert (memtype, "noise_rms",HOFFSET (sensor_t, noise_rms), H5T_NATIVE_FLOAT);

		//dataspace for PMTs
		hsize_t dimsPMTs[1] = {lastPMT};
		space = H5Screate_simple (1, dimsPMTs , NULL);
		//dataset for PMTs
		dset = H5Dcreate(sensorsG, "DataPMT", memtype, space, H5P_DEFAULT, H5P_DEFAULT,H5P_DEFAULT);
		H5Dwrite (dset, memtype, H5S_ALL, H5S_ALL, H5P_DEFAULT, pmts);
		//dataset for PMTs BLR
		dset = H5Dcreate(sensorsG, "DataBLR", memtype, space, H5P_DEFAULT, H5P_DEFAULT,H5P_DEFAULT);
		H5Dwrite (dset, memtype, H5S_ALL, H5S_ALL, H5P_DEFAULT, pmts);
		H5Sclose (space);

		//dataspace for SiPMs
		hsize_t dimsSiPMs[1] = {lastSiPM};
		space = H5Screate_simple (1, dimsSiPMs , NULL);
		//dataset for SiPMs
		dset = H5Dcreate(sensorsG, "DataSiPM", memtype, space, H5P_DEFAULT, H5P_DEFAULT,H5P_DEFAULT);
		H5Dwrite (dset, memtype, H5S_ALL, H5S_ALL, H5P_DEFAULT, sipms);
		H5Sclose (space);


		//Get geometry
		geometry_t gm;
		gm.x[0] = runInfo.GetGeometry()->GetXmin();
		gm.x[1] = runInfo.GetGeometry()->GetXmax();
		gm.y[0] = runInfo.GetGeometry()->GetYmin();
		gm.y[1] = runInfo.GetGeometry()->GetYmax();
		gm.z[0] = runInfo.GetGeometry()->GetZmin();
		gm.z[1] = runInfo.GetGeometry()->GetZmax();
		gm.r = runInfo.GetGeometry()->GetRmax();

		//Group for geometry
		hid_t detectorG = H5Gcreate2(_file, "/Detector", H5P_DEFAULT, H5P_DEFAULT, H5P_DEFAULT);
		//Create datatype for geometry
		hsize_t coordMinMax_dim[1] = {2};
		hid_t coordMinMax = H5Tarray_create(H5T_NATIVE_FLOAT, 1, coordMinMax_dim);
		//Create compound datatype for the table
		memtype = H5Tcreate (H5T_COMPOUND, sizeof (geometry_t));
		H5Tinsert (memtype, "x_det",HOFFSET (geometry_t, x),coordMinMax);
		H5Tinsert (memtype, "y_det",HOFFSET (geometry_t, y),coordMinMax);
		H5Tinsert (memtype, "z_det",HOFFSET (geometry_t, z),coordMinMax);
		H5Tinsert (memtype, "r_det",HOFFSET (geometry_t, r), H5T_NATIVE_FLOAT);
		//dataspace for geometry
		hsize_t dimsGeometry[1] = {1};
		space = H5Screate_simple (1, dimsGeometry, NULL);
		//dataset for geometry
		dset = H5Dcreate(detectorG, "DetectorGeometry", memtype, space, H5P_DEFAULT, H5P_DEFAULT,H5P_DEFAULT);
		H5Dwrite (dset, memtype, H5S_ALL, H5S_ALL, H5P_DEFAULT, &gm);
		H5Sclose (space);
	}
}

int gate::HDF5Writer::SipmIDtoPosition(int id){
	int position = ((id/1000)-1)*64 + id%1000;
	return position;
}

int gate::HDF5Writer::PositiontoSipmID(int pos){
	int sipmid = (pos/64+1)*1000 + pos%64;
	return sipmid;
}


#else

void gate::HDF5Writer::Write(Event& evt){}
void gate::HDF5Writer::Close(){}
void gate::HDF5Writer::Open(std::string fileName, std::string option){}   
void gate::HDF5Writer::WriteRunInfo(Run& runInfo){}

#endif


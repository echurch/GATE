#ifdef HDF5
//#include <H5Cpp.h>
#include <hdf5.h>
#endif

#include <HDF5Writer.h>
#include <sstream>

#define NPMT 12
#define NSIPM 1792

typedef struct{
	int channel;
	int active;
	double position[3];
	double gain;
	double adc_to_pes;
} sensor_t;

typedef struct{
	double x[2];
	double y[2];
	double z[2];
	double r;
} geometry_t;

typedef struct{
	int event_indx;
	int mctrk_indx;
	//const char *particle_name;
	char particle_name[10];
	int pdg_code;
	double initial_vertex[3];
	double final_vertex[3];
	double momentum[3];
	double energy;
	int nof_hits;
	int hit_indx;
	double hit_position[3];
	double hit_time;
	double hit_energy;
} mctrk_t;

ClassImp(gate::HDF5Writer)

gate::HDF5Writer::HDF5Writer() :   IWriter(), 
  
  _file(0), _pmtrd(0), _evt(0), _run(0), _ievt(0), _pmtDatasize(0), _sipmDatasize(0) {

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
		_firstEvent = false;


		const hsize_t ndims = 3;
		hid_t file_space;

		//PMTs
		//Check PMT exists and get WF length
		if(evt.GetHits(gate::PMT).size() > 0){
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
			//  hsize_t chunk_dims[ndims] = {1,NPMT,_pmtDatasize};
			hsize_t chunk_dims[ndims] = {1,1,32768};
			if(_pmtDatasize < 32768){
				chunk_dims[2] = _pmtDatasize;
			}
			H5Pset_chunk(plistPmt, ndims, chunk_dims);

			//Set compression
			H5Pset_deflate (plistPmt, 1); 

			// Create the dataset 'pmtrd1'
			if(_pmtDatasize < 48000){
				_pmtrd = H5Dcreate(_file, "pmtcwf", H5T_NATIVE_INT, file_space, H5P_DEFAULT, plistPmt, H5P_DEFAULT);
			}else{
				_pmtrd = H5Dcreate(_file, "pmtrd", H5T_NATIVE_INT, file_space, H5P_DEFAULT, plistPmt, H5P_DEFAULT);
			}

			//Close resources
			H5Pclose(plistPmt);
		}


		//SIPM
		//Check SIPM exists and get WF length
		if(evt.GetHits(gate::SIPM).size() > 0){
			//Get WF length
			_sipmDatasize = evt.GetHits(gate::SIPM)[0]->GetWaveform().GetData().size();

			//Create 3D dataspace (evt,sipm,data). First dimension is unlimited (initially 0)
			hsize_t dimsSipm[ndims] = {0, NSIPM, _sipmDatasize};
			hsize_t max_dimsSipm[ndims] = {H5S_UNLIMITED,NSIPM,_sipmDatasize};
			file_space = H5Screate_simple(ndims, dimsSipm, max_dimsSipm);

			// Create a dataset creation property list
			// The layout of the dataset have to be chunked when using unlimited dimensions
			hid_t plistSipm = H5Pcreate(H5P_DATASET_CREATE);
			H5Pset_layout(plistSipm, H5D_CHUNKED);
			//  hsize_t chunk_dimsSipm[ndims] = {1,NSIPM,_sipmDatasize};
			hsize_t chunk_dimsSipm[ndims] = {1,50,_sipmDatasize};
			H5Pset_chunk(plistSipm, ndims, chunk_dimsSipm);

			//Set compression
			H5Pset_deflate (plistSipm, 1); 

			// Create the dataset 'pmtrd1'
			_sipmrd = H5Dcreate(_file, "sipmrd", H5T_NATIVE_INT, file_space, H5P_DEFAULT, plistSipm, H5P_DEFAULT);

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
			hid_t point = H5Tarray_create(H5T_NATIVE_DOUBLE, 1, point_dim);
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
			H5Tinsert (_memtypeMC, "energy",HOFFSET (mctrk_t, energy), H5T_NATIVE_DOUBLE);
			H5Tinsert (_memtypeMC, "nof_hits",HOFFSET (mctrk_t, nof_hits), H5T_NATIVE_INT);
			H5Tinsert (_memtypeMC, "hit_indx",HOFFSET (mctrk_t, hit_indx), H5T_NATIVE_INT);
			H5Tinsert (_memtypeMC, "hit_position",HOFFSET (mctrk_t, hit_position), point);
			H5Tinsert (_memtypeMC, "hit_time",HOFFSET (mctrk_t, hit_time), H5T_NATIVE_DOUBLE);
			H5Tinsert (_memtypeMC, "hit_energy",HOFFSET (mctrk_t, hit_energy), H5T_NATIVE_DOUBLE);

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
		int *pmtdata = new int[NPMT*_pmtDatasize];
		int index=0;

		const std::vector<gate::Hit*>& hitsPmt = evt.GetHits(gate::PMT);
		typedef std::vector<gate::Hit*>::const_iterator ih;

		for(ih i=hitsPmt.begin(); i !=hitsPmt.end(); ++i){
			const gate::Waveform& wf =  (*i)->GetWaveform();
			const std::vector<std::pair<unsigned int,unsigned int> >& d = wf.GetData();
			for (unsigned int samp = 0; samp<d.size(); samp++){
				//TODO Check order of sensors
				pmtdata[index] = d[samp].second;
				index++;
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
		H5Dwrite(_pmtrd, H5T_NATIVE_INT, memspace, file_space, H5P_DEFAULT, pmtdata);
		H5Sclose(file_space);

		delete pmtdata;
	}

	//Read SiPM waveforms
	if (_sipmDatasize){
		int *sipmdata = new int[NSIPM*_sipmDatasize];
		int index=0;

		const std::vector<gate::Hit*>& hitsSipm = evt.GetHits(gate::SIPM);
		typedef std::vector<gate::Hit*>::const_iterator ih;

		for(ih i=hitsSipm.begin(); i !=hitsSipm.end(); ++i){
			const gate::Waveform& wf =  (*i)->GetWaveform();
			const std::vector<std::pair<unsigned int,unsigned int> >& d = wf.GetData();
			for (unsigned int samp = 0; samp<d.size(); samp++){
				//TODO Check order of sensors
				sipmdata[index] = d[samp].second;
				index++;
			}
		}

		//Create memspace for one SIPM row
		const hsize_t ndims = 3;
		hsize_t dims[ndims] = {1, NSIPM, _sipmDatasize};
		memspace = H5Screate_simple(ndims, dims, NULL);

		//Extend SIPM dataset
		dims[0] = _ievt+1;
		dims[1] = NSIPM;
		dims[2] = _sipmDatasize;
		H5Dset_extent(_sipmrd, dims);

		//Write SIPM waveforms
		file_space = H5Dget_space(_sipmrd);
		hsize_t startSipm[3] = {_ievt, 0, 0};
		hsize_t countSipm[3] = {1,NSIPM,_sipmDatasize}; 
		H5Sselect_hyperslab(file_space, H5S_SELECT_SET, startSipm, NULL, countSipm, NULL);
		H5Dwrite(_sipmrd, H5T_NATIVE_INT, memspace, file_space, H5P_DEFAULT, sipmdata);
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

	sensor_t pmts[12];
	sensor_t sipms[1792];
	hsize_t lastPMT=0, lastSiPM=0;//indexes

	if (runInfo.GetGeometry() != NULL){
		typedef std::map<int, gate::Sensor*>::iterator it_sensors;
		std::map<int, gate::Sensor*> sensors = runInfo.GetGeometry()->GetSensors();
		for(it_sensors is = sensors.begin(); is != sensors.end(); is++) {
			gate::Sensor* s = is->second;

			if(s->GetID() < 1000){
				pmts[lastPMT].channel = s->GetID();
				pmts[lastPMT].active = 1;
				pmts[lastPMT].gain = 4500000;
				pmts[lastPMT].adc_to_pes = 20;
				pmts[lastPMT].position[0] = s->GetPosition().x();
				pmts[lastPMT].position[1] = s->GetPosition().y();
				pmts[lastPMT].position[2] = s->GetPosition().z();
				lastPMT++;
			}else{
				sipms[lastSiPM].channel = s->GetID();
				sipms[lastSiPM].active = 1;
				sipms[lastSiPM].gain = 1;
				sipms[lastSiPM].adc_to_pes = 1;
				sipms[lastSiPM].position[0] = s->GetPosition().x();
				sipms[lastSiPM].position[1] = s->GetPosition().y();
				sipms[lastSiPM].position[2] = s->GetPosition().z();
				lastSiPM++;
			}
		}

		//Create group for sensors
		hid_t sensorsG = H5Gcreate2(_file, "/Sensors", H5P_DEFAULT, H5P_DEFAULT, H5P_DEFAULT);
		//Create datatype for position
		hsize_t point_dim[1] = {3};
		hid_t point = H5Tarray_create(H5T_NATIVE_DOUBLE, 1, point_dim);
		//Create compound datatype for the table
		memtype = H5Tcreate (H5T_COMPOUND, sizeof (sensor_t));
		H5Tinsert (memtype, "channel",HOFFSET (sensor_t, channel), H5T_NATIVE_INT);
		H5Tinsert (memtype, "active",HOFFSET (sensor_t, active),H5T_NATIVE_INT);
		H5Tinsert (memtype, "position",HOFFSET (sensor_t, position),point);
		H5Tinsert (memtype, "gain",HOFFSET (sensor_t, gain), H5T_NATIVE_DOUBLE);
		H5Tinsert (memtype, "adc_to_pes",HOFFSET (sensor_t, adc_to_pes), H5T_NATIVE_DOUBLE);

		//dataspace for PMTs
		hsize_t dimsPMTs[1] = {lastPMT};
		space = H5Screate_simple (1, dimsPMTs , NULL);
		//dataset for PMTs
		dset = H5Dcreate(sensorsG, "DataPMT", memtype, space, H5P_DEFAULT, H5P_DEFAULT,H5P_DEFAULT);
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
		hid_t coordMinMax = H5Tarray_create(H5T_NATIVE_DOUBLE, 1, coordMinMax_dim);
		//Create compound datatype for the table
		memtype = H5Tcreate (H5T_COMPOUND, sizeof (geometry_t));
		H5Tinsert (memtype, "x_det",HOFFSET (geometry_t, x),coordMinMax);
		H5Tinsert (memtype, "y_det",HOFFSET (geometry_t, y),coordMinMax);
		H5Tinsert (memtype, "z_det",HOFFSET (geometry_t, z),coordMinMax);
		H5Tinsert (memtype, "r_det",HOFFSET (geometry_t, r), H5T_NATIVE_DOUBLE);
		//dataspace for geometry
		hsize_t dimsGeometry[1] = {1};
		space = H5Screate_simple (1, dimsGeometry, NULL);
		//dataset for geometry
		dset = H5Dcreate(detectorG, "DetectorGeometry", memtype, space, H5P_DEFAULT, H5P_DEFAULT,H5P_DEFAULT);
		H5Dwrite (dset, memtype, H5S_ALL, H5S_ALL, H5P_DEFAULT, &gm);
		H5Sclose (space);
	}
}

#else

void gate::HDF5Writer::Write(Event& evt){}
void gate::HDF5Writer::Close(){}
void gate::HDF5Writer::Open(std::string fileName, std::string option){}   
void gate::HDF5Writer::WriteRunInfo(Run& runInfo){}

#endif


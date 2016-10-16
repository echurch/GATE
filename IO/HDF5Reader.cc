#include <HDF5Reader.h>

#ifdef HDF5
#include <hdf5.h>
#endif

ClassImp(gate::HDF5Reader)

gate::HDF5Reader::HDF5Reader() : IReader() {
   
    _run = 0;

	_npmt = 0;
	_nsipm = 0;

	_evt = new gate::Event();

	_pmtTable = "pmtrd";
	_sipmTable = "sipmrd";

}


gate::HDF5Reader::~HDF5Reader(){
  
}

#ifdef HDF5

void gate::HDF5Reader::Open(std::string file){

	_h5file = H5Fopen (file.c_str(), H5F_ACC_RDONLY, H5P_DEFAULT);

	//Check if there is PMT data
    _hasPMT = H5Lexists(_h5file, _pmtTable.c_str(), H5P_DEFAULT);
	if(_hasPMT){
		_dsetPMT = H5Dopen (_h5file, _pmtTable.c_str(), H5P_DEFAULT);
		_dspacePMT = H5Dget_space(_dsetPMT);
		const int ndims = H5Sget_simple_extent_ndims(_dspacePMT);
		hsize_t dims[ndims];
		H5Sget_simple_extent_dims(_dspacePMT, dims, NULL);

		_nEvents = dims[0];
		_npmt = dims[1];
		_pmtwflen = dims[2];

		_pmtdata = (unsigned short int*) malloc(_npmt*_pmtwflen*sizeof(unsigned short int));
	}

	//Check if there is SiPM data
    _hasSIPM = H5Lexists(_h5file, _sipmTable.c_str(), H5P_DEFAULT);
	if(_hasSIPM){
		_dsetSIPM = H5Dopen (_h5file, _sipmTable.c_str(), H5P_DEFAULT);
		_dspaceSIPM = H5Dget_space(_dsetSIPM);
		const int ndims = H5Sget_simple_extent_ndims(_dspaceSIPM);
		hsize_t dims[ndims];
		H5Sget_simple_extent_dims(_dspaceSIPM, dims, NULL);

		_nEvents = dims[0];
		_nsipm = dims[1];
		_sipmwflen = dims[2];

		_sipmdata = (unsigned short int*) malloc(_nsipm*_sipmwflen*sizeof(unsigned short int));
	}

    if(H5Lexists(_h5file, "/Sensors/DataPMT", H5P_DEFAULT)){
		_dsetSensorsPMT = H5Dopen (_h5file, "/Sensors/DataPMT", H5P_DEFAULT);
		_dspaceSensorsPMT = H5Dget_space(_dsetSensorsPMT);
		const int ndims = H5Sget_simple_extent_ndims(_dspaceSensorsPMT);
		hsize_t dims[ndims];
		H5Sget_simple_extent_dims(_dspaceSensorsPMT, dims, NULL);

		_sensorsPMT = (sensor_t*) malloc(dims[0]*sizeof(sensor_t));

		//Create compound datatype for the table
		hsize_t point_dim[1] = {3};
		hid_t point = H5Tarray_create(H5T_NATIVE_FLOAT, 1, point_dim);
		size_t memtype = H5Tcreate (H5T_COMPOUND, sizeof (sensor_t));
		H5Tinsert (memtype, "channel",HOFFSET (sensor_t, channel), H5T_NATIVE_INT);
//		H5Tinsert (memtype, "active",HOFFSET (sensor_t, active),H5T_NATIVE_INT);
		H5Tinsert (memtype, "position",HOFFSET (sensor_t, position),point);
		H5Tinsert (memtype, "coeff",HOFFSET (sensor_t, coeff), H5T_NATIVE_DOUBLE);
		H5Tinsert (memtype, "adc_to_pes",HOFFSET (sensor_t, adc_to_pes), H5T_NATIVE_FLOAT);
		H5Tinsert (memtype, "noise_rms",HOFFSET (sensor_t, noise_rms), H5T_NATIVE_FLOAT);

		H5Dread (_dsetSensorsPMT, memtype, H5S_ALL, H5S_ALL, H5P_DEFAULT,_sensorsPMT);

	}

    if(H5Lexists(_h5file, "/Sensors/DataSiPM", H5P_DEFAULT)){
		_dsetSensorsSIPM = H5Dopen (_h5file, "/Sensors/DataSiPM", H5P_DEFAULT);
		_dspaceSensorsSIPM = H5Dget_space(_dsetSensorsSIPM);
		const int ndims = H5Sget_simple_extent_ndims(_dspaceSensorsSIPM);
		hsize_t dims[ndims];
		H5Sget_simple_extent_dims(_dspaceSensorsSIPM, dims, NULL);

		_sensorsSIPM = (sensor_t*) malloc(dims[0]*sizeof(sensor_t));

		//Create compound datatype for the table
		hsize_t point_dim[1] = {3};
		hid_t point = H5Tarray_create(H5T_NATIVE_FLOAT, 1, point_dim);
		size_t memtype = H5Tcreate (H5T_COMPOUND, sizeof (sensor_t));
		H5Tinsert (memtype, "channel",HOFFSET (sensor_t, channel), H5T_NATIVE_INT);
//		H5Tinsert (memtype, "active",HOFFSET (sensor_t, active),H5T_NATIVE_INT);
		H5Tinsert (memtype, "position",HOFFSET (sensor_t, position),point);
		H5Tinsert (memtype, "coeff",HOFFSET (sensor_t, coeff), H5T_NATIVE_DOUBLE);
		H5Tinsert (memtype, "adc_to_pes",HOFFSET (sensor_t, adc_to_pes), H5T_NATIVE_FLOAT);
		H5Tinsert (memtype, "noise_rms",HOFFSET (sensor_t, noise_rms), H5T_NATIVE_FLOAT);

		H5Dread (_dsetSensorsSIPM, memtype, H5S_ALL, H5S_ALL, H5P_DEFAULT,_sensorsSIPM);

	}

	_isOpen = true;
}

void gate::HDF5Reader::Print(){
    
    //! TO BE IMPLEMENTED
  
}

void gate::HDF5Reader::Close(){

	if(_hasPMT){
		H5Dclose (_dsetPMT);
		H5Sclose (_dspacePMT);
		free(_pmtdata);
	}
	if(_hasSIPM){
		H5Dclose (_dsetSIPM);
		H5Sclose (_dspaceSIPM);
		free(_sipmdata);
	}
    H5Fclose (_h5file);

	_isOpen = false;
}


gate::Run& gate::HDF5Reader::GetRunInfo(size_t i){
    
    //! TO BE IMPLEMENTED

  return *_run;
  
}

gate::Event& gate::HDF5Reader::Read(size_t i){

	hsize_t start[3], count[3], stride[3] = {1,1,1}, block[3] = {1,1,1};

	//Check if there is PMT data
    _hasPMT = H5Lexists(_h5file, _pmtTable.c_str(), H5P_DEFAULT);
	if(_hasPMT){
		//Set hyperslab
		start[0] = i;
		start[1] = 0; 
		start[2] = 0;

		count[0] = 1;
		count[1] = _npmt;
		count[2] = _pmtwflen;

		//Create memspace for copying data into ram
		hsize_t memspace = H5Screate_simple(3,count,NULL);

		H5Sselect_hyperslab (_dspacePMT, H5S_SELECT_SET, start, stride, count, block);
		H5Dread (_dsetPMT, H5T_NATIVE_USHORT, memspace, _dspacePMT, H5P_DEFAULT,_pmtdata);
	}

	//Check if there is SiPM data
    _hasSIPM = H5Lexists(_h5file, _sipmTable.c_str(), H5P_DEFAULT);
	if(_hasSIPM){
		//Set hyperslab
		start[0] = i;
		start[1] = 0; 
		start[2] = 0;

		count[0] = 1;
		count[1] = _nsipm;
		count[2] = _sipmwflen;

		//Create memspace for copying data into ram
		hsize_t memspace = H5Screate_simple(3,count,NULL);

		H5Sselect_hyperslab (_dspaceSIPM, H5S_SELECT_SET, start, stride, count, block);
		H5Dread (_dsetSIPM, H5T_NATIVE_USHORT, memspace, _dspaceSIPM, H5P_DEFAULT,_sipmdata);
	}

	_evt->Clear();
	_evt->SetEventID(i);

	for(int idxPmt=0;idxPmt<_npmt;idxPmt++){
		gate::Hit* hit = new gate::Hit();
		int channel = _sensorsPMT[idxPmt].channel;

		hit->SetPosition(gate::Point3D(_sensorsPMT[idxPmt].position[0],_sensorsPMT[idxPmt].position[1]));

		hit->SetSensorID(channel);
		hit->SetSensorType(gate::PMT);
		gate::Waveform* wf = new gate::Waveform();
		wf->SetSensorID(channel);

		std::vector<std::pair<unsigned int, float> > data;

		unsigned int sindex = 0; 

		for(int j=0; j<_pmtwflen; j++){
			int offset = idxPmt*_pmtwflen + j;
			data.push_back(std::make_pair(sindex, (float) *(_pmtdata+offset )));
			sindex++;
		}

		wf->SetData(data);
		//TODO: Read from file
		if( GetPmtTable().compare("pmtrd") == 0 ){
			wf->SetSampWidth(0.001);
		}else{
			wf->SetSampWidth(0.025);
		}

		hit->SetWaveform(wf);
		_evt->AddHit(gate::PMT, hit);
	}

	for(int idxSipm=0;idxSipm<_nsipm;idxSipm++){
		gate::Hit* hit = new gate::Hit();
		int channel = _sensorsSIPM[idxSipm].channel;

		hit->SetPosition(gate::Point3D(_sensorsSIPM[idxSipm].position[0],_sensorsSIPM[idxSipm].position[1]));

		hit->SetSensorID(channel);
		hit->SetSensorType(gate::SIPM);
		gate::Waveform* wf = new gate::Waveform();
		wf->SetSensorID(channel);

		std::vector<std::pair<unsigned int, float> > data;

		unsigned int sindex = 0; 
		for(int j=0; j<_sipmwflen; j++){
			int offset = idxSipm*_sipmwflen + j;
			data.push_back(std::make_pair(sindex, (float) *(_sipmdata+offset )));
			sindex++;
		}

		wf->SetData(data);
		//TODO: Read from file
		wf->SetSampWidth(1);

		hit->SetWaveform(wf);
		_evt->AddHit(gate::SIPM, hit);
	}

	return *_evt;

}

unsigned int gate::HDF5Reader::GetNEvents() const{
	return _nEvents;
}

bool gate::HDF5Reader::eof(size_t i){
	return i >_nEvents;
}

#else

bool gate::HDF5Reader::eof(size_t i){return true;}
void gate::HDF5Reader::Open(std::string file){}
void gate::HDF5Reader::Close(){}
unsigned int gate::HDF5Reader::GetNEvents() const{return 0;}
void gate::HDF5Reader::Print(){}
gate::Run& gate::HDF5Reader::GetRunInfo(size_t i){return *_run;}
gate::Event& gate::HDF5Reader::Read(size_t i){ return *_evt;}

#endif

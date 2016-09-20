#include<HDF5Reader.h>

#ifdef HDF5
#include <hdf5.h>
#endif

ClassImp(gate::HDF5Reader)

gate::HDF5Reader::HDF5Reader() : IReader() {
   
    _evt = 0;
    
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

	_evtIndex = 0;

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

		_pmtdata = (float*) malloc(dims[0]*dims[1]*dims[2]*sizeof(float));
		H5Dread (_dsetPMT, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,_pmtdata);
	}

	//Check if there is PMT data
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

		_sipmdata = (float*) malloc(dims[0]*dims[1]*dims[2]*sizeof(float));
		H5Dread (_dsetSIPM, H5T_NATIVE_FLOAT, H5S_ALL, H5S_ALL, H5P_DEFAULT,_sipmdata);
		
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
		hid_t point = H5Tarray_create(H5T_NATIVE_DOUBLE, 1, point_dim);
		size_t memtype = H5Tcreate (H5T_COMPOUND, sizeof (sensor_t));
		H5Tinsert (memtype, "channel",HOFFSET (sensor_t, channel), H5T_NATIVE_INT);
		H5Tinsert (memtype, "active",HOFFSET (sensor_t, active),H5T_NATIVE_INT);
		H5Tinsert (memtype, "position",HOFFSET (sensor_t, position),point);
		H5Tinsert (memtype, "gain",HOFFSET (sensor_t, gain), H5T_NATIVE_DOUBLE);
		H5Tinsert (memtype, "adc_to_pes",HOFFSET (sensor_t, adc_to_pes), H5T_NATIVE_DOUBLE);

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
	}
	if(_hasSIPM){
		H5Dclose (_dsetSIPM);
		H5Sclose (_dspaceSIPM);
	}
    H5Fclose (_h5file);


	_isOpen = false;
}


gate::Run& gate::HDF5Reader::GetRunInfo(size_t i){
    
    //! TO BE IMPLEMENTED

  return *_run;
  
}

gate::Event& gate::HDF5Reader::Read(size_t i){
     
   //! TO BE IMPLEMENTED
  

	_evt->Clear();
	_evt->SetEventID(_evtIndex);


	for(int i=0;i<_npmt;i++){
		gate::Hit* hit = new gate::Hit();
		hit->SetSensorID(i);
		hit->SetSensorType(gate::PMT);
		gate::Waveform* wf = new gate::Waveform();
		wf->SetSensorID(i);

		//TODO: signed & real
		std::vector<std::pair<unsigned int, float> > data;

		unsigned int sindex = 0; 

		for(int j=0; j<_pmtwflen; j++){
			int offset = _evtIndex*_npmt*_pmtwflen + i*_pmtwflen + j;
			data.push_back(std::make_pair(sindex, *(_pmtdata+offset )));
			sindex++;
		}


		wf->SetData(data);
		wf->SetSampWidth(0.025);

		hit->SetWaveform(wf);
		_evt->AddHit(gate::PMT, hit);
	}

	for(int i=0;i<_nsipm;i++){
		gate::Hit* hit = new gate::Hit();
		int channel = _sensorsSIPM[i].channel;

		hit->SetPosition(gate::Point3D(_sensorsSIPM[i].position[0],_sensorsSIPM[i].position[1]));

		hit->SetSensorID(channel);
		hit->SetSensorType(gate::SIPM);
		gate::Waveform* wf = new gate::Waveform();
		wf->SetSensorID(channel);

		std::vector<std::pair<unsigned int, float> > data;

		unsigned int sindex = 0; 
		for(int j=0; j<_sipmwflen; j++){
			int offset = _evtIndex*_nsipm*_sipmwflen + i*_sipmwflen + j;
			data.push_back(std::make_pair(sindex, *(_sipmdata+offset )));
			sindex++;
		}

		wf->SetData(data);
		wf->SetSampWidth(1);

		hit->SetWaveform(wf);
		_evt->AddHit(gate::SIPM, hit);
	}

	_evtIndex++;
	return *_evt;

}

unsigned int gate::HDF5Reader::GetNEvents() const{
	return _nEvents;
}

bool gate::HDF5Reader::eof(size_t i){
	return _evtIndex >= _nEvents;
}

#else

void gate::HDF5Reader::Open(std::string file){}
void gate::HDF5Reader::Close(){}
unsigned int gate::HDF5Reader::GetNEvents() const{return 0;}
void gate::HDF5Reader::Print(){}
gate::Run& gate::HDF5Reader::GetRunInfo(size_t i){return *_run;}
gate::Event& gate::HDF5Reader::Read(size_t i){ return *_evt;}

#endif

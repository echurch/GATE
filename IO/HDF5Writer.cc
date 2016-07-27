#ifdef HDF5
#include <H5Cpp.h>
#endif

#include <HDF5Writer.h>
#include <sstream>

ClassImp(gate::HDF5Writer)

gate::HDF5Writer::HDF5Writer() :   IWriter(), 
  
  _file(0), _evt(0), _run(0), _ievt(0) {

}
  

gate::HDF5Writer::~HDF5Writer(){

}


#ifdef HDF5

void gate::HDF5Writer::Open(std::string fileName, std::string option){
      
  _file =  H5Fcreate( fileName.c_str(), H5F_ACC_TRUNC,

  		      H5P_DEFAULT, H5P_DEFAULT ); 
  _isOpen=true; 
}


void gate::HDF5Writer::Close(){
     
  _isOpen=false;

  H5Fclose(_file);
}  
 
void gate::HDF5Writer::Write(Event& evt){
    
  std::stringstream ss; // aovid assuming c++11 (std::to:string)
  ss << "Event" << _ievt;
  std::string gname = ss.str();
  
  hid_t id=H5Gcreate2(_file,gname.c_str(),H5P_DEFAULT,H5P_DEFAULT,H5P_DEFAULT);
  
  hid_t asid  = H5Screate(H5S_SCALAR);

  hid_t aid=H5Acreate2(id,"EventID",H5T_NATIVE_INT,asid,
		       H5P_DEFAULT,H5P_DEFAULT);
  int data[1] = {evt.GetEventID()}; 

  H5Awrite(aid, H5T_NATIVE_INT, data);

  H5Aclose(aid);
    
  const std::vector<gate::Hit*>& hits = evt.GetHits(gate::PMT);

  typedef std::vector<gate::Hit*>::const_iterator ih;
  
  for(ih i=hits.begin(); i !=hits.end(); ++i){

    const gate::Waveform& wf =  (*i)->GetWaveform();

    const std::vector<std::pair<unsigned int,unsigned int> >& d = wf.GetData();
    
    int amps[d.size()], times[d.size()];

    for (size_t samp = 0; samp<d.size(); samp++){
      
      amps[samp] = d[samp].second;

      times[samp] = d[samp].first;
    }

    //std::string sgname = gname+"/PMT"+std::to_string((*i)->GetSensorID());
    std::stringstream ss2; // aovid assuming c++11 (std::to:string)
    ss2 << gname<<"/PMT"<< (*i)->GetSensorID() ;
    std::string sgname = ss2.str();
    
    hid_t sid = H5Gcreate2(_file,sgname.c_str(),

    			   H5P_DEFAULT,H5P_DEFAULT,H5P_DEFAULT);

    hsize_t dim[1]; dim[0]=d.size();
    
    hid_t dataspace_id = H5Screate_simple(1, dim, NULL);

    std::string dsname = sgname+"/AMPLITUDES";
    
    hid_t dataset_id = H5Dcreate2(_file,dsname.c_str(),

    				  H5T_STD_I32BE, dataspace_id,

    				  H5P_DEFAULT, H5P_DEFAULT, H5P_DEFAULT);

    H5Dwrite(dataset_id, H5T_NATIVE_INT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
    	     amps);

    H5Sclose(dataspace_id); H5Dclose(dataset_id);
    
    dataspace_id = H5Screate_simple(1, dim, NULL);

    dsname = sgname+"/TIMES";
    
    dataset_id = H5Dcreate2(_file,dsname.c_str(),

			    H5T_STD_I32BE, dataspace_id,
			    
			    H5P_DEFAULT, H5P_DEFAULT, H5P_DEFAULT);

    H5Dwrite(dataset_id, H5T_NATIVE_INT, H5S_ALL, H5S_ALL, H5P_DEFAULT,
    	     times);
    
    H5Sclose(dataspace_id); H5Dclose(dataset_id);
    
    H5Gclose(sid);
  }    
  
  H5Gclose(id);

  _ievt++;
  
}

void gate::HDF5Writer::WriteRunInfo(Run& runInfo){}

#else

void gate::HDF5Writer::Write(Event& evt){}
void gate::HDF5Writer::Close(){}
void gate::HDF5Writer::Open(std::string fileName, std::string option){}   
void gate::HDF5Writer::WriteRunInfo(Run& runInfo){}
  
#endif
       

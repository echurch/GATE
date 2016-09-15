#include<HDF5Reader.h>

#ifdef HDF5
#include <hdf5.h>
#endif

ClassImp(gate::HDF5Reader)

gate::HDF5Reader::HDF5Reader() : IReader() {
   
    _evt = 0;
    
    _run = 0;

}


gate::HDF5Reader::~HDF5Reader(){
  
}

#ifdef HDF5

void gate::HDF5Reader::Open(std::string file){
  
    //! TO BE IMPLEMENTED

  _isOpen = true;

}

void gate::HDF5Reader::Print(){
    
    //! TO BE IMPLEMENTED
  
}


gate::Run& gate::HDF5Reader::GetRunInfo(size_t i){
    
    //! TO BE IMPLEMENTED

  return *_run;
  
}

gate::Event& gate::HDF5Reader::Read(size_t i){
     
   //! TO BE IMPLEMENTED
  
  return *_evt;

}

#else

void gate::HDF5Reader::Open(std::string file){}
void gate::HDF5Reader::Print(){}
gate::Run& gate::HDF5Reader::GetRunInfo(size_t i){return *_run;}
gate::Event& gate::HDF5Reader::Read(size_t i){ return *_evt;}

#endif

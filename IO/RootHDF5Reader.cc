#include<RootHDF5Reader.h>

ClassImp(gate::RootHDF5Reader)

gate::RootHDF5Reader::RootHDF5Reader() : IReader() {
  
      
    _evt = 0;
    
    _run = 0;
    
    _rreader = new gate::RootReader();

    _h5reader = new gate::HDF5Reader();

    _pmtTable = "pmtrd";

    _sipmTable = "sipmrd";
}


gate::RootHDF5Reader::~RootHDF5Reader(){

  delete _rreader; delete _h5reader;
  
}

void gate::RootHDF5Reader::Open(std::string file){
  
  
  _rreader->Open(file);
  
  _h5reader->Open(file+".h5"); 
  
  Assert(_rreader->GetNEvents()==_h5reader->GetNEvents(),__FILE__,__LINE__,
	 
	 bad_argument("Not the same events in ROOT and HDF5 files"));
  
  _evt = 0;
  
  _run = 0;
  
  _isOpen = true;

}

void gate::RootHDF5Reader::Print(){

  _rreader->Print();
  
  _h5reader->Print();
  
}


gate::Run& gate::RootHDF5Reader::GetRunInfo(size_t i){

  return _rreader->GetRunInfo();
  
}

gate::Event& gate::RootHDF5Reader::Read(size_t i){
   
  _evt = &_rreader->Read(i); 

  gate::Event* tmp =  &_h5reader->Read(i); 

  std::vector<gate::Hit*> rhits = _evt->GetHits();
  std::vector<gate::Hit*> hhits = tmp->GetHits(); 
  
  typedef std::vector<gate::Hit*>::iterator IH;
  for(IH i=rhits.begin(); i !=rhits.end(); ++i){
    //if ((*i)->GetSensorType()==gate::PMT && (*i)->GetLabel()=="BLR") continue;
    for(IH j=hhits.begin(); j !=hhits.end(); ++j){
      if ((*i)->GetSensorID()==(*j)->GetSensorID()){
	  (*i)->GetWaveform().SetData((*j)->GetWaveform().GetData());
	  hhits.erase(j);
	  break;}
    }
  }

  //for (size_t i=0; i<hhits.size(); i++){
  //  std::cout<<hhits[i]->GetSensorID()<<std::endl;
  //}
  return *_evt;

}




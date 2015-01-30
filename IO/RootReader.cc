#include<RootReader.h>

ClassImp(gate::RootReader)

gate::RootReader::RootReader() : IReader() {
  
    _evtTree = 0;
   
    _evt = 0;
    
    _tf = 0;

}


gate::RootReader::~RootReader(){
  
}

void gate::RootReader::Open(std::string file){
  
  if (_tf) delete _tf;

  _tf = new TFile(file.c_str());

  //if (!tf_->IsOpen()) exit(1);

  _evtTree = (TTree*)_tf->Get("EVENT");
  
  //runTree_ = (TTree*)tf_->Get("RUN");

  //dstTree_ = (TTree*)tf_->Get("DST");
  
  _evt = 0;

  //dst_ = 0;
  
  //run_ = 0;

  _evtTree->SetBranchAddress("event", &_evt);

  //dstTree_->SetBranchAddress("dst", &dst_);

  //runTree_->SetBranchAddress("run", &run_);

  //runInfo_ = (run*) tf_->Get("runInfo");  
  
  _isOpen = true;

}

void gate::RootReader::Print(){

  _evtTree->Print();

  //runTree_->Print();

  //dstTree_->Print();

}

// dst& RootReader::get_dst_info(size_t i){
  
//   dstTree_->GetEntry(i);

//   return *dst_;

// }


// run& RootReader::get_run_info(size_t i){
  
//   runTree_->GetEntry(i);

//   return *run_;

// }

gate::Event& gate::RootReader::Read(size_t i){
   
  _evtTree->GetEntry(i);

  return *_evt;

}




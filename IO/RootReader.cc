#include<RootReader.h>

ClassImp(gate::RootReader)

gate::RootReader::RootReader() : IReader() {
  
    _evtTree = 0;
   
    _evt = 0;
    
    _run = 0;
    
    _tf = 0;

}


gate::RootReader::~RootReader(){
  
}

void gate::RootReader::Open(std::string file){
  
  if (_tf) delete _tf;

  _tf = new TFile(file.c_str());

  // TODO: add protection for if _tf not created!!!

  _evtTree = (TTree*) _tf->Get("EVENT");
  
  _runTree = (TTree*) _tf->Get("RUN");
  
  _evt = 0;
  
  _run = 0;

  _evtTree->SetBranchAddress("event", &_evt);
  
  if (_runTree) _runTree->SetBranchAddress("run", &_run);
  
  _isOpen = true;

}

void gate::RootReader::Print(){

  _evtTree->Print();

  if (_runTree) _runTree->Print();

}


gate::Run& gate::RootReader::GetRunInfo(size_t i){
  
  if (_runTree) _runTree->GetEntry(i);

  return *_run;
  
}

gate::Event& gate::RootReader::Read(size_t i){
   
  _evtTree->GetEntry(i);

  return *_evt;

}




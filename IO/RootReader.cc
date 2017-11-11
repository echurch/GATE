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
  std::cout << "Here 0" << std::endl;
  _tf = new TFile(file.c_str());
  std::cout << "Here 1" << std::endl;
  
  Assert(_tf->IsOpen(),__FILE__,__LINE__,
	 
	 bad_argument("File not found, name: "+file));
  
  std::cout << "Here 2" << std::endl;
  _evtTree = (TTree*) _tf->Get("EVENT");
  std::cout << "Here 3" << std::endl;  
  _runTree = (TTree*) _tf->Get("RUN");
  std::cout << "Here 4" << std::endl;
  _evt = 0;
  
  _run = 0;

  _evtTree->SetBranchAddress("event", &_evt);
  std::cout << "Here 5" << std::endl;
  if (_runTree) _runTree->SetBranchAddress("run", &_run);
  std::cout << "Here 6" << std::endl;  

  _isOpen = true;

}

void gate::RootReader::Print(){

  _evtTree->Print();

  if (_runTree) _runTree->Print();

}


gate::Run& gate::RootReader::GetRunInfo(size_t i){

  if (_runTree){ 

    if (i<(size_t)_runTree->GetEntriesFast()) _runTree->GetEntry(i); 
    
    else _run = 0;
  }

  return *_run;
  
}

gate::Event& gate::RootReader::Read(size_t i){
   
  _evtTree->GetEntry(i);

  return *_evt;

}




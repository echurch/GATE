#include <RootWriter.h>

ClassImp(gate::RootWriter)

gate::RootWriter::RootWriter() :   IWriter(), 
  
  _tf(0) , _evtTree(0), _runTree(0),_evt(0), _run(0) {

}
  
void  gate::RootWriter::buildTree(){
  
    _evt = 0;
    
    _evtTree= new TTree("EVENT","GATE event tree");
    
    TTree::SetBranchStyle(1);
    
    _evtTree->Branch("event","gate::Event",&_evt,32000,0);
    
    // TOFIX: Potential memory leak!!!!!!
    // cannot modify or delete tree, don't know reason
   
  }

void  gate::RootWriter::buildRunTree(){
  
  _run = 0;
  
  _runTree= new TTree("RUN","GATE run tree");
  
  _runTree->Branch("run","gate::Run",&_run);

}


gate::RootWriter::~RootWriter(){
  
  // TO BE IMPLEMENTED

    //delete tf_;

    //delete evtTree_; 

}

void gate::RootWriter::Open(std::string fileName, std::string option){
      
    if (_tf) delete _tf;
    
    _tf = new TFile(fileName.c_str(),option.c_str());
    
    this->buildTree();

    this->buildRunTree();

    _isOpen=true;
    
}


void gate::RootWriter::Close(){
    
    //tf_ = evtTree_->GetCurrentFile(); // TO REVIEW!!!
    
    if (!_tf || !_tf->IsOpen()) return;
    
    _tf->Write();
    
    _tf->Close();
   
    _isOpen=false;
    
    //delete _evtTree; _evtTree = 0;

    //delete _runTree; _runTree = 0;

  }  
 
void gate::RootWriter::Write(Event& evt){
    
    _evt = &evt; 
    
    _evtTree->Fill();
     
}
  
void gate::RootWriter::WriteRunInfo(Run& runInfo){
    
  _run = &runInfo;
    
  _runTree->Fill();
     
}
  

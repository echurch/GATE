#include <RootWriter.h>

ClassImp(gate::RootWriter)

gate::RootWriter::RootWriter() :   IWriter(), 
  
  _tf(0) , _evtTree(0),_evt(0), _run(0) {

}
  
void  gate::RootWriter::buildTree(){
  
    _evt = 0;
    
    _run = 0;
    
    _evtTree= new TTree("EVENT","GATE event tree");
    
    _runTree= new TTree("RUN","GATE run tree");

    TTree::SetBranchStyle(1);
    
    _evtTree->Branch("event","gate::Event",&_evt,32000,0);

    _runTree->Branch("run","gate::Run",&_run);
    
    // TOFIX: Potential memory leak!!!!!!
    // cannot modify or delete tree, don't know reason
   
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
    
    _isOpen=true;
    
}


void gate::RootWriter::Close(){
    
    //tf_ = evtTree_->GetCurrentFile(); // TO REVIEW!!!
    
    if (!_tf || !_tf->IsOpen()) return;
    
    _tf->Write();
    
    _tf->Close();
    
    _isOpen=false;
    
  }  
 
void gate::RootWriter::Write(Event& evt){
    
    _evt = &evt; 
    
    _evtTree->Fill();
     
}
  
void gate::RootWriter::WriteRunInfo(Run& runInfo){
       
    _run = &runInfo;
    
    _runTree->Fill();
     
}
  

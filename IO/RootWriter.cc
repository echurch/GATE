#include <RootWriter.h>

ClassImp(gate::RootWriter)

gate::RootWriter::RootWriter() :   IWriter(), _tf(0) , _evtTree(0),_evt(0) {

}
  
void  gate::RootWriter::buildTree(){
  
    _evt = 0;

    //_dst = 0;

    //_run = 0;
    
    _evtTree= new TTree("EVENT","GATE event tree");

    //_dstTree= new TTree("DST","GATE dst tree");

    //_runTree= new TTree("RUN","GATE run tree");

    
    TTree::SetBranchStyle(1);
    
    _evtTree->Branch("event","gate::Event",&_evt,32000,0);

    //dstTree_->Branch("dst","bhep::dst",&dst_);

    //runTree_->Branch("run","bhep::run",&run_);
    
    // TOFIX: Potential memory leak!!!!!!
    // cannot modify or delete tree, don't know reason
   
  }

  //! destructor
gate::RootWriter::~RootWriter(){
    
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

    //bhep::Assert(tf_ !=0, __FILE__,__LINE__,
//		 bhep::internal_logic("writer is not open!!"));
    
    _evt = &evt; 
    
    _evtTree->Fill();
     
  }
  
  // void gate::RootWriter::write_dst_info(dst& dstInfo){
    
  //   //bhep::Assert(tf_ !=0, __FILE__,__LINE__,
  //     //  	 bhep::internal_logic("writer is not open!!"));
    
  //   dst_ = &dstInfo;
    
  //   dstTree_->Fill();
     
  // }
  

// void gate::RootWriter::write_run_info(run& runInfo){
    
//     //bhep::Assert(tf_ !=0, __FILE__,__LINE__,
//     //	 bhep::internal_logic("writer is not open!!"));
    
//     _run = &runInfo;
    
//     _runTree->Fill();
     
// }
  

#include <RunManager.h>

ClassImp(gate::RunManager)

// //*******************************************************************
// gate::dst& RunManager::read_idst_info(){
// //*******************************************************************
  
      
//   if (greader->max_dsts()<= idst_){
      
//     this->RaiseNoData("++ read_idst_info");}

//   tidsts_++;

//   return  greader->get_dst_info(idst_++); 
      
  
// }

// //*******************************************************************
// gate::dst& RunManager::read_idst_info(size_t idst){
// //*******************************************************************
  
//   idst_ = idst;

//   return this->read_idst_info();

// }

//*******************************************************************
gate::Run& gate::RunManager::read_irun_info(){
//*******************************************************************
  
  if (greader->GetNRuns()<= irun_) { 
      
    this->RaiseNoData("++ read_irun_info"); }
  
  tiruns_++;
  
  return greader->GetRunInfo(irun_++);

}

//*******************************************************************
gate::Run& gate::RunManager::read_irun_info(size_t irun){
//*******************************************************************

  irun_ = irun;

  return this->read_irun_info();


}


// //*************************************************************
// void RunManager::write(gate::dst& cdst) {
// //*************************************************************

//   m.message("Writing dst info...",gate::VERBOSE);

//   if (!outInit) initIO("w");

//   gwriter->write_dst_info(cdst);
     
//   m.message("DST info:",cdst,gate::VERBOSE);

//   todsts_++; odst_++;

// }

//*************************************************************
void gate::RunManager::write(gate::Run& crun) {
//*************************************************************

  m.message("Writing RUN info...",gate::VERBOSE);

  if (!outInit) initIO("w");
    
  gwriter->WriteRunInfo(crun);
  
  //m.message("RUN info:",crun,gate::VERBOSE);
  
  toruns_++; orun_++;
  
}

// //*************************************************************
// void RunManager::createDSTInfo(gate::rtype rt, int id, string label){
// //*************************************************************
  
//   if ( new_dst_ ) { 
    
//     m.message("++ Overwriting DST info...",gate::VERBOSE); 

//     delete new_dst_; new_dst_ = 0;}

//   new_dst_ = new gate::dst(rt,id,label);

// }

//*************************************************************
void gate::RunManager::createRunInfo(gate::DATATYPE rt, int id, string label){
//*************************************************************
  
  if (new_run_){ 
    m.message("++ run info already created! Abort!",gate::MUTE); 
    exit(1);}
  
  new_run_ = new gate::Run(rt,id);

}

//*************************************************************
void gate::RunManager::endOfFile(){
//*************************************************************

    m.message("++ End of file",ifile," ++",gate::NORMAL);

    m.message("Number of events read:",ievent,gate::NORMAL);
    //m.message("Number of DST info read:",idst_,gate::NORMAL);
    m.message("Number of RUN info read:",irun_,gate::NORMAL);
    
    
    closeFiles();
    
    if (outInit){
      m.message("Output File:",ofile,gate::NORMAL);
      m.message("Number of events written:",oevent,gate::NORMAL);
      //m.message("Number of DST info written:",odst_,gate::NORMAL);
      m.message("Number of RUN info written:",orun_,gate::NORMAL);
    }

    if (nofiles!=1) { orun_ = 0 ; 
      //odst_ = 0 ;
    }

    irun_ = 0 ; //idst_ = 0 ;
    

}

//*************************************************************
void gate::RunManager::closeFiles(bool force){
//*************************************************************
  
  if (!greader) return;
  
  if (nofiles!=1 || force){ //do not close if nofiles=1 
  
    if (gwriter && outInit) {
      
      //if ( new_dst_ ) { this->write(*new_dst_); }

      if ( new_run_ ) { this->write(*new_run_); run_saved_=true;}

      gwriter->Close();
    
    }
  
    outInit=false;
  }
  
  greader->Close();
    
  init=false; 

}

//*************************************************************
void gate::RunManager::finalize() {
//*************************************************************

    // print info
  
  m.message("++ Finalize method of RunManager ++",gate::NORMAL);
  
  closeFiles(true);

  m.message("Total number of events read:",tievents,gate::NORMAL);
  m.message("Total number of events written:",toevents,gate::NORMAL);
  m.message("++ End method of RunManager ++",gate::NORMAL);
  //m.message("Total number of DST info read:",tidsts_,gate::NORMAL);
  //m.message("Total number of DST info written:",todsts_,gate::NORMAL);
  m.message("Total number of RUN info read:",tiruns_,gate::NORMAL);
  m.message("Total number of RUN info written:",toruns_,gate::NORMAL);
      
  cifile=0;
  cofile=0;
 
}

//*************************************************************
bool gate::RunManager::isNewFile(){
//*************************************************************
  
  bool ok = (ievent==0);

  //ok = ( ok && (idst_==0) );

  ok = ( ok && (irun_==0) );

  return ok;
  
}

//*************************************************************
void gate::RunManager::RaiseNoData(string fun){
//*************************************************************
  
  m.message("++ ",fun,gate::MUTE);
  m.message("++ No more data to read. Abort!!!",gate::MUTE);

  exit(1);

}

// //*************************************************************
// void RunManager::RaiseRunSaved(string fun){
// //*************************************************************
  
//   m.message("++",fun,gate::MUTE);
//   m.message("++ Can't modify RUN info...",gate::MUTE); 
//   m.message("++ already saved in previous output file...",gate::MUTE); 
//   m.message("++ Abort!!!",gate::MUTE); 
//   exit(1); 

// }

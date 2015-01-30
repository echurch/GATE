#ifndef __RootReader_h
#define __RootReader_h

#include<Event.h>
#include<IReader.h>

#include<TSystem.h>
#include<TFile.h> 
#include<TTree.h> 

namespace gate{class RootReader;}

class gate::RootReader : public gate::IReader {

 private:
  
  //! root file 
  TFile* _tf;
  
  //! tree for events
  TTree* _evtTree;

  //! pointer to current event
  gate::Event* _evt;
  
 public:
    
  //! default contructor
  RootReader();
    
  //! destructor
  virtual ~RootReader();
    
  //! open file
  void Open(std::string);
    
  //! read event
  gate::Event& Read(size_t i=0);
  
  //! close file
  void Close(){ if (_tf) {_tf->Close();} _isOpen=false;}
    
  //! end of file
  bool eof(size_t i){return (i>(size_t)GetNEvents());}
  
  //! return maximum number of events in file
  unsigned int GetNEvents() const; 

  //! return maximum number of events in file
  //size_t MaxEvents(){
  //  if (_evtTree) return _evtTree->GetEntries();
  //  else return 0;}
    
  /* //! return maximum number of dst info's in file */
  /* size_t max_dsts(){ */
  /*   if (dstTree_) return dstTree_->GetEntries(); */
  /*   else return 0;} */
    
  /* /// return maximum number of RUN info's in file */
  /* size_t max_runs(){ */
  /*   if (runTree_) return runTree_->GetEntries(); */
  /*   else return 0;} */

    
    /* /// retrieve run info */
    /* run& get_run_info(size_t i = 0); */
    
    /* /// retireve dst info */
    /* dst& get_dst_info(size_t i = 0); */
    
  //! print file info
  void Print();

  ClassDef(gate::RootReader,1)

    };

inline unsigned int gate::RootReader::GetNEvents() const {   
    if (_evtTree) return _evtTree->GetEntries();
    else return 0;}

#endif

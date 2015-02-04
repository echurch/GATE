#ifndef __RootReader_h
#define __RootReader_h

#include<Event.h>
#include<Run.h>
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
  
  //! tree for run information
  TTree* _runTree;

  //! pointer to current event
  gate::Event* _evt;
  
  //! pointer to run information
  gate::Run* _run;

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

  //! return maximum number of RUN info's in file
  unsigned int GetNRuns() const;
   
  //! retrieve run info
  gate::Run& GetRunInfo(size_t i = 0);
             
  //! print file info
  void Print();

  ClassDef(gate::RootReader,1)

    };

inline unsigned int gate::RootReader::GetNEvents() const {   
  
  return (_evtTree) ? _evtTree->GetEntries(): 0; }

inline unsigned int gate::RootReader::GetNRuns() const {   
  
  return (_runTree) ? _runTree->GetEntries(): 0; }


#endif

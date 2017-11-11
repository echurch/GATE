#ifndef __RootReaderEC_h
#define __RootReaderEC_h

#include<Event.h>
#include<Run.h>
#include<IReader.h>
#include<Error.h>

#include<TFile.h> 
#include<TTree.h> 

/**
 * @file RootReader.h
 * 
 * @class RootReader
 *
 * @brief GATE reader based on ROOT serialization
 *
 * @details Reads GATE events from a ROOT file with a TTree of gate events  
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>
 * Eric Church: stripped from RootReader to not derive from a base class, as it's giving me problems in python.
 * @version Revision 1.0.0
 *
 * @date Nov 2017
 *
 * @ingroup IO
 */

//namespace gate{class RootReaderEC;}

namespace gate
{

class RootReaderEC  {

 private:
  
  bool _isOpen;

  //! root file 
  TFile* _tf;
  
  //! tree for events
  TTree* _evtTree;
  
  //! tree for run information
  TTree* _runTree;

  //! pointer to current event
  Event* _evt;
  
  //! pointer to run information
  Run* _run;

 public:
    
  //! default contructor
  RootReaderEC();
    
  //! destructor
  virtual ~RootReaderEC();
    
  //! open file
  void Open(std::string);
    
  //! read event
  Event& Read(size_t i=0);
  
  //! close file
  void Close(){ if (_tf) {_tf->Close();} _isOpen=false;}
    
  //! end of file
  bool eof(size_t i){return (i>(size_t)GetNEvents());}
  
  //! return maximum number of events in file
  unsigned int GetNEvents() const; 

  //! return maximum number of RUN info's in file
  unsigned int GetNRuns() const;
   
  //! retrieve run info
  Run& GetRunInfo(size_t i = 0);
  
  //! print file info
  void Print();

  ClassDef(RootReaderEC,1)

    };



inline unsigned int gate::RootReaderEC::GetNEvents() const {   
  
  return (_evtTree) ? _evtTree->GetEntries(): 0; }

inline unsigned int gate::RootReaderEC::GetNRuns() const {   
  
  return (_runTree) ? _runTree->GetEntries(): 0; }

}


#endif

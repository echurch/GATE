#ifndef __RooWriter_h
#define __RooWriter_h

#include<TFile.h> 
#include<TTree.h> 

#include "IWriter.h"
#include "Event.h"
#include "Run.h"

/**
 * @file RootWriter.h
 * 
 * @class RootWriter
 *
 * @brief GATE data writer base of ROOT serialization.
 *
 * @details Writes GATE events into a TTree stored in a ROOT file  
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date January 2015
 *
 * @ingroup IO
 */

namespace gate{

  class RootWriter : public IWriter {

  private:
    
    //! file
    TFile* _tf;
    
    //! tree for events
    TTree* _evtTree;
    
    //! tree for RUN info's
    TTree* _runTree;
    
    //! pointer to current event
    Event* _evt;

    //! pointer to run info
    Run* _run;
   
  private:
   
    //! build tree and assign branches
    void buildTree();

    //! build run tree and assign branches
    void buildRunTree();
      
  public:    
    
    //! constructor 
    RootWriter();
    
    //! destructor
    virtual ~RootWriter();
    
    //! write event
    void Write(Event& evt);
    
    //! open ROOT file
    void Open(std::string filename,std::string option="RECREATE");
    
    //! close ROOT file
    void Close();
    
    //! write dst info into root file
    void WriteRunInfo(Run& run);
     
    //! return maximum number of events in file
    unsigned int GetNEvents() const;

    //! return maximum number of run infos in file
    unsigned int GetNRuns() const;
        
    ClassDef(gate::RootWriter,1)

      };   

}
  
inline unsigned int gate::RootWriter::GetNEvents() const {   
  
  return (_evtTree) ? _evtTree->GetEntries() : 0;}

inline unsigned int gate::RootWriter::GetNRuns() const {   
  
  return (_runTree) ? _runTree->GetEntries() : 0;}


#endif

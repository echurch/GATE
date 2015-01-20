#ifndef __RooWriter_h
#define __RooWriter_h

#include<TSystem.h>
#include<TFile.h> 
#include<TTree.h> 

#include<IWriter.h> 
#include<../emodel/Event.h> 

namespace gate{

  class RootWriter : public IWriter {

  private:
    
    //! file
    TFile* _tf;
    
    //! tree for events
    TTree* _evtTree;
    
    //! tree for RUN info's
    //TTree* _runTree;

    //! tree for DST info's
    //TTree* _dstTree;
    
    //! pointer to current event
    Event* _evt;

    //! pointer to dst info
    //dst* _dst;
    
    //! pointer to run info
    //run* _run;
   
  private:
   
    //! build tree and assign branches
    void buildTree();
      
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
    //void WriteRunInfo(Run& run);
    
    //! write dst info into root file
    //void WriteDSTInfo(dst &);
 
    //! return maximum number of events in file
    unsigned int GetNEvents() const;
          
    /// return maximum number of dst info's in file
    //size_t max_dsts(){
    // if (dstTree_) return dstTree_->GetEntries();
    //else return 0;}
    
    //! return number of RUN info's in file
    //size_t GetNRuns() const;
    
    ClassDef(gate::RootWriter,1)

      };   

}
  
inline unsigned int gate::RootWriter::GetNEvents() const {   
    if (_evtTree) return _evtTree->GetEntries();
    else return 0;}

  //inline size_t gate::RootWriter::GetNRuns() const {   
  // if (_runTree) return _runTree->GetEntries();
  // else return 0;}}

#endif

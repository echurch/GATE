/* -*- mode: c++ -*- */
#ifndef _run_man___
#define _run_man___


#include <ParamStore.h>
#include <Run.h>
//#include <dst.h>

#include <EventManager.h>

#include<TSystem.h>

/**
 * \class RunManager
 *
 * \ingroup utils
 *
 * \brief Manager for gate events and RUN information
 *
 * \author Pau Novella
 *
 * \version $Revision: 1.0 $
 * 
 * Contact: pau.novella@ciemat.es
 *
 */

namespace gate{class RunManager;}

class gate::RunManager: public gate::EventManager{

public:
  
  /// constructor with verbosity level 
  RunManager(gate::VLEVEL vl=gate::NORMAL):
    EventManager(vl){
    this->reset();
  }

  /// constructor with parameters and verbosity level 
  RunManager(const gate::ParamStore& gs,
	     gate::VLEVEL vl=gate::NORMAL):
    EventManager(gs,vl){
    this->reset();
  }
  
  /// destructor
  ~RunManager(){
    //if (new_dst_) delete new_dst_;
    if (new_run_) delete new_run_;
  }
  
  
  /// read next input DST info (sequential read)
  //gate::dst& read_idst_info();
  
  /// read next input DST info (random read)
  //gate::dst& read_idst_info(size_t);
  
  /// read next input Run info (sequential read)
  gate::Run& read_irun_info();
  
  /// read next input Run info (random read)
  gate::Run& read_irun_info(size_t);
  

public:
  
  /// finalize: print run info 
  void finalize();
  
  /// get number of DST info's in file
  //size_t getNumDSTsFile(){return greader->max_dsts();}
  
  /// get number of RUN info's in file
  size_t getNumRunsFile(){return greader->GetNRuns();}
  
  /// true is new file has open (no event has been read)
  bool isNewFile();

  /// write event into file
  void write(gate::Event& e){EventManager::write(e);} 
  
  /// write run info into file
  void write(gate::Run&); 
  
  /// write dst info into file
  //void write(gate::dst&); 
  

public:

  /// create new dst info (will be saved in current output file) 
  //void createDSTInfo(gate::rtype rt, int id, string label="MyDST");

  /// create new run info (will be saved in ALL output files) 
  void createRunInfo(gate::DATATYPE rt, int id, string label="MyRun");
  
  //gate::dst* getDSTInfo(){return new_dst_;}
  
  gate::Run* getRunInfo(){
    // if (run_saved_){ 
//       m.message("+++ WARNING!",gate::MUTE); 
//       m.message("++ RUN info already saved !!!",gate::MUTE); 
//       m.message("++ Changing RUN info may be dangerous...",gate::MUTE);} 
      return new_run_;}


  // //! retrieve dst type
//   gate::rtype getDSTType() const {return new_dst_->get_type();}
    
//   //! retrieve dst time
//   time_t getDSTTime() const { return new_dst_->get_time();}
  
//   //! retrieve dst ID number
//   int getDSTID() const { return new_dst_->get_ID();}

//   //! retrieve dst label
//   string getDSTLabel() const { return new_dst_->get_label();}

//   //! retrieve number of events
//   size_t getDSTNevt() const { return new_dst_->get_Nevt();}
    
//   //! retrieve ID of RUN
//   int getRUNRUNID() const { return new_dst_->get_RUNID();}


//   /// set dst type
//   void setDSTType(gate::rtype type){  new_dst_->set_type(type);}

//   /// set dst time
//   void setDSTTime(time_t time){ new_dst_->set_time(time);}
    
//   /// set dst ID number
//   void setDSTID(int num){ new_dst_->set_ID(num);}
    
//   /// set dst label
//   void setDSTLabel(string name){ new_dst_->set_label(name);}
    
//   /// set number of events
//   void setDSTNevt(size_t num){ new_dst_->set_Nevt(num);}

//   /// set RUN id dst belongs to
//   void setDSTRUNID(int num){ new_dst_->set_RUNID(num);}

 

//   //! retrieve dst type
//   gate::rtype getRunType() const {return new_run_->get_type();}
    
//   //! retrieve dst time
//   time_t getRunTime() const { return new_run_->get_time();}
  
//   //! retrieve dst ID number
//   int getRunID() const { return new_run_->get_ID();}

//   //! retrieve dst label
//   string getRunLabel() const { return new_run_->get_label();}

//   //! retrieve number of events
//   size_t getRunNevt() const { return new_run_->get_Nevt();}
    
//   //! retrieve ID of RUN
//   int getRunRUNID() const { return new_run_->get_RUNID();}
  
//   //! retrieve list of DSTs ID in Run
//   const vector<int>& getDSTIDsInRun() const {return new_run_->get_dst_IDs();}

//   /// add DST ID to run info
//   void addDSTID2Run(int id){
//     if (run_saved_)this->RaiseRunSaved("AddDSTID2Run:"); 
//     new_run_->add_dst_ID(id);}

//   /// set dst type
//   void setRunType(gate::rtype type){  
//     if (run_saved_)this->RaiseRunSaved("SetRunType:"); 
//     new_run_->set_type(type);}

//   /// set dst time
//   void setRunTime(time_t time){ 
//     if (run_saved_)this->RaiseRunSaved("SetRunTime:"); 
//     new_run_->set_time(time);}
    
//   /// set dst ID number
//   void setRunID(int num){ 
//     if (run_saved_)this->RaiseRunSaved("SetRunID:"); 
//     new_run_->set_ID(num);}
    
//   /// set dst label
//   void setRunLabel(string name){ 
//     if (run_saved_)this->RaiseRunSaved("SetRunLabel:"); 
//     new_run_->set_label(name);}
    
//   /// set number of events
//   void setRunNevt(size_t num){ 
//     if (run_saved_)this->RaiseRunSaved("SetRunNevt:"); 
//     new_run_->set_Nevt(num);}

//   /// set RUN id dst belongs to
//   void setRUNID(int num){ 
//     if (run_saved_)this->RaiseRunSaved("SetRUNID:"); 
//     new_run_->set_RUNID(num);}

//protected: 
  
  /// abort if RUN info already saved in any output file
  //void RaiseRunSaved(string fun);


protected:
  
  /// reset counters
  void reset(){ 
    
    irun_=0;tiruns_=0;orun_=0;toruns_=0;

    //idst_=0;tidsts_=0;odst_=0;todsts_=0;
    
    //new_dst_=0; 
    new_run_=0;

    run_saved_ = false;
  }
  
  /// operation at end of file
  void endOfFile();
  
  /// close files
  void closeFiles(bool force=false);

  /// abort if no data to read
  void RaiseNoData(string);

protected:

  //gate::dst* new_dst_;

  gate::Run* new_run_;

protected:
  
  size_t irun_;
  size_t tiruns_;
  size_t orun_;
  size_t toruns_;

  //size_t idst_;
  //size_t tidsts_;
  //size_t odst_;
  //size_t todsts_;
  
  bool run_saved_;

  ClassDef(gate::RunManager,1)

};

#endif

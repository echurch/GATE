#ifndef __HDF5Reader_h
#define __HDF5Reader_h

#include<GATE/Event.h>
#include<GATE/Run.h>
#include<GATE/IReader.h>
#include<GATE/Error.h>

#include<TFile.h> 
#include<TTree.h> 

/**
 * @file HDF5Reader.h
 * 
 * @class HDF5Reader
 *
 * @brief GATE writer based on HDF5 serialization
 *
 * @details Reads GATE events from a HDF5 file   
 *    
 * @author Jose Maria Benlloch Rodriguez  <jmbenlloch@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date September 2016
 *
 * @ingroup IO
 */

namespace gate{class HDF5Reader;}

class gate::HDF5Reader : public gate::IReader {

 private:
  
  //! pointer to current event
  gate::Event* _evt;
  
  //! pointer to run information
  gate::Run* _run;

 public:
    
  //! default contructor
  HDF5Reader();
    
  //! destructor
  virtual ~HDF5Reader();
    
  //! open file
  void Open(std::string);
    
  //! read event
  gate::Event& Read(size_t i=0);
  
  //! close file
  void Close(){ _isOpen=false;} //! TO BE IMPLEMENTED
    
  //! end of file
  bool eof(size_t i){ return true; } //! TO BE IMPLEMENTED
  
  //! return maximum number of events in file
  unsigned int GetNEvents() const; 

  //! return maximum number of RUN info's in file
  unsigned int GetNRuns() const;
   
  //! retrieve run info
  gate::Run& GetRunInfo(size_t i = 0);
  
  //! print file info
  void Print();

  ClassDef(gate::HDF5Reader,1)

    };

inline unsigned int gate::HDF5Reader::GetNEvents() const {   
  
  return 0; }//! TO BE IMPLEMENTED

inline unsigned int gate::HDF5Reader::GetNRuns() const {   
  
  return 0; }//! TO BE IMPLEMENTED

#endif

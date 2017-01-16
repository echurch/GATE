#ifndef __RootHDF5Reader_h
#define __RootHDF5Reader_h

#include<GATE/Event.h>
#include<GATE/Run.h>
#include<GATE/Error.h>

#include<GATE/RootReader.h>
#include<GATE/HDF5Reader.h>


/**
 * @file RootHDF5Reader.h
 * 
 * @class RootHDF5Reader
 *
 * @brief GATE reader based on ROOT and HDF5 (waveforms) serialization
 *
 * @details Reads GATE events from a ROOT file and waveforms from HDF5  
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date January 2017
 *
 * @ingroup IO
 */

namespace gate{class RootHDF5Reader;}

class gate::RootHDF5Reader : public gate::IReader {

 private:
  
  //! pointer to current event
  gate::Event* _evt;
  
  //! pointer to run information
  gate::Run* _run;

  //! HDF5 reader
  gate::HDF5Reader* _h5reader;

  //! ROOT reader
  gate::RootReader* _rreader;

  //! name of PMT HDF5 table
  std::string _pmtTable;

  //! name of SiPMT HDF5 table
  std::string _sipmTable;
 
 public:
    
  //! default contructor
  RootHDF5Reader();
    
  //! destructor
  virtual ~RootHDF5Reader();
    
  //! open file
  void Open(std::string);
    
  //! read event
  gate::Event& Read(size_t i=0);
  
  //! close file
  void Close(){ if (_rreader) {_rreader->Close();
      _h5reader->Close(); _isOpen=false;}}
    
  //! end of file
  bool eof(size_t i){return (i>(size_t) this->GetNEvents());}
  
  //! return maximum number of events in file
  unsigned int GetNEvents() const; 

  //! return maximum number of RUN info's in file
  unsigned int GetNRuns() const;
   
  //! retrieve run info
  gate::Run& GetRunInfo(size_t i = 0);
  
  //! print file info
  void Print();

  //! set hdf5 pmt table name
  void SetPmtTable(std::string name);

  //! set hdf5 sipm table name
  void SetSipmTable(std::string name);
  
  ClassDef(gate::RootHDF5Reader,1)

    };

inline unsigned int gate::RootHDF5Reader::GetNEvents() const {   
  
  return (_rreader) ? _rreader->GetNEvents(): 0; }

inline unsigned int gate::RootHDF5Reader::GetNRuns() const {   
  
  return (_rreader) ? _rreader->GetNRuns(): 0; }

inline void gate::RootHDF5Reader::SetPmtTable(std::string name){
  _h5reader->SetPmtTable(name);}
inline void gate::RootHDF5Reader::SetSipmTable(std::string name){
  _h5reader->SetSipmTable(name);}

#endif

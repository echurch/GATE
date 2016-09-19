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

typedef struct{
	int channel;
	int active;
	double position[3];
	double gain;
	double adc_to_pes;
} sensor_t;

ClassImp(gate::HDF5Reader)

class gate::HDF5Reader : public gate::IReader {

 private:
  
  //! pointer to current event
  gate::Event* _evt;
  int _evtIndex;

  int _npmt, _pmtwflen;
  int _nsipm, _sipmwflen;
  
  //! pointer to run information
  gate::Run* _run;

  size_t _h5file, _dsetPMT, _dspacePMT, _dsetSIPM, _dspaceSIPM;
  size_t _dsetSensorsSIPM, _dspaceSensorsSIPM;

  int * _pmtdata;
  int * _sipmdata;

  int _nEvents;

  bool _hasPMT, _hasSIPM;

  sensor_t * _sensorsSIPM;

  std::string _pmtTable;
  std::string _sipmTable;

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
  void Close();
    
  //! end of file
  bool eof(size_t i);
  
  //! return maximum number of events in file
  unsigned int GetNEvents() const; 

  //! return maximum number of RUN info's in file
  unsigned int GetNRuns() const;
   
  //! retrieve run info
  gate::Run& GetRunInfo(size_t i = 0);
  
  //! print file info
  void Print();

  //! set pmt table name
  void SetPmtTable(std::string name);

  //! set sipm table name
  void SetSipmTable(std::string name);

  ClassDef(gate::HDF5Reader,1)

    };

inline void gate::HDF5Reader::SetPmtTable(std::string name){ _pmtTable = name;}
inline void gate::HDF5Reader::SetSipmTable(std::string name){ _sipmTable = name;}

inline unsigned int gate::HDF5Reader::GetNRuns() const {   
  
  return 0; }//! TO BE IMPLEMENTED

#endif

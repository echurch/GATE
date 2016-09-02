#ifndef __HDF5Writer_h
#define __HDF5Writer_h

#include<GATE/IWriter.h> 
#include<GATE/Event.h> 
#include<GATE/Run.h> 


//#include <H5Cpp.h> // roocint doesn't like this header...


/**
 * @file HDF5Writer.h
 * 
 * @class HDF5Writer
 *
 * @brief GATE data writer based on HDF5 serialization.
 *
 * @details Writes GATE events into a HDF5 file  
 *    
 * @author Jose Maria Benlloch Rodriguez  <jmbenlloch@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date August 2016
 *
 * @ingroup IO
 */

namespace gate{

  class HDF5Writer : public IWriter {

  private:

    //! HDF5 file
    size_t _file;

	//! First event
	bool _firstEvent;

	//Sensors activated in the run
	bool _pmtOn;
	bool _sipmOn;

	//Datasets
	size_t _pmtrd;
	size_t _sipmrd;
	size_t _mctrks;
	size_t _memtypeMC;
	size_t _mctrkCount;

    //! pointer to current event
    Event* _evt;

    //! pointer to run info
    Run* _run;

    //! counter for writen events
    size_t _ievt;

	//! Waveform sizes
	size_t _pmtDatasize;
	size_t _sipmDatasize;

      
  public:    
    
    //! constructor 
    HDF5Writer();
    
    //! destructor
    virtual ~HDF5Writer();
    
    //! write event
    void Write(Event& evt);
    
    //! open ROOT file
    void Open(std::string filename,std::string option="");
    
    //! close ROOT file
    void Close();
    
    //! write dst info into root file
    void WriteRunInfo(Run& run);
     
    
    ClassDef(gate::HDF5Writer,1)

      };   

}
  
#endif

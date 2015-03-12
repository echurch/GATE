#ifndef __ireader_h
#define __ireader_h

#include<GATE/Event.h>
#include<GATE/Run.h> 

/**
 *\defgroup IO Classes to create and read GATE data files 
 */

/**
 * @file IReader.h
 * 
 * @class IReader
 *
 * @brief Base class for GATE data readers
 *
 * @details Defines common functions and memebers for any reader  
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

  class IReader{
    
  protected:
    
    bool _isOpen;

  public:
    
    /// default constructor
    IReader(){_isOpen=false;}

    /// destructor
    virtual ~IReader(){}
    
    /// true if file is open
    bool isOpen() const {return _isOpen;}

    /// open file
    virtual void Open(std::string) = 0;
    
    /// read event from file
    virtual Event& Read(size_t) = 0;

    /// close file
    virtual void Close() = 0;
    
    /// end of file
    virtual bool eof(size_t)=0;

    /// number of events in file
    virtual unsigned int GetNEvents() const =0;
    
    /// number of events in file
    virtual unsigned int GetNRuns() const =0;
    
    /// retrieve run info
    virtual gate::Run& GetRunInfo(size_t) = 0;

    /// number of run info's in file
    //virtual size_t MaxRuns()=0;

    /// number of dst info's in file
    //virtual size_t MaxDsts()=0;
    
    /// retrieve dst info
    //virtual dst& get_dst_info(size_t)=0;
    
    /// print info
    virtual void Print()= 0 ;

    ClassDef(IReader,1)

  };

}

#endif

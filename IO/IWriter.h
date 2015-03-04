#ifndef __iwriter_h
#define __iwriter_h

/**
 * @file IWriter.h
 * 
 * @class IWriter
 *
 * @brief Base class for GATE data writers 
 *
 * @details Defines common functions and memebers for any writer  
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date January 2015
 *
 * @ingroup IO
 */

#include<Event.h> 
#include<Run.h> 

#include<TSystem.h>

namespace gate{

  class IWriter{
    
  protected:
    
    bool _isOpen;

  public:    
    
    IWriter() {_isOpen=false;}

    virtual ~IWriter() {}
    
    bool IsOpen()const {return _isOpen;}

    virtual void Write(Event& evt) = 0;

    virtual void Open(std::string,std::string opt="") = 0;

    virtual void Close() = 0;
    
    virtual void WriteRunInfo(Run&)=0;

    //virtual void write_dst_info(dst&)=0;

    ClassDef(gate::IWriter,1)

  };   
}
#endif

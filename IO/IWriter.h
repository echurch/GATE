#ifndef __iwriter_h
#define __iwriter_h

#include<Event.h> 
//#include<emodel/dst.h> 
//#include<emodel/run.h> 

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
    
    //virtual void write_run_info(run&)=0;

    //virtual void write_dst_info(dst&)=0;

    ClassDef(gate::IWriter,1)

  };   
}
#endif

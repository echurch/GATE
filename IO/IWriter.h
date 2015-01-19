#ifndef __iwriter_h
#define __iwriterx_h

#include<emodel/Event.h> 
//#include<bhep/dst.h> 
//#include<bhep/run.h> 

#include<TSystem.h>

namespace gate{

  class IWriter{
    
  protected:
    
    bool isOpen_;

  public:    
    
    IWriter() {isOpen_=false;}

    virtual ~IWriter() {}
    
    bool isOpen()const {return isOpen_;}

    virtual void write(Event& evt) = 0;

    virtual void open(std::string,std::string opt="") = 0;

    virtual void close() = 0;
    
    //virtual void write_run_info(run&)=0;

    //virtual void write_dst_info(dst&)=0;

    ClassDef(gate::IWriter,1)

  };   
}
#endif

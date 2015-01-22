#ifndef __ireader_h
#define __ireader_h

#include<Event.h>
//#include<bhep/dst.h>  
//#include<bhep/run.h> 

#include<TSystem.h>

namespace gate{

  class IReader{
    
  protected:
    
    bool isOpen_;

  public:
    
    /// default constructor
    IReader(){isOpen_=false;}

    /// destructor
    virtual ~IReader(){}
    
    /// true if file is open
    bool isOpen() const {return isOpen_;}

    /// open file
    virtual void open(std::string) = 0;
    
    /// read event from file
    virtual Event& read_event(size_t) = 0;

    /// close file
    virtual void close() = 0;
    
    /// end of file
    virtual bool eof(size_t)=0;

    /// number of events in file
    virtual size_t max_events()=0;

    /// number of run info's in file
    virtual size_t max_runs()=0;

    /// number of dst info's in file
    virtual size_t max_dsts()=0;
    
    /// retrieve run info
    //virtual run& get_run_info(size_t)=0;
    
    /// retrieve dst info
    //virtual dst& get_dst_info(size_t)=0;
    
    /// print info
    virtual void print()= 0 ;

    ClassDef(IReader,1)

  };

}

#endif

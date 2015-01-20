#ifndef __Event_H__
#define __Event_H__

#include<TSystem.h>
#include<TH1F.h>

namespace gate{class Event;}

class gate::Event{

public:
  
  Event(std::string lab);
  
  virtual ~Event();

  std::string getLabel()const;

private:

  std::string _label; 
  
  TH1F* histo;

  ClassDef(Event,1)

}; 

#endif

#ifndef __Event_H__
#define __Event_H__

#include <iostream>

#include<TSystem.h>

#include<ParamStore.h>

namespace gate{class Event;}

class gate::Event : public gate::ParamStore {

public:
  
  //! default contructor
  Event();

  //! contructor with trigger ID
  Event(int id);
  
  //! default constructor
  virtual ~Event();
  
  //! retrieve trigger number
  int GetEventID() const;
  
  //! set trigger number
  void SetEventID(int id);

  //! print event into stream
  void Info(ostream& s) const;

private:

  //! trigger ID
  int  _eventID;
  
  ClassDef(gate::Event,1)

}; 

inline int gate::Event::GetEventID() const { return _eventID; }

inline void gate::Event::SetEventID(int id) { _eventID = id; }

ostream& operator << (ostream& s, const gate::Event& evt); 

#endif

#ifndef __Event_H__
#define __Event_H__

/**
 * @file Event.h
 * 
 * @brief Event class, holding all trigger information
 *
 * @details Contains low or high level objects, according to configuration  
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date January 2015
 *
 */

#include <iostream>

#include<TSystem.h>

#include<ParamStore.h>
#include<Hit.h>

namespace gate{class Event;}

//class gate::Event : public gate::ParamStore {

class gate::Event {

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
  
  //! retrieve trigger time
  int GetTime() const;
  
  //! set trigger time
  void SetTime(double t);
  
  //! retrieve all hits
  std::vector<gate::Hit*> GetHits() const;

  //! retrieve hits of specific type
  std::vector<gate::Hit*> GetHits(gate::SENSORTYPE type) const;
  
  // add hit
  void AddHit(gate::SENSORTYPE, gate::Hit*);

  //! print event into stream
  void Info(ostream& s) const;

private:

  //! trigger ID
  int  _eventID;

   //! trigger time
  int  _time;

  //! multimap of hits: key specificies type (PMT, SiPM, ...)
  std::multimap<gate::SENSORTYPE, gate::Hit*> _hits;
  
  ClassDef(gate::Event,1)

}; 

inline int gate::Event::GetEventID() const { return _eventID; }

inline void gate::Event::SetEventID(int id) { _eventID = id; }

inline int gate::Event::GetTime() const { return _time; }

inline void gate::Event::SetTime(double t) { _time = t; }

ostream& operator << (ostream& s, const gate::Event& evt); 

#endif

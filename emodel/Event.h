#ifndef __Event_H__
#define __Event_H__

/**
 * @file Event.h
 * 
 * @class Event
 *
 * @brief Holds all trigger information
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

#include<BObject.h>
#include<Hit.h>
#include<HitMap.h>
#include<Track.h>
#include<THit.h>
#include<TTrack.h>
#include<Particle.h>

namespace gate{class Event;}

class gate::Event : public gate::BObject {

public:
  
  //! default contructor
  Event();

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
  
  //! retrieve all hit maps
  std::vector<gate::HitMap*> GetHitMaps() const;
  
  //! retrieve hit maps of specific type
  std::vector<gate::HitMap*> GetHitMaps(gate::SENSORTYPE type) const;

  // add hit map
  void AddHitMap(gate::SENSORTYPE, gate::HitMap*);

  //! retrieve all tracks
  std::vector<gate::Track*> GetTracks() const;
  
  //! retrieve tracks of specific type
  std::vector<gate::Track*> GetTracks(gate::SENSORTYPE type) const;
  
  // add track
  void AddTrack(gate::SENSORTYPE, gate::Track*);
  
  //! retrieve all true hits
  std::vector<gate::THit*> GetTrueHits() const;
    
  // add true hit
  void AddTrueHit(gate::THit*);
  
  //! retrieve all true tracks
  std::vector<gate::TTrack*> GetTrueTracks() const;
    
  // add true track
  void AddTrueTrack(gate::TTrack*);
  
  //! retrieve all true particles
  std::vector<gate::Particle*> GetTrueParticles() const;
    
  // add true particle
  void AddTrueParticle(gate::Particle*);

  //! print event into stream
  void Info(ostream& s) const;

private:

  //! trigger time
  int  _time;
  
  /*------- Reconstructed info -----*/

  //! multimap of hits: key specificies type (PMT, SiPM, ...)
  std::multimap<gate::SENSORTYPE, gate::Hit*> _hits;

  //! multimap of hit-maps
  std::multimap<gate::SENSORTYPE, gate::HitMap*> _hmaps;
  
  //! multimap of tracks
  std::multimap<gate::SENSORTYPE, gate::Track*> _tracks;
  
  /*------- MC true info -----*/
  
  //! vector of true particles in this event
  std::vector<gate::Particle*> _tparts;

  //! vector of true hits (energy deposits in bulk)
  std::vector<gate::THit*> _thits;
  
  //! vector of true tracks (collection of true hits)
  std::vector<gate::TTrack*> _ttracks;

  ClassDef(gate::Event,1)

}; 

inline int gate::Event::GetEventID() const { return this->GetID(); }

inline void gate::Event::SetEventID(int id) { this->SetID(id); }

inline int gate::Event::GetTime() const { return _time; }

inline void gate::Event::SetTime(double t) { _time = t; }

ostream& operator << (ostream& s, const gate::Event& evt); 

#endif

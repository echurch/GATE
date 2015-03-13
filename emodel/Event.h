#ifndef __Event_H__
#define __Event_H__

/**
 *\defgroup emodel Event model classes
 */

/**
 * @file Event.h
 * 
 * @class Event
 *
 * @brief Holds all trigger information
 *
 * @details Contains low or high level objects, according to configuration  
 *    
 * @author J.J. Gomez-Cadenas, Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date January 2015
 *
 * @ingroup emodel
 */


#include <GATE/BObject.h>
#include <GATE/Hit.h>
#include <GATE/HitMap.h>
#include <GATE/Cluster.h>
#include <GATE/Track.h>
#include <GATE/Particle.h>
#include <GATE/MCHit.h>
#include <GATE/MCTrack.h>
#include <GATE/MCParticle.h>
 
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
  double GetTime() const;
  
  //! set trigger time
  void SetTime(double t);

  //! set reconstructed energy
  void SetEnergy(double e);
  
  //! get reconstructed enrgy
  double GetEnergy() const;
  
  //! set MC energy
  void SetMCEnergy(double e);
  
  //! get MC enrgy
  double GetMCEnergy() const;

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
  
  //! retrieve all clusters
  std::vector<gate::Cluster*> GetClusters() const;
  
  //! retrieve clusters of specific type
  std::vector<gate::Cluster*> GetClusters(gate::SENSORTYPE type) const;

  // add cluster
  void AddCluster(gate::SENSORTYPE, gate::Cluster*);
  
  //! retrieve all tracks
  std::vector<gate::Track*> GetTracks() const;
  
  //! retrieve tracks of specific type
  std::vector<gate::Track*> GetTracks(gate::SENSORTYPE type) const;
  
  // add track
  void AddTrack(gate::SENSORTYPE, gate::Track*);
  
  //! retrieve all recosntructed particles
  std::vector<gate::Particle*> GetParticles() const;
    
  //! add reconstructed particle
  void AddParticle(gate::Particle*);
  
  //! retrieve all true hits
  std::vector<gate::MCHit*> GetMCHits() const;
    
  // add true hit
  void AddMCHit(gate::MCHit*);
  
  //! retrieve all true tracks
  std::vector<gate::MCTrack*> GetMCTracks() const;
    
  // add true track
  void AddMCTrack(gate::MCTrack*);
  
  //! retrieve all true particles
  std::vector<gate::MCParticle*> GetMCParticles() const;
    
  // add true particle
  void AddMCParticle(gate::MCParticle*);
  
  //! Get  state
  gate::STATE GetState() const;
  
  //! Set  state 
  void SetState(gate::STATE state);
  
  //! get total energy from tracks
  double GetTracksEnergy(gate::SENSORTYPE type) const;
  
  //! get total energy from MC tracks
  double GetMCTracksEnergy() const;

  //! print event into stream
  void Info(std::ostream& s=std::cout) const;
  
  //! clear info
  void Clear();

private:
    
  //! state 
  gate::STATE _state;
  
   //! trigger time
  double  _time;
  
  //! MC energy
  double _MCenergy;
  
  //! Reconstructed
  double _energy;

  /*------- Reconstructed info -----*/

  //! multimap of hits: key specificies type (PMT, SiPM, ...)
  std::multimap<gate::SENSORTYPE, gate::Hit*> _hits;

  //! multimap of hit-maps
  std::multimap<gate::SENSORTYPE, gate::HitMap*> _hmaps;
  
  //! multimap of clusters: key specificies type (PMT, SiPM, ...)
  std::multimap<gate::SENSORTYPE, gate::Cluster*> _clusters;
  
  //! multimap of tracks
  std::multimap<gate::SENSORTYPE, gate::Track*> _tracks;
  
  //! vector of reconstructed particles in this event
  std::vector<gate::Particle*> _parts;

  /*------- MC true info -----*/
  
  //! vector of true particles in this event
  std::vector<gate::MCParticle*> _tparts;

  //! vector of true hits (energy deposits in bulk)
  std::vector<gate::MCHit*> _thits;
  
  //! vector of true tracks (collection of true hits)
  std::vector<gate::MCTrack*> _ttracks;

  ClassDef(gate::Event,1)

}; 

inline int gate::Event::GetEventID() const { return this->GetID(); }

inline void gate::Event::SetEventID(int id) { this->SetID(id); }

inline double gate::Event::GetTime() const { return _time; }

inline void gate::Event::SetTime(double t) { _time = t; }

inline double gate::Event::GetEnergy() const { return _energy; }

inline void gate::Event::SetEnergy(double e) { _energy = e; }

inline double gate::Event::GetMCEnergy() const { return _MCenergy; }

inline void gate::Event::SetMCEnergy(double e) { _MCenergy = e; }

inline void gate::Event::SetState(gate::STATE st) { _state = st; }

inline gate::STATE gate::Event::GetState() const { return _state; }

std::ostream& operator << (std::ostream& s, const gate::Event& evt); 

#endif

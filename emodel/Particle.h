#ifndef __Particle_H__
#define __Particle_H__

/**
 * @file Particle.h
 *
 * @class Particle
 * 
 * @brief Class for reconstructed particle 
 *
 * @details  Basic particle porperties and detector response, like tracks and hits
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date March 2015
 *
 */

#include <iostream>

#include<TSystem.h>

#include<BParticle.h>
#include<Track.h>

namespace gate{class Particle;}

class gate::Particle : public gate::BParticle {
  
 public:
  
  //! default constructor
  Particle();
  
  //! destructor
  virtual ~Particle(){};

  //! add track
  void AddTrack(Track* trk);
  
  //! retrieve  tracks
  const std::vector<const Track*>& GetTracks() const;

  //! print info
  void Info(ostream& s) const;

protected:
  
  //! vector of true tracks
  std::vector<const gate::Track*> _tracks;

  ClassDef(gate::Particle,1)

};

inline  void  gate::Particle::AddTrack(Track* trk){
  _tracks.push_back(trk);}

inline const std::vector<const gate::Track*>&  
gate::Particle::GetTracks() const { return _tracks;}
  
ostream& operator << (ostream& s, const gate::Particle& p);

#endif

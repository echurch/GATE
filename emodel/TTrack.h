#ifndef __TTrack_H__
#define __TTrack_H__

/**
 * @file TTrack.h
 *
 * @class TTrack
 * 
 * @brief Class for true track objects
 *
 * @details Contains a collection of hits. 
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

#include<BTrack.h>

#include<Particle.h>

namespace gate{class TTrack;}

class gate::TTrack : public gate::BTrack {

 public:
 
  //! default constructor
  TTrack();
  
  //! destructor
  virtual ~TTrack(){}
  
  //! retrieve particle generating the track
  const Particle& GetParticle() const;

  //! set particle generating the track
  void SetParticle(gate::Particle* p);
   
  //! print event into stream
  void Info(ostream& s) const;

 protected:
  
  //! true particle responsible for the track
  const  gate::Particle* _part;

  ClassDef(gate::TTrack,1)

};

inline const gate::Particle& gate::TTrack::GetParticle() const {return *_part;}
//inline void gate::TTrack::SetParticle(const gate::Particle& p)  { _part = &p;}
inline void gate::TTrack::SetParticle(gate::Particle* p)  { _part = p;}

ostream& operator << (ostream& s, const gate::TTrack& trk) ;

#endif

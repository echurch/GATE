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
   
  //! print event into stream
  void Info(ostream& s) const;

 protected:
  
  //! true particle responsible for the track
 const  Particle* _part;

  ClassDef(gate::TTrack,1)

};

inline const gate::Particle& gate::TTrack::GetParticle() const {return *_part;}

ostream& operator << (ostream& s, const gate::TTrack& trk) ;

#endif

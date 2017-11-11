#ifndef __Particle_H__
#define __Particle_H__

/**
 * @file Particle.h
 *
 * @class Particle
 * 
 * @brief Class for reconstructed particle 
 *
 * @details  Basic particle porperties and detector response
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date March 2015
 *
 * @ingroup emodel
 */

#include <BParticle.h>
#include <Track.h>

namespace gate{class Particle;}

class gate::Particle : public gate::BParticle {
  
 public:
  
  //! default constructor
  Particle();
  
  //! destructor
  virtual ~Particle(){};
  
  //! set state
  void SetState(gate::STATE s);

  //! get state
 gate::STATE GetState() const;

  //! print info
  void Info(std::ostream& s=std::cout) const;

protected:
  
  //! reconstruction state
  gate::STATE _state;

  ClassDef(gate::Particle,1)

};

inline void gate::Particle::SetState(gate::STATE s){_state = s;}
inline gate::STATE gate::Particle::GetState()const{return _state;}
  
std::ostream& operator << (std::ostream& s, const gate::Particle& p);

#endif

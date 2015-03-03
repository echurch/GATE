#ifndef __THit_H__
#define __THit_H__

/**
 * @file THit.h
 *
 * @class THit
 * 
 * @brief True hit: energy deposit in bulk
 *
 * @details Contains true particle interaction information, like energy deposition
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

#include<Environment.h>
#include<BHit.h>
#include<Particle.h>

namespace gate{class THit;}

class gate::THit : public gate::BHit {

 public:

  //! default constructor
  THit();

  //! default destructor
  virtual ~THit(){};
  
  //! retrieve particle generating the hit
  const Particle& GetParticle() const;

  //! set particle generating the hit
  void SetParticle(gate::Particle* p);

  //! print info
  void Info(ostream& s) const;
  
 private:
  
  //! particle responsible for the hit
  const gate::Particle* _part;

  ClassDef(gate::THit,1)

};

inline const gate::Particle& gate::THit::GetParticle() const {return *_part;}
//inline void gate::THit::SetParticle(const gate::Particle& p)  { _part = &p;}
inline void gate::THit::SetParticle(gate::Particle* p)  { _part = p;}

ostream& operator << (ostream& s, const gate::THit& h); 

#endif

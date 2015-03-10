#ifndef __MCHit_H__
#define __MCHit_H__

/**
 * @file MCHit.h
 *
 * @class MCHit
 * 
 * @brief True MC hit: energy deposit in bulk
 *
 * @details Contains true particle interaction information, like energy deposition
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date March 2015
 *
 * @ingroup emodel
 */

#include <iostream>

#include <TSystem.h>

#include <Environment.h>
#include <BHit.h>
#include <MCParticle.h>

namespace gate{class MCHit;}

class gate::MCHit : public gate::BHit {

 public:

  //! default constructor
  MCHit();

  //! default destructor
  virtual ~MCHit(){};
  
  //! retrieve particle generating the hit
  const gate::MCParticle& GetParticle() const;

  //! set particle generating the hit
  void SetParticle(gate::MCParticle* p);

  //! print info
  void Info(std::ostream& s) const;
  
 private:
  
  //! particle responsible for the hit
  const gate::MCParticle* _part;

  ClassDef(gate::MCHit,1)

};

inline const gate::MCParticle& gate::MCHit::GetParticle() const {return *_part;}

inline void gate::MCHit::SetParticle(gate::MCParticle* p)  { _part = p;}

std::ostream& operator << (std::ostream& s, const gate::MCHit& h); 

#endif

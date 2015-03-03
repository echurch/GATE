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
 */

#include <iostream>

#include<TSystem.h>

#include<Environment.h>
#include<BHit.h>
#include<MCParticle.h>

namespace gate{class MCParticle;}
namespace gate{class MCHit;}

class gate::MCHit : public gate::BHit {

 public:

  //! default constructor
  MCHit();

  //! default destructor
  virtual ~MCHit(){};
  
  //! retrieve particle generating the hit
  const gate::MCParticle& GetMCParticle() const;

  //! set particle generating the hit
  void SetMCParticle(gate::MCParticle* p);

  //! print info
  void Info(ostream& s) const;
  
 private:
  
  //! particle responsible for the hit
  const gate::MCParticle* _part;

  ClassDef(gate::MCHit,1)

};

inline const gate::MCParticle& gate::MCHit::GetMCParticle() const {return *_part;}

inline void gate::MCHit::SetMCParticle(gate::MCParticle* p)  { _part = p;}

ostream& operator << (ostream& s, const gate::MCHit& h); 

#endif

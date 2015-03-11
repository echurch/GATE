#ifndef __MCParticle_H__
#define __MCParticle_H__

/**
 * @file MCParticle.h
 *
 * @class MCParticle
 * 
 * @brief Class for MC-true particle 
 *
 * @details  Basic particle porperties, interactions in detector and relatives
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

namespace gate{class MCParticle;}

class gate::MCParticle : public gate::BParticle {
  
 public:
  
  //! default constructor
  MCParticle();
  
  //! destructor
  virtual ~MCParticle(){};
  
  //! set mother
  void SetMother(gate::MCParticle* mom);

  //! retrieve mother
  const gate::MCParticle& GetMother() const;
  
  //! set daughter
  void  AddDaughter(gate::MCParticle* dau);

  //! return vector of daughters
  const std::vector<const gate::MCParticle*>&  GetDaughters() const;
   
  //! set GEANT4 code
  void SetG4(int g4) ;
  
  //! Get GEANT4 code
  int GetG4() const;
  
  //! set primary flag 
  void SetPrimary(bool p);
  
  //! get primary flag
  bool IsPrimary() const;

  //! print info
  void Info(std::ostream& s) const;

protected:
  
  //! GEANT4 code
  int _G4;
  
  //! primary particle?
  bool _primary;
  
  //! particle name ? ( BPartiicle?)

  //! creation process ?
  
  //! initial volume ?

  //! final volume ?

  //! pointer to its mother particle if any
  const gate::MCParticle* _mother;

  //! vector of daughter particles
  std::vector<const gate::MCParticle*> _daughters;
  
  ClassDef(gate::MCParticle,1)

};

inline  void gate::MCParticle::SetG4(int g4) { _G4 = g4;}

inline int gate::MCParticle::GetG4() const{ return _G4; }

inline  void gate::MCParticle::SetPrimary(bool p) { _primary = p;}

inline  bool gate::MCParticle::IsPrimary() const { return _primary;}

inline  void gate::MCParticle::SetMother(gate::MCParticle* mom)
{_mother=mom;}

inline  const gate::MCParticle& gate::MCParticle::GetMother() const 
{return *_mother;}

inline  void  gate::MCParticle::AddDaughter(gate::MCParticle* dau){
  _daughters.push_back(dau);}

inline const std::vector<const gate::MCParticle*>&  
gate::MCParticle::GetDaughters() const{ return _daughters;}
  
std::ostream& operator << (std::ostream& s, const gate::MCParticle& p);

#endif

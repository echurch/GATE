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

#include <GATE/BParticle.h>

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
  
  //! set creation process
  void SetCreatorProc(std::string v);
  
  //! set initial volume
  void SetInitialVol(std::string v);
  
  //! get initial volume
  std::string GetInitialVol() const;

  //! set final volume
  void SetFinalVol(std::string v);
  
  //! get final volume
  std::string GetFinalVol() const;

  //! get creation process
  std::string GetCreatorProc()const;
  
  //! set path length
  void SetPathLength(double l);

  //! get path length
  double GetPathLength() const;

  //! print info
  void Info(std::ostream& s=std::cout) const;

protected:
  
  //! GEANT4 code
  int _G4;
  
  //! primary particle?
  bool _primary;
 
  //! creation process 
  std::string _creatProc;
  
  //! creation volume 
  std::string _initVol;
  
  //! destruction volume 
  std::string _finVol;
  
  //! particle path length
  double _plength;

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
  
inline void gate::MCParticle::SetCreatorProc(std::string p){ _creatProc=p;}
inline std::string gate::MCParticle::GetCreatorProc()const{return _creatProc;}

inline void gate::MCParticle::SetInitialVol(std::string v){ _initVol=v;}
inline std::string gate::MCParticle::GetInitialVol()const{return _initVol;}

inline void gate::MCParticle::SetFinalVol(std::string v){ _finVol=v;}
inline std::string gate::MCParticle::GetFinalVol()const{return _finVol;}

inline void gate::MCParticle::SetPathLength(double l){ _plength=l;}
inline double gate::MCParticle::GetPathLength()const{return _plength;}

std::ostream& operator << (std::ostream& s, const gate::MCParticle& p);

#endif

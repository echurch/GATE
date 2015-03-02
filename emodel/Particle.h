#ifndef __Particle_H__
#define __Particle_H__

/**
 * @file Particle.h
 *
 * @class Particle
 * 
 * @brief Class for particle objects
 *
 * @details Contains basic particle properties and relatives 
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

#include<BObject.h>
#include<Vector4D.h>
#include<Point3D.h>

namespace gate{class Particle;}

class gate::Particle : public gate::BObject {
  
 public:
  
  //! default constructor
  Particle();
  
  //! destructor
  virtual ~Particle();

  //! set initial momentum
  void SetInitialMom(gate::Vector4D); 
  
  //! set initial momentum
  void SetInitialMom(double x, double y, double z, double p); 
  
  //! set final momentum
  void SetFinalMom(gate::Vector4D); 
  
  //! set final momentum
  void SetFinalMom(double x, double y, double z, double p); 
  
  //! set creation vertex
  void SetInitialVtx(gate::Point3D); 
  
  //! set creation vertex
  void SetInitialVtx(double x, double y, double z); 
  
  //! set destruction vertex
  void SetFinalVtx(gate::Point3D); 
  
  //! set destruction vertex
  void SetFinalVtx(double x, double y, double z); 
  

  //! get initial momentum
  const gate::Vector4D& GetInitialMom() const ; 
  
  //! get final momentum
  const gate::Vector4D& GetFinalMom() const; 
    
  //! get creation vertex
  const Point3D& GetInitialVtx() const ; 
    
  //! get destruction vertex
  const Point3D& SetFinalVtx() const ; 
  
  //!set pdg code
  void SetPDG(int pdg);

  //! get PDG
  int GetPDG() const;
  
  //! set mother
  void SetMother(const gate::Particle& mom);

  //! retrieve mother
  const gate::Particle& GetMother() const;
  
  //! set daughter
  void  AddDaughter(const gate::Particle& dau);

  //! return vector of daughters
  const std::vector<const gate::Particle*>&  GetDaughters() const;
  
  //! print info
  void Info(ostream& s) const;

protected:
  
  //! PDG code
  int _pdg;

  //! creation vertex
  gate::Point3D _ivtx;

  //! decay/stopping vertex
  gate::Point3D _fvtx;

  //! initial momentum
  gate::Vector4D _ip4;
  
  //! final momentum
  gate::Vector4D _fp4;
  
  //! pointer to its mother particle if any
  const gate::Particle* _mother;

  //! vector of daughter particles
  std::vector<const gate::Particle*> _daughters;
   
  ClassDef(gate::Particle,1)

};

inline void gate::Particle::SetInitialMom(gate::Vector4D v4) { _ip4 = v4; }
  
inline  void gate::Particle::SetInitialMom(double x, double y, double z, double p){ 
  _ip4 = gate::Vector4D(x,y,z,p);}
 
inline  void gate::Particle::SetFinalMom(gate::Vector4D v4){ _fp4=v4; } 

inline  void gate::Particle::SetFinalMom(double x, double y, double z, double p){
  _fp4 = gate::Vector4D(x,y,z,p);}
  
inline  void gate::Particle::SetInitialVtx(gate::Point3D v){ _ivtx = v;}

inline  void gate::Particle::SetInitialVtx(double x, double y, double z){
  _ivtx=gate::Point3D(x,y,z);}

inline  void gate::Particle::SetFinalVtx(gate::Point3D v) { _fvtx = v;}

inline   void gate::Particle::SetFinalVtx(double x, double y, double z){
  _fvtx=gate::Point3D(x,y,z);}

inline  const gate::Vector4D& gate::Particle::GetInitialMom() const { return _ip4; } 

inline  const gate::Vector4D& gate::Particle::GetFinalMom() const { return _fp4; } 

inline  const gate::Point3D& gate::Particle::GetInitialVtx() const { return _ivtx; } 

inline  const gate::Point3D& gate::Particle::SetFinalVtx() const { return _fvtx; } 

inline  void gate::Particle::SetPDG(int pdg) { _pdg = pdg; }

inline  int gate::Particle:: GetPDG() const { return _pdg; }

inline  void gate::Particle::SetMother(const gate::Particle& mom){_mother=&mom;}

inline  const gate::Particle& gate::Particle::GetMother() const {return *_mother;}

inline  void  gate::Particle::AddDaughter(const gate::Particle& dau){
  _daughters.push_back(&dau);}

inline const std::vector<const gate::Particle*>&  
gate::Particle::GetDaughters() const{ return _daughters;}
  
  
#endif

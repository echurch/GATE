#ifndef __BParticle_H__
#define __BParticle_H__

/**
 * @file BParticle.h
 *
 * @class BParticle
 * 
 * @brief Base class for particle objects
 *
 * @details Contains basic particle properties and tracks
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date January 2015
 *
 * @ingroup emodel
 */

#include <GATE/BObject.h>
#include <GATE/Vector4D.h>
#include <GATE/Point3D.h>
#include <GATE/BTrack.h>

namespace gate{class BParticle;}

class gate::BParticle : public gate::BObject {
  
 public:
  
  //! default constructor
  BParticle();
  
  //! destructor
  virtual ~BParticle(){};

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
  
  //! set creation vertex
  void SetInitialVtx(gate::Vector4D); 
  
  //! set creation vertex
  void SetInitialVtx(double x, double y, double z, double t); 
  
  //! set destruction vertex
  void SetFinalVtx(gate::Vector4D); 
  
  //! set destruction vertex
  void SetFinalVtx(double x, double y, double z, double t); 
  

  //! get initial momentum
  const gate::Vector4D& GetInitialMom() const ; 
  
  //! get final momentum
  const gate::Vector4D& GetFinalMom() const; 
    
  //! get creation vertex 4D (xyz+time)
  const Vector4D& GetInitialVtx4D() const ; 
    
  //! get destruction vertex 4D (xzt+time)
  const Vector4D& GetFinalVtx4D() const ; 

  //! get creation vertex 
  Point3D GetInitialVtx() const ; 
    
  //! get destruction vertex 
  Point3D GetFinalVtx() const ; 
  
  //!set pdg code
  void SetPDG(int pdg);

  //! get PDG
  int GetPDG() const;
  
  //! add track
  void AddTrack(BTrack* trk);
  
  //! retrieve tracks
  const std::vector<const BTrack*>& GetTracks() const;
  
  //! clear tracks
  void ClearTracks();

  //! add mirror particle
  void AddMirrorParticle(gate::BParticle* p);

  //! retrieve mirror particles 
  const std::vector<const gate::BParticle*>& GetMirrorParticles() const; 
  
  //! clear mirror particles
  void ClearMirrorParticles();

  //! print info
  virtual void Info(std::ostream& s=std::cout) const;

protected:
  
  //! PDG code
  int _pdg;

  //! creation vertex
  gate::Vector4D _ivtx;

  //! decay/stopping vertex
  gate::Vector4D _fvtx;

  //! initial momentum
  gate::Vector4D _ip4;
  
  //! final momentum
  gate::Vector4D _fp4;
   
  //! vector of  tracks
  std::vector<const gate::BTrack*> _tracks;

  //! vector of mirror particles (i,e, representantions in MC or DATA)
  std::vector<const BParticle*> _mparts;

  ClassDef(gate::BParticle,1)

};

inline void gate::BParticle::SetInitialMom(gate::Vector4D v4) { _ip4 = v4; }
  
inline  void gate::BParticle::SetInitialMom(double x, double y, double z, double p){ 
  _ip4 = gate::Vector4D(x,y,z,p);}
 
inline  void gate::BParticle::SetFinalMom(gate::Vector4D v4){ _fp4=v4; } 

inline  void gate::BParticle::SetFinalMom(double x, double y, double z, double p){
  _fp4 = gate::Vector4D(x,y,z,p);}

  
inline  void gate::BParticle::SetInitialVtx(gate::Point3D v){_ivtx.SetCoord3D(v);}

inline  void gate::BParticle::SetInitialVtx(double x, double y, double z){
  _ivtx.SetCoord3D(gate::Point3D(x,y,z));}

inline  void gate::BParticle::SetFinalVtx(gate::Point3D v){_fvtx.SetCoord3D(v);}

inline   void gate::BParticle::SetFinalVtx(double x, double y, double z){
  _fvtx.SetCoord3D(gate::Point3D(x,y,z));}

inline  void gate::BParticle::SetInitialVtx(gate::Vector4D v){_ivtx = v;}

inline  void gate::BParticle::SetInitialVtx(double x, double y, double z, double t){
  _ivtx = gate::Vector4D(x,y,z,t);}

inline  void gate::BParticle::SetFinalVtx(gate::Vector4D v){_fvtx = v;}

inline   void gate::BParticle::SetFinalVtx(double x, double y, double z, double t){
  _fvtx = gate::Vector4D(x,y,z,t);}

inline  const gate::Vector4D& gate::BParticle::GetInitialMom() const {return _ip4;} 

inline  const gate::Vector4D& gate::BParticle::GetFinalMom() const { return _fp4;} 

 inline  gate::Point3D gate::BParticle::GetInitialVtx() const { return _ivtx.GetCoord3D();} 

 inline  gate::Point3D gate::BParticle::GetFinalVtx() const { return _fvtx.GetCoord3D();} 

 inline  const gate::Vector4D& gate::BParticle::GetInitialVtx4D() const { return _ivtx;} 

 inline  const gate::Vector4D& gate::BParticle::GetFinalVtx4D() const { return _fvtx;}

inline  void gate::BParticle::SetPDG(int pdg) { _pdg = pdg; }

inline  int gate::BParticle:: GetPDG() const { return _pdg; }
  
inline  void  gate::BParticle::AddTrack(BTrack* trk){
  _tracks.push_back(trk);}

inline const std::vector<const gate::BTrack*>&  
gate::BParticle::GetTracks() const { return _tracks;}

inline void gate::BParticle::ClearTracks(){_tracks.clear();}

inline void gate::BParticle::AddMirrorParticle(gate::BParticle* p)
{_mparts.push_back(p);}

inline const std::vector<const gate::BParticle*>& 
gate::BParticle::GetMirrorParticles()const { return _mparts;}

inline void gate::BParticle::ClearMirrorParticles(){_mparts.clear();}

std::ostream& operator << (std::ostream& s, const gate::BParticle& p);

#endif

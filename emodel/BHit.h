#ifndef __BHit_H__
#define __BHit_H__

/**
 * @file BHit.h
 *
 * @class BHit
 * 
 * @brief Base class for a hit
 *
 * @details Holds 3D position, amplitude, time and mirror hits
 * 
 * @ingroup emodel
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
#include <GATE/Point3D.h>

namespace gate{class BHit;}

class gate::BHit : public gate::BObject{

 public:

  //! default constructor
  BHit();

  //! default destructor
  virtual ~BHit();

 private:
    
  //! hit coordinates
  gate::Point3D _pos;

  //! hit amplitude 
  double _amp;
 
  //! hit time
  double _time;
  
  //! vector of mirror hits
  std::vector<BHit*> _mhits;

 public:
   
  //! set position
  void SetPosition(gate::Point3D);

  //! set position
  void SetPosition(double x, double y, double z);

  //! get position
  const gate::Point3D& GetPosition() const;

  //! Get hit amplitude 
  double GetAmplitude() const;
  
  //! Set hit ampliude 
  void SetAmplitude(double amp);

  //! Get hit time
  double GetTime() const;
  
  //! Set hit time 
  void SetTime(double time);
  
   //! add mirror hit
  void AddMirrorHit(gate::BHit* h);

  //! retrieve mirror hits 
  const std::vector<gate::BHit*>& GetMirrorHits() const; 
  
  //! print hit into stream
  void Info(std::ostream& s=std::cout) const;

  ClassDef(gate::BHit,1)

    };

inline void gate::BHit::SetAmplitude(double amp) { _amp = amp; }
inline double gate::BHit::GetAmplitude() const { return _amp; }

inline void gate::BHit::SetTime(double time) { _time = time; }
inline double gate::BHit::GetTime() const { return _time; }

inline void gate::BHit::SetPosition(gate::Point3D pos) { _pos = pos; }
inline void gate::BHit::SetPosition(double x, double y, double z) { 
  _pos = gate::Point3D(x,y,z); }
inline const gate::Point3D& gate::BHit::GetPosition() const { return _pos; }

inline void gate::BHit::AddMirrorHit(gate::BHit* h)
{_mhits.push_back(h);}

inline const std::vector<gate::BHit*>& gate::BHit::GetMirrorHits() const
{ return _mhits;}


std::ostream& operator << (std::ostream& s, const gate::BHit& bhit); 

#endif

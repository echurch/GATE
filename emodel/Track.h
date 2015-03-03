#ifndef __Track_H__
#define __Track_H__

/**
 * @file Track.h
 *
 * @class Track
 * 
 * @brief Class for track objects
 *
 * @details Contains a collection of hits, sensor type, state, ... 
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date February 2015
 *
 */

#include <iostream>

#include<TSystem.h>
#include<Hit.h>
#include<BTrack.h>


namespace gate{class Track;}

class gate::Track : public gate::BTrack {

 public:
 
  //! default constructor
  Track();
  
  //! destructor
  virtual ~Track(){}
  
  //! Get sensor type 
  gate::SENSORTYPE GetSensorType() const;
  
  //! Set sensor type 
  void SetSensorType(gate::SENSORTYPE type);

  //! Get hit state
  gate::STATE GetState() const;
  
  //! add hit
  void AddHit(gate::Hit* hit);
  
  //! retrieve hits 
  const std::vector<gate::Hit*>& GetHits() const; 
   
  //! Set hit state 
  void SetState(gate::STATE state);

  //! print event into stream
  void Info(ostream& s) const;
  
 protected:
  
  //! sensor type (SIPM or PMT)
  gate::SENSORTYPE _sType;
  
  //! hit state (RAW, RECOED, CALIB) for MC or DATA
  gate::STATE _state;

  ClassDef(gate::Track,1)

};

inline void gate::Track::AddHit(gate::Hit* hit){_hits.push_back((gate::BHit*) hit);}
inline const std::vector<gate::Hit*>& gate::Track::GetHits() const
{return (const std::vector<gate::Hit*>&)_hits;}

inline void gate::Track::SetSensorType(gate::SENSORTYPE t) { _sType = t; }
inline gate::SENSORTYPE gate::Track::GetSensorType() const { return _sType; }

inline void gate::Track::SetState(gate::STATE st) { _state = st; }
inline gate::STATE gate::Track::GetState() const { return _state; }

ostream& operator << (ostream& s, const gate::Track& trk) ;

#endif

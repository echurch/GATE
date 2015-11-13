#ifndef __Prop_H__
#define __Prop_H__

/**
 * @file Properties.h
 *
 * @class Properties
 *
 * @brief Holds all detector properties
 *
 * @details Contains basic properties of detector for a given run  
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date Novemeber 2015
 *
 * @ingroup emodel
 */

#include<GATE/BObject.h>

namespace gate{class Properties;}

class gate::Properties : public gate::BObject{

 public:
  
  //! default constructor
  Properties();
  
  //! default destructor
  virtual ~Properties();
  
  //! clear memebers
  void Clear();

 private:
  
  //! drif velocity
  double _driftVel;

  //! drif velocity error
  double _driftVelError;

  //! electron lifetime
  double _eLifeTime;

  //! electron lifetime error
  double _eLifeTimeError;

 
public:
  
  //! Get drift velocity
  double GetDriftVel() const;

  //! Set drift velocity
  void SetDriftVel(double v);

  //! Get drift velocity error
  double GetDriftVelError() const;

  //! Set drift velocity error
  void SetDriftVelError(double e);

  //! Get e- life-time
  double GetElecLifeTime() const;
  
  //! Set e- life-time
  void SetElecLifeTime(double t);
  
  //! Get e- life-time error
  double GetElecLifeTimeError() const;
  
  //! Set e- life-time error
  void SetElecLifeTimeError(double e);
       
  void Info(std::ostream& s=std::cout) const;

  ClassDef(gate::Properties,1)

};


inline void gate::Properties::SetDriftVel(double v){ _driftVel = v;}
inline double gate::Properties::GetDriftVel() const { return _driftVel;}

inline void gate::Properties::SetDriftVelError(double e){ _driftVelError = e;}
inline double gate::Properties::GetDriftVelError() const { 
  return _driftVelError;}

inline void gate::Properties::SetElecLifeTime(double v){ _eLifeTime = v;}
inline double gate::Properties::GetElecLifeTime() const { 
  return _eLifeTime;}

inline void gate::Properties::SetElecLifeTimeError(double e){ 
  _eLifeTimeError = e;}
inline double gate::Properties::GetElecLifeTimeError() const { 
  return _eLifeTimeError;}


std::ostream& operator << (std::ostream& s, const gate::Properties& prop); 

#endif

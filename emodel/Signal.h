#ifndef __Signal_H__
#define __Signal_H__

/**
 * @file Signal.h
 *
 * @class Signal
 *
 * @brief S1 or S2 signal holding hitmap for cathode and anode
 *
 * @details Describes a S1/S2 signal, with global parameters (times, amplitude, ...) and containing hitmaps for cathode and anode
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date March 2015
 *
 * @ingroup emodel
 */

namespace gate{class Signal;}

#include <HitMap.h>

class gate::Signal : public BObject {
  
  public:
  
  //! default constructor
  Signal();
  
  //! destructor
  virtual ~Signal(){}
  
  //! set signal type (S1 or S2)
  void SetSignalType(gate::SIGNALTYPE type); 
  
  //! set signal type (S1 or S2)
  gate::SIGNALTYPE GetSignalType() const;
  
  //! set amplitude
  void SetAmplitude(double a); 

  //! get amplitude
  double GetAmplitude() const; 
  
  //! set signal start time
  void SetStartTime(double t); 

  //! set signal start time
  double GetStartTime() const; 
  
  //! set signal end time
  void SetEndTime(double t); 

  //! get signal end time
  double GetEndTime() const; 

  //! Set cathode hitmap
  void SetCatHitMap(gate::HitMap* hm);

  //! Set cathode hitmap
  const gate::HitMap& GetCatHitMap() const;
  
  //! Set anode hitmap
  void SetAnoHitMap(gate::HitMap* hm);
  
  //! Get anode hitmap
  const gate::HitMap& GetAnoHitMap() const;

  //! print pulse into stream
  void Info(std::ostream& s=std::cout) const;
  
 protected:
  
  //! signal type (S1 or S2)
  gate::SIGNALTYPE _sType;
  
  //! signal amplitude 
  double _amp;

  //! signal start  time
  double _sTime;
  
  //! signal end time 
  double _eTime;

  //! hitmap for cathode
  const gate::HitMap* _chitmap;

  //! hitmap for anode
  const gate::HitMap* _ahitmap;

  ClassDef(gate::Signal,1)

};

inline void gate::Signal::SetSignalType(gate::SIGNALTYPE t) { _sType = t; }
inline gate::SIGNALTYPE gate::Signal::GetSignalType()  const { return _sType;}

inline void gate::Signal::SetAmplitude(double a) { _amp = a; }
inline double gate::Signal::GetAmplitude() const { return _amp;}

inline void gate::Signal::SetStartTime(double t) { _sTime = t; }
inline double gate::Signal::GetStartTime()  const { return _sTime;}

inline void gate::Signal::SetEndTime(double t) { _eTime = t; }
inline double gate::Signal::GetEndTime()  const { return _eTime;}

inline void gate::Signal::SetCatHitMap(gate::HitMap* hm){ _chitmap=hm; }
inline const gate::HitMap& gate::Signal::GetCatHitMap()const{return *_chitmap;}
  
inline void gate::Signal::SetAnoHitMap(gate::HitMap* hm){ _ahitmap=hm; }
inline const gate::HitMap& gate::Signal::GetAnoHitMap()const{return *_ahitmap;}

std::ostream& operator << (std::ostream& s, const gate::Signal& sig); 

#endif

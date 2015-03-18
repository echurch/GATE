#ifndef __HitMap_H__
#define __HitMap_H__

/**
 * @file HitMap.h
 *
 * @class HitMap
 *
 * @brief Time hit-map for reconstructed signals 
 *
 * @details For each reconstructed signal time, contains a time vector with waveform amplitudes for each sensor. Such data are represeted as a vector of <sensor,amplitude> maps. Waveform zones with  no amplitue are rejected.
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>, from Art product
 *
 * @version Revision 1.0.0
 *
 * @date January 2015
 *
 * @ingroup emodel
 */

namespace gate{class HitMap;}

#include <GATE/BObject.h>

class gate::HitMap : public BObject {
  
 public:
  
  //! default constructor
  HitMap();

  //! default destructor
  virtual ~HitMap(){};
  
  //! set sensor type (PMT or SiPM)
  void SetSensorType(gate::SENSORTYPE type); 
  
  //! set sensor type (PMT or SiPM)
  gate::SENSORTYPE GetSensorType() const;

  //! set signal type (S1 or S2)
  void SetSignalType(gate::SIGNALTYPE type); 
  
  //! set signal type (S1 or S2)
  gate::SIGNALTYPE GetSignalType() const;

  //! set signal start time
  void SetStartTime(double t); 

  //! set signal start time
  double GetStartTime() const; 
  
  //! set signal end time
  void SetEndTime(double t); 

  //! get signal end time
  double GetEndTime() const; 

  //! set time sample size
  void SetTimeSample(double t); 

  //! get time sample size
  double GetTimeSample() const; 

  //! set amplitude
  void SetAmplitude(double a); 

  //! get amplitude
  double GetAmplitude() const; 
  
  //! get time map
  std::vector<std::map<int,double> > GetTimeMap() const;
  
  //! set time map
  void SetTimeMap(std::vector<std::map<int,double> > m);

  //! get map for time slice
  std::map<int,double>  GetMap(size_t isample) const;
  
  //! get channels id in isample time slice
  std::vector<int> GetChannels(size_t isample) const;
  
  //! get channels id in isample time slice
  std::vector<double> GetAmplitudes(size_t isample) const;
  

 private:
  
  //! signal sensor type (PMT or SiPM)
  gate::SENSORTYPE _sensType;

  //! signal type (S1 or S2)
  gate::SIGNALTYPE _sType;
  
  //! signal amplitude 
  double _amp;

  //! signal start  time
  double _sTime;
  
  //! signal end time 
  double _eTime;
  
  //! size of time samples
  double _tSample;

  //! time map for signal
  std::vector<std::map<int,double> > _tmap; 
  
 public:

  //! print pulse into stream
  void Info(std::ostream& s=std::cout) const;
  
  ClassDef(HitMap,1)

};

inline void gate::HitMap::SetSensorType(gate::SENSORTYPE t){ _sensType = t; }
inline gate::SENSORTYPE gate::HitMap::GetSensorType() const{ return _sensType;}

inline void gate::HitMap::SetSignalType(gate::SIGNALTYPE t) { _sType = t; }
inline gate::SIGNALTYPE gate::HitMap::GetSignalType()  const { return _sType;}

inline void gate::HitMap::SetAmplitude(double a) { _amp = a; }
inline double gate::HitMap::GetAmplitude() const { return _amp;}

inline void gate::HitMap::SetStartTime(double t) { _sTime = t; }
inline double gate::HitMap::GetStartTime()  const { return _sTime;}

inline void gate::HitMap::SetEndTime(double t) { _eTime = t; }
inline double gate::HitMap::GetEndTime()  const { return _eTime;}

inline void gate::HitMap::SetTimeSample(double t) { _tSample = t; }
inline double gate::HitMap::GetTimeSample()  const { return _tSample;}

inline void gate::HitMap::SetTimeMap(std::vector<std::map<int,double> > m) { 
  _tmap = m; }
inline std::vector<std::map<int,double> > gate::HitMap::GetTimeMap() const { 
  return _tmap;}

inline std::map<int,double> gate::HitMap::GetMap(size_t isample) const { 
  return _tmap[isample];}

std::ostream& operator << (std::ostream& s, const gate::HitMap& hmap); 

#endif

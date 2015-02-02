#ifndef __HitMap_H__
#define __HitMap_H__

/**
 * @file HitMap.h
 * 
 * @brief HitMap class: time hit map for reconstructed signals 
 *
 * @details For each reconstructed signal time, time vector with waveform amplitudes. Waveform zones with  no amplitue are rejected.
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>, from Art product
 *
 * @version Revision 1.0.0
 *
 * @date January 2015
 *
 */

namespace gate{class HitMap;}

#include <iostream>
#include <map>

#include<TSystem.h>

#include<Environment.h>


class gate::HitMap {
  
 public:
  
  //! default constructor
  HitMap();

  //! default destructor
  virtual ~HitMap(){};
  
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
  
  //! get time map
  std::vector<std::map<int,double> > GetTimeMap() const;
  
  //! set cathode map
  void SetTimeMap(std::vector<std::map<int,double> > m);

  //! get map for time slice
  std::map<int,double>  GetMap(size_t isample) const;
  
 private:
  
  //! signal type (S1 or S2)
  gate::SIGNALTYPE _sType;

  //! signal start  time
  double _sTime;
  
  //! signal end time 
  double _eTime;
  
  //! size of time samples
  double _tSample;

  //! time map for signal
  std::vector<std::map<int,double> > _tmap; 
  
  //! get channels id in isample time slice
  std::vector<int> GetChannels(size_t isample) const;
  
  //! get channels id in isample time slice
  std::vector<double> GetAmplitudes(size_t isample) const;
  
 public:

  //! print pulse into stream
  void Info(ostream& s) const;
  
  ClassDef(HitMap,1)

};

inline void gate::HitMap::SetSignalType(gate::SIGNALTYPE t) { _sType = t; }
inline gate::SIGNALTYPE gate::HitMap::GetSignalType()  const { return _sType;}

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

ostream& operator << (ostream& s, const gate::HitMap& hmap); 

#endif

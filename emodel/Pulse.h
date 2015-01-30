#ifndef __Pulse_H__
#define __Pulse_H__

/**
 * @file Pulse.h
 * 
 * @brief Pulse class: signal within a waveform
 *
 * @details A pulse is a reconstructed signal found within a waveform
 Contains charge/PE and time of the signal  
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date January 2015
 *
 */

namespace gate{class Waveform;}

#include <iostream>

#include<TSystem.h>

#include<Environment.h>
#include<ParamStore.h>
#include<Waveform.h>

namespace gate{class Pulse;}

//class gate::Pulse : public gate::ParamStore {
class gate::Pulse {

 public:

  //! default constructor
  Pulse();

  //! default destructor
  virtual ~Pulse(){};

 private:
  
  //! sensor ID
  int _sensorID;
  
  //!  pointer to waveform
  const gate::Waveform* _wform;

  //! State (RAW, RECOED, CALIB)
  gate::STATE _state;

  //! amplitude (ADC, Charge, or PE)
  double _amp;

  //! start time
  double _sTime;
  
  //! end time
  double _eTime;
  
   //! maximum amplitude  time
  double _mTime;

 public:
  
  //! Get sensor ID 
  int GetSensorID() const;
  
  //! Set sensor ID 
  void SetSensorID(int id);
  
  //! Get  waveform 
  const gate::Waveform& GetWaveform() const;

  //! Set  waveform 
  void SetWaveform(const gate::Waveform& wf);
  
  //! Get state (RAW, RECOED, CALIB)
  gate::STATE GetState() const;
  
  //! Set state (RAW, RECOED, CALIB)
  void  SetState(gate::STATE st);

  //! Get amplitude 
  double GetAmplitude() const;
  
   //! Set amplitude 
  void SetAmplitude(double amp);

  //! Get start time
  double GetStartTime() const;
  
  //! Set start time
  void SetStartTime(double t);
  
  //! Get end time
  double GetEndTime() const;
  
  //! Set end time
  void SetEndTime(double t);
  
  //! Get maximum amplitude time
  double GetMaxTime() const;
  
  //! Set maximum amplitude time
  void SetMaxTime(double t);

  //! print pulse into stream
  void Info(ostream& s) const;
  
 private:

  ClassDef(gate::Pulse,1)
};

inline void gate::Pulse::SetSensorID(int id ) { _sensorID = id; }
inline int gate::Pulse::GetSensorID() const { return _sensorID; }

inline void gate::Pulse::SetWaveform(const Waveform& wf){ _wform = &wf; }
inline const gate::Waveform& gate::Pulse::GetWaveform() const {return *_wform;}

inline void gate::Pulse::SetState(gate::STATE st) { _state = st;}
inline gate::STATE gate::Pulse::GetState() const { return _state; }

inline void gate::Pulse::SetAmplitude(double amp ){ _amp = amp; }
inline double gate::Pulse::GetAmplitude() const { return _amp;}

inline void gate::Pulse::SetStartTime(double t) {  _sTime = t; }
inline double gate::Pulse::GetStartTime() const { return _sTime; }

inline void gate::Pulse::SetEndTime(double t) {  _eTime = t; }
inline double gate::Pulse::GetEndTime() const { return _eTime; }

inline void gate::Pulse::SetMaxTime(double t) {  _mTime = t; }
inline double gate::Pulse::GetMaxTime() const { return _mTime; }

ostream& operator << (ostream& s, const gate::Pulse& pulse); 

#endif

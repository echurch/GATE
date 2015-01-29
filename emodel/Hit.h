#ifndef __Hit_H__
#define __Hit_H__

/**
 * @file Hit.h
 * 
 * @brief Hit class: sensor type and response to signal
 *
 * @details Contains sensor and response (waveform, pulse, amplitude, time) 
 *               information 
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

#include<Environment.h>
#include<ParamStore.h>
#include<Pulse.h>
#include<Waveform.h>
#include<Point3D.h>

namespace gate{class Hit;}

class gate::Hit : public gate::ParamStore {

 public:

  //! default constructor
  Hit();

  //! default destructor
  ~Hit(){};

 private:
  
  //! sensor ID
  int _sensorID;
  
  //! sensor type (SIPM or PMT)
  gate::SENSORTYPE _sType;
  
  //! data type (MC-THUTH, MC or DATA)
  gate::DATATYPE _dType;
  
  //! hit state (RAW, RECOED, CALIB) for MC or DATA
  gate::STATE _state;
  
  //! sensor coordinates
  gate::Point3D _pos;

  //! hit amplitude ( ADC, Q, or PE, depending on STATE)
  double _amp;
 
  //! hit time
  double _time;

  //! waveform
  const gate::Waveform* _wform;
  
 public:
  
  //! Get sensor ID 
  int GetSensorID() const;
  
  //! Set sensor ID 
  void SetSensorID(int id);
  
  //! Get sensor type 
  gate::SENSORTYPE GetSensorType() const;
  
  //! Set sensor type 
  void SetSensorType(gate::SENSORTYPE type);

  //! Get data type 
  gate::DATATYPE GetDataType() const;
  
  //! Set data type 
  void SetDataType(gate::DATATYPE type);
  
  //! set position
  void SetPosition(gate::Point3D);

  //! get position
  const gate::Point3D& GetPosition() const;

   //! Get hit state
  gate::STATE GetState() const;
  
  //! Set hit state 
  void SetState(gate::STATE state);
  
  //! Get hit amplitude (ADC, Q or  PE depending to STATE) 
  double GetAmplitude() const;
  
  //! Set hit ampliude 
  void SetAmplitude(double amp);

  //! Get hit time
  double GetTime() const;
  
  //! Set hit time 
  void SetTime(double time);

  //! Set waveform
  void SetWaveform(const Waveform& wf);
  
  //! Get waveform
  const Waveform& GetWaveform() const;

  //! Add  pulse
  void AddPulse(const gate::Pulse& p);
  
  //! Get  pulses
  const std::vector<const gate::Pulse*>&  GetPulses() const;

  //! print hit into stream
  void Info(ostream& s) const;

  ClassDef(gate::Hit,1)

    };

inline void gate::Hit::SetWaveform(const gate::Waveform& wf ) { _wform = &wf; }
inline const gate::Waveform& gate::Hit::GetWaveform() const { return *_wform; }

inline void gate::Hit::AddPulse( const gate::Pulse& p) { 
  ((gate::Waveform*) _wform)->AddPulse(p); }
inline  const std::vector<const gate::Pulse*>&  
gate::Hit::GetPulses() const { return _wform->GetPulses();}

inline void gate::Hit::SetSensorID(int id ) { _sensorID = id; }
inline int gate::Hit::GetSensorID() const { return _sensorID; }

inline void gate::Hit::SetPosition(gate::Point3D pos) { _pos = pos; }
inline const gate::Point3D& gate::Hit::GetPosition() const { return _pos; }

inline void gate::Hit::SetAmplitude(double amp) { _amp = amp; }
inline double gate::Hit::GetAmplitude() const { return _amp; }

inline void gate::Hit::SetTime(double time) { _time = time; }
inline double gate::Hit::GetTime() const { return _time; }

inline void gate::Hit::SetSensorType(gate::SENSORTYPE t) { _sType = t; }
inline gate::SENSORTYPE gate::Hit::GetSensorType() const { return _sType; }

inline void gate::Hit::SetDataType(gate::DATATYPE t) { _dType = t; }
inline gate::DATATYPE gate::Hit::GetDataType() const { return _dType; }

inline void gate::Hit::SetState(gate::STATE st) { _state = st; }
inline gate::STATE gate::Hit::GetState() const { return _state; }

ostream& operator << (ostream& s, const gate::Hit& h); 

#endif

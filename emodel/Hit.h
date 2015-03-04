#ifndef __Hit_H__
#define __Hit_H__

/**
 * @file Hit.h
 *
 * @class Hit
 * 
 * @brief Sensor type and response signal
 *
 * @details Contains sensor and response (waveform, pulse, amplitude, time) information. It can be associated to a waveform and a vector of reconstructed pulses. 
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date January 2015
 *
 * @ingroup emodel
 */

#include <iostream>

#include<TSystem.h>

#include<Environment.h>
#include<Pulse.h>
#include<Waveform.h>
#include<BHit.h>

namespace gate{class Hit;}

class gate::Hit : public gate::BHit {

 public:

  //! default constructor
  Hit();

  //! default destructor
  virtual ~Hit();

 protected:
  
  //! sensor ID
  int _sensorID;
  
  //! sensor type (SIPM or PMT)
  gate::SENSORTYPE _sType;
  
  //! hit state (RAW, RECOED, CALIB) for MC or DATA
  gate::STATE _state;
  
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

   //! Get hit state
  gate::STATE GetState() const;
  
  //! Set hit state 
  void SetState(gate::STATE state);
  
  //! Set waveform
  void SetWaveform(const Waveform& wf);
  
  //! Get waveform
  const Waveform& GetWaveform() const;

  //! Add  pulse
  void AddPulse(gate::Pulse* p);
  
  //! Get  pulses
  const std::vector<gate::Pulse*>&  GetPulses() const;

  //! print hit into stream
  void Info(ostream& s) const;

  ClassDef(gate::Hit,1)

    };

inline void gate::Hit::SetWaveform(const gate::Waveform& wf ) { _wform = &wf; }
inline const gate::Waveform& gate::Hit::GetWaveform() const { return *_wform; }

inline void gate::Hit::AddPulse(gate::Pulse* p) { 
  ((gate::Waveform*) _wform)->AddPulse(p); }
inline  const std::vector<gate::Pulse*>&  
gate::Hit::GetPulses() const { return _wform->GetPulses();}

inline void gate::Hit::SetSensorID(int id ) { _sensorID = id; }
inline int gate::Hit::GetSensorID() const { return _sensorID; }

inline void gate::Hit::SetSensorType(gate::SENSORTYPE t) { _sType = t; }
inline gate::SENSORTYPE gate::Hit::GetSensorType() const { return _sType; }

inline void gate::Hit::SetState(gate::STATE st) { _state = st; }
inline gate::STATE gate::Hit::GetState() const { return _state; }

ostream& operator << (ostream& s, const gate::Hit& h); 

#endif

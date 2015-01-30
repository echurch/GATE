#ifndef __Waveform_H__
#define __Waveform_H__

/**
 * @file Waveform.h
 * 
 * @brief Waveform class: DAQ ADC time stream
 *
 * @details collection of ADC count per time sample  
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date January 2015
 *
 */

namespace gate{class Pulse;}

#include <iostream>

#include<TSystem.h>

#include<Environment.h>
#include<ParamStore.h>
#include<Pulse.h>

namespace gate{class Waveform;}

//class gate::Waveform : public gate::ParamStore {
class gate::Waveform {

 public:

  //! default constructor
  Waveform();

  //! default destructor
  virtual ~Waveform(){};

 private:
  
  //! sensor ID
  int _sensorID;
  
  //! pulses found within waveform
  std::vector<const gate::Pulse*> _pulses;
  
  //! waveform data, as a vector of pair<time,amp>
  std::vector< std::pair<double,double> > _data;

 public:
  
  //! Get sensor ID 
  int GetSensorID() const;
  
  //! Set sensor ID 
  void SetSensorID(int id);
  
  //! Get  data
  const std::vector< std::pair<double,double> >& GetData() const;

  //! Set datat (not passed by reference, but copied!!!)
  void SetData(std::vector< std::pair<double,double> > data);

  //! Add  pulse
  void AddPulse(const gate::Pulse& p);
  
  //! Get  pulses
  const std::vector<const gate::Pulse*>&  GetPulses() const;

  //! print pulse into stream
  void Info(ostream& s) const;

  ClassDef(gate::Waveform,1)

    };


inline const std::vector< std::pair<double,double> >& 
  gate::Waveform::GetData() const {return _data;}

inline void gate::Waveform::AddPulse( const gate::Pulse& p) { 
  _pulses.push_back(&p); }
inline  const std::vector<const gate::Pulse*>&  
gate::Waveform::GetPulses() const { return _pulses;}

inline void gate::Waveform::SetSensorID(int id ) { _sensorID = id; }
inline int gate::Waveform::GetSensorID() const { return _sensorID; }

ostream& operator << (ostream& s, const gate::Waveform& wf); 

#endif

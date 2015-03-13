#ifndef __Waveform_H__
#define __Waveform_H__

/**
 * @file Waveform.h
 *
 * @class Waveform
 *
 * @brief DAQ ADC stream within a given time window
 *
 * @details Collection of ADC count per time sample, stored as a vector<double>  
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date January 2015
 *
 * @ingroup emodel
 */

namespace gate{class Pulse;}

#include <GATE/BObject.h>
#include <GATE/Pulse.h>

namespace gate{class Waveform;}

class gate::Waveform : public gate::BObject {

 public:

  //! default constructor
  Waveform();

  //! default destructor
  virtual ~Waveform();

 private:
  
  //! sensor ID
  int _sensorID;
  
  //! sampling width
  double _sampWidth;

  //! pulses found within waveform
  std::vector<gate::Pulse*> _pulses;
  
  //! waveform data, as a vector of pair<time,amp>
  std::vector< std::pair<unsigned short, unsigned short> > _data;

 public:
  
  //! Get sensor ID 
  int GetSensorID() const;
  
  //! Set sensor ID 
  void SetSensorID(int id);
  
  //! Get sampling width
  double GetSampWidth() const;

  //! Set sampling width
  void SetSampWidth(double w);
  
  //! Get  data
  const std::vector< std::pair<unsigned short,unsigned short> >& GetData()const;

  //! Set data (not passed by reference, but copied!!!)
  void SetData(std::vector< std::pair<unsigned short,unsigned short> > data);

  //! Add  pulse
  void AddPulse(gate::Pulse* p);
    
  //! Get  pulses
  const std::vector<gate::Pulse*>&  GetPulses() const;

  //! print pulse into stream
  void Info(std::ostream& s=std::cout) const;

  ClassDef(gate::Waveform,1)

    };


inline const std::vector< std::pair<unsigned short,unsigned short> >& 
  gate::Waveform::GetData() const {return _data;}

inline void gate::Waveform::AddPulse( gate::Pulse* p) { 
  _pulses.push_back(p); }
inline  const std::vector<gate::Pulse*>&  
gate::Waveform::GetPulses() const { return _pulses;}

inline void gate::Waveform::SetSensorID(int id ) { _sensorID = id; }
inline int gate::Waveform::GetSensorID() const { return _sensorID; }

inline void gate::Waveform::SetSampWidth(double w) { _sampWidth = w; }
inline double gate::Waveform::GetSampWidth() const { return _sampWidth; }

std::ostream& operator << (std::ostream& s, const gate::Waveform& wf); 

#endif

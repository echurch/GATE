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

  //! baseline mean
  double _baseline;
  
  //! baseline RMS
  double _baselineRMS;

  //! pulses found within waveform
  std::vector<gate::Pulse*> _pulses;
  
  //! waveform data, as a vector of pair<time,amp>
  std::vector< std::pair<unsigned int, unsigned int> > _data;

 public:
  
  //! Get sensor ID 
  int GetSensorID() const;
  
  //! Set sensor ID 
  void SetSensorID(int id);
  
  //! Get sampling width
  double GetSampWidth() const;

  //! Set sampling width
  void SetSampWidth(double w);
  
  //! Get baseline
  double GetBaseline() const;

  //! Set baseline
  void SetBaseline(double b);
  
  //! Get baseline RMS
  double GetBaselineSig() const;

  //! Set baseline RMS
  void SetBaselineSig(double rms);

  //! Get  data
  const std::vector< std::pair<unsigned int,unsigned int> >& GetData()const;
  
  //! Get amlitude  in time sample isamp
  double GetAmplitude(unsigned int isamp) const;

  //! Set data (not passed by reference, but copied!!!)
  void SetData(std::vector< std::pair<unsigned int,unsigned int> > data);
  
  //! Clear data (once reconstructed, wf might not be needed)
  void ClearData();

  //! Add  pulse
  void AddPulse(gate::Pulse* p);
    
  //! Get  pulses
  const std::vector<gate::Pulse*>&  GetPulses() const;

  //! print pulse into stream
  void Info(std::ostream& s=std::cout) const;

  ClassDef(gate::Waveform,3)

    };


inline const std::vector< std::pair<unsigned int,unsigned int> >& 
  gate::Waveform::GetData() const {return _data;}

inline void gate::Waveform::AddPulse( gate::Pulse* p) { 
  _pulses.push_back(p); }
inline  const std::vector<gate::Pulse*>&  
gate::Waveform::GetPulses() const { return _pulses;}

inline void gate::Waveform::SetSensorID(int id ) { _sensorID = id; }
inline int gate::Waveform::GetSensorID() const { return _sensorID; }

inline void gate::Waveform::SetSampWidth(double w) { _sampWidth = w; }
inline double gate::Waveform::GetSampWidth() const { return _sampWidth; }

inline void gate::Waveform::SetBaseline(double b) { _baseline = b; }
inline double gate::Waveform::GetBaseline() const { return _baseline; }

inline void gate::Waveform::SetBaselineSig(double rms) { _baselineRMS = rms; }
inline double gate::Waveform::GetBaselineSig() const { return _baselineRMS; }

inline void gate::Waveform::ClearData(){ _data.clear(); }

std::ostream& operator << (std::ostream& s, const gate::Waveform& wf); 

#endif

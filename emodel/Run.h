#ifndef __Run_H__
#define __Run_H__

/**
 * @file Run.h
 *
 * @class Run
 *
 * @brief Holds all run-wise information
 *
 * @details Contains run info, from data taking to detector configuration  
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date Februaryary 2015
 *
 * @ingroup emodel
 */

#include <GATE/Sensor.h>

namespace gate{class Run;}

class gate::Run : BObject{

 public:
  
  //! default constructor
  Run(gate::DATATYPE dt=gate::NODTYPE, int id=-1);
  
  //! default destructor
  virtual ~Run(){}

 private:
  
  //! data type
  gate::DATATYPE _dType;

  //! run number
  int _runID;
  
  //! run start time
  int _sTime;

  //! run end time
  int _eTime;
  
  //! vector of sensors
  std::map<int,gate::Sensor*> _sensors;
  //std::multimap<gate::SENSORTYPE, gate::Sensor*> _sensors;
  

public:
  
  //! Get data type
  gate::DATATYPE GetDataType() const;

  //! Set data type
  void SetDataType(gate::DATATYPE t);

  //! Get run number
  int GetRunID() const;

  //! Set run number
  void SetRunID(int id);
  
  //! Get start time
  double GetStartTime() const;

  //! Set run start time
  void SetStartTime(double t);
  
  //! Get run end time
  double GetEndTime() const;

  //! Set run end time
  void SetEndTime(double t);
  
  //! retrieve all sensors
  //std::vector<gate::Sensor*> GetSensors() const;
  
  //! retrieve tracks of specific type
  //std::vector<gate::Sensor*> GetSensors(gate::SENSORTYPE type) const;
  
  //! add sensor
  void AddSensor(gate::Sensor*);
  //void AddSensor(gate::SENSORTYPE, gate::Sensor*);
  
  //! get sensor 
  const gate::Sensor* GetSensor(int id); 

  //! print event into stream
  void Info(std::ostream& s=std::cout) const;

  ClassDef(gate::Run,1)

};

inline gate::DATATYPE gate::Run::GetDataType() const {return _dType;}
inline void gate::Run::SetDataType(gate::DATATYPE t) {_dType = t;}

inline void gate::Run::SetRunID(int id){ _runID = id;}
inline int gate::Run::GetRunID() const { return _runID;}

inline void gate::Run::SetStartTime(double t){ _sTime = t;}
inline double gate::Run::GetStartTime() const { return _sTime;}

inline void gate::Run::SetEndTime(double t){ _eTime = t;}
inline double gate::Run::GetEndTime() const { return _eTime;}

inline const gate::Sensor* gate::Run::GetSensor(int id){
  return _sensors[id];}

std::ostream& operator << (std::ostream& s, const gate::Run& run); 

#endif

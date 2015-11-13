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

#include <GATE/Geometry.h>
#include <GATE/Properties.h>

namespace gate{class Run;}

class gate::Run : public gate::BObject{

 public:
  
  //! default constructor
  Run(gate::DATATYPE dt=gate::NODTYPE, int id=-1);
  
  //! default destructor
  virtual ~Run();
  
  //! clear info
  void Clear();

 private:
  
  //! data type
  gate::DATATYPE _dType;

  //! run number
  int _runID;
  
  //! run start time
  int _sTime;

  //! run end time
  int _eTime;
  
  //! pointer to properties
  gate::Properties* _prop;

  //! pointer to geometry
  gate::Geometry* _geo;
  
  
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
  
  //! Get geometry
  gate::Geometry* GetGeometry();

  //! Get properties
  gate::Properties* GetProperties();

  //! print event into stream
  void Info(std::ostream& s=std::cout) const;
  
  //! set geometry info
  void SetGeometry(gate::Geometry* geo);

  //! set geometry info
  void SetProperties(gate::Properties* prop);

  ClassDef(gate::Run,2)

};

inline gate::DATATYPE gate::Run::GetDataType() const {return _dType;}
inline void gate::Run::SetDataType(gate::DATATYPE t) {_dType = t;}

inline void gate::Run::SetRunID(int id){ _runID = id;}
inline int gate::Run::GetRunID() const { return _runID;}

inline void gate::Run::SetStartTime(double t){ _sTime = t;}
inline double gate::Run::GetStartTime() const { return _sTime;}

inline void gate::Run::SetEndTime(double t){ _eTime = t;}
inline double gate::Run::GetEndTime() const { return _eTime;}

inline gate::Geometry* gate::Run::GetGeometry() {return _geo;}
inline gate::Properties* gate::Run::GetProperties() {return _prop;}

inline void gate::Run::SetGeometry(gate::Geometry* geo) {_geo = geo;}
inline void gate::Run::SetProperties(gate::Properties* prop) {_prop = prop;}


std::ostream& operator << (std::ostream& s, const gate::Run& run); 

#endif

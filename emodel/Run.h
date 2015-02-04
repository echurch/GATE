#ifndef __Run_H__
#define __Run_H__

/**
 * @file Run.h
 * 
 * @brief Run class, holding all run-wise information
 *
 * @details Contains run info, from data taking to detector configuration  
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date Februaryary 2015
 *
 */

#include<iostream>

#include<TSystem.h>

namespace gate{class Run;}


class gate::Run{

 public:
  
  //! default constructor
  Run();
  
  //! default destructor
  virtual ~Run(){}

 private:
  
  //! run number
  int _runID;
  
  //! run start time
  int _sTime;

  //! run end time
  int _eTime;

 public:
  
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
  
  //! print event into stream
  void Info(ostream& s) const;

  ClassDef(gate::Run,1)

};


inline void gate::Run::SetRunID(int id){ _runID = id;}
inline int gate::Run::GetRunID() const { return _runID;}

inline void gate::Run::SetStartTime(double t){ _sTime = t;}
inline double gate::Run::GetStartTime() const { return _sTime;}

inline void gate::Run::SetEndTime(double t){ _eTime = t;}
inline double gate::Run::GetEndTime() const { return _eTime;}

ostream& operator << (ostream& s, const gate::Run& run); 

#endif
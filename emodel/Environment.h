#ifndef __Environment_H__
#define __Environment_H__

/**
 * @file Environment.h
 * 
 * @brief Useful typedef and enums
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date January 2015
 *
 * @ingroup emodel
 */

namespace gate{  
  
  //! not defined number
  static const double nan = -9999.9999;

  //! Data type: MC-TRUTH, MC-DIGI, or DATA 
  enum DATATYPE{ NODTYPE, MCTRUTH,MC,DATA};
  
  //! Signal type: S1 or S2
  enum SIGNALTYPE{ NOSIGTYPE, S1,S2};
  
  //! hit state: raw, recosntructed or calibrated
  enum STATE{ NOSTATE, RAW,RECOED,CALIB};
  
  //! sensor type: SiPM or PMT
  enum SENSORTYPE{ NOSTYPE,SIPM,PMT,TPC};
  
  //! verbosity levels
  enum VLEVEL{MUTE,CONCISE,NORMAL,WARNING,DETAILED,
              VERBOSE,VVERBOSE,DUMP};


} // end of gate namespace

#endif

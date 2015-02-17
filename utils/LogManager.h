/* -*- mode: c++ -*- */


#ifndef _logman___
#define _logman___

#include <stdlib.h>

#include <RootWriter.h>
#include <ParamStore.h>

#include <Messenger.h>
#include <Irene.h> // sreader class

#include <TSystem.h>

/**
 * \class LogManager
 *
 * \ingroup tools
 *
 * \brief Manager to generate and read log files
 *
 * \author Pau Novella
 *
 * \version $Revision: 1.0 $
 * 
 * Contact: pau.novella@ciemat.es
 *
 */

namespace gate{class _log_IO;}
namespace gate{class _param_logger;}
namespace gate{class LogManager;}

class gate::_log_IO{

  /*
    Base class for a log manager
   */

 protected:

  string _oLogFile; 

  string _iLogFile; 
  
 public:
  
  /// destructor
  virtual ~_log_IO(){}
  
  /// write log file
  virtual void write(gate::ParamStore,string group,int fileMode) = 0;
  
  /// read log file
  virtual void read(gate::ParamStore, string group) = 0;
  
  /// set name of output log file
  void setOutName(string name){_oLogFile=name;}
  
  /// set name of input log file
  void setInName(string name){_iLogFile=name;}
  
  /// set name of output log file
  string getOutName()const {return _oLogFile;}
  
  /// set name of input log file
  string getInName()const {return _iLogFile;}
  

  ClassDef(gate::_log_IO,1)

};

class gate::_param_logger : public gate::_log_IO{
  
  /*
    Creates or read log files.
    A log file is a set of parameters and their
    corresponding values
  */

public:
  
  /// constructor with name of output log file
  _param_logger(){
    _oLogFile="centella_log.param";
    _header="# CENTELLA LOG FILE #\n";}

  /// write log file
  void write(gate::ParamStore,string group="LOG",
	     int fileMode=ios::out);
  
  /// read log file
  void read(gate::ParamStore,string group);
  
  /// generic info of the log manager
  string header();

  /// set generic info of the log manager
  void setHeader(string header);
  
public:

  string _header;

  ClassDef(gate::_param_logger,1)
  
};



class gate::LogManager{

 public:
  
  LogManager(gate::VLEVEL=gate::NORMAL);

  virtual ~LogManager(){}
  
  /// create new gruop or store
  //void create_group(string name){_logs[name]=gate::ParamStore();}

  /// write log into file
  void write(string group="");

  /// read input log
  void read(string group="");
  
  /// add string log 
  void addLog(string group,string key,string val,string prefix=""){

    if (!prefix.empty()) key = prefix+"_"+key;  

    _logs[group].store(key,val);}
  
  /// add integer log 
  void addLog(string group,string key,int val,string prefix=""){

    if (!prefix.empty()) key = prefix+"_"+key;  

    _logs[group].store(key,val);}
  
  /// add double log 
  void addLog(string group,string key,double val,string prefix=""){

    if (!prefix.empty()) key = prefix+"_"+key;  

    _logs[group].store(key,val);}
  
  //------------------------------

   /// add string vector log 
  void addLog(string group,string key,gate::vstring val,string prefix=""){

    if (!prefix.empty()) key = prefix+"_"+key;  

    _logs[group].store(key,val);}
  
  /// add integer vector log 
  void addLog(string group,string key,gate::vint val,string prefix=""){

    if (!prefix.empty()) key = prefix+"_"+key;  

    _logs[group].store(key,val);}
  
  /// add double vector log 
  void addLog(string group,string key,gate::vdouble val,string prefix=""){

    if (!prefix.empty()) key = prefix+"_"+key;  

    _logs[group].store(key,val);}

  //-------------------------------

  /// change string log 
  void strongAddLog(string group,string key,string val,string prefix=""){

    if (!prefix.empty()) key = prefix+"_"+key;  

    _logs[group].change_sstore(key,val);}
  
  /// change integer log 
  void strongAddLog(string group,string key,int val,string prefix=""){

    if (!prefix.empty()) key = prefix+"_"+key;  

    _logs[group].change_istore(key,val);}
  
  /// change double log 
  void strongAddLog(string group,string key,double val,string prefix=""){

    if (!prefix.empty()) key = prefix+"_"+key;  

    _logs[group].change_dstore(key,val);}

  //-------------------------------
   /// change string vector log 
  void strongAddLog(string group,string key,gate::vstring val,
		    string prefix=""){

    if (!prefix.empty()) key = prefix+"_"+key;  

    _logs[group].change_svstore(key,val);}
  
  /// change integer vector log 
  void strongAddLog(string group,string key,gate::vint val,
		    string prefix=""){

    if (!prefix.empty()) key = prefix+"_"+key;  

    _logs[group].change_ivstore(key,val);}
  
  /// change double vector log 
  void strongAddLog(string group,string key,gate::vdouble val,
		    string prefix=""){

    if (!prefix.empty()) key = prefix+"_"+key;  

    _logs[group].change_dvstore(key,val);}

  
  //-------------------------------

 
  //-------------------------------


  /// set name of output log file
  void setOutLogName(string name){logger->setOutName(name);}

  /// set name of input log file
  void setInLogName(string name){logger->setInName(name);}
  
  /// set name of output log file
  string getOutLogName() const {return logger->getOutName() ;}

  /// set name of input log file
  string getInLogName() const {return logger->getInName();}
  

  /// retrieve current logs
  gate::ParamStore& getLogs(string group){return _logs[group];}

  /// retrieve input logs
  gate::ParamStore& getInputLogs(string group){return _ilogs;}
  
  /// remove entry from log
  bool erase(string group,string ilog);

  /// find log in all groups
  bool find(string,string);
    
  /// find group in manager
  bool find_group(string);

protected:
  
  /// pointer to logger instance
  _param_logger* logger;
  
  /// messenger
  gate::Messenger _m;


  /// map of output stores
  map<string,gate::ParamStore> _logs;

  /// input logs
  gate::ParamStore _ilogs;

  ClassDef(gate::LogManager,1)

};

#endif 

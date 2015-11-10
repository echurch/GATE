/* -*- mode: c++ -*- */
#ifndef _centella___
#define _centella___

#include<time.h>

#include <GATE/ParamStore.h>
#include <GATE/Messenger.h>

#include <GATE/AlgoManager.h>
#include <GATE/RunManager.h>
#include <GATE/LogManager.h>
#include <GATE/HistoManager.h>
#include <GATE/TreeManager.h>

/**
 * \class Centella
 *
 * \ingroup Tools
 *
 * \brief Manager for analisys of gate data
 *
 * \author Pau Novella
 *
 * \version $Revision: 1.0 $
 * 
 * Contact: pau.novella@ciemat.es
 *
 * @ingroup utils
 */

/**
 *\defgroup utils Analysys framework
 */

namespace gate{class Centella;}

class gate::Centella : public gate::RunManager, public gate::AlgoManager{

 
private:
  
 
  //! constructor with verbosity level
  Centella(gate::VLEVEL vl = gate::NORMAL);
  
 
  //! constructor with verbosity level and data
  Centella(const gate::ParamStore& data,gate::VLEVEL vl = gate::NORMAL);
  
  //! constructor with parameter file and verbosity level
  //Centella(string param, string group,gate::VLEVEL vl=gate::NORMAL);


public:
 
  /// create or retrieve centella singleton
  static gate::Centella* instance(gate::VLEVEL vl = gate::NORMAL); 

  /// create or retrieve centella singleton
  //static Centella* instance(string param,string group,
  //			    gate::VLEVEL = gate::NORMAL); 
  
  /// create or retrieve centella singleton
  static gate::Centella* instance(const gate::ParamStore& data,
			    gate::VLEVEL vl=gate::NORMAL); 

 
private:

  //! singleton, pointer to itself
  static gate::Centella* _centella;
  
  //! private destructor (use destroy for public access)
  virtual ~Centella(){delete _hman; delete _tman; _centella=0;}

public:


  //! public destructor
  void destroy();
  
  //! execute analysis
  virtual void executeJob();
  
  //! initialize analysis
  virtual bool initializeJob();
  
  //! finalize analysis
  virtual void finalizeJob();
  
  //! run analysis
  bool run();
  
  
  //! set number of events to read
  inline void setNevents(size_t n) { _nevents = n;}
  
  //! set first event to read
  inline void setFirstEvent(size_t n) {_fevent = n;}
  
  //! set first event to read
  inline void setNdebug(size_t n) {_ndebug = n;}

  //! write output dst ?
  inline void saveEvents(bool write) { _write = write;}

  //! write output histogram file ?
  inline void saveHistos(bool histos) { _histos = histos;}

  //! write output tree file ?
  inline void saveTrees(bool trees) { _trees = trees;}
  
  //! get number of event to analize
  inline size_t getNevents() const {return _nevents;}

  inline bool isLastEventRun() const{
    return (this->getNevents()==tievents || 
	    (greader->eof(ievent+1) && cifile==nifiles));
  }
  
  //! get current run info
  inline gate::Run& getRun(){return *_run;}
  
  //! set current run info
  inline void setRun(gate::Run* run){_run = run;}

  //! clear
  inline void clear(){AlgoManager::clear();EventManager::clear();}
  
public:

  //! retrieve log manager
  gate::LogManager& logman(){return _logMan;}

  //! retrieve histogram  manager
  gate::HistoManager* hman(){return _hman;} 
  
  //! retrieve tree  manager
  gate::TreeManager* tman(){return _tman;}

protected:
  
  //! read parameters
  void readParam(const gate::ParamStore&);

  //! intialize class members
  void init();

  /// Log functions
  
  //! create run log
  void runLog();
  
  //! create data log
  void dataLog();

  //! create algorithms log
  void algoLog();
  
  //! create events log
  void nevtLog();

  //! create tiem log
  void timeLog();
  
  //! update run info 
  void updateRunInfo();

protected:

  /// Messenger
  gate::Messenger _m;
  
  /// log manager
  gate::LogManager _logMan;

  /// histogram manager
  gate::HistoManager* _hman;

  /// tree manager
  gate::TreeManager* _tman;
  
  //! current run info
  gate::Run* _run;

private:
  
  //! number of events to read
  size_t _nevents;
  
  //! write output events ?
  bool _write;
  
  //! generate and save histos ?
  bool _histos;

  //! generate and save trees ?
  bool _trees;

  //! name of histogram file
  //string _hfile;

  //! first event to read
  size_t _fevent;

  //! print message each _nedebug events
  size_t _ndebug;
  
  //! write log file ?
  bool _log;

  ClassDef(gate::Centella,1)

};


#endif

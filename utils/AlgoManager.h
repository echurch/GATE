/* -*- mode: c++ -*- */
#ifndef _ialgoman___
#define _ialgoman___

#include <Messenger.h>

#include <IAlgo.h>

#include <TSystem.h>

/**
 * \class AlgoManager
 *
 * \ingroup utils
 *
 * \brief Algorithm store and manager
 *
 * \author Pau Novella
 *
 * \version $Revision: 1.0 $
 * 
 * Contact: pau.novella@ific.uv.es
 *
 */


namespace gate{class AlgoManager;}

class gate::AlgoManager{

public:
  
  AlgoManager(gate::VLEVEL vl=gate::NORMAL);
 
  virtual ~AlgoManager(){}
  
  /// execute algorithms and analysis
  virtual bool execute(gate::Event&);
 
  /// initialize algorithms
  virtual bool initialize();
  
  /// finalize algorithms
  virtual void finalize();
  
  /// add algorithm to be executed 
  void addAlgo(std::string name,gate::IAlgo*);
 
  /// retrieve algorithm
  gate::IAlgo* getAlgo(std::string name){ return _AlgoMap[name];}

  /// retrive algos
  const std::vector<gate::IAlgo*>& getAlgos(){return _AlgoList;} 
   
  /// get algorithm names
  gate::vstring getAlgoNames();

  /// get algorithm labels
  gate::vstring getAlgoLabels();

  /// clear
  void clear(){ _AlgoMap.clear(); _AlgoList.clear();}

protected:

  /// messenger
  gate::Messenger _am;
 
   /// Storage of algorithms with key
  std::map<std::string, gate::IAlgo*> _AlgoMap;
 
  /// Sorted storage of algorithms
  std::vector<gate::IAlgo*> _AlgoList;
   
  ClassDef(gate::AlgoManager,1)

};


#endif

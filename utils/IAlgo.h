/* -*- mode: c++ -*- */
#ifndef _ialgo___
#define _ialgo___

#include <Event.h>
#include <ParamStore.h>
#include <Messenger.h>

#include <TSystem.h>

/**
 * @file IAlgo.h
 * 
 * @class IAlgo
 *
 * @brief Base class for algorithm analyzing GATE events
 *
 * @details Contains basic functions (initialize, execute, finalize) and utils  
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date January 2015
 *
 * @ingroup utils
 */

namespace gate{class IAlgo;}

class gate::IAlgo : public gate::ParamStore {

public:
  
  //! constructor with verbosity level and name
  IAlgo(gate::VLEVEL vl=gate::NORMAL, 
	std::string name="IAlgo",int ver=0, std::string label="IAlgo");
 
  //! constructor with parameter store, verbosity level and name
  IAlgo(const gate::ParamStore& gs,gate::VLEVEL vl=gate::NORMAL,
	std::string name="IAlgo",int ver=0, std::string label="IAlgo");

  //! Destructor
  virtual ~IAlgo(){}
  
  //! apply algorithm to event data
  virtual bool execute(gate::Event&){return true;}
  
  //! initialize algorithm 
  virtual bool initialize();
  
  //! finalize algorithm 
  virtual bool finalize();
  
  //! run algorithm
  bool run(gate::Event& evt);
  
  //! retrieve algorithm instance label
  std::string getAlgoLabel() const;
  
  //! retrieve algorithm name
  std::string getAlgoName() const;
  
  //! retrieve algorithm version
  int getAlgoVersion() const;

  //! take a string and add algo label as a prefix 
  std::string alabel(std::string tit) const {return _label+"_"+tit;}
    
protected:
  
  //! Messenger
  gate::Messenger _m;
  
  //! algorithm name (to define type of algorithm)
  std::string _name;
  
  //! algorithm version
  int _version;

  //! algorithm label (to define instance)
  std::string _label;
  
  ClassDef(gate::IAlgo,0)

};


inline std::string gate::IAlgo::getAlgoLabel() const {return _label;}
  
inline std::string gate::IAlgo::getAlgoName() const {return _name;}
  
inline int gate::IAlgo::getAlgoVersion() const {return _version;}

#endif

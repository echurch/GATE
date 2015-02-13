#ifndef _AlgoTemplate__
#define _AlgoTemplate__

#include <TSystem.h>

//#include <IAlgo.h>
//#include <Event.h>
#include <Centella.h>
//#include <HistoManager.h>

class AlgoTemplate : public gate::IAlgo {

 public:
  
  //! default contructor
  AlgoTemplate(gate::VLEVEL=gate::NORMAL,
	       std::string label="AlgoTemplateInstance");
  
  //! constructor with store with input parameters 
  AlgoTemplate(const gate::ParamStore& gs,
	       gate::VLEVEL=gate::NORMAL,
	       std::string label="AlgoTemplateInstance");
  
  //! destructor
  virtual ~AlgoTemplate(){};
  
  //! initialize algorithm
  bool initialize();        
  
  //! execute algorithm: process current event
  bool execute(gate::Event& evt);  
  
  //! finalize algorithm
  bool finalize();          
  
 private:
  
  ClassDef(AlgoTemplate,0)
    
};

#endif

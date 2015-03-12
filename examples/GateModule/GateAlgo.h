#ifndef _GateAlgo__
#define _GateAlgo__

#include <GATE/Centella.h>

class GateAlgo : public gate::IAlgo {

 public:
  
  //! default contructor
  GateAlgo(gate::VLEVEL=gate::NORMAL,
	       std::string label="GateAlgoInstance");
  
  //! constructor with store with input parameters 
  GateAlgo(const gate::ParamStore& gs,
	       gate::VLEVEL=gate::NORMAL,
	       std::string label="GateAlgoInstance");
  
  //! destructor
  virtual ~GateAlgo(){};
  
  //! initialize algorithm
  bool initialize();        
  
  //! execute algorithm: process current event
  bool execute(gate::Event& evt);  
  
  //! finalize algorithm
  bool finalize();          
  
 private:
  
  ClassDef(GateAlgo,0)
    
};

#endif

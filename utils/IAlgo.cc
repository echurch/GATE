
#include<IAlgo.h>

ClassImp(gate::IAlgo)

//*************************************************************
gate::IAlgo::IAlgo(gate::VLEVEL vl, std::string name, 
		   int ver, std::string label){
//*************************************************************
   
  _name = name;
  
  _version = ver;

  _label = label;
  
  if (_label.empty()) _label = name;
  
  _m = gate::Messenger(_label,vl);
    
  _m.message("Algorithm Generated:",name,gate::VERBOSE);
    
}

//*************************************************************
gate::IAlgo::IAlgo(const gate::ParamStore& gs, gate::VLEVEL vl, 
	     std::string name,int ver,std::string label){
//*************************************************************
  
  _name = name;
  
  _version = ver;

  _label = label;

  if (_label.empty()) _label = name;
  
  _m = gate::Messenger(_label,vl);
  
  this->store(gs);

  _m.message("Algorithm Generated:",name,gate::VERBOSE);
  
}


//*************************************************************
bool gate::IAlgo::initialize(){
//*************************************************************
  
  _m.message("++ Initialising algorithm",this->getAlgoName(),
	     gate::NORMAL);
  
  return true;

}

//*************************************************************
bool gate::IAlgo::finalize(){
//*************************************************************
  
  _m.message("++ Finalising algorithm",this->getAlgoName(),
	     gate::NORMAL);
  
  return true;

}

//*************************************************************
bool gate::IAlgo::run(gate::Event& evt){
//*************************************************************
  
  bool ok1 = this->initialize();
  
  if (!ok1) _m.message("++ initialise failed:",this->getAlgoName(),
		       gate::NORMAL);

  bool ok2 = this->execute(evt);
  
  if (!ok2) _m.message("++ execute failed:",this->getAlgoName(),
		       gate::VVERBOSE);

  bool ok3 = this->finalize();
  
  if (!ok3) _m.message("++ finalise failed:",this->getAlgoName(),
		       gate::NORMAL);

  return (ok1 && ok2 && ok3);

}


#include<GateAlgo.h>

ClassImp(GateAlgo)

//==========================================================================
GateAlgo::GateAlgo(gate::VLEVEL vl, std::string label) : 
IAlgo(vl,"GateAlgo",0,label){
//==========================================================================


}

//==========================================================================
GateAlgo::GateAlgo(const gate::ParamStore& gs, 
			   gate::VLEVEL vl, std::string label) :
  IAlgo(gs,vl,"GateAlgo",0,label){
//==========================================================================


}

//==========================================================================
bool GateAlgo::initialize(){
//==========================================================================

  _m.message("Intializing algorithm",this->getAlgoLabel(),gate::NORMAL);
  
  gate::Centella::instance()
    ->hman()->h1(this->alabel("EvtID"),"EvtID",10,0,100);

  gate::Centella::instance()
    ->tman()->create(this->alabel("MyTree"),"TreeExample");

  return true;

}

//==========================================================================
bool GateAlgo::execute(gate::Event& evt){
//==========================================================================

  _m.message("Executing algorithm",this->getAlgoLabel(),gate::VERBOSE);
  
  _m.message("Event number:",evt.GetEventID(),gate::VERBOSE);
  
  gate::Centella::instance()
    ->hman()->fill(this->alabel("EvtID"),evt.GetEventID());
  
  return true;

}

//==========================================================================
bool GateAlgo::finalize(){
//==========================================================================

  _m.message("Finalising algorithm",this->getAlgoLabel(),gate::NORMAL);
  
  return true;

}

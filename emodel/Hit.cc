#include <Hit.h>

ClassImp(gate::Hit);

//=======================================================
gate::Hit::Hit() : BHit(),_sensorID(-1), _sType(NOSTYPE),
                   _state(gate::NOSTATE), _wform(0) {
//=======================================================
}

//=======================================================
gate::Hit::~Hit(){ 
//=======================================================
    
  if (_wform) delete _wform;

}

//=======================================================
void gate::Hit::Info(std::ostream& s) const{
//=======================================================

    s << "========= Hit instance ======="<< std::endl;
    
    BHit::Info(s);

    s << "Sensor ID: " << this->GetSensorID()<< std::endl;
    
    s << "Sensor type: " << this->GetSensorType()<< std::endl;
    
    s << "Hit state: " << this->GetState()<< std::endl;
    
    //s << "TO BE IMPLEMENTED: wform and pulses" << std::endl;
    
    s << "==============================="<< std::endl;

}

//=======================================================
std::ostream& operator << (std::ostream& s, const gate::Hit& hit) {
//=======================================================

    hit.Info(s);
  
    return s; 
}

#include<Hit.h>

ClassImp(gate::Hit);

//=======================================================
gate::Hit::Hit() : gate::ParamStore("Hit"),
                   _sensorID(-1), _sType(NOSTYPE), _dType(NODTYPE),
                   _state(gate::NOSTATE), _pos(),_amp(0), _time(-1), _wform(0) {
//=======================================================
}

//=======================================================
void gate::Hit::Info(ostream& s) const{
//=======================================================

    s << "========= Hit instance ======="<< std::endl;
    
    s << " Sensor ID" << this->GetSensorID()<< std::endl;
    
    s << " Sensor type" << this->GetSensorType()<< std::endl;

    s << " Data type" << this->GetDataType()<< std::endl;
    
    s << " Hit state" << this->GetState()<< std::endl;

    s << " Hit amplitdue" << this->GetAmplitude()<< std::endl;
    
    s << " TO BE IMPLEMENTED: wform and pulses" << std::endl;
    
    s << "=========================="<< std::endl;

}

//=======================================================
ostream& operator << (ostream& s, const gate::Hit& hit) {
//=======================================================

    hit.Info(s);
  
    return s; 
}

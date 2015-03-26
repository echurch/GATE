#include <Pulse.h>

ClassImp(gate::Pulse);

//=======================================================
gate::Pulse::Pulse() : BObject(),_sensorID(-1), _wform(0),
                       _state(gate::NOSTATE), _amp(0),
                       _sTime(-1),  _eTime(-1), _mTime(-1),
                       _mAmp(-1),_sType(gate::NOSIGTYPE){
//=======================================================
}

//=======================================================
void gate::Pulse::Info(std::ostream& s) const{
//=======================================================

    s << "=========Pulse instance ======="<< std::endl;

    BObject::Info(s);

    s << " Sensor ID" << this->GetSensorID()<< std::endl;
    
    s << " Sensor state" << this->GetState()<< std::endl;

    s << " Pulse charge" << this->GetCharge()<< std::endl;

    s << " Pulse start time" << this->GetStartTime()<< std::endl;

    s << " Pulse end time" << this->GetEndTime()<< std::endl;

    s << " Pulse max. amp. time" << this->GetMaxTime()<< std::endl;
    
    s << "================"<< std::endl;

}

//=======================================================
std::ostream& operator << (std::ostream& s, const gate::Pulse& pulse) {
//=======================================================

    pulse.Info(s);
  
    return s; 
}

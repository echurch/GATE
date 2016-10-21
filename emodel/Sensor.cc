#include<GATE/Sensor.h>

ClassImp(gate::Sensor);

//=======================================================
gate::Sensor::Sensor() : BObject(){
//=======================================================
  
  _sType=gate::NOSTYPE;
  
  _eID = -1;

  _dead = false;

  _bline = gate::nan;

  _blineSig = gate::nan;

  _gain = gate::nan;

  _gainSig = gate::nan;
  
  _pos = gate::Point3D();

}

//=======================================================
void gate::Sensor::Info(std::ostream& s) const{
//=======================================================
  
  s << "========= Sensor instance ======="<< std::endl;
  
  BObject::Info(s);
  
  s << " Sensor type: " << this->GetType()<< std::endl;

  s << " Sensor electronics ID: " << this->GetElecID()<< std::endl;

  s << " Sensor gain: " << this->GetGain()<< std::endl;
  
  s << " Sensor gain sigma: " << this->GetGainSig()<< std::endl;
  
  s << " Sensor baseline: " << this->GetBaseline()<< std::endl;
  
  s << " Sensor baseline noise" << this->GetBaselineSig()<< std::endl;
  
  s << " Sensor dead: " << this->IsDead()<< std::endl;

  s << " Sensor position: " << this->GetPosition()<< std::endl;

  s << "=============================="<< std::endl;
}

//=======================================================
std::ostream& operator << (std::ostream& s, const gate::Sensor& sens) {
//=======================================================

    sens.Info(s);
  
    return s; 
}

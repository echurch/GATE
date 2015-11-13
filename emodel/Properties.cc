#include <Properties.h>

ClassImp(gate::Properties);

//=======================================================
gate::Properties::Properties() : BObject() {
//=======================================================
    
    this->Clear();

}

//=======================================================
gate::Properties::~Properties(){
//=======================================================
    
    this->Clear();
}


//=======================================================
void gate::Properties::Clear(){
//=======================================================
    
  _driftVel = _driftVelError = 0;
    
  _eLifeTime =_eLifeTimeError = 0;

  BObject::Clear();

}

//=======================================================
void gate::Properties::Info(std::ostream& s) const{
//=======================================================

    s << "============== Properties instance ==========="<< std::endl;
    
    std::cout<<"e lifetime = "<<this->GetElecLifeTime()<<" +/ -"
             <<this->GetElecLifeTimeError()<<std::endl;
    
    std::cout<<"Drift velocity = "<<this->GetDriftVel()<<" +/ -"
             <<this->GetDriftVelError()<<std::endl;

    s << "============================================="<< std::endl;

}

//=======================================================
std::ostream& operator << (std::ostream& s, const gate::Properties& prop) {
//=======================================================

    prop.Info(s);
  
    return s; 
}


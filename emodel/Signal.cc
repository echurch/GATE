#include<GATE/Signal.h>

ClassImp(gate::Signal)

//=======================================================
gate::Signal::Signal() : BObject(), _sType(gate::NOSIGTYPE),
  _amp(-1),_sTime(-1),_eTime(-1) {
//=======================================================
  
  _chitmap = NULL;
  
  _ahitmap = NULL;
}

//=======================================================
void gate::Signal::Info(std::ostream& s) const{
//=======================================================

    s << "========= Signal instance ======="<< std::endl;
    
    BObject::Info(s);

    s << "--Cathode HitMap:--"<< std::endl;
    
    s << *_chitmap << std::endl;

    s << "--Anode HitMap:--"<< std::endl;
    
    s << *_ahitmap << std::endl;

    s << "=============================="<< std::endl;

}

//=======================================================
std::ostream& operator << (std::ostream& s, const gate::Signal& sig) {
//=======================================================

    sig.Info(s);
  
    return s; 
}

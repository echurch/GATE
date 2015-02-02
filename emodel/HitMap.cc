#include<HitMap.h>

ClassImp(gate::HitMap)

//=======================================================
gate::HitMap::HitMap() : _sType(gate::NOSIGTYPE),
    _sTime(-1),_eTime(-1),_tSample(-1) {
//=======================================================

}


//=======================================================
void gate::HitMap::Info(ostream& s) const{
//=======================================================

    s << "========= HitMap instance ======="<< std::endl;
    
    s << "TO BE IMPLEMENTED"<< std::endl;
    
    s << "=============================="<< std::endl;

}

//=======================================================
ostream& operator << (ostream& s, const gate::HitMap& hit) {
//=======================================================

    hit.Info(s);
  
    return s; 
}

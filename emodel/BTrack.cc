#include<BTrack.h>


//=======================================================
gate::BTrack::BTrack() : BObject(){}
//=======================================================

//=======================================================
void gate::BTrack::Info(ostream& s) const{
//=======================================================

    BObject::Info(s);
    
    std::vector<gate::BHit*>::const_iterator it;
    
    s << "List of hits:" << std::endl;
    
    for (it = _hits.begin() ; it !=_hits.end(); ++it){ (*it)->Info(s); }
}

//=======================================================
ostream& operator << (ostream& s, const gate::BTrack& btrk) {
//=======================================================

    btrk.Info(s);
  
    return s; 
}

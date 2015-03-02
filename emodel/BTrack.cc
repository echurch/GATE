#include<BTrack.h>

ClassImp(gate::BTrack)

//=======================================================
gate::BTrack::BTrack() : BObject(){}
//=======================================================

//=======================================================
void gate::BTrack::Info(ostream& s) const{
//=======================================================

    BObject::Info(s);
     
    s << "List of hits:" << std::endl;
    
    std::vector<gate::BHit*>::const_iterator it;

    for (it = _hits.begin() ; it !=_hits.end(); ++it){ (*it)->Info(s); }
    
    s << "List of mirror tracks:" << std::endl;

    std::vector<gate::BTrack*>::const_iterator itt;

    for (itt = _mtracks.begin() ; itt !=_mtracks.end(); ++itt){ (*itt)->Info(s); }

}

//=======================================================
ostream& operator << (ostream& s, const gate::BTrack& btrk) {
//=======================================================

    btrk.Info(s);
  
    return s; 
}

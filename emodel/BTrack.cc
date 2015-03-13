#include <BTrack.h>

ClassImp(gate::BTrack)

//=======================================================
gate::BTrack::BTrack() : BObject(){}
//=======================================================

//=======================================================
double gate::BTrack::GetEnergy() const{
//=======================================================
    
    double energy = 0;

    std::vector<gate::BHit*>::const_iterator it;

    for (it = _hits.begin() ; it !=_hits.end(); ++it){ energy+=(*it)->GetAmplitude(); }

    return energy;
}

//=======================================================
void gate::BTrack::Info(std::ostream& s) const{
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
std::ostream& operator << (std::ostream& s, const gate::BTrack& btrk) {
//=======================================================

    btrk.Info(s);
  
    return s; 
}

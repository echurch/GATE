#include<MCTrack.h>

ClassImp(gate::MCTrack)

//=======================================================
gate::MCTrack::MCTrack() : BTrack(),_part(0){}
//=======================================================

//=======================================================
void gate::MCTrack::Info(std::ostream& s) const{
//=======================================================

    s << "========== MCTack instance ========"<<std::endl;

    BTrack::Info(s);
    
    if (_part) s << "MC Particle ID:  "<<_part->GetID()<<std::endl;

    s << "================================="<<std::endl;
    
}

//=======================================================
std::ostream& operator << (std::ostream& s, const gate::MCTrack& trk) {
//=======================================================

    trk.Info(s);
  
    return s; 
}

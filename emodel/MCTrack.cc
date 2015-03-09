#include<MCTrack.h>

ClassImp(gate::MCTrack)

//=======================================================
gate::MCTrack::MCTrack() : BTrack(),_part(0){}
//=======================================================

//=======================================================
void gate::MCTrack::Info(ostream& s) const{
//=======================================================

    s << "========== MCTack instance ========"<<std::endl;

    BTrack::Info(s);
    
    s << "MC Particle:  "<<*_part<<std::endl;

    s << "======================= ========="<<std::endl;
    
}

//=======================================================
ostream& operator << (ostream& s, const gate::MCTrack& trk) {
//=======================================================

    trk.Info(s);
  
    return s; 
}

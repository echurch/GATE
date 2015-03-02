#include<TTrack.h>

ClassImp(gate::TTrack)

//=======================================================
gate::TTrack::TTrack() : BTrack(){}
//=======================================================

//=======================================================
void gate::TTrack::Info(ostream& s) const{
//=======================================================

    BTrack::Info(s);
    
    s << "True Particle:  "<<*_part<<std::endl;
}

//=======================================================
ostream& operator << (ostream& s, const gate::TTrack& trk) {
//=======================================================

    trk.Info(s);
  
    return s; 
}

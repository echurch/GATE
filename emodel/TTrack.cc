#include<TTrack.h>

ClassImp(gate::TTrack)

//=======================================================
gate::TTrack::TTrack() : BTrack(){}
//=======================================================

//=======================================================
void gate::TTrack::Info(ostream& s) const{
//=======================================================

    s << "========== True track instance ========"<<std::endl;

    BTrack::Info(s);
    
    s << "True Particle:  "<<*_part<<std::endl;

    s << "=========== End of True track ========="<<std::endl;
    
}

//=======================================================
ostream& operator << (ostream& s, const gate::TTrack& trk) {
//=======================================================

    trk.Info(s);
  
    return s; 
}

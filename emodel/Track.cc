#include <Track.h>

ClassImp(gate::Track)

//=======================================================
gate::Track::Track() : BTrack(){}
//=======================================================

//=======================================================
void gate::Track::Info(std::ostream& s) const{
//=======================================================

    s << "============ Track instance: =========="<<std::endl;

    BTrack::Info(s);
    
    s << "Sensor Type:  "<<_sType<<std::endl;
    
    s << "track State:  "<<_state<<std::endl;

    s << "======================================="<<std::endl;

}

//=======================================================
std::ostream& operator << (std::ostream& s, const gate::Track& trk) {
//=======================================================

    trk.Info(s);
  
    return s; 
}

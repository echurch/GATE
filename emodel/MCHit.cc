#include<MCHit.h>


ClassImp(gate::MCHit)

//=======================================================
gate::MCHit::MCHit() : BHit(), _part(0){}
//=======================================================

//=======================================================
void gate::MCHit::Info(std::ostream& s) const{
//=======================================================

    s << "========== MC hit instance ========"<<std::endl;

    BHit::Info(s);
    
    s << "MC Particle ID:  "<<_part->GetID()<<std::endl;

    s << "=========== End of True hit ========="<<std::endl;
}

//=======================================================
std::ostream& operator << (std::ostream& s, const gate::MCHit& h) {
//=======================================================

    h.Info(s);
  
    return s; 
}

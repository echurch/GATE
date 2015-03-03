#include<MCHit.h>


ClassImp(gate::MCHit)

//=======================================================
gate::MCHit::MCHit() : BHit(){}
//=======================================================

//=======================================================
void gate::MCHit::Info(ostream& s) const{
//=======================================================

    s << "========== MC hit instance ========"<<std::endl;

    BHit::Info(s);
    
    s << "MC Particle:  "<<*_part<<std::endl;

    s << "=========== End of True hit ========="<<std::endl;
}

//=======================================================
ostream& operator << (ostream& s, const gate::MCHit& h) {
//=======================================================

    h.Info(s);
  
    return s; 
}

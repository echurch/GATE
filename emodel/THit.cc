#include<THit.h>


ClassImp(gate::THit)

//=======================================================
gate::THit::THit() : BHit(){}
//=======================================================

//=======================================================
void gate::THit::Info(ostream& s) const{
//=======================================================

    s << "========== True hit instance ========"<<std::endl;

    BHit::Info(s);
    
    s << "True Particle:  "<<*_part<<std::endl;

    s << "=========== End of True hit ========="<<std::endl;
}

//=======================================================
ostream& operator << (ostream& s, const gate::THit& h) {
//=======================================================

    h.Info(s);
  
    return s; 
}

#include<BParticle.h>

ClassImp(gate::BParticle)

//===========================================================
gate::BParticle::BParticle() : BObject(),_pdg(0), _ivtx(),_fvtx(),_ip4(),_fp4(){
//===========================================================
}


//===========================================================
void gate::BParticle::Info(ostream& s) const{
//===========================================================
    
    BObject::Info(s);
    
    s << " pdg = " << this->GetPDG() << std::endl;
    
    //! TO BE IMPLEMENTED

}

//=======================================================
ostream& operator << (ostream& s, const gate::BParticle& p) {
//=======================================================

    p.Info(s);
  
    return s; 
}

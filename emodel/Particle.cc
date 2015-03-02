#include<Particle.h>

ClassImp(gate::Particle)

//===========================================================
gate::Particle::Particle() : BObject(),_pdg(0), _ivtx(),_fvtx(),_ip4(),_fp4(),_mother(0){
//===========================================================
}


//===========================================================
void gate::Particle::Info(ostream& s) const{
//===========================================================
    
    s << " Particle: " << std::endl;

    BObject::Info(s);
    
    s << " pdg = " << this->GetPDG() << std::endl;
    
    //! TO BE IMPLEMENTED

}

//=======================================================
ostream& operator << (ostream& s, const gate::Particle& p) {
//=======================================================

    p.Info(s);
  
    return s; 
}

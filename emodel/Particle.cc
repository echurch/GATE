#include<Particle.h>

ClassImp(gate::Particle)

//===========================================================
gate::Particle::Particle() : BParticle(){
//===========================================================
}


//===========================================================
void gate::Particle::Info(ostream& s) const{
//===========================================================
    
    s << "============ Particle instance =============" << std::endl;

    BParticle::Info(s);
       
    s << "Number of tracks: " << this->GetTracks().size() << std::endl;
    
    s << "======================================" << std::endl;

}

//=======================================================
ostream& operator << (ostream& s, const gate::Particle& p) {
//=======================================================

    p.Info(s);
  
    return s; 
}

#include<MCParticle.h>

ClassImp(gate::MCParticle)

//===========================================================
gate::MCParticle::MCParticle() : BParticle(), 
    _G4(0), _primary(true),_mother(0), _creatProc(""){
//===========================================================
  
}


//===========================================================
void gate::MCParticle::Info(std::ostream& s) const{
//===========================================================
    
    s << "===========MCParticle instance ==============" << std::endl;

    BParticle::Info(s);
    
    s << "GEANT4 code: "<< this->GetG4() <<std::endl;

    s << "Primary particle?: "<< this->IsPrimary() <<std::endl;
    
    s << "Number of true tracks: " << this->GetTracks().size() << std::endl;
    
    s << "======================================" << std::endl;

}

//=======================================================
std::ostream& operator << (std::ostream& s, const gate::MCParticle& p) {
//=======================================================

    p.Info(s);
  
    return s; 
}

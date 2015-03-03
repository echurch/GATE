#include<MCParticle.h>

ClassImp(gate::MCParticle)

//===========================================================
gate::MCParticle::MCParticle() : BParticle(), _G4(0), _primary(true){
//===========================================================
  
}


//===========================================================
void gate::MCParticle::Info(ostream& s) const{
//===========================================================
    
    s << "===========MCParticle instance ==============" << std::endl;

    BParticle::Info(s);
    
    s << "GEANT4 code: "<< this->GetG4() <<std::endl;

    s << "Primary particle?: "<< this->IsPrimary() <<std::endl;
    
    s << "Number of true tracks: " << this->GetMCTracks().size() << std::endl;
    
    s << "======================================" << std::endl;

}

//=======================================================
ostream& operator << (ostream& s, const gate::MCParticle& p) {
//=======================================================

    p.Info(s);
  
    return s; 
}

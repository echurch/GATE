#include <GateUtilities.h>

std::string gate::ResumedInfo(gate::Event* event){
    //! too heavy for an inline function ???
    std::vector <gate::MCParticle*> mcParts = event->GetMCParticles();
    std::vector <gate::Track*> tracks = event->GetTracks();

    std::string info = "** Event " + to_string(event->GetID()) + "   Type: " + to_string(event->GetMCEventType()) + "\n";
    info += "*  True Edep: " + to_string(event->GetMCEnergy()) + "   from " + to_string(mcParts.size()) + " MC Particles\n";
    info += "*  Rec. Edep: " + to_string(event->GetEnergy()) + "   from " + to_string(tracks.size()) + " Rec Tracks\n";

    info += "*  MC Particles:\n";
    std::vector<gate::MCParticle*>::const_iterator IP;
    for(IP=mcParts.begin(); IP !=mcParts.end(); ++IP){ 
    //for (auto mcPart: mcParts) {
      const gate::MCParticle* mcPart = *IP; 
        info += "   ID: " + to_string(mcPart->GetID()) + "  " + mcPart->fetch_sstore("name");
        std::string motherIDstr = "null";
        if (not mcPart->IsPrimary()) motherIDstr = to_string(mcPart->GetMother().GetID());
        info += "  by " + mcPart->GetCreatorProc() + "  MotherID: " + motherIDstr;
        if (mcPart->GetTracks().size() > 0) {
            info += "  Edep: " + to_string(mcPart->GetTracks()[0]->GetEnergy()) + "\n";
            gate::Point3D iniPos = mcPart->GetInitialVtx();
            gate::Point3D decPos = mcPart->GetFinalVtx();
            info += "          IniVtx: (" + to_string(iniPos.x()) + ", " + to_string(iniPos.y()) + ", " + to_string(iniPos.z()) + ")";
            info += "  DecVtx: (" + to_string(decPos.x()) + ", " + to_string(decPos.y()) + ", " + to_string(decPos.z()) + ")";
        }
        info += "\n";
    }

    // ADD TRACKS INFO ////////////
    info += "*  Rec Tracks:\n";
    std::vector<gate::Track*>::const_iterator IT;
    for(IT=tracks.begin(); IT !=tracks.end(); ++IT){ 
      //for (auto track: tracks) {
      gate::Track* track = *IT;
        info += "   ID: " + to_string(track->GetID()) + "  Edep: " + to_string(track->GetEnergy()) + "\n";
        gate::Point3D iniPos = track->GetExtremes().first->GetPosition();
        gate::Point3D decPos = track->GetExtremes().second->GetPosition();
        info += "          IniVtx: (" + to_string(iniPos.x()) + ", " + to_string(iniPos.y()) + ", " + to_string(iniPos.z()) + ")";
        info += "  DecVtx: (" + to_string(decPos.x()) + ", " + to_string(decPos.y()) + ", " + to_string(decPos.z()) + ")";
        info += "\n";
    }


    info += '\n';
    return info;
}


#include <GateUtilities.h>


double gate::distance(gate::Point3D p1, gate::Point3D p2) {
  double distx = p1.x() - p2.x();
  double disty = p1.y() - p2.y();
  double distz = p1.z() - p2.z();
  return sqrt(distx*distx + disty*disty + distz*distz);
}

  
double gate::distance(gate::BHit* hit1, gate::BHit* hit2) {      
  return distance(hit1->GetPosition(),hit2->GetPosition());
}


double gate::distance(gate::BTrack* track1, gate::BTrack* track2) {    
  std::vector<BHit*> hits1 = track1->GetHits(); 
  std::vector<BHit*> hits2 = track2->GetHits(); 
    
  Assert( (hits1.size() && hits2.size()) ,__FILE__,__LINE__,
         gate::internal_logic("Track does not contain any hits")); 

  std::vector<BHit*>::const_iterator ihit;
  std::vector<BHit*>::const_iterator jhit;
  std::vector<double> distances; 

  for (ihit = hits1.begin(); ihit!=hits1.end(); ++ihit) {
    for (jhit = hits2.begin(); jhit!=hits2.end(); ++jhit) {
      distances.push_back(distance(*ihit,*jhit));
    }
  }
    
  std::sort(distances.begin(),distances.end());
  return distances[0];
}



std::string gate::ResumedInfo(gate::Event* event){
  std::vector <gate::MCParticle*> mcParts = event->GetMCParticles();
  std::vector <gate::Track*> tracks = event->GetTracks();

  std::string info = "\n*** Event " + to_string(event->GetID()) + "   Type: " + gate::toString(event->GetMCEventType()) + "\n";
  info += "*  True Edep: " + to_string(event->GetMCEnergy()) + "   from " + to_string(mcParts.size()) + " MC Particles\n";
  info += "*  Rec. Edep: " + to_string(event->GetEnergy()) + "   from " + to_string(tracks.size()) + " Rec Tracks\n";

  info += "\n*  MC Particles:\n";
  std::vector<gate::MCParticle*>::const_iterator IP;
  for(IP=mcParts.begin(); IP !=mcParts.end(); ++IP){ 
    const gate::MCParticle* mcPart = *IP; 
    info += "   ID: " + to_string(mcPart->GetID()) + "  " + mcPart->GetLabel();
    std::string motherIDstr = "null";
    if (not mcPart->IsPrimary()) motherIDstr = to_string(mcPart->GetMother().GetID());
    info += "  by " + mcPart->GetCreatorProc() + "  MotherID: " + motherIDstr;
    if (mcPart->GetTracks().size() > 0) {
      info += "  Edep: " + to_string(mcPart->GetTracks()[0]->GetEnergy()) + "\n";
      gate::Point3D iniPos = mcPart->GetInitialVtx();
      gate::Point3D decPos = mcPart->GetFinalVtx();
      info += "          IniVtx: (" + to_string(int(iniPos.x()+0.5)) + ", " +
                                  to_string(int(iniPos.y()+0.5)) + ", " + to_string(int(iniPos.z()+0.5)) + ")";
      info += "  DecVtx: (" + to_string(int(decPos.x()+0.5)) + ", " +
                          to_string(int(decPos.y()+0.5)) + ", " + to_string(int(decPos.z()+0.5)) + ")";
    }
  info += "\n";
  }

  /// ADD REC TRACKS INFO
  info += "\n*  Rec Tracks:\n";
  std::vector<gate::Track*>::const_iterator IT;
  for(IT=tracks.begin(); IT !=tracks.end(); ++IT){ 
    gate::Track* track = *IT;
    info += "   ID: " + to_string(track->GetID()) + "  Edep: " + to_string(track->GetEnergy()) + "\n";
    gate::Point3D iniPos = track->GetExtremes().first->GetPosition();
    gate::Point3D decPos = track->GetExtremes().second->GetPosition();
    info += "          IniVtx: (" + to_string(int(iniPos.x()+0.5)) + ", " +
                                to_string(int(iniPos.y()+0.5)) + ", " + to_string(int(iniPos.z()+0.5)) + ")";
    info += "  DecVtx: (" + to_string(int(decPos.x()+0.5)) + ", " +
                        to_string(int(decPos.y()+0.5)) + ", " + to_string(int(decPos.z()+0.5)) + ")";
    info += "\n";
  }

  info += '\n';
  return info;
}


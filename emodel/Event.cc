#include <Event.h>

ClassImp(gate::Event);

//=======================================================
gate::Event::Event(): gate::BObject(){
//=======================================================
    
    this->Clear();
}


//=======================================================
gate::Event::~Event(){
//=======================================================
    
    this->Clear();

}

//=======================================================
void gate::Event::Clear() {
//=======================================================
    
   
    this->DestroyHits();

    this->DestroySignals();
    
    this->DestroyHitMaps();

    this->DestroyClusters();
    
    this->DestroyTracks();
    
    this->DestroyParticles();
    
    this->DestroyMCTracks();

    this->DestroyMCHits();
    
    this->DestroyMCSensHits();
    
    this->DestroyMCParticles();
    
    _time = -1;
    
    _state = gate::NOSTATE;
  
    _etype = gate::NOETYPE;
  
    _emctype = gate::NOETYPE;
  
    _MCenergy = -1;
 
    _energy = -1;

    BObject::Clear();

}

//=======================================================
void gate::Event::DestroyHits(){
//=======================================================
    
    typedef std::vector<gate::MCHit*>::const_iterator ITH;
    for(ITH i=_thits.begin(); i !=_thits.end(); ++i){ 
        (*i)->ClearMirrorHits(); }
    
    typedef std::multimap<gate::SENSORTYPE, gate::Track*>::const_iterator IT;
    for(IT i=_tracks.begin(); i !=_tracks.end(); ++i){ 
        i->second->ClearHits(); }

    typedef std::multimap<gate::SENSORTYPE, gate::Cluster*>::const_iterator IC;
    for(IC i=_clusters.begin(); i !=_clusters.end(); ++i){ 
        i->second->ClearHits(); }

    typedef std::multimap<gate::SENSORTYPE, gate::Hit*>::const_iterator I;
    for(I i=_hits.begin(); i !=_hits.end(); ++i){ delete i->second; }
    _hits.clear();
  
}

//=======================================================
void gate::Event::DestroySignals(){
//=======================================================
    
  typedef std::vector<gate::Signal*>::const_iterator IS;
  for(IS i=_signals.begin(); i !=_signals.end(); ++i){ delete *i; }
  _signals.clear();

}

//=======================================================
void gate::Event::DestroyHitMaps(){
//=======================================================

    typedef std::vector<gate::Signal*>::const_iterator IS;
    for(IS i=_signals.begin(); i !=_signals.end(); ++i){ 
        (*i)->SetAnoHitMap(NULL); 
        (*i)->SetCatHitMap(NULL); 
    }
    
    typedef std::multimap<gate::SENSORTYPE, gate::HitMap*>::const_iterator II;
    for(II i=_hmaps.begin(); i !=_hmaps.end(); ++i){ delete i->second; }
    _hmaps.clear();

}

//=======================================================
void gate::Event::DestroyClusters(){
//=======================================================
    
    typedef std::multimap<gate::SENSORTYPE, gate::Track*>::const_iterator IT;
    for(IT i=_tracks.begin(); i !=_tracks.end(); ++i){ 
        i->second->ClearHits(); }

    typedef std::multimap<gate::SENSORTYPE, gate::Cluster*>::const_iterator IC;
    for(IC i=_clusters.begin(); i !=_clusters.end(); ++i){ delete i->second; }
    _clusters.clear();
}

//=======================================================
void gate::Event::DestroyTracks(){
//=======================================================
    
    typedef std::vector<gate::Particle*>::const_iterator IP;
    for(IP i=_parts.begin(); i !=_parts.end(); ++i){ (*i)->ClearTracks(); }

    typedef std::multimap<gate::SENSORTYPE, gate::Track*>::const_iterator IT;
    for(IT i=_tracks.begin(); i !=_tracks.end(); ++i){ delete i->second; }
    _tracks.clear();
    
}

//=======================================================
void gate::Event::DestroyParticles(){
//=======================================================
    
    typedef std::vector<gate::MCParticle*>::const_iterator ITP;
    for(ITP i=_tparts.begin(); i !=_tparts.end(); ++i){ 
        (*i)->ClearMirrorParticles(); }

    typedef std::vector<gate::Particle*>::const_iterator IP;
    for(IP i=_parts.begin(); i !=_parts.end(); ++i){ delete *i; }
    _parts.clear();
}
 
//=======================================================
void gate::Event::DestroyMCTracks(){
//=======================================================
    
    typedef std::vector<gate::MCParticle*>::const_iterator ITP;
    for(ITP i=_tparts.begin(); i !=_tparts.end(); ++i){ 
        (*i)->ClearTracks(); }

    typedef std::vector<gate::MCTrack*>::const_iterator ITT;
    for(ITT i=_ttracks.begin(); i !=_ttracks.end(); ++i){ delete *i; }
    _ttracks.clear();

}

//=======================================================
void gate::Event::DestroyMCHits(){
//=======================================================
    
    typedef std::multimap<gate::SENSORTYPE, gate::Hit*>::const_iterator I;
    for(I i=_hits.begin(); i !=_hits.end(); ++i){ 
        i->second->ClearMirrorHits(); }

    typedef std::vector<gate::MCTrack*>::const_iterator ITT;
    for(ITT i=_ttracks.begin(); i !=_ttracks.end(); ++i){ 
        (*i)->ClearHits(); }

    typedef std::vector<gate::MCHit*>::const_iterator ITH;
    for(ITH i=_thits.begin(); i !=_thits.end(); ++i){ delete *i; }
    _thits.clear();
}

//=======================================================
void gate::Event::DestroyMCSensHits(){
//=======================================================

    typedef std::vector<gate::Hit*>::const_iterator ITSH;
    for(ITSH i=_tshits.begin(); i !=_tshits.end(); ++i){ delete *i; }
    _tshits.clear();
          
}    

//=======================================================
void gate::Event::DestroyMCParticles(){
//=======================================================
    
    typedef std::vector<gate::Particle*>::const_iterator IP;
    for(IP i=_parts.begin(); i !=_parts.end(); ++i){
        (*i)->ClearMirrorParticles(); }

    typedef std::vector<gate::MCParticle*>::const_iterator ITP;
    for(ITP i=_tparts.begin(); i !=_tparts.end(); ++i){ delete *i; }
    _tparts.clear();
    
}


//=======================================================
std::vector<gate::Hit*> gate::Event::GetHits() const{
//=======================================================
    
    std::vector<gate::Hit*> hits;
    std::multimap<gate::SENSORTYPE,gate::Hit*>::const_iterator 
        iter = _hits.begin();
    while(iter != _hits.end()){ hits.push_back(iter->second); ++iter;}
    return hits;
  
}

//=======================================================
std::vector<gate::Hit*> gate::Event::GetHits(gate::SENSORTYPE  type) const{
//=======================================================
    
    std::vector<gate::Hit*> hits;
    typedef std::multimap<gate::SENSORTYPE, gate::Hit*>::const_iterator I;
    std::pair<I,I> b = _hits.equal_range(type);
    for(I i=b.first; i !=b.second; ++i){ hits.push_back((i->second)); }
    return hits;

}


//=======================================================
std::vector<gate::Cluster*> gate::Event::GetClusters() const{
//=======================================================
    
    std::vector<gate::Cluster*> clus;
    std::multimap<gate::SENSORTYPE,gate::Cluster*>::const_iterator 
        iter = _clusters.begin();
    while(iter != _clusters.end()){ clus.push_back(iter->second); ++iter;}
    return clus;
  
}

//=======================================================
std::vector<gate::Cluster*> gate::Event::GetClusters(gate::SENSORTYPE  type) const{
//=======================================================
    
    std::vector<gate::Cluster*> clus;
    typedef std::multimap<gate::SENSORTYPE, gate::Cluster*>::const_iterator I;
    std::pair<I,I> b = _clusters.equal_range(type);
    for(I i=b.first; i !=b.second; ++i){ clus.push_back((i->second)); }
    return clus;

}

//=======================================================
std::vector<gate::HitMap*> gate::Event::GetHitMaps() const{
//=======================================================
    
    std::vector<gate::HitMap*> maps;
    std::multimap<gate::SENSORTYPE,gate::HitMap*>::const_iterator 
        iter = _hmaps.begin();
    while(iter != _hmaps.end()){ maps.push_back(iter->second); ++iter;}
    return maps;
  
}

//=======================================================
std::vector<gate::HitMap*> gate::Event::GetHitMaps(gate::SENSORTYPE  type) const{
//=======================================================
    
    std::vector<gate::HitMap*> maps;
    typedef std::multimap<gate::SENSORTYPE, gate::HitMap*>::const_iterator I;
    std::pair<I,I> b = _hmaps.equal_range(type);
    for(I i=b.first; i !=b.second; ++i){ maps.push_back((i->second)); }
    return maps;

}


//=======================================================
std::vector<gate::Track*> gate::Event::GetTracks() const{
//=======================================================
    
    std::vector<gate::Track*> tracks;
    std::multimap<gate::SENSORTYPE,gate::Track*>::const_iterator 
        iter = _tracks.begin();
    while(iter != _tracks.end()){ tracks.push_back(iter->second); ++iter;}
    return tracks;
  
}

//=======================================================
std::vector<gate::Track*> gate::Event::GetTracks(gate::SENSORTYPE  type) const{
//=======================================================
    
    std::vector<gate::Track*> tracks;
    typedef std::multimap<gate::SENSORTYPE, gate::Track*>::const_iterator I;
    std::pair<I,I> b = _tracks.equal_range(type);
    for(I i=b.first; i !=b.second; ++i){ tracks.push_back((i->second)); }
    return tracks;
}


//=======================================================
void gate::Event::AddHit(gate::SENSORTYPE type, gate::Hit* hit){
//=======================================================
    
    _hits.insert(std::make_pair(type,hit));
}


//=======================================================
void gate::Event::AddCluster(gate::SENSORTYPE type, gate::Cluster* clus){
//=======================================================
    
    _clusters.insert(std::make_pair(type,clus));
}

//=======================================================
void gate::Event::AddHitMap(gate::SENSORTYPE type, gate::HitMap* hmap){
//=======================================================
    
    _hmaps.insert(std::make_pair(type,hmap));
}

//=======================================================
void gate::Event::AddTrack(gate::SENSORTYPE type, gate::Track* trk){
//=======================================================
    
    _tracks.insert(std::make_pair(type,trk));
}


//=======================================================
std::vector<gate::Signal*> gate::Event::GetSignals() const{
//=======================================================
  
    return _signals;
}

//=======================================================
void gate::Event::AddSignal(gate::Signal* sig) {
//=======================================================
  
    _signals.push_back(sig);
}



//=======================================================
std::vector<gate::Particle*> gate::Event::GetParticles() const{
//=======================================================
  
    return _parts;
}

//=======================================================
void gate::Event::AddParticle(gate::Particle* p) {
//=======================================================
  
    _parts.push_back(p);
}


//=======================================================
std::vector<gate::MCHit*> gate::Event::GetMCHits() const{
//=======================================================
    
    return _thits;
}

//=======================================================
std::vector<gate::Hit*> gate::Event::GetMCSensHits() const{
//=======================================================
    
    return _tshits;
}

//=======================================================
void gate::Event::AddMCHit(gate::MCHit* hit){
//=======================================================
   
    _thits.push_back(hit);
}

//=======================================================
void gate::Event::AddMCSensHit(gate::Hit* hit){
//=======================================================
   
    _tshits.push_back(hit);
}


//=======================================================
std::vector<gate::MCTrack*> gate::Event::GetMCTracks() const{
//=======================================================
    
    return _ttracks;
}

//=======================================================
void gate::Event::AddMCTrack(gate::MCTrack* trk){
//=======================================================
   
    _ttracks.push_back(trk);
}

//=======================================================
std::vector<gate::MCParticle*> gate::Event::GetMCParticles() const{
//=======================================================
  
    return _tparts;
}

//=======================================================
void gate::Event::AddMCParticle(gate::MCParticle* p) {
//=======================================================
  
    _tparts.push_back(p);
}


//=======================================================
double gate::Event::GetTracksEnergy(gate::SENSORTYPE type) const{
//=======================================================
    
    double energy = 0;
    typedef std::multimap<gate::SENSORTYPE, gate::Track*>::const_iterator I;
    std::pair<I,I> b = _tracks.equal_range(type);
    for(I i=b.first; i !=b.second; ++i){ energy += i->second->GetEnergy(); }
    return energy;

}

//=======================================================
double gate::Event::GetMCTracksEnergy() const{
//=======================================================
    
    double energy = 0;
    typedef std::vector<gate::MCTrack*>::const_iterator ITT;
    for(ITT i=_ttracks.begin(); i !=_ttracks.end(); ++i){energy+=(*i)->GetEnergy();}    
    return energy;
}

//=======================================================
void gate::Event::Info(std::ostream& s) const{
//=======================================================

    s << "======================================="<< std::endl;
    s << "============= Event instance =========="<< std::endl;
    s << "======================================="<< std::endl;
    
    s << " Event number: " << this->GetEventID()<< std::endl;

    s << " Event time: " << this->GetTime()<< std::endl;
    
    s << "======================================="<< std::endl;
    s << "             Event Toplogy              "<< std::endl;
    s << "======================================="<< std::endl;

    s << "==== MC true objects  ===="<< std::endl;
    
    s << " Number of true particles: " << 
        
      this->GetMCParticles().size()<< std::endl;

    s << " Number of true tracks: " << this->GetMCTracks().size()<< std::endl;

    s << " Number of true hits: " << this->GetMCHits().size()<< std::endl;
    
    s << " Number of true sensor hits: " << 
        
        this->GetMCSensHits().size()<< std::endl;
    
    s << "==== Detector hits ===="<< std::endl;

    s << " Number of PMT hits: "<<this->GetHits(gate::PMT).size()<< std::endl;

    s << " Number of SiPM hits: "<<this->GetHits(gate::SIPM).size()<< std::endl;
    
    s << "==== Reconstructed objects ===="<< std::endl;

    s << " Number of signals: " << this->GetSignals().size()<< std::endl;

    s << " Number of clusters: " << this->GetClusters().size()<< std::endl;
    
    s << " Number of tracks: " << this->GetTracks().size()<< std::endl;

    s << " Number of particles: " << this->GetParticles().size()<< std::endl;

    s << "======================================="<< std::endl;
    s << "      Event detailed information       "<< std::endl;
    s << "======================================="<< std::endl;
    
     s << "======== MC true objects  ========"<< std::endl;

     s << "==== List of true particles:"<< std::endl;     
     std::vector<gate::MCParticle*> mcps = this->GetMCParticles();
     for(size_t i=0; i< mcps.size(); i++){s<<*mcps[i]<<std::endl;}
     
     s << "==== List of true tracks:"<< std::endl;
     std::vector<gate::MCTrack*> mcts = this->GetMCTracks();
     for(size_t i=0; i< mcts.size(); i++){s<<*mcts[i]<<std::endl;}

     s << "==== List of true hits:"<< std::endl;
     std::vector<gate::MCHit*> mchs = this->GetMCHits();
     for(size_t i=0; i< mchs.size(); i++){s<<*mchs[i]<<std::endl;}

     s << "==== List of true sensor hits:"<< std::endl;
     std::vector<gate::Hit*> mcshs = this->GetMCSensHits();
     for(size_t i=0; i< mcshs.size(); i++){s<<*mcshs[i]<<std::endl;}

     s << "===== End of MC true objects  ====="<< std::endl;

     s << "======= Detector hits  ======="<< std::endl;
     s << "==== List of PMT hits:"<< std::endl;
     std::vector<gate::Hit*> phs = this->GetHits(gate::PMT);
     for(size_t i=0; i< phs.size(); i++){s<<*phs[i]<<std::endl;}

     s << "==== List of SiPM hits:"<< std::endl;
     std::vector<gate::Hit*> shs = this->GetHits(gate::SIPM);
     for(size_t i=0; i< shs.size(); i++){s<<*shs[i]<<std::endl;}

     s << "===== End of detector hits  ====="<< std::endl;
    
     s << "======== Reconstructed objects  ========"<< std::endl;
     
     s << "==== List of signals:"<< std::endl;
     std::vector<gate::Signal*> ss = this->GetSignals();
     for(size_t i=0; i< ss.size(); i++){s<<*ss[i]<<std::endl;}

     s << "==== List of clusters:"<< std::endl;
     std::vector<gate::Cluster*> cs = this->GetClusters();
     for(size_t i=0; i< cs.size(); i++){s<<*cs[i]<<std::endl;}
     
     s << "==== List of tracks:"<< std::endl;
     std::vector<gate::Track*> ts = this->GetTracks();
     for(size_t i=0; i< ts.size(); i++){s<<*ts[i]<<std::endl;}

     s << "===== End of Reconstructed objects  ====="<< std::endl;

    s << "======================================="<< std::endl;
    s << "============== End of Event ==========="<< std::endl;
    s << "======================================="<< std::endl;
     
}

//=======================================================
std::ostream& operator << (std::ostream& s, const gate::Event& evt) {
//=======================================================

    evt.Info(s);
  
    return s; 
}

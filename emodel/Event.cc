#include<Event.h>

ClassImp(gate::Event);

//=======================================================
//gate::Event::Event(): gate::ParamStore("Event"),_eventID(-1){
gate::Event::Event(): _eventID(-1){
//=======================================================
}

//=======================================================
gate::Event::Event(int id): _eventID(id){
//=======================================================
}

//=======================================================
gate::Event::~Event(){
//=======================================================
    
    // destroy hits

    typedef std::multimap<gate::SENSORTYPE, gate::Hit*>::const_iterator I;
    for(I i=_hits.begin(); i !=_hits.end(); ++i){ delete i->second; }
    _hits.clear();
    
    // destroy hit maps

     typedef std::multimap<gate::SENSORTYPE, gate::HitMap*>::const_iterator II;
    for(II i=_hmaps.begin(); i !=_hmaps.end(); ++i){ delete i->second; }
    _hmaps.clear();

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
void gate::Event::AddHit(gate::SENSORTYPE type, gate::Hit* hit){
//=======================================================
    
    _hits.insert(std::make_pair(type,hit));

}

//=======================================================
void gate::Event::AddHitMap(gate::SENSORTYPE type, gate::HitMap* hmap){
//=======================================================
    
    _hmaps.insert(std::make_pair(type,hmap));

}

//=======================================================
void gate::Event::Info(ostream& s) const{
//=======================================================

    s << "=============Event instance=========="<< std::endl;
    
    s << " Event number: " << this->GetEventID()<< std::endl;

    s << " Event time: " << this->GetTime()<< std::endl;
    
    s << "=================================="<< std::endl;

}

//=======================================================
ostream& operator << (ostream& s, const gate::Event& evt) {
//=======================================================

    evt.Info(s);
  
    return s; 
}

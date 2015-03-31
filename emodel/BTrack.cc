#include <BTrack.h>

ClassImp(gate::BTrack)

//=======================================================
gate::BTrack::BTrack() : BObject(), _length(0){
//=======================================================

  _exhits = std::make_pair((BHit*) NULL,(BHit*) NULL);// ???

}

//=======================================================
double gate::BTrack::GetEnergy() const{
//=======================================================
    
    double energy = 0;

    std::vector<gate::BHit*>::const_iterator it;

    for (it = _hits.begin(); it!=_hits.end();++it){
      
      energy+=(*it)->GetAmplitude();}

    return energy;
}

//=======================================================
void gate::BTrack::SetExtremes(size_t first, size_t last){
//=======================================================
  
  gate::Assert( (first<_hits.size() && last<_hits.size()),
		
		__FILE__,__LINE__,
		
		gate::internal_logic("Hit index out of bounds"));

  _exhits.first  = _hits[first];
  _exhits.second = _hits[last];

}

//=======================================================
void gate::BTrack::Info(std::ostream& s) const{
//=======================================================

    BObject::Info(s);
     
    s << "List of hits:" << std::endl;
    
    std::vector<gate::BHit*>::const_iterator it;

    for (it = _hits.begin() ; it !=_hits.end(); ++it){ (*it)->Info(s); }
    
    s << "List of mirror tracks:" << std::endl;

    std::vector<gate::BTrack*>::const_iterator itt;

    for (itt = _mtracks.begin() ; itt !=_mtracks.end(); ++itt){ (*itt)->Info(s); }

}

//=======================================================
std::ostream& operator << (std::ostream& s, const gate::BTrack& btrk) {
//=======================================================

    btrk.Info(s);
  
    return s; 
}

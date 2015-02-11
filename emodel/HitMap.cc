#include<HitMap.h>

ClassImp(gate::HitMap)

//=======================================================
gate::HitMap::HitMap() : _sensType(gate::NOSTYPE),_sType(gate::NOSIGTYPE),
    _sTime(-1),_eTime(-1),_tSample(-1) {
//=======================================================

}

//=======================================================
std::vector<int> gate::HitMap::GetChannels(size_t isample) const{
//=======================================================
  
  typename std::map<int, double>::const_iterator pi;
  std::vector<int> chs;
     
  for (pi = _tmap[isample].begin(); pi!= _tmap[isample].end(); ++pi){
    chs.push_back(pi->first);} 
  
  return chs;

}

//=======================================================
std::vector<double> gate::HitMap::GetAmplitudes(size_t isample) const{
//=======================================================
  
  typename std::map<int, double>::const_iterator pi;
  std::vector<double> chs;
     
  for (pi = _tmap[isample].begin(); pi!= _tmap[isample].end(); ++pi){
    chs.push_back(pi->second);} 
  
  return chs;

}


//=======================================================
void gate::HitMap::Info(ostream& s) const{
//=======================================================

    s << "========= HitMap instance ======="<< std::endl;
    
    s << "TO BE IMPLEMENTED"<< std::endl;
    
    s << "=============================="<< std::endl;

}

//=======================================================
ostream& operator << (ostream& s, const gate::HitMap& hit) {
//=======================================================

    hit.Info(s);
  
    return s; 
}

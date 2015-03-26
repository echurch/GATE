#include "Waveform.h"

//=======================================================
gate::Waveform::Waveform() : BObject(),_sensorID(-1),_sampWidth(0),
			     _baseline(0),_baselineRMS(0){
//=======================================================
  
}

//=======================================================
gate::Waveform::~Waveform() {
//=======================================================
    
    typedef std::vector<gate::Pulse*>::const_iterator p;
    for(p i=_pulses.begin(); i !=_pulses.end(); ++i){  delete *i; }
    _pulses.clear();

}

//=======================================================
void gate::Waveform::SetData(std::vector< std::pair<unsigned short,unsigned short> >data){
//=======================================================
    _data=data;}

//=======================================================
double gate::Waveform::GetAmplitude(unsigned short isamp) const{
//=======================================================
  
  double amp = gate::nan;

  std::vector< std::pair<unsigned short,unsigned short> >::const_iterator I;
  
  for (I = _data.begin(); I !=_data.end(); ++I ){
    
    if ((*I).first == isamp) { amp = (*I).second; break; } }
  
  return (amp==gate::nan ? 0 : amp);

}

//=======================================================
void gate::Waveform::Info(std::ostream& s) const{
//=======================================================

    s << "========= Waveform instance ======="<< std::endl;
    
    BObject::Info(s);

    s << "Baseline mean: "<<this->GetBaseline()<< std::endl;
    
    s << "Baseline noise: "<<this->GetBaselineSig()<< std::endl;
    
    s << "==================================="<< std::endl;

}

//=======================================================
std::ostream& operator << (std::ostream& s, const gate::Waveform& wf) {
//=======================================================

    wf.Info(s);
  
    return s; 
}

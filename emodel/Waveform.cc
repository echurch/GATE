#include "Waveform.h"

//=======================================================
//gate::Waveform::Waveform() : ParamStore("Waveform"), _sensorID(-1){
gate::Waveform::Waveform() : _sensorID(-1){
//=======================================================

}

//=======================================================
void gate::Waveform::SetData(std::vector< std::pair<double,double> >data){
//=======================================================
    _data=data;}

//=======================================================
void gate::Waveform::Info(ostream& s) const{
//=======================================================

    s << "=========Waveform instance ======="<< std::endl;
    
    s << "TO BE IMPLEMENTED"<< std::endl;
    
    s << "=============================="<< std::endl;

}

//=======================================================
ostream& operator << (ostream& s, const gate::Waveform& wf) {
//=======================================================

    wf.Info(s);
  
    return s; 
}

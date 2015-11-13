#include<Run.h>


ClassImp(gate::Run)

//===============================================================
gate::Run::Run(gate::DATATYPE dt, int id) : BObject(){
//===============================================================
    
    _geo = 0;

    _prop = 0;
    
    this->Clear();

    _dType = dt; 

    _runID = id;

    //_geo = new gate::Geometry();

    //_prop = new gate::Properties();
    
    
}

//===============================================================
gate::Run::~Run(){ 
//===============================================================
    
    this->Clear();
    
}


//===============================================================
void gate::Run::Clear(){ 
//===============================================================
    
    if (_geo) delete _geo;
    
    if (_prop) delete _prop;
    
    BObject::Clear();
    
    _dType = gate::NODTYPE;

    _runID = -1;
    
    _sTime = _eTime = -1;

}


//=======================================================
void gate::Run::Info(std::ostream& s) const{
//=======================================================

    s << "============== Run instance ==========="<< std::endl;
    
    s << " Run number: " << this->GetRunID()<< std::endl;

    s << " Data type: " << this->GetDataType()<< std::endl;

    s << " Start time: " << this->GetStartTime()<< std::endl;

    s << " Start time: " << this->GetEndTime()<< std::endl;

    if (_geo){ 
        
        s << " Detector geometry: "<< std::endl;

        s << *_geo << std::endl;}
    
    if (_prop) {
        s << " Detector properties: "<< std::endl;
        
        s << *_prop << std::endl;}

    s << "======================================="<< std::endl;

}

//=======================================================
std::ostream& operator << (std::ostream& s, const gate::Run& run) {
//=======================================================

    run.Info(s);
  
    return s; 
}

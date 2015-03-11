#include<Run.h>


ClassImp(gate::Run)

//===============================================================
gate::Run::Run(gate::DATATYPE dt, int id) : _dType(dt), _runID(id),
  _sTime(-1),_eTime(-1){
//===============================================================

  
}


//=======================================================
void gate::Run::Info(std::ostream& s) const{
//=======================================================

    s << "============= Event instance =========="<< std::endl;
    
    s << " Run number: " << this->GetRunID()<< std::endl;

    s << " Start time: " << this->GetStartTime()<< std::endl;

    s << " Start time: " << this->GetEndTime()<< std::endl;
    
    s << "======================================="<< std::endl;

}

//=======================================================
std::ostream& operator << (std::ostream& s, const gate::Run& run) {
//=======================================================

    run.Info(s);
  
    return s; 
}

#include<Run.h>


ClassImp(gate::Run)

//===============================================================
gate::Run::Run(gate::DATATYPE dt, int id) : BObject(), 
_dType(dt), _runID(id),_sTime(-1),_eTime(-1){
//===============================================================

  
}

// //=======================================================
// std::vector<gate::Sensor*> gate::Run::GetSensors() const{
// //=======================================================
    
//     std::vector<gate::Sensor*> sensors;
//     std::multimap<gate::SENSORTYPE,gate::Sensor*>::const_iterator 
//         iter = _sensors.begin();
//     while(iter != _sensors.end()){sensors.push_back(iter->second); ++iter;}
//     return sensors;
  
// }

// //=======================================================
// std::vector<gate::Sensor*> gate::Run::GetSensors(gate::SENSORTYPE type)const{
// //=======================================================
    
//     std::vector<gate::Sensor*> sensors;
//     typedef std::multimap<gate::SENSORTYPE, gate::Sensor*>::const_iterator I;
//     std::pair<I,I> b = _sensors.equal_range(type);
//     for(I i=b.first; i !=b.second; ++i){ sensors.push_back((i->second)); }
//     return sensors;
// }


// //=======================================================
// void gate::Run::AddHit(gate::SENSORTYPE type, gate::Sensor* sens){
// //=======================================================
    
//     _sensors.insert(std::make_pair(type,sens));
// }

//=======================================================
void gate::Run::AddSensor(gate::Sensor* sens){
//=======================================================
    
  _sensors[sens->GetID()]=sens;
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

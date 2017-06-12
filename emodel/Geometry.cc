#include<Geometry.h>

ClassImp(gate::Geometry)

//===============================================================
gate::Geometry::Geometry() : BObject(){
//===============================================================

  _xmin = _xmax = _ymin =_ymax = _zmin = _zmax = _rmax = 0;

}


//===============================================================
gate::Geometry::~Geometry(){
//===============================================================
    
    typedef std::map<int, gate::Sensor*>::const_iterator I;
    for(I i=_sensors.begin(); i !=_sensors.end(); ++i){ delete i->second; }
    _sensors.clear();
  
}


//=======================================================
void gate::Geometry::AddSensor(gate::Sensor* sens){
//=======================================================
    
    _sensors[sens->GetID()]=sens;
}

//=======================================================
const std::map<int,gate::Sensor*>& gate::Geometry::GetSensors() const{
//=======================================================
    
    return _sensors;
}


//=======================================================
void gate::Geometry::Info(std::ostream& s) const{
//=======================================================

    s << "============== Geometry instance ==========="<< std::endl;
    
    std::cout<<"X = "<<this->GetXmin()<<" - "<<this->GetXmax()<<std::endl;
    std::cout<<"Y = "<<this->GetYmin()<<" - "<<this->GetYmax()<<std::endl;
    std::cout<<"Z = "<<this->GetZmin()<<" - "<<this->GetZmax()<<std::endl;
    std::cout<<"R = "<<this->GetRmax()<<std::endl;
    std::cout<<"Number of sensors: "<<_sensors.size()<<std::endl;
    typedef std::map<int, gate::Sensor*>::const_iterator is;
    for(is i=_sensors.begin(); i !=_sensors.end(); ++i){
        std::cout<<"Sensor "<< i->first<<":"<<std::endl;
        std::cout<< *i->second << std::endl;
    }
    s << "============================================"<< std::endl;

}

//=======================================================
std::ostream& operator << (std::ostream& s, const gate::Geometry& geo) {
//=======================================================

    geo.Info(s);
  
    return s; 
}

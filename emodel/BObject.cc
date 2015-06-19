#include <BObject.h>

//=======================================================
void gate::BObject::Info(std::ostream& s) const{
//=======================================================
    
    //s << " Data type" << this->GetDataType()<< std::endl;
    s << " Label" << this->GetLabel()<< std::endl;
    
    s << " Object ID" << this->GetID()<< std::endl;
    
}

//=======================================================
std::ostream& operator << (std::ostream& s, const gate::BObject& obj) {
//=======================================================

    obj.Info(s);
  
    return s; 
}

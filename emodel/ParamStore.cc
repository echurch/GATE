#include <ParamStore.h>

ClassImp(gate::ParamStore)


//**************************************************** 
gate::ParamStore::ParamStore() {fStoreName="ParamStore";}
//****************************************************


//**************************************************** 
gate::ParamStore::ParamStore(std::string name) {
//****************************************************

  fStoreName=name;

  //Message::SetLevelMSG(fStoreName,Message::GetLevelMSG());
  
  //Message::MSG(fStoreName,kMINFO,"<<Construction>>");

}


//**************************************************** 
void gate::ParamStore::store(std::string name,double val, bool force){ 
//****************************************************
  
  if (!force && this->find_dstore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

//		 Form("Parameter already in store: %s",name.c_str()));
  }
    
  dstore_[name]=val; 

}
//****************************************************
void gate::ParamStore::store(std::string name,int val,bool force){
//****************************************************

  if (!force && this->find_istore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

//		 Form("Parameter already in store: %s",name.c_str()));
  }

  istore_[name]=val;
 
}

//****************************************************
void gate::ParamStore::store(std::string name,std::string val, bool force){
//****************************************************

  if (!force && this->find_sstore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

//		 Form("Parameter already in store: %s",name.c_str()));
  }
  
  sstore_[name]=val;

}

//****************************************************
void gate::ParamStore::store(std::string name,gate::vdouble& val, bool force){
//****************************************************

  if (!force && this->find_dvstore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

      //	 Form("Parameter already in store: %s",name.c_str()));
  }

  dvstore_[name]=val;

}

//**************************************************** 
void gate::ParamStore::store(std::string name,gate::vstring& val, bool force){
//****************************************************
  
  if (!force && this->find_svstore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

//		 Form("Parameter already in store: %s",name.c_str()));
  }
  
  svstore_[name]=val;
}

//**************************************************** 
void gate::ParamStore::store(std::string name,gate::vint& val, bool force){
//****************************************************
  
  if (!force && this->find_ivstore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

      //	 Form("Parameter already in store: %s",name.c_str()));
  }
  
  ivstore_[name]=val;
}

//**************************************************** 
void gate::ParamStore::store(std::string name,TObject* val, bool force){
//****************************************************
  
  if (!force && this->find_tstore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

//		 Form("Parameter already in store: %s",name.c_str()));
  }
  
  tstore_[name]=val;
}


//**************************************************** 
void gate::ParamStore::store(std::string name,gate::vtobject& val, bool force){
//****************************************************
  
  if (!force && this->find_tvstore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

      //	 Form("Parameter already in store: %s",name.c_str()));
  }
  
  tvstore_[name]=val;
}

//**************************************************** 
double gate::ParamStore::fetch_dstore(std::string name) { 
//**************************************************** 
  
  if (!this->find_dstore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

//		 Form("Parameter not in store: %s",name.c_str()));
  }
  
  return dstore_[name]; 
}

//**************************************************** 
int gate::ParamStore::fetch_istore(std::string name) {
//**************************************************** 
  
  if (!this->find_istore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

//		 Form("Parameter not in store: %s",name.c_str()));
  }

  return istore_[name];

}

//**************************************************** 
std::string gate::ParamStore::fetch_sstore(std::string name) {
//**************************************************** 

  if (!this->find_sstore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

//		 Form("Parameter not in store: %s",name.c_str()));
  }
  
  return sstore_[name];
}

//**************************************************** 
const gate::vdouble& gate::ParamStore::fetch_dvstore(std::string name) {
//**************************************************** 

  if (!this->find_dvstore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

//		 Form("Parameter not in store: %s",name.c_str()));
  }

  return dvstore_[name];

}

//**************************************************** 
const gate::vstring& gate::ParamStore::fetch_svstore(std::string name) {
//**************************************************** 
  
  if (!this->find_svstore(name)){
    
      //  Message::MSG(fStoreName,kMFATAL,

//		 Form("Parameter not in store: %s",name.c_str()));
  }

  return svstore_[name];

}

//**************************************************** 
const gate::vint& gate::ParamStore::fetch_ivstore(std::string name) {
//**************************************************** 
  
  if (!this->find_ivstore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

      //Form("Parameter not in store: %s",name.c_str()));
  }

  return ivstore_[name];
}

//**************************************************** 
TObject* gate::ParamStore::fetch_tstore(std::string name) {
//**************************************************** 

  if (!this->find_tstore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

//		 Form("Parameter not in store: %s",name.c_str()));
  }
  
  return tstore_[name];
}

//**************************************************** 
const gate::vtobject& gate::ParamStore::fetch_tvstore(std::string name) {
//**************************************************** 
  
  if (!this->find_tvstore(name)){
    
      //   Message::MSG(fStoreName,kMFATAL,

//		 Form("Parameter not in store: %s",name.c_str()));
  }

  return tvstore_[name];
}

//**************************************************** 
size_t gate::ParamStore::size() const{
//****************************************************     

  size_t len=0;
    
  len += size_istore();
  len += size_dstore();
  len += size_sstore();
  len += size_dvstore();
  len += size_ivstore();
  len += size_svstore();
  len += size_tstore();
  len += size_tvstore();
    
  return len;
}

//**************************************************** 
void gate::ParamStore::clear(){
//**************************************************** 
  dstore_.clear();
  istore_.clear();
  sstore_.clear();
  dvstore_.clear();
  svstore_.clear();
  ivstore_.clear();
  tstore_.clear();
  tvstore_.clear();
}

//**************************************************** 
int gate::ParamStore::find(std::string name) const{ 
//****************************************************
  int count = 0;
  if (find_dstore(name))
    count++;
  if (find_istore(name))
    count++;
  if(find_sstore(name))
    count++;
  if(find_dvstore(name))
    count++;
  if(find_ivstore(name))
    count++;
  if(find_svstore(name))          
    count++;
  if(find_tstore(name))  
    count++;
  if(find_tvstore(name))  
    count++;
  return count;
}

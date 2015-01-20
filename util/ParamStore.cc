#include <ParamStore.h>

using namespace std;

using namespace gate;

ClassImp(ParamStore)

//**************************************************** 
ParamStore::ParamStore(std::string name) {
//****************************************************

  fStoreName=name;

  //Message::SetLevelMSG(fStoreName,Message::GetLevelMSG());
  
  //Message::MSG(fStoreName,kMINFO,"<<Construction>>");

}


//**************************************************** 
void ParamStore::store(std::string name,double val, bool force){ 
//****************************************************
  
  if (!force && this->find_dstore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

//		 Form("Parameter already in store: %s",name.c_str()));
  }
    
  dstore_[name]=val; 

}
//****************************************************
void ParamStore::store(std::string name,int val,bool force){
//****************************************************

  if (!force && this->find_istore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

//		 Form("Parameter already in store: %s",name.c_str()));
  }

  istore_[name]=val;
 
}

//****************************************************
void ParamStore::store(std::string name,std::string val, bool force){
//****************************************************

  if (!force && this->find_sstore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

//		 Form("Parameter already in store: %s",name.c_str()));
  }
  
  sstore_[name]=val;

}

//****************************************************
void ParamStore::store(std::string name,vdouble& val, bool force){
//****************************************************

  if (!force && this->find_dvstore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

      //	 Form("Parameter already in store: %s",name.c_str()));
  }

  dvstore_[name]=val;

}

//**************************************************** 
void ParamStore::store(std::string name,vstring& val, bool force){
//****************************************************
  
  if (!force && this->find_svstore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

//		 Form("Parameter already in store: %s",name.c_str()));
  }
  
  svstore_[name]=val;
}

//**************************************************** 
void ParamStore::store(std::string name,vint& val, bool force){
//****************************************************
  
  if (!force && this->find_ivstore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

      //	 Form("Parameter already in store: %s",name.c_str()));
  }
  
  ivstore_[name]=val;
}

//**************************************************** 
void ParamStore::store(std::string name,TObject* val, bool force){
//****************************************************
  
  if (!force && this->find_tstore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

//		 Form("Parameter already in store: %s",name.c_str()));
  }
  
  tstore_[name]=val;
}


//**************************************************** 
void ParamStore::store(std::string name,vtobject& val, bool force){
//****************************************************
  
  if (!force && this->find_tvstore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

      //	 Form("Parameter already in store: %s",name.c_str()));
  }
  
  tvstore_[name]=val;
}

//**************************************************** 
double ParamStore::fetch_dstore(std::string name) { 
//**************************************************** 
  
  if (!this->find_dstore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

//		 Form("Parameter not in store: %s",name.c_str()));
  }
  
  return dstore_[name]; 
}

//**************************************************** 
int ParamStore::fetch_istore(std::string name) {
//**************************************************** 
  
  if (!this->find_istore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

//		 Form("Parameter not in store: %s",name.c_str()));
  }

  return istore_[name];

}

//**************************************************** 
std::string ParamStore::fetch_sstore(std::string name) {
//**************************************************** 

  if (!this->find_sstore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

//		 Form("Parameter not in store: %s",name.c_str()));
  }
  
  return sstore_[name];
}

//**************************************************** 
const vdouble& ParamStore::fetch_dvstore(std::string name) {
//**************************************************** 

  if (!this->find_dvstore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

//		 Form("Parameter not in store: %s",name.c_str()));
  }

  return dvstore_[name];

}

//**************************************************** 
const vstring& ParamStore::fetch_svstore(std::string name) {
//**************************************************** 
  
  if (!this->find_svstore(name)){
    
      //  Message::MSG(fStoreName,kMFATAL,

//		 Form("Parameter not in store: %s",name.c_str()));
  }

  return svstore_[name];

}

//**************************************************** 
const vint& ParamStore::fetch_ivstore(std::string name) {
//**************************************************** 
  
  if (!this->find_ivstore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

      //Form("Parameter not in store: %s",name.c_str()));
  }

  return ivstore_[name];
}

//**************************************************** 
TObject* ParamStore::fetch_tstore(std::string name) {
//**************************************************** 

  if (!this->find_tstore(name)){
    
      //Message::MSG(fStoreName,kMFATAL,

//		 Form("Parameter not in store: %s",name.c_str()));
  }
  
  return tstore_[name];
}

//**************************************************** 
const vtobject& ParamStore::fetch_tvstore(std::string name) {
//**************************************************** 
  
  if (!this->find_tvstore(name)){
    
      //   Message::MSG(fStoreName,kMFATAL,

//		 Form("Parameter not in store: %s",name.c_str()));
  }

  return tvstore_[name];
}

//**************************************************** 
size_t ParamStore::size() const{
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
void ParamStore::clear(){
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
int ParamStore::find(std::string name) const{ 
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

#ifndef __ParamStore_h
#define __ParamStore_h

#include<TSystem.h>


//#include<string>
#include<vector>
#include<map>

//! a vector of doubles
typedef std::vector<double> vdouble;
//! a vector of integers
typedef std::vector<int> vint;
//! a vector of std::strings
typedef std::vector<std::string> vstring;
//! a vector of tobjects
typedef std::vector<TObject*> vtobject;


namespace gate{ class ParamStore; }

class gate::ParamStore{
  
private:

  std::string fStoreName;

protected:
  
  //! ParamStore for doubles
  std::map<std::string,double> dstore_;
  //! ParamStore for integers
  std::map<std::string,int> istore_;
  //! ParamStore for strings
  std::map<std::string,std::string> sstore_;
  //! ParamStore for vectors of doubles
  std::map<std::string,vdouble> dvstore_;
  //! ParamStore for vectors of integers
  std::map<std::string,vint> ivstore_;
  //! ParamStore for vectors of strings
  std::map<std::string,vstring> svstore_;
  
  //! ParamStore for TObjects
  std::map<std::string,TObject*> tstore_;
   //! ParamStore for vectors of TObjects
  std::map<std::string,vtobject> tvstore_;

public:
  
  //! Default constructor
  ParamStore(std::string name="ParamStore");

  //! default destructor
  virtual ~ParamStore(){}
    
  //! store a new double in the store
  void store(std::string name,double val,bool force=false);
  //! store a new int in the store 
  void store(std::string name,int val,bool force=false);
  //! store a new string in the store 
  void store(std::string name,std::string val,bool force=false);
  //! store a new histo definition in the store
  void store(std::string name,vdouble& val,bool force=false);
  //! store a new string vector in the store
  void store(std::string name,vstring& val,bool force=false);
  //! store a new integer vector in the store
  void store(std::string name,vint& val,bool force=false);
  
  //! store a new TObject in the store 
  void store(std::string name,TObject* val,bool force=false);
  //! store a new vector of TObjects in the store 
  void store(std::string name,vtobject& val,bool force=false);

  
  //!size of the double store
  size_t size_dstore()const {return dstore_.size();}
  //!size of the int store
  size_t size_istore()const {return istore_.size();}
  //!size of the string store
  size_t size_sstore()const {return sstore_.size();}
  //!size of the histo definitions store
  size_t size_dvstore()const {return dvstore_.size();}
  //!size of the vector store
  size_t size_svstore()const {return svstore_.size();}
  //!size of the vector store
  size_t size_ivstore()const {return ivstore_.size();}
  
  //!size of the vector store
  size_t size_tstore()const {return tstore_.size();}
  //!size of the vector store
  size_t size_tvstore()const {return tvstore_.size();}

  //! Find double (if exists) in the store
  bool find_dstore(std::string name)const { return (dstore_.find(name)!=dstore_.end()); } 
  //! Find int (if exists) in the store
  bool find_istore(std::string name)const { return (istore_.find(name)!=istore_.end()); } 
  //! Find std::string (if exists) in the store
  bool find_sstore(std::string name)const { return (sstore_.find(name)!=sstore_.end()); } 
  //! Find HD (if exists) in the store
  bool find_dvstore(std::string name)const { return (dvstore_.find(name)!=dvstore_.end()); } 
  //! Find integer vector (if exists) in the store
  bool find_ivstore(std::string name)const { return (ivstore_.find(name)!=ivstore_.end()); }
  //! Find string vector (if exists) in the store
  bool find_svstore(std::string name)const { return (svstore_.find(name)!=svstore_.end()); } 
  
   //! Find TObject (if exists) in the store
  bool find_tstore(std::string name)const { return (tstore_.find(name)!=tstore_.end()); } 
  //! Find TObjects vector (if exists) in the store
  bool find_tvstore(std::string name)const { return (tvstore_.find(name)!=tvstore_.end()); } 

  //! Finds key name in any vector, returns the number of entries found
  int find(std::string name) const; 
 
  //! Fetch a double in the store
  double fetch_dstore(std::string name) ; 
  //! Fetch a int in the store
  int fetch_istore(std::string name) ;
  //! Fetch a string in the store
  std::string fetch_sstore(std::string name) ; 
  //! Fetch a vector in the store
  const vdouble& fetch_dvstore(std::string name);
  //! Fetch a string vector in the store
  const vstring& fetch_svstore(std::string name); 
  //! Fetch a string vector in the store
  const vint& fetch_ivstore(std::string name);
  
  //! Fetch a TObject in the store
  TObject* fetch_tstore(std::string name);
  //! Fetch a TObject in the store
  const vtobject& fetch_tvstore(std::string name);
  
  //! erase double from store 
  bool erase_dstore(std::string name) {return dstore_.erase(name);}
  //! erase int from store 
  bool erase_istore(std::string name) {return istore_.erase(name);}
  //! erase std::string from store 
  bool erase_sstore(std::string name) {return sstore_.erase(name);}
  //! erase double vector from store 
  bool erase_dvstore(std::string name) {return dvstore_.erase(name);}
  //! erase string vector from store 
  bool erase_svstore(std::string name) {return svstore_.erase(name);}
  //! erase int vector from store 
  bool erase_ivstore(std::string name) {return ivstore_.erase(name);}
  
  //! erase TObject from store 
  bool erase_tstore(std::string name) {return tstore_.erase(name);}
  //! erase TObject vector from store 
  bool erase_tvstore(std::string name) {return tvstore_.erase(name);}
  

  //! returns all store as a map
  const std::map<std::string,std::string>& sstore_map() const { return sstore_; }
  //! returns all store as a map
  const std::map<std::string,int>& istore_map() const { return istore_; }
  //! returns all store as a map
  const std::map<std::string,double>& dstore_map() const { return dstore_; }
  //! returns all store as a map
  const std::map<std::string,vstring>& svstore_map() const {return svstore_; }
  //! returns all store as a map
  const std::map<std::string,vint>& ivstore_map() const { return ivstore_; }
  //! returns all store as a map
  const std::map<std::string,vdouble>& dvstore_map() const{ return dvstore_; }
  
  //! returns all store as a map
  const std::map<std::string,TObject*>& tstore_map() const { return tstore_; }
  //! returns all store as a map
  const std::map<std::string,vtobject>& tvstore_map() const{ return tvstore_; }
  

  //remove all elements in gstore
  void clear();
  
  //! returns total size of gstore
  size_t size() const;
  
  //! returns true if store is empty
  bool empty(){ return (size()==0); }
  
  //! print info
  //void info(ostream& s = std::cout) const;
       
  ClassDef(gate::ParamStore,1)
  
};//end of class

#endif

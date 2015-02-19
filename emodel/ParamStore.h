#ifndef _ParamStore__
#define _ParamStore__

/**
 * @file ParamStore.h
 * 
 * @brief Classes to define generic stores of paramters
 *    
 * @author J.J. Gomez-Cadenas, Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date January 2015
 *
 */

#include <sstream>
#include <string>
#include <fstream>
#include <map>

#include <Error.h>

#include<TSystem.h>

namespace gate{
  
/**
 * @class tstore
 * 
 * @brief parameter store template class
 *
 * @details A clever std::map
 *    
 * @author J.J. Gomez-Cadenas, Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date January 2015
 *
 */
  
  template <class T>
  class tstore{
  protected:  
    //! attributes: a map of objects of type T keyed by name	
    std::map<std::string, T> m_store;   
    
  public:

    //! Nothing to do in constructor 
    tstore(){ };
    //! Nothing to do in destructor
    virtual ~tstore(){};
    
    //! retrieve map with parameters
    inline const std::map<std::string,T>& store_map() const {return m_store;}
    
    //! clear map of parameters
    inline void clear(){m_store.clear();}
    
  
    //! store an object
    inline void store(std::string name,T& object){

      bool status = find (name);
      
      Assert(status == false,__FILE__,__LINE__,
	     internal_logic("Parameter already in store, name ="+ name));
      
      m_store[name] = object; }
    
    //! store an object
    inline void store(std::string name, const T& object){

      bool status = find (name);
      Assert(status == false,__FILE__,__LINE__,
	     internal_logic("name already in store, name = "+ name));
      
	m_store[name] = object;}
  
    //! strong store an object (rewrite name if necessary)
    inline void sstore(std::string name,T& object){ m_store[name] = object;}

    //! strong-store an object (rewrite name if necessary)
    inline void sstore(std::string name, const T& object){
      m_store[name] = object;}
  
    //!size of the store
    inline size_t size()const {return m_store.size();}
    
    //! find an element in the store by name
    inline bool find (std::string name) const {
      bool gotcha = false;
      typename std::map<std::string, T>::const_iterator pi;
      
      for ( pi = m_store.begin(); 
	    pi!= m_store.end(); ++pi)
	{
	  if ( (pi->first) == name) {
	      gotcha = true;
	      break;
	  }
	} 

      return gotcha;    
    }

    //! erase an object in store
    inline bool erase (std::string name){

      return (m_store.erase(name)) ? true : false; }
      
    //! operator []
    inline T& operator[](std::string name){return fetch(name);} 

    //! operator []
    inline const T& operator[](std::string name) const {return fetch(name);}


    //! fetch an object from its name
    const T& fetch (std::string name) const{

	Assert(find(name), __FILE__,__LINE__,
	       internal_logic("name not found in --tstore::fetch(), name ="
			      + name));
     
      typename std::map<std::string, T>::const_iterator it;
      for (it = m_store.begin(); it!= m_store.end(); ++it)
      {
	if(it->first == name) break;
      }
      return it->second;
    }
    
    T& fetch (std::string name) {
 
	Assert(find(name), __FILE__,__LINE__,
	       internal_logic("name not found in --tstore::fetch(), name ="
			      + name));
      
	return m_store[name];    
    }

    //! returns all names in store
    std::vector<std::string> names () const {

      typename std::map<std::string, T>::const_iterator pi;
      std::vector<std::string> nam;
      
      for (pi = m_store.begin(); pi!= m_store.end(); ++pi){
	nam.push_back(pi->first);}
 
      return nam;
    }

    
    //! returns the vector of items
    std::vector<T> items() const{
      std::vector<T> vitems;
      typename std::map<std::string, T>::const_iterator it;
      for (it = m_store.begin(); it!= m_store.end(); ++it){
	  vitems.push_back(it->second);}
      return vitems;
    }
  
    ClassDef(tstore,1) 
     
  };

   //! a vector of doubles
  typedef std::vector<double> vdouble;
  //! a vector of integers
  typedef std::vector<int> vint;
  //! a vector of std::strings
  typedef std::vector<std::string> vstring;
  //! a vector of tobjects
  typedef std::vector<TObject*> vtobject;

  
   //! a store of integers
  typedef tstore<int> istore;
  //! a store of doubles
  typedef tstore<double> dstore;
  //! a store of strings
  typedef tstore<std::string> sstore;
  //! a store of vector of doubles
  typedef tstore<gate::vdouble> dvstore;
  //! a store of vectors of int
  typedef tstore<gate::vint> ivstore;
  //! a store of vectors of string
  typedef tstore<gate::vstring> svstore;
  
  //ClassImp(gate::tstore)

/**
 * @class ParamStore
 * 
 * @brief A general store holding stores for different parameter types
 *
 * @details A collection of tstores, one per parameter type
 *    
 * @author J.J. Gomez-Cadenas, Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date January 2015
 *
 */

  class ParamStore{
    
  protected:

    dstore dstore_;
    istore istore_;
    sstore sstore_;
    dvstore dvstore_;
    ivstore ivstore_;
    svstore svstore_;

  public:
    //! Default constructor
    ParamStore(){}
    //! Default constructor
    //ParamStore(){}
    //! default destructor
    virtual ~ParamStore(){}
    
    //! add params from a ParamStore
    void store(const ParamStore& st,std::string prefix="");

    //! store a new double in the store
    void store(std::string name,double val){dstore_.store(name,val);}
    //! store a new int in the store 
    void store(std::string name,int val){istore_.store(name,val);}
    //! store a new std::string in the store 
    void store(std::string name,std::string val){sstore_.store(name,val);}
    //! store a new histo definition in the store
    void store(std::string name,gate::vdouble& val){dvstore_.store(name,val);}
    //! store a new std::string vector in the store
    void store(std::string name,gate::vstring& val){svstore_.store(name,val);}
    //! store a new integer vector in the store
    void store(std::string name,gate::vint& val){ivstore_.store(name,val);}
    
    //! store a new double in the store
    void fstore(std::string name,double val){dstore_.sstore(name,val);}
    //! sstore a new int in the store 
    void fstore(std::string name,int val){istore_.sstore(name,val);}
    //! sstore a new std::string in the store 
    void fstore(std::string name,std::string val){sstore_.sstore(name,val);}
    //! sstore a new histo definition in the store
    void fstore(std::string name,gate::vdouble& val){dvstore_.sstore(name,val);}
    //! sstore a new std::string vector in the store
    void fstore(std::string name,gate::vstring& val){svstore_.sstore(name,val);}
    //! sstore a new integer vector in the store
    void fstore(std::string name,gate::vint& val){ivstore_.sstore(name,val);}
    

     //! change a double in the store
    void change_dstore(std::string name,double val){dstore_.sstore(name,val);}
    //! change an int in the store
    void change_istore(std::string name,int val){istore_.sstore(name,val);}
    //! change a std::string in the store
    void change_sstore(std::string name,std::string val){sstore_.sstore(name,val);}
    //! change a histo definition in the store
    void change_dvstore(std::string name,gate::vdouble& val){
      dvstore_.sstore(name,val);}
    //! change a std::string vector in the store
    void change_svstore(std::string name,gate::vstring& val){
      svstore_.sstore(name,val);}
    //! change an integer vector in the store
    void change_ivstore(std::string name,gate::vint& val){
      ivstore_.sstore(name,val);}

    //!size of the double store
    size_t size_dstore()const {return dstore_.size();}
    //!size of the int store
    size_t size_istore()const {return istore_.size();}
    //!size of the std::string store
    size_t size_sstore()const {return sstore_.size();}
    //!size of the histo definitions store
    size_t size_dvstore()const {return dvstore_.size();}
   //!size of the vector store
    size_t size_svstore()const {return svstore_.size();}
    //!size of the vector store
    size_t size_ivstore()const {return ivstore_.size();}

    //! Find double (if exists) in the store
    bool find_dstore(std::string name)const{return dstore_.find(name);}
    //! Find int (if exists) in the store
    bool find_istore(std::string name)const{return istore_.find(name);}
    //! Find std::string (if exists) in the store
    bool find_sstore(std::string name)const{return sstore_.find(name);}
    //! Find double vecotor (if exists) in the store
    bool find_dvstore(std::string name)const{return dvstore_.find(name);}
    //! Find std::string vector (if exists) in the store
    bool find_svstore(std::string name)const{return svstore_.find(name);}
    //! Find integer vector (if exists) in the store
    bool find_ivstore(std::string name)const{return ivstore_.find(name);}
    
    //! Fetch a double in the store
    double fetch_dstore(std::string name)const{return dstore_.fetch(name);}
    //! Fetch a int in the store
    int fetch_istore(std::string name)const{return istore_.fetch(name);}
    //! Fetch a std::string in the store
    std::string fetch_sstore(std::string name)const{return sstore_.fetch(name);}
    //! Fetch a vector in the store
    const vdouble& fetch_dvstore(std::string name)const{return dvstore_.fetch(name);}
    //! Fetch a std::string vector in the store
    const vstring& fetch_svstore(std::string name)const{return svstore_.fetch(name);}
    //! Fetch a std::string vector in the store
    const vint& fetch_ivstore(std::string name)const{return ivstore_.fetch(name);}
    
    //! erase double from store 
    bool erase_dstore(std::string name) {return dstore_.erase(name);}
    //! erase int from store 
    bool erase_istore(std::string name) {return istore_.erase(name);}
    //! erase std::string from store 
    bool erase_sstore(std::string name) {return sstore_.erase(name);}
    //! erase HD from store 
    bool erase_dvstore(std::string name) {return dvstore_.erase(name);}
    //! erase std::string vector from store 
    bool erase_svstore(std::string name) {return svstore_.erase(name);}
    //! erase int vector from store 
    bool erase_ivstore(std::string name) {return ivstore_.erase(name);}

  
    //! returns all names in double store
    std::vector<std::string> names_dstore() const {return dstore_.names();}  
    //! returns all names in int store
    std::vector<std::string> names_istore() const {return istore_.names();}  
    //! returns all names in std::string store
    std::vector<std::string> names_sstore() const {return sstore_.names();}  
    //! returns all names in vector store
    std::vector<std::string> names_dvstore() const {return dvstore_.names();}  
    //! returns all names in std::string vector store
    std::vector<std::string> names_svstore() const {return svstore_.names();}  
    //! returns all names in int vector store
    std::vector<std::string> names_ivstore() const {return ivstore_.names();}

    //! returns all items in double store
    std::vector<double> items_dstore() const{return dstore_.items();}  
    //! returns all items in int store
    std::vector<int> items_istore() const{return istore_.items();}  
    //! returns all items in std::string store
    std::vector<std::string> items_sstore() const{return sstore_.items();}  
    //! returns all items in double vector store
    std::vector<gate::vdouble> items_dvstore() const{return dvstore_.items();}
    //! returns all items in int vector store
    std::vector<gate::vint> items_ivstore() const{return ivstore_.items();}  
    //! returns all items in std::string vector store
    std::vector<gate::vstring> items_svstore() const{return svstore_.items();}  
    
    //! returns all store as a map
    const std::map<std::string,std::string>& sstore_map() const{
      return sstore_.store_map();}
    //! returns all store as a map
    const std::map<std::string,int>& istore_map() const{
      return istore_.store_map();}
    //! returns all store as a map
    const std::map<std::string,double>& dstore_map() const{
      return dstore_.store_map();}
    //! returns all store as a map
    const std::map<std::string,gate::vstring>& svstore_map() const{
      return svstore_.store_map();}
    //! returns all store as a map
    const std::map<std::string,gate::vint>& ivstore_map() const{
      return ivstore_.store_map();}
    //! returns all store as a map
    const std::map<std::string,gate::vdouble>& dvstore_map() const{
      return dvstore_.store_map();}
    
    //remove all elements in store
    void clear(){
      dstore_.clear();
      istore_.clear();
      sstore_.clear();
      dvstore_.clear();
      svstore_.clear();
      ivstore_.clear();
    }
    
    //returns total size of store
    size_t size(){
      
      size_t len=0;
      
      len += size_istore();
      len += size_dstore();
      len += size_sstore();
      len += size_dvstore();
      len += size_ivstore();
      len += size_svstore();
      
      return len;
    }
    
    bool empty(){ return (size()==0); }

   
    // virtual void info(ostream& s = std::cout) const{
      
    //   if (level_ > MUTE){
    // 	ostd::stringstream ostr;

    // 	s << endl;
    // 	if (size_dstore()!=0){
    // 	  s  << "++ double Data in store:\n";
    // 	  s  << dstore_ << "\n";}
    // 	if (size_istore()!=0){
    // 	  s  << "++ int Data in store:\n";
    // 	  s  << istore_ << "\n";}
    // 	if (size_sstore()!=0){
    // 	  s  << "++ std::string Data in store:\n";
    // 	  s  << sstore_ << "\n";}
    // 	if (size_vstore()!=0){
    // 	  s  << "++ double vectors in store " << "\n";
    // 	  s  << vstore_ << "\n";}
    // 	if (size_ivstore()!=0){
    // 	  s  << "++ integer vectors in store " << "\n";
    // 	  s  << ivstore_ << "\n";}
    // 	if (size_svstore()!=0){
    // 	  s  << "++ std::string vector in store " << "\n";
    // 	  s  << svstore_ << "\n";}
    // 	  //<< "real matrices in store " << "\n"
    // 	s  << endl;}
    //   else{;}
      
    // }//end of info
  
    ClassDef(ParamStore,1)

  };//end of class

}//end of namespace

ClassImp(gate::ParamStore)

#endif

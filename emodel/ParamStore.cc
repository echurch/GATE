#include<ParamStore.h>

ClassImp(gate::ParamStore)

void gate::ParamStore::store(const gate::ParamStore& st,std::string prefix){
  
  {
    std::vector<std::string> pnames = st.names_sstore();
    std::vector<std::string> pvalues = st.items_sstore();

    for(size_t i=0;i<pnames.size();i++){
      store(prefix+pnames[i],pvalues[i]);
    }}
  {
    std::vector<std::string> pnames = st.names_istore();
    std::vector<int> pvalues = st.items_istore();
    
    for(size_t i=0;i<pnames.size();i++){
      store(prefix+pnames[i],pvalues[i]);
    }}
  {
    std::vector<std::string> pnames = st.names_dstore();
    std::vector<double> pvalues = st.items_dstore();
	
    for(size_t i=0;i<pnames.size();i++){
      store(prefix+pnames[i],pvalues[i]);
    }}
  {
    std::vector<std::string> pnames = st.names_svstore();
    std::vector<gate::vstring> pvalues = st.items_svstore();
    
    for(size_t i=0;i<pnames.size();i++){
      store(prefix+pnames[i],pvalues[i]);
    }}
  {
    std::vector<std::string> pnames = st.names_ivstore();
    std::vector<gate::vint> pvalues = st.items_ivstore();
    
    for(size_t i=0;i<pnames.size();i++){
      store(prefix+pnames[i],pvalues[i]);
    }}
  {
    std::vector<std::string> pnames = st.names_dvstore();
    std::vector<gate::vdouble> pvalues = st.items_dvstore();
    
    for(size_t i=0;i<pnames.size();i++){
      store(prefix+pnames[i],pvalues[i]);
    }}
    
}

#include<TreeManager.h>

ClassImp(gate::TreeManager)

//************************************************************************
gate::TreeManager::TreeManager(std::string tname, gate::VLEVEL vl){
//************************************************************************  
  
  _tfile = tname;

  _tdir = new TDirectory("TreeManager","TreeManager");

  _m = gate::Messenger("TreeManager",vl);

  _m.message("++ Tree Manager created",gate::VERBOSE);

}

//************************************************************************
gate::TreeManager::TreeManager(gate::ParamStore st,gate::VLEVEL vl ){
//************************************************************************  

  readTreeParam(st);

  _ofile =0;

  _m = gate::Messenger("TreeManager",vl);

  _m.message("++ Tree Manager created",gate::VERBOSE);


}

//************************************************************************  
gate::TreeManager::~TreeManager(){
//************************************************************************    

  _m.message("++ destroying Tree Manager...",gate::VERBOSE);

  delete _tdir;
  
}


//************************************************************************  
void gate::TreeManager::readTreeParam(gate::ParamStore st){
//************************************************************************  
  
  _m.message("++ Tree Manager reading parameters...",gate::VERBOSE);
  
  if (st.find_sstore("FTREES")){ 
    
    _tfile=st.fetch_sstore("FTREES");}  

  else _tfile = "trees.root";

  _m.message("++ Output tree file:",_tfile,gate::NORMAL);

}

//************************************************************************  
TTree* gate::TreeManager::operator[](std::string name){ 
//************************************************************************  
  return fetch(name); 
}

//************************************************************************  
void gate::TreeManager::create(std::string name,std::string title){
//************************************************************************  
  
  _tdir->cd();
  
  TTree* t = new TTree(name.c_str(),title.c_str());
  
  store(name,t);

}



//************************************************************************  
void gate::TreeManager::fill(std::string name){
//************************************************************************  

  TTree* t = dynamic_cast<TTree*>(fetch(name));

  t->Fill();
    
}



//************************************************************************  
void gate::TreeManager::save(){
//************************************************************************  
  
  _m.message("Saving trees in:",_tfile,gate::NORMAL);
  
  _ofile = new TFile(_tfile.c_str(),"RECREATE");
  
  std::map<std::string,TTree*>::const_iterator it;

  for (it= _tstore.store_map().begin(); it!=_tstore.store_map().end(); ++it){
    
    (*it).second->Write(); }
  
  _ofile->Close();
  
  delete _ofile;

}


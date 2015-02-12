
#include<AlgoManager.h>

ClassImp(gate::AlgoManager)

//*************************************************************
gate::AlgoManager::AlgoManager(gate::VLEVEL vl){
//*************************************************************
   
    _am = gate::Messenger("AlgoManager",vl);

    _am.message("++ Algorithm Manager created",gate::VERBOSE);
    
    this->clear();
}

//*************************************************************
bool gate::AlgoManager::initialize(){
//*************************************************************
  
  _am.message("+++ Initialising algorithms +++",gate::NORMAL);
  
  if (!_AlgoList.size()) return false;
  
  vector<gate::IAlgo*>::iterator iter;   
  
  for( iter = _AlgoList.begin(); iter != _AlgoList.end(); iter++ ) {
    
    (*iter)->initialize();
  }
  
  _am.message("++ algorithms initialized!",gate::VERBOSE);

  return true;

}

//*************************************************************
void gate::AlgoManager::finalize(){
//*************************************************************
  
  _am.message("+++ Finalising algorithms +++",gate::NORMAL);
  
  vector<IAlgo*>::iterator iter;   

  for( iter = _AlgoList.begin(); iter != _AlgoList.end(); iter++ ) {
    
    (*iter)->finalize();
  }


}

//*************************************************************
bool gate::AlgoManager::execute(gate::Event& evt){
//*************************************************************
    
  vector<IAlgo*>::iterator iter;

  bool ok = true;

  for( iter = _AlgoList.begin(); iter != _AlgoList.end(); iter++ ) {

    ok = (*iter)->execute(evt);
    
    if (!ok) break;

  }
    
  return ok;
  
}


//*************************************************************
void gate::AlgoManager::addAlgo(std::string name,IAlgo* algo){
//*************************************************************
  
  _AlgoMap[name] = algo;

  _AlgoList.push_back(algo);



}


//*************************************************************
gate::vstring gate::AlgoManager::getAlgoNames(){
//*************************************************************
  
  gate::vstring names;
  
  std::vector<gate::IAlgo*>::iterator iter;

  for( iter = _AlgoList.begin(); iter != _AlgoList.end(); iter++ ) {

    names.push_back( (*iter)->getAlgoName() );
    
  }

  return names;
}

//*************************************************************
gate::vstring gate::AlgoManager::getAlgoLabels(){
//*************************************************************
  
  gate::vstring labels;
  
  vector<IAlgo*>::iterator iter;

  for( iter = _AlgoList.begin(); iter != _AlgoList.end(); iter++ ) {

    labels.push_back( (*iter)->getAlgoLabel() );
    
  }

  return labels;
}



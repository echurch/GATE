
#include<LogManager.h>


ClassImp(gate::_log_IO)
ClassImp(gate::_param_logger)
ClassImp(gate::LogManager)

//----------------------- _param_logger ----------------------//

//*************************************************************
void gate::_param_logger::setHeader(string header){
//*************************************************************
  
  if (!header.empty()) _header = "\n#---- "+header +" ----#\n";

}

//*************************************************************
string gate::_param_logger::header(){
//*************************************************************
      
  return _header;
}

//*************************************************************
void gate::_param_logger::write(gate::ParamStore logs,string group,
			  int fileMode){
//*************************************************************

 
  ofstream logfile;
  
  logfile.open (_oLogFile.c_str(),(ios_base::openmode)fileMode);
  
  logfile << this->header();
  
  // strings
  for (size_t ikey = 0; ikey < logs.size_sstore(); ikey++ ){
    
    string key = logs.names_sstore()[ikey]; 
   
    string value = logs.fetch_sstore(key);
  
    logfile <<group<<" "<<key<<" S "<<value<<"\n";

  }
  
  // integers
  for (size_t ikey = 0; ikey < logs.size_istore(); ikey++ ){
    
    string key = logs.names_istore()[ikey]; 
   
    int value = logs.fetch_istore(key);
  
    logfile <<group<<" "<<key<<" I "<<value<<"\n";

  }
  
  // doubles
  for (size_t ikey = 0; ikey < logs.size_dstore(); ikey++ ){
     
    string key = logs.names_dstore()[ikey]; 
     
    double value = logs.fetch_dstore(key);
    
    logfile <<group<<" "<<key<<" D "<<value<<"\n";
     
  }
  
   // vector of strings
  for (size_t ikey = 0; ikey < logs.size_svstore(); ikey++ ){
     
   
    string key = logs.names_svstore()[ikey]; 

    gate::vstring value = logs.fetch_svstore(key);
    
    logfile <<group<<" "<<key<<" SV "<<value.size()<<"\n";
    
    for (size_t j=0; j<value.size(); j++){
      logfile <<value[j]<<"\n";
    }
  }
   // vector of doubles
  for (size_t ikey = 0; ikey < logs.size_dvstore(); ikey++ ){
     
    string key = logs.names_dvstore()[ikey]; 
     
    gate::vdouble value = logs.fetch_dvstore(key);
    
    logfile <<group<<" "<<key<<" DV "<<value.size()<<"\n";
    
    for (size_t j=0; j<value.size(); j++){
      logfile <<value[j]<<"\n";
    }
  }
  

   // vector of int
  for (size_t ikey = 0; ikey < logs.size_ivstore(); ikey++ ){
     
    string key = logs.names_ivstore()[ikey]; 
     
    gate::vint value = logs.fetch_ivstore(key);
    
    logfile <<group<<" "<<key<<" IV "<<value.size()<<"\n";
    
    for (size_t j=0; j<value.size(); j++){
      logfile <<value[j]<<"\n";
    }
    
  }

  
  logfile.close();

}

//*************************************************************
void gate::_param_logger::read(gate::ParamStore st,string group){
//*************************************************************
  
  gate::sreader reader(st);
  reader.file(_iLogFile);
  reader.group(group);
  reader.read();
 
}



//------------------------ LogManager ------------------------//

//*************************************************************
gate::LogManager::LogManager(gate::VLEVEL vl){
//*************************************************************
   
    _m = gate::Messenger("LogManager",vl);

    _m.message("++ Log Manager created",gate::VERBOSE);
    
    //logger = 0; 
    
    logger = new _param_logger(); // does ROOT like it????
}

//*************************************************************
void gate::LogManager::write(string group){
//*************************************************************
  
  _m.message("++ Writting log in",this->getOutLogName(),gate::NORMAL);
  
  //if (!logger) logger = new _param_logger(); 
  
  map<string, gate::ParamStore>::const_iterator I;
  
  if (group.empty()){
    
    logger->setHeader("");

    logger->write(gate::ParamStore(),"",0);//TO FIX

    for ( I = _logs.begin(); I!= _logs.end(); I++){

      logger->setHeader("Centella LOG for group "+I->first);

      logger->write(I->second,I->first,ios::app);
    }
  }else{ logger->write(_logs[group],group,ios::out) ;}
  
  
}

//*************************************************************
void gate::LogManager::read(string group){
//*************************************************************
  
  _m.message("++ Reading log...",gate::NORMAL);

  //if (!logger) logger = new _param_logger(); 
  
  logger->read(_ilogs,group);
  

}

//*************************************************************
bool gate::LogManager::erase(string group,string ilog){
//*************************************************************

   if (!this->find_group(group)){
    _m.message("Log group '",group,"' does not exist..",gate::MUTE);
    _m.message("  ...could not remove '",ilog,"'",gate::MUTE); return false;}

  bool ok;

  ok = _logs[group].erase_dstore(ilog); 
  ok = ok || _logs[group].erase_istore(ilog); 
  ok = ok || _logs[group].erase_sstore(ilog); 
  ok = ok || _logs[group].erase_dvstore(ilog); 
  ok = ok || _logs[group].erase_svstore(ilog); 
  ok = ok || _logs[group].erase_ivstore(ilog); 
    
  return ok;

}

//*************************************************************
bool gate::LogManager::find(string group, string name){
//*************************************************************
  
  if (!this->find_group(group)) return false;

  bool ok;

  ok = _logs[group].find_dstore(name); if (ok) return true; 
  ok = _logs[group].find_istore(name); if (ok) return true; 
  ok = _logs[group].find_sstore(name); if (ok) return true; 
  ok = _logs[group].find_dvstore(name); if (ok) return true; 
  ok = _logs[group].find_svstore(name); if (ok) return true; 
  ok = _logs[group].find_ivstore(name); if (ok) return true; 

  return false;

}

//*************************************************************
bool gate::LogManager::find_group(string group){
//*************************************************************
  
  map<string,gate::ParamStore>::iterator iter = _logs.find(group);
  if( iter == _logs.end() ) return false; // no such a group
  return true;

}



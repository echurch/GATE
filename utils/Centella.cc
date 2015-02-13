
#include<Centella.h>

ClassImp(gate::Centella)

gate::Centella* gate::Centella::_centella = 0;



//*************************************************************
gate::Centella* gate::Centella::instance(gate::VLEVEL vl){     
//*************************************************************
      
  if (!_centella) _centella = new gate::Centella(vl);
      
  return _centella;

}	

//*************************************************************
gate::Centella* gate::Centella::instance(const gate::ParamStore& data, 
					 gate::VLEVEL vl){     
//*************************************************************
  
  if (!_centella) _centella = new gate::Centella(data,vl);
      
  return _centella;

}	



//*************************************************************
void gate::Centella::destroy(){     
//*************************************************************
  
  delete _centella;
}	


//*************************************************************
gate::Centella::Centella(gate::VLEVEL vl):RunManager(vl),AlgoManager(vl){
//*************************************************************
  
    _m = gate::Messenger("Centella",vl);
    
    _m.message("++ Centella created",gate::VERBOSE);
    
    _logMan = gate::LogManager(vl);

    this->init();
    
    _hman = new gate::HistoManager("centella_histos.root",vl);
}


//*************************************************************
gate::Centella::Centella(const gate::ParamStore& data, gate::VLEVEL vl):
  RunManager(data,vl),AlgoManager(vl){
//*************************************************************
   
 
    _m = gate::Messenger("Centella",vl);

    _m.message("++ Centella created",gate::VERBOSE);
    
    _logMan = gate::LogManager(vl);
    
    this->init();
    
    this->readParam(data);
    
    _m.message("++ generating HistoManager...",gate::VERBOSE);

    _hman = new gate::HistoManager(data,vl);

    

}

//*************************************************************
void gate::Centella::init(){
//*************************************************************
  
  _nevents = 1;

  _write = false;
  
  _histos = false;

  _ndebug = 100;
  
  _log = false;
  
  _hman = 0;

  _fevent = 0;


}



//*************************************************************
void gate::Centella::readParam(const gate::ParamStore& gs){
//*************************************************************
  
  _m.message("++ reading parameters from store...",gate::VERBOSE);

  bool ok = gs.find_istore("NEVENTS");
  
  if (ok)_nevents =(size_t) gs.fetch_istore("NEVENTS");  
  
  _m.message("++ Number of events to read:",_nevents,gate::VERBOSE);
  
  ok = gs.find_istore("FEVENT");
  
  if (ok)_fevent =(size_t) gs.fetch_istore("FEVENT");  
  
  _m.message("++ First event to read:",_fevent,gate::VERBOSE);

  ok = gs.find_istore("SAVE");
  
  if (ok) _write = (bool) gs.fetch_istore("SAVE");  
  
  _m.message("++ Write output DST:",_write,gate::VERBOSE);

  ok = gs.find_istore("HISTOS");
  
  if (ok) _histos = (bool) gs.fetch_istore("HISTOS");  
    
  _m.message("++ Save histograms:",_histos,gate::VERBOSE);

  ok = gs.find_istore("NDEBUG");
  
  if (ok)_ndebug = (size_t)gs.fetch_istore("NDEBUG");  
  
  _m.message("++ Number of events to debug:",_ndebug,gate::VERBOSE);

  ok = gs.find_istore("LOG");
  
  if (ok) _log = (bool) gs.fetch_istore("LOG");  
   
  _m.message("++ Write log file:",_log,gate::VERBOSE);
  
  if (ok){ 
    
    if  (gs.find_sstore("FLOG")){

      string logname = gs.fetch_sstore("FLOG");

      _logMan.setOutLogName(logname);
  
      _m.message("++ Name of log file:",logname,gate::VERBOSE);}
  }
}

//*************************************************************
bool gate::Centella::initialize(){
//*************************************************************
  
  _m.message("+++ Initialising Centella +++",gate::NORMAL);
  
  if (_log) this->timeLog(); 
  
  bool ok1, ok2;
 
  ok1 = gate::RunManager::initialize();
  
  ok2 = gate::AlgoManager::initialize();
  
  return (ok1 && ok2);

}

//*************************************************************
void gate::Centella::finalize(){
//*************************************************************
  
  _m.message("+++ Finalising Centella +++",gate::NORMAL);
  
  AlgoManager::finalize();

  RunManager::finalize();
    
  if (_log) { this->nevtLog(); 
    
    _logMan.write();}
  
  else _m.message("not writing log file",gate::NORMAL);

  if (_histos) _hman->save();
  
  else _m.message("not saving hitograms",gate::NORMAL);
  

}

//*************************************************************
void gate::Centella::execute(){
//*************************************************************
  
  _m.message("+++ Executing Centella +++",gate::VERBOSE);
  
  if (_log) {this->runLog(); this->dataLog(); }
  
  // run algorithms
  
  if (_fevent){ 

    this->read(_fevent-1); // serach for event in dst list

    tievents--;
  }
  //if (_fevent) ievent = _fevent;

  for(size_t i= 0; i < _nevents; i++) {
    
    bool ok = this->status();
        
    if (!ok) break;
    
    if (i%_ndebug==0 && i) 
      
      _m.message("Number of events read:",i,gate::NORMAL);

    gate::Event& e = this->read(); 
	
    bool algoOK = gate::AlgoManager::execute(e);
    
    //TODO: abort or keep on according to return value
    
    if (_write && algoOK) gate::EventManager::write(e); 
    
  }
  
  if (_log) { this->algoLog(); }
 
  
}

//*************************************************************
void gate::Centella::runLog(){
//*************************************************************
  

}

//*************************************************************
void gate::Centella::dataLog(){
//*************************************************************
  
  const gate::vstring& idata = this->getInData();
  
  const gate::vstring& odata = this->getOutData();

  _logMan.strongAddLog("CNT","INPUT_DATA",idata);
   
  _logMan.strongAddLog("CNT","OUTPUT_DATA",odata);

  _logMan.strongAddLog("CNT","NEVENTS",(int)_nevents);

  _logMan.strongAddLog("CNT","NDEBUG",(int)_ndebug);

  _logMan.strongAddLog("CNT","FEVENT",(int)_fevent);

  _logMan.strongAddLog("CNT","HISTOS",(int)_histos);

  _logMan.strongAddLog("CNT","FHISTO",_hman->getHistoFileName());

  
}

//*************************************************************
void gate::Centella::algoLog(){
//*************************************************************
  
  _logMan.strongAddLog("CNT","LOG",(int)_log);

  _logMan.strongAddLog("CNT","FLOG",_logMan.getOutLogName());

  gate::vstring labels = this->getAlgoLabels();
    
  _logMan.strongAddLog("CNT","ALGOS",labels);
    
  const vector<gate::IAlgo*>& algos = this->getAlgos();
  
  for (size_t i=0; i<algos.size();i++){
    
    string algoName = labels[i];
    IAlgo al = *algos[i]; 

    _logMan.strongAddLog(algoName,"TYPE",al.getAlgoName());
    _logMan.strongAddLog(algoName,"VERSION",al.getAlgoVersion());
    
    {
    typedef map<string, string>::const_iterator I;
    for(I j=al.sstore_map().begin();j!=al.sstore_map().end();++j)
      _logMan.strongAddLog(algoName,j->first,j->second);
    }
    {
    typedef map<string, int>::const_iterator I;
    for(I j=al.iproperties_map().begin();j!=al.iproperties_map().end();++j)
      _logMan.strongAddLog(algoName,j->first,j->second);
    }
    {
    typedef map<string, double>::const_iterator I;
    for(I j=al.dproperties_map().begin();j!=al.dproperties_map().end();++j)
      _logMan.strongAddLog(algoName,j->first,j->second);
    }
    {
    typedef map<string,gate::vstring>::const_iterator I;
    for(I j=al.svproperties_map().begin();j!=al.svproperties_map().end();++j)
      _logMan.strongAddLog(algoName,j->first,j->second);
    }
    {
    typedef map<string,gate::vint>::const_iterator I;
    for(I j=al.ivproperties_map().begin();j!=al.ivproperties_map().end();++j)
      _logMan.strongAddLog(algoName,j->first,j->second);
    }
    {
    typedef map<string,gate::vdouble>::const_iterator I;
    for(I j=al.dvproperties_map().begin();j!=al.dvproperties_map().end();++j)
      _logMan.strongAddLog(algoName,j->first,j->second);
    }
  }  

}

//*************************************************************
void gate::Centella::nevtLog(){
//*************************************************************
  
  //string ievts = gate::to_string(this->getInEvents());
  size_t ievts = this->getInEvents();

  _logMan.strongAddLog("RUN","input_events",(int)ievts);
  
  //string oevts =  gate::to_string(this->getOutEvents());
  size_t oevts =  this->getOutEvents();
  
  _logMan.strongAddLog("RUN","output_events",(int)oevts);

}

//*************************************************************
void gate::Centella::timeLog(){
//*************************************************************
  
  time_t rawtime;

  time ( &rawtime );
  
  char buffer[80];
 
  strftime (buffer,80,"%d_%b_%Y_%X%p",localtime(&rawtime));

  _logMan.strongAddLog("RUN","run_init_date",string(buffer));
  
  return;
}

//*************************************************************
bool gate::Centella::run(){
//*************************************************************
  
  this->initialize();
  
  this->execute();
  
  this->finalize();
  
  return true;

}


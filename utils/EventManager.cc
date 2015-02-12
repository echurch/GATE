#include <EventManager.h>

ClassImp(gate::EventManager)

//*************************************************************
gate::EventManager::EventManager(const gate::ParamStore& gs,gate::VLEVEL vl){
//*************************************************************
  
    m = gate::Messenger("EventManager",vl);
  
    m.message("++EventManager Messenger generated++",gate::VERBOSE);
  
    store = gs;
    
    initAttr();

    readParam();




}

//*************************************************************
gate::EventManager::EventManager(gate::VLEVEL vl){
//*************************************************************

    m = gate::Messenger("EventManager",vl);
    
    m.message("++EventManager Messenger generated++",gate::VERBOSE);
    
    initAttr();
    

}

//*************************************************************
void gate::EventManager::initAttr(){
//*************************************************************
  
   init = false;
   outInit = false;
    
   nifiles=0; // init number input files
   nofiles=0; // init number output files
   cifile = 0; // init counter for input files
   cofile = 0; // init counter for input files
   tievents = 0; //init counter for total input events
   toevents = 0; //init counter for total output events
   ievent=0;

   greader = 0; gwriter = 0;

}

//*************************************************************
gate::EventManager::~EventManager(){
//*************************************************************
  
  //delete reader;

  //delete writer;

}

//*************************************************************
void gate::EventManager::addInputFile(string name){
//*************************************************************
  
  idst_files.push_back(name);

  nifiles = idst_files.size();

}

//*************************************************************
void gate::EventManager::addOutputFile(string name){
//*************************************************************
  
  odst_files.push_back(name);
  
  nofiles = odst_files.size();

}

//*************************************************************
void gate::EventManager::resetIOfiles(){
//*************************************************************
  
  idst_files.clear();
  odst_files.clear();

}

//*************************************************************
bool gate::EventManager::initialize(){
//*************************************************************
  
  
  m.message("++ Initialising EventManager ++",gate::VERBOSE);

  //check number of files
  
  if (!nofiles){ genOutFileNames();}

  checkNfiles();

    // Open files to read
    
    // check there are more files to read

    if (nifiles == cifile) {init=false; return false;}
    
    init = true;
    
    // open input files
    
    bool ok = initIO("r"); 
    
    // read DST properties if neededx
    //readDSTInfo();
    // read run properties if needed
    //readRunInfo();
    
    return ok;

}

//*************************************************************
bool gate::EventManager::initIO(string mode){
//*************************************************************
 
  //if (reader) {delete reader; reader=0;}
  
  //if (writer) {delete writer; writer=0;}
  
  if (mode=="r"){ //open input files
    
    ifile = idst_files[cifile];
    
    m.message("Input dst file:",ifile,gate::NORMAL);
    
    iext = getFileType(ifile); 


    if (iext=="root") {
      
      //gate::reader_root rd = gate::reader_root();

      //rd.open(ifile);

      greader = &rreader;
      
      //reader.open(ifile); 
      
      greader->Open(ifile); 
    }

    else this->unknownFormat();
    
    cifile += 1; ievent=0;
  }
  
  if (mode=="w"){ //open output files
    
    ofile = odst_files[cofile]; 

    m.message("Output dst file:",ofile,gate::VERBOSE);

    oext = getFileType(ofile);  

    if (oext=="root") {
      
      //writer = new gate::writer_root();
      
      rwriter.Open(ofile);

      gwriter = &rwriter;

      //gwriter->open(ofile);
    }
    
    else this->unknownFormat();
    

    
    outInit=true; cofile += 1; oevent=0;
  }
  
  return true;
}

//*************************************************************
gate::Event&  gate::EventManager::read(size_t ie) {
//*************************************************************
    
    //----- read event -----//
    
    if (ie) {gate::Event& e = random_read(ie);return e;} 
    
    else  {gate::Event& e = sequential_read(); return e;} 
          
}

//*************************************************************
gate::Event& gate::EventManager::sequential_read() {
//*************************************************************
    
    if (!init){
        m.message("EventManager not initialized!",gate::MUTE);
        exit(1);}

    bool ok=status();
    if (!ok) {m.message("Abort!",gate::MUTE);exit(1);}
    m.message("Reading event number:",ievent,gate::VERBOSE);
    ievent +=1; tievents += 1;  
    
    gate::Event& ev = greader->Read(ievent-1);
    
    return ev;
      
}

//*************************************************************
gate::Event& gate::EventManager::random_read(size_t ie) {
//*************************************************************
  

    // compute in which file is placed event number ie
  
    m.message("Looking for event",ie,gate::NORMAL);
    
    //start looking at the first file

    if (cifile!=1) {cifile=0;cofile=0;closeFiles();initialize();}
    else { if (!init) {closeFiles(); initialize();} }

    // open file where event is placed

    size_t index = searchEvent(ie); 
    m.message("Reading event number:",index,gate::VERBOSE);
    //ievent+=1; 
    ievent = index+1; //!!!!!!!!!!! TO REVIEW
    tievents += 1;
    
    // read event
    gate::Event& ev=greader->Read(index);
    
    return ev;
  

}

//*************************************************************
size_t gate::EventManager::searchEvent(size_t ie){
//*************************************************************    
    
    /* When reading randomly, look for the file 
       where the event is placed
     */ 
    
    size_t index = ie;
   
    size_t max_evt = getNumEventsFile();

    m.message("Events in file:",max_evt,gate::NORMAL);
    
    while(index+1 > max_evt){
            
        index -= max_evt +1 ;
        bool ok = newFile(); 
        if (!ok){
	  m.message("Abort: event doesn't exist!",gate::MUTE);
	  exit(1);}
       
	max_evt = getNumEventsFile();

        m.message("Events in file:",max_evt,gate::NORMAL);
    }

    return index;
}

//*************************************************************
size_t gate::EventManager::getNumEventsFile(){
//*************************************************************  

  /*
    Get number of events in current file
   */
  
  return greader->GetNEvents();

}



//*************************************************************
bool gate::EventManager::status(){
//*************************************************************    
    
    m.message("EventManager status function",gate::VVERBOSE);
    if (!greader) return false;
    bool file=true;
    bool end = greader->eof(ievent+1);
    if (end) file=newFile();
    return file;
    
}

//*************************************************************
void gate::EventManager::write(gate::Event& event) {
//*************************************************************
  
    // write event  
      
  if (!outInit) {

    initIO("w"); // open output file 
      
  }
    
    m.message("Writing event number:",oevent,gate::VERBOSE);
    
    //gwriter->write(event,oevent);
    gwriter->Write(event);
    
    oevent += 1;
    toevents += 1;
    
}


//*************************************************************
void gate::EventManager::finalize() {
//*************************************************************

    // print info
    
    m.message("++ Finalize method of EventManager ++",gate::NORMAL);
    m.message("Total number of events read:",tievents,gate::NORMAL);
    m.message("Total number of events written:",toevents,gate::NORMAL);
    
    closeFiles(true);
    
    //reset counters
    cifile=0;
    cofile=0;
    //toevents = 0;
    //tievents = 0;

    

}

//*************************************************************
bool gate::EventManager::newFile(){
//*************************************************************

    endOfFile();
    bool ok = initialize();
    if (!ok) m.message("No more files to read!",gate::MUTE);
    return ok;

}

//*************************************************************
void gate::EventManager::endOfFile(){
//*************************************************************

    m.message("++ End of file",ifile," ++",gate::NORMAL);

    m.message("Number of events read:",ievent,gate::NORMAL);
    
    if (outInit){
      m.message("Output File:",ofile,gate::NORMAL);
      m.message("Number of events written:",oevent,gate::NORMAL);
    }
    
    closeFiles();
    
}

//*************************************************************
void gate::EventManager::closeFiles(bool force){
//*************************************************************
  
  
  if (!greader) return;
  
  if (nofiles!=1 || force){ //do not close if nofiles=1 
    
    if (gwriter) {
    
      gwriter->Close();
    }
    
    outInit=false;
  }
  
  greader->Close();
  
  init=false; 

}

//*************************************************************
void gate::EventManager::readParam(){
//*************************************************************
    
    /*
      deals with input parameters
     */
    
    //input files
  
  bool ok = store.find_svstore("INPUT_DATA");
  
  if (!ok) {return;}

    idst_files = store.fetch_svstore("INPUT_DATA");  
    nifiles = idst_files.size();
    
    for (size_t i=0; i<nifiles; i++){
      m.message("Input Data: ",idst_files[i],gate::NORMAL);
    }

    //output files
    bool ofiles = store.find_svstore("OUTPUT_DATA");
    if (ofiles){
        odst_files = store.fetch_svstore("OUTPUT_DATA");
	nofiles = odst_files.size();
        checkNfiles();
    }
    else{ //no output files defined. Generate default ones.
      
      genOutFileNames();

    }
     
    for (size_t i=0; i<nofiles; i++){
      m.message("Output Data: ",odst_files[i],gate::VERBOSE);
    }
    // 
    
    //bool allow_warnings = store.find_istore("warnings");
    //if (allow_warnings) warnings = store.fetch_istore("warnings");  
    //else warnings = true;
}


//*************************************************************
string gate::EventManager::getFileType(string dst){
//*************************************************************

    size_t i2= dst.find_last_of(".")+1;
    size_t il= dst.size()-1;
    string ext=dst.substr(i2,il);

    return ext;

}

//*************************************************************
void gate::EventManager::checkNfiles(){
//*************************************************************

  if (nofiles != nifiles && nofiles!=1){  
    string ms ="Wrong number of output files! Abort!";
    m.message(ms,gate::MUTE);
    exit(1);}

}

//*************************************************************
void gate::EventManager::genOutFileNames(){
//*************************************************************

  for (size_t i=0; i<nifiles; i++){
    string number = gate::to_string(i);
    string name = "output_default_"+number+".root";
    odst_files.push_back(name);}
  
  nofiles = odst_files.size();

}

//*************************************************************
void gate::EventManager::unknownFormat(){
//*************************************************************

   m.message("File format not recognized:",iext,gate::MUTE);
        
   exit(1);

}

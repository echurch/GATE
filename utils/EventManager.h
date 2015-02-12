/* -*- mode: c++ -*- */

#ifndef _event_man___
#define _event_man___

#include <stdlib.h>

#include <ParamStore.h>

#include <Messenger.h>
#include <RootReader.h>
#include <RootWriter.h>
#include <IReader.h>
#include <Irene.h>

#include <TSystem.h>

/**
 * \class EventManager
 *
 * \ingroup Tools
 *
 * \brief Manager for gate events
 *
 *  Manages input and output files.
 *  Provides straightforward access to events in a list
 *  of files
 *
 * \author Pau Novella
 *
 * \version $Revision: 1.0 $
 * 
 * Contact: pau.novella@ific.uv.es
 *
 */

namespace gate{class EventManager;}

class gate::EventManager{


public:
  
  /// default constructor with verbosity level
  EventManager(gate::VLEVEL vl=gate::NORMAL);
  
  /// default with parameters store and verbosity level
  EventManager(const gate::ParamStore& gs,
	       gate::VLEVEL vl=gate::NORMAL);
  
  /// destructor
  virtual ~EventManager();
  
  /// true if ready to read next event 
  bool status();
  
  /// initialize input/output operations
  bool initialize();
  /// retrieve event from current input file
  gate::Event& read(size_t ie=0);
  /// write event into curretn output file
  void write(gate::Event& event);
  /// finalize input/output operations
  virtual void finalize();
  
  /// add name of file to be read
  void addInputFile(string);
  /// add name of output file
  void addOutputFile(string);
  /// reset names of input and output files
  void resetIOfiles();
  
  /// retrieve total number of events read
  size_t getInEvents() const {return tievents;}
  /// retrieve total number of events written
  size_t getOutEvents() const {return toevents;}

  /// retrieve total number of events read from current file 
  size_t getInEventsFile() const {return ievent;}
  /// retrieve total number of events written to current file
  size_t getOutEventsFile() const {return oevent;}
  
  /// retrieve current number of input file
  size_t getNumInFile() const {return cifile-1;} //start form 0
  /// retrieve total number of events written
  size_t getNumOutFile() const {return cofile-1;}//start form 0

  /// get names of input files
  const std::vector<string>& getInData() const {return idst_files;}
  /// get names of output files
  const std::vector<string>& getOutData() const {return odst_files;}
  
  /// get number of events in current input file
  virtual size_t getNumEventsFile();


  /// true if new input file has been open
  virtual bool isNewFile(){return (ievent==0);}
  /// true if current event is the first one in file
  bool isFirstEventFile(){return (ievent==0);}
  /// true if current event is the last one in file
  bool isLastEventFile(){return (ievent==getNumEventsFile());}
  
  //! clear
  void clear(){resetIOfiles();}

protected:
  
  
  bool initIO(string mode);    
  gate::Event& random_read(size_t ie);
  gate::Event& sequential_read();
  size_t searchEvent(size_t);
  virtual void endOfFile();
  virtual void closeFiles(bool force=false);
  bool newFile();
  string getFileType(string dst);
  void readParam();
  
  void checkNfiles();
  void genOutFileNames();
  void initAttr();
  
  void unknownFormat();
  
protected:
    
    // control bools

    bool init; // read file open and counters ready
    bool outInit; // output file open
  
    // input and output files
    
    size_t nifiles; // !max num of input files
    size_t nofiles; // !max num of output files
    size_t cifile; //! counter for input files
    size_t cofile; //! counter for output files
    string ifile; //! name of current file
    string ofile; //! name of current file
  std::vector<std::string> idst_files; //! vector of file names
  std::vector<std::string> odst_files; //! vector of file names
   
        
    // 
    string iext;
    size_t ievent;
    size_t tievents;

    gate::RootReader rreader;

    gate::IReader* greader;

    // 
    string oext;
    size_t oevent;
    size_t toevents;
  

    gate::RootWriter rwriter;
  
    gate::IWriter* gwriter;


    /// Messenger
    gate::Messenger m;
    
    /// store for parameters
    gate::ParamStore store;

  ClassDef(gate::EventManager,1)
   
};

#endif

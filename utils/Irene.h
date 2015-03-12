#ifndef _irene___
#define _irene___


/* -*- mode: c++ -*- */
/// Utility classes taken from old irene library
/* 
 * J.J. Gomez-Cadenas, J.A. Hernando, A. Cervera, A. Tornero      
 
 * 
 */

#include <string>
#include <map>
#include <vector>
#include <iostream>

#include <GATE/Error.h>
#include <GATE/ParamStore.h>

#include <GATE/Utilities.h>
#include <GATE/system_of_units.h>

/**
 * @file Irene.h
 * 
 * @brief Utility classes taken from old irene library
 *
 * @details Base classes and parameter reader 
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>, from irene authors
 *
 * @version Revision 1.0.0
 *
 * @date January 2015
 *
 * @ingroup utils
 */


namespace gate{
  
 
  /// Represents a control panel.
  /** A control panel is a set of switches whose configuration 
   * defines the state of the machine controlled by the panel. A switch has only
   * two possible states, open or closed 
   *\ingroup utils
   */

  class control_panel {

  private:
    /// map of bools keyed by name
    std::map<std::string, bool> cp_;   
  public:
    ///nothing to do in constructor and destructor
    control_panel(){};
    virtual ~control_panel(){};
    
    /// Add a switch to the board (initially open)
    void new_switch(std::string name){ cp_[name] = false; }

    /// Close a switch
    void close_switch(std::string name){
      Assert(find_switch(name),__FILE__,__LINE__,
	     internal_logic("--switch not found in control board--"));
      cp_[name] = true;
    }

    /// Open a switch
    void open_switch(std::string name){
      // open the switch if in the controal board
      // abort otherwise

      Assert(find_switch(name),__FILE__,__LINE__,
	     internal_logic("--switch not found in control board--"));
      cp_[name] = false;
    }

    /// Change the state of a switch
    void change_switch(std::string name){
      
      Assert(find_switch(name),__FILE__,__LINE__,
	     internal_logic("--switch not found in control board--"));
      bool state = cp_[name];
      if (state == false) 
	cp_[name] = true;
      else
	cp_[name] = false;      
    }

    /// Change the state of every switch in the board
    void change_switches(){
      typedef  std::map<std::string, bool>::const_iterator map_const_iterator;
      for (map_const_iterator p = cp_.begin(); p!= cp_.end(); ++p){
	change_switch(p->first);
      } 
    }
    
    /// Close every switch in the board
    void close_switches(){
      typedef  std::map<std::string, bool>::const_iterator map_const_iterator;
      for (map_const_iterator p = cp_.begin(); p!= cp_.end(); ++p){
	close_switch(p->first);
      } 
    }
    
    /// Open every switch in the board
    void open_switches(){
      typedef  std::map<std::string, bool>::const_iterator map_const_iterator;
      for (map_const_iterator p = cp_.begin(); p!= cp_.end(); ++p){
	open_switch(p->first);
      } 
    }
    
    /// Find a switch (if exists) in the board
    bool find_switch(std::string name) const {
      bool gotcha = false;
      typedef  std::map<std::string, bool>::const_iterator map_const_iterator;
      for (map_const_iterator p = cp_.begin(); p!= cp_.end(); ++p){
	if ( (p->first) == name) gotcha = true;
      } 
      return gotcha;
    }

    /// Delete a switch from the board
    /**Return a int (0 if not found in the board or the
     * number of times the switch was found in the board)
     */
    int delete_switch(std::string name){
      int times = cp_.erase (name);
      return times;
    }
    
    /// Return true if the switch is closed
    bool switch_closed(std::string name) const {
      Assert(find_switch(name),__FILE__,__LINE__,
	     internal_logic("--switch not found in control board--"));
      return cp_.find(name)->second;
    }


    /// Return true if the switch is open
    bool switch_open(std::string name) const {
      Assert(find_switch(name),__FILE__,__LINE__,
	     internal_logic("--switch not found in control board--"));
      return !cp_.find(name)->second;

    }

    /// Test a state via a vector of (names) of switches
    /** returns true if all closed, false if one or more open */

    bool test_state( std::vector<std::string> state) const {
	bool test = true;
	for (size_t i = 0; i < state.size(); i++){
	    test = test && switch_closed(state[i]);
	}
	return test;
    }
    /// Test if all switches are closed
    /** returns true if all closed, false if one or more open */

    bool test_closed() const {
	bool test = true;
	typedef  std::map<std::string, bool>::const_iterator map_const_iterator;
      
	for (map_const_iterator p = cp_.begin(); p!= cp_.end(); ++p){
	    test = test && p->second;
	}

	return test;
    }
  
    virtual void info(ostream& s = std::cout) const {
      typedef  std::map<std::string, bool>::const_iterator map_const_iterator;
      
      for (map_const_iterator p = cp_.begin(); 
	   p!= cp_.end(); ++p){
	s << " switch name = " << p->first
	  << " switch state = " <<p->second << endl;
      }
    }
    ClassDef(control_panel,1)
      };
  
  inline ostream& operator << (ostream& s, const gate::control_panel& panel){
    panel.info(s);
    return s; }
  
  //---------------------------------------------//
  
  /// Base class for an engine
  /** 
   * An engine is an object able to define its internal state
   * (via a control panel, that is a set of switches that can be
   * switched on or off) and to communicate it to the external world
   * via a Messenger. 
   */
  class engine {//: public bprint {
  public:
    /// A control panel used to describe the state of the engine
    control_panel panel_;
    /// A messenger to comunicate with the rest of the world      
    gate::Messenger m_;     
    
    ///Do not instantiate an engine directly
    engine(){}    
    
  public:
    ///Default destructor
    virtual ~engine(){}    
    /// Sets the output level for the engine
    void info_level(VLEVEL level) {m_.set_level(level);} 
    /// returns the control panel for reading
    const control_panel& panel() const {return panel_;}  
    /// returns the messenger
    const Messenger& messenger_service() const {return m_;}  
    
    /// set the verbosity level 
    void set_info_level(std::string info){
      if(info == "MUTE")  info_level(MUTE);
      if(info == "CONCISE")  info_level(CONCISE);
      if(info == "NORMAL")  info_level(NORMAL);
      if(info == "WARNING")  info_level(WARNING);
      if(info == "DETAILED")  info_level(DETAILED);
      if(info == "VERBOSE")  info_level(VERBOSE);
      if(info == "VVERBOSE")  info_level(VVERBOSE);
      if(info == "DUMP")  info_level(DUMP);
    }
    
    /// parameters set by default if all switches closed
    virtual bool param_set(){return panel_.test_closed();}
    
    ClassDef(engine,1)
      
      };

  //ClassImp(gate::engine)
    
    /**
     * Reads a data file with format group-name,param-name,
     * param-type param-value, where group-name and param-name are 
     * strings with the name of the group (for example the instance 
     * to which this parameter belongs)  and the name of the parameter, 
     * type is a string with value
     * S if the parameter is a string or D if the parameter is a double
     * and I if the param is a parameter and param-value is a string, double
     * or integer
     *
     * Any line starting by "#" is considered as a comment. 
     \ingroup irene
    */
  
    class sreader : public engine{
  
  public:
    /// Default constructor
    sreader(ParamStore& store){
      store_ = &store;
      panel_.new_switch("file");
      panel_.new_switch("group");
    }
    
    /// sets the name of the file
    void file(std::string fileName)
    {
      m_fileName = fileName;
      
      if (panel_.switch_open("file")){    
	panel_.close_switch("file");
      }else{
	m_dataFile.close();
      }
   
      m_dataFile.open(fileName.c_str(), ios::in);
      
      Assert(!m_dataFile.fail(),__FILE__,__LINE__,
	     internal_logic("Failed to open file "+m_fileName)); 

      m_.message("sreader initialized with file ",m_fileName,VVERBOSE);

    }
    
    /// returns the name of the file
    std::string file(){
      Assert(panel_.switch_closed("file"),__FILE__,__LINE__,
	     internal_logic("--sreader file not set to reader"));    	
      
      return m_fileName;
    }
  
    /// sets the name of the group 
    void group(std::string groupName){
      
      if (panel_.switch_closed("group")){    
	panel_.open_switch("group");
	file(m_fileName);
      }

      m_groupName = groupName;
      panel_.close_switch("group");

      m_.message("sreader initialized with group ",m_groupName,VVERBOSE);

    }

    /// returns the name of the group 
    std::string group(){
      Assert(panel_.switch_closed("group"),__FILE__,__LINE__,
	     internal_logic("--sreader group not set to reader"));    	
      
      return m_groupName;
    }
  
    /// Destructor closes file
    virtual ~sreader()
    {
      if (panel_.switch_closed("file"))    
	m_dataFile.close();
    }
  
    /// Read the file 
    void read()
    {
      Assert(panel_.switch_closed("file"),__FILE__,__LINE__,
	     internal_logic("--sreader file not set to reader"));    	
    
      Assert(panel_.switch_closed("group"),__FILE__,__LINE__,
	     internal_logic("--sreader group not set to reader"));    	
      
      m_.message("reading...",VVERBOSE);
      
      std::string dummy;

      while (true) {
	
	//int ivalue;
	std::string svalue;
	std::string label,test;
	std::string mvalue;
	double unit=1.;
	
	std::vector<std::string> words;
	
	if (m_dataFile.eof()) break;

	getline(m_dataFile, dummy);
	
	if (dummy[0]=='#') continue;

	//cout<<"HOLA "<<dummy<<" BYE"<<endl;
       
	split(dummy," ",words);
	
	if (!words.size()) continue;

	m_.message("new group: ",words[0],VVERBOSE);
	if (compare_string(words[0],m_groupName)== false){
	  m_.message("sreader skipping group ",words[0],VVERBOSE);
	  continue;}

	if (words.size()==1) continue;//vector elements from another gorup
	
	Assert(words.size()==4 || words.size()==5, __FILE__,__LINE__,
	       internal_logic("Line must be: GROUP NAME TYPE VALUE:\n"+dummy));
	
	label = words[1]; test = words[2]; mvalue = words[3];
	
	if (words.size()==5) unit = unit_from_string(words[4]); 

	m_.message(" test = ",test,"label = ", label,VVERBOSE);
      
	Assert(test =="S" || test =="D" || test =="I" 
	       || test =="V"
	       || test =="DV"
	       || test =="IV"
	       || test =="SV", 
	       __FILE__,__LINE__,
	       internal_logic("Type must be S, D, I, V, DV,IV, SV\n Found "+test));

	// V=VD, but still here to keep backward compatibility
	
	if (compare_string_nocase(test,"S")){
	  store_->store(label,mvalue);

	}
	else if (compare_string_nocase(test,"D")){
	  store_->store(label,double_from_string(mvalue)*unit);
	}
	else if (compare_string_nocase(test,"I")){
	  store_->store(label,int_from_string(mvalue));
	}
	else if (compare_string_nocase(test,"V")||
		 compare_string_nocase(test,"DV")){
	  
	  std::string value;
	  std::vector<double> dv;
	  size_t size = int_from_string(mvalue);

	  for(size_t i=0; i<size; i++)
	    {
	      m_dataFile >> value;
	      //getline(m_dataFile,value);
	      dv.push_back(gate::double_from_string(value)*unit);
	    }
	    
	  store_->store(label,dv);
	  
	}
	else if (compare_string_nocase(test,"IV")){
	  
	  std::string value;
	  std::vector<int> dv;
	  size_t size=int_from_string(mvalue);
	    
	  for(size_t i=0; i<size; i++)
	    {
	      m_dataFile >> value;
	      //getline(m_dataFile,value);
	      dv.push_back(gate::int_from_string(value));
	    }
	    
	  store_->store(label,dv);
	}
	else if (compare_string_nocase(test,"SV")){
	  
	  std::string value;
	  std::vector<std::string> dv;
	  size_t size=int_from_string(mvalue);
	  	    
	  for(size_t i=0; i<size; i++)
	    {
	      m_dataFile >> value;
	      //getline(m_dataFile,value);
	      dv.push_back(value);
	    }
	    
	  store_->store(label,dv);
	}
      }
   
    }
    
     void split (std::string text, std::string separators,
            std::vector<std::string,
                      std::allocator<std::string> >& words) {

       size_t n     = text.length ();
       size_t start = text.find_first_not_of (separators);

       while (start < n) {
	 size_t stop = text.find_first_of (separators, start);
	 if (stop > n) stop = n;
	 words.push_back (text.substr (start, stop-start));
	 start = text.find_first_not_of (separators, stop+1);
       }
     }
    
  private:
    ParamStore* store_;
    ifstream m_dataFile;
    std::string m_fileName;
    std::string m_groupName;
  
    ClassDef(sreader,1)
      };
  

    //ClassImp(gate::sreader)

    //---------------------------------------------
    
  
   

}; // end of namespace

#endif

/* -*- mode: c++ -*- */
#ifndef _ialgo___
#define _ialgo___

#include <Event.h>
#include <ParamStore.h>
#include <Messenger.h>

#include <TSystem.h>

namespace gate{class IAlgo;}

class gate::IAlgo : public ParamStore {

public:
  
  //! constructor with verbosity level and name
  IAlgo(gate::VLEVEL vl=gate::NORMAL, 
	string name="IAlgo",int ver=0, string label="IAlgo");
 
  //! constructor with parameter store, verbosity level and name
  IAlgo(const gate::ParamStore& gs,gate::VLEVEL vl=gate::NORMAL,
	string name="IAlgo",int ver=0, string label="IAlgo");

  //! constructor with parameter file, verbosity level and name
  IAlgo(string param,gate::VLEVEL vl=gate::NORMAL,
	string name="IAlgo",int ver=0, string label ="IAlgo");

  //! Destructor
  virtual ~IAlgo(){}
  
  //! apply algorithm to event data
  virtual bool execute(gate::Event&){return true;}
  
  //! initialize algorithm 
  virtual bool initialize();
  
  //! finalize algorithm 
  virtual bool finalize();
  
  //! run algorithm
  bool run(gate::Event& evt);
  
  //! retrieve algorithm instance label
  std::string getAlgoLabel() const;
  
  //! retrieve algorithm name
  std::string getAlgoName() const;
  
  //! retrieve algorithm version
  int getAlgoVersion() const;

  //! take a string and add algo label as a prefix 
  std::string alabel(std::string tit) const {return _label+"_"+tit;}
    
  //----- Interface functions to gate::ParamStore ------//

  //! add algorithm properties from a gate ParamStore
  void add_properties(const gate::ParamStore& st,string prefix=""){
    this->add_properties(st,prefix);}
  
  
  //! add a property as an string
  void add_property(string name,  string value)
  {this->add_property(name,value);}

  //! add a property as an int
  void add_property(string name,  int value)
  {this->add_property(name,value);}

  //! add a property as a double
  void add_property(string name,  double value)
  {this->add_property(name,value);}
    
  //! add a property a string vector
  void add_property(string name, vstring& value)
  {this->add_property(name,value);}

  //! add a property as an int vector
  void add_property(string name, vint& value)
  {this->add_property(name,value);}

  //! add a property as a double vector
  void add_property(string name, vdouble& value)
  {this->add_property(name,value);}


    //! find a string property (true if property found)
    bool find_sproperty(string name) const
    {
      return this->find_sproperty(name);
    }

     //! find an integer property (true if property found)
    bool find_iproperty(string name) const
    {
      return this->find_iproperty(name);
    }
    
    //! find a double property (true if property found)
    bool find_dproperty(string name) const
    {
      return this->find_dproperty(name);
    }

    //! find a string vector property (true if property found)
    bool find_svproperty(string name) const
    {
      return this->find_svproperty(name);
    }

     //! find an integer vector property (true if property found)
    bool find_ivproperty(string name) const
    {
      return this->find_ivproperty(name);
    }
    
    //! find a double vector property (true if property found)
    bool find_dvproperty(string name) const
    {
      return this->find_dvproperty(name);
    }

     //! fetch a string property
    string fetch_sproperty(string name) const
    {
      string pr = this->fetch_sproperty(name);
      return pr; 
    }

    //! fetch an int property
    int fetch_iproperty(string name) const
    {
      int pr = this->fetch_iproperty(name);
      return pr; 
    }
    
    //! fetch a double property
    double fetch_dproperty(string name) const
    {
      double pr = this->fetch_dproperty(name);
      return pr; 
    }
     //! fetch a string vector property
    const vstring& fetch_svproperty(string name) const
    {
      const vstring&  pr = this->fetch_svproperty(name);
      return pr; 
    }

    //! fetch an int vector property
    const vint& fetch_ivproperty(string name) const
    {
      const vint& pr = this->fetch_ivproperty(name);
      return pr; 
    }
    
    //! fetch a double property
    const vdouble& fetch_dvproperty(string name) const
    {
      const vdouble& pr = this->fetch_dvproperty(name);
      return pr; 
    }
    

     //! change a property
    void change_sproperty(string name,string prop)
    {
      this->change_sproperty(name,prop);
    }
    
    //! change a property
    void change_iproperty(string name,int prop)
    {
      this->change_iproperty(name,prop);
    }
    
      //! change a property
    void change_dproperty(string name,double prop)
    {
      this->change_dproperty(name,prop);
    }
    
    //! change a property
    void change_svproperty(string name,vstring& prop)
    {
      this->change_svproperty(name,prop);
    }
    
    //! change a property
    void change_ivproperty(string name,vint& prop)
    {
      this->change_ivproperty(name,prop);
    }
    
      //! change a property
    void change_dvproperty(string name,vdouble& prop)
    {
      this->change_dvproperty(name,prop);
    }

    
    //!return properties as a ParamStore
    const ParamStore& properties_store() const
    {
      return this->properties_store();
    }
    
    //!return properties as a map
    const map<std::string,std::string>& sproperties_map() const
    {
      return this->sproperties_map();
    }
     //!return properties as a map
    const map<std::string,int>& iproperties_map() const
    {
      return this->iproperties_map();
    }
    //!return properties as a map
    const map<std::string,double>& dproperties_map() const
    {
      return this->dproperties_map();
    }
    //!return properties as a map
    const map<std::string,gate::vstring>& svproperties_map() const
    {
      return this->svproperties_map();
    }
     //!return properties as a map
    const map<std::string,gate::vint>& ivproperties_map() const
    {
      return this->ivproperties_map();
    }
    //!return properties as a map
    const map<std::string,gate::vdouble>& dvproperties_map() const
    {
      return this->dvproperties_map();
    }
    
    //! return properties name 
    vector<std::string> sproperties() const 
    {return this->sproperties();}
    
    //! return properties name 
    vector<std::string> iproperties() const 
    {return this->iproperties();}
    
    //! return properties name 
    vector<std::string> dproperties() const 
    {return this->dproperties();}

    //! return properties name 
    vector<std::string> svproperties() const 
    {return this->svproperties();}
    
    //! return properties name 
    vector<std::string> ivproperties() const 
    {return this->ivproperties();}
    
    //! return properties name 
    vector<std::string> dvproperties() const 
    {return this->dvproperties();}
    

    //! return properties value
    vector<std::string> sproperties_values() const 
    {return this->sproperties_values();}
    
    //! return properties value
    vector<int> iproperties_values() const 
    {return this->iproperties_values();}
    
    //! return properties value
    vector<double> dproperties_values() const 
    {return this->dproperties_values();}

     //! return properties value
    vector<gate::vstring> svproperties_values() const 
    {return this->svproperties_values();}
    
    //! return properties value
    vector<gate::vint> ivproperties_values() const 
    {return this->ivproperties_values();}
    
    //! return properties value
    vector<gate::vdouble> dvproperties_values() const 
    {return this->dvproperties_values();}

    //! reset properties
    void clear(){this->clear();}

  
 
protected:
  
  //! Messenger
  gate::Messenger _m;
  
  //! algorithm name (to define type of algorithm)
  std::string _name;
  
  //! algorithm version
  int _version;

  //! algorithm label (to define instance)
  std::string _label;
  
  ClassDef(gate::IAlgo,0)

};


inline std::string gate::IAlgo::getAlgoLabel() const {return _label;}
  
inline std::string gate::IAlgo::getAlgoName() const {return _name;}
  
inline int gate::IAlgo::getAlgoVersion() const {return _version;}

#endif

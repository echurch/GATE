#ifndef __PPROP__
#define __PPROP__

#include <string>

#include<GATE/system_of_units.h>

/* Code to be reviewed */

namespace gate{

  class PartProperties{
   
  private:
   
    //! PDG number
    int _PDG; 
   
    // name
    std::string _name; 
    
    //! mass
    double _mass;
    
    //! charge
    double _charge;
    
  public:

  PartProperties(int pdg=-1, std::string n="NONE", double mass=0, double q=0):
    _PDG(pdg),_name(n),_mass(m),_charge(q){};
    
    inline int GetPDG() const {return _PDG;}
    inline std::string GetName() const {return _name;}
    inline int GetMass() const {return _mass;}
    inline int GetCharge() const {return _charge;}

  };
  
  static const PartProperties GAMMA(22,"gamma",0*gate::MeV,0);

  static const PartProperties ELECTRON(11,"e-",0.511*gate::MeV,-1);
  static const PartProperties POSITRON(11,"e+",0.511*gate::MeV,+1);
  
  static const PartProperties NUE(12,"nu_e",0.0*gate::MeV,0);
  static const PartProperties ANTINUE(12,"anti_nu_e",0.0*gate::MeV,0);

  static const PartProperties MUMINUS(13,"mu-",105.7*gate::MeV,-1);
  static const PartProperties MUPLUS(-13,"mu+",105.7*gate::MeV,+1);
  
  static const PartProperties NUMU(14,"nu_mu",0.0*gate::MeV,0);
  static const PartProperties ANTINUMU(-14,"anti_nu_mu",0.0*gate::MeV,0);

  static const PartProperties TAUMINUS(15,"tau-",1777*gate::MeV,-1);
  static const PartProperties TAUPLUS(-15,"tau+",1777*gate::MeV,+1);
  
  static const PartProperties NUTAU(16,"nu_tau",0.0*gate::MeV,0);
  static const PartProperties ANTINUTAU(-16,"anti_nu_tau",0.0*gate::MeV,0);

  static const PartProperties ALPHA(1000020040,"alpha",3727.38*gate::MeV,+2);
  
}

#endif

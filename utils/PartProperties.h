#ifndef __PPROP__
#define __PPROP__

#include <string>

#include<GATE/system_of_units.h>

/**
 * \class PartProperties
 *
 * \ingroup Tools
 *
 * \brief Particle definition: PDG, name, mass and charge 
 *
 * \author Pau Novella
 *
 * \version $Revision: 1.0 $
 * 
 * Contact: pau.novella@ific.uv.es
 *
 * @ingroup utils
 */

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
    int _charge;
    
  public:

    //! default constructor: sets all members
  PartProperties(int pdg=-1, std::string n="NONE", double mass=0, int q=0):
    _PDG(pdg),_name(n),_mass(m),_charge(q){};
    
    //! get PDG number
    inline int GetPDG() const {return _PDG;}
    //! get particle name as a string
    inline std::string GetName() const {return _name;}
    //! get mass
    inline double GetMass() const {return _mass;}
    // get charge
    inline int GetCharge() const {return _charge;}

  };
  
  //! gamma difinition
  static const PartProperties GAMMA(22,"gamma",0*gate::MeV,0);
  //! definition of a electron
  static const PartProperties ELECTRON(11,"e-",0.511*gate::MeV,-1);
  //! definition of a positron
  static const PartProperties POSITRON(11,"e+",0.511*gate::MeV,+1);
  //! definition of an electron neutrino
  static const PartProperties NUE(12,"nu_e",0.0*gate::MeV,0);
  //! definition of an electron antineutrino
  static const PartProperties ANTINUE(12,"anti_nu_e",0.0*gate::MeV,0);
  //! definition of a muon particle
  static const PartProperties MUMINUS(13,"mu-",105.7*gate::MeV,-1);
  //! definition of a positive muon particle
  static const PartProperties MUPLUS(-13,"mu+",105.7*gate::MeV,+1);
  //! definition of a muon neutrino
  static const PartProperties NUMU(14,"nu_mu",0.0*gate::MeV,0);
  //! definition of a muon antineutrino
  static const PartProperties ANTINUMU(-14,"anti_nu_mu",0.0*gate::MeV,0);
  //! definition of a negative tau particle
  static const PartProperties TAUMINUS(15,"tau-",1777*gate::MeV,-1);
  //! definition of a positive tau particle
  static const PartProperties TAUPLUS(-15,"tau+",1777*gate::MeV,+1);
  //! definition of an tau neutrino
  static const PartProperties NUTAU(16,"nu_tau",0.0*gate::MeV,0);
  //! definition of an tau antineutrino
  static const PartProperties ANTINUTAU(-16,"anti_nu_tau",0.0*gate::MeV,0);
  //! definition of an alpha particle
  static const PartProperties ALPHA(1000020040,"alpha",3727.38*gate::MeV,+2);
  
}

#endif

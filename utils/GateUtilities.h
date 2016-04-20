#ifndef __GUTIL__
#define __GUTIL__

#include<algorithm>

#include <GATE/Environment.h>
#include <GATE/system_of_units.h>
#include <GATE/Error.h>
#include <GATE/Event.h>

namespace gate{
  
  std::string ResumedInfo(gate::Event* event); 

  double distance(gate::Point3D p1, gate::Point3D p2);
  double distance(gate::BHit* hit1, gate::BHit* hit2);
  double distance(gate::BTrack* track1, gate::BTrack* track2);


  inline std::string toString(gate::DATATYPE dataType) {
    switch(dataType) {
      case(gate::NODTYPE): return "Not Set";
      case(gate::MCTRUTH): return "MC Truth";
      case(gate::MC):      return "MC Digi";
      case(gate::DATA):    return "Data";
      default:             return "NOT VALID !!";
    }
  }

  inline std::string toString(gate::EVENTTYPE evtType) {
    switch(evtType) {
      case (gate::NOETYPE): return "Not Set";
      case (gate::BB2NU):   return "BB2nu";
      case (gate::BB0NU):   return "BB0nu";
      case (gate::BKG):     return "Background";
      default:              return "NOT VALID !!";
    }
  }

  inline std::string toString(gate::SIGNALTYPE signalType) {
    switch(signalType) {
      case (gate::NOSIGTYPE): return "Not Set";
      case (gate::S1):        return "S1";
      case (gate::S2):        return "S2";
      default:                return "NOT VALID !!";
    }
  }

  inline std::string toString(gate::STATE state) {
    switch(state) {
      case (gate::NOSTATE): return "Not Set";
      case (gate::RAW):     return "Raw";
      case (gate::RECOED):  return "Reconstructed";
      case (gate::CALIB):   return "Calibrated";
      default:              return "NOT VALID !!";
    }
  }

  inline std::string toString(gate::SENSORTYPE sensorType) {
    switch(sensorType) {
      case (gate::NOSTYPE): return "Not Set";
      case (gate::SIPM):    return "No Type";
      case (gate::PMT):     return "No Type";
      case (gate::TPC):     return "No Type";
      default:              return "NOT VALID !!";
    }
  }



  inline VLEVEL to_VLEVEL(int level ){
    if(level == 0)  return MUTE;
    if(level == 1)  return NORMAL;
    if(level == 2)  return DETAILED;
    if(level == 3)  return VERBOSE;
    if(level == 4)  return DUMP;
    else return NORMAL;
  }


  inline VLEVEL get_info_level( string info )
  {
    if(info == "MUTE")  return MUTE;
    if(info == "NORMAL")  return NORMAL;
    if(info == "DETAILED")  return DETAILED;
    if(info == "VERBOSE")  return VERBOSE;
    if(info == "DUMP")  return DUMP;
    else return NORMAL;
  }
  

  inline double unit_from_string(string sunit){
    //! TO BE REVIEWED !!!!!
    double unit = 0.;
    if (sunit=="millimeter") unit = gate::millimeter;
    else if (sunit=="millimeter2") unit = gate::millimeter2;
    else if (sunit=="millimeter3") unit = gate::millimeter3;
    else if (sunit=="centimeter") unit = gate::centimeter;
    else if (sunit=="centimeter2") unit = gate::centimeter2;
    else if (sunit=="centimeter3") unit = gate::centimeter3;
    else if (sunit=="decimeter") unit = gate::decimeter;
    else if (sunit=="decimeter2") unit = gate::decimeter2;
    else if (sunit=="decimeter3") unit = gate::decimeter3;
    else if (sunit=="liter") unit = gate::liter;
    else if (sunit=="l") unit = gate::l;
    else if (sunit=="meter") unit = gate::meter;
    else if (sunit=="meter2") unit = gate::meter2;
    else if (sunit=="meter3") unit = gate::meter3;
    else if (sunit=="kilometer") unit = gate::kilometer;
    else if (sunit=="kilometer2") unit = gate::kilometer2;
    else if (sunit=="kilometer3") unit = gate::kilometer3;
    else if (sunit=="micrometer") unit = gate::micrometer;
    else if (sunit=="nanometer") unit = gate::nanometer;
    else if (sunit=="angstrom") unit = gate::angstrom;
    else if (sunit=="fermi") unit = gate::fermi;
    else if (sunit=="barn") unit = gate::barn;
    else if (sunit=="millibarn") unit = gate::millibarn;
    else if (sunit=="microbarn") unit = gate::microbarn;
    else if (sunit=="nanobarn") unit = gate::nanobarn;
    else if (sunit=="picobarn") unit = gate::picobarn;
    else if (sunit=="mm") unit = gate::mm;
    else if (sunit=="mm2") unit = gate::mm2;
    else if (sunit=="mm3") unit = gate::mm3;
    else if (sunit=="cm") unit = gate::cm;
    else if (sunit=="cm2") unit = gate::cm2;
    else if (sunit=="cm3") unit = gate::cm3;
    else if (sunit=="m") unit = gate::m;
    else if (sunit=="m2") unit = gate::m2;
    else if (sunit=="m3") unit = gate::m3;
    else if (sunit=="km") unit = gate::km;
    else if (sunit=="km2") unit = gate::km2;
    else if (sunit=="km3") unit = gate::km3;
    else if (sunit=="radian") unit = gate::radian;
    else if (sunit=="milliradian") unit = gate::milliradian;
    else if (sunit=="degree") unit = gate::degree;
    else if (sunit=="steradian") unit = gate::steradian;
    else if (sunit=="rad") unit = gate::rad;
    else if (sunit=="mrad") unit = gate::mrad;
    else if (sunit=="sr") unit = gate::sr;
    else if (sunit=="deg") unit = gate::deg;
    else if (sunit=="nanosecond") unit = gate::nanosecond;
    else if (sunit=="second") unit = gate::second;
    else if (sunit=="millisecond") unit = gate::millisecond;
    else if (sunit=="microsecond") unit = gate::microsecond;
    else if (sunit=="picosecond") unit = gate::picosecond;
    else if (sunit=="year") unit = gate::year;
    else if (sunit=="hertz") unit = gate::hertz;
    else if (sunit=="kilohertz") unit = gate::kilohertz;
    else if (sunit=="megahertz") unit = gate::megahertz;
    else if (sunit=="ns") unit = gate::ns;
    else if (sunit=="s") unit = gate::s;
    else if (sunit=="ms") unit = gate::ms;
    else if (sunit=="eplus") unit = gate::eplus;
    else if (sunit=="e_SI") unit = gate::e_SI;
    else if (sunit=="coulomb") unit = gate::coulomb;
    else if (sunit=="megaelectronvolt") unit = gate::megaelectronvolt;
    else if (sunit=="electronvolt") unit = gate::electronvolt;
    else if (sunit=="kiloelectronvolt") unit = gate::kiloelectronvolt;
    else if (sunit=="gigaelectronvolt") unit = gate::gigaelectronvolt;
    else if (sunit=="teraelectronvolt") unit = gate::teraelectronvolt;
    else if (sunit=="petaelectronvolt") unit = gate::petaelectronvolt;
    else if (sunit=="joule") unit = gate::joule;
    else if (sunit=="MeV") unit = gate::MeV;
    else if (sunit=="eV") unit = gate::eV;
    else if (sunit=="keV") unit = gate::keV;
    else if (sunit=="GeV") unit = gate::GeV;
    else if (sunit=="TeV") unit = gate::TeV;
    else if (sunit=="PeV") unit = gate::PeV;
    else if (sunit=="eV2") unit = gate::eV2;
    else if (sunit=="kilogram") unit = gate::kilogram;
    else if (sunit=="gram") unit = gate::gram;
    else if (sunit=="milligram") unit = gate::milligram;
    else if (sunit=="ton") unit = gate::ton;
    else if (sunit=="kiloton") unit = gate::kiloton;
    else if (sunit=="kg") unit = gate::kg;
    else if (sunit=="g") unit = gate::g;
    else if (sunit=="mg") unit = gate::mg;
    else if (sunit=="watt") unit = gate::watt;
    else if (sunit=="newton") unit = gate::newton;
    else if (sunit=="hep_pascal") unit = gate::hep_pascal;
    else if (sunit=="bar") unit = gate::bar;
    else if (sunit=="atmosphere") unit = gate::atmosphere;
    else if (sunit=="ampere") unit = gate::ampere;
    else if (sunit=="milliampere") unit = gate::milliampere;
    else if (sunit=="microampere") unit = gate::microampere;
    else if (sunit=="nanoampere") unit = gate::nanoampere;
    else if (sunit=="megavolt") unit = gate::megavolt;
    else if (sunit=="kilovolt") unit = gate::kilovolt;
    else if (sunit=="volt") unit = gate::volt;
    else if (sunit=="ohm") unit = gate::ohm;
    else if (sunit=="farad") unit = gate::farad;
    else if (sunit=="millifarad") unit = gate::millifarad;
    else if (sunit=="microfarad") unit = gate::microfarad;
    else if (sunit=="nanofarad") unit = gate::nanofarad;
    else if (sunit=="picofarad") unit = gate::picofarad;
    else if (sunit=="weber") unit = gate::weber;
    else if (sunit=="tesla") unit = gate::tesla;
    else if (sunit=="gauss") unit = gate::gauss;
    else if (sunit=="kilogauss") unit = gate::kilogauss;
    else if (sunit=="henry") unit = gate::henry;
    else if (sunit=="kelvin") unit = gate::kelvin;
    else if (sunit=="mole") unit = gate::mole;
    else if (sunit=="becquerel") unit = gate::becquerel;
    else if (sunit=="curie") unit = gate::curie;
    else if (sunit=="gray") unit = gate::gray;
    else if (sunit=="candela") unit = gate::candela;
    else if (sunit=="lumen") unit = gate::lumen;
    else if (sunit=="lux") unit = gate::lux;
    else if (sunit=="perCent") unit = gate::perCent;
    else if (sunit=="perThousand") unit = gate::perThousand;
    else if (sunit=="perMillion") unit = gate::perMillion;
    
    Assert(unit,__FILE__,__LINE__,
           gate::internal_logic("Unit not known: "+sunit)); 

    return unit;
  }

}

#endif

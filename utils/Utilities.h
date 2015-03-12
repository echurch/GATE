/* -*- mode: c++ -*- */

/*   
 * 
 * Copyright (C) 2002 J.J. Gomez-Cadenas, J.A. Hernando
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 */

#ifndef __UTIL__
#define __UTIL__

#include <string>
#include <vector>
#include <sstream>

#include <GATE/Environment.h>
#include <GATE/system_of_units.h>
#include <GATE/Error.h>

using namespace std;  

namespace gate{
  
  inline VLEVEL to_VLEVEL(int level ){

    if(level == 0)  return MUTE;
    if(level == 1)  return CONCISE;
    if(level == 2)  return NORMAL;
    if(level == 3)  return WARNING;
    if(level == 4)  return DETAILED;
    if(level == 5)  return VERBOSE;
    if(level == 6)  return VVERBOSE;
    if(level == 7)  return DUMP;
    else return NORMAL;
  
  }

  inline VLEVEL get_info_level( string info )
  {
    if(info == "MUTE")  return MUTE;
    if(info == "CONCISE")  return CONCISE;
    if(info == "NORMAL")  return NORMAL;
    if(info == "WARNING")  return WARNING;
    if(info == "DETAILED")  return DETAILED;
    if(info == "VERBOSE")  return VERBOSE;
    if(info == "VVERBOSE")  return VVERBOSE;
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
  

  static const double small_neg = -999999;
  //! to string
  /** 
   *\ingroup util
   */
  template <class T> 
  inline string to_string(T i)
  {
    ostringstream ostr;
    ostr << i ;      
    return ostr.str();
  }

  
  template <class T> 
  inline void to_string(string& s, T i, string glue=" ")
  {
    ostringstream ostr;
    ostr << i ;      
    s+=glue;
    s+=ostr.str();


  }

  inline int int_from_string(string s)
  {
    istringstream istr(s.c_str());
    int q;
    istr >> q;
    return q;
  }

  inline double double_from_string(string s)
  {
    istringstream istr(s.c_str());
    
    double q;
    istr >> q;
    return q;
  }

  inline float float_from_string(string s)
  {
    istringstream istr(s.c_str());
    
    float q;
    istr >> q;
    return q;
  }

  inline long long_from_string(string s)
  {
    istringstream istr(s.c_str());
    
    long q;
    istr >> q;
    return q;
  }

  inline size_t size_t_from_string(string s)
  {
    istringstream istr(s.c_str());
    
    size_t q;
    istr >> q;
    return q;
  }


  template <class T> 
  inline string vector_to_string(const vector<T> v)
  {
    string tmp  =to_string(v[0]);
    for (size_t i=1; i<v.size(); i++)
      {
	string tmp2 = to_string(v[i]);
	to_string(tmp,tmp2,"_");
      }
    to_string(tmp," ");
    return tmp;
  }

  
  template <class T> 
  inline void vector_from_string(string s,vector<T>& v)
  {
      T q;

      bool test = true;
      while(test)
	{
 	  int i2= s.find("_");
	  string ele=s.substr(0,i2);

	  if (i2 <0) test = false;

	  T_from_string(ele,q);
	  v.push_back(q);
	  s.erase(0,i2+1);
	}
  }
  
  template <class T> 
  inline void T_from_string(string s, T& q)
  {
    istringstream istr(s.c_str());    
    istr >> q;
  }


  //! change to lower case
  /** 
   *\ingroup util
   */
  
  inline string to_lower(const string& s) 
  {
    string s2(s);
    for (size_t i = 0; i < s.length(); ++i) 
      s2[i] = tolower(s[i]);
    return s2;
  }
  
  //! change to upper case
  /** 
   *\ingroup util
   */
  
  inline string to_upper(const string& s) 
  {
    string s2(s);
    for (size_t i = 0; i < s.length(); ++i) 
      s2[i] = toupper(s[i]);
    return s2;
  }
    
  template <class T> 
  inline string print_vector(const vector<T>& vt)
  {
    typename vector<T>::const_iterator vi;

    ostringstream s;

    if (vt.size() == 0)
      {
	s <<  "(  )";
      }
    else
      {
	s <<  "(";
	    	    
	for (vi = vt.begin(); vi< vt.end()-1; vi++)
	  {
	    s << *vi <<",";
	  } 	
	
	s << *vi << ")" ;
      }

    return s.str();
  }

  //! compare two strings (no case sensitive)
  /** 
   *\ingroup util
   */

  inline bool compare_string_nocase(const string& s, const string& s2)
  {
    // return false if not the same size
    if (s.size() != s2.size()) return false;
    // otherwise iterate
    bool caso = true;
    
    for (size_t i = 0; i < s.length(); i++){
      if (toupper(s[i]) != toupper(s2[i]) ){
	caso = false;
	break;
      }
    }
    return caso;	       
  }

    
  //! compare two strings (case sensitive)
  /** 
   *\ingroup util
   */
  inline bool compare_string(const string& s, const string& s2)
  {
    // Strings must have the same size
    if (s.size() != s2.size()) return false;
    
    // otherwise iterate
    bool caso = true;
    
    for (size_t i = 0; i < s.length(); i++){
      
      if (s[i] != s2[i] ){
	caso = false;
	break;
      }
    }
    return caso;
  }

  //! return a const char* from a string
  /** 
   *\ingroup util
   */
   inline const char* skin(string str){
    
    ostringstream s;
    
    string::const_iterator p = str.begin()+1;
    while (p < str.end()-1){
      s << *p ;
      p++;
    }
    
    return s.str().c_str();
    
  }

/// square
/** 
 *\ingroup util
 */
  template <class T> 
  inline T square(T a)
  {
      return a*a; 
  }

}    
#endif 
	






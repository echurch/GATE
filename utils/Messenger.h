#ifndef __MESSENGER__
#define __MESSENGER__

/* @author J.J. Gomez-Cadenas
 */

#include <iostream>
#include <string>

#include <GATE/Environment.h>

#include <Rtypes.h>

namespace gate{

/// Simple messenger class
/**
 * It sends messages conditioned to the level of information requested
 *at construction time or any time later via the set_level method. The
 *message structure is:
 * message(string,Ta,Tb,Tc....,LEVEL) where Ta, Tb,Tc... are templated types
 *and level is the level of information for which this message will be output
  *\ingroup base
 */
  class Messenger{

  private:

    VLEVEL level_;
    
    std::string name_;
    
  public:
    ///Default constructor is set to MUTE
    Messenger(VLEVEL clevel=MUTE){name_="gateMessenger" ;level_=clevel;}
    ///Constructor: takes name and level (default is MUTE)
    Messenger(std::string name,VLEVEL clevel=MUTE){name_=name ;level_=clevel;}
    //! destructor
    virtual ~Messenger(){}
    ///Takes the VLEVEL as an argument
    //messenger(VLEVEL clevel){level_ = clevel;}
    ///Sets the print level
    void set_level(VLEVEL clevel){level_ = clevel;}
    ///Sets name of messenger
    void set_name(std::string name){name_ = name;}
    ///Returns the print level
    VLEVEL level() const {return level_;}
    ///Returns name
    std::string name() const {return name_;}
	///Sends a message 
/** The specified print level must be equal or smaller than the print level
 * set to the messenger. For example, if the messenger is set to VVERBOSE
 * any message will be printed. Instead, if the messenger is set to MUTE
 * only messages flagged as MUTE will print
  *\ingroup base
 */
    inline void message (const std::string message, 
			 VLEVEL clevel, std::string h="") const
    {
      if (!h.empty()) h += ": ";
      if (clevel <= level_)
	std::cout <<">>> "<<name_<<"("<<level_<<":"<<clevel<<"): "<<h
	     << message << std::endl;
    
    }
	///Sends a message followed by variable d
/** The specified print level must be equal or smaller than the print level
 * set to the messenger. 
  *\ingroup base
 */
    template <class T> inline
    void message(const std::string message, const T& d, 
		 VLEVEL clevel, std::string h="") const
    {
      if (!h.empty()) h += ": ";
      if (clevel <= level_)
	std::cout <<">>> "<<name_<<"("<<level_<<":"<<clevel<<"): "<<h 
	     << message << " " << d << std::endl;
    }

///Sends a message followed by variable d1 and d2
/** The specified print level must be equal or smaller than the print level
 * set to the messenger. 
  *\ingroup base
 */
	template <class A, class B> inline
	void message(const std::string message, const A& d1, 
		     const B& d2, VLEVEL clevel, std::string h="") const
	    {
	      if (!h.empty()) h += ": ";
	      if (clevel <= level_)
		std::cout <<">>> "<<name_<<"("<<level_<<":"<<clevel<<"): "<<h 
		     << message << " " << d1 << " " << d2 << std::endl;
	    }
///Sends a message followed by variable d1 d2 and d3
/** The specified print level must be equal or smaller than the print level
 * set to the messenger. 
  *\ingroup base
 */
	template <class A, class B, class C> inline
	void message(const std::string message, const A& d1, 
		     const B& d2, 
		     const C& d3, 
		     VLEVEL clevel, std::string h="") const
	    {
	      if (!h.empty()) h += ": ";
	      if (clevel <= level_)
		std::cout <<">>> "<<name_<<"("<<level_<<":"<<clevel<<"): "<<h 
		     << message << " " << d1 << " " << d2  
		     << " " << d3 << std::endl;
	    }
///Sends a message followed by variable d1 d2, d3 and d4
/** The specified print level must be equal or smaller than the print level
 * set to the messenger. 
  *\ingroup base
 */
	template <class A, class B, class C, class D> inline
	void message(const std::string message, 
		     const A& d1, 
		     const B& d2, 
		     const C& d3, 
		     const D& d4, 
		     VLEVEL clevel, std::string h="") const
	    {
	      if (!h.empty()) h += ": ";
	      if (clevel <= level_)
		std::cout <<">>> "<<name_<<"("<<level_<<":"<<clevel<<"): "<<h 
		     << message << " " << d1 << " " << d2 
		     << " " << d3 << " " << d4 
		     << std::endl;
	    }
///Sends a message followed by variable d1 d2, d3 d4 and d5 
/** The specified print level must be equal or smaller than the print level
 * set to the messenger. 
 *\ingroup base
 */
	template <class A, class B, class C, class D, class E> inline
	void message(const std::string message, 
		     const A& d1, 
		     const B& d2, 
		     const C& d3, 
		     const D& d4, 
		     const E& d5, 
		     VLEVEL clevel, std::string h="") const
	    {
	      if (!h.empty()) h += ": ";
	      if (clevel <= level_)
		std::cout <<">>> "<<name_<<"("<<level_<<":"<<clevel<<"): "<<h 
		     << message << " " << d1 << " " << d2 
		     << " " << d3 << " " << d4 
		     << " " << d5
		     << std::endl;
	    }

///Sends a message followed by variable d1 d2, d3 d4, d5, and d6 
/** The specified print level must be equal or smaller than the print level
 * set to the messenger. 
  *\ingroup base
 */
    template <class A, class B, class C, class D, class E, class F> inline
    void message(const std::string message, 
		 const A& d1, 
		 const B& d2, 
		 const C& d3, 
		 const D& d4, 
		 const E& d5,
		 const F& d6, 
		 VLEVEL clevel, std::string h="") const
    {
      if (!h.empty()) h += ": ";
      if (clevel <= level_)
	std::cout <<">>> "<<name_<<"("<<level_<<":"<<clevel<<"): "<<h 
	     << message << " " << d1 << " " << d2 
	     << " " << d3 << " " << d4 
	     << " " << d5
	     << " " << d6
	     << std::endl;
    }
///Sends a message followed by variable d1 d2, d3 d4, d5, and d6 d7
/** The specified print level must be equal or smaller than the print level
 * set to the messenger. 
  *\ingroup base
  */
    template <class A, class B, class C, class D, class E, class F,
	      class G> inline
    void message(const std::string message, 
		 const A& d1, 
		 const B& d2, 
		 const C& d3, 
		 const D& d4, 
		 const E& d5,
		 const F& d6, 
		 const G& d7,  
		 VLEVEL clevel, std::string h="") const
    {
      if (!h.empty()) h += ": ";
      if (clevel <= level_)
	std::cout <<">>> "<<name_<<"("<<level_<<":"<<clevel<<"): "<<h 
	     << message << " " << d1 << " " << d2 
	     << " " << d3 << " " << d4 
	     << " " << d5
	     << " " << d6
	     << " " << d7
	     << std::endl;
    }
///Sends a message followed by variable d1 d2, d3 d4, d5, d7 d8 
/** The specified print level must be equal or smaller than the print level
 * set to the messenger. 
  *\ingroup base
 */
    template <class A, class B, class C, class D, class E, class F,
	      class G, class H> inline
    void message(const std::string message, 
		 const A& d1, 
		 const B& d2, 
		 const C& d3, 
		 const D& d4, 
		 const E& d5,
		 const F& d6, 
		 const G& d7, 
		 const H& d8, 
		 VLEVEL clevel, std::string h="") const
    {
      if (!h.empty()) h += ": ";
      if (clevel <= level_)
	std::cout <<">>> "<<name_<<"("<<level_<<":"<<clevel<<"): "<<h 
	     << message << " " << d1 << " " << d2 
	     << " " << d3 << " " << d4 
	     << " " << d5
	     << " " << d6
	     << " " << d7
	     << " " << d8
	     << std::endl;
    }
///Sends a message followed by variable d1 d2, d3 d4, d5, d7 d8 d9
/** The specified print level must be equal or smaller than the print level
 * set to the messenger. 
  *\ingroup base
 */
    template <class A, class B, class C, class D, class E, class F,
	      class G, class H, class I> inline
    void message(const std::string message, 
		 const A& d1, 
		 const B& d2, 
		 const C& d3, 
		 const D& d4, 
		 const E& d5,
		 const F& d6, 
		 const G& d7, 
		 const H& d8, 
		 const I& d9, 
		 VLEVEL clevel, std::string h="") const
    {
      if (!h.empty()) h += ": ";
      if (clevel <= level_)
	std::cout <<">>> "<<name_<<"("<<level_<<":"<<clevel<<"): "<<h 
	     << message << " " << d1 << " " << d2 
	     << " " << d3 << " " << d4 
	     << " " << d5
	     << " " << d6
	     << " " << d7
	     << " " << d8
	     << " " << d9
	     << std::endl;
    }
///Sends a message followed by variable d1 d2, d3 d4, d5, d7 d8 d9 d10
/** The specified print level must be equal or smaller than the print level
 * set to the messenger. 
  *\ingroup base
 */
    template <class A, class B, class C, class D, class E, class F,
	      class G, class H, class I, class J> inline
    void message(const std::string message, 
		 const A& d1, 
		 const B& d2, 
		 const C& d3, 
		 const D& d4, 
		 const E& d5,
		 const F& d6, 
		 const G& d7, 
		 const H& d8, 
		 const I& d9, 
		 const J& d10, 
		 VLEVEL clevel, std::string h="") const
    {
      if (!h.empty()) h += ": ";
      if (clevel <= level_)
	std::cout <<">>> "<<name_<<"("<<level_<<":"<<clevel<<"): "<<h 
	     << message << " " << d1 << " " << d2 
	     << " " << d3 << " " << d4 
	     << " " << d5
	     << " " << d6
	     << " " << d7
	     << " " << d8
	     << " " << d9
	     << " " << d10
	     << std::endl;
    }
 

    
    ///Sends an error message
    inline void error(const std::string msg) const{
      this->message(msg,MUTE,"<<ERROR>>");
    }
    
    ///Sends an error message followed by variable d
    template <class T> inline
    void error(const std::string msg, const T& d) const{
      this->message(msg,d,MUTE,"<<ERROR>>");
    }
    
    ///Sends an error message
    inline void warning(const std::string msg) const{
      this->message(msg,MUTE,"<<WARNING>>");
    }
    
    ///Sends an error message followed by variable d
    template <class T> inline
    void warning(const std::string msg, const T& d) const{
      this->message(msg,d,MUTE,"<<WARNING>>");
    }
    
    ClassDef(Messenger,1)

  };

  
}
  
//ClassImp(gate::messenger)
  
#endif

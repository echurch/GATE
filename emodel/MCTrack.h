#ifndef __MCTrack_H__
#define __MCTrack_H__

/**
 * @file MCTrack.h
 *
 * @class MCTrack
 * 
 * @brief Class for true track objects
 *
 * @details Contains a collection of true hits generated by a true particle
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date January 2015
 *
 * @ingroup emodel
 */

#include <BTrack.h>
#include <MCParticle.h>

namespace gate{class MCTrack;}

class gate::MCTrack : public gate::BTrack {

 public:
 
  //! default constructor
  MCTrack();
  
  //! destructor
  virtual ~MCTrack(){} 
  
  //! retrieve particle generating the track
  const gate::MCParticle& GetParticle() const;

  //! set particle generating the track
  void SetParticle(gate::MCParticle* p);
   
  //! print event into stream
  void Info(std::ostream& s) const;

 protected:
  
  //! true particle responsible for the track
  const  gate::MCParticle* _part;

  ClassDef(gate::MCTrack,1)

};

inline const gate::MCParticle& gate::MCTrack::GetParticle() const 
{return *_part;}

inline void gate::MCTrack::SetParticle(gate::MCParticle* p)  { _part = p;}

std::ostream& operator << (std::ostream& s, const gate::MCTrack& trk) ;

#endif
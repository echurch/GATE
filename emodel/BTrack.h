#ifndef __BTrack_H__
#define __BTrack_H__

/**
 * @file BTrack.h
 *
 * @class BTrack
 * 
 * @brief Base class for track objects
 *
 * @details Contains a collection of hits. 
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date January 2015
 *
 */

#include <iostream>

#include<TSystem.h>

#include<BHit.h>


namespace gate{class BTrack;}

class gate::BTrack : public gate::BObject {

 public:
 
  //! default constructo
  BTrack();
  
  //! destructor
  virtual ~BTrack(){}
  
  //! add hit
  void AddHit(gate::BHit* hit);
  
  //! retrieve hits 
  const std::vector<gate::BHit*>& GetHits() const; 
 
  //! print event into stream
  void Info(ostream& s) const;

 protected:
  
  //! vector of hits
  std::vector<BHit*> _hits;
  
  ClassDef(gate::BTrack,1)

};

inline void gate::BTrack::AddHit(gate::BHit* hit){_hits.push_back(hit);}

inline const std::vector<gate::BHit*>& gate::BTrack::GetHits() const{return _hits;}

#endif

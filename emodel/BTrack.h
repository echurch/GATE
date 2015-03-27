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
 * @ingroup emodel
 */

#include <GATE/BHit.h>

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
   
   //! add mirror track
  void AddMirrorTrack(gate::BTrack* trk);

  //! retrieve mirror tracks 
  const std::vector<gate::BTrack*>& GetMirrorTracks() const; 
  
  //! get total energy (sum of hit amplitudes)
  double GetEnergy() const;
  
  //! get track length
  double GetLength() const;
  
  //! set track length
  void SetLength(double l);
  
  //! set extreme hits (as index in vector of hits)
  void SetExtremes(size_t first, size_t last);

  //! get extreme hits 
  const std::pair<gate::BHit*,gate::BHit*>& GetExtremes() const;

  //! print event into stream
  void Info(std::ostream& s=std::cout) const;

 protected:
  
  //! total energy of the track
  double _energy;
  
  //! track length
  double _length;

  //! vector of hits
  std::vector<BHit*> _hits;
  
  //! track extremes ("first" and "last" hits in track) 
  std::pair<BHit*,BHit*> _exhits;

  //! vector of mirror tracks
  std::vector<BTrack*> _mtracks;
  
  ClassDef(gate::BTrack,1)

};

inline void gate::BTrack::AddHit(gate::BHit* hit){_hits.push_back(hit);}
inline const std::vector<gate::BHit*>& gate::BTrack::GetHits() const{return _hits;}

inline void gate::BTrack::AddMirrorTrack(gate::BTrack* trk)
{_mtracks.push_back(trk);}

inline const std::vector<gate::BTrack*>& gate::BTrack::GetMirrorTracks() const
{ return _mtracks;}

inline void gate::BTrack::SetLength(double l){_length=l;}
inline double gate::BTrack::GetLength() const{return _length;}

inline const std::pair<gate::BHit*,gate::BHit*>& gate::BTrack::GetExtremes()const{ return _exhits; }

std::ostream& operator << (std::ostream& s, const gate::BTrack& btrk) ;

#endif

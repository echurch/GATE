#ifndef __Cluster_H__
#define __Cluster_H__

/**
 * @file Cluster.h
 *
 * @class Cluster
 * 
 * @brief Group of associated hits so common properties are extracted
 *
 * @details Contains cluster hit-properties and pointers to original hits
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date March 2015
 *
 * @ingroup emodel
 */



#include <GATE/Hit.h>

namespace gate{class Cluster;}

class gate::Cluster : public gate::Hit{

 public:

  //! default constructor
  Cluster();

  //! default destructor
  virtual ~Cluster();
  
  //! add hit 
  void AddHit(gate::Hit* h);

  //! retrieve hits
  const std::vector<gate::Hit*>& GetHits() const;

  //! print hit into stream
  void Info(std::ostream& s=std::cout) const;

 protected:
  
  //! vector of hits giving place to  the cluster
  std::vector<gate::Hit*> _hits;

  ClassDef(gate::Cluster,1)

};

inline void gate::Cluster::AddHit(gate::Hit* h){ _hits.push_back(h);}
inline const std::vector<gate::Hit*>& gate::Cluster::GetHits()const {return _hits;}

std::ostream& operator << (std::ostream& s, const gate::Cluster& c); 

#endif

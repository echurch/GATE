#ifndef __Point3D_H__
#define __Point3D_H__

/**
 * @file Point3D.h
 *
 * @class Point3D
 * 
 * @brief 3D coordinates
 *
 * @details Contains x, y and z coordinates
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>, from bhep
 *
 * @version Revision 1.0.0
 *
 * @date January 2015
 *
 * @ingroup emodel
 */

#include <iostream>

#include <Rtypes.h>

#include <GATE/Environment.h>

namespace gate{class Point3D;}

class gate::Point3D {

 public:
  
  //! default constructor
  Point3D(double x=gate::nan, double y=gate::nan, double z=gate::nan);
  
  //! default destructor
  virtual ~Point3D(){};

 private:
  
  //! x coordinate
  double _x; 
  //! y coordinate
  double _y; 
  //! z coordinate
  double _z; 
  
 public:
  
  //! set x
  void x(double v);
  //! get x;
  double x() const;
  
  //! set y
  void y(double v);
  //! get y;
  double y() const;

  //! set z
  void z(double v);
  //! get z;
  double z() const;
  
  //! print info
  void Info(std::ostream& s=std::cout) const;

  ClassDef(gate::Point3D,1)
  
    };

inline double gate::Point3D::x() const { return _x; }
inline void gate::Point3D::x(double v){ _x = v; } 

inline double gate::Point3D::y() const { return _y; }
inline void gate::Point3D::y(double v){ _y = v; }

inline double gate::Point3D::z() const { return _z; }
inline void gate::Point3D::z(double v){ _z = v; }

std::ostream& operator << (std::ostream& s, const gate::Point3D& p); 

#endif


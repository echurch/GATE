#ifndef __Geo_H__
#define __Geo_H__

/**
 * @file Geometry.h
 *
 * @class Geometry
 *
 * @brief Holds detector geometry information
 *
 * @details Contains dimensions and sensor information
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date November 2015
 *
 * @ingroup emodel
 */

#include <GATE/Sensor.h>

namespace gate{class Geometry;}

class gate::Geometry : public gate::BObject{

 public:
  
  //! default constructor
  Geometry();
  
  //! default destructor
  virtual ~Geometry();
  
 private:
  
  //! min x coordinate
  double _xmin;

   //! max x coordinate
  double _xmax;
  
  //! min y coordinate
  double _ymin;

  //! max y coordinate
  double _ymax;

  //! min z coordinate
  double _zmin;

  //! max z coordinate
  double _zmax;

  //! max radius
  double _rmax;

  //! vector of sensors
  std::map<int,gate::Sensor*> _sensors;
  
  
public:
 
  //! set x coordinates
  void SetX(double min, double max);
  
  // get min x coordinate
  double GetXmin() const;
  
  // get max x coordinate
  double GetXmax() const;

  //! set y coordinates
  void SetY(double min, double max);
  
  // get min y coordinate
  double GetYmin() const;
  
  // get max y coordinate
  double GetYmax() const;
  
  //! set z coordinates
  void SetZ(double min, double max);
  
  // get min z coordinate
  double GetZmin() const;
  
  // get max z coordinate
  double GetZmax() const;

  //! set radius
  void SetR(double r);
  
  // get max radius
  double GetRmax() const;

  //! add sensor
  void AddSensor(gate::Sensor*);
   
  //! get sensor 
  const gate::Sensor* GetSensor(int id); 
  
  //! get map of sensors
  const std::map<int,gate::Sensor*>& GetSensors() const;
  
  //! print event into stream
  void Info(std::ostream& s=std::cout) const;

  ClassDef(gate::Geometry,1)

};

inline void gate::Geometry::SetX(double min, double max){_xmin=min; _xmax=max;}
inline double gate::Geometry::GetXmin() const {return _xmin;}
inline double gate::Geometry::GetXmax() const {return _xmax;}

inline void gate::Geometry::SetY(double min, double max){_ymin=min; _ymax=max;}
inline double gate::Geometry::GetYmin() const {return _ymin;}
inline double gate::Geometry::GetYmax() const {return _ymax;}

inline void gate::Geometry::SetZ(double min, double max){_zmin=min; _zmax=max;}
inline double gate::Geometry::GetZmin() const {return _zmin;}
inline double gate::Geometry::GetZmax() const {return _zmax;}

inline void gate::Geometry::SetR(double r){_rmax=r;}
inline double gate::Geometry::GetRmax() const {return _rmax;}

inline const gate::Sensor* gate::Geometry::GetSensor(int id){
  return _sensors[id];}

std::ostream& operator << (std::ostream& s, const gate::Geometry& geo); 

#endif

#ifndef __Vector4D_H__
#define __Vector4D_H__

/**
 * @file Vector4D.h
 *
 * @class Vector4D
 * 
 * @brief 4-element vector
 *
 * @details Contains x,y,z coodinates/components and energy/time
 *    
 * @author J.J. Gomez-Cadenas, Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date February 2015
 *
 * @ingroup emodel
 */

#include <iostream>
#include <cmath>
#include <Error.h>

#include<Rtypes.h>

namespace gate{

  class Vector4D {
  
  private:
   //! x coordinate
    double _x; 
    //! y coordinate
    double _y; 
    //! z coordinate
    double _z; 
    //! t coordinate
    double _t; 
    
  public:   
    
    //! default constructor
    Vector4D(){_x=nan;_y=nan;_z=nan;_t=nan;}

    //!Default destructor
    virtual ~Vector4D(){};

    //! constructor with coordinates and time/energy
    Vector4D(double x, double y, double z,double t): 
      _x(x),_y(y),_z(z),_t(t){}

    //! constructor with coordinates
    Vector4D(double x, double y, double z): 
      _x(x),_y(y),_z(z),_t(0){}

    //! set all coordinates
    void SetCoordinates(double x,double y, double z,double t){
      _x=x; _y=y; _z=z; _t=t;
      
    }
    //! set all coordinates
    void Set(double x,double y, double z, double t){
      SetCoordinates(x,y,z,t);
    }


    //! set x
    inline void SetX(double x) { _x=x; } 
 
    //! set z
    inline void SetZ(double z) { _z=z; } 
    
    //! set y
    inline void SetY(double y) { _y=y; } 
    
    //! set energy
    inline void SetE(double e)  { _t=e; } 
    
    //! set time
    inline void SetT(double e)  { _t=e; } 
    
    //! retrieve x
    inline double GetX() const {return _x;}

    //! retrieve y 
    inline double GetY() const {return _y;}

    //! retrieve x
    inline double GetZ() const {return _z;}

    //! retrieve time
    inline double GetT() const {return _t;}
    
    //! retrieve energy
    inline double GetE() const {return _t;}
    
    
    //! retrieve x
    inline double x() const {return _x;}

    //! retrieve y 
    inline double y() const {return _y;}

    //! retrieve x
    inline double z() const {return _z;}


    // Operators
    // operator () returns/set x,y,z
    //! read v(i), i = 0,1,2 = x,y,z
    
    double operator () (size_t i) const
    {
      Assert(i < 4, __FILE__, __LINE__, 
	     bad_index("index i must be < 4"));
      if (i==0) return x();
      if (i==1) return y();
      return _z;    
    }

    //! write v(i), i = 0,1,2
    double& operator () (size_t i)
    {
      Assert(i < 4, __FILE__,__LINE__,
	     bad_index("index i must be < 4"));
      
      if (i==0) return _x;
      if (i==1) return _y;
      return _z;    
    }

    // no protection in operator []
    // (write x,y,z even if the view not XYZ)
    double operator [] (size_t i) const
    {
      
      Assert(i < 4, __FILE__, __LINE__, 
	     bad_index("index i must be < 4"));
      
      if (i==0) return _x;
      if (i==1) return _y;
      return _z;    
    }

    //! write v(i), i = 0,1,2
    double& operator [] (size_t i)
    {
      
      Assert(i < 4, __FILE__,__LINE__,
	     bad_index("index i must be < 4"));
      
      if (i==0) return _x;
      if (i==1) return _y;
      return _z;    
    }

    //! operador +=
    Vector4D& operator += (const Vector4D& p2)
    {
      Vector4D& p1= *this;
      for (size_t i = 0; i < 4; i++)
	p1(i) += p2(i);
      return *this;
    }

    //! operador -=
    Vector4D& operator -= (const Vector4D& p2)
    {
      Vector4D& p1= *this;
   
      
      for (size_t i = 0; i < 4; i++)
	p1(i) -= p2(i);
      return *this;
    }
    
    //! operador *=
    Vector4D& operator *= (double a)
    {
      Vector4D& p1= *this;
      
      for (size_t i = 0; i < 4; i++)
	p1(i) *= a;
      return *this;
    }

    //! operador *=
    Vector4D& operator /= (double a)
    {
      Assert(a !=0, __FILE__,__LINE__,
	     divide_by_zero("error, divide by zero"));

      Vector4D& p1= *this;
      
      for (size_t i = 0; i < 4; i++)
	p1(i) /= a;
      return *this;
    }

    //! distance
    //double distance(const Vector4D& p2) const;
   
    //! module
    inline double GetModule() const { return sqrt(_x*_x + _y*_y + _z*_z); }
    
    //! print info into output stream
    void info(std::ostream& s = std::cout) const{
      s << std::endl;
       s << "(" << this->x() << "," <<this->y() <<","<<this->z() <<")";
   
    }

    ClassDef(gate::Vector4D,1)

  };
}

  
   // Operations with Vector4Ds
  // -v
   inline gate::Vector4D operator - (const gate::Vector4D& v1)
  {
    gate::Vector4D v = v1;
    for (size_t i = 0; i < 4; i++)
	v(i) = -v1(i);   
    return v;

  }
  // v1+v2
   inline gate::Vector4D operator + (const gate::Vector4D& v1, const gate::Vector4D& v2)
  {
    gate::Vector4D v = v1; 
    v+=v2;   
    return v;
  }
  //! v1-v2
   inline gate::Vector4D operator - (const gate::Vector4D& v1, const gate::Vector4D& v2)
  {
    gate::Vector4D v = v1; 
    v-=v2;   
    return v;
  }

  // v*d
   inline gate::Vector4D operator * (const gate::Vector4D& v1, double d)
  {
    gate::Vector4D v = v1; 
    v*=d;   
    return v;
  }
  // v/d

   inline gate::Vector4D operator / (const gate::Vector4D& v1, double d)
  {
    gate::Vector4D v = v1; 
    v/=d;   
    return v;
  }

  // d*v
   inline gate::Vector4D operator * (double d, const gate::Vector4D& v1)
  {
    gate::Vector4D v = v1; 
    v*=d;   
    return v;
  }

inline std::ostream& operator << (std::ostream& s, const gate::Vector4D& ip){

  ip.info(s);
  return s;

}

#endif

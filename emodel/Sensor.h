#ifndef __Sensor_H__
#define __Sensor_H__

/**
 * @file Sensor.h
 *
 * @class Sensor
 * 
 * @brief Sensor paramters
 *
 * @details Contains run-wise sensor parameters, like type, gain, ...  
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date March 2015
 *
 * @ingroup emodel
 */

#include<GATE/BObject.h>
#include<GATE/Point3D.h>

namespace gate{
  
  class Sensor : public BObject {

  public:
    
    //! default constructor
    Sensor();

    //! default destructor
    virtual ~Sensor(){};
    
    //! set type
    void SetType(gate::SENSORTYPE t);
    
    //! get type
    gate::SENSORTYPE GetType() const;
    
    //! Set dead flag
    void SetDead(bool ok);

    //! check dead flag
    bool IsDead() const;
    
    //! get gain
    double GetGain() const;
    
    //! set gain
    void SetGain(double g);
    
    //! get gain sigma
    double GetGainSig() const;
    
    //! set gain sigma
    void SetGainSig(double s);

    //! get baseline
    double GetBaseline() const;
    
    //! set baseline
    void SetBaseline(double b);

    //! get baseline noise
    double GetBaselineSig() const;
    
    //! set baseline noise
    void SetBaselineSig(double s);
    
    //! get position
    gate::Point3D GetPosition() const;
    
    //! set position
    void SetPosition(gate::Point3D p);

    //! print sensor into stream
    void Info(std::ostream& s=std::cout) const;

 protected:
        
    //! sensor type
    SENSORTYPE _sType;

    //! flag dead sensor
    bool _dead;
    
    //! baseline mean
    double _bline;

    //! baseline noise (RMS or sigma?)
    double _blineSig;

    //! gain
    double _gain;

    //! gain sigma
    double _gainSig;
    
    //! position
    gate::Point3D _pos;

    ClassDef(Sensor,1)

  };
  
  
  inline void Sensor::SetType(gate::SENSORTYPE t){_sType=t;}
  inline SENSORTYPE Sensor::GetType()const{return _sType;}
    
  inline void Sensor::SetDead(bool ok){_dead=ok;}
  inline bool Sensor::IsDead() const {return _dead;}
    
  inline double Sensor::GetGain() const {return _gain;}
  inline void Sensor::SetGain(double g) {_gain = g;}
    
  inline double Sensor::GetGainSig() const {return _gainSig;}
  inline void Sensor::SetGainSig(double s){ _gainSig = s; }

  inline double Sensor::GetBaseline() const {return _bline;}
  inline void Sensor::SetBaseline(double b){ _bline = b;}

  inline double Sensor::GetBaselineSig() const {return _blineSig;}
  inline void Sensor::SetBaselineSig(double s){ _blineSig = s;}

  inline gate::Point3D Sensor::GetPosition() const {return _pos;}
  inline void Sensor::SetPosition(gate::Point3D p){ _pos = p;}
  
}// end of namespace gate

std::ostream& operator << (std::ostream& s, const gate::Sensor& sens); 

#endif

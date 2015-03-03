#ifndef __BObject_H__
#define __BObject_H__

/**
 * @file BObject.h
 *
 * @class BObject
 * 
 * @brief Basic class with common properties to all GATE event model objects
 *
 * @details Inherits from ParameterStore and defines common properties like ID, data type (Data, MC or MC-truth), ...
 *    
 * @author Pau Novella  <pau.novella@ific.uv.es>
 *
 * @version Revision 1.0.0
 *
 * @date February 2015
 *
 */

#include <iostream>

#include<TSystem.h>

#include<Environment.h>
#include<ParamStore.h>

namespace gate{class BObject;}

//class gate::BObject : public gate::ParamStore {
class gate::BObject {
  
 public:
  
  //! default contructor
 BObject() : _id(-1), _dType(gate::NODTYPE) {}

  //! default destructor
  virtual ~BObject(){}
 
 public:
  
  //! Get identifier
  int GetID() const;
  
  //! Set data type 
  void SetID(int id);
  
  //! Get data type 
  gate::DATATYPE GetDataType() const;
  
  //! Set data type 
  void SetDataType(gate::DATATYPE type);
  
  //! print info
  void Info(ostream& s) const;
 
  //! clear info
  void Clear();

  protected:
  
  //! identifier
  int _id;

  //! data type (MC-THUTH, MC or DATA)
  gate::DATATYPE _dType;

  ClassDef(gate::BObject,1)
    };

inline void gate::BObject::SetID(int id) { _id = id; }
inline int gate::BObject::GetID() const { return _id; }

inline void gate::BObject::SetDataType(gate::DATATYPE t) { _dType = t; }
inline gate::DATATYPE gate::BObject::GetDataType() const { return _dType; }

inline void gate::BObject::Clear(){_id = -1; _dType = gate::NODTYPE;}

ostream& operator << (ostream& s, const gate::BObject& obj); 

#endif

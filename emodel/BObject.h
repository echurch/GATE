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
 * @ingroup emodel
 */

#include <iostream>

#include <Rtypes.h>

#include <Environment.h>
#include <ParamStore.h>

namespace gate{class BObject;}

class gate::BObject : public gate::ParamStore {
  //class gate::BObject {
  
 public:
  
  //! default contructor
 
  //BObject() : ParamStore(),_id(-1), _dType(gate::NODTYPE) {}
 BObject() : ParamStore(),_id(-1), _label(""){}

  //! default destructor
  virtual ~BObject(){}
 
 public:
  
  //! Get identifier
  int GetID() const;
  
  //! Set data type 
  void SetID(int id);
  
  //! Get data type 
  //gate::DATATYPE GetDataType() const;
  
  //! Set data type 
  //void SetDataType(gate::DATATYPE type);
  
  //! Get label 
  std::string GetLabel() const;
  
  //! Set label (user's degree of freedom)  
  void SetLabel(std::string lab);

  //! print info
  virtual void Info(std::ostream& s=std::cout) const;

  //! convert object into string
  std::string ToString() const;
  
  //! clear info
  void Clear();

  protected:
  
  //! identifier
  int _id;

  //! data type (MC-THUTH, MC or DATA)
  //gate::DATATYPE _dType;
  
  //! user defined label
  std::string _label;

  ClassDef(gate::BObject,1)
    };

inline void gate::BObject::SetID(int id) { _id = id; }
inline int gate::BObject::GetID() const { return _id; }

inline void gate::BObject::SetLabel(std::string lab) { _label = lab; }
inline std::string gate::BObject::GetLabel() const { return _label;} 

std::ostream& operator << (std::ostream& s, const gate::BObject& obj); 

#endif

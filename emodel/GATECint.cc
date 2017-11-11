// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME GATECint

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "BHit.h"
#include "BObject.h"
#include "BParticle.h"
#include "BTrack.h"
#include "Cluster.h"
#include "Environment.h"
#include "Error.h"
#include "Event.h"
#include "Geometry.h"
#include "Hit.h"
#include "HitMap.h"
#include "MCHit.h"
#include "MCParticle.h"
#include "MCTrack.h"
#include "ParamStore.h"
#include "Particle.h"
#include "Point3D.h"
#include "Properties.h"
#include "Pulse.h"
#include "Run.h"
#include "Sensor.h"
#include "Signal.h"
#include "Track.h"
#include "Vector4D.h"
#include "Waveform.h"

// Header files passed via #pragma extra_include

namespace gate {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *gate_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("gate", 0 /*version*/, "Environment.h", 18,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &gate_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *gate_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static TClass *pairlEstringcOstringgR_Dictionary();
   static void pairlEstringcOstringgR_TClassManip(TClass*);
   static void *new_pairlEstringcOstringgR(void *p = 0);
   static void *newArray_pairlEstringcOstringgR(Long_t size, void *p);
   static void delete_pairlEstringcOstringgR(void *p);
   static void deleteArray_pairlEstringcOstringgR(void *p);
   static void destruct_pairlEstringcOstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<string,string>*)
   {
      pair<string,string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<string,string>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<string,string>", "utility", 253,
                  typeid(pair<string,string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEstringcOstringgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<string,string>) );
      instance.SetNew(&new_pairlEstringcOstringgR);
      instance.SetNewArray(&newArray_pairlEstringcOstringgR);
      instance.SetDelete(&delete_pairlEstringcOstringgR);
      instance.SetDeleteArray(&deleteArray_pairlEstringcOstringgR);
      instance.SetDestructor(&destruct_pairlEstringcOstringgR);

      ::ROOT::AddClassAlternate("pair<string,string>","pair<std::string,std::string>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<string,string>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEstringcOstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<string,string>*)0x0)->GetClass();
      pairlEstringcOstringgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEstringcOstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEstringcOvectorlEdoublegRsPgR_Dictionary();
   static void pairlEstringcOvectorlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_pairlEstringcOvectorlEdoublegRsPgR(void *p = 0);
   static void *newArray_pairlEstringcOvectorlEdoublegRsPgR(Long_t size, void *p);
   static void delete_pairlEstringcOvectorlEdoublegRsPgR(void *p);
   static void deleteArray_pairlEstringcOvectorlEdoublegRsPgR(void *p);
   static void destruct_pairlEstringcOvectorlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<string,vector<double> >*)
   {
      pair<string,vector<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<string,vector<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("pair<string,vector<double> >", "utility", 253,
                  typeid(pair<string,vector<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEstringcOvectorlEdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<string,vector<double> >) );
      instance.SetNew(&new_pairlEstringcOvectorlEdoublegRsPgR);
      instance.SetNewArray(&newArray_pairlEstringcOvectorlEdoublegRsPgR);
      instance.SetDelete(&delete_pairlEstringcOvectorlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_pairlEstringcOvectorlEdoublegRsPgR);
      instance.SetDestructor(&destruct_pairlEstringcOvectorlEdoublegRsPgR);

      ::ROOT::AddClassAlternate("pair<string,vector<double> >","pair<std::string,vector<double> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<string,vector<double> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEstringcOvectorlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<string,vector<double> >*)0x0)->GetClass();
      pairlEstringcOvectorlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEstringcOvectorlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEstringcOvectorlEintgRsPgR_Dictionary();
   static void pairlEstringcOvectorlEintgRsPgR_TClassManip(TClass*);
   static void *new_pairlEstringcOvectorlEintgRsPgR(void *p = 0);
   static void *newArray_pairlEstringcOvectorlEintgRsPgR(Long_t size, void *p);
   static void delete_pairlEstringcOvectorlEintgRsPgR(void *p);
   static void deleteArray_pairlEstringcOvectorlEintgRsPgR(void *p);
   static void destruct_pairlEstringcOvectorlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<string,vector<int> >*)
   {
      pair<string,vector<int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<string,vector<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("pair<string,vector<int> >", "utility", 253,
                  typeid(pair<string,vector<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEstringcOvectorlEintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<string,vector<int> >) );
      instance.SetNew(&new_pairlEstringcOvectorlEintgRsPgR);
      instance.SetNewArray(&newArray_pairlEstringcOvectorlEintgRsPgR);
      instance.SetDelete(&delete_pairlEstringcOvectorlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_pairlEstringcOvectorlEintgRsPgR);
      instance.SetDestructor(&destruct_pairlEstringcOvectorlEintgRsPgR);

      ::ROOT::AddClassAlternate("pair<string,vector<int> >","pair<std::string,vector<int> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<string,vector<int> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEstringcOvectorlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<string,vector<int> >*)0x0)->GetClass();
      pairlEstringcOvectorlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEstringcOvectorlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEstringcOvectorlEstringgRsPgR_Dictionary();
   static void pairlEstringcOvectorlEstringgRsPgR_TClassManip(TClass*);
   static void *new_pairlEstringcOvectorlEstringgRsPgR(void *p = 0);
   static void *newArray_pairlEstringcOvectorlEstringgRsPgR(Long_t size, void *p);
   static void delete_pairlEstringcOvectorlEstringgRsPgR(void *p);
   static void deleteArray_pairlEstringcOvectorlEstringgRsPgR(void *p);
   static void destruct_pairlEstringcOvectorlEstringgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<string,vector<string> >*)
   {
      pair<string,vector<string> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<string,vector<string> >));
      static ::ROOT::TGenericClassInfo 
         instance("pair<string,vector<string> >", "utility", 253,
                  typeid(pair<string,vector<string> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEstringcOvectorlEstringgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<string,vector<string> >) );
      instance.SetNew(&new_pairlEstringcOvectorlEstringgRsPgR);
      instance.SetNewArray(&newArray_pairlEstringcOvectorlEstringgRsPgR);
      instance.SetDelete(&delete_pairlEstringcOvectorlEstringgRsPgR);
      instance.SetDeleteArray(&deleteArray_pairlEstringcOvectorlEstringgRsPgR);
      instance.SetDestructor(&destruct_pairlEstringcOvectorlEstringgRsPgR);

      ::ROOT::AddClassAlternate("pair<string,vector<string> >","pair<std::string,vector<std::string> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<string,vector<string> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEstringcOvectorlEstringgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<string,vector<string> >*)0x0)->GetClass();
      pairlEstringcOvectorlEstringgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEstringcOvectorlEstringgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEgatecLcLBHitmUcOgatecLcLBHitmUgR_Dictionary();
   static void pairlEgatecLcLBHitmUcOgatecLcLBHitmUgR_TClassManip(TClass*);
   static void *new_pairlEgatecLcLBHitmUcOgatecLcLBHitmUgR(void *p = 0);
   static void *newArray_pairlEgatecLcLBHitmUcOgatecLcLBHitmUgR(Long_t size, void *p);
   static void delete_pairlEgatecLcLBHitmUcOgatecLcLBHitmUgR(void *p);
   static void deleteArray_pairlEgatecLcLBHitmUcOgatecLcLBHitmUgR(void *p);
   static void destruct_pairlEgatecLcLBHitmUcOgatecLcLBHitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<gate::BHit*,gate::BHit*>*)
   {
      pair<gate::BHit*,gate::BHit*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<gate::BHit*,gate::BHit*>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<gate::BHit*,gate::BHit*>", "utility", 253,
                  typeid(pair<gate::BHit*,gate::BHit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEgatecLcLBHitmUcOgatecLcLBHitmUgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<gate::BHit*,gate::BHit*>) );
      instance.SetNew(&new_pairlEgatecLcLBHitmUcOgatecLcLBHitmUgR);
      instance.SetNewArray(&newArray_pairlEgatecLcLBHitmUcOgatecLcLBHitmUgR);
      instance.SetDelete(&delete_pairlEgatecLcLBHitmUcOgatecLcLBHitmUgR);
      instance.SetDeleteArray(&deleteArray_pairlEgatecLcLBHitmUcOgatecLcLBHitmUgR);
      instance.SetDestructor(&destruct_pairlEgatecLcLBHitmUcOgatecLcLBHitmUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<gate::BHit*,gate::BHit*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEgatecLcLBHitmUcOgatecLcLBHitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<gate::BHit*,gate::BHit*>*)0x0)->GetClass();
      pairlEgatecLcLBHitmUcOgatecLcLBHitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEgatecLcLBHitmUcOgatecLcLBHitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEunsignedsPintcOfloatgR_Dictionary();
   static void pairlEunsignedsPintcOfloatgR_TClassManip(TClass*);
   static void *new_pairlEunsignedsPintcOfloatgR(void *p = 0);
   static void *newArray_pairlEunsignedsPintcOfloatgR(Long_t size, void *p);
   static void delete_pairlEunsignedsPintcOfloatgR(void *p);
   static void deleteArray_pairlEunsignedsPintcOfloatgR(void *p);
   static void destruct_pairlEunsignedsPintcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<unsigned int,float>*)
   {
      pair<unsigned int,float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<unsigned int,float>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<unsigned int,float>", "utility", 253,
                  typeid(pair<unsigned int,float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEunsignedsPintcOfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<unsigned int,float>) );
      instance.SetNew(&new_pairlEunsignedsPintcOfloatgR);
      instance.SetNewArray(&newArray_pairlEunsignedsPintcOfloatgR);
      instance.SetDelete(&delete_pairlEunsignedsPintcOfloatgR);
      instance.SetDeleteArray(&deleteArray_pairlEunsignedsPintcOfloatgR);
      instance.SetDestructor(&destruct_pairlEunsignedsPintcOfloatgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<unsigned int,float>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEunsignedsPintcOfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<unsigned int,float>*)0x0)->GetClass();
      pairlEunsignedsPintcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEunsignedsPintcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEgatecLcLSENSORTYPEcOgatecLcLHitmUgR_Dictionary();
   static void pairlEgatecLcLSENSORTYPEcOgatecLcLHitmUgR_TClassManip(TClass*);
   static void *new_pairlEgatecLcLSENSORTYPEcOgatecLcLHitmUgR(void *p = 0);
   static void *newArray_pairlEgatecLcLSENSORTYPEcOgatecLcLHitmUgR(Long_t size, void *p);
   static void delete_pairlEgatecLcLSENSORTYPEcOgatecLcLHitmUgR(void *p);
   static void deleteArray_pairlEgatecLcLSENSORTYPEcOgatecLcLHitmUgR(void *p);
   static void destruct_pairlEgatecLcLSENSORTYPEcOgatecLcLHitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<gate::SENSORTYPE,gate::Hit*>*)
   {
      pair<gate::SENSORTYPE,gate::Hit*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<gate::SENSORTYPE,gate::Hit*>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<gate::SENSORTYPE,gate::Hit*>", "utility", 253,
                  typeid(pair<gate::SENSORTYPE,gate::Hit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEgatecLcLSENSORTYPEcOgatecLcLHitmUgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<gate::SENSORTYPE,gate::Hit*>) );
      instance.SetNew(&new_pairlEgatecLcLSENSORTYPEcOgatecLcLHitmUgR);
      instance.SetNewArray(&newArray_pairlEgatecLcLSENSORTYPEcOgatecLcLHitmUgR);
      instance.SetDelete(&delete_pairlEgatecLcLSENSORTYPEcOgatecLcLHitmUgR);
      instance.SetDeleteArray(&deleteArray_pairlEgatecLcLSENSORTYPEcOgatecLcLHitmUgR);
      instance.SetDestructor(&destruct_pairlEgatecLcLSENSORTYPEcOgatecLcLHitmUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<gate::SENSORTYPE,gate::Hit*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEgatecLcLSENSORTYPEcOgatecLcLHitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<gate::SENSORTYPE,gate::Hit*>*)0x0)->GetClass();
      pairlEgatecLcLSENSORTYPEcOgatecLcLHitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEgatecLcLSENSORTYPEcOgatecLcLHitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR_Dictionary();
   static void pairlEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR_TClassManip(TClass*);
   static void *new_pairlEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR(void *p = 0);
   static void *newArray_pairlEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR(Long_t size, void *p);
   static void delete_pairlEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR(void *p);
   static void deleteArray_pairlEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR(void *p);
   static void destruct_pairlEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<gate::SENSORTYPE,gate::HitMap*>*)
   {
      pair<gate::SENSORTYPE,gate::HitMap*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<gate::SENSORTYPE,gate::HitMap*>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<gate::SENSORTYPE,gate::HitMap*>", "utility", 253,
                  typeid(pair<gate::SENSORTYPE,gate::HitMap*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<gate::SENSORTYPE,gate::HitMap*>) );
      instance.SetNew(&new_pairlEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR);
      instance.SetNewArray(&newArray_pairlEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR);
      instance.SetDelete(&delete_pairlEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR);
      instance.SetDeleteArray(&deleteArray_pairlEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR);
      instance.SetDestructor(&destruct_pairlEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<gate::SENSORTYPE,gate::HitMap*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<gate::SENSORTYPE,gate::HitMap*>*)0x0)->GetClass();
      pairlEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEgatecLcLSENSORTYPEcOgatecLcLClustermUgR_Dictionary();
   static void pairlEgatecLcLSENSORTYPEcOgatecLcLClustermUgR_TClassManip(TClass*);
   static void *new_pairlEgatecLcLSENSORTYPEcOgatecLcLClustermUgR(void *p = 0);
   static void *newArray_pairlEgatecLcLSENSORTYPEcOgatecLcLClustermUgR(Long_t size, void *p);
   static void delete_pairlEgatecLcLSENSORTYPEcOgatecLcLClustermUgR(void *p);
   static void deleteArray_pairlEgatecLcLSENSORTYPEcOgatecLcLClustermUgR(void *p);
   static void destruct_pairlEgatecLcLSENSORTYPEcOgatecLcLClustermUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<gate::SENSORTYPE,gate::Cluster*>*)
   {
      pair<gate::SENSORTYPE,gate::Cluster*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<gate::SENSORTYPE,gate::Cluster*>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<gate::SENSORTYPE,gate::Cluster*>", "utility", 253,
                  typeid(pair<gate::SENSORTYPE,gate::Cluster*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEgatecLcLSENSORTYPEcOgatecLcLClustermUgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<gate::SENSORTYPE,gate::Cluster*>) );
      instance.SetNew(&new_pairlEgatecLcLSENSORTYPEcOgatecLcLClustermUgR);
      instance.SetNewArray(&newArray_pairlEgatecLcLSENSORTYPEcOgatecLcLClustermUgR);
      instance.SetDelete(&delete_pairlEgatecLcLSENSORTYPEcOgatecLcLClustermUgR);
      instance.SetDeleteArray(&deleteArray_pairlEgatecLcLSENSORTYPEcOgatecLcLClustermUgR);
      instance.SetDestructor(&destruct_pairlEgatecLcLSENSORTYPEcOgatecLcLClustermUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<gate::SENSORTYPE,gate::Cluster*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEgatecLcLSENSORTYPEcOgatecLcLClustermUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<gate::SENSORTYPE,gate::Cluster*>*)0x0)->GetClass();
      pairlEgatecLcLSENSORTYPEcOgatecLcLClustermUgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEgatecLcLSENSORTYPEcOgatecLcLClustermUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR_Dictionary();
   static void pairlEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR_TClassManip(TClass*);
   static void *new_pairlEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR(void *p = 0);
   static void *newArray_pairlEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR(Long_t size, void *p);
   static void delete_pairlEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR(void *p);
   static void deleteArray_pairlEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR(void *p);
   static void destruct_pairlEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<gate::SENSORTYPE,gate::Track*>*)
   {
      pair<gate::SENSORTYPE,gate::Track*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<gate::SENSORTYPE,gate::Track*>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<gate::SENSORTYPE,gate::Track*>", "utility", 253,
                  typeid(pair<gate::SENSORTYPE,gate::Track*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<gate::SENSORTYPE,gate::Track*>) );
      instance.SetNew(&new_pairlEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR);
      instance.SetNewArray(&newArray_pairlEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR);
      instance.SetDelete(&delete_pairlEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR);
      instance.SetDeleteArray(&deleteArray_pairlEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR);
      instance.SetDestructor(&destruct_pairlEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<gate::SENSORTYPE,gate::Track*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<gate::SENSORTYPE,gate::Track*>*)0x0)->GetClass();
      pairlEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEintcOgatecLcLSensormUgR_Dictionary();
   static void pairlEintcOgatecLcLSensormUgR_TClassManip(TClass*);
   static void *new_pairlEintcOgatecLcLSensormUgR(void *p = 0);
   static void *newArray_pairlEintcOgatecLcLSensormUgR(Long_t size, void *p);
   static void delete_pairlEintcOgatecLcLSensormUgR(void *p);
   static void deleteArray_pairlEintcOgatecLcLSensormUgR(void *p);
   static void destruct_pairlEintcOgatecLcLSensormUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<int,gate::Sensor*>*)
   {
      pair<int,gate::Sensor*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<int,gate::Sensor*>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<int,gate::Sensor*>", "utility", 253,
                  typeid(pair<int,gate::Sensor*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEintcOgatecLcLSensormUgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<int,gate::Sensor*>) );
      instance.SetNew(&new_pairlEintcOgatecLcLSensormUgR);
      instance.SetNewArray(&newArray_pairlEintcOgatecLcLSensormUgR);
      instance.SetDelete(&delete_pairlEintcOgatecLcLSensormUgR);
      instance.SetDeleteArray(&deleteArray_pairlEintcOgatecLcLSensormUgR);
      instance.SetDestructor(&destruct_pairlEintcOgatecLcLSensormUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<int,gate::Sensor*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEintcOgatecLcLSensormUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<int,gate::Sensor*>*)0x0)->GetClass();
      pairlEintcOgatecLcLSensormUgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEintcOgatecLcLSensormUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *__map_iteratorlE__tree_iteratorlE__value_typelEintcOgatecLcLSensormUgRcO__tree_nodelE__value_typelEintcOgatecLcLSensormUgRcOvoidmUgRmUcOlonggRsPgR_Dictionary();
   static void __map_iteratorlE__tree_iteratorlE__value_typelEintcOgatecLcLSensormUgRcO__tree_nodelE__value_typelEintcOgatecLcLSensormUgRcOvoidmUgRmUcOlonggRsPgR_TClassManip(TClass*);
   static void *new___map_iteratorlE__tree_iteratorlE__value_typelEintcOgatecLcLSensormUgRcO__tree_nodelE__value_typelEintcOgatecLcLSensormUgRcOvoidmUgRmUcOlonggRsPgR(void *p = 0);
   static void *newArray___map_iteratorlE__tree_iteratorlE__value_typelEintcOgatecLcLSensormUgRcO__tree_nodelE__value_typelEintcOgatecLcLSensormUgRcOvoidmUgRmUcOlonggRsPgR(Long_t size, void *p);
   static void delete___map_iteratorlE__tree_iteratorlE__value_typelEintcOgatecLcLSensormUgRcO__tree_nodelE__value_typelEintcOgatecLcLSensormUgRcOvoidmUgRmUcOlonggRsPgR(void *p);
   static void deleteArray___map_iteratorlE__tree_iteratorlE__value_typelEintcOgatecLcLSensormUgRcO__tree_nodelE__value_typelEintcOgatecLcLSensormUgRcOvoidmUgRmUcOlonggRsPgR(void *p);
   static void destruct___map_iteratorlE__tree_iteratorlE__value_typelEintcOgatecLcLSensormUgRcO__tree_nodelE__value_typelEintcOgatecLcLSensormUgRcOvoidmUgRmUcOlonggRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::__map_iterator<__tree_iterator<__value_type<int,gate::Sensor*>,__tree_node<__value_type<int,gate::Sensor*>,void*>*,long> >*)
   {
      ::__map_iterator<__tree_iterator<__value_type<int,gate::Sensor*>,__tree_node<__value_type<int,gate::Sensor*>,void*>*,long> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::__map_iterator<__tree_iterator<__value_type<int,gate::Sensor*>,__tree_node<__value_type<int,gate::Sensor*>,void*>*,long> >));
      static ::ROOT::TGenericClassInfo 
         instance("__map_iterator<__tree_iterator<__value_type<int,gate::Sensor*>,__tree_node<__value_type<int,gate::Sensor*>,void*>*,long> >", "map", 685,
                  typeid(::__map_iterator<__tree_iterator<__value_type<int,gate::Sensor*>,__tree_node<__value_type<int,gate::Sensor*>,void*>*,long> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &__map_iteratorlE__tree_iteratorlE__value_typelEintcOgatecLcLSensormUgRcO__tree_nodelE__value_typelEintcOgatecLcLSensormUgRcOvoidmUgRmUcOlonggRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::__map_iterator<__tree_iterator<__value_type<int,gate::Sensor*>,__tree_node<__value_type<int,gate::Sensor*>,void*>*,long> >) );
      instance.SetNew(&new___map_iteratorlE__tree_iteratorlE__value_typelEintcOgatecLcLSensormUgRcO__tree_nodelE__value_typelEintcOgatecLcLSensormUgRcOvoidmUgRmUcOlonggRsPgR);
      instance.SetNewArray(&newArray___map_iteratorlE__tree_iteratorlE__value_typelEintcOgatecLcLSensormUgRcO__tree_nodelE__value_typelEintcOgatecLcLSensormUgRcOvoidmUgRmUcOlonggRsPgR);
      instance.SetDelete(&delete___map_iteratorlE__tree_iteratorlE__value_typelEintcOgatecLcLSensormUgRcO__tree_nodelE__value_typelEintcOgatecLcLSensormUgRcOvoidmUgRmUcOlonggRsPgR);
      instance.SetDeleteArray(&deleteArray___map_iteratorlE__tree_iteratorlE__value_typelEintcOgatecLcLSensormUgRcO__tree_nodelE__value_typelEintcOgatecLcLSensormUgRcOvoidmUgRmUcOlonggRsPgR);
      instance.SetDestructor(&destruct___map_iteratorlE__tree_iteratorlE__value_typelEintcOgatecLcLSensormUgRcO__tree_nodelE__value_typelEintcOgatecLcLSensormUgRcOvoidmUgRmUcOlonggRsPgR);

      ::ROOT::AddClassAlternate("__map_iterator<__tree_iterator<__value_type<int,gate::Sensor*>,__tree_node<__value_type<int,gate::Sensor*>,void*>*,long> >","map<int,gate::Sensor*>::iterator");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::__map_iterator<__tree_iterator<__value_type<int,gate::Sensor*>,__tree_node<__value_type<int,gate::Sensor*>,void*>*,long> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *__map_iteratorlE__tree_iteratorlE__value_typelEintcOgatecLcLSensormUgRcO__tree_nodelE__value_typelEintcOgatecLcLSensormUgRcOvoidmUgRmUcOlonggRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::__map_iterator<__tree_iterator<__value_type<int,gate::Sensor*>,__tree_node<__value_type<int,gate::Sensor*>,void*>*,long> >*)0x0)->GetClass();
      __map_iteratorlE__tree_iteratorlE__value_typelEintcOgatecLcLSensormUgRcO__tree_nodelE__value_typelEintcOgatecLcLSensormUgRcOvoidmUgRmUcOlonggRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void __map_iteratorlE__tree_iteratorlE__value_typelEintcOgatecLcLSensormUgRcO__tree_nodelE__value_typelEintcOgatecLcLSensormUgRcOvoidmUgRmUcOlonggRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *gatecLcLtstorelEintgR_Dictionary();
   static void gatecLcLtstorelEintgR_TClassManip(TClass*);
   static void *new_gatecLcLtstorelEintgR(void *p = 0);
   static void *newArray_gatecLcLtstorelEintgR(Long_t size, void *p);
   static void delete_gatecLcLtstorelEintgR(void *p);
   static void deleteArray_gatecLcLtstorelEintgR(void *p);
   static void destruct_gatecLcLtstorelEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::tstore<int>*)
   {
      ::gate::tstore<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::tstore<int> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::tstore<int>", ::gate::tstore<int>::Class_Version(), "ParamStore.h", 49,
                  typeid(::gate::tstore<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &gatecLcLtstorelEintgR_Dictionary, isa_proxy, 4,
                  sizeof(::gate::tstore<int>) );
      instance.SetNew(&new_gatecLcLtstorelEintgR);
      instance.SetNewArray(&newArray_gatecLcLtstorelEintgR);
      instance.SetDelete(&delete_gatecLcLtstorelEintgR);
      instance.SetDeleteArray(&deleteArray_gatecLcLtstorelEintgR);
      instance.SetDestructor(&destruct_gatecLcLtstorelEintgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::tstore<int>*)
   {
      return GenerateInitInstanceLocal((::gate::tstore<int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::tstore<int>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *gatecLcLtstorelEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<int>*)0x0)->GetClass();
      gatecLcLtstorelEintgR_TClassManip(theClass);
   return theClass;
   }

   static void gatecLcLtstorelEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *gatecLcLtstorelEdoublegR_Dictionary();
   static void gatecLcLtstorelEdoublegR_TClassManip(TClass*);
   static void *new_gatecLcLtstorelEdoublegR(void *p = 0);
   static void *newArray_gatecLcLtstorelEdoublegR(Long_t size, void *p);
   static void delete_gatecLcLtstorelEdoublegR(void *p);
   static void deleteArray_gatecLcLtstorelEdoublegR(void *p);
   static void destruct_gatecLcLtstorelEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::tstore<double>*)
   {
      ::gate::tstore<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::tstore<double> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::tstore<double>", ::gate::tstore<double>::Class_Version(), "ParamStore.h", 49,
                  typeid(::gate::tstore<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &gatecLcLtstorelEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::gate::tstore<double>) );
      instance.SetNew(&new_gatecLcLtstorelEdoublegR);
      instance.SetNewArray(&newArray_gatecLcLtstorelEdoublegR);
      instance.SetDelete(&delete_gatecLcLtstorelEdoublegR);
      instance.SetDeleteArray(&deleteArray_gatecLcLtstorelEdoublegR);
      instance.SetDestructor(&destruct_gatecLcLtstorelEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::tstore<double>*)
   {
      return GenerateInitInstanceLocal((::gate::tstore<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::tstore<double>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *gatecLcLtstorelEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<double>*)0x0)->GetClass();
      gatecLcLtstorelEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void gatecLcLtstorelEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *gatecLcLtstorelEstringgR_Dictionary();
   static void gatecLcLtstorelEstringgR_TClassManip(TClass*);
   static void *new_gatecLcLtstorelEstringgR(void *p = 0);
   static void *newArray_gatecLcLtstorelEstringgR(Long_t size, void *p);
   static void delete_gatecLcLtstorelEstringgR(void *p);
   static void deleteArray_gatecLcLtstorelEstringgR(void *p);
   static void destruct_gatecLcLtstorelEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::tstore<string>*)
   {
      ::gate::tstore<string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::tstore<string> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::tstore<string>", ::gate::tstore<string>::Class_Version(), "ParamStore.h", 49,
                  typeid(::gate::tstore<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &gatecLcLtstorelEstringgR_Dictionary, isa_proxy, 4,
                  sizeof(::gate::tstore<string>) );
      instance.SetNew(&new_gatecLcLtstorelEstringgR);
      instance.SetNewArray(&newArray_gatecLcLtstorelEstringgR);
      instance.SetDelete(&delete_gatecLcLtstorelEstringgR);
      instance.SetDeleteArray(&deleteArray_gatecLcLtstorelEstringgR);
      instance.SetDestructor(&destruct_gatecLcLtstorelEstringgR);

      ::ROOT::AddClassAlternate("gate::tstore<string>","gate::tstore<std::string>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::tstore<string>*)
   {
      return GenerateInitInstanceLocal((::gate::tstore<string>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::tstore<string>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *gatecLcLtstorelEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<string>*)0x0)->GetClass();
      gatecLcLtstorelEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void gatecLcLtstorelEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *gatecLcLtstorelEvectorlEdoublegRsPgR_Dictionary();
   static void gatecLcLtstorelEvectorlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_gatecLcLtstorelEvectorlEdoublegRsPgR(void *p = 0);
   static void *newArray_gatecLcLtstorelEvectorlEdoublegRsPgR(Long_t size, void *p);
   static void delete_gatecLcLtstorelEvectorlEdoublegRsPgR(void *p);
   static void deleteArray_gatecLcLtstorelEvectorlEdoublegRsPgR(void *p);
   static void destruct_gatecLcLtstorelEvectorlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::tstore<vector<double> >*)
   {
      ::gate::tstore<vector<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::tstore<vector<double> > >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::tstore<vector<double> >", ::gate::tstore<vector<double> >::Class_Version(), "ParamStore.h", 49,
                  typeid(::gate::tstore<vector<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &gatecLcLtstorelEvectorlEdoublegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::gate::tstore<vector<double> >) );
      instance.SetNew(&new_gatecLcLtstorelEvectorlEdoublegRsPgR);
      instance.SetNewArray(&newArray_gatecLcLtstorelEvectorlEdoublegRsPgR);
      instance.SetDelete(&delete_gatecLcLtstorelEvectorlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_gatecLcLtstorelEvectorlEdoublegRsPgR);
      instance.SetDestructor(&destruct_gatecLcLtstorelEvectorlEdoublegRsPgR);

      ::ROOT::AddClassAlternate("gate::tstore<vector<double> >","gate::tstore<std::vector<double> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::tstore<vector<double> >*)
   {
      return GenerateInitInstanceLocal((::gate::tstore<vector<double> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::tstore<vector<double> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *gatecLcLtstorelEvectorlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<vector<double> >*)0x0)->GetClass();
      gatecLcLtstorelEvectorlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void gatecLcLtstorelEvectorlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *gatecLcLtstorelEvectorlEintgRsPgR_Dictionary();
   static void gatecLcLtstorelEvectorlEintgRsPgR_TClassManip(TClass*);
   static void *new_gatecLcLtstorelEvectorlEintgRsPgR(void *p = 0);
   static void *newArray_gatecLcLtstorelEvectorlEintgRsPgR(Long_t size, void *p);
   static void delete_gatecLcLtstorelEvectorlEintgRsPgR(void *p);
   static void deleteArray_gatecLcLtstorelEvectorlEintgRsPgR(void *p);
   static void destruct_gatecLcLtstorelEvectorlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::tstore<vector<int> >*)
   {
      ::gate::tstore<vector<int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::tstore<vector<int> > >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::tstore<vector<int> >", ::gate::tstore<vector<int> >::Class_Version(), "ParamStore.h", 49,
                  typeid(::gate::tstore<vector<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &gatecLcLtstorelEvectorlEintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::gate::tstore<vector<int> >) );
      instance.SetNew(&new_gatecLcLtstorelEvectorlEintgRsPgR);
      instance.SetNewArray(&newArray_gatecLcLtstorelEvectorlEintgRsPgR);
      instance.SetDelete(&delete_gatecLcLtstorelEvectorlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_gatecLcLtstorelEvectorlEintgRsPgR);
      instance.SetDestructor(&destruct_gatecLcLtstorelEvectorlEintgRsPgR);

      ::ROOT::AddClassAlternate("gate::tstore<vector<int> >","gate::tstore<std::vector<int> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::tstore<vector<int> >*)
   {
      return GenerateInitInstanceLocal((::gate::tstore<vector<int> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::tstore<vector<int> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *gatecLcLtstorelEvectorlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<vector<int> >*)0x0)->GetClass();
      gatecLcLtstorelEvectorlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void gatecLcLtstorelEvectorlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *gatecLcLtstorelEvectorlEstringgRsPgR_Dictionary();
   static void gatecLcLtstorelEvectorlEstringgRsPgR_TClassManip(TClass*);
   static void *new_gatecLcLtstorelEvectorlEstringgRsPgR(void *p = 0);
   static void *newArray_gatecLcLtstorelEvectorlEstringgRsPgR(Long_t size, void *p);
   static void delete_gatecLcLtstorelEvectorlEstringgRsPgR(void *p);
   static void deleteArray_gatecLcLtstorelEvectorlEstringgRsPgR(void *p);
   static void destruct_gatecLcLtstorelEvectorlEstringgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::tstore<vector<string> >*)
   {
      ::gate::tstore<vector<string> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::tstore<vector<string> > >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::tstore<vector<string> >", ::gate::tstore<vector<string> >::Class_Version(), "ParamStore.h", 49,
                  typeid(::gate::tstore<vector<string> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &gatecLcLtstorelEvectorlEstringgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::gate::tstore<vector<string> >) );
      instance.SetNew(&new_gatecLcLtstorelEvectorlEstringgRsPgR);
      instance.SetNewArray(&newArray_gatecLcLtstorelEvectorlEstringgRsPgR);
      instance.SetDelete(&delete_gatecLcLtstorelEvectorlEstringgRsPgR);
      instance.SetDeleteArray(&deleteArray_gatecLcLtstorelEvectorlEstringgRsPgR);
      instance.SetDestructor(&destruct_gatecLcLtstorelEvectorlEstringgRsPgR);

      ::ROOT::AddClassAlternate("gate::tstore<vector<string> >","gate::tstore<std::vector<std::string> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::tstore<vector<string> >*)
   {
      return GenerateInitInstanceLocal((::gate::tstore<vector<string> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::tstore<vector<string> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *gatecLcLtstorelEvectorlEstringgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<vector<string> >*)0x0)->GetClass();
      gatecLcLtstorelEvectorlEstringgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void gatecLcLtstorelEvectorlEstringgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *gatecLcLtstorelEvectorlETObjectgRsPgR_Dictionary();
   static void gatecLcLtstorelEvectorlETObjectgRsPgR_TClassManip(TClass*);
   static void *new_gatecLcLtstorelEvectorlETObjectgRsPgR(void *p = 0);
   static void *newArray_gatecLcLtstorelEvectorlETObjectgRsPgR(Long_t size, void *p);
   static void delete_gatecLcLtstorelEvectorlETObjectgRsPgR(void *p);
   static void deleteArray_gatecLcLtstorelEvectorlETObjectgRsPgR(void *p);
   static void destruct_gatecLcLtstorelEvectorlETObjectgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::tstore<vector<TObject> >*)
   {
      ::gate::tstore<vector<TObject> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::tstore<vector<TObject> > >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::tstore<vector<TObject> >", ::gate::tstore<vector<TObject> >::Class_Version(), "ParamStore.h", 49,
                  typeid(::gate::tstore<vector<TObject> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &gatecLcLtstorelEvectorlETObjectgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::gate::tstore<vector<TObject> >) );
      instance.SetNew(&new_gatecLcLtstorelEvectorlETObjectgRsPgR);
      instance.SetNewArray(&newArray_gatecLcLtstorelEvectorlETObjectgRsPgR);
      instance.SetDelete(&delete_gatecLcLtstorelEvectorlETObjectgRsPgR);
      instance.SetDeleteArray(&deleteArray_gatecLcLtstorelEvectorlETObjectgRsPgR);
      instance.SetDestructor(&destruct_gatecLcLtstorelEvectorlETObjectgRsPgR);

      ::ROOT::AddClassAlternate("gate::tstore<vector<TObject> >","gate::tstore<std::vector<TObject> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::tstore<vector<TObject> >*)
   {
      return GenerateInitInstanceLocal((::gate::tstore<vector<TObject> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::tstore<vector<TObject> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *gatecLcLtstorelEvectorlETObjectgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<vector<TObject> >*)0x0)->GetClass();
      gatecLcLtstorelEvectorlETObjectgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void gatecLcLtstorelEvectorlETObjectgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *gatecLcLtstorelETObjectgR_Dictionary();
   static void gatecLcLtstorelETObjectgR_TClassManip(TClass*);
   static void *new_gatecLcLtstorelETObjectgR(void *p = 0);
   static void *newArray_gatecLcLtstorelETObjectgR(Long_t size, void *p);
   static void delete_gatecLcLtstorelETObjectgR(void *p);
   static void deleteArray_gatecLcLtstorelETObjectgR(void *p);
   static void destruct_gatecLcLtstorelETObjectgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::tstore<TObject>*)
   {
      ::gate::tstore<TObject> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::tstore<TObject> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::tstore<TObject>", ::gate::tstore<TObject>::Class_Version(), "ParamStore.h", 49,
                  typeid(::gate::tstore<TObject>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &gatecLcLtstorelETObjectgR_Dictionary, isa_proxy, 4,
                  sizeof(::gate::tstore<TObject>) );
      instance.SetNew(&new_gatecLcLtstorelETObjectgR);
      instance.SetNewArray(&newArray_gatecLcLtstorelETObjectgR);
      instance.SetDelete(&delete_gatecLcLtstorelETObjectgR);
      instance.SetDeleteArray(&deleteArray_gatecLcLtstorelETObjectgR);
      instance.SetDestructor(&destruct_gatecLcLtstorelETObjectgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::tstore<TObject>*)
   {
      return GenerateInitInstanceLocal((::gate::tstore<TObject>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::tstore<TObject>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *gatecLcLtstorelETObjectgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<TObject>*)0x0)->GetClass();
      gatecLcLtstorelETObjectgR_TClassManip(theClass);
   return theClass;
   }

   static void gatecLcLtstorelETObjectgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLParamStore(void *p = 0);
   static void *newArray_gatecLcLParamStore(Long_t size, void *p);
   static void delete_gatecLcLParamStore(void *p);
   static void deleteArray_gatecLcLParamStore(void *p);
   static void destruct_gatecLcLParamStore(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::ParamStore*)
   {
      ::gate::ParamStore *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::ParamStore >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::ParamStore", ::gate::ParamStore::Class_Version(), "ParamStore.h", 221,
                  typeid(::gate::ParamStore), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::ParamStore::Dictionary, isa_proxy, 4,
                  sizeof(::gate::ParamStore) );
      instance.SetNew(&new_gatecLcLParamStore);
      instance.SetNewArray(&newArray_gatecLcLParamStore);
      instance.SetDelete(&delete_gatecLcLParamStore);
      instance.SetDeleteArray(&deleteArray_gatecLcLParamStore);
      instance.SetDestructor(&destruct_gatecLcLParamStore);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::ParamStore*)
   {
      return GenerateInitInstanceLocal((::gate::ParamStore*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::ParamStore*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLBObject(void *p = 0);
   static void *newArray_gatecLcLBObject(Long_t size, void *p);
   static void delete_gatecLcLBObject(void *p);
   static void deleteArray_gatecLcLBObject(void *p);
   static void destruct_gatecLcLBObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::BObject*)
   {
      ::gate::BObject *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::BObject >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::BObject", ::gate::BObject::Class_Version(), "BObject.h", 31,
                  typeid(::gate::BObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::BObject::Dictionary, isa_proxy, 4,
                  sizeof(::gate::BObject) );
      instance.SetNew(&new_gatecLcLBObject);
      instance.SetNewArray(&newArray_gatecLcLBObject);
      instance.SetDelete(&delete_gatecLcLBObject);
      instance.SetDeleteArray(&deleteArray_gatecLcLBObject);
      instance.SetDestructor(&destruct_gatecLcLBObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::BObject*)
   {
      return GenerateInitInstanceLocal((::gate::BObject*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::BObject*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLPoint3D(void *p = 0);
   static void *newArray_gatecLcLPoint3D(Long_t size, void *p);
   static void delete_gatecLcLPoint3D(void *p);
   static void deleteArray_gatecLcLPoint3D(void *p);
   static void destruct_gatecLcLPoint3D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::Point3D*)
   {
      ::gate::Point3D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::Point3D >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::Point3D", ::gate::Point3D::Class_Version(), "Point3D.h", 30,
                  typeid(::gate::Point3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::Point3D::Dictionary, isa_proxy, 4,
                  sizeof(::gate::Point3D) );
      instance.SetNew(&new_gatecLcLPoint3D);
      instance.SetNewArray(&newArray_gatecLcLPoint3D);
      instance.SetDelete(&delete_gatecLcLPoint3D);
      instance.SetDeleteArray(&deleteArray_gatecLcLPoint3D);
      instance.SetDestructor(&destruct_gatecLcLPoint3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::Point3D*)
   {
      return GenerateInitInstanceLocal((::gate::Point3D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::Point3D*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLBHit(void *p = 0);
   static void *newArray_gatecLcLBHit(Long_t size, void *p);
   static void delete_gatecLcLBHit(void *p);
   static void deleteArray_gatecLcLBHit(void *p);
   static void destruct_gatecLcLBHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::BHit*)
   {
      ::gate::BHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::BHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::BHit", ::gate::BHit::Class_Version(), "BHit.h", 29,
                  typeid(::gate::BHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::BHit::Dictionary, isa_proxy, 4,
                  sizeof(::gate::BHit) );
      instance.SetNew(&new_gatecLcLBHit);
      instance.SetNewArray(&newArray_gatecLcLBHit);
      instance.SetDelete(&delete_gatecLcLBHit);
      instance.SetDeleteArray(&deleteArray_gatecLcLBHit);
      instance.SetDestructor(&destruct_gatecLcLBHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::BHit*)
   {
      return GenerateInitInstanceLocal((::gate::BHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::BHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLVector4D(void *p = 0);
   static void *newArray_gatecLcLVector4D(Long_t size, void *p);
   static void delete_gatecLcLVector4D(void *p);
   static void deleteArray_gatecLcLVector4D(void *p);
   static void destruct_gatecLcLVector4D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::Vector4D*)
   {
      ::gate::Vector4D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::Vector4D >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::Vector4D", ::gate::Vector4D::Class_Version(), "Vector4D.h", 32,
                  typeid(::gate::Vector4D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::Vector4D::Dictionary, isa_proxy, 4,
                  sizeof(::gate::Vector4D) );
      instance.SetNew(&new_gatecLcLVector4D);
      instance.SetNewArray(&newArray_gatecLcLVector4D);
      instance.SetDelete(&delete_gatecLcLVector4D);
      instance.SetDeleteArray(&deleteArray_gatecLcLVector4D);
      instance.SetDestructor(&destruct_gatecLcLVector4D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::Vector4D*)
   {
      return GenerateInitInstanceLocal((::gate::Vector4D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::Vector4D*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLBTrack(void *p = 0);
   static void *newArray_gatecLcLBTrack(Long_t size, void *p);
   static void delete_gatecLcLBTrack(void *p);
   static void deleteArray_gatecLcLBTrack(void *p);
   static void destruct_gatecLcLBTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::BTrack*)
   {
      ::gate::BTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::BTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::BTrack", ::gate::BTrack::Class_Version(), "BTrack.h", 26,
                  typeid(::gate::BTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::BTrack::Dictionary, isa_proxy, 4,
                  sizeof(::gate::BTrack) );
      instance.SetNew(&new_gatecLcLBTrack);
      instance.SetNewArray(&newArray_gatecLcLBTrack);
      instance.SetDelete(&delete_gatecLcLBTrack);
      instance.SetDeleteArray(&deleteArray_gatecLcLBTrack);
      instance.SetDestructor(&destruct_gatecLcLBTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::BTrack*)
   {
      return GenerateInitInstanceLocal((::gate::BTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::BTrack*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLBParticle(void *p = 0);
   static void *newArray_gatecLcLBParticle(Long_t size, void *p);
   static void delete_gatecLcLBParticle(void *p);
   static void deleteArray_gatecLcLBParticle(void *p);
   static void destruct_gatecLcLBParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::BParticle*)
   {
      ::gate::BParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::BParticle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::BParticle", ::gate::BParticle::Class_Version(), "BParticle.h", 29,
                  typeid(::gate::BParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::BParticle::Dictionary, isa_proxy, 4,
                  sizeof(::gate::BParticle) );
      instance.SetNew(&new_gatecLcLBParticle);
      instance.SetNewArray(&newArray_gatecLcLBParticle);
      instance.SetDelete(&delete_gatecLcLBParticle);
      instance.SetDeleteArray(&deleteArray_gatecLcLBParticle);
      instance.SetDestructor(&destruct_gatecLcLBParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::BParticle*)
   {
      return GenerateInitInstanceLocal((::gate::BParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::BParticle*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLWaveform(void *p = 0);
   static void *newArray_gatecLcLWaveform(Long_t size, void *p);
   static void delete_gatecLcLWaveform(void *p);
   static void deleteArray_gatecLcLWaveform(void *p);
   static void destruct_gatecLcLWaveform(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::Waveform*)
   {
      ::gate::Waveform *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::Waveform >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::Waveform", ::gate::Waveform::Class_Version(), "Waveform.h", 29,
                  typeid(::gate::Waveform), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::Waveform::Dictionary, isa_proxy, 4,
                  sizeof(::gate::Waveform) );
      instance.SetNew(&new_gatecLcLWaveform);
      instance.SetNewArray(&newArray_gatecLcLWaveform);
      instance.SetDelete(&delete_gatecLcLWaveform);
      instance.SetDeleteArray(&deleteArray_gatecLcLWaveform);
      instance.SetDestructor(&destruct_gatecLcLWaveform);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::Waveform*)
   {
      return GenerateInitInstanceLocal((::gate::Waveform*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::Waveform*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLPulse(void *p = 0);
   static void *newArray_gatecLcLPulse(Long_t size, void *p);
   static void delete_gatecLcLPulse(void *p);
   static void deleteArray_gatecLcLPulse(void *p);
   static void destruct_gatecLcLPulse(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::Pulse*)
   {
      ::gate::Pulse *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::Pulse >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::Pulse", ::gate::Pulse::Class_Version(), "Pulse.h", 30,
                  typeid(::gate::Pulse), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::Pulse::Dictionary, isa_proxy, 4,
                  sizeof(::gate::Pulse) );
      instance.SetNew(&new_gatecLcLPulse);
      instance.SetNewArray(&newArray_gatecLcLPulse);
      instance.SetDelete(&delete_gatecLcLPulse);
      instance.SetDeleteArray(&deleteArray_gatecLcLPulse);
      instance.SetDestructor(&destruct_gatecLcLPulse);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::Pulse*)
   {
      return GenerateInitInstanceLocal((::gate::Pulse*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::Pulse*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLHit(void *p = 0);
   static void *newArray_gatecLcLHit(Long_t size, void *p);
   static void delete_gatecLcLHit(void *p);
   static void deleteArray_gatecLcLHit(void *p);
   static void destruct_gatecLcLHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::Hit*)
   {
      ::gate::Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::Hit", ::gate::Hit::Class_Version(), "Hit.h", 28,
                  typeid(::gate::Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::Hit::Dictionary, isa_proxy, 4,
                  sizeof(::gate::Hit) );
      instance.SetNew(&new_gatecLcLHit);
      instance.SetNewArray(&newArray_gatecLcLHit);
      instance.SetDelete(&delete_gatecLcLHit);
      instance.SetDeleteArray(&deleteArray_gatecLcLHit);
      instance.SetDestructor(&destruct_gatecLcLHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::Hit*)
   {
      return GenerateInitInstanceLocal((::gate::Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::Hit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLCluster(void *p = 0);
   static void *newArray_gatecLcLCluster(Long_t size, void *p);
   static void delete_gatecLcLCluster(void *p);
   static void deleteArray_gatecLcLCluster(void *p);
   static void destruct_gatecLcLCluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::Cluster*)
   {
      ::gate::Cluster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::Cluster >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::Cluster", ::gate::Cluster::Class_Version(), "Cluster.h", 28,
                  typeid(::gate::Cluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::Cluster::Dictionary, isa_proxy, 4,
                  sizeof(::gate::Cluster) );
      instance.SetNew(&new_gatecLcLCluster);
      instance.SetNewArray(&newArray_gatecLcLCluster);
      instance.SetDelete(&delete_gatecLcLCluster);
      instance.SetDeleteArray(&deleteArray_gatecLcLCluster);
      instance.SetDestructor(&destruct_gatecLcLCluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::Cluster*)
   {
      return GenerateInitInstanceLocal((::gate::Cluster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::Cluster*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLHitMap(void *p = 0);
   static void *newArray_gatecLcLHitMap(Long_t size, void *p);
   static void delete_gatecLcLHitMap(void *p);
   static void deleteArray_gatecLcLHitMap(void *p);
   static void destruct_gatecLcLHitMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::HitMap*)
   {
      ::gate::HitMap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::HitMap >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::HitMap", ::gate::HitMap::Class_Version(), "HitMap.h", 26,
                  typeid(::gate::HitMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::HitMap::Dictionary, isa_proxy, 4,
                  sizeof(::gate::HitMap) );
      instance.SetNew(&new_gatecLcLHitMap);
      instance.SetNewArray(&newArray_gatecLcLHitMap);
      instance.SetDelete(&delete_gatecLcLHitMap);
      instance.SetDeleteArray(&deleteArray_gatecLcLHitMap);
      instance.SetDestructor(&destruct_gatecLcLHitMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::HitMap*)
   {
      return GenerateInitInstanceLocal((::gate::HitMap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::HitMap*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLSignal(void *p = 0);
   static void *newArray_gatecLcLSignal(Long_t size, void *p);
   static void delete_gatecLcLSignal(void *p);
   static void deleteArray_gatecLcLSignal(void *p);
   static void destruct_gatecLcLSignal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::Signal*)
   {
      ::gate::Signal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::Signal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::Signal", ::gate::Signal::Class_Version(), "Signal.h", 26,
                  typeid(::gate::Signal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::Signal::Dictionary, isa_proxy, 4,
                  sizeof(::gate::Signal) );
      instance.SetNew(&new_gatecLcLSignal);
      instance.SetNewArray(&newArray_gatecLcLSignal);
      instance.SetDelete(&delete_gatecLcLSignal);
      instance.SetDeleteArray(&deleteArray_gatecLcLSignal);
      instance.SetDestructor(&destruct_gatecLcLSignal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::Signal*)
   {
      return GenerateInitInstanceLocal((::gate::Signal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::Signal*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLTrack(void *p = 0);
   static void *newArray_gatecLcLTrack(Long_t size, void *p);
   static void delete_gatecLcLTrack(void *p);
   static void deleteArray_gatecLcLTrack(void *p);
   static void destruct_gatecLcLTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::Track*)
   {
      ::gate::Track *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::Track >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::Track", ::gate::Track::Class_Version(), "Track.h", 27,
                  typeid(::gate::Track), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::Track::Dictionary, isa_proxy, 4,
                  sizeof(::gate::Track) );
      instance.SetNew(&new_gatecLcLTrack);
      instance.SetNewArray(&newArray_gatecLcLTrack);
      instance.SetDelete(&delete_gatecLcLTrack);
      instance.SetDeleteArray(&deleteArray_gatecLcLTrack);
      instance.SetDestructor(&destruct_gatecLcLTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::Track*)
   {
      return GenerateInitInstanceLocal((::gate::Track*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::Track*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLParticle(void *p = 0);
   static void *newArray_gatecLcLParticle(Long_t size, void *p);
   static void delete_gatecLcLParticle(void *p);
   static void deleteArray_gatecLcLParticle(void *p);
   static void destruct_gatecLcLParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::Particle*)
   {
      ::gate::Particle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::Particle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::Particle", ::gate::Particle::Class_Version(), "Particle.h", 27,
                  typeid(::gate::Particle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::Particle::Dictionary, isa_proxy, 4,
                  sizeof(::gate::Particle) );
      instance.SetNew(&new_gatecLcLParticle);
      instance.SetNewArray(&newArray_gatecLcLParticle);
      instance.SetDelete(&delete_gatecLcLParticle);
      instance.SetDeleteArray(&deleteArray_gatecLcLParticle);
      instance.SetDestructor(&destruct_gatecLcLParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::Particle*)
   {
      return GenerateInitInstanceLocal((::gate::Particle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::Particle*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLMCParticle(void *p = 0);
   static void *newArray_gatecLcLMCParticle(Long_t size, void *p);
   static void delete_gatecLcLMCParticle(void *p);
   static void deleteArray_gatecLcLMCParticle(void *p);
   static void destruct_gatecLcLMCParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::MCParticle*)
   {
      ::gate::MCParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::MCParticle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::MCParticle", ::gate::MCParticle::Class_Version(), "MCParticle.h", 26,
                  typeid(::gate::MCParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::MCParticle::Dictionary, isa_proxy, 4,
                  sizeof(::gate::MCParticle) );
      instance.SetNew(&new_gatecLcLMCParticle);
      instance.SetNewArray(&newArray_gatecLcLMCParticle);
      instance.SetDelete(&delete_gatecLcLMCParticle);
      instance.SetDeleteArray(&deleteArray_gatecLcLMCParticle);
      instance.SetDestructor(&destruct_gatecLcLMCParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::MCParticle*)
   {
      return GenerateInitInstanceLocal((::gate::MCParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::MCParticle*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLMCHit(void *p = 0);
   static void *newArray_gatecLcLMCHit(Long_t size, void *p);
   static void delete_gatecLcLMCHit(void *p);
   static void deleteArray_gatecLcLMCHit(void *p);
   static void destruct_gatecLcLMCHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::MCHit*)
   {
      ::gate::MCHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::MCHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::MCHit", ::gate::MCHit::Class_Version(), "MCHit.h", 27,
                  typeid(::gate::MCHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::MCHit::Dictionary, isa_proxy, 4,
                  sizeof(::gate::MCHit) );
      instance.SetNew(&new_gatecLcLMCHit);
      instance.SetNewArray(&newArray_gatecLcLMCHit);
      instance.SetDelete(&delete_gatecLcLMCHit);
      instance.SetDeleteArray(&deleteArray_gatecLcLMCHit);
      instance.SetDestructor(&destruct_gatecLcLMCHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::MCHit*)
   {
      return GenerateInitInstanceLocal((::gate::MCHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::MCHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLMCTrack(void *p = 0);
   static void *newArray_gatecLcLMCTrack(Long_t size, void *p);
   static void delete_gatecLcLMCTrack(void *p);
   static void deleteArray_gatecLcLMCTrack(void *p);
   static void destruct_gatecLcLMCTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::MCTrack*)
   {
      ::gate::MCTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::MCTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::MCTrack", ::gate::MCTrack::Class_Version(), "MCTrack.h", 27,
                  typeid(::gate::MCTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::MCTrack::Dictionary, isa_proxy, 4,
                  sizeof(::gate::MCTrack) );
      instance.SetNew(&new_gatecLcLMCTrack);
      instance.SetNewArray(&newArray_gatecLcLMCTrack);
      instance.SetDelete(&delete_gatecLcLMCTrack);
      instance.SetDeleteArray(&deleteArray_gatecLcLMCTrack);
      instance.SetDestructor(&destruct_gatecLcLMCTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::MCTrack*)
   {
      return GenerateInitInstanceLocal((::gate::MCTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::MCTrack*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLEvent(void *p = 0);
   static void *newArray_gatecLcLEvent(Long_t size, void *p);
   static void delete_gatecLcLEvent(void *p);
   static void deleteArray_gatecLcLEvent(void *p);
   static void destruct_gatecLcLEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::Event*)
   {
      ::gate::Event *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::Event >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::Event", ::gate::Event::Class_Version(), "Event.h", 40,
                  typeid(::gate::Event), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::Event::Dictionary, isa_proxy, 4,
                  sizeof(::gate::Event) );
      instance.SetNew(&new_gatecLcLEvent);
      instance.SetNewArray(&newArray_gatecLcLEvent);
      instance.SetDelete(&delete_gatecLcLEvent);
      instance.SetDeleteArray(&deleteArray_gatecLcLEvent);
      instance.SetDestructor(&destruct_gatecLcLEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::Event*)
   {
      return GenerateInitInstanceLocal((::gate::Event*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::Event*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLSensor(void *p = 0);
   static void *newArray_gatecLcLSensor(Long_t size, void *p);
   static void delete_gatecLcLSensor(void *p);
   static void deleteArray_gatecLcLSensor(void *p);
   static void destruct_gatecLcLSensor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::Sensor*)
   {
      ::gate::Sensor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::Sensor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::Sensor", ::gate::Sensor::Class_Version(), "Sensor.h", 27,
                  typeid(::gate::Sensor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::Sensor::Dictionary, isa_proxy, 4,
                  sizeof(::gate::Sensor) );
      instance.SetNew(&new_gatecLcLSensor);
      instance.SetNewArray(&newArray_gatecLcLSensor);
      instance.SetDelete(&delete_gatecLcLSensor);
      instance.SetDeleteArray(&deleteArray_gatecLcLSensor);
      instance.SetDestructor(&destruct_gatecLcLSensor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::Sensor*)
   {
      return GenerateInitInstanceLocal((::gate::Sensor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::Sensor*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLGeometry(void *p = 0);
   static void *newArray_gatecLcLGeometry(Long_t size, void *p);
   static void delete_gatecLcLGeometry(void *p);
   static void deleteArray_gatecLcLGeometry(void *p);
   static void destruct_gatecLcLGeometry(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::Geometry*)
   {
      ::gate::Geometry *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::Geometry >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::Geometry", ::gate::Geometry::Class_Version(), "Geometry.h", 26,
                  typeid(::gate::Geometry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::Geometry::Dictionary, isa_proxy, 4,
                  sizeof(::gate::Geometry) );
      instance.SetNew(&new_gatecLcLGeometry);
      instance.SetNewArray(&newArray_gatecLcLGeometry);
      instance.SetDelete(&delete_gatecLcLGeometry);
      instance.SetDeleteArray(&deleteArray_gatecLcLGeometry);
      instance.SetDestructor(&destruct_gatecLcLGeometry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::Geometry*)
   {
      return GenerateInitInstanceLocal((::gate::Geometry*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::Geometry*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLProperties(void *p = 0);
   static void *newArray_gatecLcLProperties(Long_t size, void *p);
   static void delete_gatecLcLProperties(void *p);
   static void deleteArray_gatecLcLProperties(void *p);
   static void destruct_gatecLcLProperties(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::Properties*)
   {
      ::gate::Properties *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::Properties >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::Properties", ::gate::Properties::Class_Version(), "Properties.h", 26,
                  typeid(::gate::Properties), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::Properties::Dictionary, isa_proxy, 4,
                  sizeof(::gate::Properties) );
      instance.SetNew(&new_gatecLcLProperties);
      instance.SetNewArray(&newArray_gatecLcLProperties);
      instance.SetDelete(&delete_gatecLcLProperties);
      instance.SetDeleteArray(&deleteArray_gatecLcLProperties);
      instance.SetDestructor(&destruct_gatecLcLProperties);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::Properties*)
   {
      return GenerateInitInstanceLocal((::gate::Properties*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::Properties*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLRun(void *p = 0);
   static void *newArray_gatecLcLRun(Long_t size, void *p);
   static void delete_gatecLcLRun(void *p);
   static void deleteArray_gatecLcLRun(void *p);
   static void destruct_gatecLcLRun(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::Run*)
   {
      ::gate::Run *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::Run >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::Run", ::gate::Run::Class_Version(), "Run.h", 27,
                  typeid(::gate::Run), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::Run::Dictionary, isa_proxy, 4,
                  sizeof(::gate::Run) );
      instance.SetNew(&new_gatecLcLRun);
      instance.SetNewArray(&newArray_gatecLcLRun);
      instance.SetDelete(&delete_gatecLcLRun);
      instance.SetDeleteArray(&deleteArray_gatecLcLRun);
      instance.SetDestructor(&destruct_gatecLcLRun);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::Run*)
   {
      return GenerateInitInstanceLocal((::gate::Run*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::Run*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace gate {
//______________________________________________________________________________
template <> atomic_TClass_ptr tstore<int>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *tstore<int>::Class_Name()
{
   return "gate::tstore<int>";
}

//______________________________________________________________________________
template <> const char *tstore<int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<int>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int tstore<int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<int>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *tstore<int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<int>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *tstore<int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<int>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
template <> atomic_TClass_ptr tstore<double>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *tstore<double>::Class_Name()
{
   return "gate::tstore<double>";
}

//______________________________________________________________________________
template <> const char *tstore<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<double>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int tstore<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<double>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *tstore<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<double>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *tstore<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<double>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
template <> atomic_TClass_ptr tstore<string>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *tstore<string>::Class_Name()
{
   return "gate::tstore<string>";
}

//______________________________________________________________________________
template <> const char *tstore<string>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<string>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int tstore<string>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<string>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *tstore<string>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<string>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *tstore<string>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<string>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
template <> atomic_TClass_ptr tstore<vector<double> >::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *tstore<vector<double> >::Class_Name()
{
   return "gate::tstore<vector<double> >";
}

//______________________________________________________________________________
template <> const char *tstore<vector<double> >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<vector<double> >*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int tstore<vector<double> >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<vector<double> >*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *tstore<vector<double> >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<vector<double> >*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *tstore<vector<double> >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<vector<double> >*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
template <> atomic_TClass_ptr tstore<vector<int> >::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *tstore<vector<int> >::Class_Name()
{
   return "gate::tstore<vector<int> >";
}

//______________________________________________________________________________
template <> const char *tstore<vector<int> >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<vector<int> >*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int tstore<vector<int> >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<vector<int> >*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *tstore<vector<int> >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<vector<int> >*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *tstore<vector<int> >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<vector<int> >*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
template <> atomic_TClass_ptr tstore<vector<string> >::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *tstore<vector<string> >::Class_Name()
{
   return "gate::tstore<vector<string> >";
}

//______________________________________________________________________________
template <> const char *tstore<vector<string> >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<vector<string> >*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int tstore<vector<string> >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<vector<string> >*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *tstore<vector<string> >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<vector<string> >*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *tstore<vector<string> >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<vector<string> >*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
template <> atomic_TClass_ptr tstore<vector<TObject> >::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *tstore<vector<TObject> >::Class_Name()
{
   return "gate::tstore<vector<TObject> >";
}

//______________________________________________________________________________
template <> const char *tstore<vector<TObject> >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<vector<TObject> >*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int tstore<vector<TObject> >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<vector<TObject> >*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *tstore<vector<TObject> >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<vector<TObject> >*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *tstore<vector<TObject> >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<vector<TObject> >*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
template <> atomic_TClass_ptr tstore<TObject>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *tstore<TObject>::Class_Name()
{
   return "gate::tstore<TObject>";
}

//______________________________________________________________________________
template <> const char *tstore<TObject>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<TObject>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int tstore<TObject>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<TObject>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *tstore<TObject>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<TObject>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *tstore<TObject>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<TObject>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr ParamStore::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ParamStore::Class_Name()
{
   return "gate::ParamStore";
}

//______________________________________________________________________________
const char *ParamStore::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::ParamStore*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ParamStore::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::ParamStore*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ParamStore::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::ParamStore*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ParamStore::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::ParamStore*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr BObject::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BObject::Class_Name()
{
   return "gate::BObject";
}

//______________________________________________________________________________
const char *BObject::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::BObject*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BObject::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::BObject*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BObject::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::BObject*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::BObject*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr Point3D::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Point3D::Class_Name()
{
   return "gate::Point3D";
}

//______________________________________________________________________________
const char *Point3D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Point3D*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Point3D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Point3D*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Point3D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Point3D*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Point3D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Point3D*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr BHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BHit::Class_Name()
{
   return "gate::BHit";
}

//______________________________________________________________________________
const char *BHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::BHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::BHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::BHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::BHit*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr Vector4D::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Vector4D::Class_Name()
{
   return "gate::Vector4D";
}

//______________________________________________________________________________
const char *Vector4D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Vector4D*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Vector4D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Vector4D*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Vector4D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Vector4D*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Vector4D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Vector4D*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr BTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BTrack::Class_Name()
{
   return "gate::BTrack";
}

//______________________________________________________________________________
const char *BTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::BTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::BTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::BTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::BTrack*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr BParticle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BParticle::Class_Name()
{
   return "gate::BParticle";
}

//______________________________________________________________________________
const char *BParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::BParticle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::BParticle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::BParticle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::BParticle*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr Waveform::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Waveform::Class_Name()
{
   return "gate::Waveform";
}

//______________________________________________________________________________
const char *Waveform::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Waveform*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Waveform::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Waveform*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Waveform::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Waveform*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Waveform::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Waveform*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr Pulse::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Pulse::Class_Name()
{
   return "gate::Pulse";
}

//______________________________________________________________________________
const char *Pulse::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Pulse*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Pulse::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Pulse*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Pulse::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Pulse*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Pulse::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Pulse*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Hit::Class_Name()
{
   return "gate::Hit";
}

//______________________________________________________________________________
const char *Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Hit*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr Cluster::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Cluster::Class_Name()
{
   return "gate::Cluster";
}

//______________________________________________________________________________
const char *Cluster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Cluster*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Cluster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Cluster*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Cluster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Cluster*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Cluster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Cluster*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr HitMap::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HitMap::Class_Name()
{
   return "gate::HitMap";
}

//______________________________________________________________________________
const char *HitMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::HitMap*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HitMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::HitMap*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HitMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::HitMap*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HitMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::HitMap*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr Signal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Signal::Class_Name()
{
   return "gate::Signal";
}

//______________________________________________________________________________
const char *Signal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Signal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Signal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Signal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Signal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Signal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Signal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Signal*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr Track::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Track::Class_Name()
{
   return "gate::Track";
}

//______________________________________________________________________________
const char *Track::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Track*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Track::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Track*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Track::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Track*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Track::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Track*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr Particle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Particle::Class_Name()
{
   return "gate::Particle";
}

//______________________________________________________________________________
const char *Particle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Particle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Particle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Particle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Particle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Particle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Particle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Particle*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr MCParticle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MCParticle::Class_Name()
{
   return "gate::MCParticle";
}

//______________________________________________________________________________
const char *MCParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::MCParticle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MCParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::MCParticle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MCParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::MCParticle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MCParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::MCParticle*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr MCHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MCHit::Class_Name()
{
   return "gate::MCHit";
}

//______________________________________________________________________________
const char *MCHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::MCHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MCHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::MCHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MCHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::MCHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MCHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::MCHit*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr MCTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MCTrack::Class_Name()
{
   return "gate::MCTrack";
}

//______________________________________________________________________________
const char *MCTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::MCTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MCTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::MCTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MCTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::MCTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MCTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::MCTrack*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr Event::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Event::Class_Name()
{
   return "gate::Event";
}

//______________________________________________________________________________
const char *Event::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Event*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Event::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Event*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Event::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Event*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Event::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Event*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr Sensor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Sensor::Class_Name()
{
   return "gate::Sensor";
}

//______________________________________________________________________________
const char *Sensor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Sensor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Sensor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Sensor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Sensor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Sensor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Sensor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Sensor*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr Geometry::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Geometry::Class_Name()
{
   return "gate::Geometry";
}

//______________________________________________________________________________
const char *Geometry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Geometry*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Geometry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Geometry*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Geometry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Geometry*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Geometry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Geometry*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr Properties::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Properties::Class_Name()
{
   return "gate::Properties";
}

//______________________________________________________________________________
const char *Properties::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Properties*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Properties::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Properties*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Properties::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Properties*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Properties::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Properties*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr Run::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Run::Class_Name()
{
   return "gate::Run";
}

//______________________________________________________________________________
const char *Run::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Run*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Run::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Run*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Run::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Run*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Run::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Run*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEstringcOstringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<string,string> : new pair<string,string>;
   }
   static void *newArray_pairlEstringcOstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<string,string>[nElements] : new pair<string,string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEstringcOstringgR(void *p) {
      delete ((pair<string,string>*)p);
   }
   static void deleteArray_pairlEstringcOstringgR(void *p) {
      delete [] ((pair<string,string>*)p);
   }
   static void destruct_pairlEstringcOstringgR(void *p) {
      typedef pair<string,string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<string,string>

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEstringcOvectorlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<string,vector<double> > : new pair<string,vector<double> >;
   }
   static void *newArray_pairlEstringcOvectorlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<string,vector<double> >[nElements] : new pair<string,vector<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEstringcOvectorlEdoublegRsPgR(void *p) {
      delete ((pair<string,vector<double> >*)p);
   }
   static void deleteArray_pairlEstringcOvectorlEdoublegRsPgR(void *p) {
      delete [] ((pair<string,vector<double> >*)p);
   }
   static void destruct_pairlEstringcOvectorlEdoublegRsPgR(void *p) {
      typedef pair<string,vector<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<string,vector<double> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEstringcOvectorlEintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<string,vector<int> > : new pair<string,vector<int> >;
   }
   static void *newArray_pairlEstringcOvectorlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<string,vector<int> >[nElements] : new pair<string,vector<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEstringcOvectorlEintgRsPgR(void *p) {
      delete ((pair<string,vector<int> >*)p);
   }
   static void deleteArray_pairlEstringcOvectorlEintgRsPgR(void *p) {
      delete [] ((pair<string,vector<int> >*)p);
   }
   static void destruct_pairlEstringcOvectorlEintgRsPgR(void *p) {
      typedef pair<string,vector<int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<string,vector<int> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEstringcOvectorlEstringgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<string,vector<string> > : new pair<string,vector<string> >;
   }
   static void *newArray_pairlEstringcOvectorlEstringgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<string,vector<string> >[nElements] : new pair<string,vector<string> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEstringcOvectorlEstringgRsPgR(void *p) {
      delete ((pair<string,vector<string> >*)p);
   }
   static void deleteArray_pairlEstringcOvectorlEstringgRsPgR(void *p) {
      delete [] ((pair<string,vector<string> >*)p);
   }
   static void destruct_pairlEstringcOvectorlEstringgRsPgR(void *p) {
      typedef pair<string,vector<string> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<string,vector<string> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEgatecLcLBHitmUcOgatecLcLBHitmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<gate::BHit*,gate::BHit*> : new pair<gate::BHit*,gate::BHit*>;
   }
   static void *newArray_pairlEgatecLcLBHitmUcOgatecLcLBHitmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<gate::BHit*,gate::BHit*>[nElements] : new pair<gate::BHit*,gate::BHit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEgatecLcLBHitmUcOgatecLcLBHitmUgR(void *p) {
      delete ((pair<gate::BHit*,gate::BHit*>*)p);
   }
   static void deleteArray_pairlEgatecLcLBHitmUcOgatecLcLBHitmUgR(void *p) {
      delete [] ((pair<gate::BHit*,gate::BHit*>*)p);
   }
   static void destruct_pairlEgatecLcLBHitmUcOgatecLcLBHitmUgR(void *p) {
      typedef pair<gate::BHit*,gate::BHit*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<gate::BHit*,gate::BHit*>

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEunsignedsPintcOfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<unsigned int,float> : new pair<unsigned int,float>;
   }
   static void *newArray_pairlEunsignedsPintcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<unsigned int,float>[nElements] : new pair<unsigned int,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEunsignedsPintcOfloatgR(void *p) {
      delete ((pair<unsigned int,float>*)p);
   }
   static void deleteArray_pairlEunsignedsPintcOfloatgR(void *p) {
      delete [] ((pair<unsigned int,float>*)p);
   }
   static void destruct_pairlEunsignedsPintcOfloatgR(void *p) {
      typedef pair<unsigned int,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<unsigned int,float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEgatecLcLSENSORTYPEcOgatecLcLHitmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<gate::SENSORTYPE,gate::Hit*> : new pair<gate::SENSORTYPE,gate::Hit*>;
   }
   static void *newArray_pairlEgatecLcLSENSORTYPEcOgatecLcLHitmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<gate::SENSORTYPE,gate::Hit*>[nElements] : new pair<gate::SENSORTYPE,gate::Hit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEgatecLcLSENSORTYPEcOgatecLcLHitmUgR(void *p) {
      delete ((pair<gate::SENSORTYPE,gate::Hit*>*)p);
   }
   static void deleteArray_pairlEgatecLcLSENSORTYPEcOgatecLcLHitmUgR(void *p) {
      delete [] ((pair<gate::SENSORTYPE,gate::Hit*>*)p);
   }
   static void destruct_pairlEgatecLcLSENSORTYPEcOgatecLcLHitmUgR(void *p) {
      typedef pair<gate::SENSORTYPE,gate::Hit*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<gate::SENSORTYPE,gate::Hit*>

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<gate::SENSORTYPE,gate::HitMap*> : new pair<gate::SENSORTYPE,gate::HitMap*>;
   }
   static void *newArray_pairlEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<gate::SENSORTYPE,gate::HitMap*>[nElements] : new pair<gate::SENSORTYPE,gate::HitMap*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR(void *p) {
      delete ((pair<gate::SENSORTYPE,gate::HitMap*>*)p);
   }
   static void deleteArray_pairlEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR(void *p) {
      delete [] ((pair<gate::SENSORTYPE,gate::HitMap*>*)p);
   }
   static void destruct_pairlEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR(void *p) {
      typedef pair<gate::SENSORTYPE,gate::HitMap*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<gate::SENSORTYPE,gate::HitMap*>

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEgatecLcLSENSORTYPEcOgatecLcLClustermUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<gate::SENSORTYPE,gate::Cluster*> : new pair<gate::SENSORTYPE,gate::Cluster*>;
   }
   static void *newArray_pairlEgatecLcLSENSORTYPEcOgatecLcLClustermUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<gate::SENSORTYPE,gate::Cluster*>[nElements] : new pair<gate::SENSORTYPE,gate::Cluster*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEgatecLcLSENSORTYPEcOgatecLcLClustermUgR(void *p) {
      delete ((pair<gate::SENSORTYPE,gate::Cluster*>*)p);
   }
   static void deleteArray_pairlEgatecLcLSENSORTYPEcOgatecLcLClustermUgR(void *p) {
      delete [] ((pair<gate::SENSORTYPE,gate::Cluster*>*)p);
   }
   static void destruct_pairlEgatecLcLSENSORTYPEcOgatecLcLClustermUgR(void *p) {
      typedef pair<gate::SENSORTYPE,gate::Cluster*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<gate::SENSORTYPE,gate::Cluster*>

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<gate::SENSORTYPE,gate::Track*> : new pair<gate::SENSORTYPE,gate::Track*>;
   }
   static void *newArray_pairlEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<gate::SENSORTYPE,gate::Track*>[nElements] : new pair<gate::SENSORTYPE,gate::Track*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR(void *p) {
      delete ((pair<gate::SENSORTYPE,gate::Track*>*)p);
   }
   static void deleteArray_pairlEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR(void *p) {
      delete [] ((pair<gate::SENSORTYPE,gate::Track*>*)p);
   }
   static void destruct_pairlEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR(void *p) {
      typedef pair<gate::SENSORTYPE,gate::Track*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<gate::SENSORTYPE,gate::Track*>

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEintcOgatecLcLSensormUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<int,gate::Sensor*> : new pair<int,gate::Sensor*>;
   }
   static void *newArray_pairlEintcOgatecLcLSensormUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<int,gate::Sensor*>[nElements] : new pair<int,gate::Sensor*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEintcOgatecLcLSensormUgR(void *p) {
      delete ((pair<int,gate::Sensor*>*)p);
   }
   static void deleteArray_pairlEintcOgatecLcLSensormUgR(void *p) {
      delete [] ((pair<int,gate::Sensor*>*)p);
   }
   static void destruct_pairlEintcOgatecLcLSensormUgR(void *p) {
      typedef pair<int,gate::Sensor*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<int,gate::Sensor*>

namespace ROOT {
   // Wrappers around operator new
   static void *new___map_iteratorlE__tree_iteratorlE__value_typelEintcOgatecLcLSensormUgRcO__tree_nodelE__value_typelEintcOgatecLcLSensormUgRcOvoidmUgRmUcOlonggRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__map_iterator<__tree_iterator<__value_type<int,gate::Sensor*>,__tree_node<__value_type<int,gate::Sensor*>,void*>*,long> > : new ::__map_iterator<__tree_iterator<__value_type<int,gate::Sensor*>,__tree_node<__value_type<int,gate::Sensor*>,void*>*,long> >;
   }
   static void *newArray___map_iteratorlE__tree_iteratorlE__value_typelEintcOgatecLcLSensormUgRcO__tree_nodelE__value_typelEintcOgatecLcLSensormUgRcOvoidmUgRmUcOlonggRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__map_iterator<__tree_iterator<__value_type<int,gate::Sensor*>,__tree_node<__value_type<int,gate::Sensor*>,void*>*,long> >[nElements] : new ::__map_iterator<__tree_iterator<__value_type<int,gate::Sensor*>,__tree_node<__value_type<int,gate::Sensor*>,void*>*,long> >[nElements];
   }
   // Wrapper around operator delete
   static void delete___map_iteratorlE__tree_iteratorlE__value_typelEintcOgatecLcLSensormUgRcO__tree_nodelE__value_typelEintcOgatecLcLSensormUgRcOvoidmUgRmUcOlonggRsPgR(void *p) {
      delete ((::__map_iterator<__tree_iterator<__value_type<int,gate::Sensor*>,__tree_node<__value_type<int,gate::Sensor*>,void*>*,long> >*)p);
   }
   static void deleteArray___map_iteratorlE__tree_iteratorlE__value_typelEintcOgatecLcLSensormUgRcO__tree_nodelE__value_typelEintcOgatecLcLSensormUgRcOvoidmUgRmUcOlonggRsPgR(void *p) {
      delete [] ((::__map_iterator<__tree_iterator<__value_type<int,gate::Sensor*>,__tree_node<__value_type<int,gate::Sensor*>,void*>*,long> >*)p);
   }
   static void destruct___map_iteratorlE__tree_iteratorlE__value_typelEintcOgatecLcLSensormUgRcO__tree_nodelE__value_typelEintcOgatecLcLSensormUgRcOvoidmUgRmUcOlonggRsPgR(void *p) {
      typedef ::__map_iterator<__tree_iterator<__value_type<int,gate::Sensor*>,__tree_node<__value_type<int,gate::Sensor*>,void*>*,long> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::__map_iterator<__tree_iterator<__value_type<int,gate::Sensor*>,__tree_node<__value_type<int,gate::Sensor*>,void*>*,long> >

namespace gate {
//______________________________________________________________________________
template <> void tstore<int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::tstore<int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::tstore<int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::tstore<int>::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLtstorelEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::tstore<int> : new ::gate::tstore<int>;
   }
   static void *newArray_gatecLcLtstorelEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::tstore<int>[nElements] : new ::gate::tstore<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLtstorelEintgR(void *p) {
      delete ((::gate::tstore<int>*)p);
   }
   static void deleteArray_gatecLcLtstorelEintgR(void *p) {
      delete [] ((::gate::tstore<int>*)p);
   }
   static void destruct_gatecLcLtstorelEintgR(void *p) {
      typedef ::gate::tstore<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::tstore<int>

namespace gate {
//______________________________________________________________________________
template <> void tstore<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::tstore<double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::tstore<double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::tstore<double>::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLtstorelEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::tstore<double> : new ::gate::tstore<double>;
   }
   static void *newArray_gatecLcLtstorelEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::tstore<double>[nElements] : new ::gate::tstore<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLtstorelEdoublegR(void *p) {
      delete ((::gate::tstore<double>*)p);
   }
   static void deleteArray_gatecLcLtstorelEdoublegR(void *p) {
      delete [] ((::gate::tstore<double>*)p);
   }
   static void destruct_gatecLcLtstorelEdoublegR(void *p) {
      typedef ::gate::tstore<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::tstore<double>

namespace gate {
//______________________________________________________________________________
template <> void tstore<string>::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::tstore<string>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::tstore<string>::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::tstore<string>::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLtstorelEstringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::tstore<string> : new ::gate::tstore<string>;
   }
   static void *newArray_gatecLcLtstorelEstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::tstore<string>[nElements] : new ::gate::tstore<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLtstorelEstringgR(void *p) {
      delete ((::gate::tstore<string>*)p);
   }
   static void deleteArray_gatecLcLtstorelEstringgR(void *p) {
      delete [] ((::gate::tstore<string>*)p);
   }
   static void destruct_gatecLcLtstorelEstringgR(void *p) {
      typedef ::gate::tstore<string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::tstore<string>

namespace gate {
//______________________________________________________________________________
template <> void tstore<vector<double> >::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::tstore<vector<double> >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::tstore<vector<double> >::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::tstore<vector<double> >::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLtstorelEvectorlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::tstore<vector<double> > : new ::gate::tstore<vector<double> >;
   }
   static void *newArray_gatecLcLtstorelEvectorlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::tstore<vector<double> >[nElements] : new ::gate::tstore<vector<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLtstorelEvectorlEdoublegRsPgR(void *p) {
      delete ((::gate::tstore<vector<double> >*)p);
   }
   static void deleteArray_gatecLcLtstorelEvectorlEdoublegRsPgR(void *p) {
      delete [] ((::gate::tstore<vector<double> >*)p);
   }
   static void destruct_gatecLcLtstorelEvectorlEdoublegRsPgR(void *p) {
      typedef ::gate::tstore<vector<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::tstore<vector<double> >

namespace gate {
//______________________________________________________________________________
template <> void tstore<vector<int> >::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::tstore<vector<int> >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::tstore<vector<int> >::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::tstore<vector<int> >::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLtstorelEvectorlEintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::tstore<vector<int> > : new ::gate::tstore<vector<int> >;
   }
   static void *newArray_gatecLcLtstorelEvectorlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::tstore<vector<int> >[nElements] : new ::gate::tstore<vector<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLtstorelEvectorlEintgRsPgR(void *p) {
      delete ((::gate::tstore<vector<int> >*)p);
   }
   static void deleteArray_gatecLcLtstorelEvectorlEintgRsPgR(void *p) {
      delete [] ((::gate::tstore<vector<int> >*)p);
   }
   static void destruct_gatecLcLtstorelEvectorlEintgRsPgR(void *p) {
      typedef ::gate::tstore<vector<int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::tstore<vector<int> >

namespace gate {
//______________________________________________________________________________
template <> void tstore<vector<string> >::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::tstore<vector<string> >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::tstore<vector<string> >::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::tstore<vector<string> >::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLtstorelEvectorlEstringgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::tstore<vector<string> > : new ::gate::tstore<vector<string> >;
   }
   static void *newArray_gatecLcLtstorelEvectorlEstringgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::tstore<vector<string> >[nElements] : new ::gate::tstore<vector<string> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLtstorelEvectorlEstringgRsPgR(void *p) {
      delete ((::gate::tstore<vector<string> >*)p);
   }
   static void deleteArray_gatecLcLtstorelEvectorlEstringgRsPgR(void *p) {
      delete [] ((::gate::tstore<vector<string> >*)p);
   }
   static void destruct_gatecLcLtstorelEvectorlEstringgRsPgR(void *p) {
      typedef ::gate::tstore<vector<string> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::tstore<vector<string> >

namespace gate {
//______________________________________________________________________________
template <> void tstore<vector<TObject> >::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::tstore<vector<TObject> >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::tstore<vector<TObject> >::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::tstore<vector<TObject> >::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLtstorelEvectorlETObjectgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::tstore<vector<TObject> > : new ::gate::tstore<vector<TObject> >;
   }
   static void *newArray_gatecLcLtstorelEvectorlETObjectgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::tstore<vector<TObject> >[nElements] : new ::gate::tstore<vector<TObject> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLtstorelEvectorlETObjectgRsPgR(void *p) {
      delete ((::gate::tstore<vector<TObject> >*)p);
   }
   static void deleteArray_gatecLcLtstorelEvectorlETObjectgRsPgR(void *p) {
      delete [] ((::gate::tstore<vector<TObject> >*)p);
   }
   static void destruct_gatecLcLtstorelEvectorlETObjectgRsPgR(void *p) {
      typedef ::gate::tstore<vector<TObject> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::tstore<vector<TObject> >

namespace gate {
//______________________________________________________________________________
template <> void tstore<TObject>::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::tstore<TObject>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::tstore<TObject>::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::tstore<TObject>::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLtstorelETObjectgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::tstore<TObject> : new ::gate::tstore<TObject>;
   }
   static void *newArray_gatecLcLtstorelETObjectgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::tstore<TObject>[nElements] : new ::gate::tstore<TObject>[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLtstorelETObjectgR(void *p) {
      delete ((::gate::tstore<TObject>*)p);
   }
   static void deleteArray_gatecLcLtstorelETObjectgR(void *p) {
      delete [] ((::gate::tstore<TObject>*)p);
   }
   static void destruct_gatecLcLtstorelETObjectgR(void *p) {
      typedef ::gate::tstore<TObject> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::tstore<TObject>

namespace gate {
//______________________________________________________________________________
void ParamStore::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::ParamStore.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::ParamStore::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::ParamStore::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLParamStore(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::ParamStore : new ::gate::ParamStore;
   }
   static void *newArray_gatecLcLParamStore(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::ParamStore[nElements] : new ::gate::ParamStore[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLParamStore(void *p) {
      delete ((::gate::ParamStore*)p);
   }
   static void deleteArray_gatecLcLParamStore(void *p) {
      delete [] ((::gate::ParamStore*)p);
   }
   static void destruct_gatecLcLParamStore(void *p) {
      typedef ::gate::ParamStore current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::ParamStore

namespace gate {
//______________________________________________________________________________
void BObject::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::BObject.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::BObject::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::BObject::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLBObject(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::BObject : new ::gate::BObject;
   }
   static void *newArray_gatecLcLBObject(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::BObject[nElements] : new ::gate::BObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLBObject(void *p) {
      delete ((::gate::BObject*)p);
   }
   static void deleteArray_gatecLcLBObject(void *p) {
      delete [] ((::gate::BObject*)p);
   }
   static void destruct_gatecLcLBObject(void *p) {
      typedef ::gate::BObject current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::BObject

namespace gate {
//______________________________________________________________________________
void Point3D::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::Point3D.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::Point3D::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::Point3D::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLPoint3D(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Point3D : new ::gate::Point3D;
   }
   static void *newArray_gatecLcLPoint3D(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Point3D[nElements] : new ::gate::Point3D[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLPoint3D(void *p) {
      delete ((::gate::Point3D*)p);
   }
   static void deleteArray_gatecLcLPoint3D(void *p) {
      delete [] ((::gate::Point3D*)p);
   }
   static void destruct_gatecLcLPoint3D(void *p) {
      typedef ::gate::Point3D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::Point3D

namespace gate {
//______________________________________________________________________________
void BHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::BHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::BHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::BHit::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLBHit(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::BHit : new ::gate::BHit;
   }
   static void *newArray_gatecLcLBHit(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::BHit[nElements] : new ::gate::BHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLBHit(void *p) {
      delete ((::gate::BHit*)p);
   }
   static void deleteArray_gatecLcLBHit(void *p) {
      delete [] ((::gate::BHit*)p);
   }
   static void destruct_gatecLcLBHit(void *p) {
      typedef ::gate::BHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::BHit

namespace gate {
//______________________________________________________________________________
void Vector4D::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::Vector4D.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::Vector4D::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::Vector4D::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLVector4D(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Vector4D : new ::gate::Vector4D;
   }
   static void *newArray_gatecLcLVector4D(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Vector4D[nElements] : new ::gate::Vector4D[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLVector4D(void *p) {
      delete ((::gate::Vector4D*)p);
   }
   static void deleteArray_gatecLcLVector4D(void *p) {
      delete [] ((::gate::Vector4D*)p);
   }
   static void destruct_gatecLcLVector4D(void *p) {
      typedef ::gate::Vector4D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::Vector4D

namespace gate {
//______________________________________________________________________________
void BTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::BTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::BTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::BTrack::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLBTrack(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::BTrack : new ::gate::BTrack;
   }
   static void *newArray_gatecLcLBTrack(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::BTrack[nElements] : new ::gate::BTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLBTrack(void *p) {
      delete ((::gate::BTrack*)p);
   }
   static void deleteArray_gatecLcLBTrack(void *p) {
      delete [] ((::gate::BTrack*)p);
   }
   static void destruct_gatecLcLBTrack(void *p) {
      typedef ::gate::BTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::BTrack

namespace gate {
//______________________________________________________________________________
void BParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::BParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::BParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::BParticle::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLBParticle(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::BParticle : new ::gate::BParticle;
   }
   static void *newArray_gatecLcLBParticle(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::BParticle[nElements] : new ::gate::BParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLBParticle(void *p) {
      delete ((::gate::BParticle*)p);
   }
   static void deleteArray_gatecLcLBParticle(void *p) {
      delete [] ((::gate::BParticle*)p);
   }
   static void destruct_gatecLcLBParticle(void *p) {
      typedef ::gate::BParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::BParticle

namespace gate {
//______________________________________________________________________________
void Waveform::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::Waveform.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::Waveform::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::Waveform::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLWaveform(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Waveform : new ::gate::Waveform;
   }
   static void *newArray_gatecLcLWaveform(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Waveform[nElements] : new ::gate::Waveform[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLWaveform(void *p) {
      delete ((::gate::Waveform*)p);
   }
   static void deleteArray_gatecLcLWaveform(void *p) {
      delete [] ((::gate::Waveform*)p);
   }
   static void destruct_gatecLcLWaveform(void *p) {
      typedef ::gate::Waveform current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::Waveform

namespace gate {
//______________________________________________________________________________
void Pulse::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::Pulse.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::Pulse::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::Pulse::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLPulse(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Pulse : new ::gate::Pulse;
   }
   static void *newArray_gatecLcLPulse(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Pulse[nElements] : new ::gate::Pulse[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLPulse(void *p) {
      delete ((::gate::Pulse*)p);
   }
   static void deleteArray_gatecLcLPulse(void *p) {
      delete [] ((::gate::Pulse*)p);
   }
   static void destruct_gatecLcLPulse(void *p) {
      typedef ::gate::Pulse current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::Pulse

namespace gate {
//______________________________________________________________________________
void Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::Hit::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLHit(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Hit : new ::gate::Hit;
   }
   static void *newArray_gatecLcLHit(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Hit[nElements] : new ::gate::Hit[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLHit(void *p) {
      delete ((::gate::Hit*)p);
   }
   static void deleteArray_gatecLcLHit(void *p) {
      delete [] ((::gate::Hit*)p);
   }
   static void destruct_gatecLcLHit(void *p) {
      typedef ::gate::Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::Hit

namespace gate {
//______________________________________________________________________________
void Cluster::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::Cluster.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::Cluster::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::Cluster::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLCluster(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Cluster : new ::gate::Cluster;
   }
   static void *newArray_gatecLcLCluster(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Cluster[nElements] : new ::gate::Cluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLCluster(void *p) {
      delete ((::gate::Cluster*)p);
   }
   static void deleteArray_gatecLcLCluster(void *p) {
      delete [] ((::gate::Cluster*)p);
   }
   static void destruct_gatecLcLCluster(void *p) {
      typedef ::gate::Cluster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::Cluster

namespace gate {
//______________________________________________________________________________
void HitMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::HitMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::HitMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::HitMap::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLHitMap(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::HitMap : new ::gate::HitMap;
   }
   static void *newArray_gatecLcLHitMap(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::HitMap[nElements] : new ::gate::HitMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLHitMap(void *p) {
      delete ((::gate::HitMap*)p);
   }
   static void deleteArray_gatecLcLHitMap(void *p) {
      delete [] ((::gate::HitMap*)p);
   }
   static void destruct_gatecLcLHitMap(void *p) {
      typedef ::gate::HitMap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::HitMap

namespace gate {
//______________________________________________________________________________
void Signal::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::Signal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::Signal::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::Signal::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLSignal(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Signal : new ::gate::Signal;
   }
   static void *newArray_gatecLcLSignal(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Signal[nElements] : new ::gate::Signal[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLSignal(void *p) {
      delete ((::gate::Signal*)p);
   }
   static void deleteArray_gatecLcLSignal(void *p) {
      delete [] ((::gate::Signal*)p);
   }
   static void destruct_gatecLcLSignal(void *p) {
      typedef ::gate::Signal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::Signal

namespace gate {
//______________________________________________________________________________
void Track::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::Track.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::Track::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::Track::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLTrack(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Track : new ::gate::Track;
   }
   static void *newArray_gatecLcLTrack(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Track[nElements] : new ::gate::Track[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLTrack(void *p) {
      delete ((::gate::Track*)p);
   }
   static void deleteArray_gatecLcLTrack(void *p) {
      delete [] ((::gate::Track*)p);
   }
   static void destruct_gatecLcLTrack(void *p) {
      typedef ::gate::Track current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::Track

namespace gate {
//______________________________________________________________________________
void Particle::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::Particle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::Particle::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::Particle::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLParticle(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Particle : new ::gate::Particle;
   }
   static void *newArray_gatecLcLParticle(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Particle[nElements] : new ::gate::Particle[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLParticle(void *p) {
      delete ((::gate::Particle*)p);
   }
   static void deleteArray_gatecLcLParticle(void *p) {
      delete [] ((::gate::Particle*)p);
   }
   static void destruct_gatecLcLParticle(void *p) {
      typedef ::gate::Particle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::Particle

namespace gate {
//______________________________________________________________________________
void MCParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::MCParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::MCParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::MCParticle::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLMCParticle(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::MCParticle : new ::gate::MCParticle;
   }
   static void *newArray_gatecLcLMCParticle(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::MCParticle[nElements] : new ::gate::MCParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLMCParticle(void *p) {
      delete ((::gate::MCParticle*)p);
   }
   static void deleteArray_gatecLcLMCParticle(void *p) {
      delete [] ((::gate::MCParticle*)p);
   }
   static void destruct_gatecLcLMCParticle(void *p) {
      typedef ::gate::MCParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::MCParticle

namespace gate {
//______________________________________________________________________________
void MCHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::MCHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::MCHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::MCHit::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLMCHit(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::MCHit : new ::gate::MCHit;
   }
   static void *newArray_gatecLcLMCHit(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::MCHit[nElements] : new ::gate::MCHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLMCHit(void *p) {
      delete ((::gate::MCHit*)p);
   }
   static void deleteArray_gatecLcLMCHit(void *p) {
      delete [] ((::gate::MCHit*)p);
   }
   static void destruct_gatecLcLMCHit(void *p) {
      typedef ::gate::MCHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::MCHit

namespace gate {
//______________________________________________________________________________
void MCTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::MCTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::MCTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::MCTrack::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLMCTrack(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::MCTrack : new ::gate::MCTrack;
   }
   static void *newArray_gatecLcLMCTrack(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::MCTrack[nElements] : new ::gate::MCTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLMCTrack(void *p) {
      delete ((::gate::MCTrack*)p);
   }
   static void deleteArray_gatecLcLMCTrack(void *p) {
      delete [] ((::gate::MCTrack*)p);
   }
   static void destruct_gatecLcLMCTrack(void *p) {
      typedef ::gate::MCTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::MCTrack

namespace gate {
//______________________________________________________________________________
void Event::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::Event.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::Event::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::Event::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLEvent(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Event : new ::gate::Event;
   }
   static void *newArray_gatecLcLEvent(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Event[nElements] : new ::gate::Event[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLEvent(void *p) {
      delete ((::gate::Event*)p);
   }
   static void deleteArray_gatecLcLEvent(void *p) {
      delete [] ((::gate::Event*)p);
   }
   static void destruct_gatecLcLEvent(void *p) {
      typedef ::gate::Event current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::Event

namespace gate {
//______________________________________________________________________________
void Sensor::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::Sensor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::Sensor::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::Sensor::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLSensor(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Sensor : new ::gate::Sensor;
   }
   static void *newArray_gatecLcLSensor(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Sensor[nElements] : new ::gate::Sensor[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLSensor(void *p) {
      delete ((::gate::Sensor*)p);
   }
   static void deleteArray_gatecLcLSensor(void *p) {
      delete [] ((::gate::Sensor*)p);
   }
   static void destruct_gatecLcLSensor(void *p) {
      typedef ::gate::Sensor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::Sensor

namespace gate {
//______________________________________________________________________________
void Geometry::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::Geometry.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::Geometry::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::Geometry::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLGeometry(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Geometry : new ::gate::Geometry;
   }
   static void *newArray_gatecLcLGeometry(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Geometry[nElements] : new ::gate::Geometry[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLGeometry(void *p) {
      delete ((::gate::Geometry*)p);
   }
   static void deleteArray_gatecLcLGeometry(void *p) {
      delete [] ((::gate::Geometry*)p);
   }
   static void destruct_gatecLcLGeometry(void *p) {
      typedef ::gate::Geometry current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::Geometry

namespace gate {
//______________________________________________________________________________
void Properties::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::Properties.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::Properties::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::Properties::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLProperties(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Properties : new ::gate::Properties;
   }
   static void *newArray_gatecLcLProperties(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Properties[nElements] : new ::gate::Properties[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLProperties(void *p) {
      delete ((::gate::Properties*)p);
   }
   static void deleteArray_gatecLcLProperties(void *p) {
      delete [] ((::gate::Properties*)p);
   }
   static void destruct_gatecLcLProperties(void *p) {
      typedef ::gate::Properties current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::Properties

namespace gate {
//______________________________________________________________________________
void Run::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::Run.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::Run::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::Run::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLRun(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Run : new ::gate::Run;
   }
   static void *newArray_gatecLcLRun(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Run[nElements] : new ::gate::Run[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLRun(void *p) {
      delete ((::gate::Run*)p);
   }
   static void deleteArray_gatecLcLRun(void *p) {
      delete [] ((::gate::Run*)p);
   }
   static void destruct_gatecLcLRun(void *p) {
      typedef ::gate::Run current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::Run

namespace ROOT {
   static TClass *vectorlEvectorlEstringgRsPgR_Dictionary();
   static void vectorlEvectorlEstringgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEstringgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEstringgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEstringgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEstringgRsPgR(void *p);
   static void destruct_vectorlEvectorlEstringgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<string> >*)
   {
      vector<vector<string> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<string> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<string> >", -2, "vector", 458,
                  typeid(vector<vector<string> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEstringgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<string> >) );
      instance.SetNew(&new_vectorlEvectorlEstringgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEstringgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEstringgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEstringgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEstringgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<string> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<string> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEstringgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<string> >*)0x0)->GetClass();
      vectorlEvectorlEstringgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEstringgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEstringgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<string> > : new vector<vector<string> >;
   }
   static void *newArray_vectorlEvectorlEstringgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<string> >[nElements] : new vector<vector<string> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEstringgRsPgR(void *p) {
      delete ((vector<vector<string> >*)p);
   }
   static void deleteArray_vectorlEvectorlEstringgRsPgR(void *p) {
      delete [] ((vector<vector<string> >*)p);
   }
   static void destruct_vectorlEvectorlEstringgRsPgR(void *p) {
      typedef vector<vector<string> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<string> >

namespace ROOT {
   static TClass *vectorlEvectorlEintgRsPgR_Dictionary();
   static void vectorlEvectorlEintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEintgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEintgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEintgRsPgR(void *p);
   static void destruct_vectorlEvectorlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<int> >*)
   {
      vector<vector<int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<int> >", -2, "vector", 458,
                  typeid(vector<vector<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<int> >) );
      instance.SetNew(&new_vectorlEvectorlEintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEintgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<int> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<int> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<int> >*)0x0)->GetClass();
      vectorlEvectorlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<int> > : new vector<vector<int> >;
   }
   static void *newArray_vectorlEvectorlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<int> >[nElements] : new vector<vector<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEintgRsPgR(void *p) {
      delete ((vector<vector<int> >*)p);
   }
   static void deleteArray_vectorlEvectorlEintgRsPgR(void *p) {
      delete [] ((vector<vector<int> >*)p);
   }
   static void destruct_vectorlEvectorlEintgRsPgR(void *p) {
      typedef vector<vector<int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<int> >

namespace ROOT {
   static TClass *vectorlEvectorlEdoublegRsPgR_Dictionary();
   static void vectorlEvectorlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEdoublegRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEdoublegRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEdoublegRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEdoublegRsPgR(void *p);
   static void destruct_vectorlEvectorlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<double> >*)
   {
      vector<vector<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<double> >", -2, "vector", 458,
                  typeid(vector<vector<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEdoublegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<double> >) );
      instance.SetNew(&new_vectorlEvectorlEdoublegRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEdoublegRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEdoublegRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<double> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<double> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<double> >*)0x0)->GetClass();
      vectorlEvectorlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<double> > : new vector<vector<double> >;
   }
   static void *newArray_vectorlEvectorlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<double> >[nElements] : new vector<vector<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEdoublegRsPgR(void *p) {
      delete ((vector<vector<double> >*)p);
   }
   static void deleteArray_vectorlEvectorlEdoublegRsPgR(void *p) {
      delete [] ((vector<vector<double> >*)p);
   }
   static void destruct_vectorlEvectorlEdoublegRsPgR(void *p) {
      typedef vector<vector<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<double> >

namespace ROOT {
   static TClass *vectorlEvectorlETObjectgRsPgR_Dictionary();
   static void vectorlEvectorlETObjectgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlETObjectgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlETObjectgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlETObjectgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlETObjectgRsPgR(void *p);
   static void destruct_vectorlEvectorlETObjectgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<TObject> >*)
   {
      vector<vector<TObject> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<TObject> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<TObject> >", -2, "vector", 458,
                  typeid(vector<vector<TObject> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlETObjectgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<TObject> >) );
      instance.SetNew(&new_vectorlEvectorlETObjectgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlETObjectgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlETObjectgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlETObjectgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlETObjectgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<TObject> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<TObject> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlETObjectgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<TObject> >*)0x0)->GetClass();
      vectorlEvectorlETObjectgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlETObjectgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlETObjectgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TObject> > : new vector<vector<TObject> >;
   }
   static void *newArray_vectorlEvectorlETObjectgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TObject> >[nElements] : new vector<vector<TObject> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlETObjectgRsPgR(void *p) {
      delete ((vector<vector<TObject> >*)p);
   }
   static void deleteArray_vectorlEvectorlETObjectgRsPgR(void *p) {
      delete [] ((vector<vector<TObject> >*)p);
   }
   static void destruct_vectorlEvectorlETObjectgRsPgR(void *p) {
      typedef vector<vector<TObject> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<TObject> >

namespace ROOT {
   static TClass *vectorlEstringgR_Dictionary();
   static void vectorlEstringgR_TClassManip(TClass*);
   static void *new_vectorlEstringgR(void *p = 0);
   static void *newArray_vectorlEstringgR(Long_t size, void *p);
   static void delete_vectorlEstringgR(void *p);
   static void deleteArray_vectorlEstringgR(void *p);
   static void destruct_vectorlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<string>*)
   {
      vector<string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<string>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<string>", -2, "vector", 458,
                  typeid(vector<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEstringgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<string>) );
      instance.SetNew(&new_vectorlEstringgR);
      instance.SetNewArray(&newArray_vectorlEstringgR);
      instance.SetDelete(&delete_vectorlEstringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEstringgR);
      instance.SetDestructor(&destruct_vectorlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<string> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<string>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<string>*)0x0)->GetClass();
      vectorlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEstringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string> : new vector<string>;
   }
   static void *newArray_vectorlEstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string>[nElements] : new vector<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEstringgR(void *p) {
      delete ((vector<string>*)p);
   }
   static void deleteArray_vectorlEstringgR(void *p) {
      delete [] ((vector<string>*)p);
   }
   static void destruct_vectorlEstringgR(void *p) {
      typedef vector<string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<string>

namespace ROOT {
   static TClass *vectorlEpairlEunsignedsPintcOfloatgRsPgR_Dictionary();
   static void vectorlEpairlEunsignedsPintcOfloatgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEunsignedsPintcOfloatgRsPgR(void *p = 0);
   static void *newArray_vectorlEpairlEunsignedsPintcOfloatgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEunsignedsPintcOfloatgRsPgR(void *p);
   static void deleteArray_vectorlEpairlEunsignedsPintcOfloatgRsPgR(void *p);
   static void destruct_vectorlEpairlEunsignedsPintcOfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<unsigned int,float> >*)
   {
      vector<pair<unsigned int,float> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<unsigned int,float> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<unsigned int,float> >", -2, "vector", 458,
                  typeid(vector<pair<unsigned int,float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEunsignedsPintcOfloatgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pair<unsigned int,float> >) );
      instance.SetNew(&new_vectorlEpairlEunsignedsPintcOfloatgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEunsignedsPintcOfloatgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEunsignedsPintcOfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEunsignedsPintcOfloatgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEunsignedsPintcOfloatgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<unsigned int,float> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<pair<unsigned int,float> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEunsignedsPintcOfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pair<unsigned int,float> >*)0x0)->GetClass();
      vectorlEpairlEunsignedsPintcOfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEunsignedsPintcOfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEunsignedsPintcOfloatgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<unsigned int,float> > : new vector<pair<unsigned int,float> >;
   }
   static void *newArray_vectorlEpairlEunsignedsPintcOfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<unsigned int,float> >[nElements] : new vector<pair<unsigned int,float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEunsignedsPintcOfloatgRsPgR(void *p) {
      delete ((vector<pair<unsigned int,float> >*)p);
   }
   static void deleteArray_vectorlEpairlEunsignedsPintcOfloatgRsPgR(void *p) {
      delete [] ((vector<pair<unsigned int,float> >*)p);
   }
   static void destruct_vectorlEpairlEunsignedsPintcOfloatgRsPgR(void *p) {
      typedef vector<pair<unsigned int,float> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pair<unsigned int,float> >

namespace ROOT {
   static TClass *vectorlEmaplEintcOfloatgRsPgR_Dictionary();
   static void vectorlEmaplEintcOfloatgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEmaplEintcOfloatgRsPgR(void *p = 0);
   static void *newArray_vectorlEmaplEintcOfloatgRsPgR(Long_t size, void *p);
   static void delete_vectorlEmaplEintcOfloatgRsPgR(void *p);
   static void deleteArray_vectorlEmaplEintcOfloatgRsPgR(void *p);
   static void destruct_vectorlEmaplEintcOfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<map<int,float> >*)
   {
      vector<map<int,float> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<map<int,float> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<map<int,float> >", -2, "vector", 458,
                  typeid(vector<map<int,float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEmaplEintcOfloatgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<map<int,float> >) );
      instance.SetNew(&new_vectorlEmaplEintcOfloatgRsPgR);
      instance.SetNewArray(&newArray_vectorlEmaplEintcOfloatgRsPgR);
      instance.SetDelete(&delete_vectorlEmaplEintcOfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEmaplEintcOfloatgRsPgR);
      instance.SetDestructor(&destruct_vectorlEmaplEintcOfloatgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<map<int,float> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<map<int,float> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEmaplEintcOfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<map<int,float> >*)0x0)->GetClass();
      vectorlEmaplEintcOfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEmaplEintcOfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEmaplEintcOfloatgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<map<int,float> > : new vector<map<int,float> >;
   }
   static void *newArray_vectorlEmaplEintcOfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<map<int,float> >[nElements] : new vector<map<int,float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEmaplEintcOfloatgRsPgR(void *p) {
      delete ((vector<map<int,float> >*)p);
   }
   static void deleteArray_vectorlEmaplEintcOfloatgRsPgR(void *p) {
      delete [] ((vector<map<int,float> >*)p);
   }
   static void destruct_vectorlEmaplEintcOfloatgRsPgR(void *p) {
      typedef vector<map<int,float> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<map<int,float> >

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = 0);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 458,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<int>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)0x0)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEgatecLcLTrackmUgR_Dictionary();
   static void vectorlEgatecLcLTrackmUgR_TClassManip(TClass*);
   static void *new_vectorlEgatecLcLTrackmUgR(void *p = 0);
   static void *newArray_vectorlEgatecLcLTrackmUgR(Long_t size, void *p);
   static void delete_vectorlEgatecLcLTrackmUgR(void *p);
   static void deleteArray_vectorlEgatecLcLTrackmUgR(void *p);
   static void destruct_vectorlEgatecLcLTrackmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<gate::Track*>*)
   {
      vector<gate::Track*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<gate::Track*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<gate::Track*>", -2, "vector", 458,
                  typeid(vector<gate::Track*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEgatecLcLTrackmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<gate::Track*>) );
      instance.SetNew(&new_vectorlEgatecLcLTrackmUgR);
      instance.SetNewArray(&newArray_vectorlEgatecLcLTrackmUgR);
      instance.SetDelete(&delete_vectorlEgatecLcLTrackmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEgatecLcLTrackmUgR);
      instance.SetDestructor(&destruct_vectorlEgatecLcLTrackmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<gate::Track*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<gate::Track*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgatecLcLTrackmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<gate::Track*>*)0x0)->GetClass();
      vectorlEgatecLcLTrackmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgatecLcLTrackmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgatecLcLTrackmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::Track*> : new vector<gate::Track*>;
   }
   static void *newArray_vectorlEgatecLcLTrackmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::Track*>[nElements] : new vector<gate::Track*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgatecLcLTrackmUgR(void *p) {
      delete ((vector<gate::Track*>*)p);
   }
   static void deleteArray_vectorlEgatecLcLTrackmUgR(void *p) {
      delete [] ((vector<gate::Track*>*)p);
   }
   static void destruct_vectorlEgatecLcLTrackmUgR(void *p) {
      typedef vector<gate::Track*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<gate::Track*>

namespace ROOT {
   static TClass *vectorlEgatecLcLSignalmUgR_Dictionary();
   static void vectorlEgatecLcLSignalmUgR_TClassManip(TClass*);
   static void *new_vectorlEgatecLcLSignalmUgR(void *p = 0);
   static void *newArray_vectorlEgatecLcLSignalmUgR(Long_t size, void *p);
   static void delete_vectorlEgatecLcLSignalmUgR(void *p);
   static void deleteArray_vectorlEgatecLcLSignalmUgR(void *p);
   static void destruct_vectorlEgatecLcLSignalmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<gate::Signal*>*)
   {
      vector<gate::Signal*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<gate::Signal*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<gate::Signal*>", -2, "vector", 458,
                  typeid(vector<gate::Signal*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEgatecLcLSignalmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<gate::Signal*>) );
      instance.SetNew(&new_vectorlEgatecLcLSignalmUgR);
      instance.SetNewArray(&newArray_vectorlEgatecLcLSignalmUgR);
      instance.SetDelete(&delete_vectorlEgatecLcLSignalmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEgatecLcLSignalmUgR);
      instance.SetDestructor(&destruct_vectorlEgatecLcLSignalmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<gate::Signal*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<gate::Signal*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgatecLcLSignalmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<gate::Signal*>*)0x0)->GetClass();
      vectorlEgatecLcLSignalmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgatecLcLSignalmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgatecLcLSignalmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::Signal*> : new vector<gate::Signal*>;
   }
   static void *newArray_vectorlEgatecLcLSignalmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::Signal*>[nElements] : new vector<gate::Signal*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgatecLcLSignalmUgR(void *p) {
      delete ((vector<gate::Signal*>*)p);
   }
   static void deleteArray_vectorlEgatecLcLSignalmUgR(void *p) {
      delete [] ((vector<gate::Signal*>*)p);
   }
   static void destruct_vectorlEgatecLcLSignalmUgR(void *p) {
      typedef vector<gate::Signal*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<gate::Signal*>

namespace ROOT {
   static TClass *vectorlEgatecLcLSensormUgR_Dictionary();
   static void vectorlEgatecLcLSensormUgR_TClassManip(TClass*);
   static void *new_vectorlEgatecLcLSensormUgR(void *p = 0);
   static void *newArray_vectorlEgatecLcLSensormUgR(Long_t size, void *p);
   static void delete_vectorlEgatecLcLSensormUgR(void *p);
   static void deleteArray_vectorlEgatecLcLSensormUgR(void *p);
   static void destruct_vectorlEgatecLcLSensormUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<gate::Sensor*>*)
   {
      vector<gate::Sensor*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<gate::Sensor*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<gate::Sensor*>", -2, "vector", 458,
                  typeid(vector<gate::Sensor*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEgatecLcLSensormUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<gate::Sensor*>) );
      instance.SetNew(&new_vectorlEgatecLcLSensormUgR);
      instance.SetNewArray(&newArray_vectorlEgatecLcLSensormUgR);
      instance.SetDelete(&delete_vectorlEgatecLcLSensormUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEgatecLcLSensormUgR);
      instance.SetDestructor(&destruct_vectorlEgatecLcLSensormUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<gate::Sensor*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<gate::Sensor*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgatecLcLSensormUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<gate::Sensor*>*)0x0)->GetClass();
      vectorlEgatecLcLSensormUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgatecLcLSensormUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgatecLcLSensormUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::Sensor*> : new vector<gate::Sensor*>;
   }
   static void *newArray_vectorlEgatecLcLSensormUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::Sensor*>[nElements] : new vector<gate::Sensor*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgatecLcLSensormUgR(void *p) {
      delete ((vector<gate::Sensor*>*)p);
   }
   static void deleteArray_vectorlEgatecLcLSensormUgR(void *p) {
      delete [] ((vector<gate::Sensor*>*)p);
   }
   static void destruct_vectorlEgatecLcLSensormUgR(void *p) {
      typedef vector<gate::Sensor*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<gate::Sensor*>

namespace ROOT {
   static TClass *vectorlEgatecLcLRunmUgR_Dictionary();
   static void vectorlEgatecLcLRunmUgR_TClassManip(TClass*);
   static void *new_vectorlEgatecLcLRunmUgR(void *p = 0);
   static void *newArray_vectorlEgatecLcLRunmUgR(Long_t size, void *p);
   static void delete_vectorlEgatecLcLRunmUgR(void *p);
   static void deleteArray_vectorlEgatecLcLRunmUgR(void *p);
   static void destruct_vectorlEgatecLcLRunmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<gate::Run*>*)
   {
      vector<gate::Run*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<gate::Run*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<gate::Run*>", -2, "vector", 458,
                  typeid(vector<gate::Run*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEgatecLcLRunmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<gate::Run*>) );
      instance.SetNew(&new_vectorlEgatecLcLRunmUgR);
      instance.SetNewArray(&newArray_vectorlEgatecLcLRunmUgR);
      instance.SetDelete(&delete_vectorlEgatecLcLRunmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEgatecLcLRunmUgR);
      instance.SetDestructor(&destruct_vectorlEgatecLcLRunmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<gate::Run*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<gate::Run*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgatecLcLRunmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<gate::Run*>*)0x0)->GetClass();
      vectorlEgatecLcLRunmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgatecLcLRunmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgatecLcLRunmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::Run*> : new vector<gate::Run*>;
   }
   static void *newArray_vectorlEgatecLcLRunmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::Run*>[nElements] : new vector<gate::Run*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgatecLcLRunmUgR(void *p) {
      delete ((vector<gate::Run*>*)p);
   }
   static void deleteArray_vectorlEgatecLcLRunmUgR(void *p) {
      delete [] ((vector<gate::Run*>*)p);
   }
   static void destruct_vectorlEgatecLcLRunmUgR(void *p) {
      typedef vector<gate::Run*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<gate::Run*>

namespace ROOT {
   static TClass *vectorlEgatecLcLPulsemUgR_Dictionary();
   static void vectorlEgatecLcLPulsemUgR_TClassManip(TClass*);
   static void *new_vectorlEgatecLcLPulsemUgR(void *p = 0);
   static void *newArray_vectorlEgatecLcLPulsemUgR(Long_t size, void *p);
   static void delete_vectorlEgatecLcLPulsemUgR(void *p);
   static void deleteArray_vectorlEgatecLcLPulsemUgR(void *p);
   static void destruct_vectorlEgatecLcLPulsemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<gate::Pulse*>*)
   {
      vector<gate::Pulse*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<gate::Pulse*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<gate::Pulse*>", -2, "vector", 458,
                  typeid(vector<gate::Pulse*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEgatecLcLPulsemUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<gate::Pulse*>) );
      instance.SetNew(&new_vectorlEgatecLcLPulsemUgR);
      instance.SetNewArray(&newArray_vectorlEgatecLcLPulsemUgR);
      instance.SetDelete(&delete_vectorlEgatecLcLPulsemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEgatecLcLPulsemUgR);
      instance.SetDestructor(&destruct_vectorlEgatecLcLPulsemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<gate::Pulse*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<gate::Pulse*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgatecLcLPulsemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<gate::Pulse*>*)0x0)->GetClass();
      vectorlEgatecLcLPulsemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgatecLcLPulsemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgatecLcLPulsemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::Pulse*> : new vector<gate::Pulse*>;
   }
   static void *newArray_vectorlEgatecLcLPulsemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::Pulse*>[nElements] : new vector<gate::Pulse*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgatecLcLPulsemUgR(void *p) {
      delete ((vector<gate::Pulse*>*)p);
   }
   static void deleteArray_vectorlEgatecLcLPulsemUgR(void *p) {
      delete [] ((vector<gate::Pulse*>*)p);
   }
   static void destruct_vectorlEgatecLcLPulsemUgR(void *p) {
      typedef vector<gate::Pulse*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<gate::Pulse*>

namespace ROOT {
   static TClass *vectorlEgatecLcLParticlemUgR_Dictionary();
   static void vectorlEgatecLcLParticlemUgR_TClassManip(TClass*);
   static void *new_vectorlEgatecLcLParticlemUgR(void *p = 0);
   static void *newArray_vectorlEgatecLcLParticlemUgR(Long_t size, void *p);
   static void delete_vectorlEgatecLcLParticlemUgR(void *p);
   static void deleteArray_vectorlEgatecLcLParticlemUgR(void *p);
   static void destruct_vectorlEgatecLcLParticlemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<gate::Particle*>*)
   {
      vector<gate::Particle*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<gate::Particle*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<gate::Particle*>", -2, "vector", 458,
                  typeid(vector<gate::Particle*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEgatecLcLParticlemUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<gate::Particle*>) );
      instance.SetNew(&new_vectorlEgatecLcLParticlemUgR);
      instance.SetNewArray(&newArray_vectorlEgatecLcLParticlemUgR);
      instance.SetDelete(&delete_vectorlEgatecLcLParticlemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEgatecLcLParticlemUgR);
      instance.SetDestructor(&destruct_vectorlEgatecLcLParticlemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<gate::Particle*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<gate::Particle*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgatecLcLParticlemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<gate::Particle*>*)0x0)->GetClass();
      vectorlEgatecLcLParticlemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgatecLcLParticlemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgatecLcLParticlemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::Particle*> : new vector<gate::Particle*>;
   }
   static void *newArray_vectorlEgatecLcLParticlemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::Particle*>[nElements] : new vector<gate::Particle*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgatecLcLParticlemUgR(void *p) {
      delete ((vector<gate::Particle*>*)p);
   }
   static void deleteArray_vectorlEgatecLcLParticlemUgR(void *p) {
      delete [] ((vector<gate::Particle*>*)p);
   }
   static void destruct_vectorlEgatecLcLParticlemUgR(void *p) {
      typedef vector<gate::Particle*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<gate::Particle*>

namespace ROOT {
   static TClass *vectorlEgatecLcLMCTrackmUgR_Dictionary();
   static void vectorlEgatecLcLMCTrackmUgR_TClassManip(TClass*);
   static void *new_vectorlEgatecLcLMCTrackmUgR(void *p = 0);
   static void *newArray_vectorlEgatecLcLMCTrackmUgR(Long_t size, void *p);
   static void delete_vectorlEgatecLcLMCTrackmUgR(void *p);
   static void deleteArray_vectorlEgatecLcLMCTrackmUgR(void *p);
   static void destruct_vectorlEgatecLcLMCTrackmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<gate::MCTrack*>*)
   {
      vector<gate::MCTrack*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<gate::MCTrack*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<gate::MCTrack*>", -2, "vector", 458,
                  typeid(vector<gate::MCTrack*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEgatecLcLMCTrackmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<gate::MCTrack*>) );
      instance.SetNew(&new_vectorlEgatecLcLMCTrackmUgR);
      instance.SetNewArray(&newArray_vectorlEgatecLcLMCTrackmUgR);
      instance.SetDelete(&delete_vectorlEgatecLcLMCTrackmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEgatecLcLMCTrackmUgR);
      instance.SetDestructor(&destruct_vectorlEgatecLcLMCTrackmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<gate::MCTrack*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<gate::MCTrack*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgatecLcLMCTrackmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<gate::MCTrack*>*)0x0)->GetClass();
      vectorlEgatecLcLMCTrackmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgatecLcLMCTrackmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgatecLcLMCTrackmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::MCTrack*> : new vector<gate::MCTrack*>;
   }
   static void *newArray_vectorlEgatecLcLMCTrackmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::MCTrack*>[nElements] : new vector<gate::MCTrack*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgatecLcLMCTrackmUgR(void *p) {
      delete ((vector<gate::MCTrack*>*)p);
   }
   static void deleteArray_vectorlEgatecLcLMCTrackmUgR(void *p) {
      delete [] ((vector<gate::MCTrack*>*)p);
   }
   static void destruct_vectorlEgatecLcLMCTrackmUgR(void *p) {
      typedef vector<gate::MCTrack*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<gate::MCTrack*>

namespace ROOT {
   static TClass *vectorlEgatecLcLMCParticlemUgR_Dictionary();
   static void vectorlEgatecLcLMCParticlemUgR_TClassManip(TClass*);
   static void *new_vectorlEgatecLcLMCParticlemUgR(void *p = 0);
   static void *newArray_vectorlEgatecLcLMCParticlemUgR(Long_t size, void *p);
   static void delete_vectorlEgatecLcLMCParticlemUgR(void *p);
   static void deleteArray_vectorlEgatecLcLMCParticlemUgR(void *p);
   static void destruct_vectorlEgatecLcLMCParticlemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<gate::MCParticle*>*)
   {
      vector<gate::MCParticle*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<gate::MCParticle*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<gate::MCParticle*>", -2, "vector", 458,
                  typeid(vector<gate::MCParticle*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEgatecLcLMCParticlemUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<gate::MCParticle*>) );
      instance.SetNew(&new_vectorlEgatecLcLMCParticlemUgR);
      instance.SetNewArray(&newArray_vectorlEgatecLcLMCParticlemUgR);
      instance.SetDelete(&delete_vectorlEgatecLcLMCParticlemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEgatecLcLMCParticlemUgR);
      instance.SetDestructor(&destruct_vectorlEgatecLcLMCParticlemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<gate::MCParticle*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<gate::MCParticle*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgatecLcLMCParticlemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<gate::MCParticle*>*)0x0)->GetClass();
      vectorlEgatecLcLMCParticlemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgatecLcLMCParticlemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgatecLcLMCParticlemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::MCParticle*> : new vector<gate::MCParticle*>;
   }
   static void *newArray_vectorlEgatecLcLMCParticlemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::MCParticle*>[nElements] : new vector<gate::MCParticle*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgatecLcLMCParticlemUgR(void *p) {
      delete ((vector<gate::MCParticle*>*)p);
   }
   static void deleteArray_vectorlEgatecLcLMCParticlemUgR(void *p) {
      delete [] ((vector<gate::MCParticle*>*)p);
   }
   static void destruct_vectorlEgatecLcLMCParticlemUgR(void *p) {
      typedef vector<gate::MCParticle*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<gate::MCParticle*>

namespace ROOT {
   static TClass *vectorlEgatecLcLMCHitmUgR_Dictionary();
   static void vectorlEgatecLcLMCHitmUgR_TClassManip(TClass*);
   static void *new_vectorlEgatecLcLMCHitmUgR(void *p = 0);
   static void *newArray_vectorlEgatecLcLMCHitmUgR(Long_t size, void *p);
   static void delete_vectorlEgatecLcLMCHitmUgR(void *p);
   static void deleteArray_vectorlEgatecLcLMCHitmUgR(void *p);
   static void destruct_vectorlEgatecLcLMCHitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<gate::MCHit*>*)
   {
      vector<gate::MCHit*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<gate::MCHit*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<gate::MCHit*>", -2, "vector", 458,
                  typeid(vector<gate::MCHit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEgatecLcLMCHitmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<gate::MCHit*>) );
      instance.SetNew(&new_vectorlEgatecLcLMCHitmUgR);
      instance.SetNewArray(&newArray_vectorlEgatecLcLMCHitmUgR);
      instance.SetDelete(&delete_vectorlEgatecLcLMCHitmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEgatecLcLMCHitmUgR);
      instance.SetDestructor(&destruct_vectorlEgatecLcLMCHitmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<gate::MCHit*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<gate::MCHit*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgatecLcLMCHitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<gate::MCHit*>*)0x0)->GetClass();
      vectorlEgatecLcLMCHitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgatecLcLMCHitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgatecLcLMCHitmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::MCHit*> : new vector<gate::MCHit*>;
   }
   static void *newArray_vectorlEgatecLcLMCHitmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::MCHit*>[nElements] : new vector<gate::MCHit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgatecLcLMCHitmUgR(void *p) {
      delete ((vector<gate::MCHit*>*)p);
   }
   static void deleteArray_vectorlEgatecLcLMCHitmUgR(void *p) {
      delete [] ((vector<gate::MCHit*>*)p);
   }
   static void destruct_vectorlEgatecLcLMCHitmUgR(void *p) {
      typedef vector<gate::MCHit*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<gate::MCHit*>

namespace ROOT {
   static TClass *vectorlEgatecLcLHitMapmUgR_Dictionary();
   static void vectorlEgatecLcLHitMapmUgR_TClassManip(TClass*);
   static void *new_vectorlEgatecLcLHitMapmUgR(void *p = 0);
   static void *newArray_vectorlEgatecLcLHitMapmUgR(Long_t size, void *p);
   static void delete_vectorlEgatecLcLHitMapmUgR(void *p);
   static void deleteArray_vectorlEgatecLcLHitMapmUgR(void *p);
   static void destruct_vectorlEgatecLcLHitMapmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<gate::HitMap*>*)
   {
      vector<gate::HitMap*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<gate::HitMap*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<gate::HitMap*>", -2, "vector", 458,
                  typeid(vector<gate::HitMap*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEgatecLcLHitMapmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<gate::HitMap*>) );
      instance.SetNew(&new_vectorlEgatecLcLHitMapmUgR);
      instance.SetNewArray(&newArray_vectorlEgatecLcLHitMapmUgR);
      instance.SetDelete(&delete_vectorlEgatecLcLHitMapmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEgatecLcLHitMapmUgR);
      instance.SetDestructor(&destruct_vectorlEgatecLcLHitMapmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<gate::HitMap*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<gate::HitMap*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgatecLcLHitMapmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<gate::HitMap*>*)0x0)->GetClass();
      vectorlEgatecLcLHitMapmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgatecLcLHitMapmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgatecLcLHitMapmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::HitMap*> : new vector<gate::HitMap*>;
   }
   static void *newArray_vectorlEgatecLcLHitMapmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::HitMap*>[nElements] : new vector<gate::HitMap*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgatecLcLHitMapmUgR(void *p) {
      delete ((vector<gate::HitMap*>*)p);
   }
   static void deleteArray_vectorlEgatecLcLHitMapmUgR(void *p) {
      delete [] ((vector<gate::HitMap*>*)p);
   }
   static void destruct_vectorlEgatecLcLHitMapmUgR(void *p) {
      typedef vector<gate::HitMap*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<gate::HitMap*>

namespace ROOT {
   static TClass *vectorlEgatecLcLHitmUgR_Dictionary();
   static void vectorlEgatecLcLHitmUgR_TClassManip(TClass*);
   static void *new_vectorlEgatecLcLHitmUgR(void *p = 0);
   static void *newArray_vectorlEgatecLcLHitmUgR(Long_t size, void *p);
   static void delete_vectorlEgatecLcLHitmUgR(void *p);
   static void deleteArray_vectorlEgatecLcLHitmUgR(void *p);
   static void destruct_vectorlEgatecLcLHitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<gate::Hit*>*)
   {
      vector<gate::Hit*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<gate::Hit*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<gate::Hit*>", -2, "vector", 458,
                  typeid(vector<gate::Hit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEgatecLcLHitmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<gate::Hit*>) );
      instance.SetNew(&new_vectorlEgatecLcLHitmUgR);
      instance.SetNewArray(&newArray_vectorlEgatecLcLHitmUgR);
      instance.SetDelete(&delete_vectorlEgatecLcLHitmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEgatecLcLHitmUgR);
      instance.SetDestructor(&destruct_vectorlEgatecLcLHitmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<gate::Hit*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<gate::Hit*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgatecLcLHitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<gate::Hit*>*)0x0)->GetClass();
      vectorlEgatecLcLHitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgatecLcLHitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgatecLcLHitmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::Hit*> : new vector<gate::Hit*>;
   }
   static void *newArray_vectorlEgatecLcLHitmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::Hit*>[nElements] : new vector<gate::Hit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgatecLcLHitmUgR(void *p) {
      delete ((vector<gate::Hit*>*)p);
   }
   static void deleteArray_vectorlEgatecLcLHitmUgR(void *p) {
      delete [] ((vector<gate::Hit*>*)p);
   }
   static void destruct_vectorlEgatecLcLHitmUgR(void *p) {
      typedef vector<gate::Hit*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<gate::Hit*>

namespace ROOT {
   static TClass *vectorlEgatecLcLClustermUgR_Dictionary();
   static void vectorlEgatecLcLClustermUgR_TClassManip(TClass*);
   static void *new_vectorlEgatecLcLClustermUgR(void *p = 0);
   static void *newArray_vectorlEgatecLcLClustermUgR(Long_t size, void *p);
   static void delete_vectorlEgatecLcLClustermUgR(void *p);
   static void deleteArray_vectorlEgatecLcLClustermUgR(void *p);
   static void destruct_vectorlEgatecLcLClustermUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<gate::Cluster*>*)
   {
      vector<gate::Cluster*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<gate::Cluster*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<gate::Cluster*>", -2, "vector", 458,
                  typeid(vector<gate::Cluster*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEgatecLcLClustermUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<gate::Cluster*>) );
      instance.SetNew(&new_vectorlEgatecLcLClustermUgR);
      instance.SetNewArray(&newArray_vectorlEgatecLcLClustermUgR);
      instance.SetDelete(&delete_vectorlEgatecLcLClustermUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEgatecLcLClustermUgR);
      instance.SetDestructor(&destruct_vectorlEgatecLcLClustermUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<gate::Cluster*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<gate::Cluster*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgatecLcLClustermUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<gate::Cluster*>*)0x0)->GetClass();
      vectorlEgatecLcLClustermUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgatecLcLClustermUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgatecLcLClustermUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::Cluster*> : new vector<gate::Cluster*>;
   }
   static void *newArray_vectorlEgatecLcLClustermUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::Cluster*>[nElements] : new vector<gate::Cluster*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgatecLcLClustermUgR(void *p) {
      delete ((vector<gate::Cluster*>*)p);
   }
   static void deleteArray_vectorlEgatecLcLClustermUgR(void *p) {
      delete [] ((vector<gate::Cluster*>*)p);
   }
   static void destruct_vectorlEgatecLcLClustermUgR(void *p) {
      typedef vector<gate::Cluster*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<gate::Cluster*>

namespace ROOT {
   static TClass *vectorlEgatecLcLBTrackmUgR_Dictionary();
   static void vectorlEgatecLcLBTrackmUgR_TClassManip(TClass*);
   static void *new_vectorlEgatecLcLBTrackmUgR(void *p = 0);
   static void *newArray_vectorlEgatecLcLBTrackmUgR(Long_t size, void *p);
   static void delete_vectorlEgatecLcLBTrackmUgR(void *p);
   static void deleteArray_vectorlEgatecLcLBTrackmUgR(void *p);
   static void destruct_vectorlEgatecLcLBTrackmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<gate::BTrack*>*)
   {
      vector<gate::BTrack*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<gate::BTrack*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<gate::BTrack*>", -2, "vector", 458,
                  typeid(vector<gate::BTrack*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEgatecLcLBTrackmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<gate::BTrack*>) );
      instance.SetNew(&new_vectorlEgatecLcLBTrackmUgR);
      instance.SetNewArray(&newArray_vectorlEgatecLcLBTrackmUgR);
      instance.SetDelete(&delete_vectorlEgatecLcLBTrackmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEgatecLcLBTrackmUgR);
      instance.SetDestructor(&destruct_vectorlEgatecLcLBTrackmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<gate::BTrack*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<gate::BTrack*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgatecLcLBTrackmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<gate::BTrack*>*)0x0)->GetClass();
      vectorlEgatecLcLBTrackmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgatecLcLBTrackmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgatecLcLBTrackmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::BTrack*> : new vector<gate::BTrack*>;
   }
   static void *newArray_vectorlEgatecLcLBTrackmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::BTrack*>[nElements] : new vector<gate::BTrack*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgatecLcLBTrackmUgR(void *p) {
      delete ((vector<gate::BTrack*>*)p);
   }
   static void deleteArray_vectorlEgatecLcLBTrackmUgR(void *p) {
      delete [] ((vector<gate::BTrack*>*)p);
   }
   static void destruct_vectorlEgatecLcLBTrackmUgR(void *p) {
      typedef vector<gate::BTrack*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<gate::BTrack*>

namespace ROOT {
   static TClass *vectorlEgatecLcLBParticlemUgR_Dictionary();
   static void vectorlEgatecLcLBParticlemUgR_TClassManip(TClass*);
   static void *new_vectorlEgatecLcLBParticlemUgR(void *p = 0);
   static void *newArray_vectorlEgatecLcLBParticlemUgR(Long_t size, void *p);
   static void delete_vectorlEgatecLcLBParticlemUgR(void *p);
   static void deleteArray_vectorlEgatecLcLBParticlemUgR(void *p);
   static void destruct_vectorlEgatecLcLBParticlemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<gate::BParticle*>*)
   {
      vector<gate::BParticle*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<gate::BParticle*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<gate::BParticle*>", -2, "vector", 458,
                  typeid(vector<gate::BParticle*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEgatecLcLBParticlemUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<gate::BParticle*>) );
      instance.SetNew(&new_vectorlEgatecLcLBParticlemUgR);
      instance.SetNewArray(&newArray_vectorlEgatecLcLBParticlemUgR);
      instance.SetDelete(&delete_vectorlEgatecLcLBParticlemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEgatecLcLBParticlemUgR);
      instance.SetDestructor(&destruct_vectorlEgatecLcLBParticlemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<gate::BParticle*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<gate::BParticle*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgatecLcLBParticlemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<gate::BParticle*>*)0x0)->GetClass();
      vectorlEgatecLcLBParticlemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgatecLcLBParticlemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgatecLcLBParticlemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::BParticle*> : new vector<gate::BParticle*>;
   }
   static void *newArray_vectorlEgatecLcLBParticlemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::BParticle*>[nElements] : new vector<gate::BParticle*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgatecLcLBParticlemUgR(void *p) {
      delete ((vector<gate::BParticle*>*)p);
   }
   static void deleteArray_vectorlEgatecLcLBParticlemUgR(void *p) {
      delete [] ((vector<gate::BParticle*>*)p);
   }
   static void destruct_vectorlEgatecLcLBParticlemUgR(void *p) {
      typedef vector<gate::BParticle*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<gate::BParticle*>

namespace ROOT {
   static TClass *vectorlEgatecLcLBHitmUgR_Dictionary();
   static void vectorlEgatecLcLBHitmUgR_TClassManip(TClass*);
   static void *new_vectorlEgatecLcLBHitmUgR(void *p = 0);
   static void *newArray_vectorlEgatecLcLBHitmUgR(Long_t size, void *p);
   static void delete_vectorlEgatecLcLBHitmUgR(void *p);
   static void deleteArray_vectorlEgatecLcLBHitmUgR(void *p);
   static void destruct_vectorlEgatecLcLBHitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<gate::BHit*>*)
   {
      vector<gate::BHit*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<gate::BHit*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<gate::BHit*>", -2, "vector", 458,
                  typeid(vector<gate::BHit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEgatecLcLBHitmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<gate::BHit*>) );
      instance.SetNew(&new_vectorlEgatecLcLBHitmUgR);
      instance.SetNewArray(&newArray_vectorlEgatecLcLBHitmUgR);
      instance.SetDelete(&delete_vectorlEgatecLcLBHitmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEgatecLcLBHitmUgR);
      instance.SetDestructor(&destruct_vectorlEgatecLcLBHitmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<gate::BHit*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<gate::BHit*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgatecLcLBHitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<gate::BHit*>*)0x0)->GetClass();
      vectorlEgatecLcLBHitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgatecLcLBHitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgatecLcLBHitmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::BHit*> : new vector<gate::BHit*>;
   }
   static void *newArray_vectorlEgatecLcLBHitmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::BHit*>[nElements] : new vector<gate::BHit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgatecLcLBHitmUgR(void *p) {
      delete ((vector<gate::BHit*>*)p);
   }
   static void deleteArray_vectorlEgatecLcLBHitmUgR(void *p) {
      delete [] ((vector<gate::BHit*>*)p);
   }
   static void destruct_vectorlEgatecLcLBHitmUgR(void *p) {
      typedef vector<gate::BHit*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<gate::BHit*>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 458,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *vectorlEconstsPgatecLcLMCParticlemUgR_Dictionary();
   static void vectorlEconstsPgatecLcLMCParticlemUgR_TClassManip(TClass*);
   static void *new_vectorlEconstsPgatecLcLMCParticlemUgR(void *p = 0);
   static void *newArray_vectorlEconstsPgatecLcLMCParticlemUgR(Long_t size, void *p);
   static void delete_vectorlEconstsPgatecLcLMCParticlemUgR(void *p);
   static void deleteArray_vectorlEconstsPgatecLcLMCParticlemUgR(void *p);
   static void destruct_vectorlEconstsPgatecLcLMCParticlemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<const gate::MCParticle*>*)
   {
      vector<const gate::MCParticle*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<const gate::MCParticle*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<const gate::MCParticle*>", -2, "vector", 458,
                  typeid(vector<const gate::MCParticle*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEconstsPgatecLcLMCParticlemUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<const gate::MCParticle*>) );
      instance.SetNew(&new_vectorlEconstsPgatecLcLMCParticlemUgR);
      instance.SetNewArray(&newArray_vectorlEconstsPgatecLcLMCParticlemUgR);
      instance.SetDelete(&delete_vectorlEconstsPgatecLcLMCParticlemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEconstsPgatecLcLMCParticlemUgR);
      instance.SetDestructor(&destruct_vectorlEconstsPgatecLcLMCParticlemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<const gate::MCParticle*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<const gate::MCParticle*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEconstsPgatecLcLMCParticlemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<const gate::MCParticle*>*)0x0)->GetClass();
      vectorlEconstsPgatecLcLMCParticlemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEconstsPgatecLcLMCParticlemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEconstsPgatecLcLMCParticlemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const gate::MCParticle*> : new vector<const gate::MCParticle*>;
   }
   static void *newArray_vectorlEconstsPgatecLcLMCParticlemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const gate::MCParticle*>[nElements] : new vector<const gate::MCParticle*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEconstsPgatecLcLMCParticlemUgR(void *p) {
      delete ((vector<const gate::MCParticle*>*)p);
   }
   static void deleteArray_vectorlEconstsPgatecLcLMCParticlemUgR(void *p) {
      delete [] ((vector<const gate::MCParticle*>*)p);
   }
   static void destruct_vectorlEconstsPgatecLcLMCParticlemUgR(void *p) {
      typedef vector<const gate::MCParticle*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<const gate::MCParticle*>

namespace ROOT {
   static TClass *vectorlEconstsPgatecLcLBTrackmUgR_Dictionary();
   static void vectorlEconstsPgatecLcLBTrackmUgR_TClassManip(TClass*);
   static void *new_vectorlEconstsPgatecLcLBTrackmUgR(void *p = 0);
   static void *newArray_vectorlEconstsPgatecLcLBTrackmUgR(Long_t size, void *p);
   static void delete_vectorlEconstsPgatecLcLBTrackmUgR(void *p);
   static void deleteArray_vectorlEconstsPgatecLcLBTrackmUgR(void *p);
   static void destruct_vectorlEconstsPgatecLcLBTrackmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<const gate::BTrack*>*)
   {
      vector<const gate::BTrack*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<const gate::BTrack*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<const gate::BTrack*>", -2, "vector", 458,
                  typeid(vector<const gate::BTrack*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEconstsPgatecLcLBTrackmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<const gate::BTrack*>) );
      instance.SetNew(&new_vectorlEconstsPgatecLcLBTrackmUgR);
      instance.SetNewArray(&newArray_vectorlEconstsPgatecLcLBTrackmUgR);
      instance.SetDelete(&delete_vectorlEconstsPgatecLcLBTrackmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEconstsPgatecLcLBTrackmUgR);
      instance.SetDestructor(&destruct_vectorlEconstsPgatecLcLBTrackmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<const gate::BTrack*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<const gate::BTrack*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEconstsPgatecLcLBTrackmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<const gate::BTrack*>*)0x0)->GetClass();
      vectorlEconstsPgatecLcLBTrackmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEconstsPgatecLcLBTrackmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEconstsPgatecLcLBTrackmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const gate::BTrack*> : new vector<const gate::BTrack*>;
   }
   static void *newArray_vectorlEconstsPgatecLcLBTrackmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const gate::BTrack*>[nElements] : new vector<const gate::BTrack*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEconstsPgatecLcLBTrackmUgR(void *p) {
      delete ((vector<const gate::BTrack*>*)p);
   }
   static void deleteArray_vectorlEconstsPgatecLcLBTrackmUgR(void *p) {
      delete [] ((vector<const gate::BTrack*>*)p);
   }
   static void destruct_vectorlEconstsPgatecLcLBTrackmUgR(void *p) {
      typedef vector<const gate::BTrack*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<const gate::BTrack*>

namespace ROOT {
   static TClass *vectorlEconstsPgatecLcLBParticlemUgR_Dictionary();
   static void vectorlEconstsPgatecLcLBParticlemUgR_TClassManip(TClass*);
   static void *new_vectorlEconstsPgatecLcLBParticlemUgR(void *p = 0);
   static void *newArray_vectorlEconstsPgatecLcLBParticlemUgR(Long_t size, void *p);
   static void delete_vectorlEconstsPgatecLcLBParticlemUgR(void *p);
   static void deleteArray_vectorlEconstsPgatecLcLBParticlemUgR(void *p);
   static void destruct_vectorlEconstsPgatecLcLBParticlemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<const gate::BParticle*>*)
   {
      vector<const gate::BParticle*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<const gate::BParticle*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<const gate::BParticle*>", -2, "vector", 458,
                  typeid(vector<const gate::BParticle*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEconstsPgatecLcLBParticlemUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<const gate::BParticle*>) );
      instance.SetNew(&new_vectorlEconstsPgatecLcLBParticlemUgR);
      instance.SetNewArray(&newArray_vectorlEconstsPgatecLcLBParticlemUgR);
      instance.SetDelete(&delete_vectorlEconstsPgatecLcLBParticlemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEconstsPgatecLcLBParticlemUgR);
      instance.SetDestructor(&destruct_vectorlEconstsPgatecLcLBParticlemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<const gate::BParticle*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<const gate::BParticle*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEconstsPgatecLcLBParticlemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<const gate::BParticle*>*)0x0)->GetClass();
      vectorlEconstsPgatecLcLBParticlemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEconstsPgatecLcLBParticlemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEconstsPgatecLcLBParticlemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const gate::BParticle*> : new vector<const gate::BParticle*>;
   }
   static void *newArray_vectorlEconstsPgatecLcLBParticlemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const gate::BParticle*>[nElements] : new vector<const gate::BParticle*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEconstsPgatecLcLBParticlemUgR(void *p) {
      delete ((vector<const gate::BParticle*>*)p);
   }
   static void deleteArray_vectorlEconstsPgatecLcLBParticlemUgR(void *p) {
      delete [] ((vector<const gate::BParticle*>*)p);
   }
   static void destruct_vectorlEconstsPgatecLcLBParticlemUgR(void *p) {
      typedef vector<const gate::BParticle*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<const gate::BParticle*>

namespace ROOT {
   static TClass *vectorlETObjectgR_Dictionary();
   static void vectorlETObjectgR_TClassManip(TClass*);
   static void *new_vectorlETObjectgR(void *p = 0);
   static void *newArray_vectorlETObjectgR(Long_t size, void *p);
   static void delete_vectorlETObjectgR(void *p);
   static void deleteArray_vectorlETObjectgR(void *p);
   static void destruct_vectorlETObjectgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TObject>*)
   {
      vector<TObject> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TObject>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TObject>", -2, "vector", 458,
                  typeid(vector<TObject>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETObjectgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<TObject>) );
      instance.SetNew(&new_vectorlETObjectgR);
      instance.SetNewArray(&newArray_vectorlETObjectgR);
      instance.SetDelete(&delete_vectorlETObjectgR);
      instance.SetDeleteArray(&deleteArray_vectorlETObjectgR);
      instance.SetDestructor(&destruct_vectorlETObjectgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TObject> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<TObject>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETObjectgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TObject>*)0x0)->GetClass();
      vectorlETObjectgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETObjectgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETObjectgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TObject> : new vector<TObject>;
   }
   static void *newArray_vectorlETObjectgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TObject>[nElements] : new vector<TObject>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETObjectgR(void *p) {
      delete ((vector<TObject>*)p);
   }
   static void deleteArray_vectorlETObjectgR(void *p) {
      delete [] ((vector<TObject>*)p);
   }
   static void destruct_vectorlETObjectgR(void *p) {
      typedef vector<TObject> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TObject>

namespace ROOT {
   static TClass *multimaplEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR_Dictionary();
   static void multimaplEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR_TClassManip(TClass*);
   static void *new_multimaplEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR(void *p = 0);
   static void *newArray_multimaplEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR(Long_t size, void *p);
   static void delete_multimaplEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR(void *p);
   static void deleteArray_multimaplEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR(void *p);
   static void destruct_multimaplEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const multimap<gate::SENSORTYPE,gate::Track*>*)
   {
      multimap<gate::SENSORTYPE,gate::Track*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(multimap<gate::SENSORTYPE,gate::Track*>));
      static ::ROOT::TGenericClassInfo 
         instance("multimap<gate::SENSORTYPE,gate::Track*>", -2, "map", 1531,
                  typeid(multimap<gate::SENSORTYPE,gate::Track*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &multimaplEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR_Dictionary, isa_proxy, 4,
                  sizeof(multimap<gate::SENSORTYPE,gate::Track*>) );
      instance.SetNew(&new_multimaplEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR);
      instance.SetNewArray(&newArray_multimaplEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR);
      instance.SetDelete(&delete_multimaplEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR);
      instance.SetDeleteArray(&deleteArray_multimaplEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR);
      instance.SetDestructor(&destruct_multimaplEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< multimap<gate::SENSORTYPE,gate::Track*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const multimap<gate::SENSORTYPE,gate::Track*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *multimaplEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const multimap<gate::SENSORTYPE,gate::Track*>*)0x0)->GetClass();
      multimaplEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR_TClassManip(theClass);
   return theClass;
   }

   static void multimaplEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_multimaplEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<gate::SENSORTYPE,gate::Track*> : new multimap<gate::SENSORTYPE,gate::Track*>;
   }
   static void *newArray_multimaplEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<gate::SENSORTYPE,gate::Track*>[nElements] : new multimap<gate::SENSORTYPE,gate::Track*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_multimaplEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR(void *p) {
      delete ((multimap<gate::SENSORTYPE,gate::Track*>*)p);
   }
   static void deleteArray_multimaplEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR(void *p) {
      delete [] ((multimap<gate::SENSORTYPE,gate::Track*>*)p);
   }
   static void destruct_multimaplEgatecLcLSENSORTYPEcOgatecLcLTrackmUgR(void *p) {
      typedef multimap<gate::SENSORTYPE,gate::Track*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class multimap<gate::SENSORTYPE,gate::Track*>

namespace ROOT {
   static TClass *multimaplEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR_Dictionary();
   static void multimaplEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR_TClassManip(TClass*);
   static void *new_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR(void *p = 0);
   static void *newArray_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR(Long_t size, void *p);
   static void delete_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR(void *p);
   static void deleteArray_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR(void *p);
   static void destruct_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const multimap<gate::SENSORTYPE,gate::HitMap*>*)
   {
      multimap<gate::SENSORTYPE,gate::HitMap*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(multimap<gate::SENSORTYPE,gate::HitMap*>));
      static ::ROOT::TGenericClassInfo 
         instance("multimap<gate::SENSORTYPE,gate::HitMap*>", -2, "map", 1531,
                  typeid(multimap<gate::SENSORTYPE,gate::HitMap*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &multimaplEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR_Dictionary, isa_proxy, 4,
                  sizeof(multimap<gate::SENSORTYPE,gate::HitMap*>) );
      instance.SetNew(&new_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR);
      instance.SetNewArray(&newArray_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR);
      instance.SetDelete(&delete_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR);
      instance.SetDeleteArray(&deleteArray_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR);
      instance.SetDestructor(&destruct_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< multimap<gate::SENSORTYPE,gate::HitMap*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const multimap<gate::SENSORTYPE,gate::HitMap*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *multimaplEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const multimap<gate::SENSORTYPE,gate::HitMap*>*)0x0)->GetClass();
      multimaplEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR_TClassManip(theClass);
   return theClass;
   }

   static void multimaplEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<gate::SENSORTYPE,gate::HitMap*> : new multimap<gate::SENSORTYPE,gate::HitMap*>;
   }
   static void *newArray_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<gate::SENSORTYPE,gate::HitMap*>[nElements] : new multimap<gate::SENSORTYPE,gate::HitMap*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR(void *p) {
      delete ((multimap<gate::SENSORTYPE,gate::HitMap*>*)p);
   }
   static void deleteArray_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR(void *p) {
      delete [] ((multimap<gate::SENSORTYPE,gate::HitMap*>*)p);
   }
   static void destruct_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitMapmUgR(void *p) {
      typedef multimap<gate::SENSORTYPE,gate::HitMap*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class multimap<gate::SENSORTYPE,gate::HitMap*>

namespace ROOT {
   static TClass *multimaplEgatecLcLSENSORTYPEcOgatecLcLHitmUgR_Dictionary();
   static void multimaplEgatecLcLSENSORTYPEcOgatecLcLHitmUgR_TClassManip(TClass*);
   static void *new_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitmUgR(void *p = 0);
   static void *newArray_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitmUgR(Long_t size, void *p);
   static void delete_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitmUgR(void *p);
   static void deleteArray_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitmUgR(void *p);
   static void destruct_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const multimap<gate::SENSORTYPE,gate::Hit*>*)
   {
      multimap<gate::SENSORTYPE,gate::Hit*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(multimap<gate::SENSORTYPE,gate::Hit*>));
      static ::ROOT::TGenericClassInfo 
         instance("multimap<gate::SENSORTYPE,gate::Hit*>", -2, "map", 1531,
                  typeid(multimap<gate::SENSORTYPE,gate::Hit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &multimaplEgatecLcLSENSORTYPEcOgatecLcLHitmUgR_Dictionary, isa_proxy, 4,
                  sizeof(multimap<gate::SENSORTYPE,gate::Hit*>) );
      instance.SetNew(&new_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitmUgR);
      instance.SetNewArray(&newArray_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitmUgR);
      instance.SetDelete(&delete_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitmUgR);
      instance.SetDeleteArray(&deleteArray_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitmUgR);
      instance.SetDestructor(&destruct_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< multimap<gate::SENSORTYPE,gate::Hit*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const multimap<gate::SENSORTYPE,gate::Hit*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *multimaplEgatecLcLSENSORTYPEcOgatecLcLHitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const multimap<gate::SENSORTYPE,gate::Hit*>*)0x0)->GetClass();
      multimaplEgatecLcLSENSORTYPEcOgatecLcLHitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void multimaplEgatecLcLSENSORTYPEcOgatecLcLHitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<gate::SENSORTYPE,gate::Hit*> : new multimap<gate::SENSORTYPE,gate::Hit*>;
   }
   static void *newArray_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<gate::SENSORTYPE,gate::Hit*>[nElements] : new multimap<gate::SENSORTYPE,gate::Hit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitmUgR(void *p) {
      delete ((multimap<gate::SENSORTYPE,gate::Hit*>*)p);
   }
   static void deleteArray_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitmUgR(void *p) {
      delete [] ((multimap<gate::SENSORTYPE,gate::Hit*>*)p);
   }
   static void destruct_multimaplEgatecLcLSENSORTYPEcOgatecLcLHitmUgR(void *p) {
      typedef multimap<gate::SENSORTYPE,gate::Hit*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class multimap<gate::SENSORTYPE,gate::Hit*>

namespace ROOT {
   static TClass *multimaplEgatecLcLSENSORTYPEcOgatecLcLClustermUgR_Dictionary();
   static void multimaplEgatecLcLSENSORTYPEcOgatecLcLClustermUgR_TClassManip(TClass*);
   static void *new_multimaplEgatecLcLSENSORTYPEcOgatecLcLClustermUgR(void *p = 0);
   static void *newArray_multimaplEgatecLcLSENSORTYPEcOgatecLcLClustermUgR(Long_t size, void *p);
   static void delete_multimaplEgatecLcLSENSORTYPEcOgatecLcLClustermUgR(void *p);
   static void deleteArray_multimaplEgatecLcLSENSORTYPEcOgatecLcLClustermUgR(void *p);
   static void destruct_multimaplEgatecLcLSENSORTYPEcOgatecLcLClustermUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const multimap<gate::SENSORTYPE,gate::Cluster*>*)
   {
      multimap<gate::SENSORTYPE,gate::Cluster*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(multimap<gate::SENSORTYPE,gate::Cluster*>));
      static ::ROOT::TGenericClassInfo 
         instance("multimap<gate::SENSORTYPE,gate::Cluster*>", -2, "map", 1531,
                  typeid(multimap<gate::SENSORTYPE,gate::Cluster*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &multimaplEgatecLcLSENSORTYPEcOgatecLcLClustermUgR_Dictionary, isa_proxy, 4,
                  sizeof(multimap<gate::SENSORTYPE,gate::Cluster*>) );
      instance.SetNew(&new_multimaplEgatecLcLSENSORTYPEcOgatecLcLClustermUgR);
      instance.SetNewArray(&newArray_multimaplEgatecLcLSENSORTYPEcOgatecLcLClustermUgR);
      instance.SetDelete(&delete_multimaplEgatecLcLSENSORTYPEcOgatecLcLClustermUgR);
      instance.SetDeleteArray(&deleteArray_multimaplEgatecLcLSENSORTYPEcOgatecLcLClustermUgR);
      instance.SetDestructor(&destruct_multimaplEgatecLcLSENSORTYPEcOgatecLcLClustermUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< multimap<gate::SENSORTYPE,gate::Cluster*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const multimap<gate::SENSORTYPE,gate::Cluster*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *multimaplEgatecLcLSENSORTYPEcOgatecLcLClustermUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const multimap<gate::SENSORTYPE,gate::Cluster*>*)0x0)->GetClass();
      multimaplEgatecLcLSENSORTYPEcOgatecLcLClustermUgR_TClassManip(theClass);
   return theClass;
   }

   static void multimaplEgatecLcLSENSORTYPEcOgatecLcLClustermUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_multimaplEgatecLcLSENSORTYPEcOgatecLcLClustermUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<gate::SENSORTYPE,gate::Cluster*> : new multimap<gate::SENSORTYPE,gate::Cluster*>;
   }
   static void *newArray_multimaplEgatecLcLSENSORTYPEcOgatecLcLClustermUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<gate::SENSORTYPE,gate::Cluster*>[nElements] : new multimap<gate::SENSORTYPE,gate::Cluster*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_multimaplEgatecLcLSENSORTYPEcOgatecLcLClustermUgR(void *p) {
      delete ((multimap<gate::SENSORTYPE,gate::Cluster*>*)p);
   }
   static void deleteArray_multimaplEgatecLcLSENSORTYPEcOgatecLcLClustermUgR(void *p) {
      delete [] ((multimap<gate::SENSORTYPE,gate::Cluster*>*)p);
   }
   static void destruct_multimaplEgatecLcLSENSORTYPEcOgatecLcLClustermUgR(void *p) {
      typedef multimap<gate::SENSORTYPE,gate::Cluster*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class multimap<gate::SENSORTYPE,gate::Cluster*>

namespace ROOT {
   static TClass *maplEstringcOvectorlEstringgRsPgR_Dictionary();
   static void maplEstringcOvectorlEstringgRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEstringgRsPgR(void *p = 0);
   static void *newArray_maplEstringcOvectorlEstringgRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEstringgRsPgR(void *p);
   static void deleteArray_maplEstringcOvectorlEstringgRsPgR(void *p);
   static void destruct_maplEstringcOvectorlEstringgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<string> >*)
   {
      map<string,vector<string> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<string> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<string> >", -2, "map", 807,
                  typeid(map<string,vector<string> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEstringgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,vector<string> >) );
      instance.SetNew(&new_maplEstringcOvectorlEstringgRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEstringgRsPgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEstringgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEstringgRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEstringgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<string> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,vector<string> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlEstringgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,vector<string> >*)0x0)->GetClass();
      maplEstringcOvectorlEstringgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlEstringgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEstringgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<string> > : new map<string,vector<string> >;
   }
   static void *newArray_maplEstringcOvectorlEstringgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<string> >[nElements] : new map<string,vector<string> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEstringgRsPgR(void *p) {
      delete ((map<string,vector<string> >*)p);
   }
   static void deleteArray_maplEstringcOvectorlEstringgRsPgR(void *p) {
      delete [] ((map<string,vector<string> >*)p);
   }
   static void destruct_maplEstringcOvectorlEstringgRsPgR(void *p) {
      typedef map<string,vector<string> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<string> >

namespace ROOT {
   static TClass *maplEstringcOvectorlEintgRsPgR_Dictionary();
   static void maplEstringcOvectorlEintgRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEintgRsPgR(void *p = 0);
   static void *newArray_maplEstringcOvectorlEintgRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEintgRsPgR(void *p);
   static void deleteArray_maplEstringcOvectorlEintgRsPgR(void *p);
   static void destruct_maplEstringcOvectorlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<int> >*)
   {
      map<string,vector<int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<int> >", -2, "map", 807,
                  typeid(map<string,vector<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,vector<int> >) );
      instance.SetNew(&new_maplEstringcOvectorlEintgRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEintgRsPgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEintgRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<int> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,vector<int> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,vector<int> >*)0x0)->GetClass();
      maplEstringcOvectorlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<int> > : new map<string,vector<int> >;
   }
   static void *newArray_maplEstringcOvectorlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<int> >[nElements] : new map<string,vector<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEintgRsPgR(void *p) {
      delete ((map<string,vector<int> >*)p);
   }
   static void deleteArray_maplEstringcOvectorlEintgRsPgR(void *p) {
      delete [] ((map<string,vector<int> >*)p);
   }
   static void destruct_maplEstringcOvectorlEintgRsPgR(void *p) {
      typedef map<string,vector<int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<int> >

namespace ROOT {
   static TClass *maplEstringcOvectorlEdoublegRsPgR_Dictionary();
   static void maplEstringcOvectorlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEdoublegRsPgR(void *p = 0);
   static void *newArray_maplEstringcOvectorlEdoublegRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEdoublegRsPgR(void *p);
   static void deleteArray_maplEstringcOvectorlEdoublegRsPgR(void *p);
   static void destruct_maplEstringcOvectorlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<double> >*)
   {
      map<string,vector<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<double> >", -2, "map", 807,
                  typeid(map<string,vector<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,vector<double> >) );
      instance.SetNew(&new_maplEstringcOvectorlEdoublegRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEdoublegRsPgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEdoublegRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<double> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,vector<double> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,vector<double> >*)0x0)->GetClass();
      maplEstringcOvectorlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<double> > : new map<string,vector<double> >;
   }
   static void *newArray_maplEstringcOvectorlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<double> >[nElements] : new map<string,vector<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEdoublegRsPgR(void *p) {
      delete ((map<string,vector<double> >*)p);
   }
   static void deleteArray_maplEstringcOvectorlEdoublegRsPgR(void *p) {
      delete [] ((map<string,vector<double> >*)p);
   }
   static void destruct_maplEstringcOvectorlEdoublegRsPgR(void *p) {
      typedef map<string,vector<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<double> >

namespace ROOT {
   static TClass *maplEstringcOvectorlETObjectgRsPgR_Dictionary();
   static void maplEstringcOvectorlETObjectgRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlETObjectgRsPgR(void *p = 0);
   static void *newArray_maplEstringcOvectorlETObjectgRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlETObjectgRsPgR(void *p);
   static void deleteArray_maplEstringcOvectorlETObjectgRsPgR(void *p);
   static void destruct_maplEstringcOvectorlETObjectgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<TObject> >*)
   {
      map<string,vector<TObject> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<TObject> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<TObject> >", -2, "map", 807,
                  typeid(map<string,vector<TObject> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlETObjectgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,vector<TObject> >) );
      instance.SetNew(&new_maplEstringcOvectorlETObjectgRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlETObjectgRsPgR);
      instance.SetDelete(&delete_maplEstringcOvectorlETObjectgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlETObjectgRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlETObjectgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<TObject> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,vector<TObject> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlETObjectgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,vector<TObject> >*)0x0)->GetClass();
      maplEstringcOvectorlETObjectgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlETObjectgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlETObjectgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<TObject> > : new map<string,vector<TObject> >;
   }
   static void *newArray_maplEstringcOvectorlETObjectgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<TObject> >[nElements] : new map<string,vector<TObject> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlETObjectgRsPgR(void *p) {
      delete ((map<string,vector<TObject> >*)p);
   }
   static void deleteArray_maplEstringcOvectorlETObjectgRsPgR(void *p) {
      delete [] ((map<string,vector<TObject> >*)p);
   }
   static void destruct_maplEstringcOvectorlETObjectgRsPgR(void *p) {
      typedef map<string,vector<TObject> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<TObject> >

namespace ROOT {
   static TClass *maplEstringcOstringgR_Dictionary();
   static void maplEstringcOstringgR_TClassManip(TClass*);
   static void *new_maplEstringcOstringgR(void *p = 0);
   static void *newArray_maplEstringcOstringgR(Long_t size, void *p);
   static void delete_maplEstringcOstringgR(void *p);
   static void deleteArray_maplEstringcOstringgR(void *p);
   static void destruct_maplEstringcOstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,string>*)
   {
      map<string,string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,string>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,string>", -2, "map", 807,
                  typeid(map<string,string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOstringgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,string>) );
      instance.SetNew(&new_maplEstringcOstringgR);
      instance.SetNewArray(&newArray_maplEstringcOstringgR);
      instance.SetDelete(&delete_maplEstringcOstringgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOstringgR);
      instance.SetDestructor(&destruct_maplEstringcOstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,string> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,string>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,string>*)0x0)->GetClass();
      maplEstringcOstringgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOstringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,string> : new map<string,string>;
   }
   static void *newArray_maplEstringcOstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,string>[nElements] : new map<string,string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOstringgR(void *p) {
      delete ((map<string,string>*)p);
   }
   static void deleteArray_maplEstringcOstringgR(void *p) {
      delete [] ((map<string,string>*)p);
   }
   static void destruct_maplEstringcOstringgR(void *p) {
      typedef map<string,string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,string>

namespace ROOT {
   static TClass *maplEstringcOintgR_Dictionary();
   static void maplEstringcOintgR_TClassManip(TClass*);
   static void *new_maplEstringcOintgR(void *p = 0);
   static void *newArray_maplEstringcOintgR(Long_t size, void *p);
   static void delete_maplEstringcOintgR(void *p);
   static void deleteArray_maplEstringcOintgR(void *p);
   static void destruct_maplEstringcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,int>*)
   {
      map<string,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,int>", -2, "map", 807,
                  typeid(map<string,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,int>) );
      instance.SetNew(&new_maplEstringcOintgR);
      instance.SetNewArray(&newArray_maplEstringcOintgR);
      instance.SetDelete(&delete_maplEstringcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOintgR);
      instance.SetDestructor(&destruct_maplEstringcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,int>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,int>*)0x0)->GetClass();
      maplEstringcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,int> : new map<string,int>;
   }
   static void *newArray_maplEstringcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,int>[nElements] : new map<string,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOintgR(void *p) {
      delete ((map<string,int>*)p);
   }
   static void deleteArray_maplEstringcOintgR(void *p) {
      delete [] ((map<string,int>*)p);
   }
   static void destruct_maplEstringcOintgR(void *p) {
      typedef map<string,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,int>

namespace ROOT {
   static TClass *maplEstringcOdoublegR_Dictionary();
   static void maplEstringcOdoublegR_TClassManip(TClass*);
   static void *new_maplEstringcOdoublegR(void *p = 0);
   static void *newArray_maplEstringcOdoublegR(Long_t size, void *p);
   static void delete_maplEstringcOdoublegR(void *p);
   static void deleteArray_maplEstringcOdoublegR(void *p);
   static void destruct_maplEstringcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,double>*)
   {
      map<string,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,double>", -2, "map", 807,
                  typeid(map<string,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,double>) );
      instance.SetNew(&new_maplEstringcOdoublegR);
      instance.SetNewArray(&newArray_maplEstringcOdoublegR);
      instance.SetDelete(&delete_maplEstringcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOdoublegR);
      instance.SetDestructor(&destruct_maplEstringcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,double>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,double>*)0x0)->GetClass();
      maplEstringcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,double> : new map<string,double>;
   }
   static void *newArray_maplEstringcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,double>[nElements] : new map<string,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOdoublegR(void *p) {
      delete ((map<string,double>*)p);
   }
   static void deleteArray_maplEstringcOdoublegR(void *p) {
      delete [] ((map<string,double>*)p);
   }
   static void destruct_maplEstringcOdoublegR(void *p) {
      typedef map<string,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,double>

namespace ROOT {
   static TClass *maplEstringcOTObjectgR_Dictionary();
   static void maplEstringcOTObjectgR_TClassManip(TClass*);
   static void *new_maplEstringcOTObjectgR(void *p = 0);
   static void *newArray_maplEstringcOTObjectgR(Long_t size, void *p);
   static void delete_maplEstringcOTObjectgR(void *p);
   static void deleteArray_maplEstringcOTObjectgR(void *p);
   static void destruct_maplEstringcOTObjectgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,TObject>*)
   {
      map<string,TObject> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,TObject>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,TObject>", -2, "map", 807,
                  typeid(map<string,TObject>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOTObjectgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,TObject>) );
      instance.SetNew(&new_maplEstringcOTObjectgR);
      instance.SetNewArray(&newArray_maplEstringcOTObjectgR);
      instance.SetDelete(&delete_maplEstringcOTObjectgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOTObjectgR);
      instance.SetDestructor(&destruct_maplEstringcOTObjectgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,TObject> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,TObject>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOTObjectgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,TObject>*)0x0)->GetClass();
      maplEstringcOTObjectgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOTObjectgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOTObjectgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,TObject> : new map<string,TObject>;
   }
   static void *newArray_maplEstringcOTObjectgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,TObject>[nElements] : new map<string,TObject>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOTObjectgR(void *p) {
      delete ((map<string,TObject>*)p);
   }
   static void deleteArray_maplEstringcOTObjectgR(void *p) {
      delete [] ((map<string,TObject>*)p);
   }
   static void destruct_maplEstringcOTObjectgR(void *p) {
      typedef map<string,TObject> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,TObject>

namespace ROOT {
   static TClass *maplEintcOgatecLcLSensormUgR_Dictionary();
   static void maplEintcOgatecLcLSensormUgR_TClassManip(TClass*);
   static void *new_maplEintcOgatecLcLSensormUgR(void *p = 0);
   static void *newArray_maplEintcOgatecLcLSensormUgR(Long_t size, void *p);
   static void delete_maplEintcOgatecLcLSensormUgR(void *p);
   static void deleteArray_maplEintcOgatecLcLSensormUgR(void *p);
   static void destruct_maplEintcOgatecLcLSensormUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,gate::Sensor*>*)
   {
      map<int,gate::Sensor*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,gate::Sensor*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,gate::Sensor*>", -2, "map", 807,
                  typeid(map<int,gate::Sensor*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOgatecLcLSensormUgR_Dictionary, isa_proxy, 4,
                  sizeof(map<int,gate::Sensor*>) );
      instance.SetNew(&new_maplEintcOgatecLcLSensormUgR);
      instance.SetNewArray(&newArray_maplEintcOgatecLcLSensormUgR);
      instance.SetDelete(&delete_maplEintcOgatecLcLSensormUgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOgatecLcLSensormUgR);
      instance.SetDestructor(&destruct_maplEintcOgatecLcLSensormUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,gate::Sensor*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<int,gate::Sensor*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOgatecLcLSensormUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,gate::Sensor*>*)0x0)->GetClass();
      maplEintcOgatecLcLSensormUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOgatecLcLSensormUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOgatecLcLSensormUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,gate::Sensor*> : new map<int,gate::Sensor*>;
   }
   static void *newArray_maplEintcOgatecLcLSensormUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,gate::Sensor*>[nElements] : new map<int,gate::Sensor*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOgatecLcLSensormUgR(void *p) {
      delete ((map<int,gate::Sensor*>*)p);
   }
   static void deleteArray_maplEintcOgatecLcLSensormUgR(void *p) {
      delete [] ((map<int,gate::Sensor*>*)p);
   }
   static void destruct_maplEintcOgatecLcLSensormUgR(void *p) {
      typedef map<int,gate::Sensor*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,gate::Sensor*>

namespace ROOT {
   static TClass *maplEintcOfloatgR_Dictionary();
   static void maplEintcOfloatgR_TClassManip(TClass*);
   static void *new_maplEintcOfloatgR(void *p = 0);
   static void *newArray_maplEintcOfloatgR(Long_t size, void *p);
   static void delete_maplEintcOfloatgR(void *p);
   static void deleteArray_maplEintcOfloatgR(void *p);
   static void destruct_maplEintcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,float>*)
   {
      map<int,float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,float>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,float>", -2, "map", 807,
                  typeid(map<int,float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(map<int,float>) );
      instance.SetNew(&new_maplEintcOfloatgR);
      instance.SetNewArray(&newArray_maplEintcOfloatgR);
      instance.SetDelete(&delete_maplEintcOfloatgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOfloatgR);
      instance.SetDestructor(&destruct_maplEintcOfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<int,float>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,float>*)0x0)->GetClass();
      maplEintcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,float> : new map<int,float>;
   }
   static void *newArray_maplEintcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,float>[nElements] : new map<int,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOfloatgR(void *p) {
      delete ((map<int,float>*)p);
   }
   static void deleteArray_maplEintcOfloatgR(void *p) {
      delete [] ((map<int,float>*)p);
   }
   static void destruct_maplEintcOfloatgR(void *p) {
      typedef map<int,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,float>

namespace {
  void TriggerDictionaryInitialization_libGATE_Impl() {
    static const char* headers[] = {
"BHit.h",
"BObject.h",
"BParticle.h",
"BTrack.h",
"Cluster.h",
"Environment.h",
"Error.h",
"Event.h",
"Geometry.h",
"Hit.h",
"HitMap.h",
"MCHit.h",
"MCParticle.h",
"MCTrack.h",
"ParamStore.h",
"Particle.h",
"Point3D.h",
"Properties.h",
"Pulse.h",
"Run.h",
"Sensor.h",
"Signal.h",
"Track.h",
"Vector4D.h",
"Waveform.h",
0
    };
    static const char* includePaths[] = {
"../",
"/Users/chur558/root-6.08.06/build/include",
"/Users/chur558/NEXT/GATE/emodel/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGATE dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace std{inline namespace __1{template <class _CharT> struct __attribute__((annotate("$clingAutoload$string")))  char_traits;
}}
namespace std{inline namespace __1{template <class _Tp> class __attribute__((annotate("$clingAutoload$iosfwd")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}}
namespace gate{class __attribute__((annotate("$clingAutoload$BHit.h")))  BHit;}
namespace gate{enum  __attribute__((annotate("$clingAutoload$Environment.h")))  __attribute__((annotate("$clingAutoload$BHit.h"))) SENSORTYPE : unsigned int;}
namespace gate{class __attribute__((annotate("$clingAutoload$Hit.h")))  __attribute__((annotate("$clingAutoload$Cluster.h")))  Hit;}
namespace gate{class __attribute__((annotate("$clingAutoload$HitMap.h")))  __attribute__((annotate("$clingAutoload$Event.h")))  HitMap;}
namespace gate{class __attribute__((annotate("$clingAutoload$Cluster.h")))  Cluster;}
namespace gate{class __attribute__((annotate("$clingAutoload$Track.h")))  __attribute__((annotate("$clingAutoload$Event.h")))  Track;}
namespace gate{class __attribute__((annotate("$clingAutoload$Sensor.h")))  __attribute__((annotate("$clingAutoload$Geometry.h")))  Sensor;}
namespace gate{class __attribute__((annotate("$clingAutoload$BTrack.h")))  __attribute__((annotate("$clingAutoload$BParticle.h")))  BTrack;}
namespace gate{class __attribute__((annotate("$clingAutoload$BParticle.h")))  BParticle;}
namespace gate{class __attribute__((annotate("$clingAutoload$Pulse.h")))  __attribute__((annotate("$clingAutoload$Cluster.h")))  Pulse;}
namespace std{inline namespace __1{template <class _Tp> struct __attribute__((annotate("$clingAutoload$__functional_base")))  __attribute__((annotate("$clingAutoload$string")))  less;
}}
namespace gate{class __attribute__((annotate("$clingAutoload$MCParticle.h")))  __attribute__((annotate("$clingAutoload$Event.h")))  MCParticle;}
namespace gate{class __attribute__((annotate("$clingAutoload$Signal.h")))  __attribute__((annotate("$clingAutoload$Event.h")))  Signal;}
namespace gate{class __attribute__((annotate("$clingAutoload$Particle.h")))  __attribute__((annotate("$clingAutoload$Event.h")))  Particle;}
namespace gate{class __attribute__((annotate("$clingAutoload$MCHit.h")))  __attribute__((annotate("$clingAutoload$Event.h")))  MCHit;}
namespace gate{class __attribute__((annotate("$clingAutoload$MCTrack.h")))  __attribute__((annotate("$clingAutoload$Event.h")))  MCTrack;}
namespace gate{class __attribute__((annotate("$clingAutoload$Run.h")))  Run;}
class __attribute__((annotate("$clingAutoload$TObject.h")))  TObject;
namespace std{inline namespace __1{template <class _Key, class _Tp> union __attribute__((annotate("$clingAutoload$map")))  __attribute__((annotate("$clingAutoload$BHit.h")))  __value_type;
}}
namespace std{inline namespace __1{template <class _Tp, class _VoidPtr> class __attribute__((annotate("$clingAutoload$__tree")))  __attribute__((annotate("$clingAutoload$BHit.h")))  __tree_node;
}}
namespace std{inline namespace __1{template <class _Tp, class _NodePtr, class _DiffType> class __attribute__((annotate("$clingAutoload$__tree")))  __attribute__((annotate("$clingAutoload$BHit.h")))  __tree_iterator;
}}
namespace std{inline namespace __1{template <class _TreeIterator> class __attribute__((annotate("$clingAutoload$map")))  __attribute__((annotate("$clingAutoload$BHit.h")))  __map_iterator;
}}
namespace gate{template <class T> class __attribute__((annotate("$clingAutoload$ParamStore.h")))  __attribute__((annotate("$clingAutoload$BHit.h")))  tstore;
}
namespace gate{class __attribute__((annotate("$clingAutoload$ParamStore.h")))  __attribute__((annotate("$clingAutoload$BHit.h")))  ParamStore;}
namespace gate{class __attribute__((annotate("$clingAutoload$BObject.h")))  __attribute__((annotate("$clingAutoload$BHit.h")))  BObject;}
namespace gate{class __attribute__((annotate("$clingAutoload$Point3D.h")))  __attribute__((annotate("$clingAutoload$BHit.h")))  Point3D;}
namespace gate{class __attribute__((annotate("$clingAutoload$Vector4D.h")))  __attribute__((annotate("$clingAutoload$BParticle.h")))  Vector4D;}
namespace gate{class __attribute__((annotate("$clingAutoload$Waveform.h")))  __attribute__((annotate("$clingAutoload$Cluster.h")))  Waveform;}
namespace gate{class __attribute__((annotate("$clingAutoload$Event.h")))  Event;}
namespace gate{class __attribute__((annotate("$clingAutoload$Geometry.h")))  Geometry;}
namespace gate{class __attribute__((annotate("$clingAutoload$Properties.h")))  Properties;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGATE dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "BHit.h"
#include "BObject.h"
#include "BParticle.h"
#include "BTrack.h"
#include "Cluster.h"
#include "Environment.h"
#include "Error.h"
#include "Event.h"
#include "Geometry.h"
#include "Hit.h"
#include "HitMap.h"
#include "MCHit.h"
#include "MCParticle.h"
#include "MCTrack.h"
#include "ParamStore.h"
#include "Particle.h"
#include "Point3D.h"
#include "Properties.h"
#include "Pulse.h"
#include "Run.h"
#include "Sensor.h"
#include "Signal.h"
#include "Track.h"
#include "Vector4D.h"
#include "Waveform.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"gate::BHit", payloadCode, "@",
"gate::BObject", payloadCode, "@",
"gate::BParticle", payloadCode, "@",
"gate::BTrack", payloadCode, "@",
"gate::Cluster", payloadCode, "@",
"gate::Event", payloadCode, "@",
"gate::Geometry", payloadCode, "@",
"gate::Hit", payloadCode, "@",
"gate::HitMap", payloadCode, "@",
"gate::MCHit", payloadCode, "@",
"gate::MCParticle", payloadCode, "@",
"gate::MCTrack", payloadCode, "@",
"gate::ParamStore", payloadCode, "@",
"gate::Particle", payloadCode, "@",
"gate::Point3D", payloadCode, "@",
"gate::Properties", payloadCode, "@",
"gate::Pulse", payloadCode, "@",
"gate::Run", payloadCode, "@",
"gate::Sensor", payloadCode, "@",
"gate::Signal", payloadCode, "@",
"gate::Track", payloadCode, "@",
"gate::Vector4D", payloadCode, "@",
"gate::Waveform", payloadCode, "@",
"gate::tstore<TObject>", payloadCode, "@",
"gate::tstore<double>", payloadCode, "@",
"gate::tstore<int>", payloadCode, "@",
"gate::tstore<std::string>", payloadCode, "@",
"gate::tstore<std::vector<TObject> >", payloadCode, "@",
"gate::tstore<std::vector<double> >", payloadCode, "@",
"gate::tstore<std::vector<int> >", payloadCode, "@",
"gate::tstore<std::vector<std::string> >", payloadCode, "@",
"gate::tstore<string>", payloadCode, "@",
"gate::tstore<vector<TObject> >", payloadCode, "@",
"gate::tstore<vector<double> >", payloadCode, "@",
"gate::tstore<vector<int> >", payloadCode, "@",
"gate::tstore<vector<string> >", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGATE",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGATE_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGATE_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGATE() {
  TriggerDictionaryInitialization_libGATE_Impl();
}

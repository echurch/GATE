// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME GATEUtilsCint

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
#include "AlgoManager.h"
#include "Centella.h"
#include "EventManager.h"
#include "GateUtilities.h"
#include "HistoFunctions.h"
#include "HistoManager.h"
#include "HistoPlotter.h"
#include "IAlgo.h"
#include "Irene.h"
#include "LogManager.h"
#include "Messenger.h"
#include "PartProperties.h"
#include "RunManager.h"
#include "TreeManager.h"
#include "Utilities.h"
#include "physical_constants.h"
#include "system_of_units.h"

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
   static void *new_gatecLcLMessenger(void *p = 0);
   static void *newArray_gatecLcLMessenger(Long_t size, void *p);
   static void delete_gatecLcLMessenger(void *p);
   static void deleteArray_gatecLcLMessenger(void *p);
   static void destruct_gatecLcLMessenger(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::Messenger*)
   {
      ::gate::Messenger *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::Messenger >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::Messenger", ::gate::Messenger::Class_Version(), "Messenger.h", 25,
                  typeid(::gate::Messenger), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::Messenger::Dictionary, isa_proxy, 4,
                  sizeof(::gate::Messenger) );
      instance.SetNew(&new_gatecLcLMessenger);
      instance.SetNewArray(&newArray_gatecLcLMessenger);
      instance.SetDelete(&delete_gatecLcLMessenger);
      instance.SetDeleteArray(&deleteArray_gatecLcLMessenger);
      instance.SetDestructor(&destruct_gatecLcLMessenger);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::Messenger*)
   {
      return GenerateInitInstanceLocal((::gate::Messenger*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::Messenger*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *gatecLcLtstorelETH1mUgR_Dictionary();
   static void gatecLcLtstorelETH1mUgR_TClassManip(TClass*);
   static void *new_gatecLcLtstorelETH1mUgR(void *p = 0);
   static void *newArray_gatecLcLtstorelETH1mUgR(Long_t size, void *p);
   static void delete_gatecLcLtstorelETH1mUgR(void *p);
   static void deleteArray_gatecLcLtstorelETH1mUgR(void *p);
   static void destruct_gatecLcLtstorelETH1mUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::tstore<TH1*>*)
   {
      ::gate::tstore<TH1*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::tstore<TH1*> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::tstore<TH1*>", ::gate::tstore<TH1*>::Class_Version(), "ParamStore.h", 49,
                  typeid(::gate::tstore<TH1*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &gatecLcLtstorelETH1mUgR_Dictionary, isa_proxy, 4,
                  sizeof(::gate::tstore<TH1*>) );
      instance.SetNew(&new_gatecLcLtstorelETH1mUgR);
      instance.SetNewArray(&newArray_gatecLcLtstorelETH1mUgR);
      instance.SetDelete(&delete_gatecLcLtstorelETH1mUgR);
      instance.SetDeleteArray(&deleteArray_gatecLcLtstorelETH1mUgR);
      instance.SetDestructor(&destruct_gatecLcLtstorelETH1mUgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::tstore<TH1*>*)
   {
      return GenerateInitInstanceLocal((::gate::tstore<TH1*>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::tstore<TH1*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *gatecLcLtstorelETH1mUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<TH1*>*)0x0)->GetClass();
      gatecLcLtstorelETH1mUgR_TClassManip(theClass);
   return theClass;
   }

   static void gatecLcLtstorelETH1mUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *gatecLcLtstorelETTreemUgR_Dictionary();
   static void gatecLcLtstorelETTreemUgR_TClassManip(TClass*);
   static void *new_gatecLcLtstorelETTreemUgR(void *p = 0);
   static void *newArray_gatecLcLtstorelETTreemUgR(Long_t size, void *p);
   static void delete_gatecLcLtstorelETTreemUgR(void *p);
   static void deleteArray_gatecLcLtstorelETTreemUgR(void *p);
   static void destruct_gatecLcLtstorelETTreemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::tstore<TTree*>*)
   {
      ::gate::tstore<TTree*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::tstore<TTree*> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::tstore<TTree*>", ::gate::tstore<TTree*>::Class_Version(), "ParamStore.h", 49,
                  typeid(::gate::tstore<TTree*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &gatecLcLtstorelETTreemUgR_Dictionary, isa_proxy, 4,
                  sizeof(::gate::tstore<TTree*>) );
      instance.SetNew(&new_gatecLcLtstorelETTreemUgR);
      instance.SetNewArray(&newArray_gatecLcLtstorelETTreemUgR);
      instance.SetDelete(&delete_gatecLcLtstorelETTreemUgR);
      instance.SetDeleteArray(&deleteArray_gatecLcLtstorelETTreemUgR);
      instance.SetDestructor(&destruct_gatecLcLtstorelETTreemUgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::tstore<TTree*>*)
   {
      return GenerateInitInstanceLocal((::gate::tstore<TTree*>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::tstore<TTree*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *gatecLcLtstorelETTreemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<TTree*>*)0x0)->GetClass();
      gatecLcLtstorelETTreemUgR_TClassManip(theClass);
   return theClass;
   }

   static void gatecLcLtstorelETTreemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLIAlgo(void *p = 0);
   static void *newArray_gatecLcLIAlgo(Long_t size, void *p);
   static void delete_gatecLcLIAlgo(void *p);
   static void deleteArray_gatecLcLIAlgo(void *p);
   static void destruct_gatecLcLIAlgo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::IAlgo*)
   {
      ::gate::IAlgo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::IAlgo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::IAlgo", ::gate::IAlgo::Class_Version(), "IAlgo.h", 29,
                  typeid(::gate::IAlgo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::IAlgo::Dictionary, isa_proxy, 4,
                  sizeof(::gate::IAlgo) );
      instance.SetNew(&new_gatecLcLIAlgo);
      instance.SetNewArray(&newArray_gatecLcLIAlgo);
      instance.SetDelete(&delete_gatecLcLIAlgo);
      instance.SetDeleteArray(&deleteArray_gatecLcLIAlgo);
      instance.SetDestructor(&destruct_gatecLcLIAlgo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::IAlgo*)
   {
      return GenerateInitInstanceLocal((::gate::IAlgo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::IAlgo*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLAlgoManager(void *p = 0);
   static void *newArray_gatecLcLAlgoManager(Long_t size, void *p);
   static void delete_gatecLcLAlgoManager(void *p);
   static void deleteArray_gatecLcLAlgoManager(void *p);
   static void destruct_gatecLcLAlgoManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::AlgoManager*)
   {
      ::gate::AlgoManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::AlgoManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::AlgoManager", ::gate::AlgoManager::Class_Version(), "AlgoManager.h", 27,
                  typeid(::gate::AlgoManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::AlgoManager::Dictionary, isa_proxy, 4,
                  sizeof(::gate::AlgoManager) );
      instance.SetNew(&new_gatecLcLAlgoManager);
      instance.SetNewArray(&newArray_gatecLcLAlgoManager);
      instance.SetDelete(&delete_gatecLcLAlgoManager);
      instance.SetDeleteArray(&deleteArray_gatecLcLAlgoManager);
      instance.SetDestructor(&destruct_gatecLcLAlgoManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::AlgoManager*)
   {
      return GenerateInitInstanceLocal((::gate::AlgoManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::AlgoManager*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *gatecLcLPartProperties_Dictionary();
   static void gatecLcLPartProperties_TClassManip(TClass*);
   static void *new_gatecLcLPartProperties(void *p = 0);
   static void *newArray_gatecLcLPartProperties(Long_t size, void *p);
   static void delete_gatecLcLPartProperties(void *p);
   static void deleteArray_gatecLcLPartProperties(void *p);
   static void destruct_gatecLcLPartProperties(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::PartProperties*)
   {
      ::gate::PartProperties *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::gate::PartProperties));
      static ::ROOT::TGenericClassInfo 
         instance("gate::PartProperties", "PartProperties.h", 26,
                  typeid(::gate::PartProperties), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &gatecLcLPartProperties_Dictionary, isa_proxy, 0,
                  sizeof(::gate::PartProperties) );
      instance.SetNew(&new_gatecLcLPartProperties);
      instance.SetNewArray(&newArray_gatecLcLPartProperties);
      instance.SetDelete(&delete_gatecLcLPartProperties);
      instance.SetDeleteArray(&deleteArray_gatecLcLPartProperties);
      instance.SetDestructor(&destruct_gatecLcLPartProperties);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::PartProperties*)
   {
      return GenerateInitInstanceLocal((::gate::PartProperties*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::PartProperties*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *gatecLcLPartProperties_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::gate::PartProperties*)0x0)->GetClass();
      gatecLcLPartProperties_TClassManip(theClass);
   return theClass;
   }

   static void gatecLcLPartProperties_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLcontrol_panel(void *p = 0);
   static void *newArray_gatecLcLcontrol_panel(Long_t size, void *p);
   static void delete_gatecLcLcontrol_panel(void *p);
   static void deleteArray_gatecLcLcontrol_panel(void *p);
   static void destruct_gatecLcLcontrol_panel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::control_panel*)
   {
      ::gate::control_panel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::control_panel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::control_panel", ::gate::control_panel::Class_Version(), "Irene.h", 52,
                  typeid(::gate::control_panel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::control_panel::Dictionary, isa_proxy, 4,
                  sizeof(::gate::control_panel) );
      instance.SetNew(&new_gatecLcLcontrol_panel);
      instance.SetNewArray(&newArray_gatecLcLcontrol_panel);
      instance.SetDelete(&delete_gatecLcLcontrol_panel);
      instance.SetDeleteArray(&deleteArray_gatecLcLcontrol_panel);
      instance.SetDestructor(&destruct_gatecLcLcontrol_panel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::control_panel*)
   {
      return GenerateInitInstanceLocal((::gate::control_panel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::control_panel*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLengine(void *p = 0);
   static void *newArray_gatecLcLengine(Long_t size, void *p);
   static void delete_gatecLcLengine(void *p);
   static void deleteArray_gatecLcLengine(void *p);
   static void destruct_gatecLcLengine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::engine*)
   {
      ::gate::engine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::engine >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::engine", ::gate::engine::Class_Version(), "Irene.h", 202,
                  typeid(::gate::engine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::engine::Dictionary, isa_proxy, 4,
                  sizeof(::gate::engine) );
      instance.SetNew(&new_gatecLcLengine);
      instance.SetNewArray(&newArray_gatecLcLengine);
      instance.SetDelete(&delete_gatecLcLengine);
      instance.SetDeleteArray(&deleteArray_gatecLcLengine);
      instance.SetDestructor(&destruct_gatecLcLengine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::engine*)
   {
      return GenerateInitInstanceLocal((::gate::engine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::engine*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_gatecLcLsreader(void *p);
   static void deleteArray_gatecLcLsreader(void *p);
   static void destruct_gatecLcLsreader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::sreader*)
   {
      ::gate::sreader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::sreader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::sreader", ::gate::sreader::Class_Version(), "Irene.h", 254,
                  typeid(::gate::sreader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::sreader::Dictionary, isa_proxy, 4,
                  sizeof(::gate::sreader) );
      instance.SetDelete(&delete_gatecLcLsreader);
      instance.SetDeleteArray(&deleteArray_gatecLcLsreader);
      instance.SetDestructor(&destruct_gatecLcLsreader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::sreader*)
   {
      return GenerateInitInstanceLocal((::gate::sreader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::sreader*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLEventManager(void *p = 0);
   static void *newArray_gatecLcLEventManager(Long_t size, void *p);
   static void delete_gatecLcLEventManager(void *p);
   static void deleteArray_gatecLcLEventManager(void *p);
   static void destruct_gatecLcLEventManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::EventManager*)
   {
      ::gate::EventManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::EventManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::EventManager", ::gate::EventManager::Class_Version(), "EventManager.h", 34,
                  typeid(::gate::EventManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::EventManager::Dictionary, isa_proxy, 4,
                  sizeof(::gate::EventManager) );
      instance.SetNew(&new_gatecLcLEventManager);
      instance.SetNewArray(&newArray_gatecLcLEventManager);
      instance.SetDelete(&delete_gatecLcLEventManager);
      instance.SetDeleteArray(&deleteArray_gatecLcLEventManager);
      instance.SetDestructor(&destruct_gatecLcLEventManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::EventManager*)
   {
      return GenerateInitInstanceLocal((::gate::EventManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::EventManager*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLRunManager(void *p = 0);
   static void *newArray_gatecLcLRunManager(Long_t size, void *p);
   static void delete_gatecLcLRunManager(void *p);
   static void deleteArray_gatecLcLRunManager(void *p);
   static void destruct_gatecLcLRunManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::RunManager*)
   {
      ::gate::RunManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::RunManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::RunManager", ::gate::RunManager::Class_Version(), "RunManager.h", 29,
                  typeid(::gate::RunManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::RunManager::Dictionary, isa_proxy, 4,
                  sizeof(::gate::RunManager) );
      instance.SetNew(&new_gatecLcLRunManager);
      instance.SetNewArray(&newArray_gatecLcLRunManager);
      instance.SetDelete(&delete_gatecLcLRunManager);
      instance.SetDeleteArray(&deleteArray_gatecLcLRunManager);
      instance.SetDestructor(&destruct_gatecLcLRunManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::RunManager*)
   {
      return GenerateInitInstanceLocal((::gate::RunManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::RunManager*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_gatecLcL_log_IO(void *p);
   static void deleteArray_gatecLcL_log_IO(void *p);
   static void destruct_gatecLcL_log_IO(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::_log_IO*)
   {
      ::gate::_log_IO *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::_log_IO >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::_log_IO", ::gate::_log_IO::Class_Version(), "LogManager.h", 38,
                  typeid(::gate::_log_IO), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::_log_IO::Dictionary, isa_proxy, 4,
                  sizeof(::gate::_log_IO) );
      instance.SetDelete(&delete_gatecLcL_log_IO);
      instance.SetDeleteArray(&deleteArray_gatecLcL_log_IO);
      instance.SetDestructor(&destruct_gatecLcL_log_IO);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::_log_IO*)
   {
      return GenerateInitInstanceLocal((::gate::_log_IO*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::_log_IO*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcL_param_logger(void *p = 0);
   static void *newArray_gatecLcL_param_logger(Long_t size, void *p);
   static void delete_gatecLcL_param_logger(void *p);
   static void deleteArray_gatecLcL_param_logger(void *p);
   static void destruct_gatecLcL_param_logger(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::_param_logger*)
   {
      ::gate::_param_logger *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::_param_logger >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::_param_logger", ::gate::_param_logger::Class_Version(), "LogManager.h", 74,
                  typeid(::gate::_param_logger), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::_param_logger::Dictionary, isa_proxy, 4,
                  sizeof(::gate::_param_logger) );
      instance.SetNew(&new_gatecLcL_param_logger);
      instance.SetNewArray(&newArray_gatecLcL_param_logger);
      instance.SetDelete(&delete_gatecLcL_param_logger);
      instance.SetDeleteArray(&deleteArray_gatecLcL_param_logger);
      instance.SetDestructor(&destruct_gatecLcL_param_logger);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::_param_logger*)
   {
      return GenerateInitInstanceLocal((::gate::_param_logger*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::_param_logger*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLLogManager(void *p = 0);
   static void *newArray_gatecLcLLogManager(Long_t size, void *p);
   static void delete_gatecLcLLogManager(void *p);
   static void deleteArray_gatecLcLLogManager(void *p);
   static void destruct_gatecLcLLogManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::LogManager*)
   {
      ::gate::LogManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::LogManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::LogManager", ::gate::LogManager::Class_Version(), "LogManager.h", 126,
                  typeid(::gate::LogManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::LogManager::Dictionary, isa_proxy, 4,
                  sizeof(::gate::LogManager) );
      instance.SetNew(&new_gatecLcLLogManager);
      instance.SetNewArray(&newArray_gatecLcLLogManager);
      instance.SetDelete(&delete_gatecLcLLogManager);
      instance.SetDeleteArray(&deleteArray_gatecLcLLogManager);
      instance.SetDestructor(&destruct_gatecLcLLogManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::LogManager*)
   {
      return GenerateInitInstanceLocal((::gate::LogManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::LogManager*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLHistoPlotter(void *p = 0);
   static void *newArray_gatecLcLHistoPlotter(Long_t size, void *p);
   static void delete_gatecLcLHistoPlotter(void *p);
   static void deleteArray_gatecLcLHistoPlotter(void *p);
   static void destruct_gatecLcLHistoPlotter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::HistoPlotter*)
   {
      ::gate::HistoPlotter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::HistoPlotter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::HistoPlotter", ::gate::HistoPlotter::Class_Version(), "HistoPlotter.h", 49,
                  typeid(::gate::HistoPlotter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::HistoPlotter::Dictionary, isa_proxy, 4,
                  sizeof(::gate::HistoPlotter) );
      instance.SetNew(&new_gatecLcLHistoPlotter);
      instance.SetNewArray(&newArray_gatecLcLHistoPlotter);
      instance.SetDelete(&delete_gatecLcLHistoPlotter);
      instance.SetDeleteArray(&deleteArray_gatecLcLHistoPlotter);
      instance.SetDestructor(&destruct_gatecLcLHistoPlotter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::HistoPlotter*)
   {
      return GenerateInitInstanceLocal((::gate::HistoPlotter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::HistoPlotter*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLHistoManager(void *p = 0);
   static void *newArray_gatecLcLHistoManager(Long_t size, void *p);
   static void delete_gatecLcLHistoManager(void *p);
   static void deleteArray_gatecLcLHistoManager(void *p);
   static void destruct_gatecLcLHistoManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::HistoManager*)
   {
      ::gate::HistoManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::HistoManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::HistoManager", ::gate::HistoManager::Class_Version(), "HistoManager.h", 39,
                  typeid(::gate::HistoManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::HistoManager::Dictionary, isa_proxy, 4,
                  sizeof(::gate::HistoManager) );
      instance.SetNew(&new_gatecLcLHistoManager);
      instance.SetNewArray(&newArray_gatecLcLHistoManager);
      instance.SetDelete(&delete_gatecLcLHistoManager);
      instance.SetDeleteArray(&deleteArray_gatecLcLHistoManager);
      instance.SetDestructor(&destruct_gatecLcLHistoManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::HistoManager*)
   {
      return GenerateInitInstanceLocal((::gate::HistoManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::HistoManager*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLTreeManager(void *p = 0);
   static void *newArray_gatecLcLTreeManager(Long_t size, void *p);
   static void delete_gatecLcLTreeManager(void *p);
   static void deleteArray_gatecLcLTreeManager(void *p);
   static void destruct_gatecLcLTreeManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::TreeManager*)
   {
      ::gate::TreeManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::TreeManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::TreeManager", ::gate::TreeManager::Class_Version(), "TreeManager.h", 31,
                  typeid(::gate::TreeManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::TreeManager::Dictionary, isa_proxy, 4,
                  sizeof(::gate::TreeManager) );
      instance.SetNew(&new_gatecLcLTreeManager);
      instance.SetNewArray(&newArray_gatecLcLTreeManager);
      instance.SetDelete(&delete_gatecLcLTreeManager);
      instance.SetDeleteArray(&deleteArray_gatecLcLTreeManager);
      instance.SetDestructor(&destruct_gatecLcLTreeManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::TreeManager*)
   {
      return GenerateInitInstanceLocal((::gate::TreeManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::TreeManager*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::Centella*)
   {
      ::gate::Centella *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::Centella >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::Centella", ::gate::Centella::Class_Version(), "Centella.h", 38,
                  typeid(::gate::Centella), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::Centella::Dictionary, isa_proxy, 4,
                  sizeof(::gate::Centella) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::Centella*)
   {
      return GenerateInitInstanceLocal((::gate::Centella*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::Centella*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr Messenger::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Messenger::Class_Name()
{
   return "gate::Messenger";
}

//______________________________________________________________________________
const char *Messenger::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Messenger*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Messenger::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Messenger*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Messenger::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Messenger*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Messenger::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Messenger*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
template <> atomic_TClass_ptr tstore<TH1*>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *tstore<TH1*>::Class_Name()
{
   return "gate::tstore<TH1*>";
}

//______________________________________________________________________________
template <> const char *tstore<TH1*>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<TH1*>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int tstore<TH1*>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<TH1*>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *tstore<TH1*>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<TH1*>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *tstore<TH1*>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<TH1*>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
template <> atomic_TClass_ptr tstore<TTree*>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *tstore<TTree*>::Class_Name()
{
   return "gate::tstore<TTree*>";
}

//______________________________________________________________________________
template <> const char *tstore<TTree*>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<TTree*>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int tstore<TTree*>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<TTree*>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *tstore<TTree*>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<TTree*>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *tstore<TTree*>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::tstore<TTree*>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr IAlgo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *IAlgo::Class_Name()
{
   return "gate::IAlgo";
}

//______________________________________________________________________________
const char *IAlgo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::IAlgo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int IAlgo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::IAlgo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *IAlgo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::IAlgo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *IAlgo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::IAlgo*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr AlgoManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AlgoManager::Class_Name()
{
   return "gate::AlgoManager";
}

//______________________________________________________________________________
const char *AlgoManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::AlgoManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AlgoManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::AlgoManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AlgoManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::AlgoManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AlgoManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::AlgoManager*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr control_panel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *control_panel::Class_Name()
{
   return "gate::control_panel";
}

//______________________________________________________________________________
const char *control_panel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::control_panel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int control_panel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::control_panel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *control_panel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::control_panel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *control_panel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::control_panel*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr engine::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *engine::Class_Name()
{
   return "gate::engine";
}

//______________________________________________________________________________
const char *engine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::engine*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int engine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::engine*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *engine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::engine*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *engine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::engine*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr sreader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *sreader::Class_Name()
{
   return "gate::sreader";
}

//______________________________________________________________________________
const char *sreader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::sreader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int sreader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::sreader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *sreader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::sreader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *sreader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::sreader*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr EventManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *EventManager::Class_Name()
{
   return "gate::EventManager";
}

//______________________________________________________________________________
const char *EventManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::EventManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int EventManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::EventManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EventManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::EventManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EventManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::EventManager*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr RunManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RunManager::Class_Name()
{
   return "gate::RunManager";
}

//______________________________________________________________________________
const char *RunManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::RunManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RunManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::RunManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RunManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::RunManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RunManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::RunManager*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr _log_IO::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *_log_IO::Class_Name()
{
   return "gate::_log_IO";
}

//______________________________________________________________________________
const char *_log_IO::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::_log_IO*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int _log_IO::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::_log_IO*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *_log_IO::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::_log_IO*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *_log_IO::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::_log_IO*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr _param_logger::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *_param_logger::Class_Name()
{
   return "gate::_param_logger";
}

//______________________________________________________________________________
const char *_param_logger::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::_param_logger*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int _param_logger::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::_param_logger*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *_param_logger::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::_param_logger*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *_param_logger::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::_param_logger*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr LogManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LogManager::Class_Name()
{
   return "gate::LogManager";
}

//______________________________________________________________________________
const char *LogManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::LogManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LogManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::LogManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LogManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::LogManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LogManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::LogManager*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr HistoPlotter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HistoPlotter::Class_Name()
{
   return "gate::HistoPlotter";
}

//______________________________________________________________________________
const char *HistoPlotter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::HistoPlotter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HistoPlotter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::HistoPlotter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HistoPlotter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::HistoPlotter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HistoPlotter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::HistoPlotter*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr HistoManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HistoManager::Class_Name()
{
   return "gate::HistoManager";
}

//______________________________________________________________________________
const char *HistoManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::HistoManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HistoManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::HistoManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HistoManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::HistoManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HistoManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::HistoManager*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr TreeManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TreeManager::Class_Name()
{
   return "gate::TreeManager";
}

//______________________________________________________________________________
const char *TreeManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::TreeManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TreeManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::TreeManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TreeManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::TreeManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TreeManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::TreeManager*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr Centella::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Centella::Class_Name()
{
   return "gate::Centella";
}

//______________________________________________________________________________
const char *Centella::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Centella*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Centella::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::Centella*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Centella::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Centella*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Centella::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::Centella*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
void Messenger::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::Messenger.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::Messenger::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::Messenger::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLMessenger(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Messenger : new ::gate::Messenger;
   }
   static void *newArray_gatecLcLMessenger(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::Messenger[nElements] : new ::gate::Messenger[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLMessenger(void *p) {
      delete ((::gate::Messenger*)p);
   }
   static void deleteArray_gatecLcLMessenger(void *p) {
      delete [] ((::gate::Messenger*)p);
   }
   static void destruct_gatecLcLMessenger(void *p) {
      typedef ::gate::Messenger current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::Messenger

namespace gate {
//______________________________________________________________________________
template <> void tstore<TH1*>::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::tstore<TH1*>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::tstore<TH1*>::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::tstore<TH1*>::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLtstorelETH1mUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::tstore<TH1*> : new ::gate::tstore<TH1*>;
   }
   static void *newArray_gatecLcLtstorelETH1mUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::tstore<TH1*>[nElements] : new ::gate::tstore<TH1*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLtstorelETH1mUgR(void *p) {
      delete ((::gate::tstore<TH1*>*)p);
   }
   static void deleteArray_gatecLcLtstorelETH1mUgR(void *p) {
      delete [] ((::gate::tstore<TH1*>*)p);
   }
   static void destruct_gatecLcLtstorelETH1mUgR(void *p) {
      typedef ::gate::tstore<TH1*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::tstore<TH1*>

namespace gate {
//______________________________________________________________________________
template <> void tstore<TTree*>::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::tstore<TTree*>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::tstore<TTree*>::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::tstore<TTree*>::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLtstorelETTreemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::tstore<TTree*> : new ::gate::tstore<TTree*>;
   }
   static void *newArray_gatecLcLtstorelETTreemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::tstore<TTree*>[nElements] : new ::gate::tstore<TTree*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLtstorelETTreemUgR(void *p) {
      delete ((::gate::tstore<TTree*>*)p);
   }
   static void deleteArray_gatecLcLtstorelETTreemUgR(void *p) {
      delete [] ((::gate::tstore<TTree*>*)p);
   }
   static void destruct_gatecLcLtstorelETTreemUgR(void *p) {
      typedef ::gate::tstore<TTree*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::tstore<TTree*>

namespace gate {
//______________________________________________________________________________
void IAlgo::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::IAlgo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::IAlgo::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::IAlgo::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLIAlgo(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::IAlgo : new ::gate::IAlgo;
   }
   static void *newArray_gatecLcLIAlgo(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::IAlgo[nElements] : new ::gate::IAlgo[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLIAlgo(void *p) {
      delete ((::gate::IAlgo*)p);
   }
   static void deleteArray_gatecLcLIAlgo(void *p) {
      delete [] ((::gate::IAlgo*)p);
   }
   static void destruct_gatecLcLIAlgo(void *p) {
      typedef ::gate::IAlgo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::IAlgo

namespace gate {
//______________________________________________________________________________
void AlgoManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::AlgoManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::AlgoManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::AlgoManager::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLAlgoManager(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::AlgoManager : new ::gate::AlgoManager;
   }
   static void *newArray_gatecLcLAlgoManager(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::AlgoManager[nElements] : new ::gate::AlgoManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLAlgoManager(void *p) {
      delete ((::gate::AlgoManager*)p);
   }
   static void deleteArray_gatecLcLAlgoManager(void *p) {
      delete [] ((::gate::AlgoManager*)p);
   }
   static void destruct_gatecLcLAlgoManager(void *p) {
      typedef ::gate::AlgoManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::AlgoManager

namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLPartProperties(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::PartProperties : new ::gate::PartProperties;
   }
   static void *newArray_gatecLcLPartProperties(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::PartProperties[nElements] : new ::gate::PartProperties[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLPartProperties(void *p) {
      delete ((::gate::PartProperties*)p);
   }
   static void deleteArray_gatecLcLPartProperties(void *p) {
      delete [] ((::gate::PartProperties*)p);
   }
   static void destruct_gatecLcLPartProperties(void *p) {
      typedef ::gate::PartProperties current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::PartProperties

namespace gate {
//______________________________________________________________________________
void control_panel::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::control_panel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::control_panel::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::control_panel::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLcontrol_panel(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::control_panel : new ::gate::control_panel;
   }
   static void *newArray_gatecLcLcontrol_panel(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::control_panel[nElements] : new ::gate::control_panel[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLcontrol_panel(void *p) {
      delete ((::gate::control_panel*)p);
   }
   static void deleteArray_gatecLcLcontrol_panel(void *p) {
      delete [] ((::gate::control_panel*)p);
   }
   static void destruct_gatecLcLcontrol_panel(void *p) {
      typedef ::gate::control_panel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::control_panel

namespace gate {
//______________________________________________________________________________
void engine::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::engine.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::engine::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::engine::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLengine(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::engine : new ::gate::engine;
   }
   static void *newArray_gatecLcLengine(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::engine[nElements] : new ::gate::engine[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLengine(void *p) {
      delete ((::gate::engine*)p);
   }
   static void deleteArray_gatecLcLengine(void *p) {
      delete [] ((::gate::engine*)p);
   }
   static void destruct_gatecLcLengine(void *p) {
      typedef ::gate::engine current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::engine

namespace gate {
//______________________________________________________________________________
void sreader::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::sreader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::sreader::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::sreader::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrapper around operator delete
   static void delete_gatecLcLsreader(void *p) {
      delete ((::gate::sreader*)p);
   }
   static void deleteArray_gatecLcLsreader(void *p) {
      delete [] ((::gate::sreader*)p);
   }
   static void destruct_gatecLcLsreader(void *p) {
      typedef ::gate::sreader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::sreader

namespace gate {
//______________________________________________________________________________
void EventManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::EventManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::EventManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::EventManager::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLEventManager(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::EventManager : new ::gate::EventManager;
   }
   static void *newArray_gatecLcLEventManager(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::EventManager[nElements] : new ::gate::EventManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLEventManager(void *p) {
      delete ((::gate::EventManager*)p);
   }
   static void deleteArray_gatecLcLEventManager(void *p) {
      delete [] ((::gate::EventManager*)p);
   }
   static void destruct_gatecLcLEventManager(void *p) {
      typedef ::gate::EventManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::EventManager

namespace gate {
//______________________________________________________________________________
void RunManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::RunManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::RunManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::RunManager::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLRunManager(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::RunManager : new ::gate::RunManager;
   }
   static void *newArray_gatecLcLRunManager(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::RunManager[nElements] : new ::gate::RunManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLRunManager(void *p) {
      delete ((::gate::RunManager*)p);
   }
   static void deleteArray_gatecLcLRunManager(void *p) {
      delete [] ((::gate::RunManager*)p);
   }
   static void destruct_gatecLcLRunManager(void *p) {
      typedef ::gate::RunManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::RunManager

namespace gate {
//______________________________________________________________________________
void _log_IO::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::_log_IO.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::_log_IO::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::_log_IO::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrapper around operator delete
   static void delete_gatecLcL_log_IO(void *p) {
      delete ((::gate::_log_IO*)p);
   }
   static void deleteArray_gatecLcL_log_IO(void *p) {
      delete [] ((::gate::_log_IO*)p);
   }
   static void destruct_gatecLcL_log_IO(void *p) {
      typedef ::gate::_log_IO current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::_log_IO

namespace gate {
//______________________________________________________________________________
void _param_logger::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::_param_logger.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::_param_logger::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::_param_logger::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcL_param_logger(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::_param_logger : new ::gate::_param_logger;
   }
   static void *newArray_gatecLcL_param_logger(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::_param_logger[nElements] : new ::gate::_param_logger[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcL_param_logger(void *p) {
      delete ((::gate::_param_logger*)p);
   }
   static void deleteArray_gatecLcL_param_logger(void *p) {
      delete [] ((::gate::_param_logger*)p);
   }
   static void destruct_gatecLcL_param_logger(void *p) {
      typedef ::gate::_param_logger current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::_param_logger

namespace gate {
//______________________________________________________________________________
void LogManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::LogManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::LogManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::LogManager::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLLogManager(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::LogManager : new ::gate::LogManager;
   }
   static void *newArray_gatecLcLLogManager(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::LogManager[nElements] : new ::gate::LogManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLLogManager(void *p) {
      delete ((::gate::LogManager*)p);
   }
   static void deleteArray_gatecLcLLogManager(void *p) {
      delete [] ((::gate::LogManager*)p);
   }
   static void destruct_gatecLcLLogManager(void *p) {
      typedef ::gate::LogManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::LogManager

namespace gate {
//______________________________________________________________________________
void HistoPlotter::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::HistoPlotter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::HistoPlotter::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::HistoPlotter::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLHistoPlotter(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::HistoPlotter : new ::gate::HistoPlotter;
   }
   static void *newArray_gatecLcLHistoPlotter(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::HistoPlotter[nElements] : new ::gate::HistoPlotter[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLHistoPlotter(void *p) {
      delete ((::gate::HistoPlotter*)p);
   }
   static void deleteArray_gatecLcLHistoPlotter(void *p) {
      delete [] ((::gate::HistoPlotter*)p);
   }
   static void destruct_gatecLcLHistoPlotter(void *p) {
      typedef ::gate::HistoPlotter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::HistoPlotter

namespace gate {
//______________________________________________________________________________
void HistoManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::HistoManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::HistoManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::HistoManager::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLHistoManager(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::HistoManager : new ::gate::HistoManager;
   }
   static void *newArray_gatecLcLHistoManager(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::HistoManager[nElements] : new ::gate::HistoManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLHistoManager(void *p) {
      delete ((::gate::HistoManager*)p);
   }
   static void deleteArray_gatecLcLHistoManager(void *p) {
      delete [] ((::gate::HistoManager*)p);
   }
   static void destruct_gatecLcLHistoManager(void *p) {
      typedef ::gate::HistoManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::HistoManager

namespace gate {
//______________________________________________________________________________
void TreeManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::TreeManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::TreeManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::TreeManager::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLTreeManager(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::TreeManager : new ::gate::TreeManager;
   }
   static void *newArray_gatecLcLTreeManager(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::TreeManager[nElements] : new ::gate::TreeManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLTreeManager(void *p) {
      delete ((::gate::TreeManager*)p);
   }
   static void deleteArray_gatecLcLTreeManager(void *p) {
      delete [] ((::gate::TreeManager*)p);
   }
   static void destruct_gatecLcLTreeManager(void *p) {
      typedef ::gate::TreeManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::TreeManager

namespace gate {
//______________________________________________________________________________
void Centella::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::Centella.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::Centella::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::Centella::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
} // end of namespace ROOT for class ::gate::Centella

namespace ROOT {
   static TClass *vectorlEgatecLcLIAlgomUgR_Dictionary();
   static void vectorlEgatecLcLIAlgomUgR_TClassManip(TClass*);
   static void *new_vectorlEgatecLcLIAlgomUgR(void *p = 0);
   static void *newArray_vectorlEgatecLcLIAlgomUgR(Long_t size, void *p);
   static void delete_vectorlEgatecLcLIAlgomUgR(void *p);
   static void deleteArray_vectorlEgatecLcLIAlgomUgR(void *p);
   static void destruct_vectorlEgatecLcLIAlgomUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<gate::IAlgo*>*)
   {
      vector<gate::IAlgo*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<gate::IAlgo*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<gate::IAlgo*>", -2, "vector", 458,
                  typeid(vector<gate::IAlgo*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEgatecLcLIAlgomUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<gate::IAlgo*>) );
      instance.SetNew(&new_vectorlEgatecLcLIAlgomUgR);
      instance.SetNewArray(&newArray_vectorlEgatecLcLIAlgomUgR);
      instance.SetDelete(&delete_vectorlEgatecLcLIAlgomUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEgatecLcLIAlgomUgR);
      instance.SetDestructor(&destruct_vectorlEgatecLcLIAlgomUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<gate::IAlgo*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<gate::IAlgo*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgatecLcLIAlgomUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<gate::IAlgo*>*)0x0)->GetClass();
      vectorlEgatecLcLIAlgomUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgatecLcLIAlgomUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgatecLcLIAlgomUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::IAlgo*> : new vector<gate::IAlgo*>;
   }
   static void *newArray_vectorlEgatecLcLIAlgomUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gate::IAlgo*>[nElements] : new vector<gate::IAlgo*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgatecLcLIAlgomUgR(void *p) {
      delete ((vector<gate::IAlgo*>*)p);
   }
   static void deleteArray_vectorlEgatecLcLIAlgomUgR(void *p) {
      delete [] ((vector<gate::IAlgo*>*)p);
   }
   static void destruct_vectorlEgatecLcLIAlgomUgR(void *p) {
      typedef vector<gate::IAlgo*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<gate::IAlgo*>

namespace ROOT {
   static TClass *maplEstringcOgatecLcLParamStoregR_Dictionary();
   static void maplEstringcOgatecLcLParamStoregR_TClassManip(TClass*);
   static void *new_maplEstringcOgatecLcLParamStoregR(void *p = 0);
   static void *newArray_maplEstringcOgatecLcLParamStoregR(Long_t size, void *p);
   static void delete_maplEstringcOgatecLcLParamStoregR(void *p);
   static void deleteArray_maplEstringcOgatecLcLParamStoregR(void *p);
   static void destruct_maplEstringcOgatecLcLParamStoregR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,gate::ParamStore>*)
   {
      map<string,gate::ParamStore> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,gate::ParamStore>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,gate::ParamStore>", -2, "map", 807,
                  typeid(map<string,gate::ParamStore>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOgatecLcLParamStoregR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,gate::ParamStore>) );
      instance.SetNew(&new_maplEstringcOgatecLcLParamStoregR);
      instance.SetNewArray(&newArray_maplEstringcOgatecLcLParamStoregR);
      instance.SetDelete(&delete_maplEstringcOgatecLcLParamStoregR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOgatecLcLParamStoregR);
      instance.SetDestructor(&destruct_maplEstringcOgatecLcLParamStoregR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,gate::ParamStore> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,gate::ParamStore>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOgatecLcLParamStoregR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,gate::ParamStore>*)0x0)->GetClass();
      maplEstringcOgatecLcLParamStoregR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOgatecLcLParamStoregR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOgatecLcLParamStoregR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,gate::ParamStore> : new map<string,gate::ParamStore>;
   }
   static void *newArray_maplEstringcOgatecLcLParamStoregR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,gate::ParamStore>[nElements] : new map<string,gate::ParamStore>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOgatecLcLParamStoregR(void *p) {
      delete ((map<string,gate::ParamStore>*)p);
   }
   static void deleteArray_maplEstringcOgatecLcLParamStoregR(void *p) {
      delete [] ((map<string,gate::ParamStore>*)p);
   }
   static void destruct_maplEstringcOgatecLcLParamStoregR(void *p) {
      typedef map<string,gate::ParamStore> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,gate::ParamStore>

namespace ROOT {
   static TClass *maplEstringcOgatecLcLIAlgomUgR_Dictionary();
   static void maplEstringcOgatecLcLIAlgomUgR_TClassManip(TClass*);
   static void *new_maplEstringcOgatecLcLIAlgomUgR(void *p = 0);
   static void *newArray_maplEstringcOgatecLcLIAlgomUgR(Long_t size, void *p);
   static void delete_maplEstringcOgatecLcLIAlgomUgR(void *p);
   static void deleteArray_maplEstringcOgatecLcLIAlgomUgR(void *p);
   static void destruct_maplEstringcOgatecLcLIAlgomUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,gate::IAlgo*>*)
   {
      map<string,gate::IAlgo*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,gate::IAlgo*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,gate::IAlgo*>", -2, "map", 807,
                  typeid(map<string,gate::IAlgo*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOgatecLcLIAlgomUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,gate::IAlgo*>) );
      instance.SetNew(&new_maplEstringcOgatecLcLIAlgomUgR);
      instance.SetNewArray(&newArray_maplEstringcOgatecLcLIAlgomUgR);
      instance.SetDelete(&delete_maplEstringcOgatecLcLIAlgomUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOgatecLcLIAlgomUgR);
      instance.SetDestructor(&destruct_maplEstringcOgatecLcLIAlgomUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,gate::IAlgo*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,gate::IAlgo*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOgatecLcLIAlgomUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,gate::IAlgo*>*)0x0)->GetClass();
      maplEstringcOgatecLcLIAlgomUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOgatecLcLIAlgomUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOgatecLcLIAlgomUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,gate::IAlgo*> : new map<string,gate::IAlgo*>;
   }
   static void *newArray_maplEstringcOgatecLcLIAlgomUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,gate::IAlgo*>[nElements] : new map<string,gate::IAlgo*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOgatecLcLIAlgomUgR(void *p) {
      delete ((map<string,gate::IAlgo*>*)p);
   }
   static void deleteArray_maplEstringcOgatecLcLIAlgomUgR(void *p) {
      delete [] ((map<string,gate::IAlgo*>*)p);
   }
   static void destruct_maplEstringcOgatecLcLIAlgomUgR(void *p) {
      typedef map<string,gate::IAlgo*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,gate::IAlgo*>

namespace ROOT {
   static TClass *maplEstringcOboolgR_Dictionary();
   static void maplEstringcOboolgR_TClassManip(TClass*);
   static void *new_maplEstringcOboolgR(void *p = 0);
   static void *newArray_maplEstringcOboolgR(Long_t size, void *p);
   static void delete_maplEstringcOboolgR(void *p);
   static void deleteArray_maplEstringcOboolgR(void *p);
   static void destruct_maplEstringcOboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,bool>*)
   {
      map<string,bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,bool>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,bool>", -2, "map", 807,
                  typeid(map<string,bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOboolgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,bool>) );
      instance.SetNew(&new_maplEstringcOboolgR);
      instance.SetNewArray(&newArray_maplEstringcOboolgR);
      instance.SetDelete(&delete_maplEstringcOboolgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOboolgR);
      instance.SetDestructor(&destruct_maplEstringcOboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,bool> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,bool>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,bool>*)0x0)->GetClass();
      maplEstringcOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,bool> : new map<string,bool>;
   }
   static void *newArray_maplEstringcOboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,bool>[nElements] : new map<string,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOboolgR(void *p) {
      delete ((map<string,bool>*)p);
   }
   static void deleteArray_maplEstringcOboolgR(void *p) {
      delete [] ((map<string,bool>*)p);
   }
   static void destruct_maplEstringcOboolgR(void *p) {
      typedef map<string,bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,bool>

namespace ROOT {
   static TClass *maplEstringcOTTreemUgR_Dictionary();
   static void maplEstringcOTTreemUgR_TClassManip(TClass*);
   static void *new_maplEstringcOTTreemUgR(void *p = 0);
   static void *newArray_maplEstringcOTTreemUgR(Long_t size, void *p);
   static void delete_maplEstringcOTTreemUgR(void *p);
   static void deleteArray_maplEstringcOTTreemUgR(void *p);
   static void destruct_maplEstringcOTTreemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,TTree*>*)
   {
      map<string,TTree*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,TTree*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,TTree*>", -2, "map", 807,
                  typeid(map<string,TTree*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOTTreemUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,TTree*>) );
      instance.SetNew(&new_maplEstringcOTTreemUgR);
      instance.SetNewArray(&newArray_maplEstringcOTTreemUgR);
      instance.SetDelete(&delete_maplEstringcOTTreemUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOTTreemUgR);
      instance.SetDestructor(&destruct_maplEstringcOTTreemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,TTree*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,TTree*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOTTreemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,TTree*>*)0x0)->GetClass();
      maplEstringcOTTreemUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOTTreemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOTTreemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,TTree*> : new map<string,TTree*>;
   }
   static void *newArray_maplEstringcOTTreemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,TTree*>[nElements] : new map<string,TTree*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOTTreemUgR(void *p) {
      delete ((map<string,TTree*>*)p);
   }
   static void deleteArray_maplEstringcOTTreemUgR(void *p) {
      delete [] ((map<string,TTree*>*)p);
   }
   static void destruct_maplEstringcOTTreemUgR(void *p) {
      typedef map<string,TTree*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,TTree*>

namespace ROOT {
   static TClass *maplEstringcOTH1mUgR_Dictionary();
   static void maplEstringcOTH1mUgR_TClassManip(TClass*);
   static void *new_maplEstringcOTH1mUgR(void *p = 0);
   static void *newArray_maplEstringcOTH1mUgR(Long_t size, void *p);
   static void delete_maplEstringcOTH1mUgR(void *p);
   static void deleteArray_maplEstringcOTH1mUgR(void *p);
   static void destruct_maplEstringcOTH1mUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,TH1*>*)
   {
      map<string,TH1*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,TH1*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,TH1*>", -2, "map", 807,
                  typeid(map<string,TH1*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOTH1mUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,TH1*>) );
      instance.SetNew(&new_maplEstringcOTH1mUgR);
      instance.SetNewArray(&newArray_maplEstringcOTH1mUgR);
      instance.SetDelete(&delete_maplEstringcOTH1mUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOTH1mUgR);
      instance.SetDestructor(&destruct_maplEstringcOTH1mUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,TH1*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,TH1*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOTH1mUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,TH1*>*)0x0)->GetClass();
      maplEstringcOTH1mUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOTH1mUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOTH1mUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,TH1*> : new map<string,TH1*>;
   }
   static void *newArray_maplEstringcOTH1mUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,TH1*>[nElements] : new map<string,TH1*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOTH1mUgR(void *p) {
      delete ((map<string,TH1*>*)p);
   }
   static void deleteArray_maplEstringcOTH1mUgR(void *p) {
      delete [] ((map<string,TH1*>*)p);
   }
   static void destruct_maplEstringcOTH1mUgR(void *p) {
      typedef map<string,TH1*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,TH1*>

namespace {
  void TriggerDictionaryInitialization_libGATEUtils_Impl() {
    static const char* headers[] = {
"AlgoManager.h",
"Centella.h",
"EventManager.h",
"GateUtilities.h",
"HistoFunctions.h",
"HistoManager.h",
"HistoPlotter.h",
"IAlgo.h",
"Irene.h",
"LogManager.h",
"Messenger.h",
"PartProperties.h",
"RunManager.h",
"TreeManager.h",
"Utilities.h",
"physical_constants.h",
"system_of_units.h",
0
    };
    static const char* includePaths[] = {
"./../",
"./../emodel",
"/Users/chur558/root-6.08.06/build/include",
"/Users/chur558/NEXT/GATE/utils/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGATEUtils dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace gate{class __attribute__((annotate("$clingAutoload$Messenger.h")))  __attribute__((annotate("$clingAutoload$AlgoManager.h")))  Messenger;}
class __attribute__((annotate("$clingAutoload$TH1.h")))  __attribute__((annotate("$clingAutoload$Centella.h")))  TH1;
namespace gate{template <class T> class __attribute__((annotate("$clingAutoload$ParamStore.h")))  __attribute__((annotate("$clingAutoload$AlgoManager.h")))  tstore;
}
class __attribute__((annotate("$clingAutoload$TTree.h")))  __attribute__((annotate("$clingAutoload$Centella.h")))  TTree;
namespace gate{class __attribute__((annotate("$clingAutoload$IAlgo.h")))  __attribute__((annotate("$clingAutoload$AlgoManager.h")))  IAlgo;}
namespace gate{class __attribute__((annotate("$clingAutoload$AlgoManager.h")))  AlgoManager;}
namespace gate{class __attribute__((annotate("$clingAutoload$GATE/PartProperties.h")))  __attribute__((annotate("$clingAutoload$Centella.h")))  PartProperties;}
namespace gate{class __attribute__((annotate("$clingAutoload$GATE/Irene.h")))  __attribute__((annotate("$clingAutoload$Centella.h")))  control_panel;}
namespace gate{class __attribute__((annotate("$clingAutoload$GATE/Irene.h")))  __attribute__((annotate("$clingAutoload$Centella.h")))  engine;}
namespace gate{class __attribute__((annotate("$clingAutoload$GATE/Irene.h")))  __attribute__((annotate("$clingAutoload$Centella.h")))  sreader;}
namespace gate{class __attribute__((annotate("$clingAutoload$GATE/EventManager.h")))  __attribute__((annotate("$clingAutoload$Centella.h")))  EventManager;}
namespace gate{class __attribute__((annotate("$clingAutoload$GATE/RunManager.h")))  __attribute__((annotate("$clingAutoload$Centella.h")))  RunManager;}
namespace gate{class __attribute__((annotate("$clingAutoload$GATE/LogManager.h")))  __attribute__((annotate("$clingAutoload$Centella.h")))  _log_IO;}
namespace gate{class __attribute__((annotate("$clingAutoload$GATE/LogManager.h")))  __attribute__((annotate("$clingAutoload$Centella.h")))  _param_logger;}
namespace gate{class __attribute__((annotate("$clingAutoload$GATE/LogManager.h")))  __attribute__((annotate("$clingAutoload$Centella.h")))  LogManager;}
namespace gate{class __attribute__((annotate("$clingAutoload$GATE/HistoPlotter.h")))  __attribute__((annotate("$clingAutoload$Centella.h")))  HistoPlotter;}
namespace gate{class __attribute__((annotate("$clingAutoload$GATE/HistoManager.h")))  __attribute__((annotate("$clingAutoload$Centella.h")))  HistoManager;}
namespace gate{class __attribute__((annotate("$clingAutoload$GATE/TreeManager.h")))  __attribute__((annotate("$clingAutoload$Centella.h")))  TreeManager;}
namespace gate{class __attribute__((annotate("$clingAutoload$Centella.h")))  Centella;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGATEUtils dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "AlgoManager.h"
#include "Centella.h"
#include "EventManager.h"
#include "GateUtilities.h"
#include "HistoFunctions.h"
#include "HistoManager.h"
#include "HistoPlotter.h"
#include "IAlgo.h"
#include "Irene.h"
#include "LogManager.h"
#include "Messenger.h"
#include "PartProperties.h"
#include "RunManager.h"
#include "TreeManager.h"
#include "Utilities.h"
#include "physical_constants.h"
#include "system_of_units.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"gate::AlgoManager", payloadCode, "@",
"gate::Centella", payloadCode, "@",
"gate::EventManager", payloadCode, "@",
"gate::HistoManager", payloadCode, "@",
"gate::HistoPlotter", payloadCode, "@",
"gate::IAlgo", payloadCode, "@",
"gate::LogManager", payloadCode, "@",
"gate::Messenger", payloadCode, "@",
"gate::PartProperties", payloadCode, "@",
"gate::RunManager", payloadCode, "@",
"gate::TreeManager", payloadCode, "@",
"gate::_log_IO", payloadCode, "@",
"gate::_param_logger", payloadCode, "@",
"gate::control_panel", payloadCode, "@",
"gate::engine", payloadCode, "@",
"gate::sreader", payloadCode, "@",
"gate::tstore<TH1*>", payloadCode, "@",
"gate::tstore<TTree*>", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGATEUtils",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGATEUtils_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGATEUtils_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGATEUtils() {
  TriggerDictionaryInitialization_libGATEUtils_Impl();
}

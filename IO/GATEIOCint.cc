// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME GATEIOCint

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
#include "HDF5Reader.h"
#include "HDF5Writer.h"
#include "IReader.h"
#include "IWriter.h"
#include "RootHDF5Reader.h"
#include "RootReader.h"
#include "RootReaderEC.h"
#include "RootWriter.h"

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
   static void delete_gatecLcLIReader(void *p);
   static void deleteArray_gatecLcLIReader(void *p);
   static void destruct_gatecLcLIReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::IReader*)
   {
      ::gate::IReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::IReader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::IReader", ::gate::IReader::Class_Version(), "IReader.h", 31,
                  typeid(::gate::IReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::IReader::Dictionary, isa_proxy, 4,
                  sizeof(::gate::IReader) );
      instance.SetDelete(&delete_gatecLcLIReader);
      instance.SetDeleteArray(&deleteArray_gatecLcLIReader);
      instance.SetDestructor(&destruct_gatecLcLIReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::IReader*)
   {
      return GenerateInitInstanceLocal((::gate::IReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::IReader*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLHDF5Reader(void *p = 0);
   static void *newArray_gatecLcLHDF5Reader(Long_t size, void *p);
   static void delete_gatecLcLHDF5Reader(void *p);
   static void deleteArray_gatecLcLHDF5Reader(void *p);
   static void destruct_gatecLcLHDF5Reader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::HDF5Reader*)
   {
      ::gate::HDF5Reader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::HDF5Reader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::HDF5Reader", ::gate::HDF5Reader::Class_Version(), "HDF5Reader.h", 41,
                  typeid(::gate::HDF5Reader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::HDF5Reader::Dictionary, isa_proxy, 4,
                  sizeof(::gate::HDF5Reader) );
      instance.SetNew(&new_gatecLcLHDF5Reader);
      instance.SetNewArray(&newArray_gatecLcLHDF5Reader);
      instance.SetDelete(&delete_gatecLcLHDF5Reader);
      instance.SetDeleteArray(&deleteArray_gatecLcLHDF5Reader);
      instance.SetDestructor(&destruct_gatecLcLHDF5Reader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::HDF5Reader*)
   {
      return GenerateInitInstanceLocal((::gate::HDF5Reader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::HDF5Reader*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_gatecLcLIWriter(void *p);
   static void deleteArray_gatecLcLIWriter(void *p);
   static void destruct_gatecLcLIWriter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::IWriter*)
   {
      ::gate::IWriter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::IWriter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::IWriter", ::gate::IWriter::Class_Version(), "IWriter.h", 27,
                  typeid(::gate::IWriter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::IWriter::Dictionary, isa_proxy, 4,
                  sizeof(::gate::IWriter) );
      instance.SetDelete(&delete_gatecLcLIWriter);
      instance.SetDeleteArray(&deleteArray_gatecLcLIWriter);
      instance.SetDestructor(&destruct_gatecLcLIWriter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::IWriter*)
   {
      return GenerateInitInstanceLocal((::gate::IWriter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::IWriter*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLHDF5Writer(void *p = 0);
   static void *newArray_gatecLcLHDF5Writer(Long_t size, void *p);
   static void delete_gatecLcLHDF5Writer(void *p);
   static void deleteArray_gatecLcLHDF5Writer(void *p);
   static void destruct_gatecLcLHDF5Writer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::HDF5Writer*)
   {
      ::gate::HDF5Writer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::HDF5Writer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::HDF5Writer", ::gate::HDF5Writer::Class_Version(), "HDF5Writer.h", 32,
                  typeid(::gate::HDF5Writer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::HDF5Writer::Dictionary, isa_proxy, 4,
                  sizeof(::gate::HDF5Writer) );
      instance.SetNew(&new_gatecLcLHDF5Writer);
      instance.SetNewArray(&newArray_gatecLcLHDF5Writer);
      instance.SetDelete(&delete_gatecLcLHDF5Writer);
      instance.SetDeleteArray(&deleteArray_gatecLcLHDF5Writer);
      instance.SetDestructor(&destruct_gatecLcLHDF5Writer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::HDF5Writer*)
   {
      return GenerateInitInstanceLocal((::gate::HDF5Writer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::HDF5Writer*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLRootReader(void *p = 0);
   static void *newArray_gatecLcLRootReader(Long_t size, void *p);
   static void delete_gatecLcLRootReader(void *p);
   static void deleteArray_gatecLcLRootReader(void *p);
   static void destruct_gatecLcLRootReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::RootReader*)
   {
      ::gate::RootReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::RootReader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::RootReader", ::gate::RootReader::Class_Version(), "RootReader.h", 32,
                  typeid(::gate::RootReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::RootReader::Dictionary, isa_proxy, 4,
                  sizeof(::gate::RootReader) );
      instance.SetNew(&new_gatecLcLRootReader);
      instance.SetNewArray(&newArray_gatecLcLRootReader);
      instance.SetDelete(&delete_gatecLcLRootReader);
      instance.SetDeleteArray(&deleteArray_gatecLcLRootReader);
      instance.SetDestructor(&destruct_gatecLcLRootReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::RootReader*)
   {
      return GenerateInitInstanceLocal((::gate::RootReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::RootReader*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLRootHDF5Reader(void *p = 0);
   static void *newArray_gatecLcLRootHDF5Reader(Long_t size, void *p);
   static void delete_gatecLcLRootHDF5Reader(void *p);
   static void deleteArray_gatecLcLRootHDF5Reader(void *p);
   static void destruct_gatecLcLRootHDF5Reader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::RootHDF5Reader*)
   {
      ::gate::RootHDF5Reader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::RootHDF5Reader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::RootHDF5Reader", ::gate::RootHDF5Reader::Class_Version(), "RootHDF5Reader.h", 32,
                  typeid(::gate::RootHDF5Reader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::RootHDF5Reader::Dictionary, isa_proxy, 4,
                  sizeof(::gate::RootHDF5Reader) );
      instance.SetNew(&new_gatecLcLRootHDF5Reader);
      instance.SetNewArray(&newArray_gatecLcLRootHDF5Reader);
      instance.SetDelete(&delete_gatecLcLRootHDF5Reader);
      instance.SetDeleteArray(&deleteArray_gatecLcLRootHDF5Reader);
      instance.SetDestructor(&destruct_gatecLcLRootHDF5Reader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::RootHDF5Reader*)
   {
      return GenerateInitInstanceLocal((::gate::RootHDF5Reader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::RootHDF5Reader*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLRootReaderEC(void *p = 0);
   static void *newArray_gatecLcLRootReaderEC(Long_t size, void *p);
   static void delete_gatecLcLRootReaderEC(void *p);
   static void deleteArray_gatecLcLRootReaderEC(void *p);
   static void destruct_gatecLcLRootReaderEC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::RootReaderEC*)
   {
      ::gate::RootReaderEC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::RootReaderEC >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::RootReaderEC", ::gate::RootReaderEC::Class_Version(), "RootReaderEC.h", 35,
                  typeid(::gate::RootReaderEC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::RootReaderEC::Dictionary, isa_proxy, 4,
                  sizeof(::gate::RootReaderEC) );
      instance.SetNew(&new_gatecLcLRootReaderEC);
      instance.SetNewArray(&newArray_gatecLcLRootReaderEC);
      instance.SetDelete(&delete_gatecLcLRootReaderEC);
      instance.SetDeleteArray(&deleteArray_gatecLcLRootReaderEC);
      instance.SetDestructor(&destruct_gatecLcLRootReaderEC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::RootReaderEC*)
   {
      return GenerateInitInstanceLocal((::gate::RootReaderEC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::RootReaderEC*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_gatecLcLRootWriter(void *p = 0);
   static void *newArray_gatecLcLRootWriter(Long_t size, void *p);
   static void delete_gatecLcLRootWriter(void *p);
   static void deleteArray_gatecLcLRootWriter(void *p);
   static void destruct_gatecLcLRootWriter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gate::RootWriter*)
   {
      ::gate::RootWriter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gate::RootWriter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gate::RootWriter", ::gate::RootWriter::Class_Version(), "RootWriter.h", 31,
                  typeid(::gate::RootWriter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gate::RootWriter::Dictionary, isa_proxy, 4,
                  sizeof(::gate::RootWriter) );
      instance.SetNew(&new_gatecLcLRootWriter);
      instance.SetNewArray(&newArray_gatecLcLRootWriter);
      instance.SetDelete(&delete_gatecLcLRootWriter);
      instance.SetDeleteArray(&deleteArray_gatecLcLRootWriter);
      instance.SetDestructor(&destruct_gatecLcLRootWriter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gate::RootWriter*)
   {
      return GenerateInitInstanceLocal((::gate::RootWriter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::gate::RootWriter*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr IReader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *IReader::Class_Name()
{
   return "gate::IReader";
}

//______________________________________________________________________________
const char *IReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::IReader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int IReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::IReader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *IReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::IReader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *IReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::IReader*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr HDF5Reader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HDF5Reader::Class_Name()
{
   return "gate::HDF5Reader";
}

//______________________________________________________________________________
const char *HDF5Reader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::HDF5Reader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HDF5Reader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::HDF5Reader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HDF5Reader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::HDF5Reader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HDF5Reader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::HDF5Reader*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr IWriter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *IWriter::Class_Name()
{
   return "gate::IWriter";
}

//______________________________________________________________________________
const char *IWriter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::IWriter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int IWriter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::IWriter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *IWriter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::IWriter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *IWriter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::IWriter*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr HDF5Writer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HDF5Writer::Class_Name()
{
   return "gate::HDF5Writer";
}

//______________________________________________________________________________
const char *HDF5Writer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::HDF5Writer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HDF5Writer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::HDF5Writer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HDF5Writer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::HDF5Writer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HDF5Writer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::HDF5Writer*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr RootReader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RootReader::Class_Name()
{
   return "gate::RootReader";
}

//______________________________________________________________________________
const char *RootReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::RootReader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RootReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::RootReader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RootReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::RootReader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RootReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::RootReader*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr RootHDF5Reader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RootHDF5Reader::Class_Name()
{
   return "gate::RootHDF5Reader";
}

//______________________________________________________________________________
const char *RootHDF5Reader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::RootHDF5Reader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RootHDF5Reader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::RootHDF5Reader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RootHDF5Reader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::RootHDF5Reader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RootHDF5Reader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::RootHDF5Reader*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr RootReaderEC::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RootReaderEC::Class_Name()
{
   return "gate::RootReaderEC";
}

//______________________________________________________________________________
const char *RootReaderEC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::RootReaderEC*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RootReaderEC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::RootReaderEC*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RootReaderEC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::RootReaderEC*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RootReaderEC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::RootReaderEC*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
atomic_TClass_ptr RootWriter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RootWriter::Class_Name()
{
   return "gate::RootWriter";
}

//______________________________________________________________________________
const char *RootWriter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::RootWriter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RootWriter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gate::RootWriter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RootWriter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::RootWriter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RootWriter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gate::RootWriter*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gate
namespace gate {
//______________________________________________________________________________
void IReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::IReader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::IReader::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::IReader::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrapper around operator delete
   static void delete_gatecLcLIReader(void *p) {
      delete ((::gate::IReader*)p);
   }
   static void deleteArray_gatecLcLIReader(void *p) {
      delete [] ((::gate::IReader*)p);
   }
   static void destruct_gatecLcLIReader(void *p) {
      typedef ::gate::IReader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::IReader

namespace gate {
//______________________________________________________________________________
void HDF5Reader::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::HDF5Reader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::HDF5Reader::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::HDF5Reader::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLHDF5Reader(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::HDF5Reader : new ::gate::HDF5Reader;
   }
   static void *newArray_gatecLcLHDF5Reader(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::HDF5Reader[nElements] : new ::gate::HDF5Reader[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLHDF5Reader(void *p) {
      delete ((::gate::HDF5Reader*)p);
   }
   static void deleteArray_gatecLcLHDF5Reader(void *p) {
      delete [] ((::gate::HDF5Reader*)p);
   }
   static void destruct_gatecLcLHDF5Reader(void *p) {
      typedef ::gate::HDF5Reader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::HDF5Reader

namespace gate {
//______________________________________________________________________________
void IWriter::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::IWriter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::IWriter::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::IWriter::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrapper around operator delete
   static void delete_gatecLcLIWriter(void *p) {
      delete ((::gate::IWriter*)p);
   }
   static void deleteArray_gatecLcLIWriter(void *p) {
      delete [] ((::gate::IWriter*)p);
   }
   static void destruct_gatecLcLIWriter(void *p) {
      typedef ::gate::IWriter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::IWriter

namespace gate {
//______________________________________________________________________________
void HDF5Writer::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::HDF5Writer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::HDF5Writer::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::HDF5Writer::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLHDF5Writer(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::HDF5Writer : new ::gate::HDF5Writer;
   }
   static void *newArray_gatecLcLHDF5Writer(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::HDF5Writer[nElements] : new ::gate::HDF5Writer[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLHDF5Writer(void *p) {
      delete ((::gate::HDF5Writer*)p);
   }
   static void deleteArray_gatecLcLHDF5Writer(void *p) {
      delete [] ((::gate::HDF5Writer*)p);
   }
   static void destruct_gatecLcLHDF5Writer(void *p) {
      typedef ::gate::HDF5Writer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::HDF5Writer

namespace gate {
//______________________________________________________________________________
void RootReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::RootReader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::RootReader::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::RootReader::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLRootReader(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::RootReader : new ::gate::RootReader;
   }
   static void *newArray_gatecLcLRootReader(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::RootReader[nElements] : new ::gate::RootReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLRootReader(void *p) {
      delete ((::gate::RootReader*)p);
   }
   static void deleteArray_gatecLcLRootReader(void *p) {
      delete [] ((::gate::RootReader*)p);
   }
   static void destruct_gatecLcLRootReader(void *p) {
      typedef ::gate::RootReader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::RootReader

namespace gate {
//______________________________________________________________________________
void RootHDF5Reader::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::RootHDF5Reader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::RootHDF5Reader::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::RootHDF5Reader::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLRootHDF5Reader(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::RootHDF5Reader : new ::gate::RootHDF5Reader;
   }
   static void *newArray_gatecLcLRootHDF5Reader(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::RootHDF5Reader[nElements] : new ::gate::RootHDF5Reader[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLRootHDF5Reader(void *p) {
      delete ((::gate::RootHDF5Reader*)p);
   }
   static void deleteArray_gatecLcLRootHDF5Reader(void *p) {
      delete [] ((::gate::RootHDF5Reader*)p);
   }
   static void destruct_gatecLcLRootHDF5Reader(void *p) {
      typedef ::gate::RootHDF5Reader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::RootHDF5Reader

namespace gate {
//______________________________________________________________________________
void RootReaderEC::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::RootReaderEC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::RootReaderEC::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::RootReaderEC::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLRootReaderEC(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::RootReaderEC : new ::gate::RootReaderEC;
   }
   static void *newArray_gatecLcLRootReaderEC(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::RootReaderEC[nElements] : new ::gate::RootReaderEC[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLRootReaderEC(void *p) {
      delete ((::gate::RootReaderEC*)p);
   }
   static void deleteArray_gatecLcLRootReaderEC(void *p) {
      delete [] ((::gate::RootReaderEC*)p);
   }
   static void destruct_gatecLcLRootReaderEC(void *p) {
      typedef ::gate::RootReaderEC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::RootReaderEC

namespace gate {
//______________________________________________________________________________
void RootWriter::Streamer(TBuffer &R__b)
{
   // Stream an object of class gate::RootWriter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gate::RootWriter::Class(),this);
   } else {
      R__b.WriteClassBuffer(gate::RootWriter::Class(),this);
   }
}

} // namespace gate
namespace ROOT {
   // Wrappers around operator new
   static void *new_gatecLcLRootWriter(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::RootWriter : new ::gate::RootWriter;
   }
   static void *newArray_gatecLcLRootWriter(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gate::RootWriter[nElements] : new ::gate::RootWriter[nElements];
   }
   // Wrapper around operator delete
   static void delete_gatecLcLRootWriter(void *p) {
      delete ((::gate::RootWriter*)p);
   }
   static void deleteArray_gatecLcLRootWriter(void *p) {
      delete [] ((::gate::RootWriter*)p);
   }
   static void destruct_gatecLcLRootWriter(void *p) {
      typedef ::gate::RootWriter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gate::RootWriter

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
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
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
                  &maplEintcOgatecLcLSensormUgR_Dictionary, isa_proxy, 0,
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

namespace {
  void TriggerDictionaryInitialization_libGATEIO_Impl() {
    static const char* headers[] = {
"HDF5Reader.h",
"HDF5Writer.h",
"IReader.h",
"IWriter.h",
"RootHDF5Reader.h",
"RootReader.h",
"RootReaderEC.h",
"RootWriter.h",
0
    };
    static const char* includePaths[] = {
"../",
"../emodel",
"/Users/chur558/root-6.08.06/build/include",
"/Users/chur558/NEXT/GATE/IO/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGATEIO dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace gate{class __attribute__((annotate("$clingAutoload$IReader.h")))  __attribute__((annotate("$clingAutoload$HDF5Reader.h")))  IReader;}
namespace gate{class __attribute__((annotate("$clingAutoload$HDF5Reader.h")))  HDF5Reader;}
namespace gate{class __attribute__((annotate("$clingAutoload$IWriter.h")))  __attribute__((annotate("$clingAutoload$HDF5Writer.h")))  IWriter;}
namespace gate{class __attribute__((annotate("$clingAutoload$HDF5Writer.h")))  HDF5Writer;}
namespace gate{class __attribute__((annotate("$clingAutoload$RootReader.h")))  __attribute__((annotate("$clingAutoload$RootHDF5Reader.h")))  RootReader;}
namespace gate{class __attribute__((annotate("$clingAutoload$RootHDF5Reader.h")))  RootHDF5Reader;}
namespace gate{class __attribute__((annotate("$clingAutoload$RootReaderEC.h")))  RootReaderEC;}
namespace gate{class __attribute__((annotate("$clingAutoload$RootWriter.h")))  RootWriter;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGATEIO dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "HDF5Reader.h"
#include "HDF5Writer.h"
#include "IReader.h"
#include "IWriter.h"
#include "RootHDF5Reader.h"
#include "RootReader.h"
#include "RootReaderEC.h"
#include "RootWriter.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"gate::HDF5Reader", payloadCode, "@",
"gate::HDF5Writer", payloadCode, "@",
"gate::IReader", payloadCode, "@",
"gate::IWriter", payloadCode, "@",
"gate::RootHDF5Reader", payloadCode, "@",
"gate::RootReader", payloadCode, "@",
"gate::RootReaderEC", payloadCode, "@",
"gate::RootWriter", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGATEIO",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGATEIO_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGATEIO_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGATEIO() {
  TriggerDictionaryInitialization_libGATEIO_Impl();
}

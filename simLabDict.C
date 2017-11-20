// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME simLabDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
#include "TLab.h"
#include "TSim.h"
#include "TTheory.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TSim(void *p = 0);
   static void *newArray_TSim(Long_t size, void *p);
   static void delete_TSim(void *p);
   static void deleteArray_TSim(void *p);
   static void destruct_TSim(void *p);
   static void streamer_TSim(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSim*)
   {
      ::TSim *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSim >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TSim", ::TSim::Class_Version(), "TSim.h", 10,
                  typeid(::TSim), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSim::Dictionary, isa_proxy, 16,
                  sizeof(::TSim) );
      instance.SetNew(&new_TSim);
      instance.SetNewArray(&newArray_TSim);
      instance.SetDelete(&delete_TSim);
      instance.SetDeleteArray(&deleteArray_TSim);
      instance.SetDestructor(&destruct_TSim);
      instance.SetStreamerFunc(&streamer_TSim);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSim*)
   {
      return GenerateInitInstanceLocal((::TSim*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TSim*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLab(void *p = 0);
   static void *newArray_TLab(Long_t size, void *p);
   static void delete_TLab(void *p);
   static void deleteArray_TLab(void *p);
   static void destruct_TLab(void *p);
   static void streamer_TLab(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLab*)
   {
      ::TLab *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLab >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TLab", ::TLab::Class_Version(), "TLab.h", 8,
                  typeid(::TLab), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLab::Dictionary, isa_proxy, 16,
                  sizeof(::TLab) );
      instance.SetNew(&new_TLab);
      instance.SetNewArray(&newArray_TLab);
      instance.SetDelete(&delete_TLab);
      instance.SetDeleteArray(&deleteArray_TLab);
      instance.SetDestructor(&destruct_TLab);
      instance.SetStreamerFunc(&streamer_TLab);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLab*)
   {
      return GenerateInitInstanceLocal((::TLab*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TLab*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTheory(void *p = 0);
   static void *newArray_TTheory(Long_t size, void *p);
   static void delete_TTheory(void *p);
   static void deleteArray_TTheory(void *p);
   static void destruct_TTheory(void *p);
   static void streamer_TTheory(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTheory*)
   {
      ::TTheory *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTheory >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTheory", ::TTheory::Class_Version(), "TTheory.h", 7,
                  typeid(::TTheory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTheory::Dictionary, isa_proxy, 16,
                  sizeof(::TTheory) );
      instance.SetNew(&new_TTheory);
      instance.SetNewArray(&newArray_TTheory);
      instance.SetDelete(&delete_TTheory);
      instance.SetDeleteArray(&deleteArray_TTheory);
      instance.SetDestructor(&destruct_TTheory);
      instance.SetStreamerFunc(&streamer_TTheory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTheory*)
   {
      return GenerateInitInstanceLocal((::TTheory*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TTheory*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TSim::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TSim::Class_Name()
{
   return "TSim";
}

//______________________________________________________________________________
const char *TSim::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSim*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TSim::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSim*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSim::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSim*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSim::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSim*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLab::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TLab::Class_Name()
{
   return "TLab";
}

//______________________________________________________________________________
const char *TLab::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLab*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TLab::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLab*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLab::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLab*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLab::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLab*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTheory::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTheory::Class_Name()
{
   return "TTheory";
}

//______________________________________________________________________________
const char *TTheory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTheory*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTheory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTheory*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTheory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTheory*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTheory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTheory*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TSim::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSim.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.ReadStaticArray((double*)EA);
      R__b.ReadStaticArray((double*)EB);
      R__b.ReadStaticArray((float*)etHA);
      R__b.ReadStaticArray((float*)etHB);
      R__b.ReadStaticArray((float*)ltHA);
      R__b.ReadStaticArray((float*)ltHB);
      R__b.ReadStaticArray((float*)mintHAErr);
      R__b.ReadStaticArray((float*)mintHBErr);
      R__b.ReadStaticArray((float*)maxtHAErr);
      R__b.ReadStaticArray((float*)maxtHBErr);
      R__b.ReadStaticArray((double*)simtHA);
      R__b.ReadStaticArray((double*)simtHB);
      R__b.ReadStaticArray((double*)simPhiA);
      R__b.ReadStaticArray((double*)simPhiB);
      R__b.ReadStaticArray((int*)nb_ComptA);
      R__b.ReadStaticArray((int*)nb_ComptB);
      R__b.ReadStaticArray((double*)XposA);
      R__b.ReadStaticArray((double*)YposA);
      R__b.ReadStaticArray((double*)ZposA);
      R__b.ReadStaticArray((double*)XposB);
      R__b.ReadStaticArray((double*)YposB);
      R__b.ReadStaticArray((double*)ZposB);
      R__b.ReadStaticArray((float*)ThMin);
      R__b.ReadStaticArray((float*)ThMax);
      R__b.ReadStaticArray((float*)plotTheta);
      R__b.ReadStaticArray((float*)AsymMatrix_sim);
      R__b.ReadStaticArray((float*)AsymMatrix);
      R__b.ReadStaticArray((float*)AsymTrue);
      R__b.ReadStaticArray((float*)AsPhiDiff);
      R__b.ReadStaticArray((float*)AePhiDiff);
      R__b.ReadStaticArray((float*)AsTrue);
      R__b.ReadStaticArray((float*)AeTrue);
      R__b >> n000;
      R__b >> n090;
      R__b >> n180;
      R__b >> n270;
      R__b.ReadStaticArray((double*)sigmaA);
      R__b.ReadStaticArray((double*)sigmaB);
      rootFileRawName.Streamer(R__b);
      rootFileSortName.Streamer(R__b);
      rootFileRawName1.Streamer(R__b);
      rootFileSortName1.Streamer(R__b);
      rootFileRawName2.Streamer(R__b);
      rootFileSortName2.Streamer(R__b);
      int R__i;
      for (R__i = 0; R__i < 8; R__i++)
         R__b >> hDPhi[R__i];
      R__b >> theFile;
      R__b >> sortDataTree;
      R__b >> simDataTree;
      R__b >> edep0;
      R__b >> edep1;
      R__b >> edep2;
      R__b >> edep3;
      R__b >> edep4;
      R__b >> edep5;
      R__b >> edep6;
      R__b >> edep7;
      R__b >> edep8;
      R__b >> edep9;
      R__b >> edep10;
      R__b >> edep11;
      R__b >> edep12;
      R__b >> edep13;
      R__b >> edep14;
      R__b >> edep15;
      R__b >> edep16;
      R__b >> edep17;
      R__b >> edepColl1;
      R__b >> edepColl2;
      R__b >> nb_Compt0;
      R__b >> nb_Compt1;
      R__b >> nb_Compt2;
      R__b >> nb_Compt3;
      R__b >> nb_Compt4;
      R__b >> nb_Compt5;
      R__b >> nb_Compt6;
      R__b >> nb_Compt7;
      R__b >> nb_Compt8;
      R__b >> nb_Compt9;
      R__b >> nb_Compt10;
      R__b >> nb_Compt11;
      R__b >> nb_Compt12;
      R__b >> nb_Compt13;
      R__b >> nb_Compt14;
      R__b >> nb_Compt15;
      R__b >> nb_Compt16;
      R__b >> nb_Compt17;
      R__b >> XposA_1st;
      R__b >> YposA_1st;
      R__b >> ZposA_1st;
      R__b >> XposA_2nd;
      R__b >> YposA_2nd;
      R__b >> ZposA_2nd;
      R__b >> XposB_1st;
      R__b >> YposB_1st;
      R__b >> ZposB_1st;
      R__b >> XposB_2nd;
      R__b >> YposB_2nd;
      R__b >> ZposB_2nd;
      R__b >> ThetaA_1st;
      R__b >> PhiA_1st;
      R__b >> ThetaB_1st;
      R__b >> PhiB_1st;
      R__b >> dPhi_1st;
      R__b >> ThetaA_2nd;
      R__b >> PhiA_2nd;
      R__b >> ThetaB_2nd;
      R__b >> PhiB_2nd;
      R__b >> dPhi_2nd;
      R__b.CheckByteCount(R__s, R__c, TSim::IsA());
   } else {
      R__c = R__b.WriteVersion(TSim::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.WriteArray(EA, 9);
      R__b.WriteArray(EB, 9);
      R__b.WriteArray(etHA, 9);
      R__b.WriteArray(etHB, 9);
      R__b.WriteArray(ltHA, 9);
      R__b.WriteArray(ltHB, 9);
      R__b.WriteArray(mintHAErr, 9);
      R__b.WriteArray(mintHBErr, 9);
      R__b.WriteArray(maxtHAErr, 9);
      R__b.WriteArray(maxtHBErr, 9);
      R__b.WriteArray(simtHA, 9);
      R__b.WriteArray(simtHB, 9);
      R__b.WriteArray(simPhiA, 9);
      R__b.WriteArray(simPhiB, 9);
      R__b.WriteArray(nb_ComptA, 9);
      R__b.WriteArray(nb_ComptB, 9);
      R__b.WriteArray(XposA, 9);
      R__b.WriteArray(YposA, 9);
      R__b.WriteArray(ZposA, 9);
      R__b.WriteArray(XposB, 9);
      R__b.WriteArray(YposB, 9);
      R__b.WriteArray(ZposB, 9);
      R__b.WriteArray(ThMin, 8);
      R__b.WriteArray(ThMax, 8);
      R__b.WriteArray(plotTheta, 8);
      R__b.WriteArray((float*)AsymMatrix_sim, 64);
      R__b.WriteArray((float*)AsymMatrix, 32);
      R__b.WriteArray((float*)AsymTrue, 32);
      R__b.WriteArray(AsPhiDiff, 8);
      R__b.WriteArray(AePhiDiff, 8);
      R__b.WriteArray(AsTrue, 8);
      R__b.WriteArray(AeTrue, 8);
      R__b << n000;
      R__b << n090;
      R__b << n180;
      R__b << n270;
      R__b.WriteArray(sigmaA, 9);
      R__b.WriteArray(sigmaB, 9);
      rootFileRawName.Streamer(R__b);
      rootFileSortName.Streamer(R__b);
      rootFileRawName1.Streamer(R__b);
      rootFileSortName1.Streamer(R__b);
      rootFileRawName2.Streamer(R__b);
      rootFileSortName2.Streamer(R__b);
      int R__i;
      for (R__i = 0; R__i < 8; R__i++)
         R__b << (TObject*)hDPhi[R__i];
      R__b << theFile;
      R__b << sortDataTree;
      R__b << simDataTree;
      R__b << edep0;
      R__b << edep1;
      R__b << edep2;
      R__b << edep3;
      R__b << edep4;
      R__b << edep5;
      R__b << edep6;
      R__b << edep7;
      R__b << edep8;
      R__b << edep9;
      R__b << edep10;
      R__b << edep11;
      R__b << edep12;
      R__b << edep13;
      R__b << edep14;
      R__b << edep15;
      R__b << edep16;
      R__b << edep17;
      R__b << edepColl1;
      R__b << edepColl2;
      R__b << nb_Compt0;
      R__b << nb_Compt1;
      R__b << nb_Compt2;
      R__b << nb_Compt3;
      R__b << nb_Compt4;
      R__b << nb_Compt5;
      R__b << nb_Compt6;
      R__b << nb_Compt7;
      R__b << nb_Compt8;
      R__b << nb_Compt9;
      R__b << nb_Compt10;
      R__b << nb_Compt11;
      R__b << nb_Compt12;
      R__b << nb_Compt13;
      R__b << nb_Compt14;
      R__b << nb_Compt15;
      R__b << nb_Compt16;
      R__b << nb_Compt17;
      R__b << XposA_1st;
      R__b << YposA_1st;
      R__b << ZposA_1st;
      R__b << XposA_2nd;
      R__b << YposA_2nd;
      R__b << ZposA_2nd;
      R__b << XposB_1st;
      R__b << YposB_1st;
      R__b << ZposB_1st;
      R__b << XposB_2nd;
      R__b << YposB_2nd;
      R__b << ZposB_2nd;
      R__b << ThetaA_1st;
      R__b << PhiA_1st;
      R__b << ThetaB_1st;
      R__b << PhiB_1st;
      R__b << dPhi_1st;
      R__b << ThetaA_2nd;
      R__b << PhiA_2nd;
      R__b << ThetaB_2nd;
      R__b << PhiB_2nd;
      R__b << dPhi_2nd;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSim(void *p) {
      return  p ? new(p) ::TSim : new ::TSim;
   }
   static void *newArray_TSim(Long_t nElements, void *p) {
      return p ? new(p) ::TSim[nElements] : new ::TSim[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSim(void *p) {
      delete ((::TSim*)p);
   }
   static void deleteArray_TSim(void *p) {
      delete [] ((::TSim*)p);
   }
   static void destruct_TSim(void *p) {
      typedef ::TSim current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSim(TBuffer &buf, void *obj) {
      ((::TSim*)obj)->::TSim::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSim

//______________________________________________________________________________
void TLab::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLab.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.ReadStaticArray((float*)ThMin);
      R__b.ReadStaticArray((float*)ThMax);
      R__b.ReadStaticArray((float*)plotTheta);
      R__b.ReadStaticArray((float*)AsymMatrix);
      R__b.ReadStaticArray((float*)muMatrix);
      R__b >> runNumberInt;
      simRun.Streamer(R__b);
      R__b >> inData;
      R__b >> rootFileRawData;
      R__b >> rawDataTree;
      R__b >> rootFileCalData;
      R__b >> calDataTree;
      textFileName.Streamer(R__b);
      rootFileRawName.Streamer(R__b);
      rootFileCalName.Streamer(R__b);
      R__b >> canvas1;
      R__b >> canvas2;
      int R__i;
      for (R__i = 0; R__i < 30; R__i++)
         hQ[0][R__i]->Streamer(R__b);
      for (R__i = 0; R__i < 10; R__i++)
         R__b >> hT[R__i];
      R__b >> eventNumber;
      R__b.ReadStaticArray((float*)Q);
      R__b.ReadStaticArray((float*)T);
      R__b.ReadStaticArray((float*)pedQ);
      R__b.ReadStaticArray((float*)phoQ);
      R__b.ReadStaticArray((float*)HWHM);
      for (R__i = 0; R__i < 9; R__i++)
         R__b >> hEA[R__i];
      for (R__i = 0; R__i < 9; R__i++)
         R__b >> hEB[R__i];
      R__b.ReadStaticArray((float*)QA);
      R__b.ReadStaticArray((float*)QB);
      R__b.ReadStaticArray((float*)EA);
      R__b.ReadStaticArray((float*)EB);
      R__b.ReadStaticArray((float*)TA);
      R__b.ReadStaticArray((float*)TB);
      R__b.ReadStaticArray((float*)tHA);
      R__b.ReadStaticArray((float*)tHB);
      R__b.ReadStaticArray((float*)tHAErr);
      R__b.ReadStaticArray((float*)tHBErr);
      R__b >> Asym;
      R__b >> AsymErr;
      R__b.ReadStaticArray((float*)AsymPhi);
      R__b.ReadStaticArray((float*)AsymPhiErr);
      R__b >> R000;
      R__b >> R090;
      R__b >> AR;
      R__b >> BR;
      R__b >> type;
      R__b >> simData;
      R__b >> npeaks;
      R__b >> hr;
      R__b.CheckByteCount(R__s, R__c, TLab::IsA());
   } else {
      R__c = R__b.WriteVersion(TLab::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.WriteArray(ThMin, 8);
      R__b.WriteArray(ThMax, 8);
      R__b.WriteArray(plotTheta, 8);
      R__b.WriteArray((float*)AsymMatrix, 32);
      R__b.WriteArray((float*)muMatrix, 32);
      R__b << runNumberInt;
      simRun.Streamer(R__b);
      R__b << inData;
      R__b << rootFileRawData;
      R__b << rawDataTree;
      R__b << rootFileCalData;
      R__b << calDataTree;
      textFileName.Streamer(R__b);
      rootFileRawName.Streamer(R__b);
      rootFileCalName.Streamer(R__b);
      R__b << canvas1;
      R__b << canvas2;
      int R__i;
      for (R__i = 0; R__i < 30; R__i++)
         hQ[0][R__i]->Streamer(R__b);
      for (R__i = 0; R__i < 10; R__i++)
         R__b << (TObject*)hT[R__i];
      R__b << eventNumber;
      R__b.WriteArray(Q, 10);
      R__b.WriteArray(T, 10);
      R__b.WriteArray((float*)pedQ, 30);
      R__b.WriteArray((float*)phoQ, 30);
      R__b.WriteArray((float*)HWHM, 30);
      for (R__i = 0; R__i < 9; R__i++)
         R__b << (TObject*)hEA[R__i];
      for (R__i = 0; R__i < 9; R__i++)
         R__b << (TObject*)hEB[R__i];
      R__b.WriteArray(QA, 9);
      R__b.WriteArray(QB, 9);
      R__b.WriteArray(EA, 9);
      R__b.WriteArray(EB, 9);
      R__b.WriteArray(TA, 9);
      R__b.WriteArray(TB, 9);
      R__b.WriteArray(tHA, 9);
      R__b.WriteArray(tHB, 9);
      R__b.WriteArray(tHAErr, 9);
      R__b.WriteArray(tHBErr, 9);
      R__b << Asym;
      R__b << AsymErr;
      R__b.WriteArray(AsymPhi, 4);
      R__b.WriteArray(AsymPhiErr, 4);
      R__b << R000;
      R__b << R090;
      R__b << AR;
      R__b << BR;
      R__b << type;
      R__b << simData;
      R__b << npeaks;
      R__b << (TObject*)hr;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLab(void *p) {
      return  p ? new(p) ::TLab : new ::TLab;
   }
   static void *newArray_TLab(Long_t nElements, void *p) {
      return p ? new(p) ::TLab[nElements] : new ::TLab[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLab(void *p) {
      delete ((::TLab*)p);
   }
   static void deleteArray_TLab(void *p) {
      delete [] ((::TLab*)p);
   }
   static void destruct_TLab(void *p) {
      typedef ::TLab current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TLab(TBuffer &buf, void *obj) {
      ((::TLab*)obj)->::TLab::Streamer(buf);
   }
} // end of namespace ROOT for class ::TLab

//______________________________________________________________________________
void TTheory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTheory.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TTheory::IsA());
   } else {
      R__c = R__b.WriteVersion(TTheory::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTheory(void *p) {
      return  p ? new(p) ::TTheory : new ::TTheory;
   }
   static void *newArray_TTheory(Long_t nElements, void *p) {
      return p ? new(p) ::TTheory[nElements] : new ::TTheory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTheory(void *p) {
      delete ((::TTheory*)p);
   }
   static void deleteArray_TTheory(void *p) {
      delete [] ((::TTheory*)p);
   }
   static void destruct_TTheory(void *p) {
      typedef ::TTheory current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TTheory(TBuffer &buf, void *obj) {
      ((::TTheory*)obj)->::TTheory::Streamer(buf);
   }
} // end of namespace ROOT for class ::TTheory

namespace {
  void TriggerDictionaryInitialization_simLabDict_Impl() {
    static const char* headers[] = {
"TLab.h",
"TSim.h",
"TTheory.h",
0
    };
    static const char* includePaths[] = {
"/usr/include/root",
"/usr/include/root",
"/home/s1321516/MPhysProject/Simlab-master/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "simLabDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$TLab.h")))  TSim;
class __attribute__((annotate("$clingAutoload$TLab.h")))  TLab;
class __attribute__((annotate("$clingAutoload$TLab.h")))  TTheory;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "simLabDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TLab.h"
#include "TSim.h"
#include "TTheory.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TLab", payloadCode, "@",
"TSim", payloadCode, "@",
"TTheory", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("simLabDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_simLabDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_simLabDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_simLabDict() {
  TriggerDictionaryInitialization_simLabDict_Impl();
}

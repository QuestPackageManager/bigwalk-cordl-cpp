#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/ThreadHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadHelper)
namespace Rewired::Utils::Classes::Utility {
class Stopwatch;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Threading {
class AutoResetEvent;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Threading {
class Thread;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Utility {
class ThreadHelper;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Classes::Utility::ThreadHelper*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Utility::ThreadHelper*, "Rewired.Utils.Classes.Utility", "ThreadHelper");
// Dependencies System.Object
namespace Rewired::Utils::Classes::Utility {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Utility.ThreadHelper
class CORDL_TYPE ThreadHelper : public ::System::Object {
public:
// Declarations
/// @brief Field FocOTLwYmLaqgFlbOXxBnrjhIbmA, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_FocOTLwYmLaqgFlbOXxBnrjhIbmA, put=__cordl_internal_set_FocOTLwYmLaqgFlbOXxBnrjhIbmA)) ::System::Threading::Thread*  FocOTLwYmLaqgFlbOXxBnrjhIbmA;

/// @brief Field GdBDayfHSXGwvXaejfJMKomHuXlV, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_GdBDayfHSXGwvXaejfJMKomHuXlV, put=__cordl_internal_set_GdBDayfHSXGwvXaejfJMKomHuXlV)) ::System::Action*  GdBDayfHSXGwvXaejfJMKomHuXlV;

/// @brief Field GoGoxNJMcFRAprZMXtYoSnzTghpu, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_GoGoxNJMcFRAprZMXtYoSnzTghpu, put=__cordl_internal_set_GoGoxNJMcFRAprZMXtYoSnzTghpu)) bool  GoGoxNJMcFRAprZMXtYoSnzTghpu;

/// @brief Field ICUcMXDstmTeuTdGLlSZAoJjBxlj, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_ICUcMXDstmTeuTdGLlSZAoJjBxlj, put=__cordl_internal_set_ICUcMXDstmTeuTdGLlSZAoJjBxlj)) uint32_t  ICUcMXDstmTeuTdGLlSZAoJjBxlj;

/// @brief Field MZFQWQozfOVUrDwfDacnseNbOHZp, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_MZFQWQozfOVUrDwfDacnseNbOHZp, put=__cordl_internal_set_MZFQWQozfOVUrDwfDacnseNbOHZp)) ::System::Collections::Generic::Queue_1<::System::Action*>*  MZFQWQozfOVUrDwfDacnseNbOHZp;

/// @brief Field NSUGhlftdNfJtHGVelePVXVQktdN, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_NSUGhlftdNfJtHGVelePVXVQktdN, put=__cordl_internal_set_NSUGhlftdNfJtHGVelePVXVQktdN)) ::System::Collections::Generic::Queue_1<::System::Action*>*  NSUGhlftdNfJtHGVelePVXVQktdN;

/// @brief Field ShyyrabyYkIhZjwZmoEsMGqOKKDG, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_ShyyrabyYkIhZjwZmoEsMGqOKKDG, put=__cordl_internal_set_ShyyrabyYkIhZjwZmoEsMGqOKKDG)) int64_t  ShyyrabyYkIhZjwZmoEsMGqOKKDG;

/// @brief Field SxTnEvVFvXVZBDcSrAwlYRkRihxS, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SxTnEvVFvXVZBDcSrAwlYRkRihxS, put=__cordl_internal_set_SxTnEvVFvXVZBDcSrAwlYRkRihxS)) ::System::Threading::ManualResetEvent*  SxTnEvVFvXVZBDcSrAwlYRkRihxS;

/// @brief Field TFwyfoliZRCzeOjqlUBOCiKhcUhP, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_TFwyfoliZRCzeOjqlUBOCiKhcUhP, put=__cordl_internal_set_TFwyfoliZRCzeOjqlUBOCiKhcUhP)) ::Rewired::Utils::Classes::Utility::Stopwatch*  TFwyfoliZRCzeOjqlUBOCiKhcUhP;

/// @brief Field TGEFcshiKsJPLUFtpezGArRNanKv, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_TGEFcshiKsJPLUFtpezGArRNanKv, put=__cordl_internal_set_TGEFcshiKsJPLUFtpezGArRNanKv)) ::System::Action*  TGEFcshiKsJPLUFtpezGArRNanKv;

/// @brief Field TtRVIPgeGhKgDDsqcXTgkupimnMD, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_TtRVIPgeGhKgDDsqcXTgkupimnMD, put=__cordl_internal_set_TtRVIPgeGhKgDDsqcXTgkupimnMD)) ::System::Object*  TtRVIPgeGhKgDDsqcXTgkupimnMD;

/// @brief Field ZBudPWbdzcaeGbntKpnkiaTIJBsPb, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_ZBudPWbdzcaeGbntKpnkiaTIJBsPb, put=__cordl_internal_set_ZBudPWbdzcaeGbntKpnkiaTIJBsPb)) ::System::Action*  ZBudPWbdzcaeGbntKpnkiaTIJBsPb;

/// @brief Field ZQvBsLNiblwDkZcGhuXdalfqLgGF, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_ZQvBsLNiblwDkZcGhuXdalfqLgGF, put=__cordl_internal_set_ZQvBsLNiblwDkZcGhuXdalfqLgGF)) int64_t  ZQvBsLNiblwDkZcGhuXdalfqLgGF;

/// @brief Field cjqQyZzSEVtGIREOwqEqCKMuCdzK, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_cjqQyZzSEVtGIREOwqEqCKMuCdzK, put=__cordl_internal_set_cjqQyZzSEVtGIREOwqEqCKMuCdzK)) int32_t  cjqQyZzSEVtGIREOwqEqCKMuCdzK;

 __declspec(property(get=get_fixedTimeStepFPS, put=set_fixedTimeStepFPS)) int32_t  fixedTimeStepFPS;

/// @brief Field iVRzuojxBXpSvxFBKhCIowWAAyhR, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_iVRzuojxBXpSvxFBKhCIowWAAyhR, put=__cordl_internal_set_iVRzuojxBXpSvxFBKhCIowWAAyhR)) ::System::Threading::ManualResetEvent*  iVRzuojxBXpSvxFBKhCIowWAAyhR;

 __declspec(property(get=get_isRunning)) bool  isRunning;

 __declspec(property(get=get_isStopped)) bool  isStopped;

/// @brief Field mvQbjHRONLGwLOmEgDiczUnPJagK, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_mvQbjHRONLGwLOmEgDiczUnPJagK, put=__cordl_internal_set_mvQbjHRONLGwLOmEgDiczUnPJagK)) bool  mvQbjHRONLGwLOmEgDiczUnPJagK;

/// @brief Field qKYYkiDLDkuMgRGEZfoODtxZGNip, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_qKYYkiDLDkuMgRGEZfoODtxZGNip, put=__cordl_internal_set_qKYYkiDLDkuMgRGEZfoODtxZGNip)) int32_t  qKYYkiDLDkuMgRGEZfoODtxZGNip;

/// @brief Field rvcbJSEheDJVvrYbMmdegoRBPEFM, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_rvcbJSEheDJVvrYbMmdegoRBPEFM, put=__cordl_internal_set_rvcbJSEheDJVvrYbMmdegoRBPEFM)) bool  rvcbJSEheDJVvrYbMmdegoRBPEFM;

/// @brief Field sQJrQeUbrmkBZilpkJJnKWVNpbhm, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sQJrQeUbrmkBZilpkJJnKWVNpbhm, put=__cordl_internal_set_sQJrQeUbrmkBZilpkJJnKWVNpbhm)) ::System::Threading::AutoResetEvent*  sQJrQeUbrmkBZilpkJJnKWVNpbhm;

/// @brief Field sypyOAsFGVBhDssAnVNPQjAGLczX, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sypyOAsFGVBhDssAnVNPQjAGLczX, put=__cordl_internal_set_sypyOAsFGVBhDssAnVNPQjAGLczX)) int32_t  sypyOAsFGVBhDssAnVNPQjAGLczX;

/// @brief Field thocaeBHambMaWKmwnilxWwwzWXc, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_thocaeBHambMaWKmwnilxWwwzWXc, put=__cordl_internal_set_thocaeBHambMaWKmwnilxWwwzWXc)) bool  thocaeBHambMaWKmwnilxWwwzWXc;

 __declspec(property(get=get_tick)) uint32_t  tick;

 __declspec(property(get=get_timeoutMS, put=set_timeoutMS)) int32_t  timeoutMS;

 __declspec(property(get=get_useFixedTimeStep)) bool  useFixedTimeStep;

 __declspec(property(get=get_useHighPrecitionTimer, put=set_useHighPrecitionTimer)) bool  useHighPrecitionTimer;

/// @brief Field vUHvOOHhdzGGndZNOBGeBjtDesXS, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_vUHvOOHhdzGGndZNOBGeBjtDesXS, put=__cordl_internal_set_vUHvOOHhdzGGndZNOBGeBjtDesXS)) bool  vUHvOOHhdzGGndZNOBGeBjtDesXS;

/// @brief Field xHYHuPcLcuIsUABxBMkejNujelHXA, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_xHYHuPcLcuIsUABxBMkejNujelHXA, put=__cordl_internal_set_xHYHuPcLcuIsUABxBMkejNujelHXA)) bool  xHYHuPcLcuIsUABxBMkejNujelHXA;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Create, addr 0x18193baa0, size 0x80, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Utility::ThreadHelper* Create(bool  fixedTimeStep, int32_t  fixedTimeStepFPS, bool  useHighPrecisionTimer, int32_t  timeoutMS) ;

/// @brief Method CreateFixedTimeStep, addr 0x18193ba50, size 0x50, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Utility::ThreadHelper* CreateFixedTimeStep(int32_t  timeStepFPS, int32_t  timeoutMS) ;

/// @brief Method CreateFixedTimeStep, addr 0x18193b9f0, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Utility::ThreadHelper* CreateFixedTimeStep(int32_t  timeStepFPS, bool  useHighPrecisionTimer, int32_t  timeoutMS) ;

/// @brief Method Dispose, addr 0x18193bc30, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x18193bb20, size 0x110, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method ElTlwZeAyhiHhTfLfwpXWTExSnqW, addr 0x18193bc60, size 0x600, virtual false, abstract: false, final false
inline void ElTlwZeAyhiHhTfLfwpXWTExSnqW() ;

/// @brief Method EnqueueAction, addr 0x18193c260, size 0x110, virtual false, abstract: false, final false
inline bool EnqueueAction(::System::Action*  action) ;

/// @brief Method Finalize, addr 0x18193c370, size 0x20, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method ICeeiyblRzpQuEjPfszXIiWEnlkkE, addr 0x1803456c0, size 0x90, virtual false, abstract: false, final false
inline void ICeeiyblRzpQuEjPfszXIiWEnlkkE(::System::Action*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method InvokeActionSync, addr 0x18193c390, size 0x40, virtual false, abstract: false, final false
inline bool InvokeActionSync(::System::Action*  action) ;

static inline ::Rewired::Utils::Classes::Utility::ThreadHelper* New_ctor() ;

static inline ::Rewired::Utils::Classes::Utility::ThreadHelper* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Utils::Classes::Utility::ThreadHelper* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method PLyumRfOMajDafKiLgvtpcFbhfTl, addr 0x18193c3d0, size 0x10, virtual false, abstract: false, final false
static inline void PLyumRfOMajDafKiLgvtpcFbhfTl(::System::Object*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ResetTimeout, addr 0x18193c3e0, size 0x50, virtual false, abstract: false, final false
inline void ResetTimeout() ;

/// @brief Method Start, addr 0x18193c430, size 0x110, virtual false, abstract: false, final false
inline bool Start(bool  wait) ;

/// @brief Method Stop, addr 0x18193c540, size 0x100, virtual false, abstract: false, final false
inline void Stop(bool  wait) ;

/// @brief Method WaitForActionQueueToFinish, addr 0x18193c640, size 0x1c0, virtual false, abstract: false, final false
inline void WaitForActionQueueToFinish() ;

constexpr ::System::Threading::Thread* const& __cordl_internal_get_FocOTLwYmLaqgFlbOXxBnrjhIbmA() const;

constexpr ::System::Threading::Thread*& __cordl_internal_get_FocOTLwYmLaqgFlbOXxBnrjhIbmA() ;

constexpr ::System::Action* const& __cordl_internal_get_GdBDayfHSXGwvXaejfJMKomHuXlV() const;

constexpr ::System::Action*& __cordl_internal_get_GdBDayfHSXGwvXaejfJMKomHuXlV() ;

constexpr bool const& __cordl_internal_get_GoGoxNJMcFRAprZMXtYoSnzTghpu() const;

constexpr bool& __cordl_internal_get_GoGoxNJMcFRAprZMXtYoSnzTghpu() ;

constexpr uint32_t const& __cordl_internal_get_ICUcMXDstmTeuTdGLlSZAoJjBxlj() const;

constexpr uint32_t& __cordl_internal_get_ICUcMXDstmTeuTdGLlSZAoJjBxlj() ;

constexpr ::System::Collections::Generic::Queue_1<::System::Action*>* const& __cordl_internal_get_MZFQWQozfOVUrDwfDacnseNbOHZp() const;

constexpr ::System::Collections::Generic::Queue_1<::System::Action*>*& __cordl_internal_get_MZFQWQozfOVUrDwfDacnseNbOHZp() ;

constexpr ::System::Collections::Generic::Queue_1<::System::Action*>* const& __cordl_internal_get_NSUGhlftdNfJtHGVelePVXVQktdN() const;

constexpr ::System::Collections::Generic::Queue_1<::System::Action*>*& __cordl_internal_get_NSUGhlftdNfJtHGVelePVXVQktdN() ;

constexpr int64_t const& __cordl_internal_get_ShyyrabyYkIhZjwZmoEsMGqOKKDG() const;

constexpr int64_t& __cordl_internal_get_ShyyrabyYkIhZjwZmoEsMGqOKKDG() ;

constexpr ::System::Threading::ManualResetEvent* const& __cordl_internal_get_SxTnEvVFvXVZBDcSrAwlYRkRihxS() const;

constexpr ::System::Threading::ManualResetEvent*& __cordl_internal_get_SxTnEvVFvXVZBDcSrAwlYRkRihxS() ;

constexpr ::Rewired::Utils::Classes::Utility::Stopwatch* const& __cordl_internal_get_TFwyfoliZRCzeOjqlUBOCiKhcUhP() const;

constexpr ::Rewired::Utils::Classes::Utility::Stopwatch*& __cordl_internal_get_TFwyfoliZRCzeOjqlUBOCiKhcUhP() ;

constexpr ::System::Action* const& __cordl_internal_get_TGEFcshiKsJPLUFtpezGArRNanKv() const;

constexpr ::System::Action*& __cordl_internal_get_TGEFcshiKsJPLUFtpezGArRNanKv() ;

constexpr ::System::Object* const& __cordl_internal_get_TtRVIPgeGhKgDDsqcXTgkupimnMD() const;

constexpr ::System::Object*& __cordl_internal_get_TtRVIPgeGhKgDDsqcXTgkupimnMD() ;

constexpr ::System::Action* const& __cordl_internal_get_ZBudPWbdzcaeGbntKpnkiaTIJBsPb() const;

constexpr ::System::Action*& __cordl_internal_get_ZBudPWbdzcaeGbntKpnkiaTIJBsPb() ;

constexpr int64_t const& __cordl_internal_get_ZQvBsLNiblwDkZcGhuXdalfqLgGF() const;

constexpr int64_t& __cordl_internal_get_ZQvBsLNiblwDkZcGhuXdalfqLgGF() ;

constexpr int32_t const& __cordl_internal_get_cjqQyZzSEVtGIREOwqEqCKMuCdzK() const;

constexpr int32_t& __cordl_internal_get_cjqQyZzSEVtGIREOwqEqCKMuCdzK() ;

constexpr ::System::Threading::ManualResetEvent* const& __cordl_internal_get_iVRzuojxBXpSvxFBKhCIowWAAyhR() const;

constexpr ::System::Threading::ManualResetEvent*& __cordl_internal_get_iVRzuojxBXpSvxFBKhCIowWAAyhR() ;

constexpr bool const& __cordl_internal_get_mvQbjHRONLGwLOmEgDiczUnPJagK() const;

constexpr bool& __cordl_internal_get_mvQbjHRONLGwLOmEgDiczUnPJagK() ;

constexpr int32_t const& __cordl_internal_get_qKYYkiDLDkuMgRGEZfoODtxZGNip() const;

constexpr int32_t& __cordl_internal_get_qKYYkiDLDkuMgRGEZfoODtxZGNip() ;

constexpr bool const& __cordl_internal_get_rvcbJSEheDJVvrYbMmdegoRBPEFM() const;

constexpr bool& __cordl_internal_get_rvcbJSEheDJVvrYbMmdegoRBPEFM() ;

constexpr ::System::Threading::AutoResetEvent* const& __cordl_internal_get_sQJrQeUbrmkBZilpkJJnKWVNpbhm() const;

constexpr ::System::Threading::AutoResetEvent*& __cordl_internal_get_sQJrQeUbrmkBZilpkJJnKWVNpbhm() ;

constexpr int32_t const& __cordl_internal_get_sypyOAsFGVBhDssAnVNPQjAGLczX() const;

constexpr int32_t& __cordl_internal_get_sypyOAsFGVBhDssAnVNPQjAGLczX() ;

constexpr bool const& __cordl_internal_get_thocaeBHambMaWKmwnilxWwwzWXc() const;

constexpr bool& __cordl_internal_get_thocaeBHambMaWKmwnilxWwwzWXc() ;

constexpr bool const& __cordl_internal_get_vUHvOOHhdzGGndZNOBGeBjtDesXS() const;

constexpr bool& __cordl_internal_get_vUHvOOHhdzGGndZNOBGeBjtDesXS() ;

constexpr bool const& __cordl_internal_get_xHYHuPcLcuIsUABxBMkejNujelHXA() const;

constexpr bool& __cordl_internal_get_xHYHuPcLcuIsUABxBMkejNujelHXA() ;

constexpr void __cordl_internal_set_FocOTLwYmLaqgFlbOXxBnrjhIbmA(::System::Threading::Thread*  value) ;

constexpr void __cordl_internal_set_GdBDayfHSXGwvXaejfJMKomHuXlV(::System::Action*  value) ;

constexpr void __cordl_internal_set_GoGoxNJMcFRAprZMXtYoSnzTghpu(bool  value) ;

constexpr void __cordl_internal_set_ICUcMXDstmTeuTdGLlSZAoJjBxlj(uint32_t  value) ;

constexpr void __cordl_internal_set_MZFQWQozfOVUrDwfDacnseNbOHZp(::System::Collections::Generic::Queue_1<::System::Action*>*  value) ;

constexpr void __cordl_internal_set_NSUGhlftdNfJtHGVelePVXVQktdN(::System::Collections::Generic::Queue_1<::System::Action*>*  value) ;

constexpr void __cordl_internal_set_ShyyrabyYkIhZjwZmoEsMGqOKKDG(int64_t  value) ;

constexpr void __cordl_internal_set_SxTnEvVFvXVZBDcSrAwlYRkRihxS(::System::Threading::ManualResetEvent*  value) ;

constexpr void __cordl_internal_set_TFwyfoliZRCzeOjqlUBOCiKhcUhP(::Rewired::Utils::Classes::Utility::Stopwatch*  value) ;

constexpr void __cordl_internal_set_TGEFcshiKsJPLUFtpezGArRNanKv(::System::Action*  value) ;

constexpr void __cordl_internal_set_TtRVIPgeGhKgDDsqcXTgkupimnMD(::System::Object*  value) ;

constexpr void __cordl_internal_set_ZBudPWbdzcaeGbntKpnkiaTIJBsPb(::System::Action*  value) ;

constexpr void __cordl_internal_set_ZQvBsLNiblwDkZcGhuXdalfqLgGF(int64_t  value) ;

constexpr void __cordl_internal_set_cjqQyZzSEVtGIREOwqEqCKMuCdzK(int32_t  value) ;

constexpr void __cordl_internal_set_iVRzuojxBXpSvxFBKhCIowWAAyhR(::System::Threading::ManualResetEvent*  value) ;

constexpr void __cordl_internal_set_mvQbjHRONLGwLOmEgDiczUnPJagK(bool  value) ;

constexpr void __cordl_internal_set_qKYYkiDLDkuMgRGEZfoODtxZGNip(int32_t  value) ;

constexpr void __cordl_internal_set_rvcbJSEheDJVvrYbMmdegoRBPEFM(bool  value) ;

constexpr void __cordl_internal_set_sQJrQeUbrmkBZilpkJJnKWVNpbhm(::System::Threading::AutoResetEvent*  value) ;

constexpr void __cordl_internal_set_sypyOAsFGVBhDssAnVNPQjAGLczX(int32_t  value) ;

constexpr void __cordl_internal_set_thocaeBHambMaWKmwnilxWwwzWXc(bool  value) ;

constexpr void __cordl_internal_set_vUHvOOHhdzGGndZNOBGeBjtDesXS(bool  value) ;

constexpr void __cordl_internal_set_xHYHuPcLcuIsUABxBMkejNujelHXA(bool  value) ;

/// @brief Method .ctor, addr 0x18193c990, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18193c9b0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x18193c800, size 0x190, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method add_ThreadPreStopEvent, addr 0x1803457e0, size 0x90, virtual false, abstract: false, final false
inline void add_ThreadPreStopEvent(::System::Action*  value) ;

/// @brief Method add_ThreadStartedEvent, addr 0x1803456c0, size 0x90, virtual false, abstract: false, final false
inline void add_ThreadStartedEvent(::System::Action*  value) ;

/// @brief Method add_ThreadUpdateEvent, addr 0x18193c9d0, size 0x90, virtual false, abstract: false, final false
inline void add_ThreadUpdateEvent(::System::Action*  value) ;

/// @brief Method apbLKCgoZvCXkcXOGMaqaeFWWAcy, addr 0x18193ca60, size 0x90, virtual false, abstract: false, final false
inline void apbLKCgoZvCXkcXOGMaqaeFWWAcy() ;

/// @brief Method dzjBhfzKHQecFDDvNahNjwtAOtIub, addr 0x18193caf0, size 0xb0, virtual false, abstract: false, final false
inline void dzjBhfzKHQecFDDvNahNjwtAOtIub() ;

/// @brief Method fDPZBOyDHESTZMphtGyhDstNnYFC, addr 0x180345db0, size 0x90, virtual false, abstract: false, final false
inline void fDPZBOyDHESTZMphtGyhDstNnYFC(::System::Action*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_fixedTimeStepFPS, addr 0x180511540, size 0x10, virtual false, abstract: false, final false
inline int32_t get_fixedTimeStepFPS() ;

/// @brief Method get_isRunning, addr 0x18049a520, size 0x10, virtual false, abstract: false, final false
inline bool get_isRunning() ;

/// @brief Method get_isStopped, addr 0x18193cba0, size 0x40, virtual false, abstract: false, final false
inline bool get_isStopped() ;

/// @brief Method get_tick, addr 0x18039fc60, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_tick() ;

/// @brief Method get_timeoutMS, addr 0x180497940, size 0x10, virtual false, abstract: false, final false
inline int32_t get_timeoutMS() ;

/// @brief Method get_useFixedTimeStep, addr 0x1802f8060, size 0x10, virtual false, abstract: false, final false
inline bool get_useFixedTimeStep() ;

/// @brief Method get_useHighPrecitionTimer, addr 0x18193cbe0, size 0x20, virtual false, abstract: false, final false
inline bool get_useHighPrecitionTimer() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method nxfaCpjcjrnukUuCnguNxOQQvvZCA, addr 0x1803457e0, size 0x90, virtual false, abstract: false, final false
inline void nxfaCpjcjrnukUuCnguNxOQQvvZCA(::System::Action*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method remove_ThreadPreStopEvent, addr 0x180345db0, size 0x90, virtual false, abstract: false, final false
inline void remove_ThreadPreStopEvent(::System::Action*  value) ;

/// @brief Method remove_ThreadStartedEvent, addr 0x180345c90, size 0x90, virtual false, abstract: false, final false
inline void remove_ThreadStartedEvent(::System::Action*  value) ;

/// @brief Method remove_ThreadUpdateEvent, addr 0x18193cc00, size 0x90, virtual false, abstract: false, final false
inline void remove_ThreadUpdateEvent(::System::Action*  value) ;

/// @brief Method set_fixedTimeStepFPS, addr 0x18193cc90, size 0x30, virtual false, abstract: false, final false
inline void set_fixedTimeStepFPS(int32_t  value) ;

/// @brief Method set_timeoutMS, addr 0x18193ccc0, size 0x30, virtual false, abstract: false, final false
inline void set_timeoutMS(int32_t  value) ;

/// @brief Method set_useHighPrecitionTimer, addr 0x18193ccf0, size 0x10, virtual false, abstract: false, final false
inline void set_useHighPrecitionTimer(bool  value) ;

/// @brief Method uRMOYRVhlMMgPxPgezfHEKwdujWC, addr 0x180345c90, size 0x90, virtual false, abstract: false, final false
inline void uRMOYRVhlMMgPxPgezfHEKwdujWC(::System::Action*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method xjoCUjxLsnlGELCkKoHpkCNRTkYB, addr 0x18193cd00, size 0x190, virtual false, abstract: false, final false
inline void xjoCUjxLsnlGELCkKoHpkCNRTkYB() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThreadHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThreadHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadHelper(ThreadHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadHelper(ThreadHelper const& ) = delete;

/// @brief Field BDYEejiBIbKfBfThvxMpZnNSOZMR offset 0xffffffff size 0x4
static constexpr uint32_t  BDYEejiBIbKfBfThvxMpZnNSOZMR{static_cast<uint32_t>(0x2eeu)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2976};

/// @brief Field TFwyfoliZRCzeOjqlUBOCiKhcUhP, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Utility::Stopwatch*  ___TFwyfoliZRCzeOjqlUBOCiKhcUhP;

/// @brief Field FocOTLwYmLaqgFlbOXxBnrjhIbmA, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Thread*  ___FocOTLwYmLaqgFlbOXxBnrjhIbmA;

/// @brief Field SxTnEvVFvXVZBDcSrAwlYRkRihxS, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::ManualResetEvent*  ___SxTnEvVFvXVZBDcSrAwlYRkRihxS;

/// @brief Field iVRzuojxBXpSvxFBKhCIowWAAyhR, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::ManualResetEvent*  ___iVRzuojxBXpSvxFBKhCIowWAAyhR;

/// @brief Field sQJrQeUbrmkBZilpkJJnKWVNpbhm, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::AutoResetEvent*  ___sQJrQeUbrmkBZilpkJJnKWVNpbhm;

/// @brief Field thocaeBHambMaWKmwnilxWwwzWXc, offset: 0x38, size: 0x1, def value: None
 bool  ___thocaeBHambMaWKmwnilxWwwzWXc;

/// @brief Field rvcbJSEheDJVvrYbMmdegoRBPEFM, offset: 0x39, size: 0x1, def value: None
 bool  ___rvcbJSEheDJVvrYbMmdegoRBPEFM;

/// @brief Field sypyOAsFGVBhDssAnVNPQjAGLczX, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___sypyOAsFGVBhDssAnVNPQjAGLczX;

/// @brief Field mvQbjHRONLGwLOmEgDiczUnPJagK, offset: 0x40, size: 0x1, def value: None
 bool  ___mvQbjHRONLGwLOmEgDiczUnPJagK;

/// @brief Field qKYYkiDLDkuMgRGEZfoODtxZGNip, offset: 0x44, size: 0x4, def value: None
 int32_t  ___qKYYkiDLDkuMgRGEZfoODtxZGNip;

/// @brief Field ZQvBsLNiblwDkZcGhuXdalfqLgGF, offset: 0x48, size: 0x8, def value: None
 int64_t  ___ZQvBsLNiblwDkZcGhuXdalfqLgGF;

/// @brief Field GoGoxNJMcFRAprZMXtYoSnzTghpu, offset: 0x50, size: 0x1, def value: None
 bool  ___GoGoxNJMcFRAprZMXtYoSnzTghpu;

/// @brief Field cjqQyZzSEVtGIREOwqEqCKMuCdzK, offset: 0x54, size: 0x4, def value: None
 int32_t  ___cjqQyZzSEVtGIREOwqEqCKMuCdzK;

/// @brief Field ShyyrabyYkIhZjwZmoEsMGqOKKDG, offset: 0x58, size: 0x8, def value: None
 int64_t  ___ShyyrabyYkIhZjwZmoEsMGqOKKDG;

/// @brief Field ICUcMXDstmTeuTdGLlSZAoJjBxlj, offset: 0x60, size: 0x4, def value: None
 uint32_t  ___ICUcMXDstmTeuTdGLlSZAoJjBxlj;

/// @brief Field TtRVIPgeGhKgDDsqcXTgkupimnMD, offset: 0x68, size: 0x8, def value: None
 ::System::Object*  ___TtRVIPgeGhKgDDsqcXTgkupimnMD;

/// @brief Field MZFQWQozfOVUrDwfDacnseNbOHZp, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::System::Action*>*  ___MZFQWQozfOVUrDwfDacnseNbOHZp;

/// @brief Field NSUGhlftdNfJtHGVelePVXVQktdN, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::System::Action*>*  ___NSUGhlftdNfJtHGVelePVXVQktdN;

/// @brief Field vUHvOOHhdzGGndZNOBGeBjtDesXS, offset: 0x80, size: 0x1, def value: None
 bool  ___vUHvOOHhdzGGndZNOBGeBjtDesXS;

/// @brief Field GdBDayfHSXGwvXaejfJMKomHuXlV, offset: 0x88, size: 0x8, def value: None
 ::System::Action*  ___GdBDayfHSXGwvXaejfJMKomHuXlV;

/// @brief Field TGEFcshiKsJPLUFtpezGArRNanKv, offset: 0x90, size: 0x8, def value: None
 ::System::Action*  ___TGEFcshiKsJPLUFtpezGArRNanKv;

/// @brief Field ZBudPWbdzcaeGbntKpnkiaTIJBsPb, offset: 0x98, size: 0x8, def value: None
 ::System::Action*  ___ZBudPWbdzcaeGbntKpnkiaTIJBsPb;

/// @brief Field xHYHuPcLcuIsUABxBMkejNujelHXA, offset: 0xa0, size: 0x1, def value: None
 bool  ___xHYHuPcLcuIsUABxBMkejNujelHXA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Utility::ThreadHelper, ___TFwyfoliZRCzeOjqlUBOCiKhcUhP) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::ThreadHelper, ___FocOTLwYmLaqgFlbOXxBnrjhIbmA) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::ThreadHelper, ___SxTnEvVFvXVZBDcSrAwlYRkRihxS) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::ThreadHelper, ___iVRzuojxBXpSvxFBKhCIowWAAyhR) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::ThreadHelper, ___sQJrQeUbrmkBZilpkJJnKWVNpbhm) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::ThreadHelper, ___thocaeBHambMaWKmwnilxWwwzWXc) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::ThreadHelper, ___rvcbJSEheDJVvrYbMmdegoRBPEFM) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::ThreadHelper, ___sypyOAsFGVBhDssAnVNPQjAGLczX) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::ThreadHelper, ___mvQbjHRONLGwLOmEgDiczUnPJagK) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::ThreadHelper, ___qKYYkiDLDkuMgRGEZfoODtxZGNip) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::ThreadHelper, ___ZQvBsLNiblwDkZcGhuXdalfqLgGF) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::ThreadHelper, ___GoGoxNJMcFRAprZMXtYoSnzTghpu) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::ThreadHelper, ___cjqQyZzSEVtGIREOwqEqCKMuCdzK) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::ThreadHelper, ___ShyyrabyYkIhZjwZmoEsMGqOKKDG) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::ThreadHelper, ___ICUcMXDstmTeuTdGLlSZAoJjBxlj) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::ThreadHelper, ___TtRVIPgeGhKgDDsqcXTgkupimnMD) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::ThreadHelper, ___MZFQWQozfOVUrDwfDacnseNbOHZp) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::ThreadHelper, ___NSUGhlftdNfJtHGVelePVXVQktdN) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::ThreadHelper, ___vUHvOOHhdzGGndZNOBGeBjtDesXS) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::ThreadHelper, ___GdBDayfHSXGwvXaejfJMKomHuXlV) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::ThreadHelper, ___TGEFcshiKsJPLUFtpezGArRNanKv) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::ThreadHelper, ___ZBudPWbdzcaeGbntKpnkiaTIJBsPb) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::ThreadHelper, ___xHYHuPcLcuIsUABxBMkejNujelHXA) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Utility::ThreadHelper) == 0xa8, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Utility

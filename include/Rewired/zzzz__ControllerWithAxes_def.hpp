#pragma once
// IWYU pragma private; include "Rewired/ControllerWithAxes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerPollingInfo_def.hpp"
#include "Rewired/zzzz__ControllerWithMap_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerWithAxes)
namespace Rewired::Utils::Classes::Utility {
class TimerAbs;
}
namespace Rewired {
class ActionElementMap;
}
namespace Rewired {
class CalibrationMap;
}
namespace Rewired {
class ControllerDataUpdater;
}
namespace Rewired {
class ControllerElementIdentifier;
}
namespace Rewired {
class ControllerMap;
}
namespace Rewired {
struct ControllerPollingInfo;
}
namespace Rewired {
struct ControllerType;
}
namespace Rewired {
class ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi;
}
namespace Rewired {
class ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb;
}
namespace Rewired {
class ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc;
}
namespace Rewired {
class Controller_Axis2D;
}
namespace Rewired {
class Controller_Axis;
}
namespace Rewired {
class Controller_Element;
}
namespace Rewired {
class Controller_Extension;
}
namespace Rewired {
class HardwareControllerMap_Game;
}
namespace Rewired {
struct InputSource;
}
namespace Rewired {
struct Pole;
}
namespace Rewired {
struct UpdateLoopType;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
struct Guid;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired {
class ControllerWithAxes;
}
namespace Rewired {
class ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi;
}
namespace Rewired {
class ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb;
}
namespace Rewired {
class ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc;
}
// Write type traits
MARK_REF_T(::Rewired::ControllerWithAxes*);
MARK_REF_T(::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi*);
MARK_REF_T(::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb*);
MARK_REF_T(::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerWithAxes*, "Rewired", "ControllerWithAxes");
DEFINE_IL2CPP_CLASS(::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi*, "Rewired", "ControllerWithAxes/HpShqdabnqxsMltZjlqdhrOKhZJi");
DEFINE_IL2CPP_CLASS(::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb*, "Rewired", "ControllerWithAxes/LVkwobmJttVRdpITBEmVduZxJfNDb");
DEFINE_IL2CPP_CLASS(::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc*, "Rewired", "ControllerWithAxes/buWgpkDLbYMNAOrdWoufsKeRtHEc");
// Dependencies Rewired.ControllerPollingInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerWithAxes/buWgpkDLbYMNAOrdWoufsKeRtHEc
class CORDL_TYPE ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc : public ::System::Object {
public:
// Declarations
/// @brief Field QSiThYtufywVmKTFuzODpuGqOCuD, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_QSiThYtufywVmKTFuzODpuGqOCuD, put=__cordl_internal_set_QSiThYtufywVmKTFuzODpuGqOCuD)) int32_t  QSiThYtufywVmKTFuzODpuGqOCuD;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current)) ::Rewired::ControllerPollingInfo  System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field TsJaUsBDqtzWlxYGTsqBPnjvcngL, offset 0x18, size 0x38 
 __declspec(property(get=__cordl_internal_get_TsJaUsBDqtzWlxYGTsqBPnjvcngL, put=__cordl_internal_set_TsJaUsBDqtzWlxYGTsqBPnjvcngL)) ::Rewired::ControllerPollingInfo  TsJaUsBDqtzWlxYGTsqBPnjvcngL;

/// @brief Field XTpERMDeQyaUbTxGxyDGHJZcFKZKA, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_XTpERMDeQyaUbTxGxyDGHJZcFKZKA, put=__cordl_internal_set_XTpERMDeQyaUbTxGxyDGHJZcFKZKA)) ::Rewired::ControllerWithAxes*  XTpERMDeQyaUbTxGxyDGHJZcFKZKA;

/// @brief Field qkucHfEZYwjZvgSpVephLVxphFPr, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_qkucHfEZYwjZvgSpVephLVxphFPr, put=__cordl_internal_set_qkucHfEZYwjZvgSpVephLVxphFPr)) int32_t  qkucHfEZYwjZvgSpVephLVxphFPr;

/// @brief Field xfeyGLiHobwpUUNcHfnWWMMKvlZq, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_xfeyGLiHobwpUUNcHfnWWMMKvlZq, put=__cordl_internal_set_xfeyGLiHobwpUUNcHfnWWMMKvlZq)) int32_t  xfeyGLiHobwpUUNcHfnWWMMKvlZq;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18185e300, size 0x240, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator, addr 0x18185e540, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current, addr 0x181859c00, size 0x30, virtual true, abstract: false, final true
inline ::Rewired::ControllerPollingInfo System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x18185e540, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x181859c30, size 0x40, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181049e50, size 0x6fe0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get_QSiThYtufywVmKTFuzODpuGqOCuD() const;

constexpr int32_t& __cordl_internal_get_QSiThYtufywVmKTFuzODpuGqOCuD() ;

constexpr ::Rewired::ControllerPollingInfo const& __cordl_internal_get_TsJaUsBDqtzWlxYGTsqBPnjvcngL() const;

constexpr ::Rewired::ControllerPollingInfo& __cordl_internal_get_TsJaUsBDqtzWlxYGTsqBPnjvcngL() ;

constexpr ::Rewired::ControllerWithAxes* const& __cordl_internal_get_XTpERMDeQyaUbTxGxyDGHJZcFKZKA() const;

constexpr ::Rewired::ControllerWithAxes*& __cordl_internal_get_XTpERMDeQyaUbTxGxyDGHJZcFKZKA() ;

constexpr int32_t const& __cordl_internal_get_qkucHfEZYwjZvgSpVephLVxphFPr() const;

constexpr int32_t& __cordl_internal_get_qkucHfEZYwjZvgSpVephLVxphFPr() ;

constexpr int32_t const& __cordl_internal_get_xfeyGLiHobwpUUNcHfnWWMMKvlZq() const;

constexpr int32_t& __cordl_internal_get_xfeyGLiHobwpUUNcHfnWWMMKvlZq() ;

constexpr void __cordl_internal_set_QSiThYtufywVmKTFuzODpuGqOCuD(int32_t  value) ;

constexpr void __cordl_internal_set_TsJaUsBDqtzWlxYGTsqBPnjvcngL(::Rewired::ControllerPollingInfo  value) ;

constexpr void __cordl_internal_set_XTpERMDeQyaUbTxGxyDGHJZcFKZKA(::Rewired::ControllerWithAxes*  value) ;

constexpr void __cordl_internal_set_qkucHfEZYwjZvgSpVephLVxphFPr(int32_t  value) ;

constexpr void __cordl_internal_set_xfeyGLiHobwpUUNcHfnWWMMKvlZq(int32_t  value) ;

/// @brief Method .ctor, addr 0x181859da0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc(ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc(ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1833};

/// @brief Field xfeyGLiHobwpUUNcHfnWWMMKvlZq, offset: 0x10, size: 0x4, def value: None
 int32_t  ___xfeyGLiHobwpUUNcHfnWWMMKvlZq;

/// @brief Field TsJaUsBDqtzWlxYGTsqBPnjvcngL, offset: 0x18, size: 0x38, def value: None
 ::Rewired::ControllerPollingInfo  ___TsJaUsBDqtzWlxYGTsqBPnjvcngL;

/// @brief Field qkucHfEZYwjZvgSpVephLVxphFPr, offset: 0x50, size: 0x4, def value: None
 int32_t  ___qkucHfEZYwjZvgSpVephLVxphFPr;

/// @brief Field XTpERMDeQyaUbTxGxyDGHJZcFKZKA, offset: 0x58, size: 0x8, def value: None
 ::Rewired::ControllerWithAxes*  ___XTpERMDeQyaUbTxGxyDGHJZcFKZKA;

/// @brief Field QSiThYtufywVmKTFuzODpuGqOCuD, offset: 0x60, size: 0x4, def value: None
 int32_t  ___QSiThYtufywVmKTFuzODpuGqOCuD;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc, ___xfeyGLiHobwpUUNcHfnWWMMKvlZq) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc, ___TsJaUsBDqtzWlxYGTsqBPnjvcngL) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc, ___qkucHfEZYwjZvgSpVephLVxphFPr) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc, ___XTpERMDeQyaUbTxGxyDGHJZcFKZKA) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc, ___QSiThYtufywVmKTFuzODpuGqOCuD) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc) == 0x68, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ControllerPollingInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerWithAxes/LVkwobmJttVRdpITBEmVduZxJfNDb
class CORDL_TYPE ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb : public ::System::Object {
public:
// Declarations
/// @brief Field AwdOYNKsyLqOZtvHcDuyIdksAZhFA, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_AwdOYNKsyLqOZtvHcDuyIdksAZhFA, put=__cordl_internal_set_AwdOYNKsyLqOZtvHcDuyIdksAZhFA)) ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  AwdOYNKsyLqOZtvHcDuyIdksAZhFA;

/// @brief Field HnXiHujoFdKHoBDHEMEXoRCuVZJf, offset 0x18, size 0x38 
 __declspec(property(get=__cordl_internal_get_HnXiHujoFdKHoBDHEMEXoRCuVZJf, put=__cordl_internal_set_HnXiHujoFdKHoBDHEMEXoRCuVZJf)) ::Rewired::ControllerPollingInfo  HnXiHujoFdKHoBDHEMEXoRCuVZJf;

/// @brief Field PDbRowJBSwjdiOlQIDEWHTHJbvijA, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_PDbRowJBSwjdiOlQIDEWHTHJbvijA, put=__cordl_internal_set_PDbRowJBSwjdiOlQIDEWHTHJbvijA)) int32_t  PDbRowJBSwjdiOlQIDEWHTHJbvijA;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current)) ::Rewired::ControllerPollingInfo  System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field lLiVDYzNFMTmTsLIGrVEwjWIzORK, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_lLiVDYzNFMTmTsLIGrVEwjWIzORK, put=__cordl_internal_set_lLiVDYzNFMTmTsLIGrVEwjWIzORK)) ::Rewired::ControllerWithAxes*  lLiVDYzNFMTmTsLIGrVEwjWIzORK;

/// @brief Field tTCiFbJkQByAeBAqudEjFUuEnGvI, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_tTCiFbJkQByAeBAqudEjFUuEnGvI, put=__cordl_internal_set_tTCiFbJkQByAeBAqudEjFUuEnGvI)) int32_t  tTCiFbJkQByAeBAqudEjFUuEnGvI;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18185d400, size 0x400, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method QzSSrMTEivsVuCoRNDbKiPFGwNKA, addr 0x180d75a40, size 0x15100, virtual false, abstract: false, final false
inline void QzSSrMTEivsVuCoRNDbKiPFGwNKA() ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator, addr 0x18185d800, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current, addr 0x181859c00, size 0x30, virtual true, abstract: false, final true
inline ::Rewired::ControllerPollingInfo System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x18185d800, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x181859c30, size 0x40, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181859c70, size 0x130, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* const& __cordl_internal_get_AwdOYNKsyLqOZtvHcDuyIdksAZhFA() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*& __cordl_internal_get_AwdOYNKsyLqOZtvHcDuyIdksAZhFA() ;

constexpr ::Rewired::ControllerPollingInfo const& __cordl_internal_get_HnXiHujoFdKHoBDHEMEXoRCuVZJf() const;

constexpr ::Rewired::ControllerPollingInfo& __cordl_internal_get_HnXiHujoFdKHoBDHEMEXoRCuVZJf() ;

constexpr int32_t const& __cordl_internal_get_PDbRowJBSwjdiOlQIDEWHTHJbvijA() const;

constexpr int32_t& __cordl_internal_get_PDbRowJBSwjdiOlQIDEWHTHJbvijA() ;

constexpr ::Rewired::ControllerWithAxes* const& __cordl_internal_get_lLiVDYzNFMTmTsLIGrVEwjWIzORK() const;

constexpr ::Rewired::ControllerWithAxes*& __cordl_internal_get_lLiVDYzNFMTmTsLIGrVEwjWIzORK() ;

constexpr int32_t const& __cordl_internal_get_tTCiFbJkQByAeBAqudEjFUuEnGvI() const;

constexpr int32_t& __cordl_internal_get_tTCiFbJkQByAeBAqudEjFUuEnGvI() ;

constexpr void __cordl_internal_set_AwdOYNKsyLqOZtvHcDuyIdksAZhFA(::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  value) ;

constexpr void __cordl_internal_set_HnXiHujoFdKHoBDHEMEXoRCuVZJf(::Rewired::ControllerPollingInfo  value) ;

constexpr void __cordl_internal_set_PDbRowJBSwjdiOlQIDEWHTHJbvijA(int32_t  value) ;

constexpr void __cordl_internal_set_lLiVDYzNFMTmTsLIGrVEwjWIzORK(::Rewired::ControllerWithAxes*  value) ;

constexpr void __cordl_internal_set_tTCiFbJkQByAeBAqudEjFUuEnGvI(int32_t  value) ;

/// @brief Method .ctor, addr 0x181859da0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method bbxuOnxHytmwgBFLSCEMazZfKdgP, addr 0x180d75a40, size 0x15100, virtual false, abstract: false, final false
inline void bbxuOnxHytmwgBFLSCEMazZfKdgP() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb(ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb(ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1834};

/// @brief Field PDbRowJBSwjdiOlQIDEWHTHJbvijA, offset: 0x10, size: 0x4, def value: None
 int32_t  ___PDbRowJBSwjdiOlQIDEWHTHJbvijA;

/// @brief Field HnXiHujoFdKHoBDHEMEXoRCuVZJf, offset: 0x18, size: 0x38, def value: None
 ::Rewired::ControllerPollingInfo  ___HnXiHujoFdKHoBDHEMEXoRCuVZJf;

/// @brief Field tTCiFbJkQByAeBAqudEjFUuEnGvI, offset: 0x50, size: 0x4, def value: None
 int32_t  ___tTCiFbJkQByAeBAqudEjFUuEnGvI;

/// @brief Field lLiVDYzNFMTmTsLIGrVEwjWIzORK, offset: 0x58, size: 0x8, def value: None
 ::Rewired::ControllerWithAxes*  ___lLiVDYzNFMTmTsLIGrVEwjWIzORK;

/// @brief Field AwdOYNKsyLqOZtvHcDuyIdksAZhFA, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  ___AwdOYNKsyLqOZtvHcDuyIdksAZhFA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb, ___PDbRowJBSwjdiOlQIDEWHTHJbvijA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb, ___HnXiHujoFdKHoBDHEMEXoRCuVZJf) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb, ___tTCiFbJkQByAeBAqudEjFUuEnGvI) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb, ___lLiVDYzNFMTmTsLIGrVEwjWIzORK) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb, ___AwdOYNKsyLqOZtvHcDuyIdksAZhFA) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb) == 0x68, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ControllerPollingInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerWithAxes/HpShqdabnqxsMltZjlqdhrOKhZJi
class CORDL_TYPE ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi : public ::System::Object {
public:
// Declarations
/// @brief Field DtfEBMJiaKwVVXTswDZvEQaXXLVP, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_DtfEBMJiaKwVVXTswDZvEQaXXLVP, put=__cordl_internal_set_DtfEBMJiaKwVVXTswDZvEQaXXLVP)) int32_t  DtfEBMJiaKwVVXTswDZvEQaXXLVP;

/// @brief Field HCxhEJolPugSPDcfcwNYBHzXpQXxA, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_HCxhEJolPugSPDcfcwNYBHzXpQXxA, put=__cordl_internal_set_HCxhEJolPugSPDcfcwNYBHzXpQXxA)) ::Rewired::ControllerWithAxes*  HCxhEJolPugSPDcfcwNYBHzXpQXxA;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current)) ::Rewired::ControllerPollingInfo  System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field WRJzIVfQUPsJsLEfAaSnisstjlszA, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_WRJzIVfQUPsJsLEfAaSnisstjlszA, put=__cordl_internal_set_WRJzIVfQUPsJsLEfAaSnisstjlszA)) ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  WRJzIVfQUPsJsLEfAaSnisstjlszA;

/// @brief Field ozJIvwNYXgrvGtzxvFzyBUDDqdXB, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_ozJIvwNYXgrvGtzxvFzyBUDDqdXB, put=__cordl_internal_set_ozJIvwNYXgrvGtzxvFzyBUDDqdXB)) int32_t  ozJIvwNYXgrvGtzxvFzyBUDDqdXB;

/// @brief Field ykqGqCFOctIefJDzgBIoiuUAQTNZb, offset 0x18, size 0x38 
 __declspec(property(get=__cordl_internal_get_ykqGqCFOctIefJDzgBIoiuUAQTNZb, put=__cordl_internal_set_ykqGqCFOctIefJDzgBIoiuUAQTNZb)) ::Rewired::ControllerPollingInfo  ykqGqCFOctIefJDzgBIoiuUAQTNZb;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181859780, size 0x400, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator, addr 0x181859b80, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current, addr 0x181859c00, size 0x30, virtual true, abstract: false, final true
inline ::Rewired::ControllerPollingInfo System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x181859b80, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x181859c30, size 0x40, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181859c70, size 0x130, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get_DtfEBMJiaKwVVXTswDZvEQaXXLVP() const;

constexpr int32_t& __cordl_internal_get_DtfEBMJiaKwVVXTswDZvEQaXXLVP() ;

constexpr ::Rewired::ControllerWithAxes* const& __cordl_internal_get_HCxhEJolPugSPDcfcwNYBHzXpQXxA() const;

constexpr ::Rewired::ControllerWithAxes*& __cordl_internal_get_HCxhEJolPugSPDcfcwNYBHzXpQXxA() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* const& __cordl_internal_get_WRJzIVfQUPsJsLEfAaSnisstjlszA() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*& __cordl_internal_get_WRJzIVfQUPsJsLEfAaSnisstjlszA() ;

constexpr int32_t const& __cordl_internal_get_ozJIvwNYXgrvGtzxvFzyBUDDqdXB() const;

constexpr int32_t& __cordl_internal_get_ozJIvwNYXgrvGtzxvFzyBUDDqdXB() ;

constexpr ::Rewired::ControllerPollingInfo const& __cordl_internal_get_ykqGqCFOctIefJDzgBIoiuUAQTNZb() const;

constexpr ::Rewired::ControllerPollingInfo& __cordl_internal_get_ykqGqCFOctIefJDzgBIoiuUAQTNZb() ;

constexpr void __cordl_internal_set_DtfEBMJiaKwVVXTswDZvEQaXXLVP(int32_t  value) ;

constexpr void __cordl_internal_set_HCxhEJolPugSPDcfcwNYBHzXpQXxA(::Rewired::ControllerWithAxes*  value) ;

constexpr void __cordl_internal_set_WRJzIVfQUPsJsLEfAaSnisstjlszA(::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  value) ;

constexpr void __cordl_internal_set_ozJIvwNYXgrvGtzxvFzyBUDDqdXB(int32_t  value) ;

constexpr void __cordl_internal_set_ykqGqCFOctIefJDzgBIoiuUAQTNZb(::Rewired::ControllerPollingInfo  value) ;

/// @brief Method .ctor, addr 0x181859da0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method nKZaSMJZMdIaeBpwgCgnNIStnBPT, addr 0x180d75a40, size 0x15100, virtual false, abstract: false, final false
inline void nKZaSMJZMdIaeBpwgCgnNIStnBPT() ;

/// @brief Method ytewkvQWemidifOvPEkDGdOYvLwkA, addr 0x180d75a40, size 0x15100, virtual false, abstract: false, final false
inline void ytewkvQWemidifOvPEkDGdOYvLwkA() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi(ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi(ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1835};

/// @brief Field DtfEBMJiaKwVVXTswDZvEQaXXLVP, offset: 0x10, size: 0x4, def value: None
 int32_t  ___DtfEBMJiaKwVVXTswDZvEQaXXLVP;

/// @brief Field ykqGqCFOctIefJDzgBIoiuUAQTNZb, offset: 0x18, size: 0x38, def value: None
 ::Rewired::ControllerPollingInfo  ___ykqGqCFOctIefJDzgBIoiuUAQTNZb;

/// @brief Field ozJIvwNYXgrvGtzxvFzyBUDDqdXB, offset: 0x50, size: 0x4, def value: None
 int32_t  ___ozJIvwNYXgrvGtzxvFzyBUDDqdXB;

/// @brief Field HCxhEJolPugSPDcfcwNYBHzXpQXxA, offset: 0x58, size: 0x8, def value: None
 ::Rewired::ControllerWithAxes*  ___HCxhEJolPugSPDcfcwNYBHzXpQXxA;

/// @brief Field WRJzIVfQUPsJsLEfAaSnisstjlszA, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  ___WRJzIVfQUPsJsLEfAaSnisstjlszA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi, ___DtfEBMJiaKwVVXTswDZvEQaXXLVP) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi, ___ykqGqCFOctIefJDzgBIoiuUAQTNZb) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi, ___ozJIvwNYXgrvGtzxvFzyBUDDqdXB) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi, ___HCxhEJolPugSPDcfcwNYBHzXpQXxA) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi, ___WRJzIVfQUPsJsLEfAaSnisstjlszA) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi) == 0x68, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.Controller::Axis, Rewired.Controller::Axis2D, Rewired.ControllerWithMap
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerWithAxes
class CORDL_TYPE ControllerWithAxes : public ::Rewired::ControllerWithMap {
public:
// Declarations
using HpShqdabnqxsMltZjlqdhrOKhZJi = ::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi;

using LVkwobmJttVRdpITBEmVduZxJfNDb = ::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb;

using buWgpkDLbYMNAOrdWoufsKeRtHEc = ::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc;

 __declspec(property(get=get_Axes)) ::System::Collections::Generic::IList_1<::Rewired::Controller_Axis*>*  Axes;

 __declspec(property(get=get_Axes2D)) ::System::Collections::Generic::IList_1<::Rewired::Controller_Axis2D*>*  Axes2D;

 __declspec(property(get=get_AxisElementIdentifiers)) ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*  AxisElementIdentifiers;

/// @brief Field LagBYJAuZrZYFLeEgYyZOVijFGznA, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_LagBYJAuZrZYFLeEgYyZOVijFGznA, put=__cordl_internal_set_LagBYJAuZrZYFLeEgYyZOVijFGznA)) ::ArrayW<float_t>  LagBYJAuZrZYFLeEgYyZOVijFGznA;

/// @brief Field MGLwixafXyjtIdiNVgsRkmqwBcZjA, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_MGLwixafXyjtIdiNVgsRkmqwBcZjA, put=__cordl_internal_set_MGLwixafXyjtIdiNVgsRkmqwBcZjA)) ::Rewired::Utils::Classes::Utility::TimerAbs*  MGLwixafXyjtIdiNVgsRkmqwBcZjA;

/// @brief Field QdKneLZvJiEORghcJACAGypyxegfA, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get_QdKneLZvJiEORghcJACAGypyxegfA, put=__cordl_internal_set_QdKneLZvJiEORghcJACAGypyxegfA)) uint32_t  QdKneLZvJiEORghcJACAGypyxegfA;

/// @brief Field UPaNQflJNemFOMxgxZDpRhmQdPvP, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_UPaNQflJNemFOMxgxZDpRhmQdPvP, put=__cordl_internal_set_UPaNQflJNemFOMxgxZDpRhmQdPvP)) ::System::Func_2<int32_t,int32_t>*  UPaNQflJNemFOMxgxZDpRhmQdPvP;

/// @brief Field _axis2DCount, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get__axis2DCount, put=__cordl_internal_set__axis2DCount)) int32_t  _axis2DCount;

/// @brief Field _axisCount, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get__axisCount, put=__cordl_internal_set__axisCount)) int32_t  _axisCount;

/// @brief Field _calibrationMap, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get__calibrationMap, put=__cordl_internal_set__calibrationMap)) ::Rewired::CalibrationMap*  _calibrationMap;

/// @brief Field axes, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_axes, put=__cordl_internal_set_axes)) ::ArrayW<::Rewired::Controller_Axis*>  axes;

/// @brief Field axes2D, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_axes2D, put=__cordl_internal_set_axes2D)) ::ArrayW<::Rewired::Controller_Axis2D*>  axes2D;

/// @brief Field axes2D_readOnly, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_axes2D_readOnly, put=__cordl_internal_set_axes2D_readOnly)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Axis2D*>*  axes2D_readOnly;

/// @brief Field axes_readOnly, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_axes_readOnly, put=__cordl_internal_set_axes_readOnly)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Axis*>*  axes_readOnly;

 __declspec(property(get=get_axis2DCount)) int32_t  axis2DCount;

 __declspec(property(get=get_axisCount)) int32_t  axisCount;

 __declspec(property(get=get_calibrationMap)) ::Rewired::CalibrationMap*  calibrationMap;

/// @brief Field clFhQhCVoNatYBnDaMPOYGudtfrv, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_clFhQhCVoNatYBnDaMPOYGudtfrv, put=__cordl_internal_set_clFhQhCVoNatYBnDaMPOYGudtfrv)) ::ArrayW<float_t>  clFhQhCVoNatYBnDaMPOYGudtfrv;

/// @brief Method GetAxis, addr 0x18184f470, size 0xa0, virtual false, abstract: false, final false
inline float_t GetAxis(int32_t  index) ;

/// @brief Method GetAxis2D, addr 0x18184e550, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetAxis2D(int32_t  index) ;

/// @brief Method GetAxis2DPrev, addr 0x18184e090, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetAxis2DPrev(int32_t  index) ;

/// @brief Method GetAxis2DRaw, addr 0x18184e350, size 0x200, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetAxis2DRaw(int32_t  index) ;

/// @brief Method GetAxis2DRawPrev, addr 0x18184e150, size 0x200, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetAxis2DRawPrev(int32_t  index) ;

/// @brief Method GetAxisById, addr 0x18184e610, size 0xb0, virtual false, abstract: false, final false
inline float_t GetAxisById(int32_t  elementIdentifierId) ;

/// @brief Method GetAxisIndexById, addr 0x18184e6c0, size 0x90, virtual false, abstract: false, final false
inline int32_t GetAxisIndexById(int32_t  elementIdentifierId) ;

/// @brief Method GetAxisLastTimeActive, addr 0x18184e800, size 0xa0, virtual false, abstract: false, final false
inline double_t GetAxisLastTimeActive(int32_t  index) ;

/// @brief Method GetAxisLastTimeActiveById, addr 0x18184e750, size 0xb0, virtual false, abstract: false, final false
inline double_t GetAxisLastTimeActiveById(int32_t  elementIdentifierId) ;

/// @brief Method GetAxisLastTimeInactive, addr 0x18184e950, size 0xa0, virtual false, abstract: false, final false
inline double_t GetAxisLastTimeInactive(int32_t  index) ;

/// @brief Method GetAxisLastTimeInactiveById, addr 0x18184e8a0, size 0xb0, virtual false, abstract: false, final false
inline double_t GetAxisLastTimeInactiveById(int32_t  elementIdentifierId) ;

/// @brief Method GetAxisPrev, addr 0x18184eaa0, size 0xa0, virtual false, abstract: false, final false
inline float_t GetAxisPrev(int32_t  index) ;

/// @brief Method GetAxisPrevById, addr 0x18184e9f0, size 0xb0, virtual false, abstract: false, final false
inline float_t GetAxisPrevById(int32_t  elementIdentifierId) ;

/// @brief Method GetAxisRaw, addr 0x18184f280, size 0xa0, virtual false, abstract: false, final false
inline float_t GetAxisRaw(int32_t  index) ;

/// @brief Method GetAxisRawById, addr 0x18184eb40, size 0xb0, virtual false, abstract: false, final false
inline float_t GetAxisRawById(int32_t  elementIdentifierId) ;

/// @brief Method GetAxisRawLastTimeActive, addr 0x18184eca0, size 0xa0, virtual false, abstract: false, final false
inline double_t GetAxisRawLastTimeActive(int32_t  index) ;

/// @brief Method GetAxisRawLastTimeActiveById, addr 0x18184ebf0, size 0xb0, virtual false, abstract: false, final false
inline double_t GetAxisRawLastTimeActiveById(int32_t  elementIdentifierId) ;

/// @brief Method GetAxisRawLastTimeInactive, addr 0x18184edf0, size 0xa0, virtual false, abstract: false, final false
inline double_t GetAxisRawLastTimeInactive(int32_t  index) ;

/// @brief Method GetAxisRawLastTimeInactiveById, addr 0x18184ed40, size 0xb0, virtual false, abstract: false, final false
inline double_t GetAxisRawLastTimeInactiveById(int32_t  elementIdentifierId) ;

/// @brief Method GetAxisRawPrev, addr 0x18184ef40, size 0xa0, virtual false, abstract: false, final false
inline float_t GetAxisRawPrev(int32_t  index) ;

/// @brief Method GetAxisRawPrevById, addr 0x18184ee90, size 0xb0, virtual false, abstract: false, final false
inline float_t GetAxisRawPrevById(int32_t  elementIdentifierId) ;

/// @brief Method GetAxisRawTimeActive, addr 0x18184f090, size 0xa0, virtual false, abstract: false, final false
inline double_t GetAxisRawTimeActive(int32_t  index) ;

/// @brief Method GetAxisRawTimeActiveById, addr 0x18184efe0, size 0xb0, virtual false, abstract: false, final false
inline double_t GetAxisRawTimeActiveById(int32_t  elementIdentifierId) ;

/// @brief Method GetAxisRawTimeInactive, addr 0x18184f1e0, size 0xa0, virtual false, abstract: false, final false
inline double_t GetAxisRawTimeInactive(int32_t  index) ;

/// @brief Method GetAxisRawTimeInactiveById, addr 0x18184f130, size 0xb0, virtual false, abstract: false, final false
inline double_t GetAxisRawTimeInactiveById(int32_t  elementIdentifierId) ;

/// @brief Method GetAxisTimeActive, addr 0x18184f090, size 0xa0, virtual false, abstract: false, final false
inline double_t GetAxisTimeActive(int32_t  index) ;

/// @brief Method GetAxisTimeActiveById, addr 0x18184efe0, size 0xb0, virtual false, abstract: false, final false
inline double_t GetAxisTimeActiveById(int32_t  elementIdentifierId) ;

/// @brief Method GetAxisTimeInactive, addr 0x18184f3d0, size 0xa0, virtual false, abstract: false, final false
inline double_t GetAxisTimeInactive(int32_t  index) ;

/// @brief Method GetAxisTimeInactiveById, addr 0x18184f320, size 0xb0, virtual false, abstract: false, final false
inline double_t GetAxisTimeInactiveById(int32_t  elementIdentifierId) ;

/// @brief Method GetElementById, addr 0x18184f510, size 0x120, virtual true, abstract: false, final false
inline ::Rewired::Controller_Element* GetElementById(int32_t  elementIdentifierId) ;

/// @brief Method GetLastTimeActive, addr 0x18184f7b0, size 0x70, virtual true, abstract: false, final false
inline double_t GetLastTimeActive() ;

/// @brief Method GetLastTimeActive, addr 0x18184f630, size 0x180, virtual true, abstract: false, final false
inline double_t GetLastTimeActive(bool  useRawValues) ;

/// @brief Method GetLastTimeAnyAxisActive, addr 0x18184f930, size 0x10, virtual false, abstract: false, final false
inline double_t GetLastTimeAnyAxisActive() ;

/// @brief Method GetLastTimeAnyAxisActive, addr 0x18184f820, size 0x110, virtual false, abstract: false, final false
inline double_t GetLastTimeAnyAxisActive(bool  useRawValues) ;

/// @brief Method GetLastTimeAnyAxisChanged, addr 0x18184f940, size 0x10, virtual false, abstract: false, final false
inline double_t GetLastTimeAnyAxisChanged() ;

/// @brief Method GetLastTimeAnyAxisChanged, addr 0x18184f950, size 0x110, virtual false, abstract: false, final false
inline double_t GetLastTimeAnyAxisChanged(bool  useRawValues) ;

/// @brief Method GetLastTimeAnyElementChanged, addr 0x18184fb00, size 0x20, virtual true, abstract: false, final false
inline double_t GetLastTimeAnyElementChanged() ;

/// @brief Method GetLastTimeAnyElementChanged, addr 0x18184fa60, size 0xa0, virtual true, abstract: false, final false
inline double_t GetLastTimeAnyElementChanged(bool  useRawValues) ;

/// @brief Method GnzUCTYBqZxmEqupbWyLzQUbIcyd, addr 0x18184fb20, size 0x510, virtual true, abstract: false, final false
inline void GnzUCTYBqZxmEqupbWyLzQUbIcyd(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ImportCalibrationMapFromJsonString, addr 0x181850030, size 0xc0, virtual false, abstract: false, final false
inline bool ImportCalibrationMapFromJsonString(::StringW  jsonString) ;

/// @brief Method ImportCalibrationMapFromXmlString, addr 0x1818500f0, size 0xc0, virtual false, abstract: false, final false
inline bool ImportCalibrationMapFromXmlString(::StringW  xmlString) ;

/// @brief Method IsPolledAxisActive, addr 0x1818501b0, size 0x410, virtual true, abstract: false, final false
inline bool IsPolledAxisActive(int32_t  index, ::by_ref<::Rewired::Pole>  pole, ::by_ref<int32_t>  elementIdentifierId) ;

/// @brief Method LuMAHEyraCyBBRZWOjrzsOPkRmhb, addr 0x1818505c0, size 0x50, virtual true, abstract: false, final false
inline void LuMAHEyraCyBBRZWOjrzsOPkRmhb(::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::Rewired::ControllerWithAxes* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, ::StringW  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_5, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7, int32_t  _cordl_fixed_empty_name_whitespace_param_8, ::ArrayW<bool>  _cordl_fixed_empty_name_whitespace_param_9, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_10, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_11, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_12) ;

/// @brief Method PollForAllAxes, addr 0x181850610, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* PollForAllAxes() ;

/// @brief Method PollForAllElements, addr 0x1818506b0, size 0x50, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* PollForAllElements() ;

/// @brief Method PollForAllElementsDown, addr 0x181850660, size 0x50, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* PollForAllElementsDown() ;

/// @brief Method PollForFirstAxis, addr 0x181850700, size 0x1d0, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo PollForFirstAxis() ;

/// @brief Method PollForFirstElement, addr 0x1818509c0, size 0xf0, virtual true, abstract: false, final false
inline ::Rewired::ControllerPollingInfo PollForFirstElement() ;

/// @brief Method PollForFirstElementDown, addr 0x1818508d0, size 0xf0, virtual true, abstract: false, final false
inline ::Rewired::ControllerPollingInfo PollForFirstElementDown() ;

/// @brief Method WCLJfnOveuVPcxClRtKBwfbsMvpW, addr 0x18172ae00, size 0x20, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* WCLJfnOveuVPcxClRtKBwfbsMvpW() ;

/// @brief Method YuHoUAkbudgKwXRKBvCSbwugoWwl, addr 0x181850ab0, size 0x270, virtual false, abstract: false, final false
inline void YuHoUAkbudgKwXRKBvCSbwugoWwl() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_LagBYJAuZrZYFLeEgYyZOVijFGznA() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_LagBYJAuZrZYFLeEgYyZOVijFGznA() ;

constexpr ::Rewired::Utils::Classes::Utility::TimerAbs* const& __cordl_internal_get_MGLwixafXyjtIdiNVgsRkmqwBcZjA() const;

constexpr ::Rewired::Utils::Classes::Utility::TimerAbs*& __cordl_internal_get_MGLwixafXyjtIdiNVgsRkmqwBcZjA() ;

constexpr uint32_t const& __cordl_internal_get_QdKneLZvJiEORghcJACAGypyxegfA() const;

constexpr uint32_t& __cordl_internal_get_QdKneLZvJiEORghcJACAGypyxegfA() ;

constexpr ::System::Func_2<int32_t,int32_t>* const& __cordl_internal_get_UPaNQflJNemFOMxgxZDpRhmQdPvP() const;

constexpr ::System::Func_2<int32_t,int32_t>*& __cordl_internal_get_UPaNQflJNemFOMxgxZDpRhmQdPvP() ;

constexpr int32_t const& __cordl_internal_get__axis2DCount() const;

constexpr int32_t& __cordl_internal_get__axis2DCount() ;

constexpr int32_t const& __cordl_internal_get__axisCount() const;

constexpr int32_t& __cordl_internal_get__axisCount() ;

constexpr ::Rewired::CalibrationMap* const& __cordl_internal_get__calibrationMap() const;

constexpr ::Rewired::CalibrationMap*& __cordl_internal_get__calibrationMap() ;

constexpr ::ArrayW<::Rewired::Controller_Axis*> const& __cordl_internal_get_axes() const;

constexpr ::ArrayW<::Rewired::Controller_Axis*>& __cordl_internal_get_axes() ;

constexpr ::ArrayW<::Rewired::Controller_Axis2D*> const& __cordl_internal_get_axes2D() const;

constexpr ::ArrayW<::Rewired::Controller_Axis2D*>& __cordl_internal_get_axes2D() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Axis2D*>* const& __cordl_internal_get_axes2D_readOnly() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Axis2D*>*& __cordl_internal_get_axes2D_readOnly() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Axis*>* const& __cordl_internal_get_axes_readOnly() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Axis*>*& __cordl_internal_get_axes_readOnly() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_clFhQhCVoNatYBnDaMPOYGudtfrv() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_clFhQhCVoNatYBnDaMPOYGudtfrv() ;

constexpr void __cordl_internal_set_LagBYJAuZrZYFLeEgYyZOVijFGznA(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_MGLwixafXyjtIdiNVgsRkmqwBcZjA(::Rewired::Utils::Classes::Utility::TimerAbs*  value) ;

constexpr void __cordl_internal_set_QdKneLZvJiEORghcJACAGypyxegfA(uint32_t  value) ;

constexpr void __cordl_internal_set_UPaNQflJNemFOMxgxZDpRhmQdPvP(::System::Func_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set__axis2DCount(int32_t  value) ;

constexpr void __cordl_internal_set__axisCount(int32_t  value) ;

constexpr void __cordl_internal_set__calibrationMap(::Rewired::CalibrationMap*  value) ;

constexpr void __cordl_internal_set_axes(::ArrayW<::Rewired::Controller_Axis*>  value) ;

constexpr void __cordl_internal_set_axes2D(::ArrayW<::Rewired::Controller_Axis2D*>  value) ;

constexpr void __cordl_internal_set_axes2D_readOnly(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Axis2D*>*  value) ;

constexpr void __cordl_internal_set_axes_readOnly(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Axis*>*  value) ;

constexpr void __cordl_internal_set_clFhQhCVoNatYBnDaMPOYGudtfrv(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0x181850d20, size 0xa20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, ::StringW  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_5, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7, int32_t  _cordl_fixed_empty_name_whitespace_param_8, ::ArrayW<bool>  _cordl_fixed_empty_name_whitespace_param_9, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_10, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_11, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_12) ;

/// @brief Method cHQVigwzCgwBbPdFdCIspXRadnQC, addr 0x181851740, size 0x160, virtual false, abstract: false, final false
inline bool cHQVigwzCgwBbPdFdCIspXRadnQC(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3, ::by_ref<float_t>  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method dxEBFmYDZeAUhkMAyOlHGjdzdkMkA, addr 0x1818518a0, size 0x290, virtual true, abstract: false, final false
inline void dxEBFmYDZeAUhkMAyOlHGjdzdkMkA(::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method fVXRfwpgVcsjONAVeGerJyzaQmXJA, addr 0x181851b30, size 0x190, virtual false, abstract: false, final false
inline void fVXRfwpgVcsjONAVeGerJyzaQmXJA() ;

/// @brief Method get_Axes, addr 0x181851d30, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::Controller_Axis*>* get_Axes() ;

/// @brief Method get_Axes2D, addr 0x181851cc0, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::Controller_Axis2D*>* get_Axes2D() ;

/// @brief Method get_AxisElementIdentifiers, addr 0x181851da0, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>* get_AxisElementIdentifiers() ;

/// @brief Method get_axis2DCount, addr 0x181851e20, size 0x60, virtual false, abstract: false, final false
inline int32_t get_axis2DCount() ;

/// @brief Method get_axisCount, addr 0x181851e80, size 0x60, virtual false, abstract: false, final false
inline int32_t get_axisCount() ;

/// @brief Method get_calibrationMap, addr 0x181851ee0, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::CalibrationMap* get_calibrationMap() ;

/// @brief Method iDbasvEtAUAbhFMVRmoxdCxraMdPA, addr 0x181851f40, size 0x110, virtual true, abstract: false, final false
inline void iDbasvEtAUAbhFMVRmoxdCxraMdPA() ;

/// @brief Method pcxkQNoKSvaelVAqcXnSRuHCUEMy, addr 0x181852050, size 0x20, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* pcxkQNoKSvaelVAqcXnSRuHCUEMy() ;

/// @brief Method tAWGszkEczOjidihEFYqvOHiGHoBc, addr 0x181852070, size 0x100, virtual false, abstract: false, final false
inline int32_t tAWGszkEczOjidihEFYqvOHiGHoBc(int32_t  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerWithAxes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerWithAxes", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerWithAxes(ControllerWithAxes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerWithAxes", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerWithAxes(ControllerWithAxes const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1836};

/// @brief Field _axisCount, offset: 0x130, size: 0x4, def value: None
 int32_t  ____axisCount;

/// @brief Field _axis2DCount, offset: 0x134, size: 0x4, def value: None
 int32_t  ____axis2DCount;

/// @brief Field axes, offset: 0x138, size: 0x8, def value: None
 ::ArrayW<::Rewired::Controller_Axis*>  ___axes;

/// @brief Field axes_readOnly, offset: 0x140, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Axis*>*  ___axes_readOnly;

/// @brief Field axes2D, offset: 0x148, size: 0x8, def value: None
 ::ArrayW<::Rewired::Controller_Axis2D*>  ___axes2D;

/// @brief Field axes2D_readOnly, offset: 0x150, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Axis2D*>*  ___axes2D_readOnly;

/// @brief Field _calibrationMap, offset: 0x158, size: 0x8, def value: None
 ::Rewired::CalibrationMap*  ____calibrationMap;

/// @brief Field LagBYJAuZrZYFLeEgYyZOVijFGznA, offset: 0x160, size: 0x8, def value: None
 ::ArrayW<float_t>  ___LagBYJAuZrZYFLeEgYyZOVijFGznA;

/// @brief Field QdKneLZvJiEORghcJACAGypyxegfA, offset: 0x168, size: 0x4, def value: None
 uint32_t  ___QdKneLZvJiEORghcJACAGypyxegfA;

/// @brief Field MGLwixafXyjtIdiNVgsRkmqwBcZjA, offset: 0x170, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Utility::TimerAbs*  ___MGLwixafXyjtIdiNVgsRkmqwBcZjA;

/// @brief Field clFhQhCVoNatYBnDaMPOYGudtfrv, offset: 0x178, size: 0x8, def value: None
 ::ArrayW<float_t>  ___clFhQhCVoNatYBnDaMPOYGudtfrv;

/// @brief Field UPaNQflJNemFOMxgxZDpRhmQdPvP, offset: 0x180, size: 0x8, def value: None
 ::System::Func_2<int32_t,int32_t>*  ___UPaNQflJNemFOMxgxZDpRhmQdPvP;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerWithAxes, ____axisCount) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerWithAxes, ____axis2DCount) == 0x134, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerWithAxes, ___axes) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerWithAxes, ___axes_readOnly) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerWithAxes, ___axes2D) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerWithAxes, ___axes2D_readOnly) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerWithAxes, ____calibrationMap) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerWithAxes, ___LagBYJAuZrZYFLeEgYyZOVijFGznA) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerWithAxes, ___QdKneLZvJiEORghcJACAGypyxegfA) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerWithAxes, ___MGLwixafXyjtIdiNVgsRkmqwBcZjA) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerWithAxes, ___clFhQhCVoNatYBnDaMPOYGudtfrv) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerWithAxes, ___UPaNQflJNemFOMxgxZDpRhmQdPvP) == 0x180, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerWithAxes) == 0x188, "Size mismatch!");

} // namespace end def Rewired

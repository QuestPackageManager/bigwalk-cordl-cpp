#pragma once
// IWYU pragma private; include "Rewired/ControllerMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "Rewired/zzzz__ElementAssignmentConflictCheck_def.hpp"
#include "Rewired/zzzz__ElementAssignmentConflictInfo_def.hpp"
#include "Rewired/zzzz__ElementAssignment_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerMap)
namespace Rewired::Utils::Classes::Data {
template<typename T>
class AList_1;
}
namespace Rewired::Utils::Classes::Data {
class SerializedObject;
}
namespace Rewired::Utils {
template<typename T>
class TempListPool_TList_1;
}
namespace Rewired {
class ActionElementMap;
}
namespace Rewired {
struct AxisRange;
}
namespace Rewired {
struct ControllerElementTarget;
}
namespace Rewired {
struct ControllerElementType;
}
namespace Rewired {
class ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA;
}
namespace Rewired {
class ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC;
}
namespace Rewired {
class ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF;
}
namespace Rewired {
class ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc;
}
namespace Rewired {
class ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA;
}
namespace Rewired {
class ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA;
}
namespace Rewired {
class ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA;
}
namespace Rewired {
class ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA;
}
namespace Rewired {
class ControllerTemplateMap;
}
namespace Rewired {
struct ControllerType;
}
namespace Rewired {
class Controller;
}
namespace Rewired {
struct ElementAssignmentConflictCheck;
}
namespace Rewired {
struct ElementAssignmentConflictInfo;
}
namespace Rewired {
struct ElementAssignment;
}
namespace Rewired {
class IControllerElementTarget;
}
namespace Rewired {
class IControllerTemplate;
}
namespace Rewired {
struct ModifierKeyFlags;
}
namespace Rewired {
struct ModifierKey;
}
namespace Rewired {
class Player;
}
namespace Rewired {
struct Pole;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
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
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
template<typename T>
class Action_1;
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
namespace System {
template<typename T>
class Predicate_1;
}
namespace System {
class Type;
}
namespace UnityEngine {
struct KeyCode;
}
// Forward declare root types
namespace Rewired {
class ControllerMap;
}
namespace Rewired {
class ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA;
}
namespace Rewired {
class ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC;
}
namespace Rewired {
class ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF;
}
namespace Rewired {
class ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc;
}
namespace Rewired {
class ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA;
}
namespace Rewired {
class ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA;
}
namespace Rewired {
class ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA;
}
namespace Rewired {
class ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA;
}
// Write type traits
MARK_REF_T(::Rewired::ControllerMap*);
MARK_REF_T(::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA*);
MARK_REF_T(::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC*);
MARK_REF_T(::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF*);
MARK_REF_T(::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc*);
MARK_REF_T(::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA*);
MARK_REF_T(::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA*);
MARK_REF_T(::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA*);
MARK_REF_T(::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerMap*, "Rewired", "ControllerMap");
DEFINE_IL2CPP_CLASS(::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA*, "Rewired", "ControllerMap/CdFjTCBfIGYQuvczKXllhZYUgCgEA");
DEFINE_IL2CPP_CLASS(::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC*, "Rewired", "ControllerMap/FVzKrFWZRsZmSeyJoSPsMGvRSCLC");
DEFINE_IL2CPP_CLASS(::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF*, "Rewired", "ControllerMap/FkZONdJFjjMLZoCupvYBGIdftlHF");
DEFINE_IL2CPP_CLASS(::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc*, "Rewired", "ControllerMap/RFzbnyjsTMGYYAfCDJMXoSZcKmqqc");
DEFINE_IL2CPP_CLASS(::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA*, "Rewired", "ControllerMap/VUaYSUxRconsKnirJbVnHiPKcwAdA");
DEFINE_IL2CPP_CLASS(::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA*, "Rewired", "ControllerMap/VgJyaUEjlveKoJqFPMdnTjHQiNvcA");
DEFINE_IL2CPP_CLASS(::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA*, "Rewired", "ControllerMap/bRfpjhMYeJHPWezEGjJIpaZTcJfbA");
DEFINE_IL2CPP_CLASS(::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA*, "Rewired", "ControllerMap/ldKHGqHgdKcDTKPrpKrWqByCPanEA");
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerMap/RFzbnyjsTMGYYAfCDJMXoSZcKmqqc
class CORDL_TYPE ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc : public ::System::Object {
public:
// Declarations
/// @brief Field QmlvRYqwOXFJdKsKPjBbgHFlbxnAA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_QmlvRYqwOXFJdKsKPjBbgHFlbxnAA, put=setStaticF_QmlvRYqwOXFJdKsKPjBbgHFlbxnAA)) ::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc*  QmlvRYqwOXFJdKsKPjBbgHFlbxnAA;

/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Rewired::ActionElementMap*>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::Rewired::ActionElementMap*>*() noexcept;

/// @brief Method Compare, addr 0x1819a6f70, size 0xc0, virtual true, abstract: false, final true
inline int32_t Compare(::Rewired::ActionElementMap*  x, ::Rewired::ActionElementMap*  y) ;

static inline ::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc* New_ctor() ;

/// @brief Method RuERtxrkJGVFFogLqozswWbMLQJD, addr 0x1819a7030, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc* RuERtxrkJGVFFogLqozswWbMLQJD() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc* getStaticF_QmlvRYqwOXFJdKsKPjBbgHFlbxnAA() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Rewired::ActionElementMap*>"
constexpr ::System::Collections::Generic::IComparer_1<::Rewired::ActionElementMap*>* i___System__Collections__Generic__IComparer_1___Rewired__ActionElementMap__() noexcept;

static inline void setStaticF_QmlvRYqwOXFJdKsKPjBbgHFlbxnAA(::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc(ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc(ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2049};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc) == 0x10, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerMap/VUaYSUxRconsKnirJbVnHiPKcwAdA
class CORDL_TYPE ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA : public ::System::Object {
public:
// Declarations
/// @brief Field BLjVjTlaYZrNQuceJhTDfgtnzDUE, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_BLjVjTlaYZrNQuceJhTDfgtnzDUE, put=__cordl_internal_set_BLjVjTlaYZrNQuceJhTDfgtnzDUE)) int32_t  BLjVjTlaYZrNQuceJhTDfgtnzDUE;

/// @brief Field ElQMNVbDFVXYHKncZejhRgJSpDVQ, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_ElQMNVbDFVXYHKncZejhRgJSpDVQ, put=__cordl_internal_set_ElQMNVbDFVXYHKncZejhRgJSpDVQ)) ::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*  ElQMNVbDFVXYHKncZejhRgJSpDVQ;

/// @brief Field LeiRuhdsqDapqToVvYFGFSqUuGPo, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_LeiRuhdsqDapqToVvYFGFSqUuGPo, put=__cordl_internal_set_LeiRuhdsqDapqToVvYFGFSqUuGPo)) int32_t  LeiRuhdsqDapqToVvYFGFSqUuGPo;

/// @brief Field MVmicbGLsRvCDfssucovxKxNZgNp, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_MVmicbGLsRvCDfssucovxKxNZgNp, put=__cordl_internal_set_MVmicbGLsRvCDfssucovxKxNZgNp)) ::Rewired::ControllerMap*  MVmicbGLsRvCDfssucovxKxNZgNp;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ActionElementMap__get_Current)) ::Rewired::ActionElementMap*  System_Collections_Generic_IEnumerator_Rewired_ActionElementMap__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field VJLyviKnWPDDMuUyWtLvTULfteyA, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_VJLyviKnWPDDMuUyWtLvTULfteyA, put=__cordl_internal_set_VJLyviKnWPDDMuUyWtLvTULfteyA)) int32_t  VJLyviKnWPDDMuUyWtLvTULfteyA;

/// @brief Field YGtQhiqWucJIZgyNtNFQiaSEEziCA, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_YGtQhiqWucJIZgyNtNFQiaSEEziCA, put=__cordl_internal_set_YGtQhiqWucJIZgyNtNFQiaSEEziCA)) ::Rewired::ActionElementMap*  YGtQhiqWucJIZgyNtNFQiaSEEziCA;

/// @brief Field cPMsuHaIsoeVdVFnjHVKJBfXFgpjA, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_cPMsuHaIsoeVdVFnjHVKJBfXFgpjA, put=__cordl_internal_set_cPMsuHaIsoeVdVFnjHVKJBfXFgpjA)) bool  cPMsuHaIsoeVdVFnjHVKJBfXFgpjA;

/// @brief Field kzCMEsWTNpeKqaiOVOmFGbiffKUn, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_kzCMEsWTNpeKqaiOVOmFGbiffKUn, put=__cordl_internal_set_kzCMEsWTNpeKqaiOVOmFGbiffKUn)) int32_t  kzCMEsWTNpeKqaiOVOmFGbiffKUn;

/// @brief Field saierPVtMEcMczOqYVCoobvBPgAp, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_saierPVtMEcMczOqYVCoobvBPgAp, put=__cordl_internal_set_saierPVtMEcMczOqYVCoobvBPgAp)) int32_t  saierPVtMEcMczOqYVCoobvBPgAp;

/// @brief Field uhBjOwvnZBwExmtMoGnoJtPUeQlF, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_uhBjOwvnZBwExmtMoGnoJtPUeQlF, put=__cordl_internal_set_uhBjOwvnZBwExmtMoGnoJtPUeQlF)) int32_t  uhBjOwvnZBwExmtMoGnoJtPUeQlF;

/// @brief Field yzleCVHfkvigKplXrVkYZYgsErHE, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_yzleCVHfkvigKplXrVkYZYgsErHE, put=__cordl_internal_set_yzleCVHfkvigKplXrVkYZYgsErHE)) bool  yzleCVHfkvigKplXrVkYZYgsErHE;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1819a7090, size 0x120, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ActionElementMap>.GetEnumerator, addr 0x1819a71b0, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>* System_Collections_Generic_IEnumerable_Rewired_ActionElementMap__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ActionElementMap>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::Rewired::ActionElementMap* System_Collections_Generic_IEnumerator_Rewired_ActionElementMap__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1819a71b0, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1810edc40, size 0x3e50, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get_BLjVjTlaYZrNQuceJhTDfgtnzDUE() const;

constexpr int32_t& __cordl_internal_get_BLjVjTlaYZrNQuceJhTDfgtnzDUE() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>* const& __cordl_internal_get_ElQMNVbDFVXYHKncZejhRgJSpDVQ() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*& __cordl_internal_get_ElQMNVbDFVXYHKncZejhRgJSpDVQ() ;

constexpr int32_t const& __cordl_internal_get_LeiRuhdsqDapqToVvYFGFSqUuGPo() const;

constexpr int32_t& __cordl_internal_get_LeiRuhdsqDapqToVvYFGFSqUuGPo() ;

constexpr ::Rewired::ControllerMap* const& __cordl_internal_get_MVmicbGLsRvCDfssucovxKxNZgNp() const;

constexpr ::Rewired::ControllerMap*& __cordl_internal_get_MVmicbGLsRvCDfssucovxKxNZgNp() ;

constexpr int32_t const& __cordl_internal_get_VJLyviKnWPDDMuUyWtLvTULfteyA() const;

constexpr int32_t& __cordl_internal_get_VJLyviKnWPDDMuUyWtLvTULfteyA() ;

constexpr ::Rewired::ActionElementMap* const& __cordl_internal_get_YGtQhiqWucJIZgyNtNFQiaSEEziCA() const;

constexpr ::Rewired::ActionElementMap*& __cordl_internal_get_YGtQhiqWucJIZgyNtNFQiaSEEziCA() ;

constexpr bool const& __cordl_internal_get_cPMsuHaIsoeVdVFnjHVKJBfXFgpjA() const;

constexpr bool& __cordl_internal_get_cPMsuHaIsoeVdVFnjHVKJBfXFgpjA() ;

constexpr int32_t const& __cordl_internal_get_kzCMEsWTNpeKqaiOVOmFGbiffKUn() const;

constexpr int32_t& __cordl_internal_get_kzCMEsWTNpeKqaiOVOmFGbiffKUn() ;

constexpr int32_t const& __cordl_internal_get_saierPVtMEcMczOqYVCoobvBPgAp() const;

constexpr int32_t& __cordl_internal_get_saierPVtMEcMczOqYVCoobvBPgAp() ;

constexpr int32_t const& __cordl_internal_get_uhBjOwvnZBwExmtMoGnoJtPUeQlF() const;

constexpr int32_t& __cordl_internal_get_uhBjOwvnZBwExmtMoGnoJtPUeQlF() ;

constexpr bool const& __cordl_internal_get_yzleCVHfkvigKplXrVkYZYgsErHE() const;

constexpr bool& __cordl_internal_get_yzleCVHfkvigKplXrVkYZYgsErHE() ;

constexpr void __cordl_internal_set_BLjVjTlaYZrNQuceJhTDfgtnzDUE(int32_t  value) ;

constexpr void __cordl_internal_set_ElQMNVbDFVXYHKncZejhRgJSpDVQ(::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*  value) ;

constexpr void __cordl_internal_set_LeiRuhdsqDapqToVvYFGFSqUuGPo(int32_t  value) ;

constexpr void __cordl_internal_set_MVmicbGLsRvCDfssucovxKxNZgNp(::Rewired::ControllerMap*  value) ;

constexpr void __cordl_internal_set_VJLyviKnWPDDMuUyWtLvTULfteyA(int32_t  value) ;

constexpr void __cordl_internal_set_YGtQhiqWucJIZgyNtNFQiaSEEziCA(::Rewired::ActionElementMap*  value) ;

constexpr void __cordl_internal_set_cPMsuHaIsoeVdVFnjHVKJBfXFgpjA(bool  value) ;

constexpr void __cordl_internal_set_kzCMEsWTNpeKqaiOVOmFGbiffKUn(int32_t  value) ;

constexpr void __cordl_internal_set_saierPVtMEcMczOqYVCoobvBPgAp(int32_t  value) ;

constexpr void __cordl_internal_set_uhBjOwvnZBwExmtMoGnoJtPUeQlF(int32_t  value) ;

constexpr void __cordl_internal_set_yzleCVHfkvigKplXrVkYZYgsErHE(bool  value) ;

/// @brief Method .ctor, addr 0x180d66740, size 0x3cb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* i___System__Collections__Generic__IEnumerable_1___Rewired__ActionElementMap__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>* i___System__Collections__Generic__IEnumerator_1___Rewired__ActionElementMap__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA(ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA(ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2050};

/// @brief Field saierPVtMEcMczOqYVCoobvBPgAp, offset: 0x10, size: 0x4, def value: None
 int32_t  ___saierPVtMEcMczOqYVCoobvBPgAp;

/// @brief Field YGtQhiqWucJIZgyNtNFQiaSEEziCA, offset: 0x18, size: 0x8, def value: None
 ::Rewired::ActionElementMap*  ___YGtQhiqWucJIZgyNtNFQiaSEEziCA;

/// @brief Field uhBjOwvnZBwExmtMoGnoJtPUeQlF, offset: 0x20, size: 0x4, def value: None
 int32_t  ___uhBjOwvnZBwExmtMoGnoJtPUeQlF;

/// @brief Field MVmicbGLsRvCDfssucovxKxNZgNp, offset: 0x28, size: 0x8, def value: None
 ::Rewired::ControllerMap*  ___MVmicbGLsRvCDfssucovxKxNZgNp;

/// @brief Field VJLyviKnWPDDMuUyWtLvTULfteyA, offset: 0x30, size: 0x4, def value: None
 int32_t  ___VJLyviKnWPDDMuUyWtLvTULfteyA;

/// @brief Field kzCMEsWTNpeKqaiOVOmFGbiffKUn, offset: 0x34, size: 0x4, def value: None
 int32_t  ___kzCMEsWTNpeKqaiOVOmFGbiffKUn;

/// @brief Field cPMsuHaIsoeVdVFnjHVKJBfXFgpjA, offset: 0x38, size: 0x1, def value: None
 bool  ___cPMsuHaIsoeVdVFnjHVKJBfXFgpjA;

/// @brief Field yzleCVHfkvigKplXrVkYZYgsErHE, offset: 0x39, size: 0x1, def value: None
 bool  ___yzleCVHfkvigKplXrVkYZYgsErHE;

/// @brief Field ElQMNVbDFVXYHKncZejhRgJSpDVQ, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*  ___ElQMNVbDFVXYHKncZejhRgJSpDVQ;

/// @brief Field BLjVjTlaYZrNQuceJhTDfgtnzDUE, offset: 0x48, size: 0x4, def value: None
 int32_t  ___BLjVjTlaYZrNQuceJhTDfgtnzDUE;

/// @brief Field LeiRuhdsqDapqToVvYFGFSqUuGPo, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___LeiRuhdsqDapqToVvYFGFSqUuGPo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA, ___saierPVtMEcMczOqYVCoobvBPgAp) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA, ___YGtQhiqWucJIZgyNtNFQiaSEEziCA) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA, ___uhBjOwvnZBwExmtMoGnoJtPUeQlF) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA, ___MVmicbGLsRvCDfssucovxKxNZgNp) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA, ___VJLyviKnWPDDMuUyWtLvTULfteyA) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA, ___kzCMEsWTNpeKqaiOVOmFGbiffKUn) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA, ___cPMsuHaIsoeVdVFnjHVKJBfXFgpjA) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA, ___yzleCVHfkvigKplXrVkYZYgsErHE) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA, ___ElQMNVbDFVXYHKncZejhRgJSpDVQ) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA, ___BLjVjTlaYZrNQuceJhTDfgtnzDUE) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA, ___LeiRuhdsqDapqToVvYFGFSqUuGPo) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA) == 0x50, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ElementAssignmentConflictInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerMap/CdFjTCBfIGYQuvczKXllhZYUgCgEA
class CORDL_TYPE ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA : public ::System::Object {
public:
// Declarations
/// @brief Field IPdBtnLMvEoCbhKfhdZttHIBIzsM, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_IPdBtnLMvEoCbhKfhdZttHIBIzsM, put=__cordl_internal_set_IPdBtnLMvEoCbhKfhdZttHIBIzsM)) bool  IPdBtnLMvEoCbhKfhdZttHIBIzsM;

/// @brief Field LERkvpWsZrXciZYbhQQWYAYNTsjJ, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_LERkvpWsZrXciZYbhQQWYAYNTsjJ, put=__cordl_internal_set_LERkvpWsZrXciZYbhQQWYAYNTsjJ)) bool  LERkvpWsZrXciZYbhQQWYAYNTsjJ;

/// @brief Field NUKLqjbRKwpmLTeYPAiEqrcOqkji, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_NUKLqjbRKwpmLTeYPAiEqrcOqkji, put=__cordl_internal_set_NUKLqjbRKwpmLTeYPAiEqrcOqkji)) int32_t  NUKLqjbRKwpmLTeYPAiEqrcOqkji;

/// @brief Field PawqYTVpPtBuWqYFZTXCUtngiQvh, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_PawqYTVpPtBuWqYFZTXCUtngiQvh, put=__cordl_internal_set_PawqYTVpPtBuWqYFZTXCUtngiQvh)) int32_t  PawqYTVpPtBuWqYFZTXCUtngiQvh;

/// @brief Field RBTtjLbWsBRyMoAHQVNUAgMeADjFA, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_RBTtjLbWsBRyMoAHQVNUAgMeADjFA, put=__cordl_internal_set_RBTtjLbWsBRyMoAHQVNUAgMeADjFA)) int32_t  RBTtjLbWsBRyMoAHQVNUAgMeADjFA;

/// @brief Field RUiBItDMOLniBSmQVQcszBlxAESB, offset 0x14, size 0x2c 
 __declspec(property(get=__cordl_internal_get_RUiBItDMOLniBSmQVQcszBlxAESB, put=__cordl_internal_set_RUiBItDMOLniBSmQVQcszBlxAESB)) ::Rewired::ElementAssignmentConflictInfo  RUiBItDMOLniBSmQVQcszBlxAESB;

/// @brief Field RmncuklsuMlXmKiVThPpDWwwAPuJ, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_RmncuklsuMlXmKiVThPpDWwwAPuJ, put=__cordl_internal_set_RmncuklsuMlXmKiVThPpDWwwAPuJ)) ::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*  RmncuklsuMlXmKiVThPpDWwwAPuJ;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current)) ::Rewired::ElementAssignmentConflictInfo  System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field WAIIylFYvjXLbGtwAzFSIgfUycahA, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_WAIIylFYvjXLbGtwAzFSIgfUycahA, put=__cordl_internal_set_WAIIylFYvjXLbGtwAzFSIgfUycahA)) int32_t  WAIIylFYvjXLbGtwAzFSIgfUycahA;

/// @brief Field ZBdxUfVjkjtPibIeTBJhHDHKMZXlA, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_ZBdxUfVjkjtPibIeTBJhHDHKMZXlA, put=__cordl_internal_set_ZBdxUfVjkjtPibIeTBJhHDHKMZXlA)) ::Rewired::ControllerMap*  ZBdxUfVjkjtPibIeTBJhHDHKMZXlA;

/// @brief Field ZrVVdPCrcrwOnFgMyeYGGeJuQDcq, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_ZrVVdPCrcrwOnFgMyeYGGeJuQDcq, put=__cordl_internal_set_ZrVVdPCrcrwOnFgMyeYGGeJuQDcq)) ::Rewired::ActionElementMap*  ZrVVdPCrcrwOnFgMyeYGGeJuQDcq;

/// @brief Field uzkkoLyXhPEGWbnJaajMcRrrOgnCb, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_uzkkoLyXhPEGWbnJaajMcRrrOgnCb, put=__cordl_internal_set_uzkkoLyXhPEGWbnJaajMcRrrOgnCb)) ::Rewired::ControllerMap*  uzkkoLyXhPEGWbnJaajMcRrrOgnCb;

/// @brief Field zDOsnRrPwyFfwAqwTLTObnMBIQQib, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_zDOsnRrPwyFfwAqwTLTObnMBIQQib, put=__cordl_internal_set_zDOsnRrPwyFfwAqwTLTObnMBIQQib)) ::Rewired::ControllerMap*  zDOsnRrPwyFfwAqwTLTObnMBIQQib;

/// @brief Field zGxiZhuDIeEzafOreHraWnIKrWBEA, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_zGxiZhuDIeEzafOreHraWnIKrWBEA, put=__cordl_internal_set_zGxiZhuDIeEzafOreHraWnIKrWBEA)) int32_t  zGxiZhuDIeEzafOreHraWnIKrWBEA;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18199a9e0, size 0x380, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator, addr 0x18199ad60, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* System_Collections_Generic_IEnumerable_Rewired_ElementAssignmentConflictInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ElementAssignmentConflictInfo>.get_Current, addr 0x180bb78f0, size 0x120, virtual true, abstract: false, final true
inline ::Rewired::ElementAssignmentConflictInfo System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x18199ad60, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x180bb7a10, size 0xd0, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x18199adf0, size 0x40, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr bool const& __cordl_internal_get_IPdBtnLMvEoCbhKfhdZttHIBIzsM() const;

constexpr bool& __cordl_internal_get_IPdBtnLMvEoCbhKfhdZttHIBIzsM() ;

constexpr bool const& __cordl_internal_get_LERkvpWsZrXciZYbhQQWYAYNTsjJ() const;

constexpr bool& __cordl_internal_get_LERkvpWsZrXciZYbhQQWYAYNTsjJ() ;

constexpr int32_t const& __cordl_internal_get_NUKLqjbRKwpmLTeYPAiEqrcOqkji() const;

constexpr int32_t& __cordl_internal_get_NUKLqjbRKwpmLTeYPAiEqrcOqkji() ;

constexpr int32_t const& __cordl_internal_get_PawqYTVpPtBuWqYFZTXCUtngiQvh() const;

constexpr int32_t& __cordl_internal_get_PawqYTVpPtBuWqYFZTXCUtngiQvh() ;

constexpr int32_t const& __cordl_internal_get_RBTtjLbWsBRyMoAHQVNUAgMeADjFA() const;

constexpr int32_t& __cordl_internal_get_RBTtjLbWsBRyMoAHQVNUAgMeADjFA() ;

constexpr ::Rewired::ElementAssignmentConflictInfo const& __cordl_internal_get_RUiBItDMOLniBSmQVQcszBlxAESB() const;

constexpr ::Rewired::ElementAssignmentConflictInfo& __cordl_internal_get_RUiBItDMOLniBSmQVQcszBlxAESB() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>* const& __cordl_internal_get_RmncuklsuMlXmKiVThPpDWwwAPuJ() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*& __cordl_internal_get_RmncuklsuMlXmKiVThPpDWwwAPuJ() ;

constexpr int32_t const& __cordl_internal_get_WAIIylFYvjXLbGtwAzFSIgfUycahA() const;

constexpr int32_t& __cordl_internal_get_WAIIylFYvjXLbGtwAzFSIgfUycahA() ;

constexpr ::Rewired::ControllerMap* const& __cordl_internal_get_ZBdxUfVjkjtPibIeTBJhHDHKMZXlA() const;

constexpr ::Rewired::ControllerMap*& __cordl_internal_get_ZBdxUfVjkjtPibIeTBJhHDHKMZXlA() ;

constexpr ::Rewired::ActionElementMap* const& __cordl_internal_get_ZrVVdPCrcrwOnFgMyeYGGeJuQDcq() const;

constexpr ::Rewired::ActionElementMap*& __cordl_internal_get_ZrVVdPCrcrwOnFgMyeYGGeJuQDcq() ;

constexpr ::Rewired::ControllerMap* const& __cordl_internal_get_uzkkoLyXhPEGWbnJaajMcRrrOgnCb() const;

constexpr ::Rewired::ControllerMap*& __cordl_internal_get_uzkkoLyXhPEGWbnJaajMcRrrOgnCb() ;

constexpr ::Rewired::ControllerMap* const& __cordl_internal_get_zDOsnRrPwyFfwAqwTLTObnMBIQQib() const;

constexpr ::Rewired::ControllerMap*& __cordl_internal_get_zDOsnRrPwyFfwAqwTLTObnMBIQQib() ;

constexpr int32_t const& __cordl_internal_get_zGxiZhuDIeEzafOreHraWnIKrWBEA() const;

constexpr int32_t& __cordl_internal_get_zGxiZhuDIeEzafOreHraWnIKrWBEA() ;

constexpr void __cordl_internal_set_IPdBtnLMvEoCbhKfhdZttHIBIzsM(bool  value) ;

constexpr void __cordl_internal_set_LERkvpWsZrXciZYbhQQWYAYNTsjJ(bool  value) ;

constexpr void __cordl_internal_set_NUKLqjbRKwpmLTeYPAiEqrcOqkji(int32_t  value) ;

constexpr void __cordl_internal_set_PawqYTVpPtBuWqYFZTXCUtngiQvh(int32_t  value) ;

constexpr void __cordl_internal_set_RBTtjLbWsBRyMoAHQVNUAgMeADjFA(int32_t  value) ;

constexpr void __cordl_internal_set_RUiBItDMOLniBSmQVQcszBlxAESB(::Rewired::ElementAssignmentConflictInfo  value) ;

constexpr void __cordl_internal_set_RmncuklsuMlXmKiVThPpDWwwAPuJ(::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*  value) ;

constexpr void __cordl_internal_set_WAIIylFYvjXLbGtwAzFSIgfUycahA(int32_t  value) ;

constexpr void __cordl_internal_set_ZBdxUfVjkjtPibIeTBJhHDHKMZXlA(::Rewired::ControllerMap*  value) ;

constexpr void __cordl_internal_set_ZrVVdPCrcrwOnFgMyeYGGeJuQDcq(::Rewired::ActionElementMap*  value) ;

constexpr void __cordl_internal_set_uzkkoLyXhPEGWbnJaajMcRrrOgnCb(::Rewired::ControllerMap*  value) ;

constexpr void __cordl_internal_set_zDOsnRrPwyFfwAqwTLTObnMBIQQib(::Rewired::ControllerMap*  value) ;

constexpr void __cordl_internal_set_zGxiZhuDIeEzafOreHraWnIKrWBEA(int32_t  value) ;

/// @brief Method .ctor, addr 0x180bb7ae0, size 0xeb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ElementAssignmentConflictInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ElementAssignmentConflictInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA(ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA(ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2051};

/// @brief Field zGxiZhuDIeEzafOreHraWnIKrWBEA, offset: 0x10, size: 0x4, def value: None
 int32_t  ___zGxiZhuDIeEzafOreHraWnIKrWBEA;

/// @brief Field RUiBItDMOLniBSmQVQcszBlxAESB, offset: 0x14, size: 0x2c, def value: None
 ::Rewired::ElementAssignmentConflictInfo  ___RUiBItDMOLniBSmQVQcszBlxAESB;

/// @brief Field PawqYTVpPtBuWqYFZTXCUtngiQvh, offset: 0x40, size: 0x4, def value: None
 int32_t  ___PawqYTVpPtBuWqYFZTXCUtngiQvh;

/// @brief Field ZBdxUfVjkjtPibIeTBJhHDHKMZXlA, offset: 0x48, size: 0x8, def value: None
 ::Rewired::ControllerMap*  ___ZBdxUfVjkjtPibIeTBJhHDHKMZXlA;

/// @brief Field uzkkoLyXhPEGWbnJaajMcRrrOgnCb, offset: 0x50, size: 0x8, def value: None
 ::Rewired::ControllerMap*  ___uzkkoLyXhPEGWbnJaajMcRrrOgnCb;

/// @brief Field zDOsnRrPwyFfwAqwTLTObnMBIQQib, offset: 0x58, size: 0x8, def value: None
 ::Rewired::ControllerMap*  ___zDOsnRrPwyFfwAqwTLTObnMBIQQib;

/// @brief Field IPdBtnLMvEoCbhKfhdZttHIBIzsM, offset: 0x60, size: 0x1, def value: None
 bool  ___IPdBtnLMvEoCbhKfhdZttHIBIzsM;

/// @brief Field LERkvpWsZrXciZYbhQQWYAYNTsjJ, offset: 0x61, size: 0x1, def value: None
 bool  ___LERkvpWsZrXciZYbhQQWYAYNTsjJ;

/// @brief Field RmncuklsuMlXmKiVThPpDWwwAPuJ, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*  ___RmncuklsuMlXmKiVThPpDWwwAPuJ;

/// @brief Field WAIIylFYvjXLbGtwAzFSIgfUycahA, offset: 0x70, size: 0x4, def value: None
 int32_t  ___WAIIylFYvjXLbGtwAzFSIgfUycahA;

/// @brief Field RBTtjLbWsBRyMoAHQVNUAgMeADjFA, offset: 0x74, size: 0x4, def value: None
 int32_t  ___RBTtjLbWsBRyMoAHQVNUAgMeADjFA;

/// @brief Field ZrVVdPCrcrwOnFgMyeYGGeJuQDcq, offset: 0x78, size: 0x8, def value: None
 ::Rewired::ActionElementMap*  ___ZrVVdPCrcrwOnFgMyeYGGeJuQDcq;

/// @brief Field NUKLqjbRKwpmLTeYPAiEqrcOqkji, offset: 0x80, size: 0x4, def value: None
 int32_t  ___NUKLqjbRKwpmLTeYPAiEqrcOqkji;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA, ___zGxiZhuDIeEzafOreHraWnIKrWBEA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA, ___RUiBItDMOLniBSmQVQcszBlxAESB) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA, ___PawqYTVpPtBuWqYFZTXCUtngiQvh) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA, ___ZBdxUfVjkjtPibIeTBJhHDHKMZXlA) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA, ___uzkkoLyXhPEGWbnJaajMcRrrOgnCb) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA, ___zDOsnRrPwyFfwAqwTLTObnMBIQQib) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA, ___IPdBtnLMvEoCbhKfhdZttHIBIzsM) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA, ___LERkvpWsZrXciZYbhQQWYAYNTsjJ) == 0x61, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA, ___RmncuklsuMlXmKiVThPpDWwwAPuJ) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA, ___WAIIylFYvjXLbGtwAzFSIgfUycahA) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA, ___RBTtjLbWsBRyMoAHQVNUAgMeADjFA) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA, ___ZrVVdPCrcrwOnFgMyeYGGeJuQDcq) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA, ___NUKLqjbRKwpmLTeYPAiEqrcOqkji) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA) == 0x88, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ElementAssignmentConflictInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerMap/VgJyaUEjlveKoJqFPMdnTjHQiNvcA
class CORDL_TYPE ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA : public ::System::Object {
public:
// Declarations
/// @brief Field AfphZaFccQeQIZZvdqsaqbVAdaKWA, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_AfphZaFccQeQIZZvdqsaqbVAdaKWA, put=__cordl_internal_set_AfphZaFccQeQIZZvdqsaqbVAdaKWA)) int32_t  AfphZaFccQeQIZZvdqsaqbVAdaKWA;

/// @brief Field DedUYqGOsbaJMUlkKHxjqgurZwre, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_DedUYqGOsbaJMUlkKHxjqgurZwre, put=__cordl_internal_set_DedUYqGOsbaJMUlkKHxjqgurZwre)) int32_t  DedUYqGOsbaJMUlkKHxjqgurZwre;

/// @brief Field NbRMaxjSAsyLIoGdClnaSvScsgRj, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_NbRMaxjSAsyLIoGdClnaSvScsgRj, put=__cordl_internal_set_NbRMaxjSAsyLIoGdClnaSvScsgRj)) ::Rewired::ActionElementMap*  NbRMaxjSAsyLIoGdClnaSvScsgRj;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current)) ::Rewired::ElementAssignmentConflictInfo  System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field TbTyIFXVFKhuBFACIeNIJnujDxyZA, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_TbTyIFXVFKhuBFACIeNIJnujDxyZA, put=__cordl_internal_set_TbTyIFXVFKhuBFACIeNIJnujDxyZA)) ::Rewired::ActionElementMap*  TbTyIFXVFKhuBFACIeNIJnujDxyZA;

/// @brief Field aQGsPNPDEcduwKeWaHqymVVkrrTU, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_aQGsPNPDEcduwKeWaHqymVVkrrTU, put=__cordl_internal_set_aQGsPNPDEcduwKeWaHqymVVkrrTU)) ::Rewired::ControllerMap*  aQGsPNPDEcduwKeWaHqymVVkrrTU;

/// @brief Field lJGNbKjQXiNDbLTglWErlMiUrvni, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_lJGNbKjQXiNDbLTglWErlMiUrvni, put=__cordl_internal_set_lJGNbKjQXiNDbLTglWErlMiUrvni)) bool  lJGNbKjQXiNDbLTglWErlMiUrvni;

/// @brief Field pfvwkmneAhrTZgglgzlJMwKMihbb, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_pfvwkmneAhrTZgglgzlJMwKMihbb, put=__cordl_internal_set_pfvwkmneAhrTZgglgzlJMwKMihbb)) int32_t  pfvwkmneAhrTZgglgzlJMwKMihbb;

/// @brief Field yhypeAMCuyGdqVxMPhhgdtVPzSoi, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_yhypeAMCuyGdqVxMPhhgdtVPzSoi, put=__cordl_internal_set_yhypeAMCuyGdqVxMPhhgdtVPzSoi)) bool  yhypeAMCuyGdqVxMPhhgdtVPzSoi;

/// @brief Field zyEeWlDnmKuSMPYqfckBnxiGTrOD, offset 0x14, size 0x2c 
 __declspec(property(get=__cordl_internal_get_zyEeWlDnmKuSMPYqfckBnxiGTrOD, put=__cordl_internal_set_zyEeWlDnmKuSMPYqfckBnxiGTrOD)) ::Rewired::ElementAssignmentConflictInfo  zyEeWlDnmKuSMPYqfckBnxiGTrOD;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1819a7240, size 0x2c0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator, addr 0x1819a7500, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* System_Collections_Generic_IEnumerable_Rewired_ElementAssignmentConflictInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ElementAssignmentConflictInfo>.get_Current, addr 0x180bb78f0, size 0x120, virtual true, abstract: false, final true
inline ::Rewired::ElementAssignmentConflictInfo System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1819a7500, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x180bb7a10, size 0xd0, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181049e50, size 0x6fe0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get_AfphZaFccQeQIZZvdqsaqbVAdaKWA() const;

constexpr int32_t& __cordl_internal_get_AfphZaFccQeQIZZvdqsaqbVAdaKWA() ;

constexpr int32_t const& __cordl_internal_get_DedUYqGOsbaJMUlkKHxjqgurZwre() const;

constexpr int32_t& __cordl_internal_get_DedUYqGOsbaJMUlkKHxjqgurZwre() ;

constexpr ::Rewired::ActionElementMap* const& __cordl_internal_get_NbRMaxjSAsyLIoGdClnaSvScsgRj() const;

constexpr ::Rewired::ActionElementMap*& __cordl_internal_get_NbRMaxjSAsyLIoGdClnaSvScsgRj() ;

constexpr ::Rewired::ActionElementMap* const& __cordl_internal_get_TbTyIFXVFKhuBFACIeNIJnujDxyZA() const;

constexpr ::Rewired::ActionElementMap*& __cordl_internal_get_TbTyIFXVFKhuBFACIeNIJnujDxyZA() ;

constexpr ::Rewired::ControllerMap* const& __cordl_internal_get_aQGsPNPDEcduwKeWaHqymVVkrrTU() const;

constexpr ::Rewired::ControllerMap*& __cordl_internal_get_aQGsPNPDEcduwKeWaHqymVVkrrTU() ;

constexpr bool const& __cordl_internal_get_lJGNbKjQXiNDbLTglWErlMiUrvni() const;

constexpr bool& __cordl_internal_get_lJGNbKjQXiNDbLTglWErlMiUrvni() ;

constexpr int32_t const& __cordl_internal_get_pfvwkmneAhrTZgglgzlJMwKMihbb() const;

constexpr int32_t& __cordl_internal_get_pfvwkmneAhrTZgglgzlJMwKMihbb() ;

constexpr bool const& __cordl_internal_get_yhypeAMCuyGdqVxMPhhgdtVPzSoi() const;

constexpr bool& __cordl_internal_get_yhypeAMCuyGdqVxMPhhgdtVPzSoi() ;

constexpr ::Rewired::ElementAssignmentConflictInfo const& __cordl_internal_get_zyEeWlDnmKuSMPYqfckBnxiGTrOD() const;

constexpr ::Rewired::ElementAssignmentConflictInfo& __cordl_internal_get_zyEeWlDnmKuSMPYqfckBnxiGTrOD() ;

constexpr void __cordl_internal_set_AfphZaFccQeQIZZvdqsaqbVAdaKWA(int32_t  value) ;

constexpr void __cordl_internal_set_DedUYqGOsbaJMUlkKHxjqgurZwre(int32_t  value) ;

constexpr void __cordl_internal_set_NbRMaxjSAsyLIoGdClnaSvScsgRj(::Rewired::ActionElementMap*  value) ;

constexpr void __cordl_internal_set_TbTyIFXVFKhuBFACIeNIJnujDxyZA(::Rewired::ActionElementMap*  value) ;

constexpr void __cordl_internal_set_aQGsPNPDEcduwKeWaHqymVVkrrTU(::Rewired::ControllerMap*  value) ;

constexpr void __cordl_internal_set_lJGNbKjQXiNDbLTglWErlMiUrvni(bool  value) ;

constexpr void __cordl_internal_set_pfvwkmneAhrTZgglgzlJMwKMihbb(int32_t  value) ;

constexpr void __cordl_internal_set_yhypeAMCuyGdqVxMPhhgdtVPzSoi(bool  value) ;

constexpr void __cordl_internal_set_zyEeWlDnmKuSMPYqfckBnxiGTrOD(::Rewired::ElementAssignmentConflictInfo  value) ;

/// @brief Method .ctor, addr 0x180bb7ae0, size 0xeb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ElementAssignmentConflictInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ElementAssignmentConflictInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA(ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA(ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2052};

/// @brief Field DedUYqGOsbaJMUlkKHxjqgurZwre, offset: 0x10, size: 0x4, def value: None
 int32_t  ___DedUYqGOsbaJMUlkKHxjqgurZwre;

/// @brief Field zyEeWlDnmKuSMPYqfckBnxiGTrOD, offset: 0x14, size: 0x2c, def value: None
 ::Rewired::ElementAssignmentConflictInfo  ___zyEeWlDnmKuSMPYqfckBnxiGTrOD;

/// @brief Field AfphZaFccQeQIZZvdqsaqbVAdaKWA, offset: 0x40, size: 0x4, def value: None
 int32_t  ___AfphZaFccQeQIZZvdqsaqbVAdaKWA;

/// @brief Field aQGsPNPDEcduwKeWaHqymVVkrrTU, offset: 0x48, size: 0x8, def value: None
 ::Rewired::ControllerMap*  ___aQGsPNPDEcduwKeWaHqymVVkrrTU;

/// @brief Field TbTyIFXVFKhuBFACIeNIJnujDxyZA, offset: 0x50, size: 0x8, def value: None
 ::Rewired::ActionElementMap*  ___TbTyIFXVFKhuBFACIeNIJnujDxyZA;

/// @brief Field NbRMaxjSAsyLIoGdClnaSvScsgRj, offset: 0x58, size: 0x8, def value: None
 ::Rewired::ActionElementMap*  ___NbRMaxjSAsyLIoGdClnaSvScsgRj;

/// @brief Field lJGNbKjQXiNDbLTglWErlMiUrvni, offset: 0x60, size: 0x1, def value: None
 bool  ___lJGNbKjQXiNDbLTglWErlMiUrvni;

/// @brief Field yhypeAMCuyGdqVxMPhhgdtVPzSoi, offset: 0x61, size: 0x1, def value: None
 bool  ___yhypeAMCuyGdqVxMPhhgdtVPzSoi;

/// @brief Field pfvwkmneAhrTZgglgzlJMwKMihbb, offset: 0x64, size: 0x4, def value: None
 int32_t  ___pfvwkmneAhrTZgglgzlJMwKMihbb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA, ___DedUYqGOsbaJMUlkKHxjqgurZwre) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA, ___zyEeWlDnmKuSMPYqfckBnxiGTrOD) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA, ___AfphZaFccQeQIZZvdqsaqbVAdaKWA) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA, ___aQGsPNPDEcduwKeWaHqymVVkrrTU) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA, ___TbTyIFXVFKhuBFACIeNIJnujDxyZA) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA, ___NbRMaxjSAsyLIoGdClnaSvScsgRj) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA, ___lJGNbKjQXiNDbLTglWErlMiUrvni) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA, ___yhypeAMCuyGdqVxMPhhgdtVPzSoi) == 0x61, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA, ___pfvwkmneAhrTZgglgzlJMwKMihbb) == 0x64, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA) == 0x68, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ElementAssignment, Rewired.ElementAssignmentConflictCheck, Rewired.ElementAssignmentConflictInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerMap/bRfpjhMYeJHPWezEGjJIpaZTcJfbA
class CORDL_TYPE ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA : public ::System::Object {
public:
// Declarations
/// @brief Field CWFFbbAKZsDIdMuxwIRtkhoYxiwt, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_CWFFbbAKZsDIdMuxwIRtkhoYxiwt, put=__cordl_internal_set_CWFFbbAKZsDIdMuxwIRtkhoYxiwt)) bool  CWFFbbAKZsDIdMuxwIRtkhoYxiwt;

/// @brief Field DEPciXwOyKsRgjLOreliNJYwkwun, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_DEPciXwOyKsRgjLOreliNJYwkwun, put=__cordl_internal_set_DEPciXwOyKsRgjLOreliNJYwkwun)) int32_t  DEPciXwOyKsRgjLOreliNJYwkwun;

/// @brief Field GhIkuWEGSZaZbxdCrHgMkjwLXmSk, offset 0x54, size 0x38 
 __declspec(property(get=__cordl_internal_get_GhIkuWEGSZaZbxdCrHgMkjwLXmSk, put=__cordl_internal_set_GhIkuWEGSZaZbxdCrHgMkjwLXmSk)) ::Rewired::ElementAssignmentConflictCheck  GhIkuWEGSZaZbxdCrHgMkjwLXmSk;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current)) ::Rewired::ElementAssignmentConflictInfo  System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field UKymDhfmzgOiViLnebOmkloYtyEh, offset 0xc4, size 0x24 
 __declspec(property(get=__cordl_internal_get_UKymDhfmzgOiViLnebOmkloYtyEh, put=__cordl_internal_set_UKymDhfmzgOiViLnebOmkloYtyEh)) ::Rewired::ElementAssignment  UKymDhfmzgOiViLnebOmkloYtyEh;

/// @brief Field jqyDrXeHebdRnpzHuhQRAwpbaQXlA, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get_jqyDrXeHebdRnpzHuhQRAwpbaQXlA, put=__cordl_internal_set_jqyDrXeHebdRnpzHuhQRAwpbaQXlA)) bool  jqyDrXeHebdRnpzHuhQRAwpbaQXlA;

/// @brief Field wYwydEskxrqUAMJaKmojKFTvIwXF, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_wYwydEskxrqUAMJaKmojKFTvIwXF, put=__cordl_internal_set_wYwydEskxrqUAMJaKmojKFTvIwXF)) ::Rewired::ControllerMap*  wYwydEskxrqUAMJaKmojKFTvIwXF;

/// @brief Field yFhoTqScDyMsQHPXycXxEOqCBqJKA, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_yFhoTqScDyMsQHPXycXxEOqCBqJKA, put=__cordl_internal_set_yFhoTqScDyMsQHPXycXxEOqCBqJKA)) int32_t  yFhoTqScDyMsQHPXycXxEOqCBqJKA;

/// @brief Field yIXOtRrZTYRcBxGOBloNbrwqVFJA, offset 0x8c, size 0x38 
 __declspec(property(get=__cordl_internal_get_yIXOtRrZTYRcBxGOBloNbrwqVFJA, put=__cordl_internal_set_yIXOtRrZTYRcBxGOBloNbrwqVFJA)) ::Rewired::ElementAssignmentConflictCheck  yIXOtRrZTYRcBxGOBloNbrwqVFJA;

/// @brief Field yzxkhrbskONRKOPBSFMgbEnVZaAMA, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_yzxkhrbskONRKOPBSFMgbEnVZaAMA, put=__cordl_internal_set_yzxkhrbskONRKOPBSFMgbEnVZaAMA)) int32_t  yzxkhrbskONRKOPBSFMgbEnVZaAMA;

/// @brief Field zLLrBnyffShZtwkCFDvTHSVhMKjvA, offset 0x14, size 0x2c 
 __declspec(property(get=__cordl_internal_get_zLLrBnyffShZtwkCFDvTHSVhMKjvA, put=__cordl_internal_set_zLLrBnyffShZtwkCFDvTHSVhMKjvA)) ::Rewired::ElementAssignmentConflictInfo  zLLrBnyffShZtwkCFDvTHSVhMKjvA;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1819a7cf0, size 0x320, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator, addr 0x1819a8010, size 0xb0, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* System_Collections_Generic_IEnumerable_Rewired_ElementAssignmentConflictInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ElementAssignmentConflictInfo>.get_Current, addr 0x180bb78f0, size 0x120, virtual true, abstract: false, final true
inline ::Rewired::ElementAssignmentConflictInfo System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1819a8010, size 0xb0, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x180bb7a10, size 0xd0, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181049e50, size 0x6fe0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr bool const& __cordl_internal_get_CWFFbbAKZsDIdMuxwIRtkhoYxiwt() const;

constexpr bool& __cordl_internal_get_CWFFbbAKZsDIdMuxwIRtkhoYxiwt() ;

constexpr int32_t const& __cordl_internal_get_DEPciXwOyKsRgjLOreliNJYwkwun() const;

constexpr int32_t& __cordl_internal_get_DEPciXwOyKsRgjLOreliNJYwkwun() ;

constexpr ::Rewired::ElementAssignmentConflictCheck const& __cordl_internal_get_GhIkuWEGSZaZbxdCrHgMkjwLXmSk() const;

constexpr ::Rewired::ElementAssignmentConflictCheck& __cordl_internal_get_GhIkuWEGSZaZbxdCrHgMkjwLXmSk() ;

constexpr ::Rewired::ElementAssignment const& __cordl_internal_get_UKymDhfmzgOiViLnebOmkloYtyEh() const;

constexpr ::Rewired::ElementAssignment& __cordl_internal_get_UKymDhfmzgOiViLnebOmkloYtyEh() ;

constexpr bool const& __cordl_internal_get_jqyDrXeHebdRnpzHuhQRAwpbaQXlA() const;

constexpr bool& __cordl_internal_get_jqyDrXeHebdRnpzHuhQRAwpbaQXlA() ;

constexpr ::Rewired::ControllerMap* const& __cordl_internal_get_wYwydEskxrqUAMJaKmojKFTvIwXF() const;

constexpr ::Rewired::ControllerMap*& __cordl_internal_get_wYwydEskxrqUAMJaKmojKFTvIwXF() ;

constexpr int32_t const& __cordl_internal_get_yFhoTqScDyMsQHPXycXxEOqCBqJKA() const;

constexpr int32_t& __cordl_internal_get_yFhoTqScDyMsQHPXycXxEOqCBqJKA() ;

constexpr ::Rewired::ElementAssignmentConflictCheck const& __cordl_internal_get_yIXOtRrZTYRcBxGOBloNbrwqVFJA() const;

constexpr ::Rewired::ElementAssignmentConflictCheck& __cordl_internal_get_yIXOtRrZTYRcBxGOBloNbrwqVFJA() ;

constexpr int32_t const& __cordl_internal_get_yzxkhrbskONRKOPBSFMgbEnVZaAMA() const;

constexpr int32_t& __cordl_internal_get_yzxkhrbskONRKOPBSFMgbEnVZaAMA() ;

constexpr ::Rewired::ElementAssignmentConflictInfo const& __cordl_internal_get_zLLrBnyffShZtwkCFDvTHSVhMKjvA() const;

constexpr ::Rewired::ElementAssignmentConflictInfo& __cordl_internal_get_zLLrBnyffShZtwkCFDvTHSVhMKjvA() ;

constexpr void __cordl_internal_set_CWFFbbAKZsDIdMuxwIRtkhoYxiwt(bool  value) ;

constexpr void __cordl_internal_set_DEPciXwOyKsRgjLOreliNJYwkwun(int32_t  value) ;

constexpr void __cordl_internal_set_GhIkuWEGSZaZbxdCrHgMkjwLXmSk(::Rewired::ElementAssignmentConflictCheck  value) ;

constexpr void __cordl_internal_set_UKymDhfmzgOiViLnebOmkloYtyEh(::Rewired::ElementAssignment  value) ;

constexpr void __cordl_internal_set_jqyDrXeHebdRnpzHuhQRAwpbaQXlA(bool  value) ;

constexpr void __cordl_internal_set_wYwydEskxrqUAMJaKmojKFTvIwXF(::Rewired::ControllerMap*  value) ;

constexpr void __cordl_internal_set_yFhoTqScDyMsQHPXycXxEOqCBqJKA(int32_t  value) ;

constexpr void __cordl_internal_set_yIXOtRrZTYRcBxGOBloNbrwqVFJA(::Rewired::ElementAssignmentConflictCheck  value) ;

constexpr void __cordl_internal_set_yzxkhrbskONRKOPBSFMgbEnVZaAMA(int32_t  value) ;

constexpr void __cordl_internal_set_zLLrBnyffShZtwkCFDvTHSVhMKjvA(::Rewired::ElementAssignmentConflictInfo  value) ;

/// @brief Method .ctor, addr 0x180bb7ae0, size 0xeb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ElementAssignmentConflictInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ElementAssignmentConflictInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA(ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA(ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2053};

/// @brief Field yFhoTqScDyMsQHPXycXxEOqCBqJKA, offset: 0x10, size: 0x4, def value: None
 int32_t  ___yFhoTqScDyMsQHPXycXxEOqCBqJKA;

/// @brief Field zLLrBnyffShZtwkCFDvTHSVhMKjvA, offset: 0x14, size: 0x2c, def value: None
 ::Rewired::ElementAssignmentConflictInfo  ___zLLrBnyffShZtwkCFDvTHSVhMKjvA;

/// @brief Field DEPciXwOyKsRgjLOreliNJYwkwun, offset: 0x40, size: 0x4, def value: None
 int32_t  ___DEPciXwOyKsRgjLOreliNJYwkwun;

/// @brief Field wYwydEskxrqUAMJaKmojKFTvIwXF, offset: 0x48, size: 0x8, def value: None
 ::Rewired::ControllerMap*  ___wYwydEskxrqUAMJaKmojKFTvIwXF;

/// @brief Field CWFFbbAKZsDIdMuxwIRtkhoYxiwt, offset: 0x50, size: 0x1, def value: None
 bool  ___CWFFbbAKZsDIdMuxwIRtkhoYxiwt;

/// @brief Field jqyDrXeHebdRnpzHuhQRAwpbaQXlA, offset: 0x51, size: 0x1, def value: None
 bool  ___jqyDrXeHebdRnpzHuhQRAwpbaQXlA;

/// @brief Field GhIkuWEGSZaZbxdCrHgMkjwLXmSk, offset: 0x54, size: 0x38, def value: None
 ::Rewired::ElementAssignmentConflictCheck  ___GhIkuWEGSZaZbxdCrHgMkjwLXmSk;

/// @brief Field yIXOtRrZTYRcBxGOBloNbrwqVFJA, offset: 0x8c, size: 0x38, def value: None
 ::Rewired::ElementAssignmentConflictCheck  ___yIXOtRrZTYRcBxGOBloNbrwqVFJA;

/// @brief Field UKymDhfmzgOiViLnebOmkloYtyEh, offset: 0xc4, size: 0x24, def value: None
 ::Rewired::ElementAssignment  ___UKymDhfmzgOiViLnebOmkloYtyEh;

/// @brief Field yzxkhrbskONRKOPBSFMgbEnVZaAMA, offset: 0xe8, size: 0x4, def value: None
 int32_t  ___yzxkhrbskONRKOPBSFMgbEnVZaAMA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA, ___yFhoTqScDyMsQHPXycXxEOqCBqJKA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA, ___zLLrBnyffShZtwkCFDvTHSVhMKjvA) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA, ___DEPciXwOyKsRgjLOreliNJYwkwun) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA, ___wYwydEskxrqUAMJaKmojKFTvIwXF) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA, ___CWFFbbAKZsDIdMuxwIRtkhoYxiwt) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA, ___jqyDrXeHebdRnpzHuhQRAwpbaQXlA) == 0x51, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA, ___GhIkuWEGSZaZbxdCrHgMkjwLXmSk) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA, ___yIXOtRrZTYRcBxGOBloNbrwqVFJA) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA, ___UKymDhfmzgOiViLnebOmkloYtyEh) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA, ___yzxkhrbskONRKOPBSFMgbEnVZaAMA) == 0xe8, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA) == 0xf0, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerMap/FVzKrFWZRsZmSeyJoSPsMGvRSCLC
class CORDL_TYPE ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC : public ::System::Object {
public:
// Declarations
/// @brief Field BGaSUKONRNEDOsDxnyYQHacwCLchA, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_BGaSUKONRNEDOsDxnyYQHacwCLchA, put=__cordl_internal_set_BGaSUKONRNEDOsDxnyYQHacwCLchA)) ::Rewired::ControllerMap*  BGaSUKONRNEDOsDxnyYQHacwCLchA;

/// @brief Field CwbqcmWFZZEQJRjlrGeAIcGDfnLd, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_CwbqcmWFZZEQJRjlrGeAIcGDfnLd, put=__cordl_internal_set_CwbqcmWFZZEQJRjlrGeAIcGDfnLd)) ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>*  CwbqcmWFZZEQJRjlrGeAIcGDfnLd;

/// @brief Field IGutGssySKmKUmKaEtYylGfJQvmw, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_IGutGssySKmKUmKaEtYylGfJQvmw, put=__cordl_internal_set_IGutGssySKmKUmKaEtYylGfJQvmw)) ::Rewired::ActionElementMap*  IGutGssySKmKUmKaEtYylGfJQvmw;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ActionElementMap__get_Current)) ::Rewired::ActionElementMap*  System_Collections_Generic_IEnumerator_Rewired_ActionElementMap__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field ZFwSeyRLszbIzTDxMOglcNjOEWGbA, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_ZFwSeyRLszbIzTDxMOglcNjOEWGbA, put=__cordl_internal_set_ZFwSeyRLszbIzTDxMOglcNjOEWGbA)) bool  ZFwSeyRLszbIzTDxMOglcNjOEWGbA;

/// @brief Field fZgeiMsssrzfkRYcLYQTFxrnTqGE, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_fZgeiMsssrzfkRYcLYQTFxrnTqGE, put=__cordl_internal_set_fZgeiMsssrzfkRYcLYQTFxrnTqGE)) int32_t  fZgeiMsssrzfkRYcLYQTFxrnTqGE;

/// @brief Field hGyoWrarPxLSnXZEfRLdPTomfnkN, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_hGyoWrarPxLSnXZEfRLdPTomfnkN, put=__cordl_internal_set_hGyoWrarPxLSnXZEfRLdPTomfnkN)) int32_t  hGyoWrarPxLSnXZEfRLdPTomfnkN;

/// @brief Field tfDcIGKGSfjrHzgoltmIafeqeLMsA, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_tfDcIGKGSfjrHzgoltmIafeqeLMsA, put=__cordl_internal_set_tfDcIGKGSfjrHzgoltmIafeqeLMsA)) int32_t  tfDcIGKGSfjrHzgoltmIafeqeLMsA;

/// @brief Field wIIvhjEnGJzknxqfilZPgRrbAeiS, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_wIIvhjEnGJzknxqfilZPgRrbAeiS, put=__cordl_internal_set_wIIvhjEnGJzknxqfilZPgRrbAeiS)) int32_t  wIIvhjEnGJzknxqfilZPgRrbAeiS;

/// @brief Field yFWrpSQJDJpvyYpTorhAZRfhndUD, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_yFWrpSQJDJpvyYpTorhAZRfhndUD, put=__cordl_internal_set_yFWrpSQJDJpvyYpTorhAZRfhndUD)) bool  yFWrpSQJDJpvyYpTorhAZRfhndUD;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1819a0630, size 0x220, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ActionElementMap>.GetEnumerator, addr 0x1819a0850, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>* System_Collections_Generic_IEnumerable_Rewired_ActionElementMap__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ActionElementMap>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::Rewired::ActionElementMap* System_Collections_Generic_IEnumerator_Rewired_ActionElementMap__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1819a0850, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1818b0250, size 0xa0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::Rewired::ControllerMap* const& __cordl_internal_get_BGaSUKONRNEDOsDxnyYQHacwCLchA() const;

constexpr ::Rewired::ControllerMap*& __cordl_internal_get_BGaSUKONRNEDOsDxnyYQHacwCLchA() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>* const& __cordl_internal_get_CwbqcmWFZZEQJRjlrGeAIcGDfnLd() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>*& __cordl_internal_get_CwbqcmWFZZEQJRjlrGeAIcGDfnLd() ;

constexpr ::Rewired::ActionElementMap* const& __cordl_internal_get_IGutGssySKmKUmKaEtYylGfJQvmw() const;

constexpr ::Rewired::ActionElementMap*& __cordl_internal_get_IGutGssySKmKUmKaEtYylGfJQvmw() ;

constexpr bool const& __cordl_internal_get_ZFwSeyRLszbIzTDxMOglcNjOEWGbA() const;

constexpr bool& __cordl_internal_get_ZFwSeyRLszbIzTDxMOglcNjOEWGbA() ;

constexpr int32_t const& __cordl_internal_get_fZgeiMsssrzfkRYcLYQTFxrnTqGE() const;

constexpr int32_t& __cordl_internal_get_fZgeiMsssrzfkRYcLYQTFxrnTqGE() ;

constexpr int32_t const& __cordl_internal_get_hGyoWrarPxLSnXZEfRLdPTomfnkN() const;

constexpr int32_t& __cordl_internal_get_hGyoWrarPxLSnXZEfRLdPTomfnkN() ;

constexpr int32_t const& __cordl_internal_get_tfDcIGKGSfjrHzgoltmIafeqeLMsA() const;

constexpr int32_t& __cordl_internal_get_tfDcIGKGSfjrHzgoltmIafeqeLMsA() ;

constexpr int32_t const& __cordl_internal_get_wIIvhjEnGJzknxqfilZPgRrbAeiS() const;

constexpr int32_t& __cordl_internal_get_wIIvhjEnGJzknxqfilZPgRrbAeiS() ;

constexpr bool const& __cordl_internal_get_yFWrpSQJDJpvyYpTorhAZRfhndUD() const;

constexpr bool& __cordl_internal_get_yFWrpSQJDJpvyYpTorhAZRfhndUD() ;

constexpr void __cordl_internal_set_BGaSUKONRNEDOsDxnyYQHacwCLchA(::Rewired::ControllerMap*  value) ;

constexpr void __cordl_internal_set_CwbqcmWFZZEQJRjlrGeAIcGDfnLd(::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>*  value) ;

constexpr void __cordl_internal_set_IGutGssySKmKUmKaEtYylGfJQvmw(::Rewired::ActionElementMap*  value) ;

constexpr void __cordl_internal_set_ZFwSeyRLszbIzTDxMOglcNjOEWGbA(bool  value) ;

constexpr void __cordl_internal_set_fZgeiMsssrzfkRYcLYQTFxrnTqGE(int32_t  value) ;

constexpr void __cordl_internal_set_hGyoWrarPxLSnXZEfRLdPTomfnkN(int32_t  value) ;

constexpr void __cordl_internal_set_tfDcIGKGSfjrHzgoltmIafeqeLMsA(int32_t  value) ;

constexpr void __cordl_internal_set_wIIvhjEnGJzknxqfilZPgRrbAeiS(int32_t  value) ;

constexpr void __cordl_internal_set_yFWrpSQJDJpvyYpTorhAZRfhndUD(bool  value) ;

/// @brief Method .ctor, addr 0x180d66740, size 0x3cb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* i___System__Collections__Generic__IEnumerable_1___Rewired__ActionElementMap__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>* i___System__Collections__Generic__IEnumerator_1___Rewired__ActionElementMap__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method lAybbRAPvlkrWiWJZcoExncumwTeb, addr 0x1818289d0, size 0x30, virtual false, abstract: false, final false
inline void lAybbRAPvlkrWiWJZcoExncumwTeb() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC(ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC(ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2054};

/// @brief Field wIIvhjEnGJzknxqfilZPgRrbAeiS, offset: 0x10, size: 0x4, def value: None
 int32_t  ___wIIvhjEnGJzknxqfilZPgRrbAeiS;

/// @brief Field IGutGssySKmKUmKaEtYylGfJQvmw, offset: 0x18, size: 0x8, def value: None
 ::Rewired::ActionElementMap*  ___IGutGssySKmKUmKaEtYylGfJQvmw;

/// @brief Field tfDcIGKGSfjrHzgoltmIafeqeLMsA, offset: 0x20, size: 0x4, def value: None
 int32_t  ___tfDcIGKGSfjrHzgoltmIafeqeLMsA;

/// @brief Field BGaSUKONRNEDOsDxnyYQHacwCLchA, offset: 0x28, size: 0x8, def value: None
 ::Rewired::ControllerMap*  ___BGaSUKONRNEDOsDxnyYQHacwCLchA;

/// @brief Field fZgeiMsssrzfkRYcLYQTFxrnTqGE, offset: 0x30, size: 0x4, def value: None
 int32_t  ___fZgeiMsssrzfkRYcLYQTFxrnTqGE;

/// @brief Field hGyoWrarPxLSnXZEfRLdPTomfnkN, offset: 0x34, size: 0x4, def value: None
 int32_t  ___hGyoWrarPxLSnXZEfRLdPTomfnkN;

/// @brief Field yFWrpSQJDJpvyYpTorhAZRfhndUD, offset: 0x38, size: 0x1, def value: None
 bool  ___yFWrpSQJDJpvyYpTorhAZRfhndUD;

/// @brief Field ZFwSeyRLszbIzTDxMOglcNjOEWGbA, offset: 0x39, size: 0x1, def value: None
 bool  ___ZFwSeyRLszbIzTDxMOglcNjOEWGbA;

/// @brief Field CwbqcmWFZZEQJRjlrGeAIcGDfnLd, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>*  ___CwbqcmWFZZEQJRjlrGeAIcGDfnLd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC, ___wIIvhjEnGJzknxqfilZPgRrbAeiS) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC, ___IGutGssySKmKUmKaEtYylGfJQvmw) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC, ___tfDcIGKGSfjrHzgoltmIafeqeLMsA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC, ___BGaSUKONRNEDOsDxnyYQHacwCLchA) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC, ___fZgeiMsssrzfkRYcLYQTFxrnTqGE) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC, ___hGyoWrarPxLSnXZEfRLdPTomfnkN) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC, ___yFWrpSQJDJpvyYpTorhAZRfhndUD) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC, ___ZFwSeyRLszbIzTDxMOglcNjOEWGbA) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC, ___CwbqcmWFZZEQJRjlrGeAIcGDfnLd) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC) == 0x48, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Collections.Generic.List`1::Enumerator<T>, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerMap/FkZONdJFjjMLZoCupvYBGIdftlHF
class CORDL_TYPE ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF : public ::System::Object {
public:
// Declarations
/// @brief Field ANXedHHotoQxKdJOOgpZxRZYGKkJA, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_ANXedHHotoQxKdJOOgpZxRZYGKkJA, put=__cordl_internal_set_ANXedHHotoQxKdJOOgpZxRZYGKkJA)) int32_t  ANXedHHotoQxKdJOOgpZxRZYGKkJA;

/// @brief Field DCXGaJKGnbPRnUVWUGyLXtSDXiqQA, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_DCXGaJKGnbPRnUVWUGyLXtSDXiqQA, put=__cordl_internal_set_DCXGaJKGnbPRnUVWUGyLXtSDXiqQA)) ::Rewired::ControllerMap*  DCXGaJKGnbPRnUVWUGyLXtSDXiqQA;

/// @brief Field QBzSntacVDtfRcSOYzbqtBRFEOzA, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_QBzSntacVDtfRcSOYzbqtBRFEOzA, put=__cordl_internal_set_QBzSntacVDtfRcSOYzbqtBRFEOzA)) ::Rewired::ActionElementMap*  QBzSntacVDtfRcSOYzbqtBRFEOzA;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ActionElementMap__get_Current)) ::Rewired::ActionElementMap*  System_Collections_Generic_IEnumerator_Rewired_ActionElementMap__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field TjgsMFAqNPWQWtMRWMzBgvETZFVf, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_TjgsMFAqNPWQWtMRWMzBgvETZFVf, put=__cordl_internal_set_TjgsMFAqNPWQWtMRWMzBgvETZFVf)) int32_t  TjgsMFAqNPWQWtMRWMzBgvETZFVf;

/// @brief Field UWlIBGMpbSLHgvBRyCfWRlPHLmMj, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_UWlIBGMpbSLHgvBRyCfWRlPHLmMj, put=__cordl_internal_set_UWlIBGMpbSLHgvBRyCfWRlPHLmMj)) ::Rewired::IControllerElementTarget*  UWlIBGMpbSLHgvBRyCfWRlPHLmMj;

/// @brief Field bmVdyZLClxnOeCIYfYIvvwTBaxqO, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_bmVdyZLClxnOeCIYfYIvvwTBaxqO, put=__cordl_internal_set_bmVdyZLClxnOeCIYfYIvvwTBaxqO)) ::Rewired::IControllerElementTarget*  bmVdyZLClxnOeCIYfYIvvwTBaxqO;

/// @brief Field cOeaqQPZeLubHGhDVuWPgBbainbK, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_cOeaqQPZeLubHGhDVuWPgBbainbK, put=__cordl_internal_set_cOeaqQPZeLubHGhDVuWPgBbainbK)) bool  cOeaqQPZeLubHGhDVuWPgBbainbK;

/// @brief Field dejsfAclLIYAPGmbdddxfgNxPDiS, offset 0x50, size 0x18 
 __declspec(property(get=__cordl_internal_get_dejsfAclLIYAPGmbdddxfgNxPDiS, put=__cordl_internal_set_dejsfAclLIYAPGmbdddxfgNxPDiS)) ::System::Collections::Generic::List_1_Enumerator<::Rewired::ActionElementMap*>  dejsfAclLIYAPGmbdddxfgNxPDiS;

/// @brief Field mEbqRJTdrKrDJuYpxvsBwDAkFVPo, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_mEbqRJTdrKrDJuYpxvsBwDAkFVPo, put=__cordl_internal_set_mEbqRJTdrKrDJuYpxvsBwDAkFVPo)) ::Rewired::Utils::TempListPool_TList_1<::Rewired::ActionElementMap*>*  mEbqRJTdrKrDJuYpxvsBwDAkFVPo;

/// @brief Field rmgQvmOgPCHwjyzpJwVDJqJlGuvc, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_rmgQvmOgPCHwjyzpJwVDJqJlGuvc, put=__cordl_internal_set_rmgQvmOgPCHwjyzpJwVDJqJlGuvc)) bool  rmgQvmOgPCHwjyzpJwVDJqJlGuvc;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1819a08e0, size 0x2e0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ActionElementMap>.GetEnumerator, addr 0x1819a0bc0, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>* System_Collections_Generic_IEnumerable_Rewired_ActionElementMap__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ActionElementMap>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::Rewired::ActionElementMap* System_Collections_Generic_IEnumerator_Rewired_ActionElementMap__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1819a0bc0, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1819a0c50, size 0x130, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get_ANXedHHotoQxKdJOOgpZxRZYGKkJA() const;

constexpr int32_t& __cordl_internal_get_ANXedHHotoQxKdJOOgpZxRZYGKkJA() ;

constexpr ::Rewired::ControllerMap* const& __cordl_internal_get_DCXGaJKGnbPRnUVWUGyLXtSDXiqQA() const;

constexpr ::Rewired::ControllerMap*& __cordl_internal_get_DCXGaJKGnbPRnUVWUGyLXtSDXiqQA() ;

constexpr ::Rewired::ActionElementMap* const& __cordl_internal_get_QBzSntacVDtfRcSOYzbqtBRFEOzA() const;

constexpr ::Rewired::ActionElementMap*& __cordl_internal_get_QBzSntacVDtfRcSOYzbqtBRFEOzA() ;

constexpr int32_t const& __cordl_internal_get_TjgsMFAqNPWQWtMRWMzBgvETZFVf() const;

constexpr int32_t& __cordl_internal_get_TjgsMFAqNPWQWtMRWMzBgvETZFVf() ;

constexpr ::Rewired::IControllerElementTarget* const& __cordl_internal_get_UWlIBGMpbSLHgvBRyCfWRlPHLmMj() const;

constexpr ::Rewired::IControllerElementTarget*& __cordl_internal_get_UWlIBGMpbSLHgvBRyCfWRlPHLmMj() ;

constexpr ::Rewired::IControllerElementTarget* const& __cordl_internal_get_bmVdyZLClxnOeCIYfYIvvwTBaxqO() const;

constexpr ::Rewired::IControllerElementTarget*& __cordl_internal_get_bmVdyZLClxnOeCIYfYIvvwTBaxqO() ;

constexpr bool const& __cordl_internal_get_cOeaqQPZeLubHGhDVuWPgBbainbK() const;

constexpr bool& __cordl_internal_get_cOeaqQPZeLubHGhDVuWPgBbainbK() ;

constexpr ::System::Collections::Generic::List_1_Enumerator<::Rewired::ActionElementMap*> const& __cordl_internal_get_dejsfAclLIYAPGmbdddxfgNxPDiS() const;

constexpr ::System::Collections::Generic::List_1_Enumerator<::Rewired::ActionElementMap*>& __cordl_internal_get_dejsfAclLIYAPGmbdddxfgNxPDiS() ;

constexpr ::Rewired::Utils::TempListPool_TList_1<::Rewired::ActionElementMap*>* const& __cordl_internal_get_mEbqRJTdrKrDJuYpxvsBwDAkFVPo() const;

constexpr ::Rewired::Utils::TempListPool_TList_1<::Rewired::ActionElementMap*>*& __cordl_internal_get_mEbqRJTdrKrDJuYpxvsBwDAkFVPo() ;

constexpr bool const& __cordl_internal_get_rmgQvmOgPCHwjyzpJwVDJqJlGuvc() const;

constexpr bool& __cordl_internal_get_rmgQvmOgPCHwjyzpJwVDJqJlGuvc() ;

constexpr void __cordl_internal_set_ANXedHHotoQxKdJOOgpZxRZYGKkJA(int32_t  value) ;

constexpr void __cordl_internal_set_DCXGaJKGnbPRnUVWUGyLXtSDXiqQA(::Rewired::ControllerMap*  value) ;

constexpr void __cordl_internal_set_QBzSntacVDtfRcSOYzbqtBRFEOzA(::Rewired::ActionElementMap*  value) ;

constexpr void __cordl_internal_set_TjgsMFAqNPWQWtMRWMzBgvETZFVf(int32_t  value) ;

constexpr void __cordl_internal_set_UWlIBGMpbSLHgvBRyCfWRlPHLmMj(::Rewired::IControllerElementTarget*  value) ;

constexpr void __cordl_internal_set_bmVdyZLClxnOeCIYfYIvvwTBaxqO(::Rewired::IControllerElementTarget*  value) ;

constexpr void __cordl_internal_set_cOeaqQPZeLubHGhDVuWPgBbainbK(bool  value) ;

constexpr void __cordl_internal_set_dejsfAclLIYAPGmbdddxfgNxPDiS(::System::Collections::Generic::List_1_Enumerator<::Rewired::ActionElementMap*>  value) ;

constexpr void __cordl_internal_set_mEbqRJTdrKrDJuYpxvsBwDAkFVPo(::Rewired::Utils::TempListPool_TList_1<::Rewired::ActionElementMap*>*  value) ;

constexpr void __cordl_internal_set_rmgQvmOgPCHwjyzpJwVDJqJlGuvc(bool  value) ;

/// @brief Method .ctor, addr 0x180d66740, size 0x3cb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* i___System__Collections__Generic__IEnumerable_1___Rewired__ActionElementMap__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>* i___System__Collections__Generic__IEnumerator_1___Rewired__ActionElementMap__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method yILsinNbRyauUhBTpJtmKvTkMfhCA, addr 0x181828a00, size 0x10, virtual false, abstract: false, final false
inline void yILsinNbRyauUhBTpJtmKvTkMfhCA() ;

/// @brief Method zXpJgAnaIpQNKVCyTMFVDCrFupLB, addr 0x180d70080, size 0x30, virtual false, abstract: false, final false
inline void zXpJgAnaIpQNKVCyTMFVDCrFupLB() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF(ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF(ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2055};

/// @brief Field TjgsMFAqNPWQWtMRWMzBgvETZFVf, offset: 0x10, size: 0x4, def value: None
 int32_t  ___TjgsMFAqNPWQWtMRWMzBgvETZFVf;

/// @brief Field QBzSntacVDtfRcSOYzbqtBRFEOzA, offset: 0x18, size: 0x8, def value: None
 ::Rewired::ActionElementMap*  ___QBzSntacVDtfRcSOYzbqtBRFEOzA;

/// @brief Field ANXedHHotoQxKdJOOgpZxRZYGKkJA, offset: 0x20, size: 0x4, def value: None
 int32_t  ___ANXedHHotoQxKdJOOgpZxRZYGKkJA;

/// @brief Field DCXGaJKGnbPRnUVWUGyLXtSDXiqQA, offset: 0x28, size: 0x8, def value: None
 ::Rewired::ControllerMap*  ___DCXGaJKGnbPRnUVWUGyLXtSDXiqQA;

/// @brief Field UWlIBGMpbSLHgvBRyCfWRlPHLmMj, offset: 0x30, size: 0x8, def value: None
 ::Rewired::IControllerElementTarget*  ___UWlIBGMpbSLHgvBRyCfWRlPHLmMj;

/// @brief Field bmVdyZLClxnOeCIYfYIvvwTBaxqO, offset: 0x38, size: 0x8, def value: None
 ::Rewired::IControllerElementTarget*  ___bmVdyZLClxnOeCIYfYIvvwTBaxqO;

/// @brief Field rmgQvmOgPCHwjyzpJwVDJqJlGuvc, offset: 0x40, size: 0x1, def value: None
 bool  ___rmgQvmOgPCHwjyzpJwVDJqJlGuvc;

/// @brief Field cOeaqQPZeLubHGhDVuWPgBbainbK, offset: 0x41, size: 0x1, def value: None
 bool  ___cOeaqQPZeLubHGhDVuWPgBbainbK;

/// @brief Field mEbqRJTdrKrDJuYpxvsBwDAkFVPo, offset: 0x48, size: 0x8, def value: None
 ::Rewired::Utils::TempListPool_TList_1<::Rewired::ActionElementMap*>*  ___mEbqRJTdrKrDJuYpxvsBwDAkFVPo;

/// @brief Field dejsfAclLIYAPGmbdddxfgNxPDiS, offset: 0x50, size: 0x18, def value: None
 ::System::Collections::Generic::List_1_Enumerator<::Rewired::ActionElementMap*>  ___dejsfAclLIYAPGmbdddxfgNxPDiS;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF, ___TjgsMFAqNPWQWtMRWMzBgvETZFVf) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF, ___QBzSntacVDtfRcSOYzbqtBRFEOzA) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF, ___ANXedHHotoQxKdJOOgpZxRZYGKkJA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF, ___DCXGaJKGnbPRnUVWUGyLXtSDXiqQA) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF, ___UWlIBGMpbSLHgvBRyCfWRlPHLmMj) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF, ___bmVdyZLClxnOeCIYfYIvvwTBaxqO) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF, ___rmgQvmOgPCHwjyzpJwVDJqJlGuvc) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF, ___cOeaqQPZeLubHGhDVuWPgBbainbK) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF, ___mEbqRJTdrKrDJuYpxvsBwDAkFVPo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF, ___dejsfAclLIYAPGmbdddxfgNxPDiS) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF) == 0x68, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Collections.Generic.List`1::Enumerator<T>, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerMap/ldKHGqHgdKcDTKPrpKrWqByCPanEA
class CORDL_TYPE ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA : public ::System::Object {
public:
// Declarations
/// @brief Field ABnIwjcVfyZpUTUDFbccdfXifleg, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_ABnIwjcVfyZpUTUDFbccdfXifleg, put=__cordl_internal_set_ABnIwjcVfyZpUTUDFbccdfXifleg)) bool  ABnIwjcVfyZpUTUDFbccdfXifleg;

/// @brief Field KMgeSlCAqldOlJofIVXuJHoFHmTDb, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_KMgeSlCAqldOlJofIVXuJHoFHmTDb, put=__cordl_internal_set_KMgeSlCAqldOlJofIVXuJHoFHmTDb)) ::Rewired::ControllerMap*  KMgeSlCAqldOlJofIVXuJHoFHmTDb;

/// @brief Field NMOAamFRZcxRYGTWTeonbhnkTQmac, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_NMOAamFRZcxRYGTWTeonbhnkTQmac, put=__cordl_internal_set_NMOAamFRZcxRYGTWTeonbhnkTQmac)) ::Rewired::IControllerElementTarget*  NMOAamFRZcxRYGTWTeonbhnkTQmac;

/// @brief Field ONAZBLMQiOkuvEfHQnDCRpxNVgZh, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_ONAZBLMQiOkuvEfHQnDCRpxNVgZh, put=__cordl_internal_set_ONAZBLMQiOkuvEfHQnDCRpxNVgZh)) int32_t  ONAZBLMQiOkuvEfHQnDCRpxNVgZh;

/// @brief Field QmvHkIKVAntsJZTBaEoUcdbHjNNjA, offset 0x58, size 0x18 
 __declspec(property(get=__cordl_internal_get_QmvHkIKVAntsJZTBaEoUcdbHjNNjA, put=__cordl_internal_set_QmvHkIKVAntsJZTBaEoUcdbHjNNjA)) ::System::Collections::Generic::List_1_Enumerator<::Rewired::ActionElementMap*>  QmvHkIKVAntsJZTBaEoUcdbHjNNjA;

/// @brief Field RCjFlEyjEgVXUwUfHbXOZhxfOJCh, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_RCjFlEyjEgVXUwUfHbXOZhxfOJCh, put=__cordl_internal_set_RCjFlEyjEgVXUwUfHbXOZhxfOJCh)) ::Rewired::Utils::TempListPool_TList_1<::Rewired::ActionElementMap*>*  RCjFlEyjEgVXUwUfHbXOZhxfOJCh;

/// @brief Field SwHhVSuYINuZhGIlrptLZrtNbLix, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_SwHhVSuYINuZhGIlrptLZrtNbLix, put=__cordl_internal_set_SwHhVSuYINuZhGIlrptLZrtNbLix)) ::Rewired::IControllerElementTarget*  SwHhVSuYINuZhGIlrptLZrtNbLix;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ActionElementMap__get_Current)) ::Rewired::ActionElementMap*  System_Collections_Generic_IEnumerator_Rewired_ActionElementMap__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field VasWQDtlQVWUqqYvDgUGOCrwAYdp, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_VasWQDtlQVWUqqYvDgUGOCrwAYdp, put=__cordl_internal_set_VasWQDtlQVWUqqYvDgUGOCrwAYdp)) int32_t  VasWQDtlQVWUqqYvDgUGOCrwAYdp;

/// @brief Field WkxgINIjbsWTTmqbfMahTafesXPF, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_WkxgINIjbsWTTmqbfMahTafesXPF, put=__cordl_internal_set_WkxgINIjbsWTTmqbfMahTafesXPF)) int32_t  WkxgINIjbsWTTmqbfMahTafesXPF;

/// @brief Field ZrjcgFiNPjqdVXeaJiLWARVaoVWnB, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_ZrjcgFiNPjqdVXeaJiLWARVaoVWnB, put=__cordl_internal_set_ZrjcgFiNPjqdVXeaJiLWARVaoVWnB)) bool  ZrjcgFiNPjqdVXeaJiLWARVaoVWnB;

/// @brief Field oeKxVmqzZvtSojRSxIhmVFOlHsoR, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_oeKxVmqzZvtSojRSxIhmVFOlHsoR, put=__cordl_internal_set_oeKxVmqzZvtSojRSxIhmVFOlHsoR)) ::Rewired::ActionElementMap*  oeKxVmqzZvtSojRSxIhmVFOlHsoR;

/// @brief Field pIBfHRAxGZxBbkXdDHrOUKQDcXqk, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_pIBfHRAxGZxBbkXdDHrOUKQDcXqk, put=__cordl_internal_set_pIBfHRAxGZxBbkXdDHrOUKQDcXqk)) int32_t  pIBfHRAxGZxBbkXdDHrOUKQDcXqk;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1819a9270, size 0x2d0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ActionElementMap>.GetEnumerator, addr 0x1819a9540, size 0xa0, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>* System_Collections_Generic_IEnumerable_Rewired_ActionElementMap__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ActionElementMap>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::Rewired::ActionElementMap* System_Collections_Generic_IEnumerator_Rewired_ActionElementMap__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1819a9540, size 0xa0, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1819a95e0, size 0x130, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr bool const& __cordl_internal_get_ABnIwjcVfyZpUTUDFbccdfXifleg() const;

constexpr bool& __cordl_internal_get_ABnIwjcVfyZpUTUDFbccdfXifleg() ;

constexpr ::Rewired::ControllerMap* const& __cordl_internal_get_KMgeSlCAqldOlJofIVXuJHoFHmTDb() const;

constexpr ::Rewired::ControllerMap*& __cordl_internal_get_KMgeSlCAqldOlJofIVXuJHoFHmTDb() ;

constexpr ::Rewired::IControllerElementTarget* const& __cordl_internal_get_NMOAamFRZcxRYGTWTeonbhnkTQmac() const;

constexpr ::Rewired::IControllerElementTarget*& __cordl_internal_get_NMOAamFRZcxRYGTWTeonbhnkTQmac() ;

constexpr int32_t const& __cordl_internal_get_ONAZBLMQiOkuvEfHQnDCRpxNVgZh() const;

constexpr int32_t& __cordl_internal_get_ONAZBLMQiOkuvEfHQnDCRpxNVgZh() ;

constexpr ::System::Collections::Generic::List_1_Enumerator<::Rewired::ActionElementMap*> const& __cordl_internal_get_QmvHkIKVAntsJZTBaEoUcdbHjNNjA() const;

constexpr ::System::Collections::Generic::List_1_Enumerator<::Rewired::ActionElementMap*>& __cordl_internal_get_QmvHkIKVAntsJZTBaEoUcdbHjNNjA() ;

constexpr ::Rewired::Utils::TempListPool_TList_1<::Rewired::ActionElementMap*>* const& __cordl_internal_get_RCjFlEyjEgVXUwUfHbXOZhxfOJCh() const;

constexpr ::Rewired::Utils::TempListPool_TList_1<::Rewired::ActionElementMap*>*& __cordl_internal_get_RCjFlEyjEgVXUwUfHbXOZhxfOJCh() ;

constexpr ::Rewired::IControllerElementTarget* const& __cordl_internal_get_SwHhVSuYINuZhGIlrptLZrtNbLix() const;

constexpr ::Rewired::IControllerElementTarget*& __cordl_internal_get_SwHhVSuYINuZhGIlrptLZrtNbLix() ;

constexpr int32_t const& __cordl_internal_get_VasWQDtlQVWUqqYvDgUGOCrwAYdp() const;

constexpr int32_t& __cordl_internal_get_VasWQDtlQVWUqqYvDgUGOCrwAYdp() ;

constexpr int32_t const& __cordl_internal_get_WkxgINIjbsWTTmqbfMahTafesXPF() const;

constexpr int32_t& __cordl_internal_get_WkxgINIjbsWTTmqbfMahTafesXPF() ;

constexpr bool const& __cordl_internal_get_ZrjcgFiNPjqdVXeaJiLWARVaoVWnB() const;

constexpr bool& __cordl_internal_get_ZrjcgFiNPjqdVXeaJiLWARVaoVWnB() ;

constexpr ::Rewired::ActionElementMap* const& __cordl_internal_get_oeKxVmqzZvtSojRSxIhmVFOlHsoR() const;

constexpr ::Rewired::ActionElementMap*& __cordl_internal_get_oeKxVmqzZvtSojRSxIhmVFOlHsoR() ;

constexpr int32_t const& __cordl_internal_get_pIBfHRAxGZxBbkXdDHrOUKQDcXqk() const;

constexpr int32_t& __cordl_internal_get_pIBfHRAxGZxBbkXdDHrOUKQDcXqk() ;

constexpr void __cordl_internal_set_ABnIwjcVfyZpUTUDFbccdfXifleg(bool  value) ;

constexpr void __cordl_internal_set_KMgeSlCAqldOlJofIVXuJHoFHmTDb(::Rewired::ControllerMap*  value) ;

constexpr void __cordl_internal_set_NMOAamFRZcxRYGTWTeonbhnkTQmac(::Rewired::IControllerElementTarget*  value) ;

constexpr void __cordl_internal_set_ONAZBLMQiOkuvEfHQnDCRpxNVgZh(int32_t  value) ;

constexpr void __cordl_internal_set_QmvHkIKVAntsJZTBaEoUcdbHjNNjA(::System::Collections::Generic::List_1_Enumerator<::Rewired::ActionElementMap*>  value) ;

constexpr void __cordl_internal_set_RCjFlEyjEgVXUwUfHbXOZhxfOJCh(::Rewired::Utils::TempListPool_TList_1<::Rewired::ActionElementMap*>*  value) ;

constexpr void __cordl_internal_set_SwHhVSuYINuZhGIlrptLZrtNbLix(::Rewired::IControllerElementTarget*  value) ;

constexpr void __cordl_internal_set_VasWQDtlQVWUqqYvDgUGOCrwAYdp(int32_t  value) ;

constexpr void __cordl_internal_set_WkxgINIjbsWTTmqbfMahTafesXPF(int32_t  value) ;

constexpr void __cordl_internal_set_ZrjcgFiNPjqdVXeaJiLWARVaoVWnB(bool  value) ;

constexpr void __cordl_internal_set_oeKxVmqzZvtSojRSxIhmVFOlHsoR(::Rewired::ActionElementMap*  value) ;

constexpr void __cordl_internal_set_pIBfHRAxGZxBbkXdDHrOUKQDcXqk(int32_t  value) ;

/// @brief Method .ctor, addr 0x180d66740, size 0x3cb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method edrBbKMgMUHrnIQQZCtpqhQNenQIb, addr 0x180d700b0, size 0x3cd0, virtual false, abstract: false, final false
inline void edrBbKMgMUHrnIQQZCtpqhQNenQIb() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* i___System__Collections__Generic__IEnumerable_1___Rewired__ActionElementMap__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>* i___System__Collections__Generic__IEnumerator_1___Rewired__ActionElementMap__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method xfxbTIFrlprzjtAGbOjfsTXQNltl, addr 0x181828a00, size 0x10, virtual false, abstract: false, final false
inline void xfxbTIFrlprzjtAGbOjfsTXQNltl() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA(ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA(ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2056};

/// @brief Field pIBfHRAxGZxBbkXdDHrOUKQDcXqk, offset: 0x10, size: 0x4, def value: None
 int32_t  ___pIBfHRAxGZxBbkXdDHrOUKQDcXqk;

/// @brief Field oeKxVmqzZvtSojRSxIhmVFOlHsoR, offset: 0x18, size: 0x8, def value: None
 ::Rewired::ActionElementMap*  ___oeKxVmqzZvtSojRSxIhmVFOlHsoR;

/// @brief Field VasWQDtlQVWUqqYvDgUGOCrwAYdp, offset: 0x20, size: 0x4, def value: None
 int32_t  ___VasWQDtlQVWUqqYvDgUGOCrwAYdp;

/// @brief Field KMgeSlCAqldOlJofIVXuJHoFHmTDb, offset: 0x28, size: 0x8, def value: None
 ::Rewired::ControllerMap*  ___KMgeSlCAqldOlJofIVXuJHoFHmTDb;

/// @brief Field SwHhVSuYINuZhGIlrptLZrtNbLix, offset: 0x30, size: 0x8, def value: None
 ::Rewired::IControllerElementTarget*  ___SwHhVSuYINuZhGIlrptLZrtNbLix;

/// @brief Field NMOAamFRZcxRYGTWTeonbhnkTQmac, offset: 0x38, size: 0x8, def value: None
 ::Rewired::IControllerElementTarget*  ___NMOAamFRZcxRYGTWTeonbhnkTQmac;

/// @brief Field ONAZBLMQiOkuvEfHQnDCRpxNVgZh, offset: 0x40, size: 0x4, def value: None
 int32_t  ___ONAZBLMQiOkuvEfHQnDCRpxNVgZh;

/// @brief Field WkxgINIjbsWTTmqbfMahTafesXPF, offset: 0x44, size: 0x4, def value: None
 int32_t  ___WkxgINIjbsWTTmqbfMahTafesXPF;

/// @brief Field ZrjcgFiNPjqdVXeaJiLWARVaoVWnB, offset: 0x48, size: 0x1, def value: None
 bool  ___ZrjcgFiNPjqdVXeaJiLWARVaoVWnB;

/// @brief Field ABnIwjcVfyZpUTUDFbccdfXifleg, offset: 0x49, size: 0x1, def value: None
 bool  ___ABnIwjcVfyZpUTUDFbccdfXifleg;

/// @brief Field RCjFlEyjEgVXUwUfHbXOZhxfOJCh, offset: 0x50, size: 0x8, def value: None
 ::Rewired::Utils::TempListPool_TList_1<::Rewired::ActionElementMap*>*  ___RCjFlEyjEgVXUwUfHbXOZhxfOJCh;

/// @brief Field QmvHkIKVAntsJZTBaEoUcdbHjNNjA, offset: 0x58, size: 0x18, def value: None
 ::System::Collections::Generic::List_1_Enumerator<::Rewired::ActionElementMap*>  ___QmvHkIKVAntsJZTBaEoUcdbHjNNjA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA, ___pIBfHRAxGZxBbkXdDHrOUKQDcXqk) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA, ___oeKxVmqzZvtSojRSxIhmVFOlHsoR) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA, ___VasWQDtlQVWUqqYvDgUGOCrwAYdp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA, ___KMgeSlCAqldOlJofIVXuJHoFHmTDb) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA, ___SwHhVSuYINuZhGIlrptLZrtNbLix) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA, ___NMOAamFRZcxRYGTWTeonbhnkTQmac) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA, ___ONAZBLMQiOkuvEfHQnDCRpxNVgZh) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA, ___WkxgINIjbsWTTmqbfMahTafesXPF) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA, ___ZrjcgFiNPjqdVXeaJiLWARVaoVWnB) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA, ___ABnIwjcVfyZpUTUDFbccdfXifleg) == 0x49, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA, ___RCjFlEyjEgVXUwUfHbXOZhxfOJCh) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA, ___QmvHkIKVAntsJZTBaEoUcdbHjNNjA) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA) == 0x70, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ControllerType, System.Guid, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerMap
class CORDL_TYPE ControllerMap : public ::System::Object {
public:
// Declarations
using CdFjTCBfIGYQuvczKXllhZYUgCgEA = ::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA;

using FVzKrFWZRsZmSeyJoSPsMGvRSCLC = ::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC;

using FkZONdJFjjMLZoCupvYBGIdftlHF = ::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF;

using RFzbnyjsTMGYYAfCDJMXoSZcKmqqc = ::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc;

using VUaYSUxRconsKnirJbVnHiPKcwAdA = ::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA;

using VgJyaUEjlveKoJqFPMdnTjHQiNvcA = ::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA;

using bRfpjhMYeJHPWezEGjJIpaZTcJfbA = ::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA;

using ldKHGqHgdKcDTKPrpKrWqByCPanEA = ::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA;

 __declspec(property(get=get_AllMaps)) ::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*  AllMaps;

 __declspec(property(get=get_ButtonMaps)) ::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*  ButtonMaps;

/// @brief Field DAkonmJFbQASuMANnYuLlWFRPrJT, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_DAkonmJFbQASuMANnYuLlWFRPrJT, put=setStaticF_DAkonmJFbQASuMANnYuLlWFRPrJT)) int32_t  DAkonmJFbQASuMANnYuLlWFRPrJT;

 __declspec(property(get=WDDbKiHNdAExmjZGBHVxQuWnxcjG)) ::Rewired::Utils::Classes::Data::AList_1<::Rewired::ActionElementMap*>*  EXzXIxFCGqypFhEJCbYHumEHKKoP;

 __declspec(property(get=get_ElementMaps)) ::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*  ElementMaps;

/// @brief Field KdINobnXRdEAoDhXNLeFgTKNUJMX, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_KdINobnXRdEAoDhXNLeFgTKNUJMX, put=__cordl_internal_set_KdINobnXRdEAoDhXNLeFgTKNUJMX)) ::Rewired::Utils::Classes::Data::AList_1<::Rewired::ActionElementMap*>*  KdINobnXRdEAoDhXNLeFgTKNUJMX;

/// @brief Field RvhFfuezxhRZcofEaLaXeautzgiwA, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_RvhFfuezxhRZcofEaLaXeautzgiwA, put=__cordl_internal_set_RvhFfuezxhRZcofEaLaXeautzgiwA)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ActionElementMap*>*  RvhFfuezxhRZcofEaLaXeautzgiwA;

/// @brief Field WuJMZTuaDGEOuUyCfkTqZukbJbQd, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_WuJMZTuaDGEOuUyCfkTqZukbJbQd, put=setStaticF_WuJMZTuaDGEOuUyCfkTqZukbJbQd)) int32_t  WuJMZTuaDGEOuUyCfkTqZukbJbQd;

/// @brief Field _categoryId, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__categoryId, put=__cordl_internal_set__categoryId)) int32_t  _categoryId;

/// @brief Field _controllerId, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__controllerId, put=__cordl_internal_set__controllerId)) int32_t  _controllerId;

/// @brief Field _controllerType, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__controllerType, put=__cordl_internal_set__controllerType)) ::Rewired::ControllerType  _controllerType;

/// @brief Field _enabled, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__enabled, put=__cordl_internal_set__enabled)) bool  _enabled;

/// @brief Field _hardwareGuid, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get__hardwareGuid, put=__cordl_internal_set__hardwareGuid)) ::System::Guid  _hardwareGuid;

/// @brief Field _id, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__id, put=__cordl_internal_set__id)) int32_t  _id;

/// @brief Field _layoutId, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__layoutId, put=__cordl_internal_set__layoutId)) int32_t  _layoutId;

/// @brief Field _name, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _playerId, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__playerId, put=__cordl_internal_set__playerId)) int32_t  _playerId;

/// @brief Field _sourceMapId, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__sourceMapId, put=__cordl_internal_set__sourceMapId)) int32_t  _sourceMapId;

 __declspec(property(get=get_buttonMapCount)) int32_t  buttonMapCount;

 __declspec(property(get=get_categoryId, put=MbsqFicIxYDWRfQbsdgdZOfNeWiu)) int32_t  categoryId;

 __declspec(property(get=get_controller)) ::Rewired::Controller*  controller;

 __declspec(property(get=get_controllerId, put=dtNFGDCiloHyZynoliqHANCGFfRMA)) int32_t  controllerId;

 __declspec(property(get=get_controllerType)) ::Rewired::ControllerType  controllerType;

 __declspec(property(get=get_elementMapCount)) int32_t  elementMapCount;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(get=get_hardwareGuid, put=WQtpuDzpqFeHiiiKjbBLHVtdBRjc)) ::System::Guid  hardwareGuid;

 __declspec(property(get=get_id)) int32_t  id;

 __declspec(property(get=get_isModified, put=set_isModified)) bool  isModified;

 __declspec(property(get=get_layoutId, put=lqtFKbXaKxkWDtEIqEcgmgilHvtx)) int32_t  layoutId;

 __declspec(property(get=get_modifiedTime)) double_t  modifiedTime;

/// @brief Field muXeyNMZmzeQZbpsyKzpUfCdZECG, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_muXeyNMZmzeQZbpsyKzpUfCdZECG, put=__cordl_internal_set_muXeyNMZmzeQZbpsyKzpUfCdZECG)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ActionElementMap*>*  muXeyNMZmzeQZbpsyKzpUfCdZECG;

 __declspec(property(get=get_name, put=rAAAXRHBfLqjKlqUIdNecZCAsnPPA)) ::StringW  name;

 __declspec(property(get=get_player)) ::Rewired::Player*  player;

 __declspec(property(get=get_playerId, put=WUztEXtdepGRaEPIhQIywdUJOVcg)) int32_t  playerId;

/// @brief Field qPdApDGwsHInxbfnQLJLFszYuIMib, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_qPdApDGwsHInxbfnQLJLFszYuIMib, put=__cordl_internal_set_qPdApDGwsHInxbfnQLJLFszYuIMib)) int32_t  qPdApDGwsHInxbfnQLJLFszYuIMib;

/// @brief Field rVnYmhPPfiERuAVqDNBckdgyCEhaA, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_rVnYmhPPfiERuAVqDNBckdgyCEhaA, put=__cordl_internal_set_rVnYmhPPfiERuAVqDNBckdgyCEhaA)) ::Rewired::Utils::Classes::Data::AList_1<::Rewired::ActionElementMap*>*  rVnYmhPPfiERuAVqDNBckdgyCEhaA;

/// @brief Field rcdZtjuBaavThpLbQDkfbuzsApqpA, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_rcdZtjuBaavThpLbQDkfbuzsApqpA, put=__cordl_internal_set_rcdZtjuBaavThpLbQDkfbuzsApqpA)) double_t  rcdZtjuBaavThpLbQDkfbuzsApqpA;

 __declspec(property(get=get_sourceMapId, put=twjyPoWRnJYbTuEtBDKBmEdyAhHX)) int32_t  sourceMapId;

/// @brief Method AcvncWOBRZfsFsHVwWkzKFxeCJox, addr 0x181988810, size 0x1b0, virtual true, abstract: false, final false
inline ::Rewired::ActionElementMap* AcvncWOBRZfsFsHVwWkzKFxeCJox(::Rewired::IControllerElementTarget*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3, ::by_ref<bool>  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method BFQqJjtuQeNMOlmuUAgABvnyJSJLA, addr 0x1819889c0, size 0x190, virtual false, abstract: false, final false
static inline ::Rewired::ControllerMap* BFQqJjtuQeNMOlmuUAgABvnyJSJLA(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method BHDQAHmEhKItiZTtjoocBKPhekXW, addr 0x181988b50, size 0x30, virtual true, abstract: false, final false
inline bool BHDQAHmEhKItiZTtjoocBKPhekXW(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method BakeElementMap, addr 0x181988b80, size 0x80, virtual false, abstract: false, final false
inline void BakeElementMap(::Rewired::ActionElementMap*  map) ;

/// @brief Method ButtonMapsWithAction, addr 0x181988dc0, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* ButtonMapsWithAction(int32_t  actionId) ;

/// @brief Method ButtonMapsWithAction, addr 0x181988e20, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* ButtonMapsWithAction(int32_t  actionId, bool  skipDisabledMaps) ;

/// @brief Method ButtonMapsWithAction, addr 0x181988c00, size 0xd0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* ButtonMapsWithAction(::StringW  actionName) ;

/// @brief Method ButtonMapsWithAction, addr 0x181988cd0, size 0xf0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* ButtonMapsWithAction(::StringW  actionName, bool  skipDisabledMaps) ;

/// @brief Method ClearElementMaps, addr 0x181988e90, size 0xb0, virtual true, abstract: false, final false
inline void ClearElementMaps() ;

/// @brief Method ContainsAction, addr 0x181988fe0, size 0x100, virtual true, abstract: false, final false
inline bool ContainsAction(int32_t  actionId) ;

/// @brief Method ContainsAction, addr 0x181988f40, size 0xa0, virtual false, abstract: false, final false
inline bool ContainsAction(::StringW  actionName) ;

/// @brief Method ContainsElementIdentifier, addr 0x1819890e0, size 0xc0, virtual false, abstract: false, final false
inline bool ContainsElementIdentifier(int32_t  elementIdentifierId) ;

/// @brief Method ContainsElementMap, addr 0x1819891a0, size 0xc0, virtual false, abstract: false, final false
inline bool ContainsElementMap(::Rewired::ActionElementMap*  elementMap) ;

/// @brief Method ContainsElementMap, addr 0x181989260, size 0xc0, virtual false, abstract: false, final false
inline bool ContainsElementMap(int32_t  elementMapId) ;

/// @brief Method ContainsKeyboardKey, addr 0x181989320, size 0x110, virtual false, abstract: false, final false
inline bool ContainsKeyboardKey(::UnityEngine::KeyCode  keyCode, ::Rewired::ModifierKeyFlags  modifierKeys) ;

/// @brief Method Create, addr 0x181989e40, size 0x190, virtual false, abstract: false, final false
static inline ::Rewired::ControllerMap* Create(::Rewired::Controller*  controller, int32_t  categoryId, int32_t  layoutId) ;

/// @brief Method CreateElementMap, addr 0x181989b90, size 0x60, virtual false, abstract: false, final false
inline bool CreateElementMap(int32_t  actionId, ::Rewired::Pole  axisContribution, int32_t  elementIdentifierId, ::Rewired::ControllerElementType  elementType, ::Rewired::AxisRange  axisRange, bool  invert) ;

/// @brief Method CreateElementMap, addr 0x181989a30, size 0x160, virtual true, abstract: false, final false
inline bool CreateElementMap(int32_t  actionId, ::Rewired::Pole  axisContribution, int32_t  elementIdentifierId, ::Rewired::ControllerElementType  elementType, ::Rewired::AxisRange  axisRange, bool  invert, ::by_ref<::Rewired::ActionElementMap*>  result) ;

/// @brief Method CreateElementMap, addr 0x1819898b0, size 0x50, virtual false, abstract: false, final false
inline bool CreateElementMap(int32_t  actionId, ::Rewired::Pole  axisContribution, ::UnityEngine::KeyCode  keyCode, ::Rewired::ModifierKey  modifierKey1, ::Rewired::ModifierKey  modifierKey2, ::Rewired::ModifierKey  modifierKey3) ;

/// @brief Method CreateElementMap, addr 0x181989430, size 0x160, virtual false, abstract: false, final false
inline bool CreateElementMap(int32_t  actionId, ::Rewired::Pole  axisContribution, ::UnityEngine::KeyCode  keyCode, ::Rewired::ModifierKey  modifierKey1, ::Rewired::ModifierKey  modifierKey2, ::Rewired::ModifierKey  modifierKey3, ::by_ref<::Rewired::ActionElementMap*>  result) ;

/// @brief Method CreateElementMap, addr 0x181989bf0, size 0x30, virtual false, abstract: false, final false
inline bool CreateElementMap(int32_t  actionId, ::Rewired::Pole  axisContribution, ::UnityEngine::KeyCode  keyCode, ::Rewired::ModifierKeyFlags  modifierKeyFlags) ;

/// @brief Method CreateElementMap, addr 0x1819897c0, size 0xf0, virtual false, abstract: false, final false
inline bool CreateElementMap(int32_t  actionId, ::Rewired::Pole  axisContribution, ::UnityEngine::KeyCode  keyCode, ::Rewired::ModifierKeyFlags  modifierKeyFlags, ::by_ref<::Rewired::ActionElementMap*>  result) ;

/// @brief Method CreateElementMap, addr 0x181989590, size 0x230, virtual false, abstract: false, final false
inline bool CreateElementMap(::Rewired::ElementAssignment  elementAssignment) ;

/// @brief Method CreateElementMap, addr 0x181989900, size 0x130, virtual false, abstract: false, final false
inline bool CreateElementMap(::Rewired::ElementAssignment  elementAssignment, ::by_ref<::Rewired::ActionElementMap*>  result) ;

/// @brief Method CreateFromJson, addr 0x181989c20, size 0x110, virtual false, abstract: false, final false
static inline ::Rewired::ControllerMap* CreateFromJson(::Rewired::ControllerType  controllerType, ::StringW  jsonString) ;

/// @brief Method CreateFromXml, addr 0x181989d30, size 0x110, virtual false, abstract: false, final false
static inline ::Rewired::ControllerMap* CreateFromXml(::Rewired::ControllerType  controllerType, ::StringW  xmlString) ;

/// @brief Method DeleteButtonMapsWithAction, addr 0x18198a040, size 0x110, virtual false, abstract: false, final false
inline bool DeleteButtonMapsWithAction(int32_t  actionId) ;

/// @brief Method DeleteButtonMapsWithAction, addr 0x181989fd0, size 0x70, virtual false, abstract: false, final false
inline bool DeleteButtonMapsWithAction(::StringW  actionName) ;

/// @brief Method DeleteElementMap, addr 0x18198a150, size 0x90, virtual true, abstract: false, final false
inline bool DeleteElementMap(int32_t  elementMapId) ;

/// @brief Method DeleteElementMapsWithAction, addr 0x18198a260, size 0x10, virtual true, abstract: false, final false
inline bool DeleteElementMapsWithAction(int32_t  actionId) ;

/// @brief Method DeleteElementMapsWithAction, addr 0x18198a1e0, size 0x80, virtual true, abstract: false, final false
inline bool DeleteElementMapsWithAction(::StringW  actionName) ;

/// @brief Method DisableElementAssignmentConflicts, addr 0x18198a270, size 0x90, virtual false, abstract: false, final false
inline int32_t DisableElementAssignmentConflicts(::Rewired::ActionElementMap*  actionElementMap) ;

/// @brief Method DisableElementAssignmentConflicts, addr 0x18198a520, size 0xb0, virtual false, abstract: false, final false
inline int32_t DisableElementAssignmentConflicts(::Rewired::ActionElementMap*  actionElementMap, bool  skipDisabledMaps) ;

/// @brief Method DisableElementAssignmentConflicts, addr 0x18198a300, size 0xc0, virtual false, abstract: false, final false
inline int32_t DisableElementAssignmentConflicts(::Rewired::ElementAssignmentConflictCheck  conflictCheck) ;

/// @brief Method DisableElementAssignmentConflicts, addr 0x18198a3c0, size 0xd0, virtual false, abstract: false, final false
inline int32_t DisableElementAssignmentConflicts(::Rewired::ElementAssignmentConflictCheck  conflictCheck, bool  skipDisabledMaps) ;

/// @brief Method DisableElementAssignmentConflicts, addr 0x18198a490, size 0x90, virtual false, abstract: false, final false
inline int32_t DisableElementAssignmentConflicts(::Rewired::ControllerMap*  controllerMap) ;

/// @brief Method DisableElementAssignmentConflicts, addr 0x18198a5d0, size 0xb0, virtual false, abstract: false, final false
inline int32_t DisableElementAssignmentConflicts(::Rewired::ControllerMap*  controllerMap, bool  skipDisabledMaps) ;

/// @brief Method DoesElementAssignmentConflict, addr 0x18198a980, size 0x20, virtual false, abstract: false, final false
inline bool DoesElementAssignmentConflict(::Rewired::ActionElementMap*  actionElementMap) ;

/// @brief Method DoesElementAssignmentConflict, addr 0x18198a6d0, size 0x120, virtual true, abstract: false, final false
inline bool DoesElementAssignmentConflict(::Rewired::ActionElementMap*  actionElementMap, bool  skipDisabledMaps) ;

/// @brief Method DoesElementAssignmentConflict, addr 0x18198a680, size 0x50, virtual false, abstract: false, final false
inline bool DoesElementAssignmentConflict(::Rewired::ElementAssignmentConflictCheck  conflictCheck) ;

/// @brief Method DoesElementAssignmentConflict, addr 0x18198a7f0, size 0x190, virtual true, abstract: false, final false
inline bool DoesElementAssignmentConflict(::Rewired::ElementAssignmentConflictCheck  conflictCheck, bool  skipDisabledMaps) ;

/// @brief Method DoesElementAssignmentConflict, addr 0x18198ab70, size 0x20, virtual false, abstract: false, final false
inline bool DoesElementAssignmentConflict(::Rewired::ControllerMap*  controllerMap) ;

/// @brief Method DoesElementAssignmentConflict, addr 0x18198a9a0, size 0x1d0, virtual true, abstract: false, final false
inline bool DoesElementAssignmentConflict(::Rewired::ControllerMap*  controllerMap, bool  skipDisabledMaps) ;

/// @brief Method ERRFQYkwqPIqFZnAhLxIiwsgLkrf, addr 0x18198ab90, size 0x80, virtual false, abstract: false, final false
static inline void ERRFQYkwqPIqFZnAhLxIiwsgLkrf(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method ElementAssignmentConflicts, addr 0x181686380, size 0x20, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(::Rewired::ActionElementMap*  actionElementMap) ;

/// @brief Method ElementAssignmentConflicts, addr 0x18198ada0, size 0x80, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(::Rewired::ActionElementMap*  actionElementMap, bool  skipDisabledMaps) ;

/// @brief Method ElementAssignmentConflicts, addr 0x18198acd0, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(::Rewired::ElementAssignmentConflictCheck  conflictCheck) ;

/// @brief Method ElementAssignmentConflicts, addr 0x18198ac10, size 0xa0, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(::Rewired::ElementAssignmentConflictCheck  conflictCheck, bool  skipDisabledMaps) ;

/// @brief Method ElementAssignmentConflicts, addr 0x18198acb0, size 0x20, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(::Rewired::ControllerMap*  controllerMap) ;

/// @brief Method ElementAssignmentConflicts, addr 0x18198ad20, size 0x80, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(::Rewired::ControllerMap*  controllerMap, bool  skipDisabledMaps) ;

/// @brief Method ElementMapsWithAction, addr 0x18198af60, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* ElementMapsWithAction(int32_t  actionId) ;

/// @brief Method ElementMapsWithAction, addr 0x18198aef0, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* ElementMapsWithAction(int32_t  actionId, bool  skipDisabledMaps) ;

/// @brief Method ElementMapsWithAction, addr 0x18198ae20, size 0xd0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* ElementMapsWithAction(::StringW  actionName) ;

/// @brief Method ElementMapsWithAction, addr 0x18198afc0, size 0xf0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* ElementMapsWithAction(::StringW  actionName, bool  skipDisabledMaps) ;

/// @brief Method ElementMapsWithElementTarget, addr 0x18198b4b0, size 0xc0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* ElementMapsWithElementTarget(::Rewired::ControllerElementTarget  elementTarget, int32_t  actionId, bool  skipDisabledMaps) ;

/// @brief Method ElementMapsWithElementTarget, addr 0x18198b200, size 0x140, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* ElementMapsWithElementTarget(::Rewired::ControllerElementTarget  elementTarget, ::StringW  actionName, bool  skipDisabledMaps) ;

/// @brief Method ElementMapsWithElementTarget, addr 0x18198b340, size 0xf0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* ElementMapsWithElementTarget(::Rewired::ControllerElementTarget  elementTarget, bool  skipDisabledMaps) ;

/// @brief Method ElementMapsWithElementTarget, addr 0x18198b0b0, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* ElementMapsWithElementTarget(::Rewired::IControllerElementTarget*  elementTarget, int32_t  actionId, bool  skipDisabledMaps) ;

/// @brief Method ElementMapsWithElementTarget, addr 0x18198b140, size 0xc0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* ElementMapsWithElementTarget(::Rewired::IControllerElementTarget*  elementTarget, ::StringW  actionName, bool  skipDisabledMaps) ;

/// @brief Method ElementMapsWithElementTarget, addr 0x18198b430, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* ElementMapsWithElementTarget(::Rewired::IControllerElementTarget*  elementTarget, bool  skipDisabledMaps) ;

/// @brief Method EzdzPPlVWCcEqPFuFVezgpAqCgUx, addr 0x18198b570, size 0x60, virtual true, abstract: false, final false
inline bool EzdzPPlVWCcEqPFuFVezgpAqCgUx(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method FBhggasQpWsVPuquzYSKLasSUSgg, addr 0x18198b5d0, size 0x60, virtual false, abstract: false, final false
inline bool FBhggasQpWsVPuquzYSKLasSUSgg(::Rewired::IControllerElementTarget*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ForEachButtonMapMatch, addr 0x18198b630, size 0x180, virtual false, abstract: false, final false
inline void ForEachButtonMapMatch(::System::Predicate_1<::Rewired::ActionElementMap*>*  predicate, ::System::Action_1<::Rewired::ActionElementMap*>*  actionToPerform) ;

/// @brief Method ForEachElementAssignmentConflict, addr 0x18198bab0, size 0x20, virtual false, abstract: false, final false
inline int32_t ForEachElementAssignmentConflict(::Rewired::ActionElementMap*  actionElementMap, ::System::Action_1<::Rewired::ActionElementMap*>*  actionToPerform) ;

/// @brief Method ForEachElementAssignmentConflict, addr 0x18198bd30, size 0x1f0, virtual false, abstract: false, final false
inline int32_t ForEachElementAssignmentConflict(::Rewired::ActionElementMap*  actionElementMap, ::System::Action_1<::Rewired::ActionElementMap*>*  actionToPerform, bool  skipDisabledMaps) ;

/// @brief Method ForEachElementAssignmentConflict, addr 0x18198b7b0, size 0x50, virtual false, abstract: false, final false
inline int32_t ForEachElementAssignmentConflict(::Rewired::ElementAssignmentConflictCheck  conflictCheck, ::System::Action_1<::Rewired::ActionElementMap*>*  actionToPerform) ;

/// @brief Method ForEachElementAssignmentConflict, addr 0x18198bad0, size 0x260, virtual false, abstract: false, final false
inline int32_t ForEachElementAssignmentConflict(::Rewired::ElementAssignmentConflictCheck  conflictCheck, ::System::Action_1<::Rewired::ActionElementMap*>*  actionToPerform, bool  skipDisabledMaps) ;

/// @brief Method ForEachElementAssignmentConflict, addr 0x18198b800, size 0x20, virtual false, abstract: false, final false
inline int32_t ForEachElementAssignmentConflict(::Rewired::ControllerMap*  controllerMap, ::System::Action_1<::Rewired::ActionElementMap*>*  actionToPerform) ;

/// @brief Method ForEachElementAssignmentConflict, addr 0x18198b820, size 0x290, virtual false, abstract: false, final false
inline int32_t ForEachElementAssignmentConflict(::Rewired::ControllerMap*  controllerMap, ::System::Action_1<::Rewired::ActionElementMap*>*  actionToPerform, bool  skipDisabledMaps) ;

/// @brief Method ForEachElementMapMatch, addr 0x18198bf20, size 0x180, virtual false, abstract: false, final false
inline void ForEachElementMapMatch(::System::Predicate_1<::Rewired::ActionElementMap*>*  predicate, ::System::Action_1<::Rewired::ActionElementMap*>*  actionToPerform) ;

/// @brief Method GetButtonMap, addr 0x18198c140, size 0x90, virtual false, abstract: false, final false
inline ::Rewired::ActionElementMap* GetButtonMap(int32_t  index) ;

/// @brief Method GetButtonMapMatches, addr 0x18198c0a0, size 0xa0, virtual false, abstract: false, final false
inline int32_t GetButtonMapMatches(::System::Predicate_1<::Rewired::ActionElementMap*>*  predicate, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results) ;

/// @brief Method GetButtonMaps, addr 0x18198c840, size 0x70, virtual false, abstract: false, final false
inline ::ArrayW<::Rewired::ActionElementMap*> GetButtonMaps() ;

/// @brief Method GetButtonMaps, addr 0x18198ca10, size 0x120, virtual false, abstract: false, final false
inline ::ArrayW<::Rewired::ActionElementMap*> GetButtonMaps(bool  skipDisabledMaps) ;

/// @brief Method GetButtonMaps, addr 0x18198c8b0, size 0x160, virtual false, abstract: false, final false
inline int32_t GetButtonMaps(bool  skipDisabledMaps, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results) ;

/// @brief Method GetButtonMapsWithAction, addr 0x18198c410, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Rewired::ActionElementMap*> GetButtonMapsWithAction(int32_t  actionId) ;

/// @brief Method GetButtonMapsWithAction, addr 0x18198c660, size 0x1e0, virtual false, abstract: false, final false
inline ::ArrayW<::Rewired::ActionElementMap*> GetButtonMapsWithAction(int32_t  actionId, bool  skipDisabledMaps) ;

/// @brief Method GetButtonMapsWithAction, addr 0x18198c350, size 0xa0, virtual false, abstract: false, final false
inline ::ArrayW<::Rewired::ActionElementMap*> GetButtonMapsWithAction(::StringW  actionName) ;

/// @brief Method GetButtonMapsWithAction, addr 0x18198c4f0, size 0xb0, virtual false, abstract: false, final false
inline ::ArrayW<::Rewired::ActionElementMap*> GetButtonMapsWithAction(::StringW  actionName, bool  skipDisabledMaps) ;

/// @brief Method GetButtonMapsWithAction, addr 0x18198c3f0, size 0x20, virtual false, abstract: false, final false
inline int32_t GetButtonMapsWithAction(int32_t  actionId, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results) ;

/// @brief Method GetButtonMapsWithAction, addr 0x18198c1d0, size 0x180, virtual false, abstract: false, final false
inline int32_t GetButtonMapsWithAction(int32_t  actionId, bool  skipDisabledMaps, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results) ;

/// @brief Method GetButtonMapsWithAction, addr 0x18198c420, size 0xd0, virtual false, abstract: false, final false
inline int32_t GetButtonMapsWithAction(::StringW  actionName, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results) ;

/// @brief Method GetButtonMapsWithAction, addr 0x18198c5a0, size 0xc0, virtual false, abstract: false, final false
inline int32_t GetButtonMapsWithAction(::StringW  actionName, bool  skipDisabledMaps, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results) ;

/// @brief Method GetButtonNames, addr 0x18198cb30, size 0x180, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetButtonNames() ;

/// @brief Method GetElementMap, addr 0x18198cd50, size 0x110, virtual true, abstract: false, final false
inline ::Rewired::ActionElementMap* GetElementMap(int32_t  elementMapId) ;

/// @brief Method GetElementMapMatches, addr 0x18198ccb0, size 0xa0, virtual false, abstract: false, final false
inline int32_t GetElementMapMatches(::System::Predicate_1<::Rewired::ActionElementMap*>*  predicate, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results) ;

/// @brief Method GetElementMaps, addr 0x18198dd70, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Rewired::ActionElementMap*> GetElementMaps() ;

/// @brief Method GetElementMaps, addr 0x18198dae0, size 0x290, virtual false, abstract: false, final false
inline ::ArrayW<::Rewired::ActionElementMap*> GetElementMaps(bool  skipDisabledMaps) ;

/// @brief Method GetElementMaps, addr 0x18198de50, size 0xc0, virtual false, abstract: false, final false
inline int32_t GetElementMaps(::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results) ;

/// @brief Method GetElementMaps, addr 0x18198dd80, size 0xd0, virtual false, abstract: false, final false
inline int32_t GetElementMaps(bool  skipDisabledMaps, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results) ;

/// @brief Method GetElementMapsWithAction, addr 0x18198cf50, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Rewired::ActionElementMap*> GetElementMapsWithAction(int32_t  actionId) ;

/// @brief Method GetElementMapsWithAction, addr 0x18198d050, size 0x3d0, virtual false, abstract: false, final false
inline ::ArrayW<::Rewired::ActionElementMap*> GetElementMapsWithAction(int32_t  actionId, bool  skipDisabledMaps) ;

/// @brief Method GetElementMapsWithAction, addr 0x18198d4d0, size 0xa0, virtual false, abstract: false, final false
inline ::ArrayW<::Rewired::ActionElementMap*> GetElementMapsWithAction(::StringW  actionName) ;

/// @brief Method GetElementMapsWithAction, addr 0x18198d420, size 0xb0, virtual false, abstract: false, final false
inline ::ArrayW<::Rewired::ActionElementMap*> GetElementMapsWithAction(::StringW  actionName, bool  skipDisabledMaps) ;

/// @brief Method GetElementMapsWithAction, addr 0x18198d020, size 0x30, virtual false, abstract: false, final false
inline int32_t GetElementMapsWithAction(int32_t  actionId, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results) ;

/// @brief Method GetElementMapsWithAction, addr 0x18198cf20, size 0x30, virtual false, abstract: false, final false
inline int32_t GetElementMapsWithAction(int32_t  actionId, bool  skipDisabledMaps, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results) ;

/// @brief Method GetElementMapsWithAction, addr 0x18198ce60, size 0xc0, virtual false, abstract: false, final false
inline int32_t GetElementMapsWithAction(::StringW  actionName, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results) ;

/// @brief Method GetElementMapsWithAction, addr 0x18198cf60, size 0xc0, virtual false, abstract: false, final false
inline int32_t GetElementMapsWithAction(::StringW  actionName, bool  skipDisabledMaps, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results) ;

/// @brief Method GetElementMapsWithElementTarget, addr 0x18198d570, size 0xc0, virtual false, abstract: false, final false
inline int32_t GetElementMapsWithElementTarget(::Rewired::ControllerElementTarget  elementTarget, int32_t  actionId, bool  skipDisabledMaps, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results) ;

/// @brief Method GetElementMapsWithElementTarget, addr 0x18198d8e0, size 0x130, virtual false, abstract: false, final false
inline int32_t GetElementMapsWithElementTarget(::Rewired::ControllerElementTarget  elementTarget, ::StringW  actionName, bool  skipDisabledMaps, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results) ;

/// @brief Method GetElementMapsWithElementTarget, addr 0x18198d7b0, size 0x130, virtual false, abstract: false, final false
inline int32_t GetElementMapsWithElementTarget(::Rewired::ControllerElementTarget  elementTarget, bool  skipDisabledMaps, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results) ;

/// @brief Method GetElementMapsWithElementTarget, addr 0x18198da10, size 0xd0, virtual false, abstract: false, final false
inline int32_t GetElementMapsWithElementTarget(::Rewired::IControllerElementTarget*  elementTarget, int32_t  actionId, bool  skipDisabledMaps, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results) ;

/// @brief Method GetElementMapsWithElementTarget, addr 0x18198d630, size 0xc0, virtual false, abstract: false, final false
inline int32_t GetElementMapsWithElementTarget(::Rewired::IControllerElementTarget*  elementTarget, ::StringW  actionName, bool  skipDisabledMaps, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results) ;

/// @brief Method GetElementMapsWithElementTarget, addr 0x18198d6f0, size 0xc0, virtual false, abstract: false, final false
inline int32_t GetElementMapsWithElementTarget(::Rewired::IControllerElementTarget*  elementTarget, bool  skipDisabledMaps, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results) ;

/// @brief Method GetFirstButtonMapMatch, addr 0x18198df10, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::ActionElementMap* GetFirstButtonMapMatch(::System::Predicate_1<::Rewired::ActionElementMap*>*  predicate) ;

/// @brief Method GetFirstButtonMapWithAction, addr 0x18198e0c0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ActionElementMap* GetFirstButtonMapWithAction(int32_t  actionId) ;

/// @brief Method GetFirstButtonMapWithAction, addr 0x18198df90, size 0x130, virtual false, abstract: false, final false
inline ::Rewired::ActionElementMap* GetFirstButtonMapWithAction(int32_t  actionId, bool  skipDisabledMaps) ;

/// @brief Method GetFirstButtonMapWithAction, addr 0x18198e170, size 0x90, virtual false, abstract: false, final false
inline ::Rewired::ActionElementMap* GetFirstButtonMapWithAction(::StringW  actionName) ;

/// @brief Method GetFirstButtonMapWithAction, addr 0x18198e0d0, size 0xa0, virtual false, abstract: false, final false
inline ::Rewired::ActionElementMap* GetFirstButtonMapWithAction(::StringW  actionName, bool  skipDisabledMaps) ;

/// @brief Method GetFirstElementMapMatch, addr 0x18198e200, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::ActionElementMap* GetFirstElementMapMatch(::System::Predicate_1<::Rewired::ActionElementMap*>*  predicate) ;

/// @brief Method GetFirstElementMapWithAction, addr 0x18198e530, size 0x20, virtual true, abstract: false, final false
inline ::Rewired::ActionElementMap* GetFirstElementMapWithAction(int32_t  actionId) ;

/// @brief Method GetFirstElementMapWithAction, addr 0x18198e280, size 0x160, virtual true, abstract: false, final false
inline ::Rewired::ActionElementMap* GetFirstElementMapWithAction(int32_t  actionId, bool  skipDisabledMaps) ;

/// @brief Method GetFirstElementMapWithAction, addr 0x18198e3e0, size 0xa0, virtual true, abstract: false, final false
inline ::Rewired::ActionElementMap* GetFirstElementMapWithAction(::StringW  actionName) ;

/// @brief Method GetFirstElementMapWithAction, addr 0x18198e480, size 0xb0, virtual false, abstract: false, final false
inline ::Rewired::ActionElementMap* GetFirstElementMapWithAction(::StringW  actionName, bool  skipDisabledMaps) ;

/// @brief Method GetFirstElementMapWithElementTarget, addr 0x18198e740, size 0xc0, virtual false, abstract: false, final false
inline ::Rewired::ActionElementMap* GetFirstElementMapWithElementTarget(::Rewired::ControllerElementTarget  elementTarget, int32_t  actionId, bool  skipDisabledMaps) ;

/// @brief Method GetFirstElementMapWithElementTarget, addr 0x18198e550, size 0x130, virtual false, abstract: false, final false
inline ::Rewired::ActionElementMap* GetFirstElementMapWithElementTarget(::Rewired::ControllerElementTarget  elementTarget, ::StringW  actionName, bool  skipDisabledMaps) ;

/// @brief Method GetFirstElementMapWithElementTarget, addr 0x18198e800, size 0x140, virtual false, abstract: false, final false
inline ::Rewired::ActionElementMap* GetFirstElementMapWithElementTarget(::Rewired::ControllerElementTarget  elementTarget, bool  skipDisabledMaps) ;

/// @brief Method GetFirstElementMapWithElementTarget, addr 0x18198e9f0, size 0xb0, virtual false, abstract: false, final false
inline ::Rewired::ActionElementMap* GetFirstElementMapWithElementTarget(::Rewired::IControllerElementTarget*  elementTarget, int32_t  actionId, bool  skipDisabledMaps) ;

/// @brief Method GetFirstElementMapWithElementTarget, addr 0x18198e940, size 0xb0, virtual false, abstract: false, final false
inline ::Rewired::ActionElementMap* GetFirstElementMapWithElementTarget(::Rewired::IControllerElementTarget*  elementTarget, ::StringW  actionName, bool  skipDisabledMaps) ;

/// @brief Method GetFirstElementMapWithElementTarget, addr 0x18198e680, size 0xc0, virtual false, abstract: false, final false
inline ::Rewired::ActionElementMap* GetFirstElementMapWithElementTarget(::Rewired::IControllerElementTarget*  elementTarget, bool  skipDisabledMaps) ;

/// @brief Method GpwEnOAmbbpYWAllKFfJvNyoacamc, addr 0x18198eaa0, size 0xa0, virtual false, abstract: false, final false
inline void GpwEnOAmbbpYWAllKFfJvNyoacamc(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method IMkRrBrogFIgaaqNqHGwCNZhOiTAB, addr 0x18198eb40, size 0x90, virtual false, abstract: false, final false
inline ::Rewired::ControllerTemplateMap* IMkRrBrogFIgaaqNqHGwCNZhOiTAB(::Rewired::IControllerTemplate*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method MbsqFicIxYDWRfQbsdgdZOfNeWiu, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void MbsqFicIxYDWRfQbsdgdZOfNeWiu(int32_t  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ControllerMap* New_ctor() ;

static inline ::Rewired::ControllerMap* New_ctor(::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method NtgmqIxzxTdDCaNgwDPPGQoEaTkKA, addr 0x18198ebd0, size 0x10, virtual false, abstract: false, final false
inline bool NtgmqIxzxTdDCaNgwDPPGQoEaTkKA(::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method OckQUVtpXhosZHYrYRQvNyTUGffg, addr 0x18198ebe0, size 0x180, virtual false, abstract: false, final false
inline ::Rewired::ActionElementMap* OckQUVtpXhosZHYrYRQvNyTUGffg(::System::Predicate_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method OkykfyLHuPWgAooVKCazklDaaUGe, addr 0x18198ed60, size 0xe0, virtual false, abstract: false, final false
inline void OkykfyLHuPWgAooVKCazklDaaUGe(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method PFxxoBJWdQTEMqTyYPsybeSObVZHA, addr 0x18198ee40, size 0x1d0, virtual true, abstract: false, final false
inline int32_t PFxxoBJWdQTEMqTyYPsybeSObVZHA(::Rewired::ElementAssignmentConflictCheck  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method PvICpsylUhECoPXcmjUfTUtdVhdf, addr 0x18198f010, size 0x20, virtual false, abstract: false, final false
static inline bool PvICpsylUhECoPXcmjUfTUtdVhdf() ;

/// @brief Method QQAxypronmczEumYuZDWBduRGEVb, addr 0x18198f030, size 0xc0, virtual false, abstract: false, final false
inline void QQAxypronmczEumYuZDWBduRGEVb(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method RemoveElementAssignmentConflicts, addr 0x18198f560, size 0x20, virtual false, abstract: false, final false
inline int32_t RemoveElementAssignmentConflicts(::Rewired::ActionElementMap*  actionElementMap) ;

/// @brief Method RemoveElementAssignmentConflicts, addr 0x18198f580, size 0x170, virtual true, abstract: false, final false
inline int32_t RemoveElementAssignmentConflicts(::Rewired::ActionElementMap*  actionElementMap, bool  skipDisabledMaps) ;

/// @brief Method RemoveElementAssignmentConflicts, addr 0x18198f0f0, size 0x50, virtual false, abstract: false, final false
inline int32_t RemoveElementAssignmentConflicts(::Rewired::ElementAssignmentConflictCheck  conflictCheck) ;

/// @brief Method RemoveElementAssignmentConflicts, addr 0x18198f370, size 0x1f0, virtual true, abstract: false, final false
inline int32_t RemoveElementAssignmentConflicts(::Rewired::ElementAssignmentConflictCheck  conflictCheck, bool  skipDisabledMaps) ;

/// @brief Method RemoveElementAssignmentConflicts, addr 0x18198f140, size 0x20, virtual false, abstract: false, final false
inline int32_t RemoveElementAssignmentConflicts(::Rewired::ControllerMap*  controllerMap) ;

/// @brief Method RemoveElementAssignmentConflicts, addr 0x18198f160, size 0x210, virtual true, abstract: false, final false
inline int32_t RemoveElementAssignmentConflicts(::Rewired::ControllerMap*  controllerMap, bool  skipDisabledMaps) ;

/// @brief Method ReplaceElementMap, addr 0x18198f6f0, size 0x40, virtual false, abstract: false, final false
inline bool ReplaceElementMap(::Rewired::ElementAssignment  elementAssignment) ;

/// @brief Method ReplaceElementMap, addr 0x18198fae0, size 0x140, virtual false, abstract: false, final false
inline bool ReplaceElementMap(::Rewired::ElementAssignment  elementAssignment, ::by_ref<::Rewired::ActionElementMap*>  result) ;

/// @brief Method ReplaceElementMap, addr 0x18198f7e0, size 0x70, virtual false, abstract: false, final false
inline bool ReplaceElementMap(int32_t  elementMapId, int32_t  actionId, ::Rewired::Pole  axisContribution, int32_t  elementIdentifierId, ::Rewired::ControllerElementType  elementType, ::Rewired::AxisRange  axisRange, bool  invert) ;

/// @brief Method ReplaceElementMap, addr 0x18198f850, size 0x190, virtual true, abstract: false, final false
inline bool ReplaceElementMap(int32_t  elementMapId, int32_t  actionId, ::Rewired::Pole  axisContribution, int32_t  elementIdentifierId, ::Rewired::ControllerElementType  elementType, ::Rewired::AxisRange  axisRange, bool  invert, ::by_ref<::Rewired::ActionElementMap*>  result) ;

/// @brief Method ReplaceElementMap, addr 0x18198f9e0, size 0x50, virtual false, abstract: false, final false
inline bool ReplaceElementMap(int32_t  elementMapId, int32_t  actionId, ::Rewired::Pole  axisContribution, ::UnityEngine::KeyCode  keyCode, ::Rewired::ModifierKey  modifierKey1, ::Rewired::ModifierKey  modifierKey2, ::Rewired::ModifierKey  modifierKey3) ;

/// @brief Method ReplaceElementMap, addr 0x18198fc20, size 0x200, virtual false, abstract: false, final false
inline bool ReplaceElementMap(int32_t  elementMapId, int32_t  actionId, ::Rewired::Pole  axisContribution, ::UnityEngine::KeyCode  keyCode, ::Rewired::ModifierKey  modifierKey1, ::Rewired::ModifierKey  modifierKey2, ::Rewired::ModifierKey  modifierKey3, ::by_ref<::Rewired::ActionElementMap*>  result) ;

/// @brief Method ReplaceElementMap, addr 0x18198f730, size 0xb0, virtual false, abstract: false, final false
inline bool ReplaceElementMap(int32_t  elementMapId, int32_t  actionId, ::Rewired::Pole  axisContribution, ::UnityEngine::KeyCode  keyCode, ::Rewired::ModifierKeyFlags  modifierKeyFlags) ;

/// @brief Method ReplaceElementMap, addr 0x18198fa30, size 0xb0, virtual false, abstract: false, final false
inline bool ReplaceElementMap(int32_t  elementMapId, int32_t  actionId, ::Rewired::Pole  axisContribution, ::UnityEngine::KeyCode  keyCode, ::Rewired::ModifierKeyFlags  modifierKeyFlags, ::by_ref<::Rewired::ActionElementMap*>  result) ;

/// @brief Method ReplaceOrCreateElementMap, addr 0x18198fe20, size 0x140, virtual false, abstract: false, final false
inline bool ReplaceOrCreateElementMap(::Rewired::ElementAssignment  elementAssignment) ;

/// @brief Method ReplaceOrCreateElementMap, addr 0x18198ff60, size 0xf0, virtual false, abstract: false, final false
inline bool ReplaceOrCreateElementMap(::Rewired::ElementAssignment  elementAssignment, ::by_ref<::Rewired::ActionElementMap*>  result) ;

/// @brief Method SetAllButtonMapsEnabled, addr 0x181990050, size 0xe0, virtual false, abstract: false, final false
inline int32_t SetAllButtonMapsEnabled(bool  state) ;

/// @brief Method SetAllElementMapsEnabled, addr 0x181990130, size 0xe0, virtual false, abstract: false, final false
inline int32_t SetAllElementMapsEnabled(bool  state) ;

/// @brief Method SuEiwLhLGOaNjfRZPbsYEEladaPfA, addr 0x181990210, size 0x70, virtual false, abstract: false, final false
inline void SuEiwLhLGOaNjfRZPbsYEEladaPfA(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method TBxFnwilcTrIPBInHNDjVnacEjMfc, addr 0x181990280, size 0x50, virtual false, abstract: false, final false
inline void TBxFnwilcTrIPBInHNDjVnacEjMfc() ;

/// @brief Method TauLCCMFsWvYNVkjMRoXIeCbgykg, addr 0x1819902d0, size 0x30, virtual false, abstract: false, final false
static inline int32_t TauLCCMFsWvYNVkjMRoXIeCbgykg() ;

/// @brief Method TdFAtToNAhcdxAruwNljgmVAzlhac, addr 0x181990300, size 0x80, virtual false, abstract: false, final false
inline int32_t TdFAtToNAhcdxAruwNljgmVAzlhac(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ToControllerTemplateMap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Rewired::ControllerTemplateMap* ToControllerTemplateMap() ;

/// @brief Method ToControllerTemplateMap, addr 0x181990580, size 0x210, virtual false, abstract: false, final false
inline ::Rewired::ControllerTemplateMap* ToControllerTemplateMap(::System::Type*  templateInterfaceType) ;

/// @brief Method ToControllerTemplateMap, addr 0x181990380, size 0x200, virtual false, abstract: false, final false
inline ::Rewired::ControllerTemplateMap* ToControllerTemplateMap(::System::Guid  templateTypeGuid) ;

/// @brief Method ToJsonString, addr 0x181990790, size 0x170, virtual false, abstract: false, final false
inline ::StringW ToJsonString() ;

/// @brief Method ToXmlString, addr 0x181990900, size 0x170, virtual false, abstract: false, final false
inline ::StringW ToXmlString() ;

/// @brief Method UOEDaEJadpAnWBgeAbxeyNjAGfGc, addr 0x181990a70, size 0x60, virtual true, abstract: false, final false
inline ::Rewired::ActionElementMap* UOEDaEJadpAnWBgeAbxeyNjAGfGc(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method UgMAvCfiSoGRcTfWnRzzewvtWTvF, addr 0x181990ad0, size 0xa0, virtual false, abstract: false, final false
inline void UgMAvCfiSoGRcTfWnRzzewvtWTvF(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method VAmLHOxLphkSjQhYRXEjXkuTptDO, addr 0x181990b70, size 0xc0, virtual false, abstract: false, final false
inline int32_t VAmLHOxLphkSjQhYRXEjXkuTptDO(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method VKXrNiFYToOjzXQcovSKhXQPKJWr, addr 0x181990c30, size 0x250, virtual true, abstract: false, final false
inline bool VKXrNiFYToOjzXQcovSKhXQPKJWr(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method VXZjvOkoQnctcMmrTbfBMXUiGmqq, addr 0x181990e80, size 0x100, virtual true, abstract: false, final false
inline int32_t VXZjvOkoQnctcMmrTbfBMXUiGmqq(int32_t  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method WDDbKiHNdAExmjZGBHVxQuWnxcjG, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::AList_1<::Rewired::ActionElementMap*>* WDDbKiHNdAExmjZGBHVxQuWnxcjG() ;

/// @brief Method WQtpuDzpqFeHiiiKjbBLHVtdBRjc, addr 0x1816eaa00, size 0x10, virtual false, abstract: false, final false
inline void WQtpuDzpqFeHiiiKjbBLHVtdBRjc(::System::Guid  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method WUztEXtdepGRaEPIhQIywdUJOVcg, addr 0x1803d5ac0, size 0x10, virtual false, abstract: false, final false
inline void WUztEXtdepGRaEPIhQIywdUJOVcg(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method XdvAEImdTlOrlcBFDCONqGkoejBY, addr 0x181990f80, size 0x210, virtual false, abstract: false, final false
inline int32_t XdvAEImdTlOrlcBFDCONqGkoejBY(::System::Predicate_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method YNBdWzYUAiYDbLJizKjwljMYSexn, addr 0x181991190, size 0x20, virtual false, abstract: false, final false
static inline void YNBdWzYUAiYDbLJizKjwljMYSexn() ;

/// @brief Method ZgubfYnPQzxALwwEDHmGGzMplWSI, addr 0x1819911b0, size 0x100, virtual false, abstract: false, final false
inline bool ZgubfYnPQzxALwwEDHmGGzMplWSI(::StringW  _cordl_fixed_empty_name_whitespace) ;

constexpr ::Rewired::Utils::Classes::Data::AList_1<::Rewired::ActionElementMap*>* const& __cordl_internal_get_KdINobnXRdEAoDhXNLeFgTKNUJMX() const;

constexpr ::Rewired::Utils::Classes::Data::AList_1<::Rewired::ActionElementMap*>*& __cordl_internal_get_KdINobnXRdEAoDhXNLeFgTKNUJMX() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ActionElementMap*>* const& __cordl_internal_get_RvhFfuezxhRZcofEaLaXeautzgiwA() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ActionElementMap*>*& __cordl_internal_get_RvhFfuezxhRZcofEaLaXeautzgiwA() ;

constexpr int32_t const& __cordl_internal_get__categoryId() const;

constexpr int32_t& __cordl_internal_get__categoryId() ;

constexpr int32_t const& __cordl_internal_get__controllerId() const;

constexpr int32_t& __cordl_internal_get__controllerId() ;

constexpr ::Rewired::ControllerType const& __cordl_internal_get__controllerType() const;

constexpr ::Rewired::ControllerType& __cordl_internal_get__controllerType() ;

constexpr bool const& __cordl_internal_get__enabled() const;

constexpr bool& __cordl_internal_get__enabled() ;

constexpr ::System::Guid const& __cordl_internal_get__hardwareGuid() const;

constexpr ::System::Guid& __cordl_internal_get__hardwareGuid() ;

constexpr int32_t const& __cordl_internal_get__id() const;

constexpr int32_t& __cordl_internal_get__id() ;

constexpr int32_t const& __cordl_internal_get__layoutId() const;

constexpr int32_t& __cordl_internal_get__layoutId() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr int32_t const& __cordl_internal_get__playerId() const;

constexpr int32_t& __cordl_internal_get__playerId() ;

constexpr int32_t const& __cordl_internal_get__sourceMapId() const;

constexpr int32_t& __cordl_internal_get__sourceMapId() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ActionElementMap*>* const& __cordl_internal_get_muXeyNMZmzeQZbpsyKzpUfCdZECG() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ActionElementMap*>*& __cordl_internal_get_muXeyNMZmzeQZbpsyKzpUfCdZECG() ;

constexpr int32_t const& __cordl_internal_get_qPdApDGwsHInxbfnQLJLFszYuIMib() const;

constexpr int32_t& __cordl_internal_get_qPdApDGwsHInxbfnQLJLFszYuIMib() ;

constexpr ::Rewired::Utils::Classes::Data::AList_1<::Rewired::ActionElementMap*>* const& __cordl_internal_get_rVnYmhPPfiERuAVqDNBckdgyCEhaA() const;

constexpr ::Rewired::Utils::Classes::Data::AList_1<::Rewired::ActionElementMap*>*& __cordl_internal_get_rVnYmhPPfiERuAVqDNBckdgyCEhaA() ;

constexpr double_t const& __cordl_internal_get_rcdZtjuBaavThpLbQDkfbuzsApqpA() const;

constexpr double_t& __cordl_internal_get_rcdZtjuBaavThpLbQDkfbuzsApqpA() ;

constexpr void __cordl_internal_set_KdINobnXRdEAoDhXNLeFgTKNUJMX(::Rewired::Utils::Classes::Data::AList_1<::Rewired::ActionElementMap*>*  value) ;

constexpr void __cordl_internal_set_RvhFfuezxhRZcofEaLaXeautzgiwA(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ActionElementMap*>*  value) ;

constexpr void __cordl_internal_set__categoryId(int32_t  value) ;

constexpr void __cordl_internal_set__controllerId(int32_t  value) ;

constexpr void __cordl_internal_set__controllerType(::Rewired::ControllerType  value) ;

constexpr void __cordl_internal_set__enabled(bool  value) ;

constexpr void __cordl_internal_set__hardwareGuid(::System::Guid  value) ;

constexpr void __cordl_internal_set__id(int32_t  value) ;

constexpr void __cordl_internal_set__layoutId(int32_t  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__playerId(int32_t  value) ;

constexpr void __cordl_internal_set__sourceMapId(int32_t  value) ;

constexpr void __cordl_internal_set_muXeyNMZmzeQZbpsyKzpUfCdZECG(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ActionElementMap*>*  value) ;

constexpr void __cordl_internal_set_qPdApDGwsHInxbfnQLJLFszYuIMib(int32_t  value) ;

constexpr void __cordl_internal_set_rVnYmhPPfiERuAVqDNBckdgyCEhaA(::Rewired::Utils::Classes::Data::AList_1<::Rewired::ActionElementMap*>*  value) ;

constexpr void __cordl_internal_set_rcdZtjuBaavThpLbQDkfbuzsApqpA(double_t  value) ;

/// @brief Method .ctor, addr 0x1819912b0, size 0x180, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x181991430, size 0x370, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method aaQTxsekONgKusaYgfEXaLITyQoF, addr 0x1819917a0, size 0xb0, virtual false, abstract: false, final false
inline void aaQTxsekONgKusaYgfEXaLITyQoF(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method ajKoMaAAmGHwLGeuXdcQZSSQXuENA, addr 0x181991850, size 0x780, virtual true, abstract: false, final false
inline void ajKoMaAAmGHwLGeuXdcQZSSQXuENA(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method cVoDOuXjZVfuRULcFpYFAaWjWzNs, addr 0x181991fd0, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::SerializedObject* cVoDOuXjZVfuRULcFpYFAaWjWzNs() ;

/// @brief Method dMBKVOfJLneSYXAhHQjBjGPUHtUW, addr 0x181992040, size 0x110, virtual false, abstract: false, final false
inline int32_t dMBKVOfJLneSYXAhHQjBjGPUHtUW(bool  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method dtNFGDCiloHyZynoliqHANCGFfRMA, addr 0x1804a5a80, size 0x10, virtual false, abstract: false, final false
inline void dtNFGDCiloHyZynoliqHANCGFfRMA(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method fBgtSPJkouWLtvCrFbpROMcIcuYcA, addr 0x181992150, size 0xd0, virtual true, abstract: false, final false
inline int32_t fBgtSPJkouWLtvCrFbpROMcIcuYcA(::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method gSrLmAiPkYKhtYZurIzrCrHRFWQK, addr 0x181992220, size 0x100, virtual false, abstract: false, final false
inline bool gSrLmAiPkYKhtYZurIzrCrHRFWQK(::StringW  _cordl_fixed_empty_name_whitespace) ;

static inline int32_t getStaticF_DAkonmJFbQASuMANnYuLlWFRPrJT() ;

static inline int32_t getStaticF_WuJMZTuaDGEOuUyCfkTqZukbJbQd() ;

/// @brief Method get_AllMaps, addr 0x181992320, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>* get_AllMaps() ;

/// @brief Method get_ButtonMaps, addr 0x181992380, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>* get_ButtonMaps() ;

/// @brief Method get_ElementMaps, addr 0x181992320, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>* get_ElementMaps() ;

/// @brief Method get_buttonMapCount, addr 0x1819923e0, size 0x70, virtual false, abstract: false, final false
inline int32_t get_buttonMapCount() ;

/// @brief Method get_categoryId, addr 0x181992450, size 0x60, virtual false, abstract: false, final false
inline int32_t get_categoryId() ;

/// @brief Method get_controller, addr 0x181992570, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::Controller* get_controller() ;

/// @brief Method get_controllerId, addr 0x1819924b0, size 0x60, virtual false, abstract: false, final false
inline int32_t get_controllerId() ;

/// @brief Method get_controllerType, addr 0x181992510, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::ControllerType get_controllerType() ;

/// @brief Method get_elementMapCount, addr 0x1819925f0, size 0x70, virtual false, abstract: false, final false
inline int32_t get_elementMapCount() ;

/// @brief Method get_enabled, addr 0x181992660, size 0x60, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_hardwareGuid, addr 0x1819926c0, size 0x90, virtual false, abstract: false, final false
inline ::System::Guid get_hardwareGuid() ;

/// @brief Method get_id, addr 0x181992750, size 0x60, virtual false, abstract: false, final false
inline int32_t get_id() ;

/// @brief Method get_isModified, addr 0x1819927b0, size 0xa0, virtual false, abstract: false, final false
inline bool get_isModified() ;

/// @brief Method get_layoutId, addr 0x181992850, size 0x60, virtual false, abstract: false, final false
inline int32_t get_layoutId() ;

/// @brief Method get_modifiedTime, addr 0x1819928b0, size 0xb0, virtual false, abstract: false, final false
inline double_t get_modifiedTime() ;

/// @brief Method get_name, addr 0x181992960, size 0x70, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_player, addr 0x181992a30, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::Player* get_player() ;

/// @brief Method get_playerId, addr 0x1819929d0, size 0x60, virtual false, abstract: false, final false
inline int32_t get_playerId() ;

/// @brief Method get_sourceMapId, addr 0x181992aa0, size 0x60, virtual false, abstract: false, final false
inline int32_t get_sourceMapId() ;

/// @brief Method hXBTMlXsAYinehLhebvXeqUJPEhEb, addr 0x181992b00, size 0x160, virtual true, abstract: false, final false
inline int32_t hXBTMlXsAYinehLhebvXeqUJPEhEb(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method ibloojEeCgOrkuPOsyFoEnFuIHSjA, addr 0x181992c60, size 0xc0, virtual false, abstract: false, final false
static inline ::Rewired::ControllerMap* ibloojEeCgOrkuPOsyFoEnFuIHSjA(::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method jDhfMCcRnsPTAamUAcaOJHuSimemc, addr 0x181992d20, size 0x100, virtual true, abstract: false, final false
inline int32_t jDhfMCcRnsPTAamUAcaOJHuSimemc(int32_t  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method jEWbvcfBicRFfqHvlHBJvGvnqVqQ, addr 0x181992e20, size 0x120, virtual false, abstract: false, final false
inline void jEWbvcfBicRFfqHvlHBJvGvnqVqQ(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method lTJDUPjQjcfvAxEBFMdsjaHVbDFGA, addr 0x181992f40, size 0x230, virtual true, abstract: false, final false
inline int32_t lTJDUPjQjcfvAxEBFMdsjaHVbDFGA(::Rewired::IControllerElementTarget*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, ::by_ref<bool>  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method lqtFKbXaKxkWDtEIqEcgmgilHvtx, addr 0x1802f43d0, size 0x10, virtual false, abstract: false, final false
inline void lqtFKbXaKxkWDtEIqEcgmgilHvtx(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method lreiQkZaXZREXLsxDuFlqSxRDxzp, addr 0x181993170, size 0x1e0, virtual true, abstract: false, final false
inline int32_t lreiQkZaXZREXLsxDuFlqSxRDxzp(::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method oltRTMgRSzcoCKVCWrwQzdnuAffN, addr 0x181993350, size 0xf0, virtual true, abstract: false, final false
inline bool oltRTMgRSzcoCKVCWrwQzdnuAffN(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method qWnJJxCCRRIQOubeAisTkhGTvnue, addr 0x181993440, size 0x20, virtual true, abstract: false, final false
inline int32_t qWnJJxCCRRIQOubeAisTkhGTvnue(::System::Predicate_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method rAAAXRHBfLqjKlqUIdNecZCAsnPPA, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void rAAAXRHBfLqjKlqUIdNecZCAsnPPA(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method sJKzqIFNdhLHWFqpnchEmnOuDAxL, addr 0x181993460, size 0x10, virtual true, abstract: false, final false
inline ::Rewired::ActionElementMap* sJKzqIFNdhLHWFqpnchEmnOuDAxL(::System::Predicate_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline void setStaticF_DAkonmJFbQASuMANnYuLlWFRPrJT(int32_t  value) ;

static inline void setStaticF_WuJMZTuaDGEOuUyCfkTqZukbJbQd(int32_t  value) ;

/// @brief Method set_enabled, addr 0x180323260, size 0x10, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method set_isModified, addr 0x181993470, size 0xc0, virtual false, abstract: false, final false
inline void set_isModified(bool  value) ;

/// @brief Method twjyPoWRnJYbTuEtBDKBmEdyAhHX, addr 0x1803924c0, size 0x10, virtual false, abstract: false, final false
inline void twjyPoWRnJYbTuEtBDKBmEdyAhHX(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method xeNmxRCcnLhQUGTMomHoEtxipYbHb, addr 0x181993530, size 0x140, virtual false, abstract: false, final false
inline int32_t xeNmxRCcnLhQUGTMomHoEtxipYbHb(int32_t  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method yVAlHkWHXDxolMwEeHLcoCfrGpEkA, addr 0x181993670, size 0xb0, virtual true, abstract: false, final false
inline int32_t yVAlHkWHXDxolMwEeHLcoCfrGpEkA(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method zMzBSQtvixhIqSIuOWlRNPNdWvwd, addr 0x181993720, size 0x40, virtual false, abstract: false, final false
static inline void zMzBSQtvixhIqSIuOWlRNPNdWvwd() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerMap(ControllerMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerMap(ControllerMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2057};

/// @brief Field _id, offset: 0x10, size: 0x4, def value: None
 int32_t  ____id;

/// @brief Field _sourceMapId, offset: 0x14, size: 0x4, def value: None
 int32_t  ____sourceMapId;

/// @brief Field _categoryId, offset: 0x18, size: 0x4, def value: None
 int32_t  ____categoryId;

/// @brief Field _layoutId, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____layoutId;

/// @brief Field _name, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____name;

/// @brief Field _hardwareGuid, offset: 0x28, size: 0x10, def value: None
 ::System::Guid  ____hardwareGuid;

/// @brief Field _enabled, offset: 0x38, size: 0x1, def value: None
 bool  ____enabled;

/// @brief Field qPdApDGwsHInxbfnQLJLFszYuIMib, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___qPdApDGwsHInxbfnQLJLFszYuIMib;

/// @brief Field rcdZtjuBaavThpLbQDkfbuzsApqpA, offset: 0x40, size: 0x8, def value: None
 double_t  ___rcdZtjuBaavThpLbQDkfbuzsApqpA;

/// @brief Field KdINobnXRdEAoDhXNLeFgTKNUJMX, offset: 0x48, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::AList_1<::Rewired::ActionElementMap*>*  ___KdINobnXRdEAoDhXNLeFgTKNUJMX;

/// @brief Field RvhFfuezxhRZcofEaLaXeautzgiwA, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ActionElementMap*>*  ___RvhFfuezxhRZcofEaLaXeautzgiwA;

/// @brief Field rVnYmhPPfiERuAVqDNBckdgyCEhaA, offset: 0x58, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::AList_1<::Rewired::ActionElementMap*>*  ___rVnYmhPPfiERuAVqDNBckdgyCEhaA;

/// @brief Field muXeyNMZmzeQZbpsyKzpUfCdZECG, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ActionElementMap*>*  ___muXeyNMZmzeQZbpsyKzpUfCdZECG;

/// @brief Field _playerId, offset: 0x68, size: 0x4, def value: None
 int32_t  ____playerId;

/// @brief Field _controllerId, offset: 0x6c, size: 0x4, def value: None
 int32_t  ____controllerId;

/// @brief Field _controllerType, offset: 0x70, size: 0x4, def value: None
 ::Rewired::ControllerType  ____controllerType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerMap, ____id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap, ____sourceMapId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap, ____categoryId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap, ____layoutId) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap, ____name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap, ____hardwareGuid) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap, ____enabled) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap, ___qPdApDGwsHInxbfnQLJLFszYuIMib) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap, ___rcdZtjuBaavThpLbQDkfbuzsApqpA) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap, ___KdINobnXRdEAoDhXNLeFgTKNUJMX) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap, ___RvhFfuezxhRZcofEaLaXeautzgiwA) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap, ___rVnYmhPPfiERuAVqDNBckdgyCEhaA) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap, ___muXeyNMZmzeQZbpsyKzpUfCdZECG) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap, ____playerId) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap, ____controllerId) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerMap, ____controllerType) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerMap) == 0x78, "Size mismatch!");

} // namespace end def Rewired

#pragma once
// IWYU pragma private; include "Rewired/ControllerMap.hpp"
#include "Rewired/zzzz__ControllerType_impl.hpp"
#include "Rewired/zzzz__ElementAssignmentConflictCheck_impl.hpp"
#include "Rewired/zzzz__ElementAssignmentConflictInfo_impl.hpp"
#include "Rewired/zzzz__ElementAssignment_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__ControllerMap_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__AList_1_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__SerializedObject_def.hpp"
#include "Rewired/Utils/zzzz__TempListPool_def.hpp"
#include "Rewired/zzzz__ActionElementMap_def.hpp"
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__ControllerElementTarget_def.hpp"
#include "Rewired/zzzz__ControllerElementType_def.hpp"
#include "Rewired/zzzz__ControllerMap_def.hpp"
#include "Rewired/zzzz__ControllerTemplateMap_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__ElementAssignmentConflictCheck_def.hpp"
#include "Rewired/zzzz__ElementAssignmentConflictInfo_def.hpp"
#include "Rewired/zzzz__ElementAssignment_def.hpp"
#include "Rewired/zzzz__IControllerElementTarget_def.hpp"
#include "Rewired/zzzz__IControllerTemplate_def.hpp"
#include "Rewired/zzzz__ModifierKeyFlags_def.hpp"
#include "Rewired/zzzz__ModifierKey_def.hpp"
#include "Rewired/zzzz__Player_def.hpp"
#include "Rewired/zzzz__Pole_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc.RuERtxrkJGVFFogLqozswWbMLQJD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc* (*)()>(&::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc::RuERtxrkJGVFFogLqozswWbMLQJD)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819a7030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc*>(),
                        {"RuERtxrkJGVFFogLqozswWbMLQJD", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc::*)(::Rewired::ActionElementMap*, ::Rewired::ActionElementMap*)>(&::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc::Compare)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1819a6f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc*>(),
                        {"Compare", {}, {::i2c::type_of<::Rewired::ActionElementMap*>(), ::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc::*)()>(&::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc::setStaticF_QmlvRYqwOXFJdKsKPjBbgHFlbxnAA(::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc*  value)  {
::cordl_internals::setStaticField<::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc*, "QmlvRYqwOXFJdKsKPjBbgHFlbxnAA", ::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc*>(std::forward<::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc*>(value));
}
inline ::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc* Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc::getStaticF_QmlvRYqwOXFJdKsKPjBbgHFlbxnAA()  {
return ::cordl_internals::getStaticField<::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc*, "QmlvRYqwOXFJdKsKPjBbgHFlbxnAA", ::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc*>();
}
inline ::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc* Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc::RuERtxrkJGVFFogLqozswWbMLQJD()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc*>(),
                        {"RuERtxrkJGVFFogLqozswWbMLQJD", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc*>(nullptr, ___internal_method);
}
inline int32_t Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc::Compare(::Rewired::ActionElementMap*  x, ::Rewired::ActionElementMap*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc*>(),
                        {"Compare", {}, {::i2c::type_of<::Rewired::ActionElementMap*>(), ::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline void Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc* Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Rewired::ActionElementMap*>"
constexpr  Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc::operator ::System::Collections::Generic::IComparer_1<::Rewired::ActionElementMap*>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Rewired::ActionElementMap*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Rewired::ActionElementMap*>"
constexpr ::System::Collections::Generic::IComparer_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc::i___System__Collections__Generic__IComparer_1___Rewired__ActionElementMap__() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Rewired::ActionElementMap*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc::ControllerMap_RFzbnyjsTMGYYAfCDJMXoSZcKmqqc()   {
}
//  Writing Method size for method: ::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::*)(int32_t)>(&::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::_ctor)> {
  constexpr static std::size_t size = 0x3cb0;
  constexpr static std::size_t addrs = 0x180d66740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::*)()>(&::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x3e50;
  constexpr static std::size_t addrs = 0x1810edc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::*)()>(&::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::MoveNext)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1819a7090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA.System_Collections_Generic_IEnumerator_Rewired_ActionElementMap__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::*)()>(&::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::System_Collections_Generic_IEnumerator_Rewired_ActionElementMap__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ActionElementMap>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::*)()>(&::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::*)()>(&::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA.System_Collections_Generic_IEnumerable_Rewired_ActionElementMap__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>* (::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::*)()>(&::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::System_Collections_Generic_IEnumerable_Rewired_ActionElementMap__GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a71b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ActionElementMap>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::*)()>(&::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a71b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_get_saierPVtMEcMczOqYVCoobvBPgAp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saierPVtMEcMczOqYVCoobvBPgAp;
}
constexpr int32_t const& Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_get_saierPVtMEcMczOqYVCoobvBPgAp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saierPVtMEcMczOqYVCoobvBPgAp;
}
constexpr void Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_set_saierPVtMEcMczOqYVCoobvBPgAp(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saierPVtMEcMczOqYVCoobvBPgAp = value;
}
constexpr ::Rewired::ActionElementMap*& Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_get_YGtQhiqWucJIZgyNtNFQiaSEEziCA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YGtQhiqWucJIZgyNtNFQiaSEEziCA;
}
constexpr ::Rewired::ActionElementMap* const& Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_get_YGtQhiqWucJIZgyNtNFQiaSEEziCA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YGtQhiqWucJIZgyNtNFQiaSEEziCA;
}
constexpr void Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_set_YGtQhiqWucJIZgyNtNFQiaSEEziCA(::Rewired::ActionElementMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___YGtQhiqWucJIZgyNtNFQiaSEEziCA = value;
}
constexpr int32_t& Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_get_uhBjOwvnZBwExmtMoGnoJtPUeQlF()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uhBjOwvnZBwExmtMoGnoJtPUeQlF;
}
constexpr int32_t const& Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_get_uhBjOwvnZBwExmtMoGnoJtPUeQlF() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uhBjOwvnZBwExmtMoGnoJtPUeQlF;
}
constexpr void Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_set_uhBjOwvnZBwExmtMoGnoJtPUeQlF(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uhBjOwvnZBwExmtMoGnoJtPUeQlF = value;
}
constexpr ::Rewired::ControllerMap*& Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_get_MVmicbGLsRvCDfssucovxKxNZgNp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MVmicbGLsRvCDfssucovxKxNZgNp;
}
constexpr ::Rewired::ControllerMap* const& Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_get_MVmicbGLsRvCDfssucovxKxNZgNp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MVmicbGLsRvCDfssucovxKxNZgNp;
}
constexpr void Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_set_MVmicbGLsRvCDfssucovxKxNZgNp(::Rewired::ControllerMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MVmicbGLsRvCDfssucovxKxNZgNp = value;
}
constexpr int32_t& Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_get_VJLyviKnWPDDMuUyWtLvTULfteyA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VJLyviKnWPDDMuUyWtLvTULfteyA;
}
constexpr int32_t const& Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_get_VJLyviKnWPDDMuUyWtLvTULfteyA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VJLyviKnWPDDMuUyWtLvTULfteyA;
}
constexpr void Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_set_VJLyviKnWPDDMuUyWtLvTULfteyA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VJLyviKnWPDDMuUyWtLvTULfteyA = value;
}
constexpr int32_t& Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_get_kzCMEsWTNpeKqaiOVOmFGbiffKUn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kzCMEsWTNpeKqaiOVOmFGbiffKUn;
}
constexpr int32_t const& Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_get_kzCMEsWTNpeKqaiOVOmFGbiffKUn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kzCMEsWTNpeKqaiOVOmFGbiffKUn;
}
constexpr void Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_set_kzCMEsWTNpeKqaiOVOmFGbiffKUn(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___kzCMEsWTNpeKqaiOVOmFGbiffKUn = value;
}
constexpr bool& Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_get_cPMsuHaIsoeVdVFnjHVKJBfXFgpjA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cPMsuHaIsoeVdVFnjHVKJBfXFgpjA;
}
constexpr bool const& Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_get_cPMsuHaIsoeVdVFnjHVKJBfXFgpjA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cPMsuHaIsoeVdVFnjHVKJBfXFgpjA;
}
constexpr void Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_set_cPMsuHaIsoeVdVFnjHVKJBfXFgpjA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cPMsuHaIsoeVdVFnjHVKJBfXFgpjA = value;
}
constexpr bool& Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_get_yzleCVHfkvigKplXrVkYZYgsErHE()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yzleCVHfkvigKplXrVkYZYgsErHE;
}
constexpr bool const& Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_get_yzleCVHfkvigKplXrVkYZYgsErHE() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yzleCVHfkvigKplXrVkYZYgsErHE;
}
constexpr void Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_set_yzleCVHfkvigKplXrVkYZYgsErHE(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yzleCVHfkvigKplXrVkYZYgsErHE = value;
}
constexpr ::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*& Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_get_ElQMNVbDFVXYHKncZejhRgJSpDVQ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ElQMNVbDFVXYHKncZejhRgJSpDVQ;
}
constexpr ::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>* const& Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_get_ElQMNVbDFVXYHKncZejhRgJSpDVQ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ElQMNVbDFVXYHKncZejhRgJSpDVQ;
}
constexpr void Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_set_ElQMNVbDFVXYHKncZejhRgJSpDVQ(::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ElQMNVbDFVXYHKncZejhRgJSpDVQ = value;
}
constexpr int32_t& Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_get_BLjVjTlaYZrNQuceJhTDfgtnzDUE()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BLjVjTlaYZrNQuceJhTDfgtnzDUE;
}
constexpr int32_t const& Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_get_BLjVjTlaYZrNQuceJhTDfgtnzDUE() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BLjVjTlaYZrNQuceJhTDfgtnzDUE;
}
constexpr void Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_set_BLjVjTlaYZrNQuceJhTDfgtnzDUE(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BLjVjTlaYZrNQuceJhTDfgtnzDUE = value;
}
constexpr int32_t& Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_get_LeiRuhdsqDapqToVvYFGFSqUuGPo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LeiRuhdsqDapqToVvYFGFSqUuGPo;
}
constexpr int32_t const& Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_get_LeiRuhdsqDapqToVvYFGFSqUuGPo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LeiRuhdsqDapqToVvYFGFSqUuGPo;
}
constexpr void Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::__cordl_internal_set_LeiRuhdsqDapqToVvYFGFSqUuGPo(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LeiRuhdsqDapqToVvYFGFSqUuGPo = value;
}
inline void Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::System_Collections_Generic_IEnumerator_Rewired_ActionElementMap__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ActionElementMap>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method);
}
inline void Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::System_Collections_Generic_IEnumerable_Rewired_ActionElementMap__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ActionElementMap>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA* Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>"
constexpr  Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::operator ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::i___System__Collections__Generic__IEnumerable_1___Rewired__ActionElementMap__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>"
constexpr  Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::operator ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::i___System__Collections__Generic__IEnumerator_1___Rewired__ActionElementMap__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA::ControllerMap_VUaYSUxRconsKnirJbVnHiPKcwAdA()   {
}
//  Writing Method size for method: ::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::*)(int32_t)>(&::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::_ctor)> {
  constexpr static std::size_t size = 0xeb0;
  constexpr static std::size_t addrs = 0x180bb7ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::*)()>(&::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18199adf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::*)()>(&::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::MoveNext)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x18199a9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA.System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ElementAssignmentConflictInfo (::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::*)()>(&::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180bb78f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ElementAssignmentConflictInfo>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::*)()>(&::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::*)()>(&::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180bb7a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA.System_Collections_Generic_IEnumerable_Rewired_ElementAssignmentConflictInfo__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* (::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::*)()>(&::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::System_Collections_Generic_IEnumerable_Rewired_ElementAssignmentConflictInfo__GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18199ad60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::*)()>(&::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18199ad60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_get_zGxiZhuDIeEzafOreHraWnIKrWBEA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zGxiZhuDIeEzafOreHraWnIKrWBEA;
}
constexpr int32_t const& Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_get_zGxiZhuDIeEzafOreHraWnIKrWBEA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zGxiZhuDIeEzafOreHraWnIKrWBEA;
}
constexpr void Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_set_zGxiZhuDIeEzafOreHraWnIKrWBEA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zGxiZhuDIeEzafOreHraWnIKrWBEA = value;
}
constexpr ::Rewired::ElementAssignmentConflictInfo& Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_get_RUiBItDMOLniBSmQVQcszBlxAESB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RUiBItDMOLniBSmQVQcszBlxAESB;
}
constexpr ::Rewired::ElementAssignmentConflictInfo const& Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_get_RUiBItDMOLniBSmQVQcszBlxAESB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RUiBItDMOLniBSmQVQcszBlxAESB;
}
constexpr void Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_set_RUiBItDMOLniBSmQVQcszBlxAESB(::Rewired::ElementAssignmentConflictInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RUiBItDMOLniBSmQVQcszBlxAESB = value;
}
constexpr int32_t& Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_get_PawqYTVpPtBuWqYFZTXCUtngiQvh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PawqYTVpPtBuWqYFZTXCUtngiQvh;
}
constexpr int32_t const& Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_get_PawqYTVpPtBuWqYFZTXCUtngiQvh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PawqYTVpPtBuWqYFZTXCUtngiQvh;
}
constexpr void Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_set_PawqYTVpPtBuWqYFZTXCUtngiQvh(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PawqYTVpPtBuWqYFZTXCUtngiQvh = value;
}
constexpr ::Rewired::ControllerMap*& Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_get_ZBdxUfVjkjtPibIeTBJhHDHKMZXlA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZBdxUfVjkjtPibIeTBJhHDHKMZXlA;
}
constexpr ::Rewired::ControllerMap* const& Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_get_ZBdxUfVjkjtPibIeTBJhHDHKMZXlA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZBdxUfVjkjtPibIeTBJhHDHKMZXlA;
}
constexpr void Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_set_ZBdxUfVjkjtPibIeTBJhHDHKMZXlA(::Rewired::ControllerMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZBdxUfVjkjtPibIeTBJhHDHKMZXlA = value;
}
constexpr ::Rewired::ControllerMap*& Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_get_uzkkoLyXhPEGWbnJaajMcRrrOgnCb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uzkkoLyXhPEGWbnJaajMcRrrOgnCb;
}
constexpr ::Rewired::ControllerMap* const& Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_get_uzkkoLyXhPEGWbnJaajMcRrrOgnCb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uzkkoLyXhPEGWbnJaajMcRrrOgnCb;
}
constexpr void Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_set_uzkkoLyXhPEGWbnJaajMcRrrOgnCb(::Rewired::ControllerMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uzkkoLyXhPEGWbnJaajMcRrrOgnCb = value;
}
constexpr ::Rewired::ControllerMap*& Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_get_zDOsnRrPwyFfwAqwTLTObnMBIQQib()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zDOsnRrPwyFfwAqwTLTObnMBIQQib;
}
constexpr ::Rewired::ControllerMap* const& Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_get_zDOsnRrPwyFfwAqwTLTObnMBIQQib() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zDOsnRrPwyFfwAqwTLTObnMBIQQib;
}
constexpr void Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_set_zDOsnRrPwyFfwAqwTLTObnMBIQQib(::Rewired::ControllerMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zDOsnRrPwyFfwAqwTLTObnMBIQQib = value;
}
constexpr bool& Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_get_IPdBtnLMvEoCbhKfhdZttHIBIzsM()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IPdBtnLMvEoCbhKfhdZttHIBIzsM;
}
constexpr bool const& Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_get_IPdBtnLMvEoCbhKfhdZttHIBIzsM() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IPdBtnLMvEoCbhKfhdZttHIBIzsM;
}
constexpr void Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_set_IPdBtnLMvEoCbhKfhdZttHIBIzsM(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IPdBtnLMvEoCbhKfhdZttHIBIzsM = value;
}
constexpr bool& Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_get_LERkvpWsZrXciZYbhQQWYAYNTsjJ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LERkvpWsZrXciZYbhQQWYAYNTsjJ;
}
constexpr bool const& Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_get_LERkvpWsZrXciZYbhQQWYAYNTsjJ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LERkvpWsZrXciZYbhQQWYAYNTsjJ;
}
constexpr void Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_set_LERkvpWsZrXciZYbhQQWYAYNTsjJ(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LERkvpWsZrXciZYbhQQWYAYNTsjJ = value;
}
constexpr ::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*& Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_get_RmncuklsuMlXmKiVThPpDWwwAPuJ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RmncuklsuMlXmKiVThPpDWwwAPuJ;
}
constexpr ::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>* const& Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_get_RmncuklsuMlXmKiVThPpDWwwAPuJ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RmncuklsuMlXmKiVThPpDWwwAPuJ;
}
constexpr void Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_set_RmncuklsuMlXmKiVThPpDWwwAPuJ(::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RmncuklsuMlXmKiVThPpDWwwAPuJ = value;
}
constexpr int32_t& Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_get_WAIIylFYvjXLbGtwAzFSIgfUycahA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WAIIylFYvjXLbGtwAzFSIgfUycahA;
}
constexpr int32_t const& Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_get_WAIIylFYvjXLbGtwAzFSIgfUycahA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WAIIylFYvjXLbGtwAzFSIgfUycahA;
}
constexpr void Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_set_WAIIylFYvjXLbGtwAzFSIgfUycahA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WAIIylFYvjXLbGtwAzFSIgfUycahA = value;
}
constexpr int32_t& Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_get_RBTtjLbWsBRyMoAHQVNUAgMeADjFA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RBTtjLbWsBRyMoAHQVNUAgMeADjFA;
}
constexpr int32_t const& Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_get_RBTtjLbWsBRyMoAHQVNUAgMeADjFA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RBTtjLbWsBRyMoAHQVNUAgMeADjFA;
}
constexpr void Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_set_RBTtjLbWsBRyMoAHQVNUAgMeADjFA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RBTtjLbWsBRyMoAHQVNUAgMeADjFA = value;
}
constexpr ::Rewired::ActionElementMap*& Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_get_ZrVVdPCrcrwOnFgMyeYGGeJuQDcq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZrVVdPCrcrwOnFgMyeYGGeJuQDcq;
}
constexpr ::Rewired::ActionElementMap* const& Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_get_ZrVVdPCrcrwOnFgMyeYGGeJuQDcq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZrVVdPCrcrwOnFgMyeYGGeJuQDcq;
}
constexpr void Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_set_ZrVVdPCrcrwOnFgMyeYGGeJuQDcq(::Rewired::ActionElementMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZrVVdPCrcrwOnFgMyeYGGeJuQDcq = value;
}
constexpr int32_t& Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_get_NUKLqjbRKwpmLTeYPAiEqrcOqkji()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NUKLqjbRKwpmLTeYPAiEqrcOqkji;
}
constexpr int32_t const& Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_get_NUKLqjbRKwpmLTeYPAiEqrcOqkji() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NUKLqjbRKwpmLTeYPAiEqrcOqkji;
}
constexpr void Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::__cordl_internal_set_NUKLqjbRKwpmLTeYPAiEqrcOqkji(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NUKLqjbRKwpmLTeYPAiEqrcOqkji = value;
}
inline void Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::ElementAssignmentConflictInfo Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ElementAssignmentConflictInfo>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ElementAssignmentConflictInfo>(this, ___internal_method);
}
inline void Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::System_Collections_Generic_IEnumerable_Rewired_ElementAssignmentConflictInfo__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA* Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr  Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::operator ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::i___System__Collections__Generic__IEnumerable_1___Rewired__ElementAssignmentConflictInfo_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr  Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::operator ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::i___System__Collections__Generic__IEnumerator_1___Rewired__ElementAssignmentConflictInfo_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA::ControllerMap_CdFjTCBfIGYQuvczKXllhZYUgCgEA()   {
}
//  Writing Method size for method: ::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::*)(int32_t)>(&::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::_ctor)> {
  constexpr static std::size_t size = 0xeb0;
  constexpr static std::size_t addrs = 0x180bb7ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::*)()>(&::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x6fe0;
  constexpr static std::size_t addrs = 0x181049e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::*)()>(&::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::MoveNext)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1819a7240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA.System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ElementAssignmentConflictInfo (::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::*)()>(&::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180bb78f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ElementAssignmentConflictInfo>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::*)()>(&::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::*)()>(&::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180bb7a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA.System_Collections_Generic_IEnumerable_Rewired_ElementAssignmentConflictInfo__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* (::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::*)()>(&::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::System_Collections_Generic_IEnumerable_Rewired_ElementAssignmentConflictInfo__GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a7500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::*)()>(&::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a7500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::__cordl_internal_get_DedUYqGOsbaJMUlkKHxjqgurZwre()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DedUYqGOsbaJMUlkKHxjqgurZwre;
}
constexpr int32_t const& Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::__cordl_internal_get_DedUYqGOsbaJMUlkKHxjqgurZwre() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DedUYqGOsbaJMUlkKHxjqgurZwre;
}
constexpr void Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::__cordl_internal_set_DedUYqGOsbaJMUlkKHxjqgurZwre(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DedUYqGOsbaJMUlkKHxjqgurZwre = value;
}
constexpr ::Rewired::ElementAssignmentConflictInfo& Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::__cordl_internal_get_zyEeWlDnmKuSMPYqfckBnxiGTrOD()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zyEeWlDnmKuSMPYqfckBnxiGTrOD;
}
constexpr ::Rewired::ElementAssignmentConflictInfo const& Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::__cordl_internal_get_zyEeWlDnmKuSMPYqfckBnxiGTrOD() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zyEeWlDnmKuSMPYqfckBnxiGTrOD;
}
constexpr void Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::__cordl_internal_set_zyEeWlDnmKuSMPYqfckBnxiGTrOD(::Rewired::ElementAssignmentConflictInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zyEeWlDnmKuSMPYqfckBnxiGTrOD = value;
}
constexpr int32_t& Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::__cordl_internal_get_AfphZaFccQeQIZZvdqsaqbVAdaKWA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AfphZaFccQeQIZZvdqsaqbVAdaKWA;
}
constexpr int32_t const& Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::__cordl_internal_get_AfphZaFccQeQIZZvdqsaqbVAdaKWA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AfphZaFccQeQIZZvdqsaqbVAdaKWA;
}
constexpr void Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::__cordl_internal_set_AfphZaFccQeQIZZvdqsaqbVAdaKWA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AfphZaFccQeQIZZvdqsaqbVAdaKWA = value;
}
constexpr ::Rewired::ControllerMap*& Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::__cordl_internal_get_aQGsPNPDEcduwKeWaHqymVVkrrTU()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aQGsPNPDEcduwKeWaHqymVVkrrTU;
}
constexpr ::Rewired::ControllerMap* const& Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::__cordl_internal_get_aQGsPNPDEcduwKeWaHqymVVkrrTU() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aQGsPNPDEcduwKeWaHqymVVkrrTU;
}
constexpr void Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::__cordl_internal_set_aQGsPNPDEcduwKeWaHqymVVkrrTU(::Rewired::ControllerMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aQGsPNPDEcduwKeWaHqymVVkrrTU = value;
}
constexpr ::Rewired::ActionElementMap*& Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::__cordl_internal_get_TbTyIFXVFKhuBFACIeNIJnujDxyZA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TbTyIFXVFKhuBFACIeNIJnujDxyZA;
}
constexpr ::Rewired::ActionElementMap* const& Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::__cordl_internal_get_TbTyIFXVFKhuBFACIeNIJnujDxyZA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TbTyIFXVFKhuBFACIeNIJnujDxyZA;
}
constexpr void Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::__cordl_internal_set_TbTyIFXVFKhuBFACIeNIJnujDxyZA(::Rewired::ActionElementMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TbTyIFXVFKhuBFACIeNIJnujDxyZA = value;
}
constexpr ::Rewired::ActionElementMap*& Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::__cordl_internal_get_NbRMaxjSAsyLIoGdClnaSvScsgRj()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NbRMaxjSAsyLIoGdClnaSvScsgRj;
}
constexpr ::Rewired::ActionElementMap* const& Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::__cordl_internal_get_NbRMaxjSAsyLIoGdClnaSvScsgRj() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NbRMaxjSAsyLIoGdClnaSvScsgRj;
}
constexpr void Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::__cordl_internal_set_NbRMaxjSAsyLIoGdClnaSvScsgRj(::Rewired::ActionElementMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NbRMaxjSAsyLIoGdClnaSvScsgRj = value;
}
constexpr bool& Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::__cordl_internal_get_lJGNbKjQXiNDbLTglWErlMiUrvni()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lJGNbKjQXiNDbLTglWErlMiUrvni;
}
constexpr bool const& Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::__cordl_internal_get_lJGNbKjQXiNDbLTglWErlMiUrvni() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lJGNbKjQXiNDbLTglWErlMiUrvni;
}
constexpr void Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::__cordl_internal_set_lJGNbKjQXiNDbLTglWErlMiUrvni(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lJGNbKjQXiNDbLTglWErlMiUrvni = value;
}
constexpr bool& Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::__cordl_internal_get_yhypeAMCuyGdqVxMPhhgdtVPzSoi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yhypeAMCuyGdqVxMPhhgdtVPzSoi;
}
constexpr bool const& Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::__cordl_internal_get_yhypeAMCuyGdqVxMPhhgdtVPzSoi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yhypeAMCuyGdqVxMPhhgdtVPzSoi;
}
constexpr void Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::__cordl_internal_set_yhypeAMCuyGdqVxMPhhgdtVPzSoi(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yhypeAMCuyGdqVxMPhhgdtVPzSoi = value;
}
constexpr int32_t& Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::__cordl_internal_get_pfvwkmneAhrTZgglgzlJMwKMihbb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pfvwkmneAhrTZgglgzlJMwKMihbb;
}
constexpr int32_t const& Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::__cordl_internal_get_pfvwkmneAhrTZgglgzlJMwKMihbb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pfvwkmneAhrTZgglgzlJMwKMihbb;
}
constexpr void Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::__cordl_internal_set_pfvwkmneAhrTZgglgzlJMwKMihbb(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pfvwkmneAhrTZgglgzlJMwKMihbb = value;
}
inline void Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::ElementAssignmentConflictInfo Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ElementAssignmentConflictInfo>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ElementAssignmentConflictInfo>(this, ___internal_method);
}
inline void Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::System_Collections_Generic_IEnumerable_Rewired_ElementAssignmentConflictInfo__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA* Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr  Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::operator ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::i___System__Collections__Generic__IEnumerable_1___Rewired__ElementAssignmentConflictInfo_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr  Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::operator ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::i___System__Collections__Generic__IEnumerator_1___Rewired__ElementAssignmentConflictInfo_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA::ControllerMap_VgJyaUEjlveKoJqFPMdnTjHQiNvcA()   {
}
//  Writing Method size for method: ::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::*)(int32_t)>(&::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::_ctor)> {
  constexpr static std::size_t size = 0xeb0;
  constexpr static std::size_t addrs = 0x180bb7ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::*)()>(&::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x6fe0;
  constexpr static std::size_t addrs = 0x181049e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::*)()>(&::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::MoveNext)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x1819a7cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA.System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ElementAssignmentConflictInfo (::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::*)()>(&::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180bb78f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ElementAssignmentConflictInfo>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::*)()>(&::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::*)()>(&::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180bb7a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA.System_Collections_Generic_IEnumerable_Rewired_ElementAssignmentConflictInfo__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* (::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::*)()>(&::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::System_Collections_Generic_IEnumerable_Rewired_ElementAssignmentConflictInfo__GetEnumerator)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1819a8010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::*)()>(&::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1819a8010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_get_yFhoTqScDyMsQHPXycXxEOqCBqJKA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yFhoTqScDyMsQHPXycXxEOqCBqJKA;
}
constexpr int32_t const& Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_get_yFhoTqScDyMsQHPXycXxEOqCBqJKA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yFhoTqScDyMsQHPXycXxEOqCBqJKA;
}
constexpr void Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_set_yFhoTqScDyMsQHPXycXxEOqCBqJKA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yFhoTqScDyMsQHPXycXxEOqCBqJKA = value;
}
constexpr ::Rewired::ElementAssignmentConflictInfo& Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_get_zLLrBnyffShZtwkCFDvTHSVhMKjvA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zLLrBnyffShZtwkCFDvTHSVhMKjvA;
}
constexpr ::Rewired::ElementAssignmentConflictInfo const& Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_get_zLLrBnyffShZtwkCFDvTHSVhMKjvA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zLLrBnyffShZtwkCFDvTHSVhMKjvA;
}
constexpr void Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_set_zLLrBnyffShZtwkCFDvTHSVhMKjvA(::Rewired::ElementAssignmentConflictInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zLLrBnyffShZtwkCFDvTHSVhMKjvA = value;
}
constexpr int32_t& Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_get_DEPciXwOyKsRgjLOreliNJYwkwun()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DEPciXwOyKsRgjLOreliNJYwkwun;
}
constexpr int32_t const& Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_get_DEPciXwOyKsRgjLOreliNJYwkwun() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DEPciXwOyKsRgjLOreliNJYwkwun;
}
constexpr void Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_set_DEPciXwOyKsRgjLOreliNJYwkwun(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DEPciXwOyKsRgjLOreliNJYwkwun = value;
}
constexpr ::Rewired::ControllerMap*& Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_get_wYwydEskxrqUAMJaKmojKFTvIwXF()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wYwydEskxrqUAMJaKmojKFTvIwXF;
}
constexpr ::Rewired::ControllerMap* const& Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_get_wYwydEskxrqUAMJaKmojKFTvIwXF() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wYwydEskxrqUAMJaKmojKFTvIwXF;
}
constexpr void Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_set_wYwydEskxrqUAMJaKmojKFTvIwXF(::Rewired::ControllerMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wYwydEskxrqUAMJaKmojKFTvIwXF = value;
}
constexpr bool& Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_get_CWFFbbAKZsDIdMuxwIRtkhoYxiwt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CWFFbbAKZsDIdMuxwIRtkhoYxiwt;
}
constexpr bool const& Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_get_CWFFbbAKZsDIdMuxwIRtkhoYxiwt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CWFFbbAKZsDIdMuxwIRtkhoYxiwt;
}
constexpr void Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_set_CWFFbbAKZsDIdMuxwIRtkhoYxiwt(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CWFFbbAKZsDIdMuxwIRtkhoYxiwt = value;
}
constexpr bool& Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_get_jqyDrXeHebdRnpzHuhQRAwpbaQXlA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jqyDrXeHebdRnpzHuhQRAwpbaQXlA;
}
constexpr bool const& Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_get_jqyDrXeHebdRnpzHuhQRAwpbaQXlA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jqyDrXeHebdRnpzHuhQRAwpbaQXlA;
}
constexpr void Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_set_jqyDrXeHebdRnpzHuhQRAwpbaQXlA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jqyDrXeHebdRnpzHuhQRAwpbaQXlA = value;
}
constexpr ::Rewired::ElementAssignmentConflictCheck& Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_get_GhIkuWEGSZaZbxdCrHgMkjwLXmSk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GhIkuWEGSZaZbxdCrHgMkjwLXmSk;
}
constexpr ::Rewired::ElementAssignmentConflictCheck const& Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_get_GhIkuWEGSZaZbxdCrHgMkjwLXmSk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GhIkuWEGSZaZbxdCrHgMkjwLXmSk;
}
constexpr void Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_set_GhIkuWEGSZaZbxdCrHgMkjwLXmSk(::Rewired::ElementAssignmentConflictCheck  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GhIkuWEGSZaZbxdCrHgMkjwLXmSk = value;
}
constexpr ::Rewired::ElementAssignmentConflictCheck& Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_get_yIXOtRrZTYRcBxGOBloNbrwqVFJA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yIXOtRrZTYRcBxGOBloNbrwqVFJA;
}
constexpr ::Rewired::ElementAssignmentConflictCheck const& Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_get_yIXOtRrZTYRcBxGOBloNbrwqVFJA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yIXOtRrZTYRcBxGOBloNbrwqVFJA;
}
constexpr void Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_set_yIXOtRrZTYRcBxGOBloNbrwqVFJA(::Rewired::ElementAssignmentConflictCheck  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yIXOtRrZTYRcBxGOBloNbrwqVFJA = value;
}
constexpr ::Rewired::ElementAssignment& Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_get_UKymDhfmzgOiViLnebOmkloYtyEh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UKymDhfmzgOiViLnebOmkloYtyEh;
}
constexpr ::Rewired::ElementAssignment const& Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_get_UKymDhfmzgOiViLnebOmkloYtyEh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UKymDhfmzgOiViLnebOmkloYtyEh;
}
constexpr void Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_set_UKymDhfmzgOiViLnebOmkloYtyEh(::Rewired::ElementAssignment  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UKymDhfmzgOiViLnebOmkloYtyEh = value;
}
constexpr int32_t& Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_get_yzxkhrbskONRKOPBSFMgbEnVZaAMA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yzxkhrbskONRKOPBSFMgbEnVZaAMA;
}
constexpr int32_t const& Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_get_yzxkhrbskONRKOPBSFMgbEnVZaAMA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yzxkhrbskONRKOPBSFMgbEnVZaAMA;
}
constexpr void Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::__cordl_internal_set_yzxkhrbskONRKOPBSFMgbEnVZaAMA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yzxkhrbskONRKOPBSFMgbEnVZaAMA = value;
}
inline void Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::ElementAssignmentConflictInfo Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ElementAssignmentConflictInfo>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ElementAssignmentConflictInfo>(this, ___internal_method);
}
inline void Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::System_Collections_Generic_IEnumerable_Rewired_ElementAssignmentConflictInfo__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA* Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr  Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::operator ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::i___System__Collections__Generic__IEnumerable_1___Rewired__ElementAssignmentConflictInfo_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr  Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::operator ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::i___System__Collections__Generic__IEnumerator_1___Rewired__ElementAssignmentConflictInfo_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA::ControllerMap_bRfpjhMYeJHPWezEGjJIpaZTcJfbA()   {
}
//  Writing Method size for method: ::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::*)(int32_t)>(&::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::_ctor)> {
  constexpr static std::size_t size = 0x3cb0;
  constexpr static std::size_t addrs = 0x180d66740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::*)()>(&::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1818b0250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::*)()>(&::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::MoveNext)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1819a0630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC.lAybbRAPvlkrWiWJZcoExncumwTeb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::*)()>(&::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::lAybbRAPvlkrWiWJZcoExncumwTeb)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818289d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC*>(),
                        {"lAybbRAPvlkrWiWJZcoExncumwTeb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC.System_Collections_Generic_IEnumerator_Rewired_ActionElementMap__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::*)()>(&::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::System_Collections_Generic_IEnumerator_Rewired_ActionElementMap__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ActionElementMap>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::*)()>(&::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::*)()>(&::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC.System_Collections_Generic_IEnumerable_Rewired_ActionElementMap__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>* (::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::*)()>(&::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::System_Collections_Generic_IEnumerable_Rewired_ActionElementMap__GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a0850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ActionElementMap>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::*)()>(&::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a0850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::__cordl_internal_get_wIIvhjEnGJzknxqfilZPgRrbAeiS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wIIvhjEnGJzknxqfilZPgRrbAeiS;
}
constexpr int32_t const& Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::__cordl_internal_get_wIIvhjEnGJzknxqfilZPgRrbAeiS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wIIvhjEnGJzknxqfilZPgRrbAeiS;
}
constexpr void Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::__cordl_internal_set_wIIvhjEnGJzknxqfilZPgRrbAeiS(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wIIvhjEnGJzknxqfilZPgRrbAeiS = value;
}
constexpr ::Rewired::ActionElementMap*& Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::__cordl_internal_get_IGutGssySKmKUmKaEtYylGfJQvmw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IGutGssySKmKUmKaEtYylGfJQvmw;
}
constexpr ::Rewired::ActionElementMap* const& Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::__cordl_internal_get_IGutGssySKmKUmKaEtYylGfJQvmw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IGutGssySKmKUmKaEtYylGfJQvmw;
}
constexpr void Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::__cordl_internal_set_IGutGssySKmKUmKaEtYylGfJQvmw(::Rewired::ActionElementMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IGutGssySKmKUmKaEtYylGfJQvmw = value;
}
constexpr int32_t& Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::__cordl_internal_get_tfDcIGKGSfjrHzgoltmIafeqeLMsA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tfDcIGKGSfjrHzgoltmIafeqeLMsA;
}
constexpr int32_t const& Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::__cordl_internal_get_tfDcIGKGSfjrHzgoltmIafeqeLMsA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tfDcIGKGSfjrHzgoltmIafeqeLMsA;
}
constexpr void Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::__cordl_internal_set_tfDcIGKGSfjrHzgoltmIafeqeLMsA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tfDcIGKGSfjrHzgoltmIafeqeLMsA = value;
}
constexpr ::Rewired::ControllerMap*& Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::__cordl_internal_get_BGaSUKONRNEDOsDxnyYQHacwCLchA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BGaSUKONRNEDOsDxnyYQHacwCLchA;
}
constexpr ::Rewired::ControllerMap* const& Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::__cordl_internal_get_BGaSUKONRNEDOsDxnyYQHacwCLchA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BGaSUKONRNEDOsDxnyYQHacwCLchA;
}
constexpr void Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::__cordl_internal_set_BGaSUKONRNEDOsDxnyYQHacwCLchA(::Rewired::ControllerMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BGaSUKONRNEDOsDxnyYQHacwCLchA = value;
}
constexpr int32_t& Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::__cordl_internal_get_fZgeiMsssrzfkRYcLYQTFxrnTqGE()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fZgeiMsssrzfkRYcLYQTFxrnTqGE;
}
constexpr int32_t const& Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::__cordl_internal_get_fZgeiMsssrzfkRYcLYQTFxrnTqGE() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fZgeiMsssrzfkRYcLYQTFxrnTqGE;
}
constexpr void Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::__cordl_internal_set_fZgeiMsssrzfkRYcLYQTFxrnTqGE(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fZgeiMsssrzfkRYcLYQTFxrnTqGE = value;
}
constexpr int32_t& Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::__cordl_internal_get_hGyoWrarPxLSnXZEfRLdPTomfnkN()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hGyoWrarPxLSnXZEfRLdPTomfnkN;
}
constexpr int32_t const& Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::__cordl_internal_get_hGyoWrarPxLSnXZEfRLdPTomfnkN() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hGyoWrarPxLSnXZEfRLdPTomfnkN;
}
constexpr void Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::__cordl_internal_set_hGyoWrarPxLSnXZEfRLdPTomfnkN(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hGyoWrarPxLSnXZEfRLdPTomfnkN = value;
}
constexpr bool& Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::__cordl_internal_get_yFWrpSQJDJpvyYpTorhAZRfhndUD()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yFWrpSQJDJpvyYpTorhAZRfhndUD;
}
constexpr bool const& Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::__cordl_internal_get_yFWrpSQJDJpvyYpTorhAZRfhndUD() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yFWrpSQJDJpvyYpTorhAZRfhndUD;
}
constexpr void Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::__cordl_internal_set_yFWrpSQJDJpvyYpTorhAZRfhndUD(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yFWrpSQJDJpvyYpTorhAZRfhndUD = value;
}
constexpr bool& Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::__cordl_internal_get_ZFwSeyRLszbIzTDxMOglcNjOEWGbA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZFwSeyRLszbIzTDxMOglcNjOEWGbA;
}
constexpr bool const& Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::__cordl_internal_get_ZFwSeyRLszbIzTDxMOglcNjOEWGbA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZFwSeyRLszbIzTDxMOglcNjOEWGbA;
}
constexpr void Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::__cordl_internal_set_ZFwSeyRLszbIzTDxMOglcNjOEWGbA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZFwSeyRLszbIzTDxMOglcNjOEWGbA = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>*& Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::__cordl_internal_get_CwbqcmWFZZEQJRjlrGeAIcGDfnLd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CwbqcmWFZZEQJRjlrGeAIcGDfnLd;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>* const& Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::__cordl_internal_get_CwbqcmWFZZEQJRjlrGeAIcGDfnLd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CwbqcmWFZZEQJRjlrGeAIcGDfnLd;
}
constexpr void Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::__cordl_internal_set_CwbqcmWFZZEQJRjlrGeAIcGDfnLd(::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CwbqcmWFZZEQJRjlrGeAIcGDfnLd = value;
}
inline void Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::lAybbRAPvlkrWiWJZcoExncumwTeb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC*>(),
                        {"lAybbRAPvlkrWiWJZcoExncumwTeb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::System_Collections_Generic_IEnumerator_Rewired_ActionElementMap__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ActionElementMap>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method);
}
inline void Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::System_Collections_Generic_IEnumerable_Rewired_ActionElementMap__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ActionElementMap>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC* Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>"
constexpr  Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::operator ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::i___System__Collections__Generic__IEnumerable_1___Rewired__ActionElementMap__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>"
constexpr  Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::operator ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::i___System__Collections__Generic__IEnumerator_1___Rewired__ActionElementMap__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC::ControllerMap_FVzKrFWZRsZmSeyJoSPsMGvRSCLC()   {
}
//  Writing Method size for method: ::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::*)(int32_t)>(&::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::_ctor)> {
  constexpr static std::size_t size = 0x3cb0;
  constexpr static std::size_t addrs = 0x180d66740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::*)()>(&::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1819a0c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::*)()>(&::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::MoveNext)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x1819a08e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF.zXpJgAnaIpQNKVCyTMFVDCrFupLB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::*)()>(&::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::zXpJgAnaIpQNKVCyTMFVDCrFupLB)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180d70080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF*>(),
                        {"zXpJgAnaIpQNKVCyTMFVDCrFupLB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF.yILsinNbRyauUhBTpJtmKvTkMfhCA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::*)()>(&::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::yILsinNbRyauUhBTpJtmKvTkMfhCA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181828a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF*>(),
                        {"yILsinNbRyauUhBTpJtmKvTkMfhCA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF.System_Collections_Generic_IEnumerator_Rewired_ActionElementMap__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::*)()>(&::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::System_Collections_Generic_IEnumerator_Rewired_ActionElementMap__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ActionElementMap>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::*)()>(&::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::*)()>(&::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF.System_Collections_Generic_IEnumerable_Rewired_ActionElementMap__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>* (::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::*)()>(&::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::System_Collections_Generic_IEnumerable_Rewired_ActionElementMap__GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a0bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ActionElementMap>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::*)()>(&::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a0bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_get_TjgsMFAqNPWQWtMRWMzBgvETZFVf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TjgsMFAqNPWQWtMRWMzBgvETZFVf;
}
constexpr int32_t const& Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_get_TjgsMFAqNPWQWtMRWMzBgvETZFVf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TjgsMFAqNPWQWtMRWMzBgvETZFVf;
}
constexpr void Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_set_TjgsMFAqNPWQWtMRWMzBgvETZFVf(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TjgsMFAqNPWQWtMRWMzBgvETZFVf = value;
}
constexpr ::Rewired::ActionElementMap*& Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_get_QBzSntacVDtfRcSOYzbqtBRFEOzA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QBzSntacVDtfRcSOYzbqtBRFEOzA;
}
constexpr ::Rewired::ActionElementMap* const& Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_get_QBzSntacVDtfRcSOYzbqtBRFEOzA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QBzSntacVDtfRcSOYzbqtBRFEOzA;
}
constexpr void Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_set_QBzSntacVDtfRcSOYzbqtBRFEOzA(::Rewired::ActionElementMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QBzSntacVDtfRcSOYzbqtBRFEOzA = value;
}
constexpr int32_t& Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_get_ANXedHHotoQxKdJOOgpZxRZYGKkJA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ANXedHHotoQxKdJOOgpZxRZYGKkJA;
}
constexpr int32_t const& Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_get_ANXedHHotoQxKdJOOgpZxRZYGKkJA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ANXedHHotoQxKdJOOgpZxRZYGKkJA;
}
constexpr void Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_set_ANXedHHotoQxKdJOOgpZxRZYGKkJA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ANXedHHotoQxKdJOOgpZxRZYGKkJA = value;
}
constexpr ::Rewired::ControllerMap*& Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_get_DCXGaJKGnbPRnUVWUGyLXtSDXiqQA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DCXGaJKGnbPRnUVWUGyLXtSDXiqQA;
}
constexpr ::Rewired::ControllerMap* const& Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_get_DCXGaJKGnbPRnUVWUGyLXtSDXiqQA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DCXGaJKGnbPRnUVWUGyLXtSDXiqQA;
}
constexpr void Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_set_DCXGaJKGnbPRnUVWUGyLXtSDXiqQA(::Rewired::ControllerMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DCXGaJKGnbPRnUVWUGyLXtSDXiqQA = value;
}
constexpr ::Rewired::IControllerElementTarget*& Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_get_UWlIBGMpbSLHgvBRyCfWRlPHLmMj()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UWlIBGMpbSLHgvBRyCfWRlPHLmMj;
}
constexpr ::Rewired::IControllerElementTarget* const& Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_get_UWlIBGMpbSLHgvBRyCfWRlPHLmMj() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UWlIBGMpbSLHgvBRyCfWRlPHLmMj;
}
constexpr void Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_set_UWlIBGMpbSLHgvBRyCfWRlPHLmMj(::Rewired::IControllerElementTarget*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UWlIBGMpbSLHgvBRyCfWRlPHLmMj = value;
}
constexpr ::Rewired::IControllerElementTarget*& Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_get_bmVdyZLClxnOeCIYfYIvvwTBaxqO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bmVdyZLClxnOeCIYfYIvvwTBaxqO;
}
constexpr ::Rewired::IControllerElementTarget* const& Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_get_bmVdyZLClxnOeCIYfYIvvwTBaxqO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bmVdyZLClxnOeCIYfYIvvwTBaxqO;
}
constexpr void Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_set_bmVdyZLClxnOeCIYfYIvvwTBaxqO(::Rewired::IControllerElementTarget*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bmVdyZLClxnOeCIYfYIvvwTBaxqO = value;
}
constexpr bool& Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_get_rmgQvmOgPCHwjyzpJwVDJqJlGuvc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rmgQvmOgPCHwjyzpJwVDJqJlGuvc;
}
constexpr bool const& Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_get_rmgQvmOgPCHwjyzpJwVDJqJlGuvc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rmgQvmOgPCHwjyzpJwVDJqJlGuvc;
}
constexpr void Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_set_rmgQvmOgPCHwjyzpJwVDJqJlGuvc(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rmgQvmOgPCHwjyzpJwVDJqJlGuvc = value;
}
constexpr bool& Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_get_cOeaqQPZeLubHGhDVuWPgBbainbK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cOeaqQPZeLubHGhDVuWPgBbainbK;
}
constexpr bool const& Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_get_cOeaqQPZeLubHGhDVuWPgBbainbK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cOeaqQPZeLubHGhDVuWPgBbainbK;
}
constexpr void Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_set_cOeaqQPZeLubHGhDVuWPgBbainbK(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cOeaqQPZeLubHGhDVuWPgBbainbK = value;
}
constexpr ::Rewired::Utils::TempListPool_TList_1<::Rewired::ActionElementMap*>*& Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_get_mEbqRJTdrKrDJuYpxvsBwDAkFVPo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mEbqRJTdrKrDJuYpxvsBwDAkFVPo;
}
constexpr ::Rewired::Utils::TempListPool_TList_1<::Rewired::ActionElementMap*>* const& Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_get_mEbqRJTdrKrDJuYpxvsBwDAkFVPo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mEbqRJTdrKrDJuYpxvsBwDAkFVPo;
}
constexpr void Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_set_mEbqRJTdrKrDJuYpxvsBwDAkFVPo(::Rewired::Utils::TempListPool_TList_1<::Rewired::ActionElementMap*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mEbqRJTdrKrDJuYpxvsBwDAkFVPo = value;
}
constexpr ::System::Collections::Generic::List_1_Enumerator<::Rewired::ActionElementMap*>& Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_get_dejsfAclLIYAPGmbdddxfgNxPDiS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dejsfAclLIYAPGmbdddxfgNxPDiS;
}
constexpr ::System::Collections::Generic::List_1_Enumerator<::Rewired::ActionElementMap*> const& Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_get_dejsfAclLIYAPGmbdddxfgNxPDiS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dejsfAclLIYAPGmbdddxfgNxPDiS;
}
constexpr void Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::__cordl_internal_set_dejsfAclLIYAPGmbdddxfgNxPDiS(::System::Collections::Generic::List_1_Enumerator<::Rewired::ActionElementMap*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dejsfAclLIYAPGmbdddxfgNxPDiS = value;
}
inline void Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::zXpJgAnaIpQNKVCyTMFVDCrFupLB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF*>(),
                        {"zXpJgAnaIpQNKVCyTMFVDCrFupLB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::yILsinNbRyauUhBTpJtmKvTkMfhCA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF*>(),
                        {"yILsinNbRyauUhBTpJtmKvTkMfhCA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::System_Collections_Generic_IEnumerator_Rewired_ActionElementMap__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ActionElementMap>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method);
}
inline void Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::System_Collections_Generic_IEnumerable_Rewired_ActionElementMap__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ActionElementMap>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF* Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>"
constexpr  Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::operator ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::i___System__Collections__Generic__IEnumerable_1___Rewired__ActionElementMap__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>"
constexpr  Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::operator ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::i___System__Collections__Generic__IEnumerator_1___Rewired__ActionElementMap__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF::ControllerMap_FkZONdJFjjMLZoCupvYBGIdftlHF()   {
}
//  Writing Method size for method: ::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::*)(int32_t)>(&::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::_ctor)> {
  constexpr static std::size_t size = 0x3cb0;
  constexpr static std::size_t addrs = 0x180d66740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::*)()>(&::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1819a95e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::*)()>(&::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::MoveNext)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1819a9270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA.edrBbKMgMUHrnIQQZCtpqhQNenQIb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::*)()>(&::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::edrBbKMgMUHrnIQQZCtpqhQNenQIb)> {
  constexpr static std::size_t size = 0x3cd0;
  constexpr static std::size_t addrs = 0x180d700b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA*>(),
                        {"edrBbKMgMUHrnIQQZCtpqhQNenQIb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA.xfxbTIFrlprzjtAGbOjfsTXQNltl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::*)()>(&::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::xfxbTIFrlprzjtAGbOjfsTXQNltl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181828a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA*>(),
                        {"xfxbTIFrlprzjtAGbOjfsTXQNltl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA.System_Collections_Generic_IEnumerator_Rewired_ActionElementMap__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::*)()>(&::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::System_Collections_Generic_IEnumerator_Rewired_ActionElementMap__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ActionElementMap>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::*)()>(&::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::*)()>(&::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA.System_Collections_Generic_IEnumerable_Rewired_ActionElementMap__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>* (::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::*)()>(&::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::System_Collections_Generic_IEnumerable_Rewired_ActionElementMap__GetEnumerator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1819a9540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ActionElementMap>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::*)()>(&::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1819a9540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_get_pIBfHRAxGZxBbkXdDHrOUKQDcXqk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pIBfHRAxGZxBbkXdDHrOUKQDcXqk;
}
constexpr int32_t const& Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_get_pIBfHRAxGZxBbkXdDHrOUKQDcXqk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pIBfHRAxGZxBbkXdDHrOUKQDcXqk;
}
constexpr void Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_set_pIBfHRAxGZxBbkXdDHrOUKQDcXqk(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pIBfHRAxGZxBbkXdDHrOUKQDcXqk = value;
}
constexpr ::Rewired::ActionElementMap*& Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_get_oeKxVmqzZvtSojRSxIhmVFOlHsoR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oeKxVmqzZvtSojRSxIhmVFOlHsoR;
}
constexpr ::Rewired::ActionElementMap* const& Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_get_oeKxVmqzZvtSojRSxIhmVFOlHsoR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oeKxVmqzZvtSojRSxIhmVFOlHsoR;
}
constexpr void Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_set_oeKxVmqzZvtSojRSxIhmVFOlHsoR(::Rewired::ActionElementMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oeKxVmqzZvtSojRSxIhmVFOlHsoR = value;
}
constexpr int32_t& Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_get_VasWQDtlQVWUqqYvDgUGOCrwAYdp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VasWQDtlQVWUqqYvDgUGOCrwAYdp;
}
constexpr int32_t const& Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_get_VasWQDtlQVWUqqYvDgUGOCrwAYdp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VasWQDtlQVWUqqYvDgUGOCrwAYdp;
}
constexpr void Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_set_VasWQDtlQVWUqqYvDgUGOCrwAYdp(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VasWQDtlQVWUqqYvDgUGOCrwAYdp = value;
}
constexpr ::Rewired::ControllerMap*& Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_get_KMgeSlCAqldOlJofIVXuJHoFHmTDb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KMgeSlCAqldOlJofIVXuJHoFHmTDb;
}
constexpr ::Rewired::ControllerMap* const& Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_get_KMgeSlCAqldOlJofIVXuJHoFHmTDb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KMgeSlCAqldOlJofIVXuJHoFHmTDb;
}
constexpr void Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_set_KMgeSlCAqldOlJofIVXuJHoFHmTDb(::Rewired::ControllerMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KMgeSlCAqldOlJofIVXuJHoFHmTDb = value;
}
constexpr ::Rewired::IControllerElementTarget*& Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_get_SwHhVSuYINuZhGIlrptLZrtNbLix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SwHhVSuYINuZhGIlrptLZrtNbLix;
}
constexpr ::Rewired::IControllerElementTarget* const& Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_get_SwHhVSuYINuZhGIlrptLZrtNbLix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SwHhVSuYINuZhGIlrptLZrtNbLix;
}
constexpr void Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_set_SwHhVSuYINuZhGIlrptLZrtNbLix(::Rewired::IControllerElementTarget*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SwHhVSuYINuZhGIlrptLZrtNbLix = value;
}
constexpr ::Rewired::IControllerElementTarget*& Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_get_NMOAamFRZcxRYGTWTeonbhnkTQmac()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NMOAamFRZcxRYGTWTeonbhnkTQmac;
}
constexpr ::Rewired::IControllerElementTarget* const& Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_get_NMOAamFRZcxRYGTWTeonbhnkTQmac() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NMOAamFRZcxRYGTWTeonbhnkTQmac;
}
constexpr void Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_set_NMOAamFRZcxRYGTWTeonbhnkTQmac(::Rewired::IControllerElementTarget*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NMOAamFRZcxRYGTWTeonbhnkTQmac = value;
}
constexpr int32_t& Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_get_ONAZBLMQiOkuvEfHQnDCRpxNVgZh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ONAZBLMQiOkuvEfHQnDCRpxNVgZh;
}
constexpr int32_t const& Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_get_ONAZBLMQiOkuvEfHQnDCRpxNVgZh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ONAZBLMQiOkuvEfHQnDCRpxNVgZh;
}
constexpr void Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_set_ONAZBLMQiOkuvEfHQnDCRpxNVgZh(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ONAZBLMQiOkuvEfHQnDCRpxNVgZh = value;
}
constexpr int32_t& Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_get_WkxgINIjbsWTTmqbfMahTafesXPF()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WkxgINIjbsWTTmqbfMahTafesXPF;
}
constexpr int32_t const& Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_get_WkxgINIjbsWTTmqbfMahTafesXPF() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WkxgINIjbsWTTmqbfMahTafesXPF;
}
constexpr void Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_set_WkxgINIjbsWTTmqbfMahTafesXPF(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WkxgINIjbsWTTmqbfMahTafesXPF = value;
}
constexpr bool& Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_get_ZrjcgFiNPjqdVXeaJiLWARVaoVWnB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZrjcgFiNPjqdVXeaJiLWARVaoVWnB;
}
constexpr bool const& Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_get_ZrjcgFiNPjqdVXeaJiLWARVaoVWnB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZrjcgFiNPjqdVXeaJiLWARVaoVWnB;
}
constexpr void Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_set_ZrjcgFiNPjqdVXeaJiLWARVaoVWnB(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZrjcgFiNPjqdVXeaJiLWARVaoVWnB = value;
}
constexpr bool& Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_get_ABnIwjcVfyZpUTUDFbccdfXifleg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ABnIwjcVfyZpUTUDFbccdfXifleg;
}
constexpr bool const& Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_get_ABnIwjcVfyZpUTUDFbccdfXifleg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ABnIwjcVfyZpUTUDFbccdfXifleg;
}
constexpr void Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_set_ABnIwjcVfyZpUTUDFbccdfXifleg(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ABnIwjcVfyZpUTUDFbccdfXifleg = value;
}
constexpr ::Rewired::Utils::TempListPool_TList_1<::Rewired::ActionElementMap*>*& Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_get_RCjFlEyjEgVXUwUfHbXOZhxfOJCh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RCjFlEyjEgVXUwUfHbXOZhxfOJCh;
}
constexpr ::Rewired::Utils::TempListPool_TList_1<::Rewired::ActionElementMap*>* const& Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_get_RCjFlEyjEgVXUwUfHbXOZhxfOJCh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RCjFlEyjEgVXUwUfHbXOZhxfOJCh;
}
constexpr void Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_set_RCjFlEyjEgVXUwUfHbXOZhxfOJCh(::Rewired::Utils::TempListPool_TList_1<::Rewired::ActionElementMap*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RCjFlEyjEgVXUwUfHbXOZhxfOJCh = value;
}
constexpr ::System::Collections::Generic::List_1_Enumerator<::Rewired::ActionElementMap*>& Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_get_QmvHkIKVAntsJZTBaEoUcdbHjNNjA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QmvHkIKVAntsJZTBaEoUcdbHjNNjA;
}
constexpr ::System::Collections::Generic::List_1_Enumerator<::Rewired::ActionElementMap*> const& Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_get_QmvHkIKVAntsJZTBaEoUcdbHjNNjA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QmvHkIKVAntsJZTBaEoUcdbHjNNjA;
}
constexpr void Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::__cordl_internal_set_QmvHkIKVAntsJZTBaEoUcdbHjNNjA(::System::Collections::Generic::List_1_Enumerator<::Rewired::ActionElementMap*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QmvHkIKVAntsJZTBaEoUcdbHjNNjA = value;
}
inline void Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::edrBbKMgMUHrnIQQZCtpqhQNenQIb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA*>(),
                        {"edrBbKMgMUHrnIQQZCtpqhQNenQIb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::xfxbTIFrlprzjtAGbOjfsTXQNltl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA*>(),
                        {"xfxbTIFrlprzjtAGbOjfsTXQNltl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::System_Collections_Generic_IEnumerator_Rewired_ActionElementMap__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ActionElementMap>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method);
}
inline void Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::System_Collections_Generic_IEnumerable_Rewired_ActionElementMap__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ActionElementMap>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA* Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>"
constexpr  Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::operator ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::i___System__Collections__Generic__IEnumerable_1___Rewired__ActionElementMap__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>"
constexpr  Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::operator ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::i___System__Collections__Generic__IEnumerator_1___Rewired__ActionElementMap__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ActionElementMap*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA::ControllerMap_ldKHGqHgdKcDTKPrpKrWqByCPanEA()   {
}
//  Writing Method size for method: ::Rewired::ControllerMap.TauLCCMFsWvYNVkjMRoXIeCbgykg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Rewired::ControllerMap::TauLCCMFsWvYNVkjMRoXIeCbgykg)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819902d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"TauLCCMFsWvYNVkjMRoXIeCbgykg", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.PvICpsylUhECoPXcmjUfTUtdVhdf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::ControllerMap::PvICpsylUhECoPXcmjUfTUtdVhdf)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18198f010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"PvICpsylUhECoPXcmjUfTUtdVhdf", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1819912b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap::*)(::Rewired::ControllerMap*)>(&::Rewired::ControllerMap::_ctor)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x181991430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.get_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::get_id)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181992750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.get_sourceMapId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::get_sourceMapId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181992aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_sourceMapId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.twjyPoWRnJYbTuEtBDKBmEdyAhHX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap::*)(int32_t)>(&::Rewired::ControllerMap::twjyPoWRnJYbTuEtBDKBmEdyAhHX)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"twjyPoWRnJYbTuEtBDKBmEdyAhHX", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.get_categoryId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::get_categoryId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181992450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_categoryId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.MbsqFicIxYDWRfQbsdgdZOfNeWiu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap::*)(int32_t)>(&::Rewired::ControllerMap::MbsqFicIxYDWRfQbsdgdZOfNeWiu)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"MbsqFicIxYDWRfQbsdgdZOfNeWiu", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.get_layoutId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::get_layoutId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181992850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_layoutId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.lqtFKbXaKxkWDtEIqEcgmgilHvtx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap::*)(int32_t)>(&::Rewired::ControllerMap::lqtFKbXaKxkWDtEIqEcgmgilHvtx)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f43d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"lqtFKbXaKxkWDtEIqEcgmgilHvtx", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::get_name)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181992960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.rAAAXRHBfLqjKlqUIdNecZCAsnPPA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap::*)(::StringW)>(&::Rewired::ControllerMap::rAAAXRHBfLqjKlqUIdNecZCAsnPPA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"rAAAXRHBfLqjKlqUIdNecZCAsnPPA", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.get_hardwareGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::get_hardwareGuid)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819926c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_hardwareGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.WQtpuDzpqFeHiiiKjbBLHVtdBRjc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap::*)(::System::Guid)>(&::Rewired::ControllerMap::WQtpuDzpqFeHiiiKjbBLHVtdBRjc)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816eaa00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"WQtpuDzpqFeHiiiKjbBLHVtdBRjc", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::get_enabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181992660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.set_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap::*)(bool)>(&::Rewired::ControllerMap::set_enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180323260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.get_playerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::get_playerId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819929d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_playerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.WUztEXtdepGRaEPIhQIywdUJOVcg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap::*)(int32_t)>(&::Rewired::ControllerMap::WUztEXtdepGRaEPIhQIywdUJOVcg)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d5ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"WUztEXtdepGRaEPIhQIywdUJOVcg", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.get_controllerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::get_controllerId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_controllerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.dtNFGDCiloHyZynoliqHANCGFfRMA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap::*)(int32_t)>(&::Rewired::ControllerMap::dtNFGDCiloHyZynoliqHANCGFfRMA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804a5a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"dtNFGDCiloHyZynoliqHANCGFfRMA", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.get_controller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller* (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::get_controller)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181992570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_controller", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.get_controllerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerType (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::get_controllerType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181992510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_controllerType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.get_player
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Player* (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::get_player)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181992a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_player", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.get_elementMapCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::get_elementMapCount)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1819925f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_elementMapCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.get_buttonMapCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::get_buttonMapCount)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1819923e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_buttonMapCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.get_AllMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>* (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::get_AllMaps)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181992320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_AllMaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.get_ElementMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>* (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::get_ElementMaps)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181992320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_ElementMaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.get_ButtonMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>* (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::get_ButtonMaps)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181992380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_ButtonMaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.get_modifiedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::get_modifiedTime)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1819928b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_modifiedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.get_isModified
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::get_isModified)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1819927b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_isModified", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.set_isModified
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap::*)(bool)>(&::Rewired::ControllerMap::set_isModified)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181993470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"set_isModified", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ContainsAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(::StringW)>(&::Rewired::ControllerMap::ContainsAction)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181988f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ContainsAction", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ContainsAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(int32_t)>(&::Rewired::ControllerMap::ContainsAction)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181988fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ContainsElementIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(int32_t)>(&::Rewired::ControllerMap::ContainsElementIdentifier)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1819890e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ContainsElementIdentifier", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ContainsKeyboardKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(::UnityEngine::KeyCode, ::Rewired::ModifierKeyFlags)>(&::Rewired::ControllerMap::ContainsKeyboardKey)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181989320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ContainsKeyboardKey", {}, {::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ContainsElementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(::Rewired::ActionElementMap*)>(&::Rewired::ControllerMap::ContainsElementMap)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1819891a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ContainsElementMap", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ContainsElementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(int32_t)>(&::Rewired::ControllerMap::ContainsElementMap)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181989260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ContainsElementMap", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ReplaceOrCreateElementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(::Rewired::ElementAssignment)>(&::Rewired::ControllerMap::ReplaceOrCreateElementMap)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18198fe20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ReplaceOrCreateElementMap", {}, {::i2c::type_of<::Rewired::ElementAssignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ReplaceOrCreateElementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(::Rewired::ElementAssignment, ::by_ref<::Rewired::ActionElementMap*>)>(&::Rewired::ControllerMap::ReplaceOrCreateElementMap)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18198ff60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ReplaceOrCreateElementMap", {}, {::i2c::type_of<::Rewired::ElementAssignment>(), ::i2c::type_of<::by_ref<::Rewired::ActionElementMap*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.CreateElementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(::Rewired::ElementAssignment)>(&::Rewired::ControllerMap::CreateElementMap)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x181989590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"CreateElementMap", {}, {::i2c::type_of<::Rewired::ElementAssignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.CreateElementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(::Rewired::ElementAssignment, ::by_ref<::Rewired::ActionElementMap*>)>(&::Rewired::ControllerMap::CreateElementMap)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181989900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"CreateElementMap", {}, {::i2c::type_of<::Rewired::ElementAssignment>(), ::i2c::type_of<::by_ref<::Rewired::ActionElementMap*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.CreateElementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(int32_t, ::Rewired::Pole, ::UnityEngine::KeyCode, ::Rewired::ModifierKey, ::Rewired::ModifierKey, ::Rewired::ModifierKey)>(&::Rewired::ControllerMap::CreateElementMap)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1819898b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"CreateElementMap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKey>(), ::i2c::type_of<::Rewired::ModifierKey>(), ::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.CreateElementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(int32_t, ::Rewired::Pole, ::UnityEngine::KeyCode, ::Rewired::ModifierKey, ::Rewired::ModifierKey, ::Rewired::ModifierKey, ::by_ref<::Rewired::ActionElementMap*>)>(&::Rewired::ControllerMap::CreateElementMap)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181989430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"CreateElementMap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKey>(), ::i2c::type_of<::Rewired::ModifierKey>(), ::i2c::type_of<::Rewired::ModifierKey>(), ::i2c::type_of<::by_ref<::Rewired::ActionElementMap*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.CreateElementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(int32_t, ::Rewired::Pole, ::UnityEngine::KeyCode, ::Rewired::ModifierKeyFlags)>(&::Rewired::ControllerMap::CreateElementMap)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181989bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"CreateElementMap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.CreateElementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(int32_t, ::Rewired::Pole, ::UnityEngine::KeyCode, ::Rewired::ModifierKeyFlags, ::by_ref<::Rewired::ActionElementMap*>)>(&::Rewired::ControllerMap::CreateElementMap)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1819897c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"CreateElementMap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>(), ::i2c::type_of<::by_ref<::Rewired::ActionElementMap*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.CreateElementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(int32_t, ::Rewired::Pole, int32_t, ::Rewired::ControllerElementType, ::Rewired::AxisRange, bool)>(&::Rewired::ControllerMap::CreateElementMap)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181989b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"CreateElementMap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.CreateElementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(int32_t, ::Rewired::Pole, int32_t, ::Rewired::ControllerElementType, ::Rewired::AxisRange, bool, ::by_ref<::Rewired::ActionElementMap*>)>(&::Rewired::ControllerMap::CreateElementMap)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181989a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ReplaceElementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(::Rewired::ElementAssignment)>(&::Rewired::ControllerMap::ReplaceElementMap)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18198f6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ReplaceElementMap", {}, {::i2c::type_of<::Rewired::ElementAssignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ReplaceElementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(::Rewired::ElementAssignment, ::by_ref<::Rewired::ActionElementMap*>)>(&::Rewired::ControllerMap::ReplaceElementMap)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18198fae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ReplaceElementMap", {}, {::i2c::type_of<::Rewired::ElementAssignment>(), ::i2c::type_of<::by_ref<::Rewired::ActionElementMap*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ReplaceElementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(int32_t, int32_t, ::Rewired::Pole, ::UnityEngine::KeyCode, ::Rewired::ModifierKey, ::Rewired::ModifierKey, ::Rewired::ModifierKey)>(&::Rewired::ControllerMap::ReplaceElementMap)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18198f9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ReplaceElementMap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKey>(), ::i2c::type_of<::Rewired::ModifierKey>(), ::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ReplaceElementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(int32_t, int32_t, ::Rewired::Pole, ::UnityEngine::KeyCode, ::Rewired::ModifierKey, ::Rewired::ModifierKey, ::Rewired::ModifierKey, ::by_ref<::Rewired::ActionElementMap*>)>(&::Rewired::ControllerMap::ReplaceElementMap)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18198fc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ReplaceElementMap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKey>(), ::i2c::type_of<::Rewired::ModifierKey>(), ::i2c::type_of<::Rewired::ModifierKey>(), ::i2c::type_of<::by_ref<::Rewired::ActionElementMap*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ReplaceElementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(int32_t, int32_t, ::Rewired::Pole, ::UnityEngine::KeyCode, ::Rewired::ModifierKeyFlags)>(&::Rewired::ControllerMap::ReplaceElementMap)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18198f730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ReplaceElementMap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ReplaceElementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(int32_t, int32_t, ::Rewired::Pole, ::UnityEngine::KeyCode, ::Rewired::ModifierKeyFlags, ::by_ref<::Rewired::ActionElementMap*>)>(&::Rewired::ControllerMap::ReplaceElementMap)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18198fa30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ReplaceElementMap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>(), ::i2c::type_of<::by_ref<::Rewired::ActionElementMap*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ReplaceElementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(int32_t, int32_t, ::Rewired::Pole, int32_t, ::Rewired::ControllerElementType, ::Rewired::AxisRange, bool)>(&::Rewired::ControllerMap::ReplaceElementMap)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18198f7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ReplaceElementMap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ReplaceElementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(int32_t, int32_t, ::Rewired::Pole, int32_t, ::Rewired::ControllerElementType, ::Rewired::AxisRange, bool, ::by_ref<::Rewired::ActionElementMap*>)>(&::Rewired::ControllerMap::ReplaceElementMap)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18198f850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.DeleteElementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(int32_t)>(&::Rewired::ControllerMap::DeleteElementMap)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18198a150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.DeleteElementMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(::StringW)>(&::Rewired::ControllerMap::DeleteElementMapsWithAction)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18198a1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.DeleteElementMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(int32_t)>(&::Rewired::ControllerMap::DeleteElementMapsWithAction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18198a260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetElementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerMap::*)(int32_t)>(&::Rewired::ControllerMap::GetElementMap)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18198cd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetElementMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::ActionElementMap*> (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::GetElementMaps)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18198dd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetElementMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::ActionElementMap*> (::Rewired::ControllerMap::*)(bool)>(&::Rewired::ControllerMap::GetElementMaps)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x18198dae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMaps", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetElementMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*)>(&::Rewired::ControllerMap::GetElementMaps)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18198de50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMaps", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetElementMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(bool, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*)>(&::Rewired::ControllerMap::GetElementMaps)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18198dd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMaps", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetElementMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::ActionElementMap*> (::Rewired::ControllerMap::*)(::StringW)>(&::Rewired::ControllerMap::GetElementMapsWithAction)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18198d4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithAction", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetElementMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::ActionElementMap*> (::Rewired::ControllerMap::*)(int32_t)>(&::Rewired::ControllerMap::GetElementMapsWithAction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18198cf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetElementMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::ActionElementMap*> (::Rewired::ControllerMap::*)(::StringW, bool)>(&::Rewired::ControllerMap::GetElementMapsWithAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18198d420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetElementMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::ActionElementMap*> (::Rewired::ControllerMap::*)(int32_t, bool)>(&::Rewired::ControllerMap::GetElementMapsWithAction)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x18198d050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithAction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetElementMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::StringW, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*)>(&::Rewired::ControllerMap::GetElementMapsWithAction)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18198ce60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetElementMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(int32_t, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*)>(&::Rewired::ControllerMap::GetElementMapsWithAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18198d020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithAction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetElementMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::StringW, bool, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*)>(&::Rewired::ControllerMap::GetElementMapsWithAction)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18198cf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetElementMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(int32_t, bool, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*)>(&::Rewired::ControllerMap::GetElementMapsWithAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18198cf20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithAction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ElementMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* (::Rewired::ControllerMap::*)(::StringW)>(&::Rewired::ControllerMap::ElementMapsWithAction)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18198ae20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ElementMapsWithAction", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ElementMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* (::Rewired::ControllerMap::*)(int32_t)>(&::Rewired::ControllerMap::ElementMapsWithAction)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18198af60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ElementMapsWithAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ElementMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* (::Rewired::ControllerMap::*)(::StringW, bool)>(&::Rewired::ControllerMap::ElementMapsWithAction)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18198afc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ElementMapsWithAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ElementMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* (::Rewired::ControllerMap::*)(int32_t, bool)>(&::Rewired::ControllerMap::ElementMapsWithAction)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18198aef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ElementMapsWithAction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetFirstElementMapWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerMap::*)(int32_t)>(&::Rewired::ControllerMap::GetFirstElementMapWithAction)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18198e530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetFirstElementMapWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerMap::*)(::StringW)>(&::Rewired::ControllerMap::GetFirstElementMapWithAction)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18198e3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetFirstElementMapWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerMap::*)(int32_t, bool)>(&::Rewired::ControllerMap::GetFirstElementMapWithAction)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18198e280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetFirstElementMapWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerMap::*)(::StringW, bool)>(&::Rewired::ControllerMap::GetFirstElementMapWithAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18198e480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetFirstElementMapWithAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ElementMapsWithElementTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* (::Rewired::ControllerMap::*)(::Rewired::ControllerElementTarget, bool)>(&::Rewired::ControllerMap::ElementMapsWithElementTarget)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18198b340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ElementMapsWithElementTarget", {}, {::i2c::type_of<::Rewired::ControllerElementTarget>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ElementMapsWithElementTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* (::Rewired::ControllerMap::*)(::Rewired::IControllerElementTarget*, bool)>(&::Rewired::ControllerMap::ElementMapsWithElementTarget)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18198b430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ElementMapsWithElementTarget", {}, {::i2c::type_of<::Rewired::IControllerElementTarget*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ElementMapsWithElementTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* (::Rewired::ControllerMap::*)(::Rewired::ControllerElementTarget, int32_t, bool)>(&::Rewired::ControllerMap::ElementMapsWithElementTarget)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18198b4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ElementMapsWithElementTarget", {}, {::i2c::type_of<::Rewired::ControllerElementTarget>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ElementMapsWithElementTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* (::Rewired::ControllerMap::*)(::Rewired::ControllerElementTarget, ::StringW, bool)>(&::Rewired::ControllerMap::ElementMapsWithElementTarget)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18198b200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ElementMapsWithElementTarget", {}, {::i2c::type_of<::Rewired::ControllerElementTarget>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ElementMapsWithElementTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* (::Rewired::ControllerMap::*)(::Rewired::IControllerElementTarget*, int32_t, bool)>(&::Rewired::ControllerMap::ElementMapsWithElementTarget)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18198b0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ElementMapsWithElementTarget", {}, {::i2c::type_of<::Rewired::IControllerElementTarget*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ElementMapsWithElementTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* (::Rewired::ControllerMap::*)(::Rewired::IControllerElementTarget*, ::StringW, bool)>(&::Rewired::ControllerMap::ElementMapsWithElementTarget)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18198b140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ElementMapsWithElementTarget", {}, {::i2c::type_of<::Rewired::IControllerElementTarget*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetFirstElementMapWithElementTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerMap::*)(::Rewired::ControllerElementTarget, bool)>(&::Rewired::ControllerMap::GetFirstElementMapWithElementTarget)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18198e800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetFirstElementMapWithElementTarget", {}, {::i2c::type_of<::Rewired::ControllerElementTarget>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetFirstElementMapWithElementTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerMap::*)(::Rewired::IControllerElementTarget*, bool)>(&::Rewired::ControllerMap::GetFirstElementMapWithElementTarget)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18198e680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetFirstElementMapWithElementTarget", {}, {::i2c::type_of<::Rewired::IControllerElementTarget*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetFirstElementMapWithElementTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerMap::*)(::Rewired::ControllerElementTarget, int32_t, bool)>(&::Rewired::ControllerMap::GetFirstElementMapWithElementTarget)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18198e740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetFirstElementMapWithElementTarget", {}, {::i2c::type_of<::Rewired::ControllerElementTarget>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetFirstElementMapWithElementTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerMap::*)(::Rewired::ControllerElementTarget, ::StringW, bool)>(&::Rewired::ControllerMap::GetFirstElementMapWithElementTarget)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18198e550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetFirstElementMapWithElementTarget", {}, {::i2c::type_of<::Rewired::ControllerElementTarget>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetFirstElementMapWithElementTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerMap::*)(::Rewired::IControllerElementTarget*, int32_t, bool)>(&::Rewired::ControllerMap::GetFirstElementMapWithElementTarget)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18198e9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetFirstElementMapWithElementTarget", {}, {::i2c::type_of<::Rewired::IControllerElementTarget*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetFirstElementMapWithElementTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerMap::*)(::Rewired::IControllerElementTarget*, ::StringW, bool)>(&::Rewired::ControllerMap::GetFirstElementMapWithElementTarget)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18198e940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetFirstElementMapWithElementTarget", {}, {::i2c::type_of<::Rewired::IControllerElementTarget*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetElementMapsWithElementTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::ControllerElementTarget, bool, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*)>(&::Rewired::ControllerMap::GetElementMapsWithElementTarget)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18198d7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithElementTarget", {}, {::i2c::type_of<::Rewired::ControllerElementTarget>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetElementMapsWithElementTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::IControllerElementTarget*, bool, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*)>(&::Rewired::ControllerMap::GetElementMapsWithElementTarget)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18198d6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithElementTarget", {}, {::i2c::type_of<::Rewired::IControllerElementTarget*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetElementMapsWithElementTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::ControllerElementTarget, int32_t, bool, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*)>(&::Rewired::ControllerMap::GetElementMapsWithElementTarget)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18198d570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithElementTarget", {}, {::i2c::type_of<::Rewired::ControllerElementTarget>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetElementMapsWithElementTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::ControllerElementTarget, ::StringW, bool, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*)>(&::Rewired::ControllerMap::GetElementMapsWithElementTarget)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18198d8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithElementTarget", {}, {::i2c::type_of<::Rewired::ControllerElementTarget>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetElementMapsWithElementTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::IControllerElementTarget*, int32_t, bool, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*)>(&::Rewired::ControllerMap::GetElementMapsWithElementTarget)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18198da10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithElementTarget", {}, {::i2c::type_of<::Rewired::IControllerElementTarget*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetElementMapsWithElementTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::IControllerElementTarget*, ::StringW, bool, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*)>(&::Rewired::ControllerMap::GetElementMapsWithElementTarget)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18198d630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithElementTarget", {}, {::i2c::type_of<::Rewired::IControllerElementTarget*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetFirstElementMapMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerMap::*)(::System::Predicate_1<::Rewired::ActionElementMap*>*)>(&::Rewired::ControllerMap::GetFirstElementMapMatch)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18198e200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetFirstElementMapMatch", {}, {::i2c::type_of<::System::Predicate_1<::Rewired::ActionElementMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.sJKzqIFNdhLHWFqpnchEmnOuDAxL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerMap::*)(::System::Predicate_1<::Rewired::ActionElementMap*>*, bool)>(&::Rewired::ControllerMap::sJKzqIFNdhLHWFqpnchEmnOuDAxL)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181993460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetElementMapMatches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::System::Predicate_1<::Rewired::ActionElementMap*>*, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*)>(&::Rewired::ControllerMap::GetElementMapMatches)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18198ccb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapMatches", {}, {::i2c::type_of<::System::Predicate_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.qWnJJxCCRRIQOubeAisTkhGTvnue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::System::Predicate_1<::Rewired::ActionElementMap*>*, bool, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*, bool)>(&::Rewired::ControllerMap::qWnJJxCCRRIQOubeAisTkhGTvnue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181993440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ForEachElementMapMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap::*)(::System::Predicate_1<::Rewired::ActionElementMap*>*, ::System::Action_1<::Rewired::ActionElementMap*>*)>(&::Rewired::ControllerMap::ForEachElementMapMatch)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18198bf20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ForEachElementMapMatch", {}, {::i2c::type_of<::System::Predicate_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<::System::Action_1<::Rewired::ActionElementMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ClearElementMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::ClearElementMaps)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181988e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.SetAllElementMapsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(bool)>(&::Rewired::ControllerMap::SetAllElementMapsEnabled)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181990130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"SetAllElementMapsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetButtonMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerMap::*)(int32_t)>(&::Rewired::ControllerMap::GetButtonMap)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18198c140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonMap", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetButtonMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::ActionElementMap*> (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::GetButtonMaps)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18198c840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonMaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetButtonMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::ActionElementMap*> (::Rewired::ControllerMap::*)(bool)>(&::Rewired::ControllerMap::GetButtonMaps)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18198ca10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonMaps", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetButtonMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(bool, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*)>(&::Rewired::ControllerMap::GetButtonMaps)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18198c8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonMaps", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetButtonMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::ActionElementMap*> (::Rewired::ControllerMap::*)(::StringW)>(&::Rewired::ControllerMap::GetButtonMapsWithAction)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18198c350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonMapsWithAction", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetButtonMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::ActionElementMap*> (::Rewired::ControllerMap::*)(int32_t)>(&::Rewired::ControllerMap::GetButtonMapsWithAction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18198c410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonMapsWithAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetButtonMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::ActionElementMap*> (::Rewired::ControllerMap::*)(::StringW, bool)>(&::Rewired::ControllerMap::GetButtonMapsWithAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18198c4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonMapsWithAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetButtonMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::ActionElementMap*> (::Rewired::ControllerMap::*)(int32_t, bool)>(&::Rewired::ControllerMap::GetButtonMapsWithAction)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18198c660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonMapsWithAction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetButtonMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::StringW, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*)>(&::Rewired::ControllerMap::GetButtonMapsWithAction)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18198c420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonMapsWithAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetButtonMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(int32_t, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*)>(&::Rewired::ControllerMap::GetButtonMapsWithAction)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18198c3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonMapsWithAction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetButtonMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::StringW, bool, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*)>(&::Rewired::ControllerMap::GetButtonMapsWithAction)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18198c5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonMapsWithAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetButtonMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(int32_t, bool, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*)>(&::Rewired::ControllerMap::GetButtonMapsWithAction)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18198c1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonMapsWithAction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ButtonMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* (::Rewired::ControllerMap::*)(int32_t)>(&::Rewired::ControllerMap::ButtonMapsWithAction)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181988dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ButtonMapsWithAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ButtonMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* (::Rewired::ControllerMap::*)(::StringW)>(&::Rewired::ControllerMap::ButtonMapsWithAction)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181988c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ButtonMapsWithAction", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ButtonMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* (::Rewired::ControllerMap::*)(int32_t, bool)>(&::Rewired::ControllerMap::ButtonMapsWithAction)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181988e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ButtonMapsWithAction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ButtonMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* (::Rewired::ControllerMap::*)(::StringW, bool)>(&::Rewired::ControllerMap::ButtonMapsWithAction)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181988cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ButtonMapsWithAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetFirstButtonMapWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerMap::*)(int32_t)>(&::Rewired::ControllerMap::GetFirstButtonMapWithAction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18198e0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetFirstButtonMapWithAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetFirstButtonMapWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerMap::*)(::StringW)>(&::Rewired::ControllerMap::GetFirstButtonMapWithAction)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18198e170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetFirstButtonMapWithAction", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetFirstButtonMapWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerMap::*)(int32_t, bool)>(&::Rewired::ControllerMap::GetFirstButtonMapWithAction)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18198df90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetFirstButtonMapWithAction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetFirstButtonMapWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerMap::*)(::StringW, bool)>(&::Rewired::ControllerMap::GetFirstButtonMapWithAction)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18198e0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetFirstButtonMapWithAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetFirstButtonMapMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerMap::*)(::System::Predicate_1<::Rewired::ActionElementMap*>*)>(&::Rewired::ControllerMap::GetFirstButtonMapMatch)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18198df10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetFirstButtonMapMatch", {}, {::i2c::type_of<::System::Predicate_1<::Rewired::ActionElementMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.OckQUVtpXhosZHYrYRQvNyTUGffg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerMap::*)(::System::Predicate_1<::Rewired::ActionElementMap*>*, bool)>(&::Rewired::ControllerMap::OckQUVtpXhosZHYrYRQvNyTUGffg)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18198ebe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"OckQUVtpXhosZHYrYRQvNyTUGffg", {}, {::i2c::type_of<::System::Predicate_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetButtonMapMatches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::System::Predicate_1<::Rewired::ActionElementMap*>*, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*)>(&::Rewired::ControllerMap::GetButtonMapMatches)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18198c0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonMapMatches", {}, {::i2c::type_of<::System::Predicate_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.XdvAEImdTlOrlcBFDCONqGkoejBY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::System::Predicate_1<::Rewired::ActionElementMap*>*, bool, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*, bool)>(&::Rewired::ControllerMap::XdvAEImdTlOrlcBFDCONqGkoejBY)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x181990f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"XdvAEImdTlOrlcBFDCONqGkoejBY", {}, {::i2c::type_of<::System::Predicate_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ForEachButtonMapMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap::*)(::System::Predicate_1<::Rewired::ActionElementMap*>*, ::System::Action_1<::Rewired::ActionElementMap*>*)>(&::Rewired::ControllerMap::ForEachButtonMapMatch)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18198b630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ForEachButtonMapMatch", {}, {::i2c::type_of<::System::Predicate_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<::System::Action_1<::Rewired::ActionElementMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.DeleteButtonMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(::StringW)>(&::Rewired::ControllerMap::DeleteButtonMapsWithAction)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181989fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"DeleteButtonMapsWithAction", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.DeleteButtonMapsWithAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(int32_t)>(&::Rewired::ControllerMap::DeleteButtonMapsWithAction)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18198a040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"DeleteButtonMapsWithAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.SetAllButtonMapsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(bool)>(&::Rewired::ControllerMap::SetAllButtonMapsEnabled)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181990050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"SetAllButtonMapsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.DoesElementAssignmentConflict
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(::Rewired::ControllerMap*)>(&::Rewired::ControllerMap::DoesElementAssignmentConflict)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18198ab70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"DoesElementAssignmentConflict", {}, {::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.DoesElementAssignmentConflict
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(::Rewired::ActionElementMap*)>(&::Rewired::ControllerMap::DoesElementAssignmentConflict)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18198a980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"DoesElementAssignmentConflict", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.DoesElementAssignmentConflict
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(::Rewired::ElementAssignmentConflictCheck)>(&::Rewired::ControllerMap::DoesElementAssignmentConflict)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18198a680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"DoesElementAssignmentConflict", {}, {::i2c::type_of<::Rewired::ElementAssignmentConflictCheck>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.DoesElementAssignmentConflict
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(::Rewired::ControllerMap*, bool)>(&::Rewired::ControllerMap::DoesElementAssignmentConflict)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18198a9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.DoesElementAssignmentConflict
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(::Rewired::ActionElementMap*, bool)>(&::Rewired::ControllerMap::DoesElementAssignmentConflict)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18198a6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.DoesElementAssignmentConflict
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(::Rewired::ElementAssignmentConflictCheck, bool)>(&::Rewired::ControllerMap::DoesElementAssignmentConflict)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18198a7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ElementAssignmentConflicts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* (::Rewired::ControllerMap::*)(::Rewired::ControllerMap*)>(&::Rewired::ControllerMap::ElementAssignmentConflicts)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18198acb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ElementAssignmentConflicts", {}, {::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ElementAssignmentConflicts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* (::Rewired::ControllerMap::*)(::Rewired::ActionElementMap*)>(&::Rewired::ControllerMap::ElementAssignmentConflicts)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181686380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ElementAssignmentConflicts", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ElementAssignmentConflicts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* (::Rewired::ControllerMap::*)(::Rewired::ElementAssignmentConflictCheck)>(&::Rewired::ControllerMap::ElementAssignmentConflicts)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18198acd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ElementAssignmentConflicts", {}, {::i2c::type_of<::Rewired::ElementAssignmentConflictCheck>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ElementAssignmentConflicts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* (::Rewired::ControllerMap::*)(::Rewired::ControllerMap*, bool)>(&::Rewired::ControllerMap::ElementAssignmentConflicts)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18198ad20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ElementAssignmentConflicts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* (::Rewired::ControllerMap::*)(::Rewired::ActionElementMap*, bool)>(&::Rewired::ControllerMap::ElementAssignmentConflicts)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18198ada0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ElementAssignmentConflicts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* (::Rewired::ControllerMap::*)(::Rewired::ElementAssignmentConflictCheck, bool)>(&::Rewired::ControllerMap::ElementAssignmentConflicts)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18198ac10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.RemoveElementAssignmentConflicts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::ControllerMap*)>(&::Rewired::ControllerMap::RemoveElementAssignmentConflicts)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18198f140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"RemoveElementAssignmentConflicts", {}, {::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.RemoveElementAssignmentConflicts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::ActionElementMap*)>(&::Rewired::ControllerMap::RemoveElementAssignmentConflicts)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18198f560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"RemoveElementAssignmentConflicts", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.RemoveElementAssignmentConflicts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::ElementAssignmentConflictCheck)>(&::Rewired::ControllerMap::RemoveElementAssignmentConflicts)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18198f0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"RemoveElementAssignmentConflicts", {}, {::i2c::type_of<::Rewired::ElementAssignmentConflictCheck>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.RemoveElementAssignmentConflicts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::ControllerMap*, bool)>(&::Rewired::ControllerMap::RemoveElementAssignmentConflicts)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18198f160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.RemoveElementAssignmentConflicts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::ActionElementMap*, bool)>(&::Rewired::ControllerMap::RemoveElementAssignmentConflicts)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18198f580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.RemoveElementAssignmentConflicts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::ElementAssignmentConflictCheck, bool)>(&::Rewired::ControllerMap::RemoveElementAssignmentConflicts)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18198f370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.DisableElementAssignmentConflicts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::ControllerMap*)>(&::Rewired::ControllerMap::DisableElementAssignmentConflicts)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18198a490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"DisableElementAssignmentConflicts", {}, {::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.DisableElementAssignmentConflicts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::ActionElementMap*)>(&::Rewired::ControllerMap::DisableElementAssignmentConflicts)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18198a270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"DisableElementAssignmentConflicts", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.DisableElementAssignmentConflicts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::ElementAssignmentConflictCheck)>(&::Rewired::ControllerMap::DisableElementAssignmentConflicts)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18198a300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"DisableElementAssignmentConflicts", {}, {::i2c::type_of<::Rewired::ElementAssignmentConflictCheck>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.DisableElementAssignmentConflicts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::ControllerMap*, bool)>(&::Rewired::ControllerMap::DisableElementAssignmentConflicts)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18198a5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"DisableElementAssignmentConflicts", {}, {::i2c::type_of<::Rewired::ControllerMap*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.DisableElementAssignmentConflicts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::ActionElementMap*, bool)>(&::Rewired::ControllerMap::DisableElementAssignmentConflicts)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18198a520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"DisableElementAssignmentConflicts", {}, {::i2c::type_of<::Rewired::ActionElementMap*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.DisableElementAssignmentConflicts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::ElementAssignmentConflictCheck, bool)>(&::Rewired::ControllerMap::DisableElementAssignmentConflicts)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18198a3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"DisableElementAssignmentConflicts", {}, {::i2c::type_of<::Rewired::ElementAssignmentConflictCheck>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.lreiQkZaXZREXLsxDuFlqSxRDxzp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::ControllerMap*, bool, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*, bool)>(&::Rewired::ControllerMap::lreiQkZaXZREXLsxDuFlqSxRDxzp)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x181993170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.hXBTMlXsAYinehLhebvXeqUJPEhEb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::ActionElementMap*, bool, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*, bool)>(&::Rewired::ControllerMap::hXBTMlXsAYinehLhebvXeqUJPEhEb)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181992b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.PFxxoBJWdQTEMqTyYPsybeSObVZHA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::ElementAssignmentConflictCheck, bool, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*, bool)>(&::Rewired::ControllerMap::PFxxoBJWdQTEMqTyYPsybeSObVZHA)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18198ee40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ForEachElementAssignmentConflict
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::ControllerMap*, ::System::Action_1<::Rewired::ActionElementMap*>*)>(&::Rewired::ControllerMap::ForEachElementAssignmentConflict)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18198b800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ForEachElementAssignmentConflict", {}, {::i2c::type_of<::Rewired::ControllerMap*>(), ::i2c::type_of<::System::Action_1<::Rewired::ActionElementMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ForEachElementAssignmentConflict
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::ActionElementMap*, ::System::Action_1<::Rewired::ActionElementMap*>*)>(&::Rewired::ControllerMap::ForEachElementAssignmentConflict)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18198bab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ForEachElementAssignmentConflict", {}, {::i2c::type_of<::Rewired::ActionElementMap*>(), ::i2c::type_of<::System::Action_1<::Rewired::ActionElementMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ForEachElementAssignmentConflict
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::ElementAssignmentConflictCheck, ::System::Action_1<::Rewired::ActionElementMap*>*)>(&::Rewired::ControllerMap::ForEachElementAssignmentConflict)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18198b7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ForEachElementAssignmentConflict", {}, {::i2c::type_of<::Rewired::ElementAssignmentConflictCheck>(), ::i2c::type_of<::System::Action_1<::Rewired::ActionElementMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ForEachElementAssignmentConflict
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::ControllerMap*, ::System::Action_1<::Rewired::ActionElementMap*>*, bool)>(&::Rewired::ControllerMap::ForEachElementAssignmentConflict)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x18198b820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ForEachElementAssignmentConflict", {}, {::i2c::type_of<::Rewired::ControllerMap*>(), ::i2c::type_of<::System::Action_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ForEachElementAssignmentConflict
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::ActionElementMap*, ::System::Action_1<::Rewired::ActionElementMap*>*, bool)>(&::Rewired::ControllerMap::ForEachElementAssignmentConflict)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18198bd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ForEachElementAssignmentConflict", {}, {::i2c::type_of<::Rewired::ActionElementMap*>(), ::i2c::type_of<::System::Action_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ForEachElementAssignmentConflict
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::ElementAssignmentConflictCheck, ::System::Action_1<::Rewired::ActionElementMap*>*, bool)>(&::Rewired::ControllerMap::ForEachElementAssignmentConflict)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x18198bad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ForEachElementAssignmentConflict", {}, {::i2c::type_of<::Rewired::ElementAssignmentConflictCheck>(), ::i2c::type_of<::System::Action_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GetButtonNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::GetButtonNames)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18198cb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ToXmlString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::ToXmlString)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181990900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ToXmlString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ToJsonString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::ToJsonString)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181990790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ToJsonString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ToControllerTemplateMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerTemplateMap* (::Rewired::ControllerMap::*)(::System::Guid)>(&::Rewired::ControllerMap::ToControllerTemplateMap)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181990380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ToControllerTemplateMap", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ToControllerTemplateMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerTemplateMap* (::Rewired::ControllerMap::*)(::System::Type*)>(&::Rewired::ControllerMap::ToControllerTemplateMap)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x181990580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ToControllerTemplateMap", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.IMkRrBrogFIgaaqNqHGwCNZhOiTAB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerTemplateMap* (::Rewired::ControllerMap::*)(::Rewired::IControllerTemplate*)>(&::Rewired::ControllerMap::IMkRrBrogFIgaaqNqHGwCNZhOiTAB)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18198eb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"IMkRrBrogFIgaaqNqHGwCNZhOiTAB", {}, {::i2c::type_of<::Rewired::IControllerTemplate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.WDDbKiHNdAExmjZGBHVxQuWnxcjG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::AList_1<::Rewired::ActionElementMap*>* (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::WDDbKiHNdAExmjZGBHVxQuWnxcjG)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"WDDbKiHNdAExmjZGBHVxQuWnxcjG", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.BHDQAHmEhKItiZTtjoocBKPhekXW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(::Rewired::ActionElementMap*)>(&::Rewired::ControllerMap::BHDQAHmEhKItiZTtjoocBKPhekXW)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181988b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.fBgtSPJkouWLtvCrFbpROMcIcuYcA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*, bool)>(&::Rewired::ControllerMap::fBgtSPJkouWLtvCrFbpROMcIcuYcA)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181992150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.UOEDaEJadpAnWBgeAbxeyNjAGfGc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerMap::*)(int32_t, int32_t, ::Rewired::ControllerElementType)>(&::Rewired::ControllerMap::UOEDaEJadpAnWBgeAbxeyNjAGfGc)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181990a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.jDhfMCcRnsPTAamUAcaOJHuSimemc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(int32_t, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*, bool)>(&::Rewired::ControllerMap::jDhfMCcRnsPTAamUAcaOJHuSimemc)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181992d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.oltRTMgRSzcoCKVCWrwQzdnuAffN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(int32_t, int32_t, ::Rewired::ControllerElementType)>(&::Rewired::ControllerMap::oltRTMgRSzcoCKVCWrwQzdnuAffN)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181993350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.yVAlHkWHXDxolMwEeHLcoCfrGpEkA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(int32_t, int32_t, ::Rewired::ControllerElementType)>(&::Rewired::ControllerMap::yVAlHkWHXDxolMwEeHLcoCfrGpEkA)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181993670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.VAmLHOxLphkSjQhYRXEjXkuTptDO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(int32_t)>(&::Rewired::ControllerMap::VAmLHOxLphkSjQhYRXEjXkuTptDO)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181990b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"VAmLHOxLphkSjQhYRXEjXkuTptDO", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.dMBKVOfJLneSYXAhHQjBjGPUHtUW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(bool, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*, bool)>(&::Rewired::ControllerMap::dMBKVOfJLneSYXAhHQjBjGPUHtUW)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181992040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"dMBKVOfJLneSYXAhHQjBjGPUHtUW", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.xeNmxRCcnLhQUGTMomHoEtxipYbHb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(int32_t, bool, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*, bool)>(&::Rewired::ControllerMap::xeNmxRCcnLhQUGTMomHoEtxipYbHb)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181993530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"xeNmxRCcnLhQUGTMomHoEtxipYbHb", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.VXZjvOkoQnctcMmrTbfBMXUiGmqq
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(int32_t, bool, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*, bool)>(&::Rewired::ControllerMap::VXZjvOkoQnctcMmrTbfBMXUiGmqq)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181990e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.AcvncWOBRZfsFsHVwWkzKFxeCJox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (::Rewired::ControllerMap::*)(::Rewired::IControllerElementTarget*, bool, int32_t, bool, ::by_ref<bool>)>(&::Rewired::ControllerMap::AcvncWOBRZfsFsHVwWkzKFxeCJox)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181988810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.lTJDUPjQjcfvAxEBFMdsjaHVbDFGA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(::Rewired::IControllerElementTarget*, bool, int32_t, bool, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*, bool, ::by_ref<bool>)>(&::Rewired::ControllerMap::lTJDUPjQjcfvAxEBFMdsjaHVbDFGA)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x181992f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.GpwEnOAmbbpYWAllKFfJvNyoacamc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap::*)(int32_t, ::Rewired::ControllerElementType)>(&::Rewired::ControllerMap::GpwEnOAmbbpYWAllKFfJvNyoacamc)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18198eaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GpwEnOAmbbpYWAllKFfJvNyoacamc", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerElementType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.EzdzPPlVWCcEqPFuFVezgpAqCgUx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(::Rewired::ActionElementMap*)>(&::Rewired::ControllerMap::EzdzPPlVWCcEqPFuFVezgpAqCgUx)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18198b570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.FBhggasQpWsVPuquzYSKLasSUSgg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(::Rewired::IControllerElementTarget*)>(&::Rewired::ControllerMap::FBhggasQpWsVPuquzYSKLasSUSgg)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18198b5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"FBhggasQpWsVPuquzYSKLasSUSgg", {}, {::i2c::type_of<::Rewired::IControllerElementTarget*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ZgubfYnPQzxALwwEDHmGGzMplWSI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(::StringW)>(&::Rewired::ControllerMap::ZgubfYnPQzxALwwEDHmGGzMplWSI)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1819911b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ZgubfYnPQzxALwwEDHmGGzMplWSI", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.gSrLmAiPkYKhtYZurIzrCrHRFWQK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(::StringW)>(&::Rewired::ControllerMap::gSrLmAiPkYKhtYZurIzrCrHRFWQK)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181992220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"gSrLmAiPkYKhtYZurIzrCrHRFWQK", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.UgMAvCfiSoGRcTfWnRzzewvtWTvF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap::*)(::Rewired::ActionElementMap*)>(&::Rewired::ControllerMap::UgMAvCfiSoGRcTfWnRzzewvtWTvF)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181990ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"UgMAvCfiSoGRcTfWnRzzewvtWTvF", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.SuEiwLhLGOaNjfRZPbsYEEladaPfA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap::*)(int32_t)>(&::Rewired::ControllerMap::SuEiwLhLGOaNjfRZPbsYEEladaPfA)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181990210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"SuEiwLhLGOaNjfRZPbsYEEladaPfA", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.aaQTxsekONgKusaYgfEXaLITyQoF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap::*)(int32_t, ::Rewired::ActionElementMap*)>(&::Rewired::ControllerMap::aaQTxsekONgKusaYgfEXaLITyQoF)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1819917a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"aaQTxsekONgKusaYgfEXaLITyQoF", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ERRFQYkwqPIqFZnAhLxIiwsgLkrf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Rewired::ActionElementMap*, int32_t, ::Rewired::Pole, int32_t, ::Rewired::ControllerElementType, ::Rewired::AxisRange, bool)>(&::Rewired::ControllerMap::ERRFQYkwqPIqFZnAhLxIiwsgLkrf)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18198ab90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ERRFQYkwqPIqFZnAhLxIiwsgLkrf", {}, {::i2c::type_of<::Rewired::ActionElementMap*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.BakeElementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap::*)(::Rewired::ActionElementMap*)>(&::Rewired::ControllerMap::BakeElementMap)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181988b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"BakeElementMap", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.VKXrNiFYToOjzXQcovSKhXQPKJWr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(::Rewired::Utils::Classes::Data::SerializedObject*)>(&::Rewired::ControllerMap::VKXrNiFYToOjzXQcovSKhXQPKJWr)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x181990c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ajKoMaAAmGHwLGeuXdcQZSSQXuENA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap::*)(::Rewired::Utils::Classes::Data::SerializedObject*)>(&::Rewired::ControllerMap::ajKoMaAAmGHwLGeuXdcQZSSQXuENA)> {
  constexpr static std::size_t size = 0x780;
  constexpr static std::size_t addrs = 0x181991850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {::i2c::class_of<::Rewired::ControllerMap*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.NtgmqIxzxTdDCaNgwDPPGQoEaTkKA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerMap::*)(::Rewired::ControllerElementType)>(&::Rewired::ControllerMap::NtgmqIxzxTdDCaNgwDPPGQoEaTkKA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18198ebd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"NtgmqIxzxTdDCaNgwDPPGQoEaTkKA", {}, {::i2c::type_of<::Rewired::ControllerElementType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.OkykfyLHuPWgAooVKCazklDaaUGe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap::*)(int32_t, int32_t)>(&::Rewired::ControllerMap::OkykfyLHuPWgAooVKCazklDaaUGe)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18198ed60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"OkykfyLHuPWgAooVKCazklDaaUGe", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.QQAxypronmczEumYuZDWBduRGEVb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap::*)(::Rewired::ActionElementMap*)>(&::Rewired::ControllerMap::QQAxypronmczEumYuZDWBduRGEVb)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18198f030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"QQAxypronmczEumYuZDWBduRGEVb", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.jEWbvcfBicRFfqHvlHBJvGvnqVqQ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap::*)(::Rewired::ActionElementMap*, int32_t)>(&::Rewired::ControllerMap::jEWbvcfBicRFfqHvlHBJvGvnqVqQ)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181992e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"jEWbvcfBicRFfqHvlHBJvGvnqVqQ", {}, {::i2c::type_of<::Rewired::ActionElementMap*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.TdFAtToNAhcdxAruwNljgmVAzlhac
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerMap::*)(int32_t)>(&::Rewired::ControllerMap::TdFAtToNAhcdxAruwNljgmVAzlhac)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181990300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"TdFAtToNAhcdxAruwNljgmVAzlhac", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.cVoDOuXjZVfuRULcFpYFAaWjWzNs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::SerializedObject* (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::cVoDOuXjZVfuRULcFpYFAaWjWzNs)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181991fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"cVoDOuXjZVfuRULcFpYFAaWjWzNs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.TBxFnwilcTrIPBInHNDjVnacEjMfc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerMap::*)()>(&::Rewired::ControllerMap::TBxFnwilcTrIPBInHNDjVnacEjMfc)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181990280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"TBxFnwilcTrIPBInHNDjVnacEjMfc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerMap* (*)(::Rewired::Controller*, int32_t, int32_t)>(&::Rewired::ControllerMap::Create)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181989e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"Create", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.ibloojEeCgOrkuPOsyFoEnFuIHSjA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerMap* (*)(::Rewired::ControllerType)>(&::Rewired::ControllerMap::ibloojEeCgOrkuPOsyFoEnFuIHSjA)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181992c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ibloojEeCgOrkuPOsyFoEnFuIHSjA", {}, {::i2c::type_of<::Rewired::ControllerType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.BFQqJjtuQeNMOlmuUAgABvnyJSJLA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerMap* (*)(::Rewired::Controller*, int32_t, int32_t)>(&::Rewired::ControllerMap::BFQqJjtuQeNMOlmuUAgABvnyJSJLA)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1819889c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"BFQqJjtuQeNMOlmuUAgABvnyJSJLA", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.CreateFromXml
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerMap* (*)(::Rewired::ControllerType, ::StringW)>(&::Rewired::ControllerMap::CreateFromXml)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181989d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"CreateFromXml", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.CreateFromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerMap* (*)(::Rewired::ControllerType, ::StringW)>(&::Rewired::ControllerMap::CreateFromJson)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181989c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"CreateFromJson", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.YNBdWzYUAiYDbLJizKjwljMYSexn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Rewired::ControllerMap::YNBdWzYUAiYDbLJizKjwljMYSexn)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181991190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"YNBdWzYUAiYDbLJizKjwljMYSexn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerMap.zMzBSQtvixhIqSIuOWlRNPNdWvwd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Rewired::ControllerMap::zMzBSQtvixhIqSIuOWlRNPNdWvwd)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181993720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"zMzBSQtvixhIqSIuOWlRNPNdWvwd", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::ControllerMap::__cordl_internal_get__id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id;
}
constexpr int32_t const& Rewired::ControllerMap::__cordl_internal_get__id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id;
}
constexpr void Rewired::ControllerMap::__cordl_internal_set__id(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____id = value;
}
constexpr int32_t& Rewired::ControllerMap::__cordl_internal_get__sourceMapId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceMapId;
}
constexpr int32_t const& Rewired::ControllerMap::__cordl_internal_get__sourceMapId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceMapId;
}
constexpr void Rewired::ControllerMap::__cordl_internal_set__sourceMapId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sourceMapId = value;
}
constexpr int32_t& Rewired::ControllerMap::__cordl_internal_get__categoryId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____categoryId;
}
constexpr int32_t const& Rewired::ControllerMap::__cordl_internal_get__categoryId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____categoryId;
}
constexpr void Rewired::ControllerMap::__cordl_internal_set__categoryId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____categoryId = value;
}
constexpr int32_t& Rewired::ControllerMap::__cordl_internal_get__layoutId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layoutId;
}
constexpr int32_t const& Rewired::ControllerMap::__cordl_internal_get__layoutId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layoutId;
}
constexpr void Rewired::ControllerMap::__cordl_internal_set__layoutId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layoutId = value;
}
constexpr ::StringW& Rewired::ControllerMap::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::StringW const& Rewired::ControllerMap::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void Rewired::ControllerMap::__cordl_internal_set__name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name = value;
}
constexpr ::System::Guid& Rewired::ControllerMap::__cordl_internal_get__hardwareGuid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hardwareGuid;
}
constexpr ::System::Guid const& Rewired::ControllerMap::__cordl_internal_get__hardwareGuid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hardwareGuid;
}
constexpr void Rewired::ControllerMap::__cordl_internal_set__hardwareGuid(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hardwareGuid = value;
}
constexpr bool& Rewired::ControllerMap::__cordl_internal_get__enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled;
}
constexpr bool const& Rewired::ControllerMap::__cordl_internal_get__enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled;
}
constexpr void Rewired::ControllerMap::__cordl_internal_set__enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enabled = value;
}
constexpr int32_t& Rewired::ControllerMap::__cordl_internal_get_qPdApDGwsHInxbfnQLJLFszYuIMib()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qPdApDGwsHInxbfnQLJLFszYuIMib;
}
constexpr int32_t const& Rewired::ControllerMap::__cordl_internal_get_qPdApDGwsHInxbfnQLJLFszYuIMib() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qPdApDGwsHInxbfnQLJLFszYuIMib;
}
constexpr void Rewired::ControllerMap::__cordl_internal_set_qPdApDGwsHInxbfnQLJLFszYuIMib(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___qPdApDGwsHInxbfnQLJLFszYuIMib = value;
}
constexpr double_t& Rewired::ControllerMap::__cordl_internal_get_rcdZtjuBaavThpLbQDkfbuzsApqpA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rcdZtjuBaavThpLbQDkfbuzsApqpA;
}
constexpr double_t const& Rewired::ControllerMap::__cordl_internal_get_rcdZtjuBaavThpLbQDkfbuzsApqpA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rcdZtjuBaavThpLbQDkfbuzsApqpA;
}
constexpr void Rewired::ControllerMap::__cordl_internal_set_rcdZtjuBaavThpLbQDkfbuzsApqpA(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rcdZtjuBaavThpLbQDkfbuzsApqpA = value;
}
constexpr ::Rewired::Utils::Classes::Data::AList_1<::Rewired::ActionElementMap*>*& Rewired::ControllerMap::__cordl_internal_get_KdINobnXRdEAoDhXNLeFgTKNUJMX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KdINobnXRdEAoDhXNLeFgTKNUJMX;
}
constexpr ::Rewired::Utils::Classes::Data::AList_1<::Rewired::ActionElementMap*>* const& Rewired::ControllerMap::__cordl_internal_get_KdINobnXRdEAoDhXNLeFgTKNUJMX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KdINobnXRdEAoDhXNLeFgTKNUJMX;
}
constexpr void Rewired::ControllerMap::__cordl_internal_set_KdINobnXRdEAoDhXNLeFgTKNUJMX(::Rewired::Utils::Classes::Data::AList_1<::Rewired::ActionElementMap*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KdINobnXRdEAoDhXNLeFgTKNUJMX = value;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ActionElementMap*>*& Rewired::ControllerMap::__cordl_internal_get_RvhFfuezxhRZcofEaLaXeautzgiwA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RvhFfuezxhRZcofEaLaXeautzgiwA;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ActionElementMap*>* const& Rewired::ControllerMap::__cordl_internal_get_RvhFfuezxhRZcofEaLaXeautzgiwA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RvhFfuezxhRZcofEaLaXeautzgiwA;
}
constexpr void Rewired::ControllerMap::__cordl_internal_set_RvhFfuezxhRZcofEaLaXeautzgiwA(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ActionElementMap*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RvhFfuezxhRZcofEaLaXeautzgiwA = value;
}
constexpr ::Rewired::Utils::Classes::Data::AList_1<::Rewired::ActionElementMap*>*& Rewired::ControllerMap::__cordl_internal_get_rVnYmhPPfiERuAVqDNBckdgyCEhaA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rVnYmhPPfiERuAVqDNBckdgyCEhaA;
}
constexpr ::Rewired::Utils::Classes::Data::AList_1<::Rewired::ActionElementMap*>* const& Rewired::ControllerMap::__cordl_internal_get_rVnYmhPPfiERuAVqDNBckdgyCEhaA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rVnYmhPPfiERuAVqDNBckdgyCEhaA;
}
constexpr void Rewired::ControllerMap::__cordl_internal_set_rVnYmhPPfiERuAVqDNBckdgyCEhaA(::Rewired::Utils::Classes::Data::AList_1<::Rewired::ActionElementMap*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rVnYmhPPfiERuAVqDNBckdgyCEhaA = value;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ActionElementMap*>*& Rewired::ControllerMap::__cordl_internal_get_muXeyNMZmzeQZbpsyKzpUfCdZECG()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muXeyNMZmzeQZbpsyKzpUfCdZECG;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ActionElementMap*>* const& Rewired::ControllerMap::__cordl_internal_get_muXeyNMZmzeQZbpsyKzpUfCdZECG() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muXeyNMZmzeQZbpsyKzpUfCdZECG;
}
constexpr void Rewired::ControllerMap::__cordl_internal_set_muXeyNMZmzeQZbpsyKzpUfCdZECG(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ActionElementMap*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___muXeyNMZmzeQZbpsyKzpUfCdZECG = value;
}
constexpr int32_t& Rewired::ControllerMap::__cordl_internal_get__playerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerId;
}
constexpr int32_t const& Rewired::ControllerMap::__cordl_internal_get__playerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerId;
}
constexpr void Rewired::ControllerMap::__cordl_internal_set__playerId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerId = value;
}
constexpr int32_t& Rewired::ControllerMap::__cordl_internal_get__controllerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerId;
}
constexpr int32_t const& Rewired::ControllerMap::__cordl_internal_get__controllerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerId;
}
constexpr void Rewired::ControllerMap::__cordl_internal_set__controllerId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controllerId = value;
}
constexpr ::Rewired::ControllerType& Rewired::ControllerMap::__cordl_internal_get__controllerType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerType;
}
constexpr ::Rewired::ControllerType const& Rewired::ControllerMap::__cordl_internal_get__controllerType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerType;
}
constexpr void Rewired::ControllerMap::__cordl_internal_set__controllerType(::Rewired::ControllerType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controllerType = value;
}
inline void Rewired::ControllerMap::setStaticF_WuJMZTuaDGEOuUyCfkTqZukbJbQd(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "WuJMZTuaDGEOuUyCfkTqZukbJbQd", ::Rewired::ControllerMap*>(std::forward<int32_t>(value));
}
inline int32_t Rewired::ControllerMap::getStaticF_WuJMZTuaDGEOuUyCfkTqZukbJbQd()  {
return ::cordl_internals::getStaticField<int32_t, "WuJMZTuaDGEOuUyCfkTqZukbJbQd", ::Rewired::ControllerMap*>();
}
inline void Rewired::ControllerMap::setStaticF_DAkonmJFbQASuMANnYuLlWFRPrJT(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "DAkonmJFbQASuMANnYuLlWFRPrJT", ::Rewired::ControllerMap*>(std::forward<int32_t>(value));
}
inline int32_t Rewired::ControllerMap::getStaticF_DAkonmJFbQASuMANnYuLlWFRPrJT()  {
return ::cordl_internals::getStaticField<int32_t, "DAkonmJFbQASuMANnYuLlWFRPrJT", ::Rewired::ControllerMap*>();
}
inline int32_t Rewired::ControllerMap::TauLCCMFsWvYNVkjMRoXIeCbgykg()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"TauLCCMFsWvYNVkjMRoXIeCbgykg", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool Rewired::ControllerMap::PvICpsylUhECoPXcmjUfTUtdVhdf()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"PvICpsylUhECoPXcmjUfTUtdVhdf", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Rewired::ControllerMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ControllerMap::_ctor(::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline int32_t Rewired::ControllerMap::get_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::ControllerMap::get_sourceMapId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_sourceMapId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::ControllerMap::twjyPoWRnJYbTuEtBDKBmEdyAhHX(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"twjyPoWRnJYbTuEtBDKBmEdyAhHX", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline int32_t Rewired::ControllerMap::get_categoryId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_categoryId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::ControllerMap::MbsqFicIxYDWRfQbsdgdZOfNeWiu(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"MbsqFicIxYDWRfQbsdgdZOfNeWiu", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline int32_t Rewired::ControllerMap::get_layoutId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_layoutId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::ControllerMap::lqtFKbXaKxkWDtEIqEcgmgilHvtx(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"lqtFKbXaKxkWDtEIqEcgmgilHvtx", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::StringW Rewired::ControllerMap::get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::ControllerMap::rAAAXRHBfLqjKlqUIdNecZCAsnPPA(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"rAAAXRHBfLqjKlqUIdNecZCAsnPPA", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::Guid Rewired::ControllerMap::get_hardwareGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_hardwareGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void Rewired::ControllerMap::WQtpuDzpqFeHiiiKjbBLHVtdBRjc(::System::Guid  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"WQtpuDzpqFeHiiiKjbBLHVtdBRjc", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::ControllerMap::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ControllerMap::set_enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::ControllerMap::get_playerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_playerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::ControllerMap::WUztEXtdepGRaEPIhQIywdUJOVcg(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"WUztEXtdepGRaEPIhQIywdUJOVcg", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline int32_t Rewired::ControllerMap::get_controllerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_controllerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::ControllerMap::dtNFGDCiloHyZynoliqHANCGFfRMA(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"dtNFGDCiloHyZynoliqHANCGFfRMA", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Controller* Rewired::ControllerMap::get_controller()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_controller", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller*>(this, ___internal_method);
}
inline ::Rewired::ControllerType Rewired::ControllerMap::get_controllerType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_controllerType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerType>(this, ___internal_method);
}
inline ::Rewired::Player* Rewired::ControllerMap::get_player()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_player", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Player*>(this, ___internal_method);
}
inline int32_t Rewired::ControllerMap::get_elementMapCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_elementMapCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::ControllerMap::get_buttonMapCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_buttonMapCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap::get_AllMaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_AllMaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap::get_ElementMaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_ElementMaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap::get_ButtonMaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_ButtonMaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::ActionElementMap*>*>(this, ___internal_method);
}
inline double_t Rewired::ControllerMap::get_modifiedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_modifiedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline bool Rewired::ControllerMap::get_isModified()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"get_isModified", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ControllerMap::set_isModified(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"set_isModified", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ControllerMap::ContainsAction(::StringW  actionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ContainsAction", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actionName);
}
inline bool Rewired::ControllerMap::ContainsAction(int32_t  actionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actionId);
}
inline bool Rewired::ControllerMap::ContainsElementIdentifier(int32_t  elementIdentifierId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ContainsElementIdentifier", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, elementIdentifierId);
}
inline bool Rewired::ControllerMap::ContainsKeyboardKey(::UnityEngine::KeyCode  keyCode, ::Rewired::ModifierKeyFlags  modifierKeys)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ContainsKeyboardKey", {}, {::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyCode, modifierKeys);
}
inline bool Rewired::ControllerMap::ContainsElementMap(::Rewired::ActionElementMap*  elementMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ContainsElementMap", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, elementMap);
}
inline bool Rewired::ControllerMap::ContainsElementMap(int32_t  elementMapId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ContainsElementMap", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, elementMapId);
}
inline bool Rewired::ControllerMap::ReplaceOrCreateElementMap(::Rewired::ElementAssignment  elementAssignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ReplaceOrCreateElementMap", {}, {::i2c::type_of<::Rewired::ElementAssignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, elementAssignment);
}
inline bool Rewired::ControllerMap::ReplaceOrCreateElementMap(::Rewired::ElementAssignment  elementAssignment, ::by_ref<::Rewired::ActionElementMap*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ReplaceOrCreateElementMap", {}, {::i2c::type_of<::Rewired::ElementAssignment>(), ::i2c::type_of<::by_ref<::Rewired::ActionElementMap*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, elementAssignment, result);
}
inline bool Rewired::ControllerMap::CreateElementMap(::Rewired::ElementAssignment  elementAssignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"CreateElementMap", {}, {::i2c::type_of<::Rewired::ElementAssignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, elementAssignment);
}
inline bool Rewired::ControllerMap::CreateElementMap(::Rewired::ElementAssignment  elementAssignment, ::by_ref<::Rewired::ActionElementMap*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"CreateElementMap", {}, {::i2c::type_of<::Rewired::ElementAssignment>(), ::i2c::type_of<::by_ref<::Rewired::ActionElementMap*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, elementAssignment, result);
}
inline bool Rewired::ControllerMap::CreateElementMap(int32_t  actionId, ::Rewired::Pole  axisContribution, ::UnityEngine::KeyCode  keyCode, ::Rewired::ModifierKey  modifierKey1, ::Rewired::ModifierKey  modifierKey2, ::Rewired::ModifierKey  modifierKey3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"CreateElementMap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKey>(), ::i2c::type_of<::Rewired::ModifierKey>(), ::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actionId, axisContribution, keyCode, modifierKey1, modifierKey2, modifierKey3);
}
inline bool Rewired::ControllerMap::CreateElementMap(int32_t  actionId, ::Rewired::Pole  axisContribution, ::UnityEngine::KeyCode  keyCode, ::Rewired::ModifierKey  modifierKey1, ::Rewired::ModifierKey  modifierKey2, ::Rewired::ModifierKey  modifierKey3, ::by_ref<::Rewired::ActionElementMap*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"CreateElementMap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKey>(), ::i2c::type_of<::Rewired::ModifierKey>(), ::i2c::type_of<::Rewired::ModifierKey>(), ::i2c::type_of<::by_ref<::Rewired::ActionElementMap*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actionId, axisContribution, keyCode, modifierKey1, modifierKey2, modifierKey3, result);
}
inline bool Rewired::ControllerMap::CreateElementMap(int32_t  actionId, ::Rewired::Pole  axisContribution, ::UnityEngine::KeyCode  keyCode, ::Rewired::ModifierKeyFlags  modifierKeyFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"CreateElementMap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actionId, axisContribution, keyCode, modifierKeyFlags);
}
inline bool Rewired::ControllerMap::CreateElementMap(int32_t  actionId, ::Rewired::Pole  axisContribution, ::UnityEngine::KeyCode  keyCode, ::Rewired::ModifierKeyFlags  modifierKeyFlags, ::by_ref<::Rewired::ActionElementMap*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"CreateElementMap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>(), ::i2c::type_of<::by_ref<::Rewired::ActionElementMap*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actionId, axisContribution, keyCode, modifierKeyFlags, result);
}
inline bool Rewired::ControllerMap::CreateElementMap(int32_t  actionId, ::Rewired::Pole  axisContribution, int32_t  elementIdentifierId, ::Rewired::ControllerElementType  elementType, ::Rewired::AxisRange  axisRange, bool  invert)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"CreateElementMap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actionId, axisContribution, elementIdentifierId, elementType, axisRange, invert);
}
inline bool Rewired::ControllerMap::CreateElementMap(int32_t  actionId, ::Rewired::Pole  axisContribution, int32_t  elementIdentifierId, ::Rewired::ControllerElementType  elementType, ::Rewired::AxisRange  axisRange, bool  invert, ::by_ref<::Rewired::ActionElementMap*>  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actionId, axisContribution, elementIdentifierId, elementType, axisRange, invert, result);
}
inline bool Rewired::ControllerMap::ReplaceElementMap(::Rewired::ElementAssignment  elementAssignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ReplaceElementMap", {}, {::i2c::type_of<::Rewired::ElementAssignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, elementAssignment);
}
inline bool Rewired::ControllerMap::ReplaceElementMap(::Rewired::ElementAssignment  elementAssignment, ::by_ref<::Rewired::ActionElementMap*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ReplaceElementMap", {}, {::i2c::type_of<::Rewired::ElementAssignment>(), ::i2c::type_of<::by_ref<::Rewired::ActionElementMap*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, elementAssignment, result);
}
inline bool Rewired::ControllerMap::ReplaceElementMap(int32_t  elementMapId, int32_t  actionId, ::Rewired::Pole  axisContribution, ::UnityEngine::KeyCode  keyCode, ::Rewired::ModifierKey  modifierKey1, ::Rewired::ModifierKey  modifierKey2, ::Rewired::ModifierKey  modifierKey3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ReplaceElementMap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKey>(), ::i2c::type_of<::Rewired::ModifierKey>(), ::i2c::type_of<::Rewired::ModifierKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, elementMapId, actionId, axisContribution, keyCode, modifierKey1, modifierKey2, modifierKey3);
}
inline bool Rewired::ControllerMap::ReplaceElementMap(int32_t  elementMapId, int32_t  actionId, ::Rewired::Pole  axisContribution, ::UnityEngine::KeyCode  keyCode, ::Rewired::ModifierKey  modifierKey1, ::Rewired::ModifierKey  modifierKey2, ::Rewired::ModifierKey  modifierKey3, ::by_ref<::Rewired::ActionElementMap*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ReplaceElementMap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKey>(), ::i2c::type_of<::Rewired::ModifierKey>(), ::i2c::type_of<::Rewired::ModifierKey>(), ::i2c::type_of<::by_ref<::Rewired::ActionElementMap*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, elementMapId, actionId, axisContribution, keyCode, modifierKey1, modifierKey2, modifierKey3, result);
}
inline bool Rewired::ControllerMap::ReplaceElementMap(int32_t  elementMapId, int32_t  actionId, ::Rewired::Pole  axisContribution, ::UnityEngine::KeyCode  keyCode, ::Rewired::ModifierKeyFlags  modifierKeyFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ReplaceElementMap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, elementMapId, actionId, axisContribution, keyCode, modifierKeyFlags);
}
inline bool Rewired::ControllerMap::ReplaceElementMap(int32_t  elementMapId, int32_t  actionId, ::Rewired::Pole  axisContribution, ::UnityEngine::KeyCode  keyCode, ::Rewired::ModifierKeyFlags  modifierKeyFlags, ::by_ref<::Rewired::ActionElementMap*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ReplaceElementMap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::Rewired::ModifierKeyFlags>(), ::i2c::type_of<::by_ref<::Rewired::ActionElementMap*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, elementMapId, actionId, axisContribution, keyCode, modifierKeyFlags, result);
}
inline bool Rewired::ControllerMap::ReplaceElementMap(int32_t  elementMapId, int32_t  actionId, ::Rewired::Pole  axisContribution, int32_t  elementIdentifierId, ::Rewired::ControllerElementType  elementType, ::Rewired::AxisRange  axisRange, bool  invert)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ReplaceElementMap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, elementMapId, actionId, axisContribution, elementIdentifierId, elementType, axisRange, invert);
}
inline bool Rewired::ControllerMap::ReplaceElementMap(int32_t  elementMapId, int32_t  actionId, ::Rewired::Pole  axisContribution, int32_t  elementIdentifierId, ::Rewired::ControllerElementType  elementType, ::Rewired::AxisRange  axisRange, bool  invert, ::by_ref<::Rewired::ActionElementMap*>  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, elementMapId, actionId, axisContribution, elementIdentifierId, elementType, axisRange, invert, result);
}
inline bool Rewired::ControllerMap::DeleteElementMap(int32_t  elementMapId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, elementMapId);
}
inline bool Rewired::ControllerMap::DeleteElementMapsWithAction(::StringW  actionName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actionName);
}
inline bool Rewired::ControllerMap::DeleteElementMapsWithAction(int32_t  actionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actionId);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerMap::GetElementMap(int32_t  elementMapId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method, elementMapId);
}
inline ::ArrayW<::Rewired::ActionElementMap*> Rewired::ControllerMap::GetElementMaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::ActionElementMap*>>(this, ___internal_method);
}
inline ::ArrayW<::Rewired::ActionElementMap*> Rewired::ControllerMap::GetElementMaps(bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMaps", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::ActionElementMap*>>(this, ___internal_method, skipDisabledMaps);
}
inline int32_t Rewired::ControllerMap::GetElementMaps(::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMaps", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, results);
}
inline int32_t Rewired::ControllerMap::GetElementMaps(bool  skipDisabledMaps, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMaps", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, skipDisabledMaps, results);
}
inline ::ArrayW<::Rewired::ActionElementMap*> Rewired::ControllerMap::GetElementMapsWithAction(::StringW  actionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithAction", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::ActionElementMap*>>(this, ___internal_method, actionName);
}
inline ::ArrayW<::Rewired::ActionElementMap*> Rewired::ControllerMap::GetElementMapsWithAction(int32_t  actionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::ActionElementMap*>>(this, ___internal_method, actionId);
}
inline ::ArrayW<::Rewired::ActionElementMap*> Rewired::ControllerMap::GetElementMapsWithAction(::StringW  actionName, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::ActionElementMap*>>(this, ___internal_method, actionName, skipDisabledMaps);
}
inline ::ArrayW<::Rewired::ActionElementMap*> Rewired::ControllerMap::GetElementMapsWithAction(int32_t  actionId, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithAction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::ActionElementMap*>>(this, ___internal_method, actionId, skipDisabledMaps);
}
inline int32_t Rewired::ControllerMap::GetElementMapsWithAction(::StringW  actionName, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, actionName, results);
}
inline int32_t Rewired::ControllerMap::GetElementMapsWithAction(int32_t  actionId, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithAction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, actionId, results);
}
inline int32_t Rewired::ControllerMap::GetElementMapsWithAction(::StringW  actionName, bool  skipDisabledMaps, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, actionName, skipDisabledMaps, results);
}
inline int32_t Rewired::ControllerMap::GetElementMapsWithAction(int32_t  actionId, bool  skipDisabledMaps, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithAction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, actionId, skipDisabledMaps, results);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap::ElementMapsWithAction(::StringW  actionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ElementMapsWithAction", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*>(this, ___internal_method, actionName);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap::ElementMapsWithAction(int32_t  actionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ElementMapsWithAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*>(this, ___internal_method, actionId);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap::ElementMapsWithAction(::StringW  actionName, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ElementMapsWithAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*>(this, ___internal_method, actionName, skipDisabledMaps);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap::ElementMapsWithAction(int32_t  actionId, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ElementMapsWithAction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*>(this, ___internal_method, actionId, skipDisabledMaps);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerMap::GetFirstElementMapWithAction(int32_t  actionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method, actionId);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerMap::GetFirstElementMapWithAction(::StringW  actionName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method, actionName);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerMap::GetFirstElementMapWithAction(int32_t  actionId, bool  skipDisabledMaps)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method, actionId, skipDisabledMaps);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerMap::GetFirstElementMapWithAction(::StringW  actionName, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetFirstElementMapWithAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method, actionName, skipDisabledMaps);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap::ElementMapsWithElementTarget(::Rewired::ControllerElementTarget  elementTarget, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ElementMapsWithElementTarget", {}, {::i2c::type_of<::Rewired::ControllerElementTarget>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*>(this, ___internal_method, elementTarget, skipDisabledMaps);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap::ElementMapsWithElementTarget(::Rewired::IControllerElementTarget*  elementTarget, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ElementMapsWithElementTarget", {}, {::i2c::type_of<::Rewired::IControllerElementTarget*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*>(this, ___internal_method, elementTarget, skipDisabledMaps);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap::ElementMapsWithElementTarget(::Rewired::ControllerElementTarget  elementTarget, int32_t  actionId, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ElementMapsWithElementTarget", {}, {::i2c::type_of<::Rewired::ControllerElementTarget>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*>(this, ___internal_method, elementTarget, actionId, skipDisabledMaps);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap::ElementMapsWithElementTarget(::Rewired::ControllerElementTarget  elementTarget, ::StringW  actionName, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ElementMapsWithElementTarget", {}, {::i2c::type_of<::Rewired::ControllerElementTarget>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*>(this, ___internal_method, elementTarget, actionName, skipDisabledMaps);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap::ElementMapsWithElementTarget(::Rewired::IControllerElementTarget*  elementTarget, int32_t  actionId, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ElementMapsWithElementTarget", {}, {::i2c::type_of<::Rewired::IControllerElementTarget*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*>(this, ___internal_method, elementTarget, actionId, skipDisabledMaps);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap::ElementMapsWithElementTarget(::Rewired::IControllerElementTarget*  elementTarget, ::StringW  actionName, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ElementMapsWithElementTarget", {}, {::i2c::type_of<::Rewired::IControllerElementTarget*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*>(this, ___internal_method, elementTarget, actionName, skipDisabledMaps);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerMap::GetFirstElementMapWithElementTarget(::Rewired::ControllerElementTarget  elementTarget, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetFirstElementMapWithElementTarget", {}, {::i2c::type_of<::Rewired::ControllerElementTarget>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method, elementTarget, skipDisabledMaps);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerMap::GetFirstElementMapWithElementTarget(::Rewired::IControllerElementTarget*  elementTarget, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetFirstElementMapWithElementTarget", {}, {::i2c::type_of<::Rewired::IControllerElementTarget*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method, elementTarget, skipDisabledMaps);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerMap::GetFirstElementMapWithElementTarget(::Rewired::ControllerElementTarget  elementTarget, int32_t  actionId, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetFirstElementMapWithElementTarget", {}, {::i2c::type_of<::Rewired::ControllerElementTarget>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method, elementTarget, actionId, skipDisabledMaps);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerMap::GetFirstElementMapWithElementTarget(::Rewired::ControllerElementTarget  elementTarget, ::StringW  actionName, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetFirstElementMapWithElementTarget", {}, {::i2c::type_of<::Rewired::ControllerElementTarget>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method, elementTarget, actionName, skipDisabledMaps);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerMap::GetFirstElementMapWithElementTarget(::Rewired::IControllerElementTarget*  elementTarget, int32_t  actionId, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetFirstElementMapWithElementTarget", {}, {::i2c::type_of<::Rewired::IControllerElementTarget*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method, elementTarget, actionId, skipDisabledMaps);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerMap::GetFirstElementMapWithElementTarget(::Rewired::IControllerElementTarget*  elementTarget, ::StringW  actionName, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetFirstElementMapWithElementTarget", {}, {::i2c::type_of<::Rewired::IControllerElementTarget*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method, elementTarget, actionName, skipDisabledMaps);
}
inline int32_t Rewired::ControllerMap::GetElementMapsWithElementTarget(::Rewired::ControllerElementTarget  elementTarget, bool  skipDisabledMaps, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithElementTarget", {}, {::i2c::type_of<::Rewired::ControllerElementTarget>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, elementTarget, skipDisabledMaps, results);
}
inline int32_t Rewired::ControllerMap::GetElementMapsWithElementTarget(::Rewired::IControllerElementTarget*  elementTarget, bool  skipDisabledMaps, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithElementTarget", {}, {::i2c::type_of<::Rewired::IControllerElementTarget*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, elementTarget, skipDisabledMaps, results);
}
inline int32_t Rewired::ControllerMap::GetElementMapsWithElementTarget(::Rewired::ControllerElementTarget  elementTarget, int32_t  actionId, bool  skipDisabledMaps, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithElementTarget", {}, {::i2c::type_of<::Rewired::ControllerElementTarget>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, elementTarget, actionId, skipDisabledMaps, results);
}
inline int32_t Rewired::ControllerMap::GetElementMapsWithElementTarget(::Rewired::ControllerElementTarget  elementTarget, ::StringW  actionName, bool  skipDisabledMaps, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithElementTarget", {}, {::i2c::type_of<::Rewired::ControllerElementTarget>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, elementTarget, actionName, skipDisabledMaps, results);
}
inline int32_t Rewired::ControllerMap::GetElementMapsWithElementTarget(::Rewired::IControllerElementTarget*  elementTarget, int32_t  actionId, bool  skipDisabledMaps, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithElementTarget", {}, {::i2c::type_of<::Rewired::IControllerElementTarget*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, elementTarget, actionId, skipDisabledMaps, results);
}
inline int32_t Rewired::ControllerMap::GetElementMapsWithElementTarget(::Rewired::IControllerElementTarget*  elementTarget, ::StringW  actionName, bool  skipDisabledMaps, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapsWithElementTarget", {}, {::i2c::type_of<::Rewired::IControllerElementTarget*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, elementTarget, actionName, skipDisabledMaps, results);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerMap::GetFirstElementMapMatch(::System::Predicate_1<::Rewired::ActionElementMap*>*  predicate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetFirstElementMapMatch", {}, {::i2c::type_of<::System::Predicate_1<::Rewired::ActionElementMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method, predicate);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerMap::sJKzqIFNdhLHWFqpnchEmnOuDAxL(::System::Predicate_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t Rewired::ControllerMap::GetElementMapMatches(::System::Predicate_1<::Rewired::ActionElementMap*>*  predicate, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetElementMapMatches", {}, {::i2c::type_of<::System::Predicate_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, predicate, results);
}
inline int32_t Rewired::ControllerMap::qWnJJxCCRRIQOubeAisTkhGTvnue(::System::Predicate_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline void Rewired::ControllerMap::ForEachElementMapMatch(::System::Predicate_1<::Rewired::ActionElementMap*>*  predicate, ::System::Action_1<::Rewired::ActionElementMap*>*  actionToPerform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ForEachElementMapMatch", {}, {::i2c::type_of<::System::Predicate_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<::System::Action_1<::Rewired::ActionElementMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, predicate, actionToPerform);
}
inline void Rewired::ControllerMap::ClearElementMaps()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Rewired::ControllerMap::SetAllElementMapsEnabled(bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"SetAllElementMapsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, state);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerMap::GetButtonMap(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonMap", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method, index);
}
inline ::ArrayW<::Rewired::ActionElementMap*> Rewired::ControllerMap::GetButtonMaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonMaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::ActionElementMap*>>(this, ___internal_method);
}
inline ::ArrayW<::Rewired::ActionElementMap*> Rewired::ControllerMap::GetButtonMaps(bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonMaps", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::ActionElementMap*>>(this, ___internal_method, skipDisabledMaps);
}
inline int32_t Rewired::ControllerMap::GetButtonMaps(bool  skipDisabledMaps, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonMaps", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, skipDisabledMaps, results);
}
inline ::ArrayW<::Rewired::ActionElementMap*> Rewired::ControllerMap::GetButtonMapsWithAction(::StringW  actionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonMapsWithAction", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::ActionElementMap*>>(this, ___internal_method, actionName);
}
inline ::ArrayW<::Rewired::ActionElementMap*> Rewired::ControllerMap::GetButtonMapsWithAction(int32_t  actionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonMapsWithAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::ActionElementMap*>>(this, ___internal_method, actionId);
}
inline ::ArrayW<::Rewired::ActionElementMap*> Rewired::ControllerMap::GetButtonMapsWithAction(::StringW  actionName, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonMapsWithAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::ActionElementMap*>>(this, ___internal_method, actionName, skipDisabledMaps);
}
inline ::ArrayW<::Rewired::ActionElementMap*> Rewired::ControllerMap::GetButtonMapsWithAction(int32_t  actionId, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonMapsWithAction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::ActionElementMap*>>(this, ___internal_method, actionId, skipDisabledMaps);
}
inline int32_t Rewired::ControllerMap::GetButtonMapsWithAction(::StringW  actionName, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonMapsWithAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, actionName, results);
}
inline int32_t Rewired::ControllerMap::GetButtonMapsWithAction(int32_t  actionId, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonMapsWithAction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, actionId, results);
}
inline int32_t Rewired::ControllerMap::GetButtonMapsWithAction(::StringW  actionName, bool  skipDisabledMaps, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonMapsWithAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, actionName, skipDisabledMaps, results);
}
inline int32_t Rewired::ControllerMap::GetButtonMapsWithAction(int32_t  actionId, bool  skipDisabledMaps, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonMapsWithAction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, actionId, skipDisabledMaps, results);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap::ButtonMapsWithAction(int32_t  actionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ButtonMapsWithAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*>(this, ___internal_method, actionId);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap::ButtonMapsWithAction(::StringW  actionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ButtonMapsWithAction", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*>(this, ___internal_method, actionName);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap::ButtonMapsWithAction(int32_t  actionId, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ButtonMapsWithAction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*>(this, ___internal_method, actionId, skipDisabledMaps);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap::ButtonMapsWithAction(::StringW  actionName, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ButtonMapsWithAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ActionElementMap*>*>(this, ___internal_method, actionName, skipDisabledMaps);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerMap::GetFirstButtonMapWithAction(int32_t  actionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetFirstButtonMapWithAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method, actionId);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerMap::GetFirstButtonMapWithAction(::StringW  actionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetFirstButtonMapWithAction", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method, actionName);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerMap::GetFirstButtonMapWithAction(int32_t  actionId, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetFirstButtonMapWithAction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method, actionId, skipDisabledMaps);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerMap::GetFirstButtonMapWithAction(::StringW  actionName, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetFirstButtonMapWithAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method, actionName, skipDisabledMaps);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerMap::GetFirstButtonMapMatch(::System::Predicate_1<::Rewired::ActionElementMap*>*  predicate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetFirstButtonMapMatch", {}, {::i2c::type_of<::System::Predicate_1<::Rewired::ActionElementMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method, predicate);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerMap::OckQUVtpXhosZHYrYRQvNyTUGffg(::System::Predicate_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"OckQUVtpXhosZHYrYRQvNyTUGffg", {}, {::i2c::type_of<::System::Predicate_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t Rewired::ControllerMap::GetButtonMapMatches(::System::Predicate_1<::Rewired::ActionElementMap*>*  predicate, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonMapMatches", {}, {::i2c::type_of<::System::Predicate_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, predicate, results);
}
inline int32_t Rewired::ControllerMap::XdvAEImdTlOrlcBFDCONqGkoejBY(::System::Predicate_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"XdvAEImdTlOrlcBFDCONqGkoejBY", {}, {::i2c::type_of<::System::Predicate_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline void Rewired::ControllerMap::ForEachButtonMapMatch(::System::Predicate_1<::Rewired::ActionElementMap*>*  predicate, ::System::Action_1<::Rewired::ActionElementMap*>*  actionToPerform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ForEachButtonMapMatch", {}, {::i2c::type_of<::System::Predicate_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<::System::Action_1<::Rewired::ActionElementMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, predicate, actionToPerform);
}
inline bool Rewired::ControllerMap::DeleteButtonMapsWithAction(::StringW  actionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"DeleteButtonMapsWithAction", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actionName);
}
inline bool Rewired::ControllerMap::DeleteButtonMapsWithAction(int32_t  actionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"DeleteButtonMapsWithAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actionId);
}
inline int32_t Rewired::ControllerMap::SetAllButtonMapsEnabled(bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"SetAllButtonMapsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, state);
}
inline bool Rewired::ControllerMap::DoesElementAssignmentConflict(::Rewired::ControllerMap*  controllerMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"DoesElementAssignmentConflict", {}, {::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, controllerMap);
}
inline bool Rewired::ControllerMap::DoesElementAssignmentConflict(::Rewired::ActionElementMap*  actionElementMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"DoesElementAssignmentConflict", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actionElementMap);
}
inline bool Rewired::ControllerMap::DoesElementAssignmentConflict(::Rewired::ElementAssignmentConflictCheck  conflictCheck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"DoesElementAssignmentConflict", {}, {::i2c::type_of<::Rewired::ElementAssignmentConflictCheck>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, conflictCheck);
}
inline bool Rewired::ControllerMap::DoesElementAssignmentConflict(::Rewired::ControllerMap*  controllerMap, bool  skipDisabledMaps)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, controllerMap, skipDisabledMaps);
}
inline bool Rewired::ControllerMap::DoesElementAssignmentConflict(::Rewired::ActionElementMap*  actionElementMap, bool  skipDisabledMaps)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actionElementMap, skipDisabledMaps);
}
inline bool Rewired::ControllerMap::DoesElementAssignmentConflict(::Rewired::ElementAssignmentConflictCheck  conflictCheck, bool  skipDisabledMaps)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, conflictCheck, skipDisabledMaps);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* Rewired::ControllerMap::ElementAssignmentConflicts(::Rewired::ControllerMap*  controllerMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ElementAssignmentConflicts", {}, {::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>*>(this, ___internal_method, controllerMap);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* Rewired::ControllerMap::ElementAssignmentConflicts(::Rewired::ActionElementMap*  actionElementMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ElementAssignmentConflicts", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>*>(this, ___internal_method, actionElementMap);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* Rewired::ControllerMap::ElementAssignmentConflicts(::Rewired::ElementAssignmentConflictCheck  conflictCheck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ElementAssignmentConflicts", {}, {::i2c::type_of<::Rewired::ElementAssignmentConflictCheck>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>*>(this, ___internal_method, conflictCheck);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* Rewired::ControllerMap::ElementAssignmentConflicts(::Rewired::ControllerMap*  controllerMap, bool  skipDisabledMaps)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>*>(this, ___internal_method, controllerMap, skipDisabledMaps);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* Rewired::ControllerMap::ElementAssignmentConflicts(::Rewired::ActionElementMap*  actionElementMap, bool  skipDisabledMaps)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>*>(this, ___internal_method, actionElementMap, skipDisabledMaps);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* Rewired::ControllerMap::ElementAssignmentConflicts(::Rewired::ElementAssignmentConflictCheck  conflictCheck, bool  skipDisabledMaps)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>*>(this, ___internal_method, conflictCheck, skipDisabledMaps);
}
inline int32_t Rewired::ControllerMap::RemoveElementAssignmentConflicts(::Rewired::ControllerMap*  controllerMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"RemoveElementAssignmentConflicts", {}, {::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, controllerMap);
}
inline int32_t Rewired::ControllerMap::RemoveElementAssignmentConflicts(::Rewired::ActionElementMap*  actionElementMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"RemoveElementAssignmentConflicts", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, actionElementMap);
}
inline int32_t Rewired::ControllerMap::RemoveElementAssignmentConflicts(::Rewired::ElementAssignmentConflictCheck  conflictCheck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"RemoveElementAssignmentConflicts", {}, {::i2c::type_of<::Rewired::ElementAssignmentConflictCheck>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, conflictCheck);
}
inline int32_t Rewired::ControllerMap::RemoveElementAssignmentConflicts(::Rewired::ControllerMap*  controllerMap, bool  skipDisabledMaps)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, controllerMap, skipDisabledMaps);
}
inline int32_t Rewired::ControllerMap::RemoveElementAssignmentConflicts(::Rewired::ActionElementMap*  actionElementMap, bool  skipDisabledMaps)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, actionElementMap, skipDisabledMaps);
}
inline int32_t Rewired::ControllerMap::RemoveElementAssignmentConflicts(::Rewired::ElementAssignmentConflictCheck  conflictCheck, bool  skipDisabledMaps)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, conflictCheck, skipDisabledMaps);
}
inline int32_t Rewired::ControllerMap::DisableElementAssignmentConflicts(::Rewired::ControllerMap*  controllerMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"DisableElementAssignmentConflicts", {}, {::i2c::type_of<::Rewired::ControllerMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, controllerMap);
}
inline int32_t Rewired::ControllerMap::DisableElementAssignmentConflicts(::Rewired::ActionElementMap*  actionElementMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"DisableElementAssignmentConflicts", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, actionElementMap);
}
inline int32_t Rewired::ControllerMap::DisableElementAssignmentConflicts(::Rewired::ElementAssignmentConflictCheck  conflictCheck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"DisableElementAssignmentConflicts", {}, {::i2c::type_of<::Rewired::ElementAssignmentConflictCheck>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, conflictCheck);
}
inline int32_t Rewired::ControllerMap::DisableElementAssignmentConflicts(::Rewired::ControllerMap*  controllerMap, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"DisableElementAssignmentConflicts", {}, {::i2c::type_of<::Rewired::ControllerMap*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, controllerMap, skipDisabledMaps);
}
inline int32_t Rewired::ControllerMap::DisableElementAssignmentConflicts(::Rewired::ActionElementMap*  actionElementMap, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"DisableElementAssignmentConflicts", {}, {::i2c::type_of<::Rewired::ActionElementMap*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, actionElementMap, skipDisabledMaps);
}
inline int32_t Rewired::ControllerMap::DisableElementAssignmentConflicts(::Rewired::ElementAssignmentConflictCheck  conflictCheck, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"DisableElementAssignmentConflicts", {}, {::i2c::type_of<::Rewired::ElementAssignmentConflictCheck>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, conflictCheck, skipDisabledMaps);
}
inline int32_t Rewired::ControllerMap::lreiQkZaXZREXLsxDuFlqSxRDxzp(::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline int32_t Rewired::ControllerMap::hXBTMlXsAYinehLhebvXeqUJPEhEb(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline int32_t Rewired::ControllerMap::PFxxoBJWdQTEMqTyYPsybeSObVZHA(::Rewired::ElementAssignmentConflictCheck  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline int32_t Rewired::ControllerMap::ForEachElementAssignmentConflict(::Rewired::ControllerMap*  controllerMap, ::System::Action_1<::Rewired::ActionElementMap*>*  actionToPerform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ForEachElementAssignmentConflict", {}, {::i2c::type_of<::Rewired::ControllerMap*>(), ::i2c::type_of<::System::Action_1<::Rewired::ActionElementMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, controllerMap, actionToPerform);
}
inline int32_t Rewired::ControllerMap::ForEachElementAssignmentConflict(::Rewired::ActionElementMap*  actionElementMap, ::System::Action_1<::Rewired::ActionElementMap*>*  actionToPerform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ForEachElementAssignmentConflict", {}, {::i2c::type_of<::Rewired::ActionElementMap*>(), ::i2c::type_of<::System::Action_1<::Rewired::ActionElementMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, actionElementMap, actionToPerform);
}
inline int32_t Rewired::ControllerMap::ForEachElementAssignmentConflict(::Rewired::ElementAssignmentConflictCheck  conflictCheck, ::System::Action_1<::Rewired::ActionElementMap*>*  actionToPerform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ForEachElementAssignmentConflict", {}, {::i2c::type_of<::Rewired::ElementAssignmentConflictCheck>(), ::i2c::type_of<::System::Action_1<::Rewired::ActionElementMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, conflictCheck, actionToPerform);
}
inline int32_t Rewired::ControllerMap::ForEachElementAssignmentConflict(::Rewired::ControllerMap*  controllerMap, ::System::Action_1<::Rewired::ActionElementMap*>*  actionToPerform, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ForEachElementAssignmentConflict", {}, {::i2c::type_of<::Rewired::ControllerMap*>(), ::i2c::type_of<::System::Action_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, controllerMap, actionToPerform, skipDisabledMaps);
}
inline int32_t Rewired::ControllerMap::ForEachElementAssignmentConflict(::Rewired::ActionElementMap*  actionElementMap, ::System::Action_1<::Rewired::ActionElementMap*>*  actionToPerform, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ForEachElementAssignmentConflict", {}, {::i2c::type_of<::Rewired::ActionElementMap*>(), ::i2c::type_of<::System::Action_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, actionElementMap, actionToPerform, skipDisabledMaps);
}
inline int32_t Rewired::ControllerMap::ForEachElementAssignmentConflict(::Rewired::ElementAssignmentConflictCheck  conflictCheck, ::System::Action_1<::Rewired::ActionElementMap*>*  actionToPerform, bool  skipDisabledMaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ForEachElementAssignmentConflict", {}, {::i2c::type_of<::Rewired::ElementAssignmentConflictCheck>(), ::i2c::type_of<::System::Action_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, conflictCheck, actionToPerform, skipDisabledMaps);
}
inline ::ArrayW<::StringW> Rewired::ControllerMap::GetButtonNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GetButtonNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerMap::ToXmlString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ToXmlString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerMap::ToJsonString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ToJsonString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Rewired::ControllerTemplateMap* Rewired::ControllerMap::ToControllerTemplateMap(::System::Guid  templateTypeGuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ToControllerTemplateMap", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerTemplateMap*>(this, ___internal_method, templateTypeGuid);
}
template<typename T>
inline ::Rewired::ControllerTemplateMap* Rewired::ControllerMap::ToControllerTemplateMap()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerMap*>(),
                    {"ToControllerTemplateMap", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerTemplateMap*>(this, ___internal_method);
}
inline ::Rewired::ControllerTemplateMap* Rewired::ControllerMap::ToControllerTemplateMap(::System::Type*  templateInterfaceType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ToControllerTemplateMap", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerTemplateMap*>(this, ___internal_method, templateInterfaceType);
}
inline ::Rewired::ControllerTemplateMap* Rewired::ControllerMap::IMkRrBrogFIgaaqNqHGwCNZhOiTAB(::Rewired::IControllerTemplate*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"IMkRrBrogFIgaaqNqHGwCNZhOiTAB", {}, {::i2c::type_of<::Rewired::IControllerTemplate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerTemplateMap*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Utils::Classes::Data::AList_1<::Rewired::ActionElementMap*>* Rewired::ControllerMap::WDDbKiHNdAExmjZGBHVxQuWnxcjG()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"WDDbKiHNdAExmjZGBHVxQuWnxcjG", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::AList_1<::Rewired::ActionElementMap*>*>(this, ___internal_method);
}
inline bool Rewired::ControllerMap::BHDQAHmEhKItiZTtjoocBKPhekXW(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline int32_t Rewired::ControllerMap::fBgtSPJkouWLtvCrFbpROMcIcuYcA(::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerMap::UOEDaEJadpAnWBgeAbxeyNjAGfGc(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t Rewired::ControllerMap::jDhfMCcRnsPTAamUAcaOJHuSimemc(int32_t  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline bool Rewired::ControllerMap::oltRTMgRSzcoCKVCWrwQzdnuAffN(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t Rewired::ControllerMap::yVAlHkWHXDxolMwEeHLcoCfrGpEkA(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t Rewired::ControllerMap::VAmLHOxLphkSjQhYRXEjXkuTptDO(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"VAmLHOxLphkSjQhYRXEjXkuTptDO", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline int32_t Rewired::ControllerMap::dMBKVOfJLneSYXAhHQjBjGPUHtUW(bool  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"dMBKVOfJLneSYXAhHQjBjGPUHtUW", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t Rewired::ControllerMap::xeNmxRCcnLhQUGTMomHoEtxipYbHb(int32_t  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"xeNmxRCcnLhQUGTMomHoEtxipYbHb", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline int32_t Rewired::ControllerMap::VXZjvOkoQnctcMmrTbfBMXUiGmqq(int32_t  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline ::Rewired::ActionElementMap* Rewired::ControllerMap::AcvncWOBRZfsFsHVwWkzKFxeCJox(::Rewired::IControllerElementTarget*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3, ::by_ref<bool>  _cordl_fixed_empty_name_whitespace_param_4)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4);
}
inline int32_t Rewired::ControllerMap::lTJDUPjQjcfvAxEBFMdsjaHVbDFGA(::Rewired::IControllerElementTarget*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, ::by_ref<bool>  _cordl_fixed_empty_name_whitespace_param_6)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6);
}
inline void Rewired::ControllerMap::GpwEnOAmbbpYWAllKFfJvNyoacamc(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"GpwEnOAmbbpYWAllKFfJvNyoacamc", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerElementType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline bool Rewired::ControllerMap::EzdzPPlVWCcEqPFuFVezgpAqCgUx(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::ControllerMap::FBhggasQpWsVPuquzYSKLasSUSgg(::Rewired::IControllerElementTarget*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"FBhggasQpWsVPuquzYSKLasSUSgg", {}, {::i2c::type_of<::Rewired::IControllerElementTarget*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::ControllerMap::ZgubfYnPQzxALwwEDHmGGzMplWSI(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ZgubfYnPQzxALwwEDHmGGzMplWSI", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::ControllerMap::gSrLmAiPkYKhtYZurIzrCrHRFWQK(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"gSrLmAiPkYKhtYZurIzrCrHRFWQK", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerMap::UgMAvCfiSoGRcTfWnRzzewvtWTvF(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"UgMAvCfiSoGRcTfWnRzzewvtWTvF", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerMap::SuEiwLhLGOaNjfRZPbsYEEladaPfA(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"SuEiwLhLGOaNjfRZPbsYEEladaPfA", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerMap::aaQTxsekONgKusaYgfEXaLITyQoF(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"aaQTxsekONgKusaYgfEXaLITyQoF", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::ControllerMap::ERRFQYkwqPIqFZnAhLxIiwsgLkrf(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ERRFQYkwqPIqFZnAhLxIiwsgLkrf", {}, {::i2c::type_of<::Rewired::ActionElementMap*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Pole>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<::Rewired::AxisRange>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6);
}
inline void Rewired::ControllerMap::BakeElementMap(::Rewired::ActionElementMap*  map)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"BakeElementMap", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, map);
}
inline bool Rewired::ControllerMap::VKXrNiFYToOjzXQcovSKhXQPKJWr(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerMap::ajKoMaAAmGHwLGeuXdcQZSSQXuENA(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerMap*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::ControllerMap::NtgmqIxzxTdDCaNgwDPPGQoEaTkKA(::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"NtgmqIxzxTdDCaNgwDPPGQoEaTkKA", {}, {::i2c::type_of<::Rewired::ControllerElementType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerMap::OkykfyLHuPWgAooVKCazklDaaUGe(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"OkykfyLHuPWgAooVKCazklDaaUGe", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::ControllerMap::QQAxypronmczEumYuZDWBduRGEVb(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"QQAxypronmczEumYuZDWBduRGEVb", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerMap::jEWbvcfBicRFfqHvlHBJvGvnqVqQ(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"jEWbvcfBicRFfqHvlHBJvGvnqVqQ", {}, {::i2c::type_of<::Rewired::ActionElementMap*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t Rewired::ControllerMap::TdFAtToNAhcdxAruwNljgmVAzlhac(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"TdFAtToNAhcdxAruwNljgmVAzlhac", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Utils::Classes::Data::SerializedObject* Rewired::ControllerMap::cVoDOuXjZVfuRULcFpYFAaWjWzNs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"cVoDOuXjZVfuRULcFpYFAaWjWzNs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::SerializedObject*>(this, ___internal_method);
}
inline void Rewired::ControllerMap::TBxFnwilcTrIPBInHNDjVnacEjMfc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"TBxFnwilcTrIPBInHNDjVnacEjMfc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ControllerMap* Rewired::ControllerMap::Create(::Rewired::Controller*  controller, int32_t  categoryId, int32_t  layoutId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"Create", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerMap*>(nullptr, ___internal_method, controller, categoryId, layoutId);
}
inline ::Rewired::ControllerMap* Rewired::ControllerMap::ibloojEeCgOrkuPOsyFoEnFuIHSjA(::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"ibloojEeCgOrkuPOsyFoEnFuIHSjA", {}, {::i2c::type_of<::Rewired::ControllerType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerMap*>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ControllerMap* Rewired::ControllerMap::BFQqJjtuQeNMOlmuUAgABvnyJSJLA(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"BFQqJjtuQeNMOlmuUAgABvnyJSJLA", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerMap*>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline ::Rewired::ControllerMap* Rewired::ControllerMap::CreateFromXml(::Rewired::ControllerType  controllerType, ::StringW  xmlString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"CreateFromXml", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerMap*>(nullptr, ___internal_method, controllerType, xmlString);
}
inline ::Rewired::ControllerMap* Rewired::ControllerMap::CreateFromJson(::Rewired::ControllerType  controllerType, ::StringW  jsonString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"CreateFromJson", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerMap*>(nullptr, ___internal_method, controllerType, jsonString);
}
inline void Rewired::ControllerMap::YNBdWzYUAiYDbLJizKjwljMYSexn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"YNBdWzYUAiYDbLJizKjwljMYSexn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Rewired::ControllerMap::zMzBSQtvixhIqSIuOWlRNPNdWvwd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerMap*>(),
                        {"zMzBSQtvixhIqSIuOWlRNPNdWvwd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::Rewired::ControllerMap* Rewired::ControllerMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerMap*>());
}
inline ::Rewired::ControllerMap* Rewired::ControllerMap::New_ctor(::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerMap*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerMap::ControllerMap()   {
}

#pragma once
// IWYU pragma private; include "Rewired/ControllerWithAxes.hpp"
#include "Rewired/zzzz__ControllerPollingInfo_impl.hpp"
#include "Rewired/zzzz__ControllerWithMap_impl.hpp"
#include "Rewired/zzzz__Controller_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__ControllerWithAxes_def.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__TimerAbs_def.hpp"
#include "Rewired/zzzz__ActionElementMap_def.hpp"
#include "Rewired/zzzz__CalibrationMap_def.hpp"
#include "Rewired/zzzz__ControllerDataUpdater_def.hpp"
#include "Rewired/zzzz__ControllerElementIdentifier_def.hpp"
#include "Rewired/zzzz__ControllerMap_def.hpp"
#include "Rewired/zzzz__ControllerPollingInfo_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "Rewired/zzzz__ControllerWithAxes_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__HardwareControllerMap_Game_def.hpp"
#include "Rewired/zzzz__InputSource_def.hpp"
#include "Rewired/zzzz__Pole_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::*)(int32_t)>(&::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181859da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::*)()>(&::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x6fe0;
  constexpr static std::size_t addrs = 0x181049e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::*)()>(&::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::MoveNext)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x18185e300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc.System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerPollingInfo (::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::*)()>(&::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181859c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::*)()>(&::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::*)()>(&::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181859c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc.System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* (::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::*)()>(&::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18185e540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::*)()>(&::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18185e540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::__cordl_internal_get_xfeyGLiHobwpUUNcHfnWWMMKvlZq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xfeyGLiHobwpUUNcHfnWWMMKvlZq;
}
constexpr int32_t const& Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::__cordl_internal_get_xfeyGLiHobwpUUNcHfnWWMMKvlZq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xfeyGLiHobwpUUNcHfnWWMMKvlZq;
}
constexpr void Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::__cordl_internal_set_xfeyGLiHobwpUUNcHfnWWMMKvlZq(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xfeyGLiHobwpUUNcHfnWWMMKvlZq = value;
}
constexpr ::Rewired::ControllerPollingInfo& Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::__cordl_internal_get_TsJaUsBDqtzWlxYGTsqBPnjvcngL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TsJaUsBDqtzWlxYGTsqBPnjvcngL;
}
constexpr ::Rewired::ControllerPollingInfo const& Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::__cordl_internal_get_TsJaUsBDqtzWlxYGTsqBPnjvcngL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TsJaUsBDqtzWlxYGTsqBPnjvcngL;
}
constexpr void Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::__cordl_internal_set_TsJaUsBDqtzWlxYGTsqBPnjvcngL(::Rewired::ControllerPollingInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TsJaUsBDqtzWlxYGTsqBPnjvcngL = value;
}
constexpr int32_t& Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::__cordl_internal_get_qkucHfEZYwjZvgSpVephLVxphFPr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qkucHfEZYwjZvgSpVephLVxphFPr;
}
constexpr int32_t const& Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::__cordl_internal_get_qkucHfEZYwjZvgSpVephLVxphFPr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qkucHfEZYwjZvgSpVephLVxphFPr;
}
constexpr void Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::__cordl_internal_set_qkucHfEZYwjZvgSpVephLVxphFPr(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___qkucHfEZYwjZvgSpVephLVxphFPr = value;
}
constexpr ::Rewired::ControllerWithAxes*& Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::__cordl_internal_get_XTpERMDeQyaUbTxGxyDGHJZcFKZKA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XTpERMDeQyaUbTxGxyDGHJZcFKZKA;
}
constexpr ::Rewired::ControllerWithAxes* const& Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::__cordl_internal_get_XTpERMDeQyaUbTxGxyDGHJZcFKZKA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XTpERMDeQyaUbTxGxyDGHJZcFKZKA;
}
constexpr void Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::__cordl_internal_set_XTpERMDeQyaUbTxGxyDGHJZcFKZKA(::Rewired::ControllerWithAxes*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XTpERMDeQyaUbTxGxyDGHJZcFKZKA = value;
}
constexpr int32_t& Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::__cordl_internal_get_QSiThYtufywVmKTFuzODpuGqOCuD()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QSiThYtufywVmKTFuzODpuGqOCuD;
}
constexpr int32_t const& Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::__cordl_internal_get_QSiThYtufywVmKTFuzODpuGqOCuD() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QSiThYtufywVmKTFuzODpuGqOCuD;
}
constexpr void Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::__cordl_internal_set_QSiThYtufywVmKTFuzODpuGqOCuD(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QSiThYtufywVmKTFuzODpuGqOCuD = value;
}
inline void Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::ControllerPollingInfo Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerPollingInfo>(this, ___internal_method);
}
inline void Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc* Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr  Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::operator ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerPollingInfo_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr  Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::operator ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerPollingInfo_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc::ControllerWithAxes_buWgpkDLbYMNAOrdWoufsKeRtHEc()   {
}
//  Writing Method size for method: ::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::*)(int32_t)>(&::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181859da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::*)()>(&::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181859c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::*)()>(&::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::MoveNext)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x18185d400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb.QzSSrMTEivsVuCoRNDbKiPFGwNKA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::*)()>(&::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::QzSSrMTEivsVuCoRNDbKiPFGwNKA)> {
  constexpr static std::size_t size = 0x15100;
  constexpr static std::size_t addrs = 0x180d75a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb*>(),
                        {"QzSSrMTEivsVuCoRNDbKiPFGwNKA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb.bbxuOnxHytmwgBFLSCEMazZfKdgP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::*)()>(&::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::bbxuOnxHytmwgBFLSCEMazZfKdgP)> {
  constexpr static std::size_t size = 0x15100;
  constexpr static std::size_t addrs = 0x180d75a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb*>(),
                        {"bbxuOnxHytmwgBFLSCEMazZfKdgP", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb.System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerPollingInfo (::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::*)()>(&::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181859c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::*)()>(&::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::*)()>(&::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181859c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb.System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* (::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::*)()>(&::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18185d800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::*)()>(&::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18185d800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::__cordl_internal_get_PDbRowJBSwjdiOlQIDEWHTHJbvijA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PDbRowJBSwjdiOlQIDEWHTHJbvijA;
}
constexpr int32_t const& Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::__cordl_internal_get_PDbRowJBSwjdiOlQIDEWHTHJbvijA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PDbRowJBSwjdiOlQIDEWHTHJbvijA;
}
constexpr void Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::__cordl_internal_set_PDbRowJBSwjdiOlQIDEWHTHJbvijA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PDbRowJBSwjdiOlQIDEWHTHJbvijA = value;
}
constexpr ::Rewired::ControllerPollingInfo& Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::__cordl_internal_get_HnXiHujoFdKHoBDHEMEXoRCuVZJf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HnXiHujoFdKHoBDHEMEXoRCuVZJf;
}
constexpr ::Rewired::ControllerPollingInfo const& Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::__cordl_internal_get_HnXiHujoFdKHoBDHEMEXoRCuVZJf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HnXiHujoFdKHoBDHEMEXoRCuVZJf;
}
constexpr void Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::__cordl_internal_set_HnXiHujoFdKHoBDHEMEXoRCuVZJf(::Rewired::ControllerPollingInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HnXiHujoFdKHoBDHEMEXoRCuVZJf = value;
}
constexpr int32_t& Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::__cordl_internal_get_tTCiFbJkQByAeBAqudEjFUuEnGvI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tTCiFbJkQByAeBAqudEjFUuEnGvI;
}
constexpr int32_t const& Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::__cordl_internal_get_tTCiFbJkQByAeBAqudEjFUuEnGvI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tTCiFbJkQByAeBAqudEjFUuEnGvI;
}
constexpr void Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::__cordl_internal_set_tTCiFbJkQByAeBAqudEjFUuEnGvI(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tTCiFbJkQByAeBAqudEjFUuEnGvI = value;
}
constexpr ::Rewired::ControllerWithAxes*& Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::__cordl_internal_get_lLiVDYzNFMTmTsLIGrVEwjWIzORK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lLiVDYzNFMTmTsLIGrVEwjWIzORK;
}
constexpr ::Rewired::ControllerWithAxes* const& Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::__cordl_internal_get_lLiVDYzNFMTmTsLIGrVEwjWIzORK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lLiVDYzNFMTmTsLIGrVEwjWIzORK;
}
constexpr void Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::__cordl_internal_set_lLiVDYzNFMTmTsLIGrVEwjWIzORK(::Rewired::ControllerWithAxes*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lLiVDYzNFMTmTsLIGrVEwjWIzORK = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*& Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::__cordl_internal_get_AwdOYNKsyLqOZtvHcDuyIdksAZhFA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AwdOYNKsyLqOZtvHcDuyIdksAZhFA;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* const& Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::__cordl_internal_get_AwdOYNKsyLqOZtvHcDuyIdksAZhFA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AwdOYNKsyLqOZtvHcDuyIdksAZhFA;
}
constexpr void Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::__cordl_internal_set_AwdOYNKsyLqOZtvHcDuyIdksAZhFA(::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AwdOYNKsyLqOZtvHcDuyIdksAZhFA = value;
}
inline void Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::QzSSrMTEivsVuCoRNDbKiPFGwNKA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb*>(),
                        {"QzSSrMTEivsVuCoRNDbKiPFGwNKA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::bbxuOnxHytmwgBFLSCEMazZfKdgP()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb*>(),
                        {"bbxuOnxHytmwgBFLSCEMazZfKdgP", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ControllerPollingInfo Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerPollingInfo>(this, ___internal_method);
}
inline void Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb* Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr  Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::operator ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerPollingInfo_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr  Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::operator ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerPollingInfo_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb::ControllerWithAxes_LVkwobmJttVRdpITBEmVduZxJfNDb()   {
}
//  Writing Method size for method: ::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::*)(int32_t)>(&::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181859da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::*)()>(&::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181859c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::*)()>(&::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::MoveNext)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x181859780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi.ytewkvQWemidifOvPEkDGdOYvLwkA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::*)()>(&::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::ytewkvQWemidifOvPEkDGdOYvLwkA)> {
  constexpr static std::size_t size = 0x15100;
  constexpr static std::size_t addrs = 0x180d75a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi*>(),
                        {"ytewkvQWemidifOvPEkDGdOYvLwkA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi.nKZaSMJZMdIaeBpwgCgnNIStnBPT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::*)()>(&::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::nKZaSMJZMdIaeBpwgCgnNIStnBPT)> {
  constexpr static std::size_t size = 0x15100;
  constexpr static std::size_t addrs = 0x180d75a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi*>(),
                        {"nKZaSMJZMdIaeBpwgCgnNIStnBPT", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi.System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerPollingInfo (::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::*)()>(&::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181859c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::*)()>(&::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::*)()>(&::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181859c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi.System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* (::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::*)()>(&::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181859b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::*)()>(&::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181859b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::__cordl_internal_get_DtfEBMJiaKwVVXTswDZvEQaXXLVP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DtfEBMJiaKwVVXTswDZvEQaXXLVP;
}
constexpr int32_t const& Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::__cordl_internal_get_DtfEBMJiaKwVVXTswDZvEQaXXLVP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DtfEBMJiaKwVVXTswDZvEQaXXLVP;
}
constexpr void Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::__cordl_internal_set_DtfEBMJiaKwVVXTswDZvEQaXXLVP(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DtfEBMJiaKwVVXTswDZvEQaXXLVP = value;
}
constexpr ::Rewired::ControllerPollingInfo& Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::__cordl_internal_get_ykqGqCFOctIefJDzgBIoiuUAQTNZb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ykqGqCFOctIefJDzgBIoiuUAQTNZb;
}
constexpr ::Rewired::ControllerPollingInfo const& Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::__cordl_internal_get_ykqGqCFOctIefJDzgBIoiuUAQTNZb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ykqGqCFOctIefJDzgBIoiuUAQTNZb;
}
constexpr void Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::__cordl_internal_set_ykqGqCFOctIefJDzgBIoiuUAQTNZb(::Rewired::ControllerPollingInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ykqGqCFOctIefJDzgBIoiuUAQTNZb = value;
}
constexpr int32_t& Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::__cordl_internal_get_ozJIvwNYXgrvGtzxvFzyBUDDqdXB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ozJIvwNYXgrvGtzxvFzyBUDDqdXB;
}
constexpr int32_t const& Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::__cordl_internal_get_ozJIvwNYXgrvGtzxvFzyBUDDqdXB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ozJIvwNYXgrvGtzxvFzyBUDDqdXB;
}
constexpr void Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::__cordl_internal_set_ozJIvwNYXgrvGtzxvFzyBUDDqdXB(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ozJIvwNYXgrvGtzxvFzyBUDDqdXB = value;
}
constexpr ::Rewired::ControllerWithAxes*& Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::__cordl_internal_get_HCxhEJolPugSPDcfcwNYBHzXpQXxA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HCxhEJolPugSPDcfcwNYBHzXpQXxA;
}
constexpr ::Rewired::ControllerWithAxes* const& Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::__cordl_internal_get_HCxhEJolPugSPDcfcwNYBHzXpQXxA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HCxhEJolPugSPDcfcwNYBHzXpQXxA;
}
constexpr void Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::__cordl_internal_set_HCxhEJolPugSPDcfcwNYBHzXpQXxA(::Rewired::ControllerWithAxes*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HCxhEJolPugSPDcfcwNYBHzXpQXxA = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*& Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::__cordl_internal_get_WRJzIVfQUPsJsLEfAaSnisstjlszA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WRJzIVfQUPsJsLEfAaSnisstjlszA;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* const& Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::__cordl_internal_get_WRJzIVfQUPsJsLEfAaSnisstjlszA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WRJzIVfQUPsJsLEfAaSnisstjlszA;
}
constexpr void Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::__cordl_internal_set_WRJzIVfQUPsJsLEfAaSnisstjlszA(::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WRJzIVfQUPsJsLEfAaSnisstjlszA = value;
}
inline void Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::ytewkvQWemidifOvPEkDGdOYvLwkA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi*>(),
                        {"ytewkvQWemidifOvPEkDGdOYvLwkA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::nKZaSMJZMdIaeBpwgCgnNIStnBPT()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi*>(),
                        {"nKZaSMJZMdIaeBpwgCgnNIStnBPT", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ControllerPollingInfo Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi*>(),
                        {"System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerPollingInfo>(this, ___internal_method);
}
inline void Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi*>(),
                        {"System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi* Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr  Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::operator ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerPollingInfo_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr  Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::operator ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerPollingInfo_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi::ControllerWithAxes_HpShqdabnqxsMltZjlqdhrOKhZJi()   {
}
//  Writing Method size for method: ::Rewired::ControllerWithAxes.get_axisCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerWithAxes::*)()>(&::Rewired::ControllerWithAxes::get_axisCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181851e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"get_axisCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.get_axis2DCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerWithAxes::*)()>(&::Rewired::ControllerWithAxes::get_axis2DCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181851e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"get_axis2DCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.get_Axes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::Controller_Axis*>* (::Rewired::ControllerWithAxes::*)()>(&::Rewired::ControllerWithAxes::get_Axes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181851d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"get_Axes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.get_Axes2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::Controller_Axis2D*>* (::Rewired::ControllerWithAxes::*)()>(&::Rewired::ControllerWithAxes::get_Axes2D)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181851cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"get_Axes2D", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.get_calibrationMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::CalibrationMap* (::Rewired::ControllerWithAxes::*)()>(&::Rewired::ControllerWithAxes::get_calibrationMap)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181851ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"get_calibrationMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.get_AxisElementIdentifiers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>* (::Rewired::ControllerWithAxes::*)()>(&::Rewired::ControllerWithAxes::get_AxisElementIdentifiers)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181851da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"get_AxisElementIdentifiers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerWithAxes::*)(int32_t, ::Rewired::InputSource, ::StringW, ::StringW, ::StringW, ::Rewired::ControllerType, ::System::Guid, int32_t, int32_t, ::ArrayW<bool>, ::Rewired::HardwareControllerMap_Game*, ::Rewired::Controller_Extension*, ::Rewired::ControllerDataUpdater*)>(&::Rewired::ControllerWithAxes::_ctor)> {
  constexpr static std::size_t size = 0xa20;
  constexpr static std::size_t addrs = 0x181850d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::InputSource>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::Rewired::HardwareControllerMap_Game*>(), ::i2c::type_of<::Rewired::Controller_Extension*>(), ::i2c::type_of<::Rewired::ControllerDataUpdater*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetElementById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller_Element* (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetElementById)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18184f510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                    {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxisIndexById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxisIndexById)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18184e6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisIndexById", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxis)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18184f470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxis", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxisPrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxisPrev)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18184eaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisPrev", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxisRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxisRaw)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18184f280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisRaw", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxisRawPrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxisRawPrev)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18184ef40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisRawPrev", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxisTimeActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxisTimeActive)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18184f090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisTimeActive", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxisTimeInactive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxisTimeInactive)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18184f3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisTimeInactive", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxisLastTimeActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxisLastTimeActive)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18184e800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisLastTimeActive", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxisLastTimeInactive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxisLastTimeInactive)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18184e950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisLastTimeInactive", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxisRawTimeActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxisRawTimeActive)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18184f090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisRawTimeActive", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxisRawTimeInactive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxisRawTimeInactive)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18184f1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisRawTimeInactive", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxisRawLastTimeActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxisRawLastTimeActive)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18184eca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisRawLastTimeActive", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxisRawLastTimeInactive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxisRawLastTimeInactive)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18184edf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisRawLastTimeInactive", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxisById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxisById)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18184e610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisById", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxisPrevById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxisPrevById)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18184e9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisPrevById", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxisRawById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxisRawById)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18184eb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisRawById", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxisRawPrevById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxisRawPrevById)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18184ee90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisRawPrevById", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxisTimeActiveById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxisTimeActiveById)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18184efe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisTimeActiveById", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxisTimeInactiveById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxisTimeInactiveById)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18184f320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisTimeInactiveById", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxisLastTimeActiveById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxisLastTimeActiveById)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18184e750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisLastTimeActiveById", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxisLastTimeInactiveById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxisLastTimeInactiveById)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18184e8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisLastTimeInactiveById", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxisRawTimeActiveById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxisRawTimeActiveById)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18184efe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisRawTimeActiveById", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxisRawTimeInactiveById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxisRawTimeInactiveById)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18184f130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisRawTimeInactiveById", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxisRawLastTimeActiveById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxisRawLastTimeActiveById)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18184ebf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisRawLastTimeActiveById", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxisRawLastTimeInactiveById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxisRawLastTimeInactiveById)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18184ed40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisRawLastTimeInactiveById", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxis2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxis2D)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18184e550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxis2D", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxis2DPrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxis2DPrev)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18184e090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxis2DPrev", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxis2DRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxis2DRaw)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18184e350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxis2DRaw", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetAxis2DRawPrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::GetAxis2DRawPrev)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18184e150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxis2DRawPrev", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetLastTimeActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::ControllerWithAxes::*)()>(&::Rewired::ControllerWithAxes::GetLastTimeActive)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18184f7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                    {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetLastTimeActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::ControllerWithAxes::*)(bool)>(&::Rewired::ControllerWithAxes::GetLastTimeActive)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18184f630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                    {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetLastTimeAnyElementChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::ControllerWithAxes::*)()>(&::Rewired::ControllerWithAxes::GetLastTimeAnyElementChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18184fb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                    {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetLastTimeAnyElementChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::ControllerWithAxes::*)(bool)>(&::Rewired::ControllerWithAxes::GetLastTimeAnyElementChanged)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18184fa60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                    {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetLastTimeAnyAxisActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::ControllerWithAxes::*)()>(&::Rewired::ControllerWithAxes::GetLastTimeAnyAxisActive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18184f930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetLastTimeAnyAxisActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetLastTimeAnyAxisActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::ControllerWithAxes::*)(bool)>(&::Rewired::ControllerWithAxes::GetLastTimeAnyAxisActive)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18184f820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetLastTimeAnyAxisActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetLastTimeAnyAxisChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::ControllerWithAxes::*)()>(&::Rewired::ControllerWithAxes::GetLastTimeAnyAxisChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18184f940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetLastTimeAnyAxisChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GetLastTimeAnyAxisChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::ControllerWithAxes::*)(bool)>(&::Rewired::ControllerWithAxes::GetLastTimeAnyAxisChanged)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18184f950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetLastTimeAnyAxisChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.PollForFirstElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerPollingInfo (::Rewired::ControllerWithAxes::*)()>(&::Rewired::ControllerWithAxes::PollForFirstElement)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818509c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                    {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.PollForFirstElementDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerPollingInfo (::Rewired::ControllerWithAxes::*)()>(&::Rewired::ControllerWithAxes::PollForFirstElementDown)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818508d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                    {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.PollForFirstAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerPollingInfo (::Rewired::ControllerWithAxes::*)()>(&::Rewired::ControllerWithAxes::PollForFirstAxis)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181850700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"PollForFirstAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.PollForAllElements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* (::Rewired::ControllerWithAxes::*)()>(&::Rewired::ControllerWithAxes::PollForAllElements)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818506b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                    {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.PollForAllElementsDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* (::Rewired::ControllerWithAxes::*)()>(&::Rewired::ControllerWithAxes::PollForAllElementsDown)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181850660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                    {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.PollForAllAxes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* (::Rewired::ControllerWithAxes::*)()>(&::Rewired::ControllerWithAxes::PollForAllAxes)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181850610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"PollForAllAxes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.YuHoUAkbudgKwXRKBvCSbwugoWwl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerWithAxes::*)()>(&::Rewired::ControllerWithAxes::YuHoUAkbudgKwXRKBvCSbwugoWwl)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x181850ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"YuHoUAkbudgKwXRKBvCSbwugoWwl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.IsPolledAxisActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerWithAxes::*)(int32_t, ::by_ref<::Rewired::Pole>, ::by_ref<int32_t>)>(&::Rewired::ControllerWithAxes::IsPolledAxisActive)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x1818501b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                    {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.ImportCalibrationMapFromXmlString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerWithAxes::*)(::StringW)>(&::Rewired::ControllerWithAxes::ImportCalibrationMapFromXmlString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818500f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"ImportCalibrationMapFromXmlString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.ImportCalibrationMapFromJsonString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerWithAxes::*)(::StringW)>(&::Rewired::ControllerWithAxes::ImportCalibrationMapFromJsonString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181850030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"ImportCalibrationMapFromJsonString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.GnzUCTYBqZxmEqupbWyLzQUbIcyd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerWithAxes::*)(::Rewired::UpdateLoopType)>(&::Rewired::ControllerWithAxes::GnzUCTYBqZxmEqupbWyLzQUbIcyd)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x18184fb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                    {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.cHQVigwzCgwBbPdFdCIspXRadnQC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerWithAxes::*)(::Rewired::ActionElementMap*, int32_t, bool, bool, ::by_ref<float_t>)>(&::Rewired::ControllerWithAxes::cHQVigwzCgwBbPdFdCIspXRadnQC)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181851740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"cHQVigwzCgwBbPdFdCIspXRadnQC", {}, {::i2c::type_of<::Rewired::ActionElementMap*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.dxEBFmYDZeAUhkMAyOlHGjdzdkMkA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerWithAxes::*)(::Rewired::ControllerMap*)>(&::Rewired::ControllerWithAxes::dxEBFmYDZeAUhkMAyOlHGjdzdkMkA)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1818518a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                    {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.LuMAHEyraCyBBRZWOjrzsOPkRmhb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerWithAxes::*)(::Rewired::ControllerMap*, ::Rewired::ActionElementMap*)>(&::Rewired::ControllerWithAxes::LuMAHEyraCyBBRZWOjrzsOPkRmhb)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818505c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                    {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.fVXRfwpgVcsjONAVeGerJyzaQmXJA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerWithAxes::*)()>(&::Rewired::ControllerWithAxes::fVXRfwpgVcsjONAVeGerJyzaQmXJA)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181851b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"fVXRfwpgVcsjONAVeGerJyzaQmXJA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.iDbasvEtAUAbhFMVRmoxdCxraMdPA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerWithAxes::*)()>(&::Rewired::ControllerWithAxes::iDbasvEtAUAbhFMVRmoxdCxraMdPA)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181851f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                    {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.tAWGszkEczOjidihEFYqvOHiGHoBc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerWithAxes::*)(int32_t)>(&::Rewired::ControllerWithAxes::tAWGszkEczOjidihEFYqvOHiGHoBc)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181852070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"tAWGszkEczOjidihEFYqvOHiGHoBc", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.WCLJfnOveuVPcxClRtKBwfbsMvpW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* (::Rewired::ControllerWithAxes::*)()>(&::Rewired::ControllerWithAxes::WCLJfnOveuVPcxClRtKBwfbsMvpW)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18172ae00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"WCLJfnOveuVPcxClRtKBwfbsMvpW", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerWithAxes.pcxkQNoKSvaelVAqcXnSRuHCUEMy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* (::Rewired::ControllerWithAxes::*)()>(&::Rewired::ControllerWithAxes::pcxkQNoKSvaelVAqcXnSRuHCUEMy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181852050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"pcxkQNoKSvaelVAqcXnSRuHCUEMy", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::ControllerWithAxes::__cordl_internal_get__axisCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axisCount;
}
constexpr int32_t const& Rewired::ControllerWithAxes::__cordl_internal_get__axisCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axisCount;
}
constexpr void Rewired::ControllerWithAxes::__cordl_internal_set__axisCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axisCount = value;
}
constexpr int32_t& Rewired::ControllerWithAxes::__cordl_internal_get__axis2DCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis2DCount;
}
constexpr int32_t const& Rewired::ControllerWithAxes::__cordl_internal_get__axis2DCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis2DCount;
}
constexpr void Rewired::ControllerWithAxes::__cordl_internal_set__axis2DCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axis2DCount = value;
}
constexpr ::ArrayW<::Rewired::Controller_Axis*>& Rewired::ControllerWithAxes::__cordl_internal_get_axes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axes;
}
constexpr ::ArrayW<::Rewired::Controller_Axis*> const& Rewired::ControllerWithAxes::__cordl_internal_get_axes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axes;
}
constexpr void Rewired::ControllerWithAxes::__cordl_internal_set_axes(::ArrayW<::Rewired::Controller_Axis*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axes = value;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Axis*>*& Rewired::ControllerWithAxes::__cordl_internal_get_axes_readOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axes_readOnly;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Axis*>* const& Rewired::ControllerWithAxes::__cordl_internal_get_axes_readOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axes_readOnly;
}
constexpr void Rewired::ControllerWithAxes::__cordl_internal_set_axes_readOnly(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Axis*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axes_readOnly = value;
}
constexpr ::ArrayW<::Rewired::Controller_Axis2D*>& Rewired::ControllerWithAxes::__cordl_internal_get_axes2D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axes2D;
}
constexpr ::ArrayW<::Rewired::Controller_Axis2D*> const& Rewired::ControllerWithAxes::__cordl_internal_get_axes2D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axes2D;
}
constexpr void Rewired::ControllerWithAxes::__cordl_internal_set_axes2D(::ArrayW<::Rewired::Controller_Axis2D*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axes2D = value;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Axis2D*>*& Rewired::ControllerWithAxes::__cordl_internal_get_axes2D_readOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axes2D_readOnly;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Axis2D*>* const& Rewired::ControllerWithAxes::__cordl_internal_get_axes2D_readOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axes2D_readOnly;
}
constexpr void Rewired::ControllerWithAxes::__cordl_internal_set_axes2D_readOnly(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Axis2D*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axes2D_readOnly = value;
}
constexpr ::Rewired::CalibrationMap*& Rewired::ControllerWithAxes::__cordl_internal_get__calibrationMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____calibrationMap;
}
constexpr ::Rewired::CalibrationMap* const& Rewired::ControllerWithAxes::__cordl_internal_get__calibrationMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____calibrationMap;
}
constexpr void Rewired::ControllerWithAxes::__cordl_internal_set__calibrationMap(::Rewired::CalibrationMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____calibrationMap = value;
}
constexpr ::ArrayW<float_t>& Rewired::ControllerWithAxes::__cordl_internal_get_LagBYJAuZrZYFLeEgYyZOVijFGznA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LagBYJAuZrZYFLeEgYyZOVijFGznA;
}
constexpr ::ArrayW<float_t> const& Rewired::ControllerWithAxes::__cordl_internal_get_LagBYJAuZrZYFLeEgYyZOVijFGznA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LagBYJAuZrZYFLeEgYyZOVijFGznA;
}
constexpr void Rewired::ControllerWithAxes::__cordl_internal_set_LagBYJAuZrZYFLeEgYyZOVijFGznA(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LagBYJAuZrZYFLeEgYyZOVijFGznA = value;
}
constexpr uint32_t& Rewired::ControllerWithAxes::__cordl_internal_get_QdKneLZvJiEORghcJACAGypyxegfA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QdKneLZvJiEORghcJACAGypyxegfA;
}
constexpr uint32_t const& Rewired::ControllerWithAxes::__cordl_internal_get_QdKneLZvJiEORghcJACAGypyxegfA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QdKneLZvJiEORghcJACAGypyxegfA;
}
constexpr void Rewired::ControllerWithAxes::__cordl_internal_set_QdKneLZvJiEORghcJACAGypyxegfA(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QdKneLZvJiEORghcJACAGypyxegfA = value;
}
constexpr ::Rewired::Utils::Classes::Utility::TimerAbs*& Rewired::ControllerWithAxes::__cordl_internal_get_MGLwixafXyjtIdiNVgsRkmqwBcZjA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MGLwixafXyjtIdiNVgsRkmqwBcZjA;
}
constexpr ::Rewired::Utils::Classes::Utility::TimerAbs* const& Rewired::ControllerWithAxes::__cordl_internal_get_MGLwixafXyjtIdiNVgsRkmqwBcZjA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MGLwixafXyjtIdiNVgsRkmqwBcZjA;
}
constexpr void Rewired::ControllerWithAxes::__cordl_internal_set_MGLwixafXyjtIdiNVgsRkmqwBcZjA(::Rewired::Utils::Classes::Utility::TimerAbs*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MGLwixafXyjtIdiNVgsRkmqwBcZjA = value;
}
constexpr ::ArrayW<float_t>& Rewired::ControllerWithAxes::__cordl_internal_get_clFhQhCVoNatYBnDaMPOYGudtfrv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clFhQhCVoNatYBnDaMPOYGudtfrv;
}
constexpr ::ArrayW<float_t> const& Rewired::ControllerWithAxes::__cordl_internal_get_clFhQhCVoNatYBnDaMPOYGudtfrv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clFhQhCVoNatYBnDaMPOYGudtfrv;
}
constexpr void Rewired::ControllerWithAxes::__cordl_internal_set_clFhQhCVoNatYBnDaMPOYGudtfrv(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clFhQhCVoNatYBnDaMPOYGudtfrv = value;
}
constexpr ::System::Func_2<int32_t,int32_t>*& Rewired::ControllerWithAxes::__cordl_internal_get_UPaNQflJNemFOMxgxZDpRhmQdPvP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UPaNQflJNemFOMxgxZDpRhmQdPvP;
}
constexpr ::System::Func_2<int32_t,int32_t>* const& Rewired::ControllerWithAxes::__cordl_internal_get_UPaNQflJNemFOMxgxZDpRhmQdPvP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UPaNQflJNemFOMxgxZDpRhmQdPvP;
}
constexpr void Rewired::ControllerWithAxes::__cordl_internal_set_UPaNQflJNemFOMxgxZDpRhmQdPvP(::System::Func_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UPaNQflJNemFOMxgxZDpRhmQdPvP = value;
}
inline int32_t Rewired::ControllerWithAxes::get_axisCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"get_axisCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::ControllerWithAxes::get_axis2DCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"get_axis2DCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::Rewired::Controller_Axis*>* Rewired::ControllerWithAxes::get_Axes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"get_Axes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::Controller_Axis*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::Rewired::Controller_Axis2D*>* Rewired::ControllerWithAxes::get_Axes2D()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"get_Axes2D", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::Controller_Axis2D*>*>(this, ___internal_method);
}
inline ::Rewired::CalibrationMap* Rewired::ControllerWithAxes::get_calibrationMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"get_calibrationMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::CalibrationMap*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>* Rewired::ControllerWithAxes::get_AxisElementIdentifiers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"get_AxisElementIdentifiers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*>(this, ___internal_method);
}
inline void Rewired::ControllerWithAxes::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, ::StringW  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_5, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7, int32_t  _cordl_fixed_empty_name_whitespace_param_8, ::ArrayW<bool>  _cordl_fixed_empty_name_whitespace_param_9, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_10, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_11, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_12)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::InputSource>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::Rewired::HardwareControllerMap_Game*>(), ::i2c::type_of<::Rewired::Controller_Extension*>(), ::i2c::type_of<::Rewired::ControllerDataUpdater*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8, _cordl_fixed_empty_name_whitespace_param_9, _cordl_fixed_empty_name_whitespace_param_10, _cordl_fixed_empty_name_whitespace_param_11, _cordl_fixed_empty_name_whitespace_param_12);
}
inline ::Rewired::Controller_Element* Rewired::ControllerWithAxes::GetElementById(int32_t  elementIdentifierId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller_Element*>(this, ___internal_method, elementIdentifierId);
}
inline int32_t Rewired::ControllerWithAxes::GetAxisIndexById(int32_t  elementIdentifierId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisIndexById", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, elementIdentifierId);
}
inline float_t Rewired::ControllerWithAxes::GetAxis(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxis", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, index);
}
inline float_t Rewired::ControllerWithAxes::GetAxisPrev(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisPrev", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, index);
}
inline float_t Rewired::ControllerWithAxes::GetAxisRaw(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisRaw", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, index);
}
inline float_t Rewired::ControllerWithAxes::GetAxisRawPrev(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisRawPrev", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, index);
}
inline double_t Rewired::ControllerWithAxes::GetAxisTimeActive(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisTimeActive", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, index);
}
inline double_t Rewired::ControllerWithAxes::GetAxisTimeInactive(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisTimeInactive", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, index);
}
inline double_t Rewired::ControllerWithAxes::GetAxisLastTimeActive(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisLastTimeActive", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, index);
}
inline double_t Rewired::ControllerWithAxes::GetAxisLastTimeInactive(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisLastTimeInactive", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, index);
}
inline double_t Rewired::ControllerWithAxes::GetAxisRawTimeActive(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisRawTimeActive", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, index);
}
inline double_t Rewired::ControllerWithAxes::GetAxisRawTimeInactive(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisRawTimeInactive", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, index);
}
inline double_t Rewired::ControllerWithAxes::GetAxisRawLastTimeActive(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisRawLastTimeActive", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, index);
}
inline double_t Rewired::ControllerWithAxes::GetAxisRawLastTimeInactive(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisRawLastTimeInactive", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, index);
}
inline float_t Rewired::ControllerWithAxes::GetAxisById(int32_t  elementIdentifierId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisById", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, elementIdentifierId);
}
inline float_t Rewired::ControllerWithAxes::GetAxisPrevById(int32_t  elementIdentifierId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisPrevById", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, elementIdentifierId);
}
inline float_t Rewired::ControllerWithAxes::GetAxisRawById(int32_t  elementIdentifierId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisRawById", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, elementIdentifierId);
}
inline float_t Rewired::ControllerWithAxes::GetAxisRawPrevById(int32_t  elementIdentifierId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisRawPrevById", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, elementIdentifierId);
}
inline double_t Rewired::ControllerWithAxes::GetAxisTimeActiveById(int32_t  elementIdentifierId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisTimeActiveById", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, elementIdentifierId);
}
inline double_t Rewired::ControllerWithAxes::GetAxisTimeInactiveById(int32_t  elementIdentifierId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisTimeInactiveById", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, elementIdentifierId);
}
inline double_t Rewired::ControllerWithAxes::GetAxisLastTimeActiveById(int32_t  elementIdentifierId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisLastTimeActiveById", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, elementIdentifierId);
}
inline double_t Rewired::ControllerWithAxes::GetAxisLastTimeInactiveById(int32_t  elementIdentifierId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisLastTimeInactiveById", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, elementIdentifierId);
}
inline double_t Rewired::ControllerWithAxes::GetAxisRawTimeActiveById(int32_t  elementIdentifierId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisRawTimeActiveById", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, elementIdentifierId);
}
inline double_t Rewired::ControllerWithAxes::GetAxisRawTimeInactiveById(int32_t  elementIdentifierId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisRawTimeInactiveById", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, elementIdentifierId);
}
inline double_t Rewired::ControllerWithAxes::GetAxisRawLastTimeActiveById(int32_t  elementIdentifierId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisRawLastTimeActiveById", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, elementIdentifierId);
}
inline double_t Rewired::ControllerWithAxes::GetAxisRawLastTimeInactiveById(int32_t  elementIdentifierId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxisRawLastTimeInactiveById", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, elementIdentifierId);
}
inline ::UnityEngine::Vector2 Rewired::ControllerWithAxes::GetAxis2D(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxis2D", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, index);
}
inline ::UnityEngine::Vector2 Rewired::ControllerWithAxes::GetAxis2DPrev(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxis2DPrev", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, index);
}
inline ::UnityEngine::Vector2 Rewired::ControllerWithAxes::GetAxis2DRaw(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxis2DRaw", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, index);
}
inline ::UnityEngine::Vector2 Rewired::ControllerWithAxes::GetAxis2DRawPrev(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetAxis2DRawPrev", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, index);
}
inline double_t Rewired::ControllerWithAxes::GetLastTimeActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Rewired::ControllerWithAxes::GetLastTimeActive(bool  useRawValues)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, useRawValues);
}
inline double_t Rewired::ControllerWithAxes::GetLastTimeAnyElementChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Rewired::ControllerWithAxes::GetLastTimeAnyElementChanged(bool  useRawValues)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, useRawValues);
}
inline double_t Rewired::ControllerWithAxes::GetLastTimeAnyAxisActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetLastTimeAnyAxisActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Rewired::ControllerWithAxes::GetLastTimeAnyAxisActive(bool  useRawValues)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetLastTimeAnyAxisActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, useRawValues);
}
inline double_t Rewired::ControllerWithAxes::GetLastTimeAnyAxisChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetLastTimeAnyAxisChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Rewired::ControllerWithAxes::GetLastTimeAnyAxisChanged(bool  useRawValues)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"GetLastTimeAnyAxisChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, useRawValues);
}
inline ::Rewired::ControllerPollingInfo Rewired::ControllerWithAxes::PollForFirstElement()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerPollingInfo>(this, ___internal_method);
}
inline ::Rewired::ControllerPollingInfo Rewired::ControllerWithAxes::PollForFirstElementDown()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerPollingInfo>(this, ___internal_method);
}
inline ::Rewired::ControllerPollingInfo Rewired::ControllerWithAxes::PollForFirstAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"PollForFirstAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerPollingInfo>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* Rewired::ControllerWithAxes::PollForAllElements()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* Rewired::ControllerWithAxes::PollForAllElementsDown()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* Rewired::ControllerWithAxes::PollForAllAxes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"PollForAllAxes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*>(this, ___internal_method);
}
inline void Rewired::ControllerWithAxes::YuHoUAkbudgKwXRKBvCSbwugoWwl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"YuHoUAkbudgKwXRKBvCSbwugoWwl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::ControllerWithAxes::IsPolledAxisActive(int32_t  index, ::by_ref<::Rewired::Pole>  pole, ::by_ref<int32_t>  elementIdentifierId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, pole, elementIdentifierId);
}
inline bool Rewired::ControllerWithAxes::ImportCalibrationMapFromXmlString(::StringW  xmlString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"ImportCalibrationMapFromXmlString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xmlString);
}
inline bool Rewired::ControllerWithAxes::ImportCalibrationMapFromJsonString(::StringW  jsonString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"ImportCalibrationMapFromJsonString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, jsonString);
}
inline void Rewired::ControllerWithAxes::GnzUCTYBqZxmEqupbWyLzQUbIcyd(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::ControllerWithAxes::cHQVigwzCgwBbPdFdCIspXRadnQC(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3, ::by_ref<float_t>  _cordl_fixed_empty_name_whitespace_param_4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"cHQVigwzCgwBbPdFdCIspXRadnQC", {}, {::i2c::type_of<::Rewired::ActionElementMap*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4);
}
inline void Rewired::ControllerWithAxes::dxEBFmYDZeAUhkMAyOlHGjdzdkMkA(::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerWithAxes::LuMAHEyraCyBBRZWOjrzsOPkRmhb(::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_1)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::ControllerWithAxes::fVXRfwpgVcsjONAVeGerJyzaQmXJA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"fVXRfwpgVcsjONAVeGerJyzaQmXJA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ControllerWithAxes::iDbasvEtAUAbhFMVRmoxdCxraMdPA()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerWithAxes*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Rewired::ControllerWithAxes::tAWGszkEczOjidihEFYqvOHiGHoBc(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"tAWGszkEczOjidihEFYqvOHiGHoBc", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* Rewired::ControllerWithAxes::WCLJfnOveuVPcxClRtKBwfbsMvpW()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"WCLJfnOveuVPcxClRtKBwfbsMvpW", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* Rewired::ControllerWithAxes::pcxkQNoKSvaelVAqcXnSRuHCUEMy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithAxes*>(),
                        {"pcxkQNoKSvaelVAqcXnSRuHCUEMy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*>(this, ___internal_method);
}
inline ::Rewired::ControllerWithAxes* Rewired::ControllerWithAxes::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, ::StringW  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_5, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7, int32_t  _cordl_fixed_empty_name_whitespace_param_8, ::ArrayW<bool>  _cordl_fixed_empty_name_whitespace_param_9, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_10, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_11, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_12)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerWithAxes*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8, _cordl_fixed_empty_name_whitespace_param_9, _cordl_fixed_empty_name_whitespace_param_10, _cordl_fixed_empty_name_whitespace_param_11, _cordl_fixed_empty_name_whitespace_param_12));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerWithAxes::ControllerWithAxes()   {
}

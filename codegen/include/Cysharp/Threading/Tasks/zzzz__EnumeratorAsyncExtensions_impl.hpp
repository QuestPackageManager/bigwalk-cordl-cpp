#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/EnumeratorAsyncExtensions.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TaskPool_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__EnumeratorAsyncExtensions_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AutoResetUniTaskCompletionSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__EnumeratorAsyncExtensions_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IPlayerLoopItem_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ITaskPoolNode_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskStatus_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/zzzz__CustomYieldInstruction_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__WaitForSeconds_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c.__cctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e683a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c::setStaticF___9(::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c*>(std::forward<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c*>(value));
}
inline ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c* Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c*>();
}
inline void Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c* Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions___c::EnumeratorPromise_EnumeratorAsyncExtensions___c()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::*)(int32_t)>(&::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::*)()>(&::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::*)()>(&::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x181e643e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::*)()>(&::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::*)()>(&::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::*)()>(&::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::System::Collections::IEnumerator*& Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::__cordl_internal_get_enumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enumerator;
}
constexpr ::System::Collections::IEnumerator* const& Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::__cordl_internal_get_enumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enumerator;
}
constexpr void Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::__cordl_internal_set_enumerator(::System::Collections::IEnumerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enumerator = value;
}
constexpr ::UnityEngine::CustomYieldInstruction*& Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::__cordl_internal_get__cyi_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cyi_5__2;
}
constexpr ::UnityEngine::CustomYieldInstruction* const& Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::__cordl_internal_get__cyi_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cyi_5__2;
}
constexpr void Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::__cordl_internal_set__cyi_5__2(::UnityEngine::CustomYieldInstruction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cyi_5__2 = value;
}
constexpr ::System::Collections::IEnumerator*& Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::__cordl_internal_get__innerCoroutine_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____innerCoroutine_5__3;
}
constexpr ::System::Collections::IEnumerator* const& Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::__cordl_internal_get__innerCoroutine_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____innerCoroutine_5__3;
}
constexpr void Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::__cordl_internal_set__innerCoroutine_5__3(::System::Collections::IEnumerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____innerCoroutine_5__3 = value;
}
inline void Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19* Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19::EnumeratorPromise_EnumeratorAsyncExtensions__ConsumeEnumerator_d__19()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::*)(int32_t)>(&::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::*)()>(&::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::*)()>(&::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::MoveNext)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e69210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::*)()>(&::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::*)()>(&::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::*)()>(&::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityEngine::AsyncOperation*& Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::__cordl_internal_get_asyncOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr ::UnityEngine::AsyncOperation* const& Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::__cordl_internal_get_asyncOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr void Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::__cordl_internal_set_asyncOperation(::UnityEngine::AsyncOperation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asyncOperation = value;
}
inline void Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22* Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitAsyncOperation_d__22()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::*)(int32_t)>(&::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::*)()>(&::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::*)()>(&::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181e69270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::*)()>(&::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::*)()>(&::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::*)()>(&::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityEngine::WaitForSeconds*& Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::__cordl_internal_get_waitForSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitForSeconds;
}
constexpr ::UnityEngine::WaitForSeconds* const& Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::__cordl_internal_get_waitForSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitForSeconds;
}
constexpr void Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::__cordl_internal_set_waitForSeconds(::UnityEngine::WaitForSeconds*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitForSeconds = value;
}
constexpr float_t& Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::__cordl_internal_get__second_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____second_5__2;
}
constexpr float_t const& Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::__cordl_internal_get__second_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____second_5__2;
}
constexpr void Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::__cordl_internal_set__second_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____second_5__2 = value;
}
constexpr float_t& Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::__cordl_internal_get__elapsed_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elapsed_5__3;
}
constexpr float_t const& Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::__cordl_internal_get__elapsed_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elapsed_5__3;
}
constexpr void Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::__cordl_internal_set__elapsed_5__3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____elapsed_5__3 = value;
}
inline void Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21* Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21::EnumeratorPromise_EnumeratorAsyncExtensions__UnwrapWaitForSeconds_d__21()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise.get_NextNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*> (::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::*)()>(&::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::get_NextNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>(),
                        {"get_NextNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::*)()>(&::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskSource* (*)(::System::Collections::IEnumerator*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::by_ref<int16_t>)>(&::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::Create)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181e5fe70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>(),
                        {"Create", {}, {::i2c::type_of<::System::Collections::IEnumerator*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::*)(int16_t)>(&::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::GetResult)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e60020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise.GetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::*)(int16_t)>(&::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::GetStatus)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180ecf830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise.UnsafeGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::*)()>(&::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::UnsafeGetStatus)> {
  constexpr static std::size_t size = 0x10f0;
  constexpr static std::size_t addrs = 0x180ecfba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::*)(::System::Action_1<::System::Object*>*, ::System::Object*, int16_t)>(&::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::OnCompleted)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x180ecf8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::*)()>(&::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::MoveNext)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181e60090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise.TryReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::*)()>(&::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::TryReturn)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e60200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>(),
                        {"TryReturn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise.ConsumeEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(::System::Collections::IEnumerator*)>(&::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::ConsumeEnumerator)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e5fe20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>(),
                        {"ConsumeEnumerator", {}, {::i2c::type_of<::System::Collections::IEnumerator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise.UnwrapWaitForSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(::UnityEngine::WaitForSeconds*)>(&::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::UnwrapWaitForSeconds)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e602c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>(),
                        {"UnwrapWaitForSeconds", {}, {::i2c::type_of<::UnityEngine::WaitForSeconds*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise.UnwrapWaitAsyncOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(::UnityEngine::AsyncOperation*)>(&::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::UnwrapWaitAsyncOperation)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e60270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>(),
                        {"UnwrapWaitAsyncOperation", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*& Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::__cordl_internal_get_nextNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise* const& Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::__cordl_internal_get_nextNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr void Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::__cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextNode = value;
}
constexpr ::System::Collections::IEnumerator*& Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::__cordl_internal_get_innerEnumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___innerEnumerator;
}
constexpr ::System::Collections::IEnumerator* const& Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::__cordl_internal_get_innerEnumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___innerEnumerator;
}
constexpr void Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::__cordl_internal_set_innerEnumerator(::System::Collections::IEnumerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___innerEnumerator = value;
}
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr void Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
constexpr int32_t& Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::__cordl_internal_get_initialFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialFrame;
}
constexpr int32_t const& Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::__cordl_internal_get_initialFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialFrame;
}
constexpr void Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::__cordl_internal_set_initialFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialFrame = value;
}
constexpr bool& Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::__cordl_internal_get_loopRunning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopRunning;
}
constexpr bool const& Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::__cordl_internal_get_loopRunning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopRunning;
}
constexpr void Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::__cordl_internal_set_loopRunning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopRunning = value;
}
constexpr bool& Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::__cordl_internal_get_calledGetResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calledGetResult;
}
constexpr bool const& Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::__cordl_internal_get_calledGetResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calledGetResult;
}
constexpr void Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::__cordl_internal_set_calledGetResult(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___calledGetResult = value;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>& Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*> const& Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr void Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
inline void Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>, "pool", ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>(std::forward<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>>(value));
}
inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*> Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>, "pool", ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>();
}
inline void Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::setStaticF_waitForSeconds_Seconds(::System::Reflection::FieldInfo*  value)  {
::cordl_internals::setStaticField<::System::Reflection::FieldInfo*, "waitForSeconds_Seconds", ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>(std::forward<::System::Reflection::FieldInfo*>(value));
}
inline ::System::Reflection::FieldInfo* Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::getStaticF_waitForSeconds_Seconds()  {
return ::cordl_internals::getStaticField<::System::Reflection::FieldInfo*, "waitForSeconds_Seconds", ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>();
}
inline ::by_ref<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*> Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::get_NextNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>(),
                        {"get_NextNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::Create(::System::Collections::IEnumerator*  innerEnumerator, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>(),
                        {"Create", {}, {::i2c::type_of<::System::Collections::IEnumerator*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskSource*>(nullptr, ___internal_method, innerEnumerator, timing, cancellationToken, token);
}
inline void Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
inline bool Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::TryReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>(),
                        {"TryReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::ConsumeEnumerator(::System::Collections::IEnumerator*  enumerator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>(),
                        {"ConsumeEnumerator", {}, {::i2c::type_of<::System::Collections::IEnumerator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, enumerator);
}
inline ::System::Collections::IEnumerator* Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::UnwrapWaitForSeconds(::UnityEngine::WaitForSeconds*  waitForSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>(),
                        {"UnwrapWaitForSeconds", {}, {::i2c::type_of<::UnityEngine::WaitForSeconds*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, waitForSeconds);
}
inline ::System::Collections::IEnumerator* Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::UnwrapWaitAsyncOperation(::UnityEngine::AsyncOperation*  asyncOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>(),
                        {"UnwrapWaitAsyncOperation", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, asyncOperation);
}
inline ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise* Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr  Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr  Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr  Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::operator ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>"
constexpr  Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::operator ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>* Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__EnumeratorAsyncExtensions_EnumeratorPromise__() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions_EnumeratorPromise::EnumeratorAsyncExtensions_EnumeratorPromise()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::*)(int32_t)>(&::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::*)()>(&::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::*)()>(&::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::MoveNext)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181e64cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::*)()>(&::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::*)()>(&::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802eb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::*)()>(&::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::UnityEngine::MonoBehaviour>& Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::__cordl_internal_get_coroutineRunner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coroutineRunner;
}
constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::__cordl_internal_get_coroutineRunner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coroutineRunner;
}
constexpr void Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::__cordl_internal_set_coroutineRunner(::UnityW<::UnityEngine::MonoBehaviour>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coroutineRunner = value;
}
constexpr ::System::Collections::IEnumerator*& Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::__cordl_internal_get_inner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inner;
}
constexpr ::System::Collections::IEnumerator* const& Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::__cordl_internal_get_inner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inner;
}
constexpr void Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::__cordl_internal_set_inner(::System::Collections::IEnumerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inner = value;
}
constexpr ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*& Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* const& Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr void Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::__cordl_internal_set_source(::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
inline void Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4* Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions__Core_d__4::EnumeratorAsyncExtensions__Core_d__4()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions.WithCancellation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (*)(::System::Collections::IEnumerator*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions::WithCancellation)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181e5fd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::System::Collections::IEnumerator*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions.ToUniTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (*)(::System::Collections::IEnumerator*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions::ToUniTask)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181e5fce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::System::Collections::IEnumerator*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions.ToUniTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (*)(::System::Collections::IEnumerator*, ::UnityEngine::MonoBehaviour*)>(&::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions::ToUniTask)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181e5fbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::System::Collections::IEnumerator*>(), ::i2c::type_of<::UnityEngine::MonoBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions.Core
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(::System::Collections::IEnumerator*, ::UnityEngine::MonoBehaviour*, ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*)>(&::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions::Core)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e5fb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions*>(),
                        {"Core", {}, {::i2c::type_of<::System::Collections::IEnumerator*>(), ::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_Awaiter Cysharp::Threading::Tasks::EnumeratorAsyncExtensions::GetAwaiter(T  enumerator)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions*>(),
                    {"GetAwaiter", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_Awaiter>(nullptr, ___internal_method, enumerator);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::EnumeratorAsyncExtensions::WithCancellation(::System::Collections::IEnumerator*  enumerator, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::System::Collections::IEnumerator*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, enumerator, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::EnumeratorAsyncExtensions::ToUniTask(::System::Collections::IEnumerator*  enumerator, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::System::Collections::IEnumerator*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, enumerator, timing, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::EnumeratorAsyncExtensions::ToUniTask(::System::Collections::IEnumerator*  enumerator, ::UnityEngine::MonoBehaviour*  coroutineRunner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::System::Collections::IEnumerator*>(), ::i2c::type_of<::UnityEngine::MonoBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, enumerator, coroutineRunner);
}
inline ::System::Collections::IEnumerator* Cysharp::Threading::Tasks::EnumeratorAsyncExtensions::Core(::System::Collections::IEnumerator*  inner, ::UnityEngine::MonoBehaviour*  coroutineRunner, ::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions*>(),
                        {"Core", {}, {::i2c::type_of<::System::Collections::IEnumerator*>(), ::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, inner, coroutineRunner, source);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::EnumeratorAsyncExtensions::EnumeratorAsyncExtensions()   {
}

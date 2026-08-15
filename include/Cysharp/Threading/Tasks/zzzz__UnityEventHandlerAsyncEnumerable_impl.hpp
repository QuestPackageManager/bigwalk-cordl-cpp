#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UnityEventHandlerAsyncEnumerable.hpp"
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UnityEventHandlerAsyncEnumerable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UnityEventHandlerAsyncEnumerable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::*)(::UnityEngine::Events::UnityEvent*, ::System::Threading::CancellationToken, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180eb4a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::AsyncUnit (::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::*)()>(&::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator.MoveNextAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<bool> (::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::*)()>(&::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::MoveNextAsync)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181e87d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::*)()>(&::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::Invoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e87d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator*>(),
                        {"Invoke", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator.OnCanceled1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::OnCanceled1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181e87f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator*>(),
                        {"OnCanceled1", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator.OnCanceled2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::OnCanceled2)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181e87ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator*>(),
                        {"OnCanceled2", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator.DisposeAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::*)()>(&::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::DisposeAsync)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e87cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator*>(),
                        {"DisposeAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::__cordl_internal_get_unityEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityEvent;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::__cordl_internal_get_unityEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityEvent;
}
constexpr void Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::__cordl_internal_set_unityEvent(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unityEvent = value;
}
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::__cordl_internal_get_cancellationToken1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken1;
}
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::__cordl_internal_get_cancellationToken1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken1;
}
constexpr void Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::__cordl_internal_set_cancellationToken1(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken1 = value;
}
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::__cordl_internal_get_cancellationToken2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken2;
}
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::__cordl_internal_get_cancellationToken2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken2;
}
constexpr void Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::__cordl_internal_set_cancellationToken2(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken2 = value;
}
constexpr ::UnityEngine::Events::UnityAction*& Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::__cordl_internal_get_unityAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityAction;
}
constexpr ::UnityEngine::Events::UnityAction* const& Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::__cordl_internal_get_unityAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityAction;
}
constexpr void Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::__cordl_internal_set_unityAction(::UnityEngine::Events::UnityAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unityAction = value;
}
constexpr ::System::Threading::CancellationTokenRegistration& Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::__cordl_internal_get_registration1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registration1;
}
constexpr ::System::Threading::CancellationTokenRegistration const& Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::__cordl_internal_get_registration1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registration1;
}
constexpr void Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::__cordl_internal_set_registration1(::System::Threading::CancellationTokenRegistration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___registration1 = value;
}
constexpr ::System::Threading::CancellationTokenRegistration& Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::__cordl_internal_get_registration2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registration2;
}
constexpr ::System::Threading::CancellationTokenRegistration const& Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::__cordl_internal_get_registration2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registration2;
}
constexpr void Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::__cordl_internal_set_registration2(::System::Threading::CancellationTokenRegistration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___registration2 = value;
}
constexpr bool& Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::__cordl_internal_get_isDisposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDisposed;
}
constexpr bool const& Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::__cordl_internal_get_isDisposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDisposed;
}
constexpr void Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::__cordl_internal_set_isDisposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDisposed = value;
}
inline void Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::setStaticF_cancel1(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "cancel1", ::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::getStaticF_cancel1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "cancel1", ::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator*>();
}
inline void Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::setStaticF_cancel2(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "cancel2", ::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::getStaticF_cancel2()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "cancel2", ::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator*>();
}
inline void Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::_ctor(::UnityEngine::Events::UnityEvent*  unityEvent, ::System::Threading::CancellationToken  cancellationToken1, ::System::Threading::CancellationToken  cancellationToken2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unityEvent, cancellationToken1, cancellationToken2);
}
inline ::Cysharp::Threading::Tasks::AsyncUnit Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::AsyncUnit>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::Invoke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator*>(),
                        {"Invoke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::OnCanceled1(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator*>(),
                        {"OnCanceled1", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
inline void Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::OnCanceled2(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator*>(),
                        {"OnCanceled2", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator* Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::New_ctor(::UnityEngine::Events::UnityEvent*  unityEvent, ::System::Threading::CancellationToken  cancellationToken1, ::System::Threading::CancellationToken  cancellationToken2)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator*>(unityEvent, cancellationToken1, cancellationToken2));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr  Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>* Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1___Cysharp__Threading__Tasks__AsyncUnit_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr  Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator::UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable::*)(::UnityEngine::Events::UnityEvent*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable::_ctor)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0x180eb4440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable.GetAsyncEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>* (::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable::GetAsyncEnumerator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181e87c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable::__cordl_internal_get_unityEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityEvent;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable::__cordl_internal_get_unityEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityEvent;
}
constexpr void Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable::__cordl_internal_set_unityEvent(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unityEvent = value;
}
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable::__cordl_internal_get_cancellationToken1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken1;
}
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable::__cordl_internal_get_cancellationToken1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken1;
}
constexpr void Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable::__cordl_internal_set_cancellationToken1(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken1 = value;
}
inline void Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable::_ctor(::UnityEngine::Events::UnityEvent*  unityEvent, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unityEvent, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>* Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(this, ___internal_method, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable* Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable::New_ctor(::UnityEngine::Events::UnityEvent*  unityEvent, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable*>(unityEvent, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr  Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1___Cysharp__Threading__Tasks__AsyncUnit_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityEventHandlerAsyncEnumerable::UnityEventHandlerAsyncEnumerable()   {
}

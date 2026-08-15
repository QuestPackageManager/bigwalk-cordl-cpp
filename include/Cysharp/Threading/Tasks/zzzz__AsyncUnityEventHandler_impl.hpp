#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/AsyncUnityEventHandler.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnityEventHandler_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncClickEventHandler_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskStatus_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncUnityEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AsyncUnityEventHandler::*)(::UnityEngine::Events::UnityEvent*, ::System::Threading::CancellationToken, bool)>(&::Cysharp::Threading::Tasks::AsyncUnityEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181e7c250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncUnityEventHandler.OnInvokeAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Cysharp::Threading::Tasks::AsyncUnityEventHandler::*)()>(&::Cysharp::Threading::Tasks::AsyncUnityEventHandler::OnInvokeAsync)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e7c0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler*>(),
                        {"OnInvokeAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncUnityEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AsyncUnityEventHandler::*)()>(&::Cysharp::Threading::Tasks::AsyncUnityEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x5870;
  constexpr static std::size_t addrs = 0x180ec9fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler*>(),
                        {"Invoke", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncUnityEventHandler.CancellationCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Cysharp::Threading::Tasks::AsyncUnityEventHandler::CancellationCallback)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181e7c000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler*>(),
                        {"CancellationCallback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncUnityEventHandler.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AsyncUnityEventHandler::*)()>(&::Cysharp::Threading::Tasks::AsyncUnityEventHandler::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e7c1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncUnityEventHandler.Cysharp_Threading_Tasks_IAsyncClickEventHandler_OnClickAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Cysharp::Threading::Tasks::AsyncUnityEventHandler::*)()>(&::Cysharp::Threading::Tasks::AsyncUnityEventHandler::Cysharp_Threading_Tasks_IAsyncClickEventHandler_OnClickAsync)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e7c0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler*>(),
                        {"Cysharp.Threading.Tasks.IAsyncClickEventHandler.OnClickAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncUnityEventHandler.Cysharp_Threading_Tasks_IUniTaskSource_GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AsyncUnityEventHandler::*)(int16_t)>(&::Cysharp::Threading::Tasks::AsyncUnityEventHandler::Cysharp_Threading_Tasks_IUniTaskSource_GetResult)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e7c140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncUnityEventHandler.Cysharp_Threading_Tasks_IUniTaskSource_GetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::AsyncUnityEventHandler::*)(int16_t)>(&::Cysharp::Threading::Tasks::AsyncUnityEventHandler::Cysharp_Threading_Tasks_IUniTaskSource_GetStatus)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180ec9750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncUnityEventHandler.Cysharp_Threading_Tasks_IUniTaskSource_UnsafeGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::AsyncUnityEventHandler::*)()>(&::Cysharp::Threading::Tasks::AsyncUnityEventHandler::Cysharp_Threading_Tasks_IUniTaskSource_UnsafeGetStatus)> {
  constexpr static std::size_t size = 0x2cc0;
  constexpr static std::size_t addrs = 0x180dea850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.UnsafeGetStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncUnityEventHandler.Cysharp_Threading_Tasks_IUniTaskSource_OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AsyncUnityEventHandler::*)(::System::Action_1<::System::Object*>*, ::System::Object*, int16_t)>(&::Cysharp::Threading::Tasks::AsyncUnityEventHandler::Cysharp_Threading_Tasks_IUniTaskSource_OnCompleted)> {
  constexpr static std::size_t size = 0x7e0;
  constexpr static std::size_t addrs = 0x180ec97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityAction*& Cysharp::Threading::Tasks::AsyncUnityEventHandler::__cordl_internal_get_action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr ::UnityEngine::Events::UnityAction* const& Cysharp::Threading::Tasks::AsyncUnityEventHandler::__cordl_internal_get_action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr void Cysharp::Threading::Tasks::AsyncUnityEventHandler::__cordl_internal_set_action(::UnityEngine::Events::UnityAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___action = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Cysharp::Threading::Tasks::AsyncUnityEventHandler::__cordl_internal_get_unityEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityEvent;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Cysharp::Threading::Tasks::AsyncUnityEventHandler::__cordl_internal_get_unityEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityEvent;
}
constexpr void Cysharp::Threading::Tasks::AsyncUnityEventHandler::__cordl_internal_set_unityEvent(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unityEvent = value;
}
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::AsyncUnityEventHandler::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::AsyncUnityEventHandler::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr void Cysharp::Threading::Tasks::AsyncUnityEventHandler::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
constexpr ::System::Threading::CancellationTokenRegistration& Cysharp::Threading::Tasks::AsyncUnityEventHandler::__cordl_internal_get_registration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registration;
}
constexpr ::System::Threading::CancellationTokenRegistration const& Cysharp::Threading::Tasks::AsyncUnityEventHandler::__cordl_internal_get_registration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registration;
}
constexpr void Cysharp::Threading::Tasks::AsyncUnityEventHandler::__cordl_internal_set_registration(::System::Threading::CancellationTokenRegistration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___registration = value;
}
constexpr bool& Cysharp::Threading::Tasks::AsyncUnityEventHandler::__cordl_internal_get_isDisposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDisposed;
}
constexpr bool const& Cysharp::Threading::Tasks::AsyncUnityEventHandler::__cordl_internal_get_isDisposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDisposed;
}
constexpr void Cysharp::Threading::Tasks::AsyncUnityEventHandler::__cordl_internal_set_isDisposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDisposed = value;
}
constexpr bool& Cysharp::Threading::Tasks::AsyncUnityEventHandler::__cordl_internal_get_callOnce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callOnce;
}
constexpr bool const& Cysharp::Threading::Tasks::AsyncUnityEventHandler::__cordl_internal_get_callOnce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callOnce;
}
constexpr void Cysharp::Threading::Tasks::AsyncUnityEventHandler::__cordl_internal_set_callOnce(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callOnce = value;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>& Cysharp::Threading::Tasks::AsyncUnityEventHandler::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> const& Cysharp::Threading::Tasks::AsyncUnityEventHandler::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr void Cysharp::Threading::Tasks::AsyncUnityEventHandler::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
inline void Cysharp::Threading::Tasks::AsyncUnityEventHandler::setStaticF_cancellationCallback(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "cancellationCallback", ::Cysharp::Threading::Tasks::AsyncUnityEventHandler*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::AsyncUnityEventHandler::getStaticF_cancellationCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "cancellationCallback", ::Cysharp::Threading::Tasks::AsyncUnityEventHandler*>();
}
inline void Cysharp::Threading::Tasks::AsyncUnityEventHandler::_ctor(::UnityEngine::Events::UnityEvent*  unityEvent, ::System::Threading::CancellationToken  cancellationToken, bool  callOnce)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unityEvent, cancellationToken, callOnce);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::AsyncUnityEventHandler::OnInvokeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler*>(),
                        {"OnInvokeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::AsyncUnityEventHandler::Invoke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler*>(),
                        {"Invoke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::AsyncUnityEventHandler::CancellationCallback(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler*>(),
                        {"CancellationCallback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
inline void Cysharp::Threading::Tasks::AsyncUnityEventHandler::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::AsyncUnityEventHandler::Cysharp_Threading_Tasks_IAsyncClickEventHandler_OnClickAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler*>(),
                        {"Cysharp.Threading.Tasks.IAsyncClickEventHandler.OnClickAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::AsyncUnityEventHandler::Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::AsyncUnityEventHandler::Cysharp_Threading_Tasks_IUniTaskSource_GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::AsyncUnityEventHandler::Cysharp_Threading_Tasks_IUniTaskSource_UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::AsyncUnityEventHandler::Cysharp_Threading_Tasks_IUniTaskSource_OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncUnityEventHandler*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
inline ::Cysharp::Threading::Tasks::AsyncUnityEventHandler* Cysharp::Threading::Tasks::AsyncUnityEventHandler::New_ctor(::UnityEngine::Events::UnityEvent*  unityEvent, ::System::Threading::CancellationToken  cancellationToken, bool  callOnce)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::AsyncUnityEventHandler*>(unityEvent, cancellationToken, callOnce));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr  Cysharp::Threading::Tasks::AsyncUnityEventHandler::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::AsyncUnityEventHandler::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr  Cysharp::Threading::Tasks::AsyncUnityEventHandler::operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* Cysharp::Threading::Tasks::AsyncUnityEventHandler::i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Cysharp::Threading::Tasks::AsyncUnityEventHandler::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Cysharp::Threading::Tasks::AsyncUnityEventHandler::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IAsyncClickEventHandler"
constexpr  Cysharp::Threading::Tasks::AsyncUnityEventHandler::operator ::Cysharp::Threading::Tasks::IAsyncClickEventHandler*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IAsyncClickEventHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IAsyncClickEventHandler"
constexpr ::Cysharp::Threading::Tasks::IAsyncClickEventHandler* Cysharp::Threading::Tasks::AsyncUnityEventHandler::i___Cysharp__Threading__Tasks__IAsyncClickEventHandler() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IAsyncClickEventHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::AsyncUnityEventHandler::AsyncUnityEventHandler()   {
}

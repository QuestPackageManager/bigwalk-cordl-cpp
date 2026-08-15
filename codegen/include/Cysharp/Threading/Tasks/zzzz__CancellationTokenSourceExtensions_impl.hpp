#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CancellationTokenSourceExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__CancellationTokenSourceExtensions_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__DelayType_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenSourceExtensions.CancelCancellationTokenSourceState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Cysharp::Threading::Tasks::CancellationTokenSourceExtensions::CancelCancellationTokenSourceState)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e5e150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenSourceExtensions*>(),
                        {"CancelCancellationTokenSourceState", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenSourceExtensions.CancelAfterSlim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IDisposable* (*)(::System::Threading::CancellationTokenSource*, int32_t, ::Cysharp::Threading::Tasks::DelayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming)>(&::Cysharp::Threading::Tasks::CancellationTokenSourceExtensions::CancelAfterSlim)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181e5e090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenSourceExtensions*>(),
                        {"CancelAfterSlim", {}, {::i2c::type_of<::System::Threading::CancellationTokenSource*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Cysharp::Threading::Tasks::DelayType>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenSourceExtensions.CancelAfterSlim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IDisposable* (*)(::System::Threading::CancellationTokenSource*, ::System::TimeSpan, ::Cysharp::Threading::Tasks::DelayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming)>(&::Cysharp::Threading::Tasks::CancellationTokenSourceExtensions::CancelAfterSlim)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181e5dfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenSourceExtensions*>(),
                        {"CancelAfterSlim", {}, {::i2c::type_of<::System::Threading::CancellationTokenSource*>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::Cysharp::Threading::Tasks::DelayType>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenSourceExtensions.RegisterRaiseCancelOnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::CancellationTokenSource*, ::UnityEngine::Component*)>(&::Cysharp::Threading::Tasks::CancellationTokenSourceExtensions::RegisterRaiseCancelOnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e5e270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenSourceExtensions*>(),
                        {"RegisterRaiseCancelOnDestroy", {}, {::i2c::type_of<::System::Threading::CancellationTokenSource*>(), ::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenSourceExtensions.RegisterRaiseCancelOnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::CancellationTokenSource*, ::UnityEngine::GameObject*)>(&::Cysharp::Threading::Tasks::CancellationTokenSourceExtensions::RegisterRaiseCancelOnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e5e1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenSourceExtensions*>(),
                        {"RegisterRaiseCancelOnDestroy", {}, {::i2c::type_of<::System::Threading::CancellationTokenSource*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::CancellationTokenSourceExtensions::setStaticF_CancelCancellationTokenSourceStateDelegate(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "CancelCancellationTokenSourceStateDelegate", ::Cysharp::Threading::Tasks::CancellationTokenSourceExtensions*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::CancellationTokenSourceExtensions::getStaticF_CancelCancellationTokenSourceStateDelegate()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "CancelCancellationTokenSourceStateDelegate", ::Cysharp::Threading::Tasks::CancellationTokenSourceExtensions*>();
}
inline void Cysharp::Threading::Tasks::CancellationTokenSourceExtensions::CancelCancellationTokenSourceState(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenSourceExtensions*>(),
                        {"CancelCancellationTokenSourceState", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
inline ::System::IDisposable* Cysharp::Threading::Tasks::CancellationTokenSourceExtensions::CancelAfterSlim(::System::Threading::CancellationTokenSource*  cts, int32_t  millisecondsDelay, ::Cysharp::Threading::Tasks::DelayType  delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming  delayTiming)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenSourceExtensions*>(),
                        {"CancelAfterSlim", {}, {::i2c::type_of<::System::Threading::CancellationTokenSource*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Cysharp::Threading::Tasks::DelayType>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(nullptr, ___internal_method, cts, millisecondsDelay, delayType, delayTiming);
}
inline ::System::IDisposable* Cysharp::Threading::Tasks::CancellationTokenSourceExtensions::CancelAfterSlim(::System::Threading::CancellationTokenSource*  cts, ::System::TimeSpan  delayTimeSpan, ::Cysharp::Threading::Tasks::DelayType  delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming  delayTiming)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenSourceExtensions*>(),
                        {"CancelAfterSlim", {}, {::i2c::type_of<::System::Threading::CancellationTokenSource*>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::Cysharp::Threading::Tasks::DelayType>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(nullptr, ___internal_method, cts, delayTimeSpan, delayType, delayTiming);
}
inline void Cysharp::Threading::Tasks::CancellationTokenSourceExtensions::RegisterRaiseCancelOnDestroy(::System::Threading::CancellationTokenSource*  cts, ::UnityEngine::Component*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenSourceExtensions*>(),
                        {"RegisterRaiseCancelOnDestroy", {}, {::i2c::type_of<::System::Threading::CancellationTokenSource*>(), ::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cts, component);
}
inline void Cysharp::Threading::Tasks::CancellationTokenSourceExtensions::RegisterRaiseCancelOnDestroy(::System::Threading::CancellationTokenSource*  cts, ::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenSourceExtensions*>(),
                        {"RegisterRaiseCancelOnDestroy", {}, {::i2c::type_of<::System::Threading::CancellationTokenSource*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cts, gameObject);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::CancellationTokenSourceExtensions::CancellationTokenSourceExtensions()   {
}

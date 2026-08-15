#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncControllerColliderHitTrigger.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_impl.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncControllerColliderHitTrigger_def.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__IAsyncOnControllerColliderHitHandler_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__ControllerColliderHit_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger.OnControllerColliderHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger::*)(::UnityEngine::ControllerColliderHit*)>(&::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger::OnControllerColliderHit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e75c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger*>(),
                        {"OnControllerColliderHit", {}, {::i2c::type_of<::UnityEngine::ControllerColliderHit*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger.GetOnControllerColliderHitAsyncHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::Triggers::IAsyncOnControllerColliderHitHandler* (::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger::GetOnControllerColliderHitAsyncHandler)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e75b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger*>(),
                        {"GetOnControllerColliderHitAsyncHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger.GetOnControllerColliderHitAsyncHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::Triggers::IAsyncOnControllerColliderHitHandler* (::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger::GetOnControllerColliderHitAsyncHandler)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e75b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger*>(),
                        {"GetOnControllerColliderHitAsyncHandler", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger.OnControllerColliderHitAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ControllerColliderHit*> (::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger::OnControllerColliderHitAsync)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e75c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger*>(),
                        {"OnControllerColliderHitAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger.OnControllerColliderHitAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ControllerColliderHit*> (::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger::OnControllerColliderHitAsync)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e75bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger*>(),
                        {"OnControllerColliderHitAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger::OnControllerColliderHit(::UnityEngine::ControllerColliderHit*  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger*>(),
                        {"OnControllerColliderHit", {}, {::i2c::type_of<::UnityEngine::ControllerColliderHit*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hit);
}
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnControllerColliderHitHandler* Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger::GetOnControllerColliderHitAsyncHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger*>(),
                        {"GetOnControllerColliderHitAsyncHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Triggers::IAsyncOnControllerColliderHitHandler*>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnControllerColliderHitHandler* Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger::GetOnControllerColliderHitAsyncHandler(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger*>(),
                        {"GetOnControllerColliderHitAsyncHandler", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Triggers::IAsyncOnControllerColliderHitHandler*>(this, ___internal_method, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ControllerColliderHit*> Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger::OnControllerColliderHitAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger*>(),
                        {"OnControllerColliderHitAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ControllerColliderHit*>>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ControllerColliderHit*> Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger::OnControllerColliderHitAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger*>(),
                        {"OnControllerColliderHitAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ControllerColliderHit*>>(this, ___internal_method, cancellationToken);
}
inline void Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger* Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger::AsyncControllerColliderHitTrigger()   {
}

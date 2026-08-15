#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncRenderImageTrigger.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncRenderImageTrigger_def.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__IAsyncOnRenderImageHandler_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger.OnRenderImage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*)>(&::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger::OnRenderImage)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e79b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger*>(),
                        {"OnRenderImage", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger.GetOnRenderImageAsyncHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler* (::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger::GetOnRenderImageAsyncHandler)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e799e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger*>(),
                        {"GetOnRenderImageAsyncHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger.GetOnRenderImageAsyncHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler* (::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger::GetOnRenderImageAsyncHandler)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e79a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger*>(),
                        {"GetOnRenderImageAsyncHandler", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger.OnRenderImageAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::UnityW<::UnityEngine::RenderTexture>,::UnityW<::UnityEngine::RenderTexture>>> (::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger::OnRenderImageAsync)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e79b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger*>(),
                        {"OnRenderImageAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger.OnRenderImageAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::UnityW<::UnityEngine::RenderTexture>,::UnityW<::UnityEngine::RenderTexture>>> (::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger::OnRenderImageAsync)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e79a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger*>(),
                        {"OnRenderImageAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger::OnRenderImage(::UnityEngine::RenderTexture*  source, ::UnityEngine::RenderTexture*  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger*>(),
                        {"OnRenderImage", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, destination);
}
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler* Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger::GetOnRenderImageAsyncHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger*>(),
                        {"GetOnRenderImageAsyncHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler*>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler* Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger::GetOnRenderImageAsyncHandler(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger*>(),
                        {"GetOnRenderImageAsyncHandler", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler*>(this, ___internal_method, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::UnityW<::UnityEngine::RenderTexture>,::UnityW<::UnityEngine::RenderTexture>>> Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger::OnRenderImageAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger*>(),
                        {"OnRenderImageAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::UnityW<::UnityEngine::RenderTexture>,::UnityW<::UnityEngine::RenderTexture>>>>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::UnityW<::UnityEngine::RenderTexture>,::UnityW<::UnityEngine::RenderTexture>>> Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger::OnRenderImageAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger*>(),
                        {"OnRenderImageAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::UnityW<::UnityEngine::RenderTexture>,::UnityW<::UnityEngine::RenderTexture>>>>(this, ___internal_method, cancellationToken);
}
inline void Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger* Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Triggers::AsyncRenderImageTrigger::AsyncRenderImageTrigger()   {
}

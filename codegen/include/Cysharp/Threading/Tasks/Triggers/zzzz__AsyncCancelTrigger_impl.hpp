#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncCancelTrigger.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_impl.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncCancelTrigger_def.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__IAsyncOnCancelHandler_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ICancelHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger.UnityEngine_EventSystems_ICancelHandler_OnCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger::UnityEngine_EventSystems_ICancelHandler_OnCancel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e75460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger*>(),
                        {"UnityEngine.EventSystems.ICancelHandler.OnCancel", {}, {::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger.GetOnCancelAsyncHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::Triggers::IAsyncOnCancelHandler* (::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger::GetOnCancelAsyncHandler)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e75340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger*>(),
                        {"GetOnCancelAsyncHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger.GetOnCancelAsyncHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::Triggers::IAsyncOnCancelHandler* (::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger::GetOnCancelAsyncHandler)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e752e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger*>(),
                        {"GetOnCancelAsyncHandler", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger.OnCancelAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> (::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger::OnCancelAsync)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e75400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger*>(),
                        {"OnCancelAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger.OnCancelAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> (::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger::OnCancelAsync)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e75380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger*>(),
                        {"OnCancelAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger::UnityEngine_EventSystems_ICancelHandler_OnCancel(::UnityEngine::EventSystems::BaseEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger*>(),
                        {"UnityEngine.EventSystems.ICancelHandler.OnCancel", {}, {::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCancelHandler* Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger::GetOnCancelAsyncHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger*>(),
                        {"GetOnCancelAsyncHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Triggers::IAsyncOnCancelHandler*>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCancelHandler* Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger::GetOnCancelAsyncHandler(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger*>(),
                        {"GetOnCancelAsyncHandler", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Triggers::IAsyncOnCancelHandler*>(this, ___internal_method, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger::OnCancelAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger*>(),
                        {"OnCancelAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*>>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger::OnCancelAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger*>(),
                        {"OnCancelAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*>>(this, ___internal_method, cancellationToken);
}
inline void Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger* Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::ICancelHandler"
constexpr  Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger::operator ::UnityEngine::EventSystems::ICancelHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::ICancelHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::ICancelHandler"
constexpr ::UnityEngine::EventSystems::ICancelHandler* Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger::i___UnityEngine__EventSystems__ICancelHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::ICancelHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Triggers::AsyncCancelTrigger::AsyncCancelTrigger()   {
}

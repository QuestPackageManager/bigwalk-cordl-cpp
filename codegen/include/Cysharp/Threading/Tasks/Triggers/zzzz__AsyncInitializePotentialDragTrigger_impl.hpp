#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncInitializePotentialDragTrigger.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_impl.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncInitializePotentialDragTrigger_def.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__IAsyncOnInitializePotentialDragHandler_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IInitializePotentialDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger.UnityEngine_EventSystems_IInitializePotentialDragHandler_OnInitializePotentialDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger::UnityEngine_EventSystems_IInitializePotentialDragHandler_OnInitializePotentialDrag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e752d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger*>(),
                        {"UnityEngine.EventSystems.IInitializePotentialDragHandler.OnInitializePotentialDrag", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger.GetOnInitializePotentialDragAsyncHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::Triggers::IAsyncOnInitializePotentialDragHandler* (::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger::GetOnInitializePotentialDragAsyncHandler)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e751b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger*>(),
                        {"GetOnInitializePotentialDragAsyncHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger.GetOnInitializePotentialDragAsyncHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::Triggers::IAsyncOnInitializePotentialDragHandler* (::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger::GetOnInitializePotentialDragAsyncHandler)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e75150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger*>(),
                        {"GetOnInitializePotentialDragAsyncHandler", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger.OnInitializePotentialDragAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> (::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger::OnInitializePotentialDragAsync)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e76fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger*>(),
                        {"OnInitializePotentialDragAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger.OnInitializePotentialDragAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> (::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger::OnInitializePotentialDragAsync)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e76f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger*>(),
                        {"OnInitializePotentialDragAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger::UnityEngine_EventSystems_IInitializePotentialDragHandler_OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger*>(),
                        {"UnityEngine.EventSystems.IInitializePotentialDragHandler.OnInitializePotentialDrag", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnInitializePotentialDragHandler* Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger::GetOnInitializePotentialDragAsyncHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger*>(),
                        {"GetOnInitializePotentialDragAsyncHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Triggers::IAsyncOnInitializePotentialDragHandler*>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnInitializePotentialDragHandler* Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger::GetOnInitializePotentialDragAsyncHandler(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger*>(),
                        {"GetOnInitializePotentialDragAsyncHandler", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Triggers::IAsyncOnInitializePotentialDragHandler*>(this, ___internal_method, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger::OnInitializePotentialDragAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger*>(),
                        {"OnInitializePotentialDragAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger::OnInitializePotentialDragAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger*>(),
                        {"OnInitializePotentialDragAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*>>(this, ___internal_method, cancellationToken);
}
inline void Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger* Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
constexpr  Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger::operator ::UnityEngine::EventSystems::IInitializePotentialDragHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
constexpr ::UnityEngine::EventSystems::IInitializePotentialDragHandler* Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger::i___UnityEngine__EventSystems__IInitializePotentialDragHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Triggers::AsyncInitializePotentialDragTrigger::AsyncInitializePotentialDragTrigger()   {
}

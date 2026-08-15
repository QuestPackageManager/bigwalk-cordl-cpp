#pragma once
// IWYU pragma private; include "GlobalNamespace/WorldManager.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__YieldAwaitable_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__WorldManager_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "Dissonance/zzzz__DissonanceComms_def.hpp"
#include "GlobalNamespace/zzzz__FmRadioManager_def.hpp"
#include "GlobalNamespace/zzzz__LocalVoiceProvider_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCameraReferences_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PostProcessingManager_def.hpp"
#include "GlobalNamespace/zzzz__PropInventory_def.hpp"
#include "GlobalNamespace/zzzz__WorldManager_def.hpp"
#include "GlobalNamespace/zzzz__WorldMenuManager_def.hpp"
#include "Rewired/zzzz__Player_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::WorldManager_BroadcastState::WorldManager_BroadcastState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WorldManager_BroadcastState::WorldManager_BroadcastState()   {
}
constexpr ::GlobalNamespace::WorldManager_BroadcastState  GlobalNamespace::WorldManager_BroadcastState::Open{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::WorldManager_BroadcastState  GlobalNamespace::WorldManager_BroadcastState::Muted{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::WorldManager_BroadcastState  GlobalNamespace::WorldManager_BroadcastState::PushToTalkOff{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::WorldManager_BroadcastState  GlobalNamespace::WorldManager_BroadcastState::PushToTalkOn{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::WorldManager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldManager___c::*)()>(&::GlobalNamespace::WorldManager___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager___c._DelayPlayerReady_b__43_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::WorldManager___c::*)()>(&::GlobalNamespace::WorldManager___c::_DelayPlayerReady_b__43_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18042f380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager___c*>(),
                        {"<DelayPlayerReady>b__43_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::WorldManager___c::setStaticF___9(::GlobalNamespace::WorldManager___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::WorldManager___c*, "<>9", ::GlobalNamespace::WorldManager___c*>(std::forward<::GlobalNamespace::WorldManager___c*>(value));
}
inline ::GlobalNamespace::WorldManager___c* GlobalNamespace::WorldManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::WorldManager___c*, "<>9", ::GlobalNamespace::WorldManager___c*>();
}
inline void GlobalNamespace::WorldManager___c::setStaticF___9__43_0(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__43_0", ::GlobalNamespace::WorldManager___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* GlobalNamespace::WorldManager___c::getStaticF___9__43_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__43_0", ::GlobalNamespace::WorldManager___c*>();
}
inline void GlobalNamespace::WorldManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::WorldManager___c::_DelayPlayerReady_b__43_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager___c*>(),
                        {"<DelayPlayerReady>b__43_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::WorldManager___c* GlobalNamespace::WorldManager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WorldManager___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WorldManager___c::WorldManager___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::WorldManager__DelayPlayerReady_d__43.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldManager__DelayPlayerReady_d__43::*)()>(&::GlobalNamespace::WorldManager__DelayPlayerReady_d__43::MoveNext)> {
  constexpr static std::size_t size = 0x970;
  constexpr static std::size_t addrs = 0x18042caf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager__DelayPlayerReady_d__43>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager__DelayPlayerReady_d__43.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldManager__DelayPlayerReady_d__43::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::WorldManager__DelayPlayerReady_d__43::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager__DelayPlayerReady_d__43>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::WorldManager__DelayPlayerReady_d__43::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager__DelayPlayerReady_d__43>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::WorldManager__DelayPlayerReady_d__43::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager__DelayPlayerReady_d__43>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::WorldManager__DelayPlayerReady_d__43::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::WorldManager__DelayPlayerReady_d__43::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "character", ty: "::UnityW<::GlobalNamespace::PlayerCharacter>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_framesAboveBoard_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_framesBelowBoard_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::WorldManager__DelayPlayerReady_d__43::WorldManager__DelayPlayerReady_d__43(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::PlayerCharacter>  character, int32_t  _framesAboveBoard_5__2, int32_t  _framesBelowBoard_5__3, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1, ::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->character = character;
this->_framesAboveBoard_5__2 = _framesAboveBoard_5__2;
this->_framesBelowBoard_5__3 = _framesBelowBoard_5__3;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WorldManager__DelayPlayerReady_d__43::WorldManager__DelayPlayerReady_d__43()   {
}
//  Writing Method size for method: ::GlobalNamespace::WorldManager__DelayedReadyEffects_d__55.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldManager__DelayedReadyEffects_d__55::*)()>(&::GlobalNamespace::WorldManager__DelayedReadyEffects_d__55::MoveNext)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18042d750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager__DelayedReadyEffects_d__55>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager__DelayedReadyEffects_d__55.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldManager__DelayedReadyEffects_d__55::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::WorldManager__DelayedReadyEffects_d__55::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038a820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager__DelayedReadyEffects_d__55>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::WorldManager__DelayedReadyEffects_d__55::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager__DelayedReadyEffects_d__55>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::WorldManager__DelayedReadyEffects_d__55::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager__DelayedReadyEffects_d__55>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::WorldManager__DelayedReadyEffects_d__55::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::WorldManager__DelayedReadyEffects_d__55::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::WorldManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::WorldManager__DelayedReadyEffects_d__55::WorldManager__DelayedReadyEffects_d__55(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::WorldManager>  __4__this, ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WorldManager__DelayedReadyEffects_d__55::WorldManager__DelayedReadyEffects_d__55()   {
}
//  Writing Method size for method: ::GlobalNamespace::WorldManager.set_sessionIsClosed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldManager::*)(bool)>(&::GlobalNamespace::WorldManager::set_sessionIsClosed)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x180430c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"set_sessionIsClosed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager.get_sessionIsClosed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::WorldManager::*)()>(&::GlobalNamespace::WorldManager::get_sessionIsClosed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180430b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"get_sessionIsClosed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager.get_forceMutedBySystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::WorldManager::*)()>(&::GlobalNamespace::WorldManager::get_forceMutedBySystem)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180430a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"get_forceMutedBySystem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager.set_forceMutedBySystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldManager::*)(bool)>(&::GlobalNamespace::WorldManager::set_forceMutedBySystem)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180430c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"set_forceMutedBySystem", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager.add_OnWorldManagerStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::WorldManager::add_OnWorldManagerStart)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180430990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"add_OnWorldManagerStart", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager.remove_OnWorldManagerStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::WorldManager::remove_OnWorldManagerStart)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180430ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"remove_OnWorldManagerStart", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager.add_OnWorldManagerDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::WorldManager::add_OnWorldManagerDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180430900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"add_OnWorldManagerDestroy", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager.remove_OnWorldManagerDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::WorldManager::remove_OnWorldManagerDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180430b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"remove_OnWorldManagerDestroy", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldManager::*)()>(&::GlobalNamespace::WorldManager::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18042f4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldManager::*)()>(&::GlobalNamespace::WorldManager::Start)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x18042ff40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldManager::*)()>(&::GlobalNamespace::WorldManager::Update)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1804307e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldManager::*)()>(&::GlobalNamespace::WorldManager::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18042f6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager.SetToUIMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::WorldManager::SetToUIMode)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18042fd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"SetToUIMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager.SetToGameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::WorldManager::SetToGameMode)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18042fb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"SetToGameMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager.OnLocalPlayerCharcterStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::WorldManager::OnLocalPlayerCharcterStart)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18042f870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"OnLocalPlayerCharcterStart", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager.DelayPlayerReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::WorldManager::DelayPlayerReady)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18042f4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"DelayPlayerReady", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager.OnSocialRestrictionChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::WorldManager::OnSocialRestrictionChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18042f8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"OnSocialRestrictionChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager.OnGameChatStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::WorldManager::OnGameChatStatusChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18042f7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"OnGameChatStatusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager.HandleVoiceChatForceStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::System::Action_1<bool>*)>(&::GlobalNamespace::WorldManager::HandleVoiceChatForceStyle)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18042f640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"HandleVoiceChatForceStyle", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager.ToggleVoiceChatFully
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::WorldManager::ToggleVoiceChatFully)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x180430550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"ToggleVoiceChatFully", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager.ToggleVoiceChatForServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::WorldManager::ToggleVoiceChatForServer)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1804303e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"ToggleVoiceChatForServer", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager.ToggleMute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::WorldManager::ToggleMute)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804303a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"ToggleMute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager.SetMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::WorldManager::SetMuted)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18042f9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"SetMuted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager.SetPushToTalkButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::WorldManager::SetPushToTalkButton)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18042fa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"SetPushToTalkButton", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager.GetTotalPlaytime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::GlobalNamespace::WorldManager::GetTotalPlaytime)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18042f5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"GetTotalPlaytime", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager.get_isReadyForEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::WorldManager::get_isReadyForEffects)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180430a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"get_isReadyForEffects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager.DelayedReadyEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldManager::*)()>(&::GlobalNamespace::WorldManager::DelayedReadyEffects)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18042f540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"DelayedReadyEffects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldManager::*)()>(&::GlobalNamespace::WorldManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::WorldManager::__cordl_internal_get_inUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inUI;
}
constexpr bool const& GlobalNamespace::WorldManager::__cordl_internal_get_inUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inUI;
}
constexpr void GlobalNamespace::WorldManager::__cordl_internal_set_inUI(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inUI = value;
}
constexpr bool& GlobalNamespace::WorldManager::__cordl_internal_get_hasStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasStarted;
}
constexpr bool const& GlobalNamespace::WorldManager::__cordl_internal_get_hasStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasStarted;
}
constexpr void GlobalNamespace::WorldManager::__cordl_internal_set_hasStarted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasStarted = value;
}
constexpr ::Rewired::Player*& GlobalNamespace::WorldManager::__cordl_internal_get_inputPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputPlayer;
}
constexpr ::Rewired::Player* const& GlobalNamespace::WorldManager::__cordl_internal_get_inputPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputPlayer;
}
constexpr void GlobalNamespace::WorldManager::__cordl_internal_set_inputPlayer(::Rewired::Player*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputPlayer = value;
}
constexpr ::UnityW<::Dissonance::DissonanceComms>& GlobalNamespace::WorldManager::__cordl_internal_get_dissonanceComms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dissonanceComms;
}
constexpr ::UnityW<::Dissonance::DissonanceComms> const& GlobalNamespace::WorldManager::__cordl_internal_get_dissonanceComms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dissonanceComms;
}
constexpr void GlobalNamespace::WorldManager::__cordl_internal_set_dissonanceComms(::UnityW<::Dissonance::DissonanceComms>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dissonanceComms = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalVoiceProvider>& GlobalNamespace::WorldManager::__cordl_internal_get_localVoiceProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localVoiceProvider;
}
constexpr ::UnityW<::GlobalNamespace::LocalVoiceProvider> const& GlobalNamespace::WorldManager::__cordl_internal_get_localVoiceProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localVoiceProvider;
}
constexpr void GlobalNamespace::WorldManager::__cordl_internal_set_localVoiceProvider(::UnityW<::GlobalNamespace::LocalVoiceProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localVoiceProvider = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCameraReferences>& GlobalNamespace::WorldManager::__cordl_internal_get_playerCameraReferences()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCameraReferences;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCameraReferences> const& GlobalNamespace::WorldManager::__cordl_internal_get_playerCameraReferences() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCameraReferences;
}
constexpr void GlobalNamespace::WorldManager::__cordl_internal_set_playerCameraReferences(::UnityW<::GlobalNamespace::PlayerCameraReferences>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCameraReferences = value;
}
constexpr ::UnityW<::GlobalNamespace::FmRadioManager>& GlobalNamespace::WorldManager::__cordl_internal_get_fmRadioManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fmRadioManager;
}
constexpr ::UnityW<::GlobalNamespace::FmRadioManager> const& GlobalNamespace::WorldManager::__cordl_internal_get_fmRadioManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fmRadioManager;
}
constexpr void GlobalNamespace::WorldManager::__cordl_internal_set_fmRadioManager(::UnityW<::GlobalNamespace::FmRadioManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fmRadioManager = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::WorldManager::__cordl_internal_get_placeholderAtmos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placeholderAtmos;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::WorldManager::__cordl_internal_get_placeholderAtmos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placeholderAtmos;
}
constexpr void GlobalNamespace::WorldManager::__cordl_internal_set_placeholderAtmos(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placeholderAtmos = value;
}
constexpr ::GlobalNamespace::PostProcessingManager*& GlobalNamespace::WorldManager::__cordl_internal_get_postProcessingManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postProcessingManager;
}
constexpr ::GlobalNamespace::PostProcessingManager* const& GlobalNamespace::WorldManager::__cordl_internal_get_postProcessingManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postProcessingManager;
}
constexpr void GlobalNamespace::WorldManager::__cordl_internal_set_postProcessingManager(::GlobalNamespace::PostProcessingManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___postProcessingManager = value;
}
constexpr ::GlobalNamespace::PropInventory*& GlobalNamespace::WorldManager::__cordl_internal_get_propInventory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propInventory;
}
constexpr ::GlobalNamespace::PropInventory* const& GlobalNamespace::WorldManager::__cordl_internal_get_propInventory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propInventory;
}
constexpr void GlobalNamespace::WorldManager::__cordl_internal_set_propInventory(::GlobalNamespace::PropInventory*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propInventory = value;
}
constexpr bool& GlobalNamespace::WorldManager::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::WorldManager::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::WorldManager::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::System::Action*& GlobalNamespace::WorldManager::__cordl_internal_get_onOpenMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onOpenMenu;
}
constexpr ::System::Action* const& GlobalNamespace::WorldManager::__cordl_internal_get_onOpenMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onOpenMenu;
}
constexpr void GlobalNamespace::WorldManager::__cordl_internal_set_onOpenMenu(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onOpenMenu = value;
}
constexpr ::System::Action*& GlobalNamespace::WorldManager::__cordl_internal_get_onCloseMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCloseMenu;
}
constexpr ::System::Action* const& GlobalNamespace::WorldManager::__cordl_internal_get_onCloseMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCloseMenu;
}
constexpr void GlobalNamespace::WorldManager::__cordl_internal_set_onCloseMenu(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onCloseMenu = value;
}
constexpr ::UnityW<::GlobalNamespace::WorldMenuManager>& GlobalNamespace::WorldManager::__cordl_internal_get_worldMenuManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldMenuManager;
}
constexpr ::UnityW<::GlobalNamespace::WorldMenuManager> const& GlobalNamespace::WorldManager::__cordl_internal_get_worldMenuManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldMenuManager;
}
constexpr void GlobalNamespace::WorldManager::__cordl_internal_set_worldMenuManager(::UnityW<::GlobalNamespace::WorldMenuManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldMenuManager = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*& GlobalNamespace::WorldManager::__cordl_internal_get_onLocalPlayerCharcterStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLocalPlayerCharcterStart;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>* const& GlobalNamespace::WorldManager::__cordl_internal_get_onLocalPlayerCharcterStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLocalPlayerCharcterStart;
}
constexpr void GlobalNamespace::WorldManager::__cordl_internal_set_onLocalPlayerCharcterStart(::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onLocalPlayerCharcterStart = value;
}
constexpr int32_t& GlobalNamespace::WorldManager::__cordl_internal_get_playtimeAtStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playtimeAtStart;
}
constexpr int32_t const& GlobalNamespace::WorldManager::__cordl_internal_get_playtimeAtStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playtimeAtStart;
}
constexpr void GlobalNamespace::WorldManager::__cordl_internal_set_playtimeAtStart(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playtimeAtStart = value;
}
constexpr bool& GlobalNamespace::WorldManager::__cordl_internal_get__sessionIsClosed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessionIsClosed;
}
constexpr bool const& GlobalNamespace::WorldManager::__cordl_internal_get__sessionIsClosed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessionIsClosed;
}
constexpr void GlobalNamespace::WorldManager::__cordl_internal_set__sessionIsClosed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sessionIsClosed = value;
}
constexpr bool& GlobalNamespace::WorldManager::__cordl_internal_get__forceMutedBySystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forceMutedBySystem;
}
constexpr bool const& GlobalNamespace::WorldManager::__cordl_internal_get__forceMutedBySystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forceMutedBySystem;
}
constexpr void GlobalNamespace::WorldManager::__cordl_internal_set__forceMutedBySystem(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forceMutedBySystem = value;
}
constexpr ::System::Action_1<bool>*& GlobalNamespace::WorldManager::__cordl_internal_get_onSessionIsClosedChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSessionIsClosedChange;
}
constexpr ::System::Action_1<bool>* const& GlobalNamespace::WorldManager::__cordl_internal_get_onSessionIsClosedChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSessionIsClosedChange;
}
constexpr void GlobalNamespace::WorldManager::__cordl_internal_set_onSessionIsClosedChange(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onSessionIsClosedChange = value;
}
constexpr ::GlobalNamespace::WorldManager_BroadcastState& GlobalNamespace::WorldManager::__cordl_internal_get_broadcastState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___broadcastState;
}
constexpr ::GlobalNamespace::WorldManager_BroadcastState const& GlobalNamespace::WorldManager::__cordl_internal_get_broadcastState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___broadcastState;
}
constexpr void GlobalNamespace::WorldManager::__cordl_internal_set_broadcastState(::GlobalNamespace::WorldManager_BroadcastState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___broadcastState = value;
}
inline void GlobalNamespace::WorldManager::setStaticF_instance(::UnityW<::GlobalNamespace::WorldManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::WorldManager>, "instance", ::GlobalNamespace::WorldManager*>(std::forward<::UnityW<::GlobalNamespace::WorldManager>>(value));
}
inline ::UnityW<::GlobalNamespace::WorldManager> GlobalNamespace::WorldManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::WorldManager>, "instance", ::GlobalNamespace::WorldManager*>();
}
inline void GlobalNamespace::WorldManager::setStaticF_localPlayerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::PlayerCharacter>, "localPlayerCharacter", ::GlobalNamespace::WorldManager*>(std::forward<::UnityW<::GlobalNamespace::PlayerCharacter>>(value));
}
inline ::UnityW<::GlobalNamespace::PlayerCharacter> GlobalNamespace::WorldManager::getStaticF_localPlayerCharacter()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::PlayerCharacter>, "localPlayerCharacter", ::GlobalNamespace::WorldManager*>();
}
inline void GlobalNamespace::WorldManager::setStaticF_OnWorldManagerStart(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnWorldManagerStart", ::GlobalNamespace::WorldManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::WorldManager::getStaticF_OnWorldManagerStart()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnWorldManagerStart", ::GlobalNamespace::WorldManager*>();
}
inline void GlobalNamespace::WorldManager::setStaticF_OnWorldManagerDestroy(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnWorldManagerDestroy", ::GlobalNamespace::WorldManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::WorldManager::getStaticF_OnWorldManagerDestroy()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnWorldManagerDestroy", ::GlobalNamespace::WorldManager*>();
}
inline void GlobalNamespace::WorldManager::setStaticF_NetworkTimeProperty(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "NetworkTimeProperty", ::GlobalNamespace::WorldManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::WorldManager::getStaticF_NetworkTimeProperty()  {
return ::cordl_internals::getStaticField<int32_t, "NetworkTimeProperty", ::GlobalNamespace::WorldManager*>();
}
inline void GlobalNamespace::WorldManager::set_sessionIsClosed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"set_sessionIsClosed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::WorldManager::get_sessionIsClosed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"get_sessionIsClosed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::WorldManager::get_forceMutedBySystem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"get_forceMutedBySystem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::WorldManager::set_forceMutedBySystem(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"set_forceMutedBySystem", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::WorldManager::add_OnWorldManagerStart(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"add_OnWorldManagerStart", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::WorldManager::remove_OnWorldManagerStart(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"remove_OnWorldManagerStart", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::WorldManager::add_OnWorldManagerDestroy(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"add_OnWorldManagerDestroy", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::WorldManager::remove_OnWorldManagerDestroy(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"remove_OnWorldManagerDestroy", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::WorldManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WorldManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WorldManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WorldManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WorldManager::SetToUIMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"SetToUIMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::WorldManager::SetToGameMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"SetToGameMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::WorldManager::OnLocalPlayerCharcterStart(::GlobalNamespace::PlayerCharacter*  character)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"OnLocalPlayerCharcterStart", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, character);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid GlobalNamespace::WorldManager::DelayPlayerReady(::GlobalNamespace::PlayerCharacter*  character)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"DelayPlayerReady", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(nullptr, ___internal_method, character);
}
inline void GlobalNamespace::WorldManager::OnSocialRestrictionChanged(bool  socialRestriction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"OnSocialRestrictionChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, socialRestriction);
}
inline void GlobalNamespace::WorldManager::OnGameChatStatusChanged(bool  gameChatActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"OnGameChatStatusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameChatActive);
}
inline void GlobalNamespace::WorldManager::HandleVoiceChatForceStyle(bool  featureActives, ::System::Action_1<bool>*  muteOverlayToggler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"HandleVoiceChatForceStyle", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, featureActives, muteOverlayToggler);
}
inline void GlobalNamespace::WorldManager::ToggleVoiceChatFully(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"ToggleVoiceChatFully", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, active);
}
inline void GlobalNamespace::WorldManager::ToggleVoiceChatForServer(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"ToggleVoiceChatForServer", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enable);
}
inline void GlobalNamespace::WorldManager::ToggleMute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"ToggleMute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::WorldManager::SetMuted(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"SetMuted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, active);
}
inline void GlobalNamespace::WorldManager::SetPushToTalkButton(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"SetPushToTalkButton", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, active);
}
inline int32_t GlobalNamespace::WorldManager::GetTotalPlaytime(int32_t  fallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"GetTotalPlaytime", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fallback);
}
inline bool GlobalNamespace::WorldManager::get_isReadyForEffects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"get_isReadyForEffects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::WorldManager::DelayedReadyEffects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {"DelayedReadyEffects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WorldManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::WorldManager* GlobalNamespace::WorldManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WorldManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WorldManager::WorldManager()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/WorldManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__YieldAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WorldManager)
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace Dissonance {
class DissonanceComms;
}
namespace GlobalNamespace {
class FmRadioManager;
}
namespace GlobalNamespace {
class LocalVoiceProvider;
}
namespace GlobalNamespace {
class PlayerCameraReferences;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class PostProcessingManager;
}
namespace GlobalNamespace {
class PropInventory;
}
namespace GlobalNamespace {
struct WorldManager_BroadcastState;
}
namespace GlobalNamespace {
struct WorldManager__DelayPlayerReady_d__43;
}
namespace GlobalNamespace {
struct WorldManager__DelayedReadyEffects_d__55;
}
namespace GlobalNamespace {
class WorldManager___c;
}
namespace GlobalNamespace {
class WorldMenuManager;
}
namespace Rewired {
class Player;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct WorldManager_BroadcastState;
}
namespace GlobalNamespace {
class WorldManager;
}
namespace GlobalNamespace {
class WorldManager___c;
}
namespace GlobalNamespace {
struct WorldManager__DelayPlayerReady_d__43;
}
namespace GlobalNamespace {
struct WorldManager__DelayedReadyEffects_d__55;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WorldManager_BroadcastState);
MARK_REF_T(::GlobalNamespace::WorldManager*);
MARK_REF_T(::GlobalNamespace::WorldManager___c*);
MARK_VAL_T(::GlobalNamespace::WorldManager__DelayPlayerReady_d__43);
MARK_VAL_T(::GlobalNamespace::WorldManager__DelayedReadyEffects_d__55);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WorldManager_BroadcastState, "", "WorldManager/BroadcastState");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WorldManager*, "", "WorldManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WorldManager___c*, "", "WorldManager/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WorldManager__DelayPlayerReady_d__43, "", "WorldManager/<DelayPlayerReady>d__43");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WorldManager__DelayedReadyEffects_d__55, "", "WorldManager/<DelayedReadyEffects>d__55");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: WorldManager/BroadcastState
struct CORDL_TYPE WorldManager_BroadcastState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WorldManager_BroadcastState_Unwrapped
enum struct __WorldManager_BroadcastState_Unwrapped : int32_t {
__E_Open = static_cast<int32_t>(0x0),
__E_Muted = static_cast<int32_t>(0x1),
__E_PushToTalkOff = static_cast<int32_t>(0x2),
__E_PushToTalkOn = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WorldManager_BroadcastState_Unwrapped () const noexcept {
return static_cast<__WorldManager_BroadcastState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WorldManager_BroadcastState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WorldManager_BroadcastState(int32_t  value__) noexcept;

/// @brief Field Muted value: I32(1)
static ::GlobalNamespace::WorldManager_BroadcastState const Muted;

/// @brief Field Open value: I32(0)
static ::GlobalNamespace::WorldManager_BroadcastState const Open;

/// @brief Field PushToTalkOff value: I32(2)
static ::GlobalNamespace::WorldManager_BroadcastState const PushToTalkOff;

/// @brief Field PushToTalkOn value: I32(3)
static ::GlobalNamespace::WorldManager_BroadcastState const PushToTalkOn;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5206};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WorldManager_BroadcastState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WorldManager_BroadcastState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: WorldManager/<>c
class CORDL_TYPE WorldManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::WorldManager___c*  __9;

/// @brief Field <>9__43_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__43_0, put=setStaticF___9__43_0)) ::System::Func_1<bool>*  __9__43_0;

static inline ::GlobalNamespace::WorldManager___c* New_ctor() ;

/// @brief Method <DelayPlayerReady>b__43_0, addr 0x18042f380, size 0x30, virtual false, abstract: false, final false
inline bool _DelayPlayerReady_b__43_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::WorldManager___c* getStaticF___9() ;

static inline ::System::Func_1<bool>* getStaticF___9__43_0() ;

static inline void setStaticF___9(::GlobalNamespace::WorldManager___c*  value) ;

static inline void setStaticF___9__43_0(::System::Func_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WorldManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WorldManager___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WorldManager___c(WorldManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WorldManager___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WorldManager___c(WorldManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5207};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::WorldManager___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter, Cysharp.Threading.Tasks.YieldAwaitable::Awaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: WorldManager/<DelayPlayerReady>d__43
struct CORDL_TYPE WorldManager__DelayPlayerReady_d__43 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18042caf0, size 0x970, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr WorldManager__DelayPlayerReady_d__43() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "character", ty: "::UnityW<::GlobalNamespace::PlayerCharacter>", modifiers: "", def_value: None }, CppParam { name: "_framesAboveBoard_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_framesBelowBoard_5__3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter", modifiers: "", def_value: None }]
constexpr WorldManager__DelayPlayerReady_d__43(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::PlayerCharacter>  character, int32_t  _framesAboveBoard_5__2, int32_t  _framesBelowBoard_5__3, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1, ::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5208};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field character, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  character;

/// @brief Field <framesAboveBoard>5__2, offset: 0x18, size: 0x4, def value: None
 int32_t  _framesAboveBoard_5__2;

/// @brief Field <framesBelowBoard>5__3, offset: 0x1c, size: 0x4, def value: None
 int32_t  _framesBelowBoard_5__3;

/// @brief Field <>u__1, offset: 0x20, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

/// @brief Field <>u__2, offset: 0x30, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WorldManager__DelayPlayerReady_d__43, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager__DelayPlayerReady_d__43, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager__DelayPlayerReady_d__43, character) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager__DelayPlayerReady_d__43, _framesAboveBoard_5__2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager__DelayPlayerReady_d__43, _framesBelowBoard_5__3) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager__DelayPlayerReady_d__43, __u__1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager__DelayPlayerReady_d__43, __u__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WorldManager__DelayPlayerReady_d__43) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: WorldManager/<DelayedReadyEffects>d__55
struct CORDL_TYPE WorldManager__DelayedReadyEffects_d__55 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18042d750, size 0x140, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038a820, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr WorldManager__DelayedReadyEffects_d__55() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::WorldManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None }]
constexpr WorldManager__DelayedReadyEffects_d__55(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::WorldManager>  __4__this, ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5209};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::WorldManager>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x1, def value: None
 ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WorldManager__DelayedReadyEffects_d__55, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager__DelayedReadyEffects_d__55, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager__DelayedReadyEffects_d__55, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager__DelayedReadyEffects_d__55, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WorldManager__DelayedReadyEffects_d__55) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour, WorldManager::BroadcastState
namespace GlobalNamespace {
// Is value type: false
// CS Name: WorldManager
class CORDL_TYPE WorldManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BroadcastState = ::GlobalNamespace::WorldManager_BroadcastState;

using _DelayPlayerReady_d__43 = ::GlobalNamespace::WorldManager__DelayPlayerReady_d__43;

using _DelayedReadyEffects_d__55 = ::GlobalNamespace::WorldManager__DelayedReadyEffects_d__55;

using __c = ::GlobalNamespace::WorldManager___c;

/// @brief Field NetworkTimeProperty, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_NetworkTimeProperty, put=setStaticF_NetworkTimeProperty)) int32_t  NetworkTimeProperty;

/// @brief Field OnWorldManagerDestroy, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnWorldManagerDestroy, put=setStaticF_OnWorldManagerDestroy)) ::System::Action*  OnWorldManagerDestroy;

/// @brief Field OnWorldManagerStart, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnWorldManagerStart, put=setStaticF_OnWorldManagerStart)) ::System::Action*  OnWorldManagerStart;

/// @brief Field _forceMutedBySystem, offset 0x95, size 0x1 
 __declspec(property(get=__cordl_internal_get__forceMutedBySystem, put=__cordl_internal_set__forceMutedBySystem)) bool  _forceMutedBySystem;

/// @brief Field _sessionIsClosed, offset 0x94, size 0x1 
 __declspec(property(get=__cordl_internal_get__sessionIsClosed, put=__cordl_internal_set__sessionIsClosed)) bool  _sessionIsClosed;

/// @brief Field broadcastState, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_broadcastState, put=__cordl_internal_set_broadcastState)) ::GlobalNamespace::WorldManager_BroadcastState  broadcastState;

/// @brief Field dissonanceComms, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_dissonanceComms, put=__cordl_internal_set_dissonanceComms)) ::UnityW<::Dissonance::DissonanceComms>  dissonanceComms;

/// @brief Field fmRadioManager, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_fmRadioManager, put=__cordl_internal_set_fmRadioManager)) ::UnityW<::GlobalNamespace::FmRadioManager>  fmRadioManager;

 __declspec(property(get=get_forceMutedBySystem, put=set_forceMutedBySystem)) bool  forceMutedBySystem;

/// @brief Field hasStarted, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasStarted, put=__cordl_internal_set_hasStarted)) bool  hasStarted;

/// @brief Field inUI, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_inUI, put=__cordl_internal_set_inUI)) bool  inUI;

/// @brief Field inputPlayer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputPlayer, put=__cordl_internal_set_inputPlayer)) ::Rewired::Player*  inputPlayer;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::WorldManager>  instance;

/// @brief Field localPlayerCharacter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_localPlayerCharacter, put=setStaticF_localPlayerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  localPlayerCharacter;

/// @brief Field localVoiceProvider, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_localVoiceProvider, put=__cordl_internal_set_localVoiceProvider)) ::UnityW<::GlobalNamespace::LocalVoiceProvider>  localVoiceProvider;

/// @brief Field logVerbose, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field onCloseMenu, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCloseMenu, put=__cordl_internal_set_onCloseMenu)) ::System::Action*  onCloseMenu;

/// @brief Field onLocalPlayerCharcterStart, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_onLocalPlayerCharcterStart, put=__cordl_internal_set_onLocalPlayerCharcterStart)) ::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  onLocalPlayerCharcterStart;

/// @brief Field onOpenMenu, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_onOpenMenu, put=__cordl_internal_set_onOpenMenu)) ::System::Action*  onOpenMenu;

/// @brief Field onSessionIsClosedChange, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSessionIsClosedChange, put=__cordl_internal_set_onSessionIsClosedChange)) ::System::Action_1<bool>*  onSessionIsClosedChange;

/// @brief Field placeholderAtmos, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_placeholderAtmos, put=__cordl_internal_set_placeholderAtmos)) ::UnityW<::UnityEngine::Transform>  placeholderAtmos;

/// @brief Field playerCameraReferences, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCameraReferences, put=__cordl_internal_set_playerCameraReferences)) ::UnityW<::GlobalNamespace::PlayerCameraReferences>  playerCameraReferences;

/// @brief Field playtimeAtStart, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_playtimeAtStart, put=__cordl_internal_set_playtimeAtStart)) int32_t  playtimeAtStart;

/// @brief Field postProcessingManager, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_postProcessingManager, put=__cordl_internal_set_postProcessingManager)) ::GlobalNamespace::PostProcessingManager*  postProcessingManager;

/// @brief Field propInventory, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_propInventory, put=__cordl_internal_set_propInventory)) ::GlobalNamespace::PropInventory*  propInventory;

 __declspec(property(get=get_sessionIsClosed, put=set_sessionIsClosed)) bool  sessionIsClosed;

/// @brief Field worldMenuManager, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_worldMenuManager, put=__cordl_internal_set_worldMenuManager)) ::UnityW<::GlobalNamespace::WorldMenuManager>  worldMenuManager;

/// @brief Method Awake, addr 0x18042f4a0, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DelayPlayerReady, addr 0x18042f4d0, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTaskVoid DelayPlayerReady(::GlobalNamespace::PlayerCharacter*  character) ;

/// @brief Method DelayedReadyEffects, addr 0x18042f540, size 0x90, virtual false, abstract: false, final false
inline void DelayedReadyEffects() ;

/// @brief Method GetTotalPlaytime, addr 0x18042f5d0, size 0x70, virtual false, abstract: false, final false
static inline int32_t GetTotalPlaytime(int32_t  fallback) ;

/// @brief Method HandleVoiceChatForceStyle, addr 0x18042f640, size 0xa0, virtual false, abstract: false, final false
static inline void HandleVoiceChatForceStyle(bool  featureActives, ::System::Action_1<bool>*  muteOverlayToggler) ;

static inline ::GlobalNamespace::WorldManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18042f6e0, size 0xd0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnGameChatStatusChanged, addr 0x18042f7b0, size 0xc0, virtual false, abstract: false, final false
static inline void OnGameChatStatusChanged(bool  gameChatActive) ;

/// @brief Method OnLocalPlayerCharcterStart, addr 0x18042f870, size 0x70, virtual false, abstract: false, final false
static inline void OnLocalPlayerCharcterStart(::GlobalNamespace::PlayerCharacter*  character) ;

/// @brief Method OnSocialRestrictionChanged, addr 0x18042f8e0, size 0xc0, virtual false, abstract: false, final false
static inline void OnSocialRestrictionChanged(bool  socialRestriction) ;

/// @brief Method SetMuted, addr 0x18042f9a0, size 0xd0, virtual false, abstract: false, final false
static inline void SetMuted(bool  active) ;

/// @brief Method SetPushToTalkButton, addr 0x18042fa70, size 0x100, virtual false, abstract: false, final false
static inline void SetPushToTalkButton(bool  active) ;

/// @brief Method SetToGameMode, addr 0x18042fb70, size 0x1c0, virtual false, abstract: false, final false
static inline void SetToGameMode() ;

/// @brief Method SetToUIMode, addr 0x18042fd30, size 0x210, virtual false, abstract: false, final false
static inline void SetToUIMode() ;

/// @brief Method Start, addr 0x18042ff40, size 0x460, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method ToggleMute, addr 0x1804303a0, size 0x40, virtual false, abstract: false, final false
static inline void ToggleMute() ;

/// @brief Method ToggleVoiceChatForServer, addr 0x1804303e0, size 0x170, virtual false, abstract: false, final false
static inline void ToggleVoiceChatForServer(bool  enable) ;

/// @brief Method ToggleVoiceChatFully, addr 0x180430550, size 0x290, virtual false, abstract: false, final false
static inline void ToggleVoiceChatFully(bool  active) ;

/// @brief Method Update, addr 0x1804307e0, size 0xf0, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__forceMutedBySystem() const;

constexpr bool& __cordl_internal_get__forceMutedBySystem() ;

constexpr bool const& __cordl_internal_get__sessionIsClosed() const;

constexpr bool& __cordl_internal_get__sessionIsClosed() ;

constexpr ::GlobalNamespace::WorldManager_BroadcastState const& __cordl_internal_get_broadcastState() const;

constexpr ::GlobalNamespace::WorldManager_BroadcastState& __cordl_internal_get_broadcastState() ;

constexpr ::UnityW<::Dissonance::DissonanceComms> const& __cordl_internal_get_dissonanceComms() const;

constexpr ::UnityW<::Dissonance::DissonanceComms>& __cordl_internal_get_dissonanceComms() ;

constexpr ::UnityW<::GlobalNamespace::FmRadioManager> const& __cordl_internal_get_fmRadioManager() const;

constexpr ::UnityW<::GlobalNamespace::FmRadioManager>& __cordl_internal_get_fmRadioManager() ;

constexpr bool const& __cordl_internal_get_hasStarted() const;

constexpr bool& __cordl_internal_get_hasStarted() ;

constexpr bool const& __cordl_internal_get_inUI() const;

constexpr bool& __cordl_internal_get_inUI() ;

constexpr ::Rewired::Player* const& __cordl_internal_get_inputPlayer() const;

constexpr ::Rewired::Player*& __cordl_internal_get_inputPlayer() ;

constexpr ::UnityW<::GlobalNamespace::LocalVoiceProvider> const& __cordl_internal_get_localVoiceProvider() const;

constexpr ::UnityW<::GlobalNamespace::LocalVoiceProvider>& __cordl_internal_get_localVoiceProvider() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::System::Action* const& __cordl_internal_get_onCloseMenu() const;

constexpr ::System::Action*& __cordl_internal_get_onCloseMenu() ;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>* const& __cordl_internal_get_onLocalPlayerCharcterStart() const;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*& __cordl_internal_get_onLocalPlayerCharcterStart() ;

constexpr ::System::Action* const& __cordl_internal_get_onOpenMenu() const;

constexpr ::System::Action*& __cordl_internal_get_onOpenMenu() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_onSessionIsClosedChange() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_onSessionIsClosedChange() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_placeholderAtmos() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_placeholderAtmos() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCameraReferences> const& __cordl_internal_get_playerCameraReferences() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCameraReferences>& __cordl_internal_get_playerCameraReferences() ;

constexpr int32_t const& __cordl_internal_get_playtimeAtStart() const;

constexpr int32_t& __cordl_internal_get_playtimeAtStart() ;

constexpr ::GlobalNamespace::PostProcessingManager* const& __cordl_internal_get_postProcessingManager() const;

constexpr ::GlobalNamespace::PostProcessingManager*& __cordl_internal_get_postProcessingManager() ;

constexpr ::GlobalNamespace::PropInventory* const& __cordl_internal_get_propInventory() const;

constexpr ::GlobalNamespace::PropInventory*& __cordl_internal_get_propInventory() ;

constexpr ::UnityW<::GlobalNamespace::WorldMenuManager> const& __cordl_internal_get_worldMenuManager() const;

constexpr ::UnityW<::GlobalNamespace::WorldMenuManager>& __cordl_internal_get_worldMenuManager() ;

constexpr void __cordl_internal_set__forceMutedBySystem(bool  value) ;

constexpr void __cordl_internal_set__sessionIsClosed(bool  value) ;

constexpr void __cordl_internal_set_broadcastState(::GlobalNamespace::WorldManager_BroadcastState  value) ;

constexpr void __cordl_internal_set_dissonanceComms(::UnityW<::Dissonance::DissonanceComms>  value) ;

constexpr void __cordl_internal_set_fmRadioManager(::UnityW<::GlobalNamespace::FmRadioManager>  value) ;

constexpr void __cordl_internal_set_hasStarted(bool  value) ;

constexpr void __cordl_internal_set_inUI(bool  value) ;

constexpr void __cordl_internal_set_inputPlayer(::Rewired::Player*  value) ;

constexpr void __cordl_internal_set_localVoiceProvider(::UnityW<::GlobalNamespace::LocalVoiceProvider>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_onCloseMenu(::System::Action*  value) ;

constexpr void __cordl_internal_set_onLocalPlayerCharcterStart(::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  value) ;

constexpr void __cordl_internal_set_onOpenMenu(::System::Action*  value) ;

constexpr void __cordl_internal_set_onSessionIsClosedChange(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_placeholderAtmos(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_playerCameraReferences(::UnityW<::GlobalNamespace::PlayerCameraReferences>  value) ;

constexpr void __cordl_internal_set_playtimeAtStart(int32_t  value) ;

constexpr void __cordl_internal_set_postProcessingManager(::GlobalNamespace::PostProcessingManager*  value) ;

constexpr void __cordl_internal_set_propInventory(::GlobalNamespace::PropInventory*  value) ;

constexpr void __cordl_internal_set_worldMenuManager(::UnityW<::GlobalNamespace::WorldMenuManager>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnWorldManagerDestroy, addr 0x180430900, size 0x90, virtual false, abstract: false, final false
static inline void add_OnWorldManagerDestroy(::System::Action*  value) ;

/// @brief Method add_OnWorldManagerStart, addr 0x180430990, size 0x90, virtual false, abstract: false, final false
static inline void add_OnWorldManagerStart(::System::Action*  value) ;

static inline int32_t getStaticF_NetworkTimeProperty() ;

static inline ::System::Action* getStaticF_OnWorldManagerDestroy() ;

static inline ::System::Action* getStaticF_OnWorldManagerStart() ;

static inline ::UnityW<::GlobalNamespace::WorldManager> getStaticF_instance() ;

static inline ::UnityW<::GlobalNamespace::PlayerCharacter> getStaticF_localPlayerCharacter() ;

/// @brief Method get_forceMutedBySystem, addr 0x180430a20, size 0x10, virtual false, abstract: false, final false
inline bool get_forceMutedBySystem() ;

/// @brief Method get_isReadyForEffects, addr 0x180430a30, size 0xd0, virtual false, abstract: false, final false
static inline bool get_isReadyForEffects() ;

/// @brief Method get_sessionIsClosed, addr 0x180430b00, size 0x10, virtual false, abstract: false, final false
inline bool get_sessionIsClosed() ;

/// @brief Method remove_OnWorldManagerDestroy, addr 0x180430b10, size 0x90, virtual false, abstract: false, final false
static inline void remove_OnWorldManagerDestroy(::System::Action*  value) ;

/// @brief Method remove_OnWorldManagerStart, addr 0x180430ba0, size 0x90, virtual false, abstract: false, final false
static inline void remove_OnWorldManagerStart(::System::Action*  value) ;

static inline void setStaticF_NetworkTimeProperty(int32_t  value) ;

static inline void setStaticF_OnWorldManagerDestroy(::System::Action*  value) ;

static inline void setStaticF_OnWorldManagerStart(::System::Action*  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::WorldManager>  value) ;

static inline void setStaticF_localPlayerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

/// @brief Method set_forceMutedBySystem, addr 0x180430c30, size 0x10, virtual false, abstract: false, final false
inline void set_forceMutedBySystem(bool  value) ;

/// @brief Method set_sessionIsClosed, addr 0x180430c40, size 0x480, virtual false, abstract: false, final false
inline void set_sessionIsClosed(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WorldManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WorldManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WorldManager(WorldManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WorldManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WorldManager(WorldManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5210};

/// @brief Field inUI, offset: 0x20, size: 0x1, def value: None
 bool  ___inUI;

/// @brief Field hasStarted, offset: 0x21, size: 0x1, def value: None
 bool  ___hasStarted;

/// @brief Field inputPlayer, offset: 0x28, size: 0x8, def value: None
 ::Rewired::Player*  ___inputPlayer;

/// @brief Field dissonanceComms, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Dissonance::DissonanceComms>  ___dissonanceComms;

/// @brief Field localVoiceProvider, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalVoiceProvider>  ___localVoiceProvider;

/// @brief Field playerCameraReferences, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCameraReferences>  ___playerCameraReferences;

/// @brief Field fmRadioManager, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FmRadioManager>  ___fmRadioManager;

/// @brief Field placeholderAtmos, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___placeholderAtmos;

/// @brief Field postProcessingManager, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::PostProcessingManager*  ___postProcessingManager;

/// @brief Field propInventory, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::PropInventory*  ___propInventory;

/// @brief Field logVerbose, offset: 0x68, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field onOpenMenu, offset: 0x70, size: 0x8, def value: None
 ::System::Action*  ___onOpenMenu;

/// @brief Field onCloseMenu, offset: 0x78, size: 0x8, def value: None
 ::System::Action*  ___onCloseMenu;

/// @brief Field worldMenuManager, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::WorldMenuManager>  ___worldMenuManager;

/// @brief Field onLocalPlayerCharcterStart, offset: 0x88, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  ___onLocalPlayerCharcterStart;

/// @brief Field playtimeAtStart, offset: 0x90, size: 0x4, def value: None
 int32_t  ___playtimeAtStart;

/// @brief Field _sessionIsClosed, offset: 0x94, size: 0x1, def value: None
 bool  ____sessionIsClosed;

/// @brief Field _forceMutedBySystem, offset: 0x95, size: 0x1, def value: None
 bool  ____forceMutedBySystem;

/// @brief Field onSessionIsClosedChange, offset: 0x98, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___onSessionIsClosedChange;

/// @brief Field broadcastState, offset: 0xa0, size: 0x4, def value: None
 ::GlobalNamespace::WorldManager_BroadcastState  ___broadcastState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WorldManager, ___inUI) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager, ___hasStarted) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager, ___inputPlayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager, ___dissonanceComms) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager, ___localVoiceProvider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager, ___playerCameraReferences) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager, ___fmRadioManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager, ___placeholderAtmos) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager, ___postProcessingManager) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager, ___propInventory) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager, ___logVerbose) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager, ___onOpenMenu) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager, ___onCloseMenu) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager, ___worldMenuManager) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager, ___onLocalPlayerCharcterStart) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager, ___playtimeAtStart) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager, ____sessionIsClosed) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager, ____forceMutedBySystem) == 0x95, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager, ___onSessionIsClosedChange) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldManager, ___broadcastState) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WorldManager) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace

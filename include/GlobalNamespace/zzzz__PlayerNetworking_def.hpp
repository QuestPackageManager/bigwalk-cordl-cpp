#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerNetworking.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "GlobalNamespace/zzzz__Platforms_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeldInformation_def.hpp"
#include "GlobalNamespace/zzzz__ShellReferenceWithActionNumber_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerNetworking)
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
struct Platforms;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
struct PlayerHeldInformation;
}
namespace GlobalNamespace {
struct PlayerLooks_LookPart;
}
namespace GlobalNamespace {
struct PlayerNetworking__AsyncKickUser_d__93;
}
namespace GlobalNamespace {
struct PlayerNetworking__InitCounterBlockWatch_d__60;
}
namespace GlobalNamespace {
struct PlayerNetworking__SanitizeModerationName_d__63;
}
namespace GlobalNamespace {
class PlayerNetworking___c;
}
namespace GlobalNamespace {
class Prop;
}
namespace GlobalNamespace {
struct SeaShell_ShellReference;
}
namespace GlobalNamespace {
struct ShellReferenceWithActionNumber;
}
namespace HouseHouse::Dream {
class DreamController;
}
namespace Mirror {
class NetworkBehaviour;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace Mirror {
template<typename T>
class SyncHashSet_1;
}
namespace Mirror {
template<typename T>
struct SyncSet_1_Operation;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerNetworking;
}
namespace GlobalNamespace {
class PlayerNetworking___c;
}
namespace GlobalNamespace {
struct PlayerNetworking__AsyncKickUser_d__93;
}
namespace GlobalNamespace {
struct PlayerNetworking__InitCounterBlockWatch_d__60;
}
namespace GlobalNamespace {
struct PlayerNetworking__SanitizeModerationName_d__63;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerNetworking*);
MARK_REF_T(::GlobalNamespace::PlayerNetworking___c*);
MARK_VAL_T(::GlobalNamespace::PlayerNetworking__AsyncKickUser_d__93);
MARK_VAL_T(::GlobalNamespace::PlayerNetworking__InitCounterBlockWatch_d__60);
MARK_VAL_T(::GlobalNamespace::PlayerNetworking__SanitizeModerationName_d__63);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerNetworking*, "", "PlayerNetworking");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerNetworking___c*, "", "PlayerNetworking/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerNetworking__AsyncKickUser_d__93, "", "PlayerNetworking/<AsyncKickUser>d__93");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerNetworking__InitCounterBlockWatch_d__60, "", "PlayerNetworking/<InitCounterBlockWatch>d__60");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerNetworking__SanitizeModerationName_d__63, "", "PlayerNetworking/<SanitizeModerationName>d__63");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerNetworking/<>c
class CORDL_TYPE PlayerNetworking___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::PlayerNetworking___c*  __9;

/// @brief Field <>9__60_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__60_0, put=setStaticF___9__60_0)) ::System::Func_1<bool>*  __9__60_0;

static inline ::GlobalNamespace::PlayerNetworking___c* New_ctor() ;

/// @brief Method <InitCounterBlockWatch>b__60_0, addr 0x18038e1c0, size 0x70, virtual false, abstract: false, final false
inline bool _InitCounterBlockWatch_b__60_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::PlayerNetworking___c* getStaticF___9() ;

static inline ::System::Func_1<bool>* getStaticF___9__60_0() ;

static inline void setStaticF___9(::GlobalNamespace::PlayerNetworking___c*  value) ;

static inline void setStaticF___9__60_0(::System::Func_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerNetworking___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerNetworking___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerNetworking___c(PlayerNetworking___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerNetworking___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerNetworking___c(PlayerNetworking___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5506};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PlayerNetworking___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerNetworking/<AsyncKickUser>d__93
struct CORDL_TYPE PlayerNetworking__AsyncKickUser_d__93 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x180389f80, size 0x330, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayerNetworking__AsyncKickUser_d__93() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlayerNetworking>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr PlayerNetworking__AsyncKickUser_d__93(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::PlayerNetworking>  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5507};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerNetworking>  __4__this;

/// @brief Field <>u__1, offset: 0x18, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerNetworking__AsyncKickUser_d__93, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking__AsyncKickUser_d__93, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking__AsyncKickUser_d__93, __4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking__AsyncKickUser_d__93, __u__1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerNetworking__AsyncKickUser_d__93) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerNetworking/<InitCounterBlockWatch>d__60
struct CORDL_TYPE PlayerNetworking__InitCounterBlockWatch_d__60 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18038b630, size 0x5d0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayerNetworking__InitCounterBlockWatch_d__60() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlayerNetworking>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr PlayerNetworking__InitCounterBlockWatch_d__60(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::PlayerNetworking>  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5508};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerNetworking>  __4__this;

/// @brief Field <>u__1, offset: 0x18, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerNetworking__InitCounterBlockWatch_d__60, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking__InitCounterBlockWatch_d__60, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking__InitCounterBlockWatch_d__60, __4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking__InitCounterBlockWatch_d__60, __u__1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerNetworking__InitCounterBlockWatch_d__60) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerNetworking/<SanitizeModerationName>d__63
struct CORDL_TYPE PlayerNetworking__SanitizeModerationName_d__63 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18038d490, size 0x370, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayerNetworking__SanitizeModerationName_d__63() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "newModerationName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlayerNetworking>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::StringW>", modifiers: "", def_value: None }]
constexpr PlayerNetworking__SanitizeModerationName_d__63(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::StringW  newModerationName, ::UnityW<::GlobalNamespace::PlayerNetworking>  __4__this, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::StringW>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5509};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field newModerationName, offset: 0x10, size: 0x8, def value: None
 ::StringW  newModerationName;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerNetworking>  __4__this;

/// @brief Field <>u__1, offset: 0x20, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::StringW>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerNetworking__SanitizeModerationName_d__63, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking__SanitizeModerationName_d__63, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking__SanitizeModerationName_d__63, newModerationName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking__SanitizeModerationName_d__63, __4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking__SanitizeModerationName_d__63, __u__1) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerNetworking__SanitizeModerationName_d__63) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Mirror.NetworkBehaviour, Platforms, PlayerHeldInformation, ShellReferenceWithActionNumber, UnityEngine.Vector2, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerNetworking
class CORDL_TYPE PlayerNetworking : public ::Mirror::NetworkBehaviour {
public:
// Declarations
using _AsyncKickUser_d__93 = ::GlobalNamespace::PlayerNetworking__AsyncKickUser_d__93;

using _InitCounterBlockWatch_d__60 = ::GlobalNamespace::PlayerNetworking__InitCounterBlockWatch_d__60;

using _SanitizeModerationName_d__63 = ::GlobalNamespace::PlayerNetworking__SanitizeModerationName_d__63;

using __c = ::GlobalNamespace::PlayerNetworking___c;

 __declspec(property(get=get_NetworkcontrolsVelocity, put=set_NetworkcontrolsVelocity)) ::UnityEngine::Vector3  NetworkcontrolsVelocity;

 __declspec(property(get=get_NetworkechoAmount, put=set_NetworkechoAmount)) float_t  NetworkechoAmount;

 __declspec(property(get=get_NetworkepicUserId, put=set_NetworkepicUserId)) ::StringW  NetworkepicUserId;

 __declspec(property(get=get_NetworkhasMenuEyes, put=set_NetworkhasMenuEyes)) bool  NetworkhasMenuEyes;

 __declspec(property(get=get_NetworkheadState, put=set_NetworkheadState)) ::UnityEngine::Vector2  NetworkheadState;

 __declspec(property(get=get_NetworkheldSwitch, put=set_NetworkheldSwitch)) ::GlobalNamespace::ShellReferenceWithActionNumber  NetworkheldSwitch;

 __declspec(property(get=get_Networkidentifier, put=set_Networkidentifier)) ::StringW  Networkidentifier;

 __declspec(property(get=get_Networkis2DVoice, put=set_Networkis2DVoice)) bool  Networkis2DVoice;

 __declspec(property(get=get_NetworkisAudioGhost, put=set_NetworkisAudioGhost)) bool  NetworkisAudioGhost;

 __declspec(property(get=get_NetworkisGhost, put=set_NetworkisGhost)) bool  NetworkisGhost;

 __declspec(property(get=get_NetworkisHost, put=set_NetworkisHost)) bool  NetworkisHost;

 __declspec(property(get=get_NetworkisMuted, put=set_NetworkisMuted)) bool  NetworkisMuted;

 __declspec(property(get=get_NetworkisPending, put=set_NetworkisPending)) bool  NetworkisPending;

 __declspec(property(get=get_NetworkisSitting, put=set_NetworkisSitting)) bool  NetworkisSitting;

 __declspec(property(get=get_NetworkisSleeping, put=set_NetworkisSleeping)) bool  NetworkisSleeping;

 __declspec(property(get=get_NetworkisTextChatting, put=set_NetworkisTextChatting)) bool  NetworkisTextChatting;

 __declspec(property(get=get_NetworkleftArmPointing, put=set_NetworkleftArmPointing)) bool  NetworkleftArmPointing;

 __declspec(property(get=get_NetworkleftArmWaving, put=set_NetworkleftArmWaving)) bool  NetworkleftArmWaving;

 __declspec(property(get=get_NetworklookIdHead, put=set_NetworklookIdHead)) int32_t  NetworklookIdHead;

 __declspec(property(get=get_NetworklookIdLegs, put=set_NetworklookIdLegs)) int32_t  NetworklookIdLegs;

 __declspec(property(get=get_NetworklookIdTorso, put=set_NetworklookIdTorso)) int32_t  NetworklookIdTorso;

 __declspec(property(get=get_NetworkmoderationName, put=set_NetworkmoderationName)) ::StringW  NetworkmoderationName;

 __declspec(property(get=get_Networkoutdoorness, put=set_Networkoutdoorness)) float_t  Networkoutdoorness;

 __declspec(property(get=get_Networkplatform, put=set_Networkplatform)) ::GlobalNamespace::Platforms  Networkplatform;

 __declspec(property(get=get_NetworkplayerHeldInformation, put=set_NetworkplayerHeldInformation)) ::GlobalNamespace::PlayerHeldInformation  NetworkplayerHeldInformation;

 __declspec(property(get=get_NetworkposeReference, put=set_NetworkposeReference)) ::GlobalNamespace::ShellReferenceWithActionNumber  NetworkposeReference;

 __declspec(property(get=get_NetworkrightArmPointing, put=set_NetworkrightArmPointing)) bool  NetworkrightArmPointing;

 __declspec(property(get=get_NetworkrightArmWaving, put=set_NetworkrightArmWaving)) bool  NetworkrightArmWaving;

 __declspec(property(get=get_NetworktrueCrouchness, put=set_NetworktrueCrouchness)) float_t  NetworktrueCrouchness;

 __declspec(property(get=get_NetworkuserPlatformId, put=set_NetworkuserPlatformId)) uint64_t  NetworkuserPlatformId;

 __declspec(property(get=get_Networkusername, put=set_Networkusername)) ::StringW  Networkusername;

 __declspec(property(get=get_NetworkwindUpStartTime, put=set_NetworkwindUpStartTime)) double_t  NetworkwindUpStartTime;

/// @brief Field PlatformUserIdChanged, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlatformUserIdChanged, put=__cordl_internal_set_PlatformUserIdChanged)) ::System::Action_1<uint64_t>*  PlatformUserIdChanged;

/// @brief Field _moderationNameSanitized, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get__moderationNameSanitized, put=__cordl_internal_set__moderationNameSanitized)) ::StringW  _moderationNameSanitized;

/// @brief Field controlsVelocity, offset 0xd8, size 0xc 
 __declspec(property(get=__cordl_internal_get_controlsVelocity, put=__cordl_internal_set_controlsVelocity)) ::UnityEngine::Vector3  controlsVelocity;

/// @brief Field echoAmount, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_echoAmount, put=__cordl_internal_set_echoAmount)) float_t  echoAmount;

/// @brief Field epicUserId, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_epicUserId, put=__cordl_internal_set_epicUserId)) ::StringW  epicUserId;

/// @brief Field hasMenuEyes, offset 0x141, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasMenuEyes, put=__cordl_internal_set_hasMenuEyes)) bool  hasMenuEyes;

/// @brief Field headState, offset 0xe4, size 0x8 
 __declspec(property(get=__cordl_internal_get_headState, put=__cordl_internal_set_headState)) ::UnityEngine::Vector2  headState;

/// @brief Field heldSwitch, offset 0x130, size 0x10 
 __declspec(property(get=__cordl_internal_get_heldSwitch, put=__cordl_internal_set_heldSwitch)) ::GlobalNamespace::ShellReferenceWithActionNumber  heldSwitch;

/// @brief Field identifier, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_identifier, put=__cordl_internal_set_identifier)) ::StringW  identifier;

/// @brief Field inGameBlockedUsers, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_inGameBlockedUsers, put=__cordl_internal_set_inGameBlockedUsers)) ::Mirror::SyncHashSet_1<uint64_t>*  inGameBlockedUsers;

/// @brief Field is2DVoice, offset 0xee, size 0x1 
 __declspec(property(get=__cordl_internal_get_is2DVoice, put=__cordl_internal_set_is2DVoice)) bool  is2DVoice;

/// @brief Field isAudioGhost, offset 0xed, size 0x1 
 __declspec(property(get=__cordl_internal_get_isAudioGhost, put=__cordl_internal_set_isAudioGhost)) bool  isAudioGhost;

/// @brief Field isGhost, offset 0xec, size 0x1 
 __declspec(property(get=__cordl_internal_get_isGhost, put=__cordl_internal_set_isGhost)) bool  isGhost;

/// @brief Field isHost, offset 0x120, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHost, put=__cordl_internal_set_isHost)) bool  isHost;

/// @brief Field isMuted, offset 0x142, size 0x1 
 __declspec(property(get=__cordl_internal_get_isMuted, put=__cordl_internal_set_isMuted)) bool  isMuted;

/// @brief Field isPending, offset 0x150, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPending, put=__cordl_internal_set_isPending)) bool  isPending;

/// @brief Field isSitting, offset 0x143, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSitting, put=__cordl_internal_set_isSitting)) bool  isSitting;

/// @brief Field isSleeping, offset 0x140, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSleeping, put=__cordl_internal_set_isSleeping)) bool  isSleeping;

/// @brief Field isTextChatting, offset 0x144, size 0x1 
 __declspec(property(get=__cordl_internal_get_isTextChatting, put=__cordl_internal_set_isTextChatting)) bool  isTextChatting;

/// @brief Field leftArmPointing, offset 0xd6, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftArmPointing, put=__cordl_internal_set_leftArmPointing)) bool  leftArmPointing;

/// @brief Field leftArmWaving, offset 0xd4, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftArmWaving, put=__cordl_internal_set_leftArmWaving)) bool  leftArmWaving;

/// @brief Field logVerbose, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field lookIdHead, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lookIdHead, put=__cordl_internal_set_lookIdHead)) int32_t  lookIdHead;

/// @brief Field lookIdLegs, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_lookIdLegs, put=__cordl_internal_set_lookIdLegs)) int32_t  lookIdLegs;

/// @brief Field lookIdTorso, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_lookIdTorso, put=__cordl_internal_set_lookIdTorso)) int32_t  lookIdTorso;

/// @brief Field moderationName, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_moderationName, put=__cordl_internal_set_moderationName)) ::StringW  moderationName;

 __declspec(property(get=get_moderationNameSanitized)) ::StringW  moderationNameSanitized;

/// @brief Field outdoorness, offset 0x14c, size 0x4 
 __declspec(property(get=__cordl_internal_get_outdoorness, put=__cordl_internal_set_outdoorness)) float_t  outdoorness;

/// @brief Field platform, offset 0x151, size 0x1 
 __declspec(property(get=__cordl_internal_get_platform, put=__cordl_internal_set_platform)) ::GlobalNamespace::Platforms  platform;

/// @brief Field playerCharacter, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field playerCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_playerCount, put=setStaticF_playerCount)) int32_t  playerCount;

/// @brief Field playerHeldInformation, offset 0x88, size 0x38 
 __declspec(property(get=__cordl_internal_get_playerHeldInformation, put=__cordl_internal_set_playerHeldInformation)) ::GlobalNamespace::PlayerHeldInformation  playerHeldInformation;

/// @brief Field poseReference, offset 0xc0, size 0x10 
 __declspec(property(get=__cordl_internal_get_poseReference, put=__cordl_internal_set_poseReference)) ::GlobalNamespace::ShellReferenceWithActionNumber  poseReference;

/// @brief Field rightArmPointing, offset 0xd7, size 0x1 
 __declspec(property(get=__cordl_internal_get_rightArmPointing, put=__cordl_internal_set_rightArmPointing)) bool  rightArmPointing;

/// @brief Field rightArmWaving, offset 0xd5, size 0x1 
 __declspec(property(get=__cordl_internal_get_rightArmWaving, put=__cordl_internal_set_rightArmWaving)) bool  rightArmWaving;

/// @brief Field trueCrouchness, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_trueCrouchness, put=__cordl_internal_set_trueCrouchness)) float_t  trueCrouchness;

/// @brief Field useExperimentalFixes, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get_useExperimentalFixes, put=__cordl_internal_set_useExperimentalFixes)) bool  useExperimentalFixes;

/// @brief Field userPlatformId, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_userPlatformId, put=__cordl_internal_set_userPlatformId)) uint64_t  userPlatformId;

/// @brief Field username, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_username, put=__cordl_internal_set_username)) ::StringW  username;

/// @brief Field windUpStartTime, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_windUpStartTime, put=__cordl_internal_set_windUpStartTime)) double_t  windUpStartTime;

/// @brief Method AsyncKickUser, addr 0x180360a10, size 0x70, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid AsyncKickUser() ;

/// @brief Method CmdAddToSyncedBlockList, addr 0x180360a80, size 0xc0, virtual false, abstract: false, final false
inline void CmdAddToSyncedBlockList(uint64_t  blockedUser) ;

/// @brief Method CmdChangeLook, addr 0x180360b40, size 0xe0, virtual false, abstract: false, final false
inline void CmdChangeLook(int32_t  lookId, ::GlobalNamespace::PlayerLooks_LookPart  lookPart) ;

/// @brief Method CmdDropHeldPlayer, addr 0x180360c20, size 0xb0, virtual false, abstract: false, final false
inline void CmdDropHeldPlayer() ;

/// @brief Method CmdDudJump, addr 0x180360cd0, size 0xb0, virtual false, abstract: false, final false
inline void CmdDudJump() ;

/// @brief Method CmdDudUseHeld, addr 0x180360d80, size 0xb0, virtual false, abstract: false, final false
inline void CmdDudUseHeld() ;

/// @brief Method CmdEnterPose, addr 0x180360e30, size 0xf0, virtual false, abstract: false, final false
inline void CmdEnterPose(::GlobalNamespace::SeaShell_ShellReference  poseShellReference, int32_t  poseActionNumber) ;

/// @brief Method CmdExitPose, addr 0x180360f20, size 0xc0, virtual false, abstract: false, final false
inline void CmdExitPose(int32_t  poseActionNumber) ;

/// @brief Method CmdFellToFar, addr 0x180360fe0, size 0xb0, virtual false, abstract: false, final false
inline void CmdFellToFar() ;

/// @brief Method CmdOnJump, addr 0x180361090, size 0xb0, virtual false, abstract: false, final false
inline void CmdOnJump() ;

/// @brief Method CmdPickUp, addr 0x180361200, size 0xf0, virtual false, abstract: false, final false
inline void CmdPickUp(::GlobalNamespace::PlayerHeldInformation  heldInformation) ;

/// @brief Method CmdPickUpPlayer, addr 0x180361140, size 0xc0, virtual false, abstract: false, final false
inline void CmdPickUpPlayer(::GlobalNamespace::PlayerCharacter*  pickedUpCharacter) ;

/// @brief Method CmdPlaceHeldPlayerIntoPose, addr 0x1803612f0, size 0xe0, virtual false, abstract: false, final false
inline void CmdPlaceHeldPlayerIntoPose(::GlobalNamespace::SeaShell_ShellReference  poseShellReference) ;

/// @brief Method CmdPlaceInHome, addr 0x1803613d0, size 0xf0, virtual false, abstract: false, final false
inline void CmdPlaceInHome(::GlobalNamespace::Prop*  prop, ::GlobalNamespace::SeaShell_ShellReference  propHomeReference) ;

/// @brief Method CmdRecordProvenWalking, addr 0x1803614c0, size 0xb0, virtual false, abstract: false, final false
inline void CmdRecordProvenWalking() ;

/// @brief Method CmdReleaseHeldSwitch, addr 0x180361570, size 0x120, virtual false, abstract: false, final false
inline void CmdReleaseHeldSwitch(::GlobalNamespace::SeaShell_ShellReference  peckSwitchReference, ::GlobalNamespace::PeckContext  peckContext, int32_t  actionNumber) ;

/// @brief Method CmdRemoveFromSyncedBlockList, addr 0x180361690, size 0xc0, virtual false, abstract: false, final false
inline void CmdRemoveFromSyncedBlockList(uint64_t  blockedUser) ;

/// @brief Method CmdSendTextChatMessage, addr 0x180361750, size 0xc0, virtual false, abstract: false, final false
inline void CmdSendTextChatMessage(::StringW  message) ;

/// @brief Method CmdSet2DVoice, addr 0x180361810, size 0xc0, virtual false, abstract: false, final false
inline void CmdSet2DVoice(bool  is2D) ;

/// @brief Method CmdSetAudioGhost, addr 0x1803618d0, size 0xc0, virtual false, abstract: false, final false
inline void CmdSetAudioGhost(bool  isAudioGhost) ;

/// @brief Method CmdSetControlsVelocity, addr 0x180361990, size 0xe0, virtual false, abstract: false, final false
inline void CmdSetControlsVelocity(::UnityEngine::Vector3  controlsVelocity) ;

/// @brief Method CmdSetCrouchness, addr 0x180361a70, size 0xc0, virtual false, abstract: false, final false
inline void CmdSetCrouchness(float_t  crouchness) ;

/// @brief Method CmdSetEchoAmount, addr 0x180361b30, size 0xc0, virtual false, abstract: false, final false
inline void CmdSetEchoAmount(float_t  echoValue) ;

/// @brief Method CmdSetGestureLeftPoint, addr 0x180361bf0, size 0xc0, virtual false, abstract: false, final false
inline void CmdSetGestureLeftPoint(bool  active) ;

/// @brief Method CmdSetGestureLeftWave, addr 0x180361cb0, size 0xc0, virtual false, abstract: false, final false
inline void CmdSetGestureLeftWave(bool  active) ;

/// @brief Method CmdSetGestureRightPoint, addr 0x180361d70, size 0xc0, virtual false, abstract: false, final false
inline void CmdSetGestureRightPoint(bool  active) ;

/// @brief Method CmdSetGestureRightWave, addr 0x180361e30, size 0xc0, virtual false, abstract: false, final false
inline void CmdSetGestureRightWave(bool  active) ;

/// @brief Method CmdSetGhost, addr 0x180361ef0, size 0xc0, virtual false, abstract: false, final false
inline void CmdSetGhost(bool  isGhost) ;

/// @brief Method CmdSetHeadState, addr 0x180361fb0, size 0xd0, virtual false, abstract: false, final false
inline void CmdSetHeadState(::UnityEngine::Vector2  headState) ;

/// @brief Method CmdSetIsTextChatting, addr 0x180362080, size 0xc0, virtual false, abstract: false, final false
inline void CmdSetIsTextChatting(bool  value) ;

/// @brief Method CmdSetMenuEyes, addr 0x180362140, size 0xc0, virtual false, abstract: false, final false
inline void CmdSetMenuEyes(bool  hasMenuEyes) ;

/// @brief Method CmdSetMute, addr 0x180362200, size 0xc0, virtual false, abstract: false, final false
inline void CmdSetMute(bool  isMute) ;

/// @brief Method CmdSetOutdoorness, addr 0x1803622c0, size 0xc0, virtual false, abstract: false, final false
inline void CmdSetOutdoorness(float_t  outdoornessValue) ;

/// @brief Method CmdSetPending, addr 0x180362380, size 0xc0, virtual false, abstract: false, final false
inline void CmdSetPending(bool  newValue) ;

/// @brief Method CmdSetSitting, addr 0x180362440, size 0xc0, virtual false, abstract: false, final false
inline void CmdSetSitting(bool  isSitting) ;

/// @brief Method CmdSetSleeping, addr 0x180362500, size 0xc0, virtual false, abstract: false, final false
inline void CmdSetSleeping(bool  value) ;

/// @brief Method CmdSetWindUpStartTime, addr 0x1803625c0, size 0xc0, virtual false, abstract: false, final false
inline void CmdSetWindUpStartTime(double_t  windUpStartTime) ;

/// @brief Method CmdTextChatStroke, addr 0x180362680, size 0xc0, virtual false, abstract: false, final false
inline void CmdTextChatStroke(bool  isDelete) ;

/// @brief Method CmdTextInputErase, addr 0x180362740, size 0xb0, virtual false, abstract: false, final false
inline void CmdTextInputErase() ;

/// @brief Method CmdTextInputStroke, addr 0x1803627f0, size 0xb0, virtual false, abstract: false, final false
inline void CmdTextInputStroke() ;

/// @brief Method CmdUseHeld, addr 0x180362a60, size 0xe0, virtual false, abstract: false, final false
inline void CmdUseHeld(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method CmdUseHeldAsKey, addr 0x1803628a0, size 0xe0, virtual false, abstract: false, final false
inline void CmdUseHeldAsKey(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method CmdUseHeldUp, addr 0x180362980, size 0xe0, virtual false, abstract: false, final false
inline void CmdUseHeldUp(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method CmdUsePeckSwitch, addr 0x180362b40, size 0x120, virtual false, abstract: false, final false
inline void CmdUsePeckSwitch(::GlobalNamespace::SeaShell_ShellReference  switchReference, ::GlobalNamespace::PeckContext  peckContext, int32_t  actionNumber) ;

/// @brief Method DeserializeSyncVars, addr 0x180362c60, size 0x16a0, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method InitCounterBlockWatch, addr 0x180364300, size 0x70, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid InitCounterBlockWatch() ;

/// @brief Method InvokeUserCode_CmdAddToSyncedBlockList__UInt64, addr 0x180364370, size 0xd0, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdAddToSyncedBlockList__UInt64(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdChangeLook__Int32__LookPart, addr 0x180364440, size 0x210, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdChangeLook__Int32__LookPart(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdDropHeldPlayer, addr 0x180364650, size 0x140, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdDropHeldPlayer(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdDudJump, addr 0x180364790, size 0x130, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdDudJump(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdDudUseHeld, addr 0x1803648c0, size 0x130, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdDudUseHeld(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdEnterPose__ShellReference__Int32, addr 0x1803649f0, size 0x140, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdEnterPose__ShellReference__Int32(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdExitPose__Int32, addr 0x180364b30, size 0xf0, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdExitPose__Int32(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdFellToFar, addr 0x180364c20, size 0x190, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdFellToFar(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdOnJump, addr 0x180364db0, size 0x130, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdOnJump(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdPickUpPlayer__PlayerCharacter, addr 0x180364ee0, size 0x100, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdPickUpPlayer__PlayerCharacter(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdPickUp__PlayerHeldInformation, addr 0x180364fe0, size 0x140, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdPickUp__PlayerHeldInformation(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdPlaceHeldPlayerIntoPose__ShellReference, addr 0x180365120, size 0x1a0, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdPlaceHeldPlayerIntoPose__ShellReference(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdPlaceInHome__Prop__ShellReference, addr 0x1803652c0, size 0x130, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdPlaceInHome__Prop__ShellReference(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdRecordProvenWalking, addr 0x1803653f0, size 0x100, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdRecordProvenWalking(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdReleaseHeldSwitch__ShellReference__PeckContext__Int32, addr 0x1803654f0, size 0x190, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdReleaseHeldSwitch__ShellReference__PeckContext__Int32(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdRemoveFromSyncedBlockList__UInt64, addr 0x180365680, size 0xd0, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdRemoveFromSyncedBlockList__UInt64(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSendTextChatMessage__String, addr 0x180365750, size 0x160, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSendTextChatMessage__String(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSet2DVoice__Boolean, addr 0x1803658b0, size 0x150, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSet2DVoice__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSetAudioGhost__Boolean, addr 0x180365a00, size 0x150, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSetAudioGhost__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSetControlsVelocity__Vector3, addr 0x180365b50, size 0x1a0, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSetControlsVelocity__Vector3(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSetCrouchness__Single, addr 0x180365cf0, size 0x150, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSetCrouchness__Single(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSetEchoAmount__Single, addr 0x180365e40, size 0x150, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSetEchoAmount__Single(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSetGestureLeftPoint__Boolean, addr 0x180365f90, size 0x160, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSetGestureLeftPoint__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSetGestureLeftWave__Boolean, addr 0x1803660f0, size 0x160, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSetGestureLeftWave__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSetGestureRightPoint__Boolean, addr 0x180366250, size 0x160, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSetGestureRightPoint__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSetGestureRightWave__Boolean, addr 0x1803663b0, size 0x160, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSetGestureRightWave__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSetGhost__Boolean, addr 0x180366510, size 0x150, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSetGhost__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSetHeadState__Vector2, addr 0x180366660, size 0x160, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSetHeadState__Vector2(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSetIsTextChatting__Boolean, addr 0x1803667c0, size 0x150, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSetIsTextChatting__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSetMenuEyes__Boolean, addr 0x180366910, size 0x150, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSetMenuEyes__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSetMute__Boolean, addr 0x180366a60, size 0x150, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSetMute__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSetOutdoorness__Single, addr 0x180366bb0, size 0x150, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSetOutdoorness__Single(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSetPending__Boolean, addr 0x180366d00, size 0x150, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSetPending__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSetSitting__Boolean, addr 0x180366e50, size 0x160, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSetSitting__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSetSleeping__Boolean, addr 0x180366fb0, size 0x160, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSetSleeping__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSetWindUpStartTime__Double, addr 0x180367110, size 0x1b0, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSetWindUpStartTime__Double(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdTextChatStroke__Boolean, addr 0x1803672c0, size 0x160, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdTextChatStroke__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdTextInputErase, addr 0x180367420, size 0x130, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdTextInputErase(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdTextInputStroke, addr 0x180367550, size 0x130, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdTextInputStroke(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdUseHeldAsKey__PeckContext, addr 0x180367680, size 0x180, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdUseHeldAsKey__PeckContext(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdUseHeldUp__PeckContext, addr 0x180367800, size 0x1c0, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdUseHeldUp__PeckContext(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdUseHeld__PeckContext, addr 0x1803679c0, size 0x200, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdUseHeld__PeckContext(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdUsePeckSwitch__ShellReference__PeckContext__Int32, addr 0x180367bc0, size 0x190, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdUsePeckSwitch__ShellReference__PeckContext__Int32(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RPCDudJump, addr 0x180367d50, size 0x90, virtual false, abstract: false, final false
static inline void InvokeUserCode_RPCDudJump(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RPCKickUser__NetworkConnectionToClient, addr 0x180367de0, size 0x110, virtual false, abstract: false, final false
static inline void InvokeUserCode_RPCKickUser__NetworkConnectionToClient(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RPCPuff__Int32__LookPart, addr 0x180367ef0, size 0xd0, virtual false, abstract: false, final false
static inline void InvokeUserCode_RPCPuff__Int32__LookPart(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RPCSetInitialHasLearnedWalking__Boolean, addr 0x180367fc0, size 0xe0, virtual false, abstract: false, final false
static inline void InvokeUserCode_RPCSetInitialHasLearnedWalking__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RPCTextChatStroke__Boolean, addr 0x1803680a0, size 0xc0, virtual false, abstract: false, final false
static inline void InvokeUserCode_RPCTextChatStroke__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RPCTextInputErase, addr 0x180368160, size 0xa0, virtual false, abstract: false, final false
static inline void InvokeUserCode_RPCTextInputErase(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RPCTextInputStroke, addr 0x180368200, size 0xa0, virtual false, abstract: false, final false
static inline void InvokeUserCode_RPCTextInputStroke(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RpcDudUseHeld, addr 0x1803682a0, size 0xd0, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcDudUseHeld(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RpcFellTooFar, addr 0x180368370, size 0x90, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcFellTooFar(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RpcOnJump, addr 0x180368400, size 0x90, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcOnJump(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RpcPoseDrop__ShellReference, addr 0x180368490, size 0x110, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcPoseDrop__ShellReference(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RpcReactToBeingPickedUp__PlayerCharacter, addr 0x1803685a0, size 0xe0, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcReactToBeingPickedUp__PlayerCharacter(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RpcReactToCarryEscape, addr 0x180368680, size 0xa0, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcReactToCarryEscape(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RpcReactToCarrySnatch, addr 0x180368720, size 0xe0, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcReactToCarrySnatch(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RpcSetDream__DreamController__Boolean, addr 0x180368800, size 0xe0, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcSetDream__DreamController__Boolean(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RpcShowSwitchTap__ShellReference, addr 0x1803688e0, size 0x130, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcShowSwitchTap__ShellReference(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RpcTextChatMessage__String, addr 0x180368a10, size 0x1e0, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcTextChatMessage__String(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_SetInitialPlayerData__Platforms__String__UInt64__String, addr 0x180368bf0, size 0x150, virtual false, abstract: false, final false
static inline void InvokeUserCode_SetInitialPlayerData__Platforms__String__UInt64__String(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::GlobalNamespace::PlayerNetworking* New_ctor() ;

/// @brief Method OnBlockedUserListChanged, addr 0x180368d40, size 0xe0, virtual false, abstract: false, final false
inline void OnBlockedUserListChanged(::Mirror::SyncSet_1_Operation<uint64_t>  op, uint64_t  item) ;

/// @brief Method OnChangeIsPending, addr 0x180368e20, size 0x70, virtual false, abstract: false, final false
inline void OnChangeIsPending(bool  oldValue, bool  newValue) ;

/// @brief Method OnDestroy, addr 0x180368e90, size 0x90, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnLocalBlockListChanged, addr 0x180368f20, size 0x1d0, virtual false, abstract: false, final false
inline void OnLocalBlockListChanged() ;

/// @brief Method OnModerationNameChanged, addr 0x1803690f0, size 0x40, virtual false, abstract: false, final false
inline void OnModerationNameChanged(::StringW  oldValue, ::StringW  newValue) ;

/// @brief Method OnPlatformUserIdSet, addr 0x180369130, size 0x120, virtual false, abstract: false, final false
inline void OnPlatformUserIdSet(uint64_t  oldValue, uint64_t  newValue) ;

/// @brief Method OnSet2DVoice, addr 0x180369250, size 0x50, virtual false, abstract: false, final false
inline void OnSet2DVoice(bool  oldValue, bool  newValue) ;

/// @brief Method OnSetAudioGhost, addr 0x1803692a0, size 0x60, virtual false, abstract: false, final false
inline void OnSetAudioGhost(bool  oldValue, bool  newValue) ;

/// @brief Method OnSetGhost, addr 0x180369300, size 0x200, virtual false, abstract: false, final false
inline void OnSetGhost(bool  oldValue, bool  newValue) ;

/// @brief Method OnSetHeld, addr 0x180369580, size 0x350, virtual false, abstract: false, final false
inline void OnSetHeld(::GlobalNamespace::PlayerHeldInformation  oldValue, ::GlobalNamespace::PlayerHeldInformation  newValue) ;

/// @brief Method OnSetHeldSwitch, addr 0x180369500, size 0x80, virtual false, abstract: false, final false
inline void OnSetHeldSwitch(::GlobalNamespace::ShellReferenceWithActionNumber  oldValue, ::GlobalNamespace::ShellReferenceWithActionNumber  newValue) ;

/// @brief Method OnSetIdentifier, addr 0x1803698d0, size 0x30, virtual false, abstract: false, final false
inline void OnSetIdentifier(::StringW  oldValue, ::StringW  newValue) ;

/// @brief Method OnSetLookHead, addr 0x180369900, size 0x30, virtual false, abstract: false, final false
inline void OnSetLookHead(int32_t  oldValue, int32_t  newValue) ;

/// @brief Method OnSetLookLegs, addr 0x180369900, size 0x30, virtual false, abstract: false, final false
inline void OnSetLookLegs(int32_t  oldValue, int32_t  newValue) ;

/// @brief Method OnSetLookTorso, addr 0x180369900, size 0x30, virtual false, abstract: false, final false
inline void OnSetLookTorso(int32_t  oldValue, int32_t  newValue) ;

/// @brief Method OnSetMenuEyes, addr 0x180369930, size 0x230, virtual false, abstract: false, final false
inline void OnSetMenuEyes(bool  oldValue, bool  newValue) ;

/// @brief Method OnSetMute, addr 0x180369b60, size 0x270, virtual false, abstract: false, final false
inline void OnSetMute(bool  oldValue, bool  newValue) ;

/// @brief Method OnSetPose, addr 0x180369dd0, size 0xe0, virtual false, abstract: false, final false
inline void OnSetPose(::GlobalNamespace::ShellReferenceWithActionNumber  oldValue, ::GlobalNamespace::ShellReferenceWithActionNumber  newValue) ;

/// @brief Method OnSetTextChatting, addr 0x180369eb0, size 0xc0, virtual false, abstract: false, final false
inline void OnSetTextChatting(bool  oldValue, bool  newValue) ;

/// @brief Method OnSetUsername, addr 0x180369f70, size 0xa0, virtual false, abstract: false, final false
inline void OnSetUsername(::StringW  oldValue, ::StringW  newValue) ;

/// @brief Method OnStartClient, addr 0x18036a010, size 0x2e0, virtual true, abstract: false, final false
inline void OnStartClient() ;

/// @brief Method OnStopClient, addr 0x18036a2f0, size 0xb0, virtual true, abstract: false, final false
inline void OnStopClient() ;

/// @brief Method ProcessPickUpPropKnockons, addr 0x18036a3a0, size 0x1a0, virtual false, abstract: false, final false
inline void ProcessPickUpPropKnockons(::GlobalNamespace::Prop*  prop) ;

/// @brief Method RPCDudJump, addr 0x18036a540, size 0xb0, virtual false, abstract: false, final false
inline void RPCDudJump() ;

/// @brief Method RPCKickUser, addr 0x18036a5f0, size 0xc0, virtual false, abstract: false, final false
inline void RPCKickUser(::Mirror::NetworkConnectionToClient*  target) ;

/// @brief Method RPCPuff, addr 0x18036a6b0, size 0xe0, virtual false, abstract: false, final false
inline void RPCPuff(int32_t  lookId, ::GlobalNamespace::PlayerLooks_LookPart  lookPart) ;

/// @brief Method RPCSetInitialHasLearnedWalking, addr 0x18036a790, size 0xc0, virtual false, abstract: false, final false
inline void RPCSetInitialHasLearnedWalking(bool  hasLearnedWalking) ;

/// @brief Method RPCTextChatStroke, addr 0x18036a850, size 0xc0, virtual false, abstract: false, final false
inline void RPCTextChatStroke(bool  isDelete) ;

/// @brief Method RPCTextInputErase, addr 0x18036a910, size 0xb0, virtual false, abstract: false, final false
inline void RPCTextInputErase() ;

/// @brief Method RPCTextInputStroke, addr 0x18036a9c0, size 0xb0, virtual false, abstract: false, final false
inline void RPCTextInputStroke() ;

/// @brief Method RpcDudUseHeld, addr 0x18036aa70, size 0xb0, virtual false, abstract: false, final false
inline void RpcDudUseHeld() ;

/// @brief Method RpcFellTooFar, addr 0x18036ab20, size 0xb0, virtual false, abstract: false, final false
inline void RpcFellTooFar() ;

/// @brief Method RpcOnJump, addr 0x18036abd0, size 0xb0, virtual false, abstract: false, final false
inline void RpcOnJump() ;

/// @brief Method RpcPoseDrop, addr 0x18036ac80, size 0xe0, virtual false, abstract: false, final false
inline void RpcPoseDrop(::GlobalNamespace::SeaShell_ShellReference  playerPoseReference) ;

/// @brief Method RpcReactToBeingPickedUp, addr 0x18036ad60, size 0xc0, virtual false, abstract: false, final false
inline void RpcReactToBeingPickedUp(::GlobalNamespace::PlayerCharacter*  playerWhoPickedUp) ;

/// @brief Method RpcReactToCarryEscape, addr 0x18036ae20, size 0xb0, virtual false, abstract: false, final false
inline void RpcReactToCarryEscape() ;

/// @brief Method RpcReactToCarrySnatch, addr 0x18036aed0, size 0xb0, virtual false, abstract: false, final false
inline void RpcReactToCarrySnatch() ;

/// @brief Method RpcSetDream, addr 0x18036af80, size 0xe0, virtual false, abstract: false, final false
inline void RpcSetDream(::HouseHouse::Dream::DreamController*  dreamController, bool  active) ;

/// @brief Method RpcShowSwitchTap, addr 0x18036b060, size 0xe0, virtual false, abstract: false, final false
inline void RpcShowSwitchTap(::GlobalNamespace::SeaShell_ShellReference  shellReference) ;

/// @brief Method RpcTextChatMessage, addr 0x18036b140, size 0xc0, virtual false, abstract: false, final false
inline void RpcTextChatMessage(::StringW  message) ;

/// @brief Method SanitizeModerationName, addr 0x18036b200, size 0x90, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid SanitizeModerationName(::StringW  newModerationName) ;

/// @brief Method SerializeSyncVars, addr 0x18036b290, size 0x6a0, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method ServerDropPropAutomatic, addr 0x18036b930, size 0x150, virtual false, abstract: false, final false
inline void ServerDropPropAutomatic(bool  incrementPlayerNumber) ;

/// @brief Method ServerDropPropFromSnatch, addr 0x18036ba80, size 0x140, virtual false, abstract: false, final false
inline void ServerDropPropFromSnatch() ;

/// @brief Method ServerEnterPoseAuto, addr 0x18036bbc0, size 0x180, virtual false, abstract: false, final false
inline void ServerEnterPoseAuto(::GlobalNamespace::SeaShell_ShellReference  poseShellReference) ;

/// @brief Method ServerExitPoseAuto, addr 0x18036bd40, size 0x130, virtual false, abstract: false, final false
inline void ServerExitPoseAuto() ;

/// @brief Method ServerForceLetGoSwitch, addr 0x18036be70, size 0x100, virtual false, abstract: false, final false
inline void ServerForceLetGoSwitch() ;

/// @brief Method ServerPickUpPropAutomatic, addr 0x18036bf70, size 0x140, virtual false, abstract: false, final false
inline void ServerPickUpPropAutomatic(::GlobalNamespace::Prop*  prop) ;

/// @brief Method ServerSetDream, addr 0x18036c0b0, size 0x180, virtual false, abstract: false, final false
inline void ServerSetDream(::HouseHouse::Dream::DreamController*  dreamController, bool  active) ;

/// @brief Method ServerSetLook, addr 0x18036c230, size 0x1e0, virtual false, abstract: false, final false
inline void ServerSetLook(int32_t  lookId, ::GlobalNamespace::PlayerLooks_LookPart  lookPart, bool  saveChange) ;

/// @brief Method SetInitialPlayerData, addr 0x18036c410, size 0x110, virtual false, abstract: false, final false
inline void SetInitialPlayerData(::GlobalNamespace::Platforms  newPlatform, ::StringW  newModerationName, uint64_t  platformId, ::StringW  eosProductUserId) ;

/// @brief Method SeverPoseDrop, addr 0x18036c520, size 0x120, virtual false, abstract: false, final false
inline void SeverPoseDrop(::GlobalNamespace::SeaShell_ShellReference  playerPoseReference) ;

/// @brief Method Start, addr 0x18036c640, size 0x350, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UserCode_CmdAddToSyncedBlockList__UInt64, addr 0x18036c990, size 0x30, virtual false, abstract: false, final false
inline void UserCode_CmdAddToSyncedBlockList__UInt64(uint64_t  blockedUser) ;

/// @brief Method UserCode_CmdChangeLook__Int32__LookPart, addr 0x18036c9c0, size 0x130, virtual false, abstract: false, final false
inline void UserCode_CmdChangeLook__Int32__LookPart(int32_t  lookId, ::GlobalNamespace::PlayerLooks_LookPart  lookPart) ;

/// @brief Method UserCode_CmdDropHeldPlayer, addr 0x18036caf0, size 0xb0, virtual false, abstract: false, final false
inline void UserCode_CmdDropHeldPlayer() ;

/// @brief Method UserCode_CmdDudJump, addr 0x18036a540, size 0xb0, virtual false, abstract: false, final false
inline void UserCode_CmdDudJump() ;

/// @brief Method UserCode_CmdDudUseHeld, addr 0x18036aa70, size 0xb0, virtual false, abstract: false, final false
inline void UserCode_CmdDudUseHeld() ;

/// @brief Method UserCode_CmdEnterPose__ShellReference__Int32, addr 0x18036cba0, size 0x210, virtual false, abstract: false, final false
inline void UserCode_CmdEnterPose__ShellReference__Int32(::GlobalNamespace::SeaShell_ShellReference  poseShellReference, int32_t  poseActionNumber) ;

/// @brief Method UserCode_CmdExitPose__Int32, addr 0x18036cdb0, size 0x200, virtual false, abstract: false, final false
inline void UserCode_CmdExitPose__Int32(int32_t  poseActionNumber) ;

/// @brief Method UserCode_CmdFellToFar, addr 0x18036cfb0, size 0x100, virtual false, abstract: false, final false
inline void UserCode_CmdFellToFar() ;

/// @brief Method UserCode_CmdOnJump, addr 0x18036abd0, size 0xb0, virtual false, abstract: false, final false
inline void UserCode_CmdOnJump() ;

/// @brief Method UserCode_CmdPickUpPlayer__PlayerCharacter, addr 0x18036d0b0, size 0x2b0, virtual false, abstract: false, final false
inline void UserCode_CmdPickUpPlayer__PlayerCharacter(::GlobalNamespace::PlayerCharacter*  pickedUpCharacter) ;

/// @brief Method UserCode_CmdPickUp__PlayerHeldInformation, addr 0x18036d360, size 0x4b0, virtual false, abstract: false, final false
inline void UserCode_CmdPickUp__PlayerHeldInformation(::GlobalNamespace::PlayerHeldInformation  heldInformation) ;

/// @brief Method UserCode_CmdPlaceHeldPlayerIntoPose__ShellReference, addr 0x18036d810, size 0xf0, virtual false, abstract: false, final false
inline void UserCode_CmdPlaceHeldPlayerIntoPose__ShellReference(::GlobalNamespace::SeaShell_ShellReference  poseShellReference) ;

/// @brief Method UserCode_CmdPlaceInHome__Prop__ShellReference, addr 0x18036d900, size 0x240, virtual false, abstract: false, final false
inline void UserCode_CmdPlaceInHome__Prop__ShellReference(::GlobalNamespace::Prop*  prop, ::GlobalNamespace::SeaShell_ShellReference  propHomeReference) ;

/// @brief Method UserCode_CmdRecordProvenWalking, addr 0x18036db40, size 0x70, virtual false, abstract: false, final false
inline void UserCode_CmdRecordProvenWalking() ;

/// @brief Method UserCode_CmdReleaseHeldSwitch__ShellReference__PeckContext__Int32, addr 0x18036dbb0, size 0x210, virtual false, abstract: false, final false
inline void UserCode_CmdReleaseHeldSwitch__ShellReference__PeckContext__Int32(::GlobalNamespace::SeaShell_ShellReference  peckSwitchReference, ::GlobalNamespace::PeckContext  peckContext, int32_t  actionNumber) ;

/// @brief Method UserCode_CmdRemoveFromSyncedBlockList__UInt64, addr 0x18036ddc0, size 0x30, virtual false, abstract: false, final false
inline void UserCode_CmdRemoveFromSyncedBlockList__UInt64(uint64_t  blockedUser) ;

/// @brief Method UserCode_CmdSendTextChatMessage__String, addr 0x18036b140, size 0xc0, virtual false, abstract: false, final false
inline void UserCode_CmdSendTextChatMessage__String(::StringW  message) ;

/// @brief Method UserCode_CmdSet2DVoice__Boolean, addr 0x18036ddf0, size 0x80, virtual false, abstract: false, final false
inline void UserCode_CmdSet2DVoice__Boolean(bool  is2D) ;

/// @brief Method UserCode_CmdSetAudioGhost__Boolean, addr 0x18036de70, size 0x80, virtual false, abstract: false, final false
inline void UserCode_CmdSetAudioGhost__Boolean(bool  isAudioGhost) ;

/// @brief Method UserCode_CmdSetControlsVelocity__Vector3, addr 0x18036def0, size 0xb0, virtual false, abstract: false, final false
inline void UserCode_CmdSetControlsVelocity__Vector3(::UnityEngine::Vector3  controlsVelocity) ;

/// @brief Method UserCode_CmdSetCrouchness__Single, addr 0x18036dfa0, size 0x90, virtual false, abstract: false, final false
inline void UserCode_CmdSetCrouchness__Single(float_t  crouchness) ;

/// @brief Method UserCode_CmdSetEchoAmount__Single, addr 0x18036e030, size 0x90, virtual false, abstract: false, final false
inline void UserCode_CmdSetEchoAmount__Single(float_t  echoValue) ;

/// @brief Method UserCode_CmdSetGestureLeftPoint__Boolean, addr 0x18036e0c0, size 0x90, virtual false, abstract: false, final false
inline void UserCode_CmdSetGestureLeftPoint__Boolean(bool  active) ;

/// @brief Method UserCode_CmdSetGestureLeftWave__Boolean, addr 0x18036e150, size 0x90, virtual false, abstract: false, final false
inline void UserCode_CmdSetGestureLeftWave__Boolean(bool  active) ;

/// @brief Method UserCode_CmdSetGestureRightPoint__Boolean, addr 0x18036e1e0, size 0x90, virtual false, abstract: false, final false
inline void UserCode_CmdSetGestureRightPoint__Boolean(bool  active) ;

/// @brief Method UserCode_CmdSetGestureRightWave__Boolean, addr 0x18036e270, size 0x90, virtual false, abstract: false, final false
inline void UserCode_CmdSetGestureRightWave__Boolean(bool  active) ;

/// @brief Method UserCode_CmdSetGhost__Boolean, addr 0x18036e300, size 0x80, virtual false, abstract: false, final false
inline void UserCode_CmdSetGhost__Boolean(bool  isGhost) ;

/// @brief Method UserCode_CmdSetHeadState__Vector2, addr 0x18036e380, size 0x90, virtual false, abstract: false, final false
inline void UserCode_CmdSetHeadState__Vector2(::UnityEngine::Vector2  headState) ;

/// @brief Method UserCode_CmdSetIsTextChatting__Boolean, addr 0x18036e410, size 0x80, virtual false, abstract: false, final false
inline void UserCode_CmdSetIsTextChatting__Boolean(bool  value) ;

/// @brief Method UserCode_CmdSetMenuEyes__Boolean, addr 0x18036e490, size 0x80, virtual false, abstract: false, final false
inline void UserCode_CmdSetMenuEyes__Boolean(bool  hasMenuEyes) ;

/// @brief Method UserCode_CmdSetMute__Boolean, addr 0x18036e510, size 0x80, virtual false, abstract: false, final false
inline void UserCode_CmdSetMute__Boolean(bool  isMute) ;

/// @brief Method UserCode_CmdSetOutdoorness__Single, addr 0x18036e590, size 0x90, virtual false, abstract: false, final false
inline void UserCode_CmdSetOutdoorness__Single(float_t  outdoornessValue) ;

/// @brief Method UserCode_CmdSetPending__Boolean, addr 0x18036e620, size 0x80, virtual false, abstract: false, final false
inline void UserCode_CmdSetPending__Boolean(bool  newValue) ;

/// @brief Method UserCode_CmdSetSitting__Boolean, addr 0x18036e6a0, size 0x90, virtual false, abstract: false, final false
inline void UserCode_CmdSetSitting__Boolean(bool  isSitting) ;

/// @brief Method UserCode_CmdSetSleeping__Boolean, addr 0x18036e730, size 0x90, virtual false, abstract: false, final false
inline void UserCode_CmdSetSleeping__Boolean(bool  value) ;

/// @brief Method UserCode_CmdSetWindUpStartTime__Double, addr 0x18036e7c0, size 0xe0, virtual false, abstract: false, final false
inline void UserCode_CmdSetWindUpStartTime__Double(double_t  windUpStartTime) ;

/// @brief Method UserCode_CmdTextChatStroke__Boolean, addr 0x18036a850, size 0xc0, virtual false, abstract: false, final false
inline void UserCode_CmdTextChatStroke__Boolean(bool  isDelete) ;

/// @brief Method UserCode_CmdTextInputErase, addr 0x18036a910, size 0xb0, virtual false, abstract: false, final false
inline void UserCode_CmdTextInputErase() ;

/// @brief Method UserCode_CmdTextInputStroke, addr 0x18036a9c0, size 0xb0, virtual false, abstract: false, final false
inline void UserCode_CmdTextInputStroke() ;

/// @brief Method UserCode_CmdUseHeldAsKey__PeckContext, addr 0x18036e8a0, size 0x90, virtual false, abstract: false, final false
inline void UserCode_CmdUseHeldAsKey__PeckContext(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method UserCode_CmdUseHeldUp__PeckContext, addr 0x18036e930, size 0xe0, virtual false, abstract: false, final false
inline void UserCode_CmdUseHeldUp__PeckContext(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method UserCode_CmdUseHeld__PeckContext, addr 0x18036ea10, size 0x110, virtual false, abstract: false, final false
inline void UserCode_CmdUseHeld__PeckContext(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method UserCode_CmdUsePeckSwitch__ShellReference__PeckContext__Int32, addr 0x18036eb20, size 0x360, virtual false, abstract: false, final false
inline void UserCode_CmdUsePeckSwitch__ShellReference__PeckContext__Int32(::GlobalNamespace::SeaShell_ShellReference  switchReference, ::GlobalNamespace::PeckContext  peckContext, int32_t  actionNumber) ;

/// @brief Method UserCode_RPCDudJump, addr 0x18036ee80, size 0x30, virtual false, abstract: false, final false
inline void UserCode_RPCDudJump() ;

/// @brief Method UserCode_RPCKickUser__NetworkConnectionToClient, addr 0x18036eeb0, size 0x80, virtual false, abstract: false, final false
inline void UserCode_RPCKickUser__NetworkConnectionToClient(::Mirror::NetworkConnectionToClient*  target) ;

/// @brief Method UserCode_RPCPuff__Int32__LookPart, addr 0x18036ef30, size 0x30, virtual false, abstract: false, final false
inline void UserCode_RPCPuff__Int32__LookPart(int32_t  lookId, ::GlobalNamespace::PlayerLooks_LookPart  lookPart) ;

/// @brief Method UserCode_RPCSetInitialHasLearnedWalking__Boolean, addr 0x18036ef60, size 0x60, virtual false, abstract: false, final false
inline void UserCode_RPCSetInitialHasLearnedWalking__Boolean(bool  hasLearnedWalking) ;

/// @brief Method UserCode_RPCTextChatStroke__Boolean, addr 0x18036efc0, size 0x50, virtual false, abstract: false, final false
inline void UserCode_RPCTextChatStroke__Boolean(bool  isDelete) ;

/// @brief Method UserCode_RPCTextInputErase, addr 0x18036f010, size 0x50, virtual false, abstract: false, final false
inline void UserCode_RPCTextInputErase() ;

/// @brief Method UserCode_RPCTextInputStroke, addr 0x18036f060, size 0x50, virtual false, abstract: false, final false
inline void UserCode_RPCTextInputStroke() ;

/// @brief Method UserCode_RpcDudUseHeld, addr 0x18036f0b0, size 0x70, virtual false, abstract: false, final false
inline void UserCode_RpcDudUseHeld() ;

/// @brief Method UserCode_RpcFellTooFar, addr 0x18036f120, size 0x30, virtual false, abstract: false, final false
inline void UserCode_RpcFellTooFar() ;

/// @brief Method UserCode_RpcOnJump, addr 0x18036f150, size 0x30, virtual false, abstract: false, final false
inline void UserCode_RpcOnJump() ;

/// @brief Method UserCode_RpcPoseDrop__ShellReference, addr 0x18036f180, size 0x50, virtual false, abstract: false, final false
inline void UserCode_RpcPoseDrop__ShellReference(::GlobalNamespace::SeaShell_ShellReference  playerPoseReference) ;

/// @brief Method UserCode_RpcReactToBeingPickedUp__PlayerCharacter, addr 0x18036f1d0, size 0x290, virtual false, abstract: false, final false
inline void UserCode_RpcReactToBeingPickedUp__PlayerCharacter(::GlobalNamespace::PlayerCharacter*  playerWhoPickedUp) ;

/// @brief Method UserCode_RpcReactToCarryEscape, addr 0x18036f460, size 0x9c0, virtual false, abstract: false, final false
inline void UserCode_RpcReactToCarryEscape() ;

/// @brief Method UserCode_RpcReactToCarrySnatch, addr 0x18036fe20, size 0x80, virtual false, abstract: false, final false
inline void UserCode_RpcReactToCarrySnatch() ;

/// @brief Method UserCode_RpcSetDream__DreamController__Boolean, addr 0x18036fea0, size 0x40, virtual false, abstract: false, final false
inline void UserCode_RpcSetDream__DreamController__Boolean(::HouseHouse::Dream::DreamController*  dreamController, bool  active) ;

/// @brief Method UserCode_RpcShowSwitchTap__ShellReference, addr 0x18036fee0, size 0x70, virtual false, abstract: false, final false
inline void UserCode_RpcShowSwitchTap__ShellReference(::GlobalNamespace::SeaShell_ShellReference  shellReference) ;

/// @brief Method UserCode_RpcTextChatMessage__String, addr 0x18036ff50, size 0x160, virtual false, abstract: false, final false
inline void UserCode_RpcTextChatMessage__String(::StringW  message) ;

/// @brief Method UserCode_SetInitialPlayerData__Platforms__String__UInt64__String, addr 0x1803700b0, size 0x210, virtual false, abstract: false, final false
inline void UserCode_SetInitialPlayerData__Platforms__String__UInt64__String(::GlobalNamespace::Platforms  newPlatform, ::StringW  newModerationName, uint64_t  platformId, ::StringW  eosProductUserId) ;

constexpr ::System::Action_1<uint64_t>* const& __cordl_internal_get_PlatformUserIdChanged() const;

constexpr ::System::Action_1<uint64_t>*& __cordl_internal_get_PlatformUserIdChanged() ;

constexpr ::StringW const& __cordl_internal_get__moderationNameSanitized() const;

constexpr ::StringW& __cordl_internal_get__moderationNameSanitized() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_controlsVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_controlsVelocity() ;

constexpr float_t const& __cordl_internal_get_echoAmount() const;

constexpr float_t& __cordl_internal_get_echoAmount() ;

constexpr ::StringW const& __cordl_internal_get_epicUserId() const;

constexpr ::StringW& __cordl_internal_get_epicUserId() ;

constexpr bool const& __cordl_internal_get_hasMenuEyes() const;

constexpr bool& __cordl_internal_get_hasMenuEyes() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_headState() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_headState() ;

constexpr ::GlobalNamespace::ShellReferenceWithActionNumber const& __cordl_internal_get_heldSwitch() const;

constexpr ::GlobalNamespace::ShellReferenceWithActionNumber& __cordl_internal_get_heldSwitch() ;

constexpr ::StringW const& __cordl_internal_get_identifier() const;

constexpr ::StringW& __cordl_internal_get_identifier() ;

constexpr ::Mirror::SyncHashSet_1<uint64_t>* const& __cordl_internal_get_inGameBlockedUsers() const;

constexpr ::Mirror::SyncHashSet_1<uint64_t>*& __cordl_internal_get_inGameBlockedUsers() ;

constexpr bool const& __cordl_internal_get_is2DVoice() const;

constexpr bool& __cordl_internal_get_is2DVoice() ;

constexpr bool const& __cordl_internal_get_isAudioGhost() const;

constexpr bool& __cordl_internal_get_isAudioGhost() ;

constexpr bool const& __cordl_internal_get_isGhost() const;

constexpr bool& __cordl_internal_get_isGhost() ;

constexpr bool const& __cordl_internal_get_isHost() const;

constexpr bool& __cordl_internal_get_isHost() ;

constexpr bool const& __cordl_internal_get_isMuted() const;

constexpr bool& __cordl_internal_get_isMuted() ;

constexpr bool const& __cordl_internal_get_isPending() const;

constexpr bool& __cordl_internal_get_isPending() ;

constexpr bool const& __cordl_internal_get_isSitting() const;

constexpr bool& __cordl_internal_get_isSitting() ;

constexpr bool const& __cordl_internal_get_isSleeping() const;

constexpr bool& __cordl_internal_get_isSleeping() ;

constexpr bool const& __cordl_internal_get_isTextChatting() const;

constexpr bool& __cordl_internal_get_isTextChatting() ;

constexpr bool const& __cordl_internal_get_leftArmPointing() const;

constexpr bool& __cordl_internal_get_leftArmPointing() ;

constexpr bool const& __cordl_internal_get_leftArmWaving() const;

constexpr bool& __cordl_internal_get_leftArmWaving() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr int32_t const& __cordl_internal_get_lookIdHead() const;

constexpr int32_t& __cordl_internal_get_lookIdHead() ;

constexpr int32_t const& __cordl_internal_get_lookIdLegs() const;

constexpr int32_t& __cordl_internal_get_lookIdLegs() ;

constexpr int32_t const& __cordl_internal_get_lookIdTorso() const;

constexpr int32_t& __cordl_internal_get_lookIdTorso() ;

constexpr ::StringW const& __cordl_internal_get_moderationName() const;

constexpr ::StringW& __cordl_internal_get_moderationName() ;

constexpr float_t const& __cordl_internal_get_outdoorness() const;

constexpr float_t& __cordl_internal_get_outdoorness() ;

constexpr ::GlobalNamespace::Platforms const& __cordl_internal_get_platform() const;

constexpr ::GlobalNamespace::Platforms& __cordl_internal_get_platform() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr ::GlobalNamespace::PlayerHeldInformation const& __cordl_internal_get_playerHeldInformation() const;

constexpr ::GlobalNamespace::PlayerHeldInformation& __cordl_internal_get_playerHeldInformation() ;

constexpr ::GlobalNamespace::ShellReferenceWithActionNumber const& __cordl_internal_get_poseReference() const;

constexpr ::GlobalNamespace::ShellReferenceWithActionNumber& __cordl_internal_get_poseReference() ;

constexpr bool const& __cordl_internal_get_rightArmPointing() const;

constexpr bool& __cordl_internal_get_rightArmPointing() ;

constexpr bool const& __cordl_internal_get_rightArmWaving() const;

constexpr bool& __cordl_internal_get_rightArmWaving() ;

constexpr float_t const& __cordl_internal_get_trueCrouchness() const;

constexpr float_t& __cordl_internal_get_trueCrouchness() ;

constexpr bool const& __cordl_internal_get_useExperimentalFixes() const;

constexpr bool& __cordl_internal_get_useExperimentalFixes() ;

constexpr uint64_t const& __cordl_internal_get_userPlatformId() const;

constexpr uint64_t& __cordl_internal_get_userPlatformId() ;

constexpr ::StringW const& __cordl_internal_get_username() const;

constexpr ::StringW& __cordl_internal_get_username() ;

constexpr double_t const& __cordl_internal_get_windUpStartTime() const;

constexpr double_t& __cordl_internal_get_windUpStartTime() ;

constexpr void __cordl_internal_set_PlatformUserIdChanged(::System::Action_1<uint64_t>*  value) ;

constexpr void __cordl_internal_set__moderationNameSanitized(::StringW  value) ;

constexpr void __cordl_internal_set_controlsVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_echoAmount(float_t  value) ;

constexpr void __cordl_internal_set_epicUserId(::StringW  value) ;

constexpr void __cordl_internal_set_hasMenuEyes(bool  value) ;

constexpr void __cordl_internal_set_headState(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_heldSwitch(::GlobalNamespace::ShellReferenceWithActionNumber  value) ;

constexpr void __cordl_internal_set_identifier(::StringW  value) ;

constexpr void __cordl_internal_set_inGameBlockedUsers(::Mirror::SyncHashSet_1<uint64_t>*  value) ;

constexpr void __cordl_internal_set_is2DVoice(bool  value) ;

constexpr void __cordl_internal_set_isAudioGhost(bool  value) ;

constexpr void __cordl_internal_set_isGhost(bool  value) ;

constexpr void __cordl_internal_set_isHost(bool  value) ;

constexpr void __cordl_internal_set_isMuted(bool  value) ;

constexpr void __cordl_internal_set_isPending(bool  value) ;

constexpr void __cordl_internal_set_isSitting(bool  value) ;

constexpr void __cordl_internal_set_isSleeping(bool  value) ;

constexpr void __cordl_internal_set_isTextChatting(bool  value) ;

constexpr void __cordl_internal_set_leftArmPointing(bool  value) ;

constexpr void __cordl_internal_set_leftArmWaving(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_lookIdHead(int32_t  value) ;

constexpr void __cordl_internal_set_lookIdLegs(int32_t  value) ;

constexpr void __cordl_internal_set_lookIdTorso(int32_t  value) ;

constexpr void __cordl_internal_set_moderationName(::StringW  value) ;

constexpr void __cordl_internal_set_outdoorness(float_t  value) ;

constexpr void __cordl_internal_set_platform(::GlobalNamespace::Platforms  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_playerHeldInformation(::GlobalNamespace::PlayerHeldInformation  value) ;

constexpr void __cordl_internal_set_poseReference(::GlobalNamespace::ShellReferenceWithActionNumber  value) ;

constexpr void __cordl_internal_set_rightArmPointing(bool  value) ;

constexpr void __cordl_internal_set_rightArmWaving(bool  value) ;

constexpr void __cordl_internal_set_trueCrouchness(float_t  value) ;

constexpr void __cordl_internal_set_useExperimentalFixes(bool  value) ;

constexpr void __cordl_internal_set_userPlatformId(uint64_t  value) ;

constexpr void __cordl_internal_set_username(::StringW  value) ;

constexpr void __cordl_internal_set_windUpStartTime(double_t  value) ;

/// @brief Method .ctor, addr 0x180371530, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_PlatformUserIdChanged, addr 0x1803715a0, size 0x90, virtual false, abstract: false, final false
inline void add_PlatformUserIdChanged(::System::Action_1<uint64_t>*  value) ;

static inline int32_t getStaticF_playerCount() ;

/// @brief Method get_NetworkcontrolsVelocity, addr 0x180371630, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_NetworkcontrolsVelocity() ;

/// @brief Method get_NetworkechoAmount, addr 0x180371650, size 0x10, virtual false, abstract: false, final false
inline float_t get_NetworkechoAmount() ;

/// @brief Method get_NetworkepicUserId, addr 0x1803370e0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_NetworkepicUserId() ;

/// @brief Method get_NetworkhasMenuEyes, addr 0x180371660, size 0x10, virtual false, abstract: false, final false
inline bool get_NetworkhasMenuEyes() ;

/// @brief Method get_NetworkheadState, addr 0x180371670, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_NetworkheadState() ;

/// @brief Method get_NetworkheldSwitch, addr 0x180371680, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::ShellReferenceWithActionNumber get_NetworkheldSwitch() ;

/// @brief Method get_Networkidentifier, addr 0x180337100, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_Networkidentifier() ;

/// @brief Method get_Networkis2DVoice, addr 0x180371690, size 0x10, virtual false, abstract: false, final false
inline bool get_Networkis2DVoice() ;

/// @brief Method get_NetworkisAudioGhost, addr 0x1803716a0, size 0x10, virtual false, abstract: false, final false
inline bool get_NetworkisAudioGhost() ;

/// @brief Method get_NetworkisGhost, addr 0x1803716b0, size 0x10, virtual false, abstract: false, final false
inline bool get_NetworkisGhost() ;

/// @brief Method get_NetworkisHost, addr 0x1803716c0, size 0x10, virtual false, abstract: false, final false
inline bool get_NetworkisHost() ;

/// @brief Method get_NetworkisMuted, addr 0x1803716d0, size 0x10, virtual false, abstract: false, final false
inline bool get_NetworkisMuted() ;

/// @brief Method get_NetworkisPending, addr 0x1803716e0, size 0x10, virtual false, abstract: false, final false
inline bool get_NetworkisPending() ;

/// @brief Method get_NetworkisSitting, addr 0x1803716f0, size 0x10, virtual false, abstract: false, final false
inline bool get_NetworkisSitting() ;

/// @brief Method get_NetworkisSleeping, addr 0x180371700, size 0x10, virtual false, abstract: false, final false
inline bool get_NetworkisSleeping() ;

/// @brief Method get_NetworkisTextChatting, addr 0x180371710, size 0x10, virtual false, abstract: false, final false
inline bool get_NetworkisTextChatting() ;

/// @brief Method get_NetworkleftArmPointing, addr 0x180371720, size 0x10, virtual false, abstract: false, final false
inline bool get_NetworkleftArmPointing() ;

/// @brief Method get_NetworkleftArmWaving, addr 0x180371730, size 0x10, virtual false, abstract: false, final false
inline bool get_NetworkleftArmWaving() ;

/// @brief Method get_NetworklookIdHead, addr 0x180371740, size 0x10, virtual false, abstract: false, final false
inline int32_t get_NetworklookIdHead() ;

/// @brief Method get_NetworklookIdLegs, addr 0x180371750, size 0x10, virtual false, abstract: false, final false
inline int32_t get_NetworklookIdLegs() ;

/// @brief Method get_NetworklookIdTorso, addr 0x180371760, size 0x10, virtual false, abstract: false, final false
inline int32_t get_NetworklookIdTorso() ;

/// @brief Method get_NetworkmoderationName, addr 0x1803370a0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_NetworkmoderationName() ;

/// @brief Method get_Networkoutdoorness, addr 0x180371770, size 0x10, virtual false, abstract: false, final false
inline float_t get_Networkoutdoorness() ;

/// @brief Method get_Networkplatform, addr 0x180371780, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::Platforms get_Networkplatform() ;

/// @brief Method get_NetworkplayerHeldInformation, addr 0x180371790, size 0x40, virtual false, abstract: false, final false
inline ::GlobalNamespace::PlayerHeldInformation get_NetworkplayerHeldInformation() ;

/// @brief Method get_NetworkposeReference, addr 0x1803717d0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::ShellReferenceWithActionNumber get_NetworkposeReference() ;

/// @brief Method get_NetworkrightArmPointing, addr 0x1803717e0, size 0x10, virtual false, abstract: false, final false
inline bool get_NetworkrightArmPointing() ;

/// @brief Method get_NetworkrightArmWaving, addr 0x1803717f0, size 0x10, virtual false, abstract: false, final false
inline bool get_NetworkrightArmWaving() ;

/// @brief Method get_NetworktrueCrouchness, addr 0x180371800, size 0x10, virtual false, abstract: false, final false
inline float_t get_NetworktrueCrouchness() ;

/// @brief Method get_NetworkuserPlatformId, addr 0x1803370c0, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_NetworkuserPlatformId() ;

/// @brief Method get_Networkusername, addr 0x180371810, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_Networkusername() ;

/// @brief Method get_NetworkwindUpStartTime, addr 0x180371820, size 0x10, virtual false, abstract: false, final false
inline double_t get_NetworkwindUpStartTime() ;

/// @brief Method get_moderationNameSanitized, addr 0x180371830, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_moderationNameSanitized() ;

/// @brief Method remove_PlatformUserIdChanged, addr 0x180371840, size 0x90, virtual false, abstract: false, final false
inline void remove_PlatformUserIdChanged(::System::Action_1<uint64_t>*  value) ;

static inline void setStaticF_playerCount(int32_t  value) ;

/// @brief Method set_NetworkcontrolsVelocity, addr 0x18036def0, size 0xb0, virtual false, abstract: false, final false
inline void set_NetworkcontrolsVelocity(::ByRefConst<::UnityEngine::Vector3>  value) ;

/// @brief Method set_NetworkechoAmount, addr 0x18036e030, size 0x90, virtual false, abstract: false, final false
inline void set_NetworkechoAmount(::ByRefConst<float_t>  value) ;

/// @brief Method set_NetworkepicUserId, addr 0x1803718d0, size 0x90, virtual false, abstract: false, final false
inline void set_NetworkepicUserId(::ByRefConst<::StringW>  value) ;

/// @brief Method set_NetworkhasMenuEyes, addr 0x18036e490, size 0x80, virtual false, abstract: false, final false
inline void set_NetworkhasMenuEyes(::ByRefConst<bool>  value) ;

/// @brief Method set_NetworkheadState, addr 0x18036e380, size 0x90, virtual false, abstract: false, final false
inline void set_NetworkheadState(::ByRefConst<::UnityEngine::Vector2>  value) ;

/// @brief Method set_NetworkheldSwitch, addr 0x180371960, size 0x80, virtual false, abstract: false, final false
inline void set_NetworkheldSwitch(::ByRefConst<::GlobalNamespace::ShellReferenceWithActionNumber>  value) ;

/// @brief Method set_Networkidentifier, addr 0x1803719e0, size 0x80, virtual false, abstract: false, final false
inline void set_Networkidentifier(::ByRefConst<::StringW>  value) ;

/// @brief Method set_Networkis2DVoice, addr 0x18036ddf0, size 0x80, virtual false, abstract: false, final false
inline void set_Networkis2DVoice(::ByRefConst<bool>  value) ;

/// @brief Method set_NetworkisAudioGhost, addr 0x18036de70, size 0x80, virtual false, abstract: false, final false
inline void set_NetworkisAudioGhost(::ByRefConst<bool>  value) ;

/// @brief Method set_NetworkisGhost, addr 0x18036e300, size 0x80, virtual false, abstract: false, final false
inline void set_NetworkisGhost(::ByRefConst<bool>  value) ;

/// @brief Method set_NetworkisHost, addr 0x180371a60, size 0x90, virtual false, abstract: false, final false
inline void set_NetworkisHost(::ByRefConst<bool>  value) ;

/// @brief Method set_NetworkisMuted, addr 0x18036e510, size 0x80, virtual false, abstract: false, final false
inline void set_NetworkisMuted(::ByRefConst<bool>  value) ;

/// @brief Method set_NetworkisPending, addr 0x18036e620, size 0x80, virtual false, abstract: false, final false
inline void set_NetworkisPending(::ByRefConst<bool>  value) ;

/// @brief Method set_NetworkisSitting, addr 0x18036e6a0, size 0x90, virtual false, abstract: false, final false
inline void set_NetworkisSitting(::ByRefConst<bool>  value) ;

/// @brief Method set_NetworkisSleeping, addr 0x18036e730, size 0x90, virtual false, abstract: false, final false
inline void set_NetworkisSleeping(::ByRefConst<bool>  value) ;

/// @brief Method set_NetworkisTextChatting, addr 0x18036e410, size 0x80, virtual false, abstract: false, final false
inline void set_NetworkisTextChatting(::ByRefConst<bool>  value) ;

/// @brief Method set_NetworkleftArmPointing, addr 0x18036e0c0, size 0x90, virtual false, abstract: false, final false
inline void set_NetworkleftArmPointing(::ByRefConst<bool>  value) ;

/// @brief Method set_NetworkleftArmWaving, addr 0x18036e150, size 0x90, virtual false, abstract: false, final false
inline void set_NetworkleftArmWaving(::ByRefConst<bool>  value) ;

/// @brief Method set_NetworklookIdHead, addr 0x180371af0, size 0x70, virtual false, abstract: false, final false
inline void set_NetworklookIdHead(::ByRefConst<int32_t>  value) ;

/// @brief Method set_NetworklookIdLegs, addr 0x180371b60, size 0x70, virtual false, abstract: false, final false
inline void set_NetworklookIdLegs(::ByRefConst<int32_t>  value) ;

/// @brief Method set_NetworklookIdTorso, addr 0x180371bd0, size 0x70, virtual false, abstract: false, final false
inline void set_NetworklookIdTorso(::ByRefConst<int32_t>  value) ;

/// @brief Method set_NetworkmoderationName, addr 0x180371c40, size 0x80, virtual false, abstract: false, final false
inline void set_NetworkmoderationName(::ByRefConst<::StringW>  value) ;

/// @brief Method set_Networkoutdoorness, addr 0x18036e590, size 0x90, virtual false, abstract: false, final false
inline void set_Networkoutdoorness(::ByRefConst<float_t>  value) ;

/// @brief Method set_Networkplatform, addr 0x180371cc0, size 0x90, virtual false, abstract: false, final false
inline void set_Networkplatform(::ByRefConst<::GlobalNamespace::Platforms>  value) ;

/// @brief Method set_NetworkplayerHeldInformation, addr 0x180371d50, size 0x200, virtual false, abstract: false, final false
inline void set_NetworkplayerHeldInformation(::ByRefConst<::GlobalNamespace::PlayerHeldInformation>  value) ;

/// @brief Method set_NetworkposeReference, addr 0x180371f50, size 0x80, virtual false, abstract: false, final false
inline void set_NetworkposeReference(::ByRefConst<::GlobalNamespace::ShellReferenceWithActionNumber>  value) ;

/// @brief Method set_NetworkrightArmPointing, addr 0x18036e1e0, size 0x90, virtual false, abstract: false, final false
inline void set_NetworkrightArmPointing(::ByRefConst<bool>  value) ;

/// @brief Method set_NetworkrightArmWaving, addr 0x18036e270, size 0x90, virtual false, abstract: false, final false
inline void set_NetworkrightArmWaving(::ByRefConst<bool>  value) ;

/// @brief Method set_NetworktrueCrouchness, addr 0x18036dfa0, size 0x90, virtual false, abstract: false, final false
inline void set_NetworktrueCrouchness(::ByRefConst<float_t>  value) ;

/// @brief Method set_NetworkuserPlatformId, addr 0x180371fd0, size 0x120, virtual false, abstract: false, final false
inline void set_NetworkuserPlatformId(::ByRefConst<uint64_t>  value) ;

/// @brief Method set_Networkusername, addr 0x1803720f0, size 0x80, virtual false, abstract: false, final false
inline void set_Networkusername(::ByRefConst<::StringW>  value) ;

/// @brief Method set_NetworkwindUpStartTime, addr 0x180372170, size 0x90, virtual false, abstract: false, final false
inline void set_NetworkwindUpStartTime(::ByRefConst<double_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerNetworking() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerNetworking", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerNetworking(PlayerNetworking && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerNetworking", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerNetworking(PlayerNetworking const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5510};

/// @brief Field PlatformUserIdChanged, offset: 0x68, size: 0x8, def value: None
 ::System::Action_1<uint64_t>*  ___PlatformUserIdChanged;

/// @brief Field playerCharacter, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field logVerbose, offset: 0x78, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field useExperimentalFixes, offset: 0x79, size: 0x1, def value: None
 bool  ___useExperimentalFixes;

/// @brief Field lookIdHead, offset: 0x7c, size: 0x4, def value: None
 int32_t  ___lookIdHead;

/// @brief Field lookIdTorso, offset: 0x80, size: 0x4, def value: None
 int32_t  ___lookIdTorso;

/// @brief Field lookIdLegs, offset: 0x84, size: 0x4, def value: None
 int32_t  ___lookIdLegs;

/// @brief Field playerHeldInformation, offset: 0x88, size: 0x38, def value: None
 ::GlobalNamespace::PlayerHeldInformation  ___playerHeldInformation;

/// @brief Field poseReference, offset: 0xc0, size: 0x10, def value: None
 ::GlobalNamespace::ShellReferenceWithActionNumber  ___poseReference;

/// @brief Field trueCrouchness, offset: 0xd0, size: 0x4, def value: None
 float_t  ___trueCrouchness;

/// @brief Field leftArmWaving, offset: 0xd4, size: 0x1, def value: None
 bool  ___leftArmWaving;

/// @brief Field rightArmWaving, offset: 0xd5, size: 0x1, def value: None
 bool  ___rightArmWaving;

/// @brief Field leftArmPointing, offset: 0xd6, size: 0x1, def value: None
 bool  ___leftArmPointing;

/// @brief Field rightArmPointing, offset: 0xd7, size: 0x1, def value: None
 bool  ___rightArmPointing;

/// @brief Field controlsVelocity, offset: 0xd8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___controlsVelocity;

/// @brief Field headState, offset: 0xe4, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___headState;

/// @brief Field isGhost, offset: 0xec, size: 0x1, def value: None
 bool  ___isGhost;

/// @brief Field isAudioGhost, offset: 0xed, size: 0x1, def value: None
 bool  ___isAudioGhost;

/// @brief Field is2DVoice, offset: 0xee, size: 0x1, def value: None
 bool  ___is2DVoice;

/// @brief Field username, offset: 0xf0, size: 0x8, def value: None
 ::StringW  ___username;

/// @brief Field identifier, offset: 0xf8, size: 0x8, def value: None
 ::StringW  ___identifier;

/// @brief Field moderationName, offset: 0x100, size: 0x8, def value: None
 ::StringW  ___moderationName;

/// @brief Field userPlatformId, offset: 0x108, size: 0x8, def value: None
 uint64_t  ___userPlatformId;

/// @brief Field inGameBlockedUsers, offset: 0x110, size: 0x8, def value: None
 ::Mirror::SyncHashSet_1<uint64_t>*  ___inGameBlockedUsers;

/// @brief Field epicUserId, offset: 0x118, size: 0x8, def value: None
 ::StringW  ___epicUserId;

/// @brief Field isHost, offset: 0x120, size: 0x1, def value: None
 bool  ___isHost;

/// @brief Field windUpStartTime, offset: 0x128, size: 0x8, def value: None
 double_t  ___windUpStartTime;

/// @brief Field heldSwitch, offset: 0x130, size: 0x10, def value: None
 ::GlobalNamespace::ShellReferenceWithActionNumber  ___heldSwitch;

/// @brief Field isSleeping, offset: 0x140, size: 0x1, def value: None
 bool  ___isSleeping;

/// @brief Field hasMenuEyes, offset: 0x141, size: 0x1, def value: None
 bool  ___hasMenuEyes;

/// @brief Field isMuted, offset: 0x142, size: 0x1, def value: None
 bool  ___isMuted;

/// @brief Field isSitting, offset: 0x143, size: 0x1, def value: None
 bool  ___isSitting;

/// @brief Field isTextChatting, offset: 0x144, size: 0x1, def value: None
 bool  ___isTextChatting;

/// @brief Field echoAmount, offset: 0x148, size: 0x4, def value: None
 float_t  ___echoAmount;

/// @brief Field outdoorness, offset: 0x14c, size: 0x4, def value: None
 float_t  ___outdoorness;

/// @brief Field isPending, offset: 0x150, size: 0x1, def value: None
 bool  ___isPending;

/// @brief Field platform, offset: 0x151, size: 0x1, def value: None
 ::GlobalNamespace::Platforms  ___platform;

/// @brief Field _moderationNameSanitized, offset: 0x158, size: 0x8, def value: None
 ::StringW  ____moderationNameSanitized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___PlatformUserIdChanged) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___playerCharacter) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___logVerbose) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___useExperimentalFixes) == 0x79, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___lookIdHead) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___lookIdTorso) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___lookIdLegs) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___playerHeldInformation) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___poseReference) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___trueCrouchness) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___leftArmWaving) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___rightArmWaving) == 0xd5, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___leftArmPointing) == 0xd6, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___rightArmPointing) == 0xd7, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___controlsVelocity) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___headState) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___isGhost) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___isAudioGhost) == 0xed, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___is2DVoice) == 0xee, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___username) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___identifier) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___moderationName) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___userPlatformId) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___inGameBlockedUsers) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___epicUserId) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___isHost) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___windUpStartTime) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___heldSwitch) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___isSleeping) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___hasMenuEyes) == 0x141, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___isMuted) == 0x142, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___isSitting) == 0x143, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___isTextChatting) == 0x144, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___echoAmount) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___outdoorness) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___isPending) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ___platform) == 0x151, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerNetworking, ____moderationNameSanitized) == 0x158, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerNetworking) == 0x160, "Size mismatch!");

} // namespace end def GlobalNamespace

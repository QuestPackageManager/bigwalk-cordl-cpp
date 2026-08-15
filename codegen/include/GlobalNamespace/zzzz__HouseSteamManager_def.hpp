#pragma once
// IWYU pragma private; include "GlobalNamespace/HouseSteamManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HouseSteamManager)
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace GlobalNamespace {
struct HouseSteamManager__Initialize_d__10;
}
namespace GlobalNamespace {
struct HouseSteamManager__RestoreRichPresence_d__12;
}
namespace GlobalNamespace {
struct JoinFriendCard_FriendGameInfo;
}
namespace Steamworks {
template<typename T>
class Callback_1;
}
namespace Steamworks {
struct GameOverlayActivated_t;
}
namespace Steamworks {
struct GameRichPresenceJoinRequested_t;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class HouseSteamManager;
}
namespace GlobalNamespace {
struct HouseSteamManager__Initialize_d__10;
}
namespace GlobalNamespace {
struct HouseSteamManager__RestoreRichPresence_d__12;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HouseSteamManager*);
MARK_VAL_T(::GlobalNamespace::HouseSteamManager__Initialize_d__10);
MARK_VAL_T(::GlobalNamespace::HouseSteamManager__RestoreRichPresence_d__12);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HouseSteamManager*, "", "HouseSteamManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HouseSteamManager__Initialize_d__10, "", "HouseSteamManager/<Initialize>d__10");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HouseSteamManager__RestoreRichPresence_d__12, "", "HouseSteamManager/<RestoreRichPresence>d__12");
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder
namespace GlobalNamespace {
// Is value type: true
// CS Name: HouseSteamManager/<Initialize>d__10
struct CORDL_TYPE HouseSteamManager__Initialize_d__10 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18042e5e0, size 0x170, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038a820, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr HouseSteamManager__Initialize_d__10() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::HouseSteamManager*", modifiers: "", def_value: None }]
constexpr HouseSteamManager__Initialize_d__10(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::HouseSteamManager*  __4__this) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5169};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::HouseSteamManager*  __4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HouseSteamManager__Initialize_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseSteamManager__Initialize_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseSteamManager__Initialize_d__10, __4__this) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HouseSteamManager__Initialize_d__10) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: HouseSteamManager/<RestoreRichPresence>d__12
struct CORDL_TYPE HouseSteamManager__RestoreRichPresence_d__12 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18042ede0, size 0x440, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr HouseSteamManager__RestoreRichPresence_d__12() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr HouseSteamManager__RestoreRichPresence_d__12(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5170};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field <>u__1, offset: 0x10, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HouseSteamManager__RestoreRichPresence_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseSteamManager__RestoreRichPresence_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseSteamManager__RestoreRichPresence_d__12, __u__1) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HouseSteamManager__RestoreRichPresence_d__12) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HouseSteamManager
class CORDL_TYPE HouseSteamManager : public ::System::Object {
public:
// Declarations
using _Initialize_d__10 = ::GlobalNamespace::HouseSteamManager__Initialize_d__10;

using _RestoreRichPresence_d__12 = ::GlobalNamespace::HouseSteamManager__RestoreRichPresence_d__12;

/// @brief Field gameId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_gameId, put=__cordl_internal_set_gameId)) int32_t  gameId;

/// @brief Field isInOverlay, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_isInOverlay, put=setStaticF_isInOverlay)) bool  isInOverlay;

/// @brief Field m_GameOverlayActivated, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GameOverlayActivated, put=__cordl_internal_set_m_GameOverlayActivated)) ::Steamworks::Callback_1<::Steamworks::GameOverlayActivated_t>*  m_GameOverlayActivated;

/// @brief Field m_GameRichPresenceJoinRequested, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GameRichPresenceJoinRequested, put=__cordl_internal_set_m_GameRichPresenceJoinRequested)) ::Steamworks::Callback_1<::Steamworks::GameRichPresenceJoinRequested_t>*  m_GameRichPresenceJoinRequested;

/// @brief Field richPresenceWorldAndCode, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_richPresenceWorldAndCode, put=setStaticF_richPresenceWorldAndCode)) ::System::Tuple_2<::StringW,::StringW>*  richPresenceWorldAndCode;

/// @brief Field richPressenceKeyConnect, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_richPressenceKeyConnect, put=setStaticF_richPressenceKeyConnect)) ::StringW  richPressenceKeyConnect;

/// @brief Field richPressenceKeyStatus, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_richPressenceKeyStatus, put=setStaticF_richPressenceKeyStatus)) ::StringW  richPressenceKeyStatus;

/// @brief Field richPressenceKeyWorldName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_richPressenceKeyWorldName, put=setStaticF_richPressenceKeyWorldName)) ::StringW  richPressenceKeyWorldName;

/// @brief Method ClearSteamStatus, addr 0x1804215e0, size 0x60, virtual false, abstract: false, final false
static inline void ClearSteamStatus() ;

/// @brief Method GetSteamMagicCode, addr 0x180422b60, size 0x70, virtual false, abstract: false, final false
static inline ::StringW GetSteamMagicCode() ;

/// @brief Method Initialize, addr 0x180422bd0, size 0x80, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::HouseSteamManager* New_ctor() ;

/// @brief Method OnGameOverlayActivated, addr 0x180422c50, size 0x50, virtual false, abstract: false, final false
inline void OnGameOverlayActivated(::Steamworks::GameOverlayActivated_t  callback) ;

/// @brief Method OnNetworkRestored, addr 0x180422ca0, size 0xb0, virtual false, abstract: false, final false
inline void OnNetworkRestored(double_t  obj) ;

/// @brief Method OnRichJoinRequested, addr 0x180422d50, size 0x60, virtual false, abstract: false, final false
inline void OnRichJoinRequested(::Steamworks::GameRichPresenceJoinRequested_t  pCallback) ;

/// @brief Method PollForFriendGames, addr 0x180422db0, size 0x240, virtual false, abstract: false, final false
static inline void PollForFriendGames(::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*  infos) ;

/// @brief Method RestoreRichPresence, addr 0x180422ff0, size 0x50, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid RestoreRichPresence() ;

/// @brief Method SetSteamStatus, addr 0x180423040, size 0xf0, virtual false, abstract: false, final false
static inline void SetSteamStatus(::StringW  worldName, ::StringW  joinCode) ;

/// @brief Method TryGetLocalModerationName, addr 0x180423130, size 0x50, virtual false, abstract: false, final false
static inline bool TryGetLocalModerationName(::by_ref<::StringW>  name) ;

/// @brief Method TryGetLocalUserIdentifier, addr 0x180423180, size 0x80, virtual false, abstract: false, final false
static inline bool TryGetLocalUserIdentifier(::by_ref<::StringW>  name) ;

constexpr int32_t const& __cordl_internal_get_gameId() const;

constexpr int32_t& __cordl_internal_get_gameId() ;

constexpr ::Steamworks::Callback_1<::Steamworks::GameOverlayActivated_t>* const& __cordl_internal_get_m_GameOverlayActivated() const;

constexpr ::Steamworks::Callback_1<::Steamworks::GameOverlayActivated_t>*& __cordl_internal_get_m_GameOverlayActivated() ;

constexpr ::Steamworks::Callback_1<::Steamworks::GameRichPresenceJoinRequested_t>* const& __cordl_internal_get_m_GameRichPresenceJoinRequested() const;

constexpr ::Steamworks::Callback_1<::Steamworks::GameRichPresenceJoinRequested_t>*& __cordl_internal_get_m_GameRichPresenceJoinRequested() ;

constexpr void __cordl_internal_set_gameId(int32_t  value) ;

constexpr void __cordl_internal_set_m_GameOverlayActivated(::Steamworks::Callback_1<::Steamworks::GameOverlayActivated_t>*  value) ;

constexpr void __cordl_internal_set_m_GameRichPresenceJoinRequested(::Steamworks::Callback_1<::Steamworks::GameRichPresenceJoinRequested_t>*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_isInOverlay() ;

static inline ::System::Tuple_2<::StringW,::StringW>* getStaticF_richPresenceWorldAndCode() ;

static inline ::StringW getStaticF_richPressenceKeyConnect() ;

static inline ::StringW getStaticF_richPressenceKeyStatus() ;

static inline ::StringW getStaticF_richPressenceKeyWorldName() ;

/// @brief Method get_isValid, addr 0x18038e2c0, size 0x10, virtual false, abstract: false, final false
static inline bool get_isValid() ;

static inline void setStaticF_isInOverlay(bool  value) ;

static inline void setStaticF_richPresenceWorldAndCode(::System::Tuple_2<::StringW,::StringW>*  value) ;

static inline void setStaticF_richPressenceKeyConnect(::StringW  value) ;

static inline void setStaticF_richPressenceKeyStatus(::StringW  value) ;

static inline void setStaticF_richPressenceKeyWorldName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HouseSteamManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HouseSteamManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HouseSteamManager(HouseSteamManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HouseSteamManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HouseSteamManager(HouseSteamManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5171};

/// @brief Field gameId, offset: 0x10, size: 0x4, def value: None
 int32_t  ___gameId;

/// @brief Field m_GameRichPresenceJoinRequested, offset: 0x18, size: 0x8, def value: None
 ::Steamworks::Callback_1<::Steamworks::GameRichPresenceJoinRequested_t>*  ___m_GameRichPresenceJoinRequested;

/// @brief Field m_GameOverlayActivated, offset: 0x20, size: 0x8, def value: None
 ::Steamworks::Callback_1<::Steamworks::GameOverlayActivated_t>*  ___m_GameOverlayActivated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HouseSteamManager, ___gameId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseSteamManager, ___m_GameRichPresenceJoinRequested) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HouseSteamManager, ___m_GameOverlayActivated) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HouseSteamManager) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/EOSLobbyManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_def.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EOSLobbyManager)
namespace Cysharp::Threading::Tasks {
class UniTaskCompletionSource;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace Epic::OnlineServices::Lobby {
struct CreateLobbyCallbackInfo;
}
namespace Epic::OnlineServices::Lobby {
struct DestroyLobbyCallbackInfo;
}
namespace Epic::OnlineServices::Lobby {
struct JoinLobbyCallbackInfo;
}
namespace Epic::OnlineServices::Lobby {
struct LeaveLobbyCallbackInfo;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsInfo;
}
namespace Epic::OnlineServices::Lobby {
class LobbyDetails;
}
namespace Epic::OnlineServices::Lobby {
class LobbyInterface;
}
namespace Epic::OnlineServices::Lobby {
class LobbyModification;
}
namespace Epic::OnlineServices::Lobby {
struct LobbySearchFindCallbackInfo;
}
namespace Epic::OnlineServices::Lobby {
class LobbySearch;
}
namespace Epic::OnlineServices::Lobby {
class OnDestroyLobbyCallback;
}
namespace Epic::OnlineServices::Lobby {
class OnUpdateLobbyCallback;
}
namespace Epic::OnlineServices::Lobby {
struct UpdateLobbyCallbackInfo;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace GlobalNamespace {
struct EOSLobbyManager__CheckForInternetConnection_d__49;
}
namespace GlobalNamespace {
struct EOSLobbyManager__CleanupLobbyIfDangling_d__45;
}
namespace GlobalNamespace {
struct EOSLobbyManager__CreateLobbyIfNotCreated_d__47;
}
namespace GlobalNamespace {
struct EOSLobbyManager__CreateLobby_d__39;
}
namespace GlobalNamespace {
struct EOSLobbyManager__DestroyCurrentLobby_d__40;
}
namespace GlobalNamespace {
struct EOSLobbyManager__DestroyLobbyList_d__46;
}
namespace GlobalNamespace {
struct EOSLobbyManager__DestroyMemberLobby_d__42;
}
namespace GlobalNamespace {
struct EOSLobbyManager__DoesUserHaveExistingLobby_d__56;
}
namespace GlobalNamespace {
struct EOSLobbyManager__FindFriendsLobbies_d__50;
}
namespace GlobalNamespace {
struct EOSLobbyManager__FindLobbies_d__58;
}
namespace GlobalNamespace {
struct EOSLobbyManager__FindLobbyAndConnectByCode_d__52;
}
namespace GlobalNamespace {
struct EOSLobbyManager__FindLobbyByCode_d__53;
}
namespace GlobalNamespace {
struct EOSLobbyManager__FindPublicLobbies_d__51;
}
namespace GlobalNamespace {
struct EOSLobbyManager__GenerateGameCode_d__35;
}
namespace GlobalNamespace {
struct EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55;
}
namespace GlobalNamespace {
struct EOSLobbyManager__JoinLobby_d__37;
}
namespace GlobalNamespace {
struct EOSLobbyManager__RecoverEOSLobby_d__48;
}
namespace GlobalNamespace {
class EOSLobbyManager___c;
}
namespace GlobalNamespace {
class EOSLobbyManager___c__DisplayClass37_0;
}
namespace GlobalNamespace {
class EOSLobbyManager___c__DisplayClass39_0;
}
namespace GlobalNamespace {
class EOSLobbyManager___c__DisplayClass41_0;
}
namespace GlobalNamespace {
class EOSLobbyManager___c__DisplayClass50_0;
}
namespace GlobalNamespace {
class EOSLobbyManager___c__DisplayClass53_0;
}
namespace GlobalNamespace {
class EOSLobbyManager___c__DisplayClass55_0;
}
namespace GlobalNamespace {
class EOSLobbyManager___c__DisplayClass55_1;
}
namespace GlobalNamespace {
class EOSLobbyManager___c__DisplayClass58_0;
}
namespace GlobalNamespace {
class LobbyInfo;
}
namespace GlobalNamespace {
class RemoteConfig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class EOSLobbyManager;
}
namespace GlobalNamespace {
class EOSLobbyManager___c;
}
namespace GlobalNamespace {
class EOSLobbyManager___c__DisplayClass37_0;
}
namespace GlobalNamespace {
class EOSLobbyManager___c__DisplayClass39_0;
}
namespace GlobalNamespace {
class EOSLobbyManager___c__DisplayClass41_0;
}
namespace GlobalNamespace {
class EOSLobbyManager___c__DisplayClass50_0;
}
namespace GlobalNamespace {
class EOSLobbyManager___c__DisplayClass53_0;
}
namespace GlobalNamespace {
class EOSLobbyManager___c__DisplayClass55_0;
}
namespace GlobalNamespace {
class EOSLobbyManager___c__DisplayClass55_1;
}
namespace GlobalNamespace {
class EOSLobbyManager___c__DisplayClass58_0;
}
namespace GlobalNamespace {
struct EOSLobbyManager__CheckForInternetConnection_d__49;
}
namespace GlobalNamespace {
struct EOSLobbyManager__CleanupLobbyIfDangling_d__45;
}
namespace GlobalNamespace {
struct EOSLobbyManager__CreateLobbyIfNotCreated_d__47;
}
namespace GlobalNamespace {
struct EOSLobbyManager__CreateLobby_d__39;
}
namespace GlobalNamespace {
struct EOSLobbyManager__DestroyCurrentLobby_d__40;
}
namespace GlobalNamespace {
struct EOSLobbyManager__DestroyLobbyList_d__46;
}
namespace GlobalNamespace {
struct EOSLobbyManager__DestroyMemberLobby_d__42;
}
namespace GlobalNamespace {
struct EOSLobbyManager__DoesUserHaveExistingLobby_d__56;
}
namespace GlobalNamespace {
struct EOSLobbyManager__FindFriendsLobbies_d__50;
}
namespace GlobalNamespace {
struct EOSLobbyManager__FindLobbies_d__58;
}
namespace GlobalNamespace {
struct EOSLobbyManager__FindLobbyAndConnectByCode_d__52;
}
namespace GlobalNamespace {
struct EOSLobbyManager__FindLobbyByCode_d__53;
}
namespace GlobalNamespace {
struct EOSLobbyManager__FindPublicLobbies_d__51;
}
namespace GlobalNamespace {
struct EOSLobbyManager__GenerateGameCode_d__35;
}
namespace GlobalNamespace {
struct EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55;
}
namespace GlobalNamespace {
struct EOSLobbyManager__JoinLobby_d__37;
}
namespace GlobalNamespace {
struct EOSLobbyManager__RecoverEOSLobby_d__48;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EOSLobbyManager*);
MARK_REF_T(::GlobalNamespace::EOSLobbyManager___c*);
MARK_REF_T(::GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0*);
MARK_REF_T(::GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0*);
MARK_REF_T(::GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0*);
MARK_REF_T(::GlobalNamespace::EOSLobbyManager___c__DisplayClass50_0*);
MARK_REF_T(::GlobalNamespace::EOSLobbyManager___c__DisplayClass53_0*);
MARK_REF_T(::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0*);
MARK_REF_T(::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_1*);
MARK_REF_T(::GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0*);
MARK_VAL_T(::GlobalNamespace::EOSLobbyManager__CheckForInternetConnection_d__49);
MARK_VAL_T(::GlobalNamespace::EOSLobbyManager__CleanupLobbyIfDangling_d__45);
MARK_VAL_T(::GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47);
MARK_VAL_T(::GlobalNamespace::EOSLobbyManager__CreateLobby_d__39);
MARK_VAL_T(::GlobalNamespace::EOSLobbyManager__DestroyCurrentLobby_d__40);
MARK_VAL_T(::GlobalNamespace::EOSLobbyManager__DestroyLobbyList_d__46);
MARK_VAL_T(::GlobalNamespace::EOSLobbyManager__DestroyMemberLobby_d__42);
MARK_VAL_T(::GlobalNamespace::EOSLobbyManager__DoesUserHaveExistingLobby_d__56);
MARK_VAL_T(::GlobalNamespace::EOSLobbyManager__FindFriendsLobbies_d__50);
MARK_VAL_T(::GlobalNamespace::EOSLobbyManager__FindLobbies_d__58);
MARK_VAL_T(::GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52);
MARK_VAL_T(::GlobalNamespace::EOSLobbyManager__FindLobbyByCode_d__53);
MARK_VAL_T(::GlobalNamespace::EOSLobbyManager__FindPublicLobbies_d__51);
MARK_VAL_T(::GlobalNamespace::EOSLobbyManager__GenerateGameCode_d__35);
MARK_VAL_T(::GlobalNamespace::EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55);
MARK_VAL_T(::GlobalNamespace::EOSLobbyManager__JoinLobby_d__37);
MARK_VAL_T(::GlobalNamespace::EOSLobbyManager__RecoverEOSLobby_d__48);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyManager*, "", "EOSLobbyManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyManager___c*, "", "EOSLobbyManager/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0*, "", "EOSLobbyManager/<>c__DisplayClass37_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0*, "", "EOSLobbyManager/<>c__DisplayClass39_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0*, "", "EOSLobbyManager/<>c__DisplayClass41_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyManager___c__DisplayClass50_0*, "", "EOSLobbyManager/<>c__DisplayClass50_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyManager___c__DisplayClass53_0*, "", "EOSLobbyManager/<>c__DisplayClass53_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0*, "", "EOSLobbyManager/<>c__DisplayClass55_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_1*, "", "EOSLobbyManager/<>c__DisplayClass55_1");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0*, "", "EOSLobbyManager/<>c__DisplayClass58_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyManager__CheckForInternetConnection_d__49, "", "EOSLobbyManager/<CheckForInternetConnection>d__49");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyManager__CleanupLobbyIfDangling_d__45, "", "EOSLobbyManager/<CleanupLobbyIfDangling>d__45");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47, "", "EOSLobbyManager/<CreateLobbyIfNotCreated>d__47");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyManager__CreateLobby_d__39, "", "EOSLobbyManager/<CreateLobby>d__39");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyManager__DestroyCurrentLobby_d__40, "", "EOSLobbyManager/<DestroyCurrentLobby>d__40");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyManager__DestroyLobbyList_d__46, "", "EOSLobbyManager/<DestroyLobbyList>d__46");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyManager__DestroyMemberLobby_d__42, "", "EOSLobbyManager/<DestroyMemberLobby>d__42");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyManager__DoesUserHaveExistingLobby_d__56, "", "EOSLobbyManager/<DoesUserHaveExistingLobby>d__56");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyManager__FindFriendsLobbies_d__50, "", "EOSLobbyManager/<FindFriendsLobbies>d__50");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyManager__FindLobbies_d__58, "", "EOSLobbyManager/<FindLobbies>d__58");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52, "", "EOSLobbyManager/<FindLobbyAndConnectByCode>d__52");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyManager__FindLobbyByCode_d__53, "", "EOSLobbyManager/<FindLobbyByCode>d__53");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyManager__FindPublicLobbies_d__51, "", "EOSLobbyManager/<FindPublicLobbies>d__51");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyManager__GenerateGameCode_d__35, "", "EOSLobbyManager/<GenerateGameCode>d__35");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55, "", "EOSLobbyManager/<GetAvailableLobbyCodeFromList>d__55");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyManager__JoinLobby_d__37, "", "EOSLobbyManager/<JoinLobby>d__37");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobbyManager__RecoverEOSLobby_d__48, "", "EOSLobbyManager/<RecoverEOSLobby>d__48");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobbyManager/<>c
class CORDL_TYPE EOSLobbyManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::EOSLobbyManager___c*  __9;

/// @brief Field <>9__39_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__39_1, put=setStaticF___9__39_1)) ::Epic::OnlineServices::Lobby::OnUpdateLobbyCallback*  __9__39_1;

/// @brief Field <>9__42_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__42_0, put=setStaticF___9__42_0)) ::Epic::OnlineServices::Lobby::OnDestroyLobbyCallback*  __9__42_0;

/// @brief Field <>9__51_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__51_0, put=setStaticF___9__51_0)) ::System::Action_1<::Epic::OnlineServices::Lobby::LobbySearch*>*  __9__51_0;

/// @brief Field <>9__56_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__56_0, put=setStaticF___9__56_0)) ::System::Action_1<::Epic::OnlineServices::Lobby::LobbySearch*>*  __9__56_0;

static inline ::GlobalNamespace::EOSLobbyManager___c* New_ctor() ;

/// @brief Method <CreateLobby>b__39_1, addr 0x18157cbc0, size 0x70, virtual false, abstract: false, final false
inline void _CreateLobby_b__39_1(::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo>  data) ;

/// @brief Method <DestroyMemberLobby>b__42_0, addr 0x18157cc30, size 0x70, virtual false, abstract: false, final false
inline void _DestroyMemberLobby_b__42_0(::by_ref<::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo>  data) ;

/// @brief Method <DoesUserHaveExistingLobby>b__56_0, addr 0x18157cca0, size 0x90, virtual false, abstract: false, final false
inline void _DoesUserHaveExistingLobby_b__56_0(::Epic::OnlineServices::Lobby::LobbySearch*  search) ;

/// @brief Method <FindPublicLobbies>b__51_0, addr 0x18157cde0, size 0x1f0, virtual false, abstract: false, final false
inline void _FindPublicLobbies_b__51_0(::Epic::OnlineServices::Lobby::LobbySearch*  search) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::EOSLobbyManager___c* getStaticF___9() ;

static inline ::Epic::OnlineServices::Lobby::OnUpdateLobbyCallback* getStaticF___9__39_1() ;

static inline ::Epic::OnlineServices::Lobby::OnDestroyLobbyCallback* getStaticF___9__42_0() ;

static inline ::System::Action_1<::Epic::OnlineServices::Lobby::LobbySearch*>* getStaticF___9__51_0() ;

static inline ::System::Action_1<::Epic::OnlineServices::Lobby::LobbySearch*>* getStaticF___9__56_0() ;

static inline void setStaticF___9(::GlobalNamespace::EOSLobbyManager___c*  value) ;

static inline void setStaticF___9__39_1(::Epic::OnlineServices::Lobby::OnUpdateLobbyCallback*  value) ;

static inline void setStaticF___9__42_0(::Epic::OnlineServices::Lobby::OnDestroyLobbyCallback*  value) ;

static inline void setStaticF___9__51_0(::System::Action_1<::Epic::OnlineServices::Lobby::LobbySearch*>*  value) ;

static inline void setStaticF___9__56_0(::System::Action_1<::Epic::OnlineServices::Lobby::LobbySearch*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobbyManager___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobbyManager___c(EOSLobbyManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobbyManager___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobbyManager___c(EOSLobbyManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18956};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EOSLobbyManager___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobbyManager/<>c__DisplayClass37_0
class CORDL_TYPE EOSLobbyManager___c__DisplayClass37_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this;

/// @brief Field tcs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  tcs;

static inline ::GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0* New_ctor() ;

/// @brief Method <JoinLobby>b__0, addr 0x18157da70, size 0xa0, virtual false, abstract: false, final false
inline void _JoinLobby_b__0(::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyCallbackInfo>  data) ;

constexpr ::UnityW<::GlobalNamespace::EOSLobbyManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::EOSLobbyManager>& __cordl_internal_get___4__this() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSLobbyManager>  value) ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyManager___c__DisplayClass37_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobbyManager___c__DisplayClass37_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobbyManager___c__DisplayClass37_0(EOSLobbyManager___c__DisplayClass37_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobbyManager___c__DisplayClass37_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobbyManager___c__DisplayClass37_0(EOSLobbyManager___c__DisplayClass37_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18957};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSLobbyManager>  _____4__this;

/// @brief Field tcs, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ___tcs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0, ___tcs) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobbyManager/<>c__DisplayClass39_0
class CORDL_TYPE EOSLobbyManager___c__DisplayClass39_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this;

/// @brief Field lobbies, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_lobbies, put=__cordl_internal_set_lobbies)) ::Epic::OnlineServices::Lobby::LobbyInterface*  lobbies;

/// @brief Field lobbyInfo, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_lobbyInfo, put=__cordl_internal_set_lobbyInfo)) ::GlobalNamespace::LobbyInfo*  lobbyInfo;

static inline ::GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0* New_ctor() ;

/// @brief Method <CreateLobby>b__0, addr 0x18157db10, size 0x270, virtual false, abstract: false, final false
inline void _CreateLobby_b__0(::by_ref<::Epic::OnlineServices::Lobby::CreateLobbyCallbackInfo>  data) ;

constexpr ::UnityW<::GlobalNamespace::EOSLobbyManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::EOSLobbyManager>& __cordl_internal_get___4__this() ;

constexpr ::Epic::OnlineServices::Lobby::LobbyInterface* const& __cordl_internal_get_lobbies() const;

constexpr ::Epic::OnlineServices::Lobby::LobbyInterface*& __cordl_internal_get_lobbies() ;

constexpr ::GlobalNamespace::LobbyInfo* const& __cordl_internal_get_lobbyInfo() const;

constexpr ::GlobalNamespace::LobbyInfo*& __cordl_internal_get_lobbyInfo() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSLobbyManager>  value) ;

constexpr void __cordl_internal_set_lobbies(::Epic::OnlineServices::Lobby::LobbyInterface*  value) ;

constexpr void __cordl_internal_set_lobbyInfo(::GlobalNamespace::LobbyInfo*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyManager___c__DisplayClass39_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobbyManager___c__DisplayClass39_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobbyManager___c__DisplayClass39_0(EOSLobbyManager___c__DisplayClass39_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobbyManager___c__DisplayClass39_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobbyManager___c__DisplayClass39_0(EOSLobbyManager___c__DisplayClass39_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18958};

/// @brief Field lobbyInfo, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::LobbyInfo*  ___lobbyInfo;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSLobbyManager>  _____4__this;

/// @brief Field lobbies, offset: 0x20, size: 0x8, def value: None
 ::Epic::OnlineServices::Lobby::LobbyInterface*  ___lobbies;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0, ___lobbyInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0, ___lobbies) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobbyManager/<>c__DisplayClass41_0
class CORDL_TYPE EOSLobbyManager___c__DisplayClass41_0 : public ::System::Object {
public:
// Declarations
/// @brief Field lobbyInfo, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_lobbyInfo, put=__cordl_internal_set_lobbyInfo)) ::GlobalNamespace::LobbyInfo*  lobbyInfo;

/// @brief Field tcs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::Cysharp::Threading::Tasks::UniTaskCompletionSource*  tcs;

static inline ::GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0* New_ctor() ;

/// @brief Method <DestroyLobby>b__0, addr 0x18157dd80, size 0x100, virtual false, abstract: false, final false
inline void _DestroyLobby_b__0(::by_ref<::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo>  data) ;

constexpr ::GlobalNamespace::LobbyInfo* const& __cordl_internal_get_lobbyInfo() const;

constexpr ::GlobalNamespace::LobbyInfo*& __cordl_internal_get_lobbyInfo() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource* const& __cordl_internal_get_tcs() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set_lobbyInfo(::GlobalNamespace::LobbyInfo*  value) ;

constexpr void __cordl_internal_set_tcs(::Cysharp::Threading::Tasks::UniTaskCompletionSource*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyManager___c__DisplayClass41_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobbyManager___c__DisplayClass41_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobbyManager___c__DisplayClass41_0(EOSLobbyManager___c__DisplayClass41_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobbyManager___c__DisplayClass41_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobbyManager___c__DisplayClass41_0(EOSLobbyManager___c__DisplayClass41_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18959};

/// @brief Field lobbyInfo, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::LobbyInfo*  ___lobbyInfo;

/// @brief Field tcs, offset: 0x18, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSource*  ___tcs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0, ___lobbyInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0, ___tcs) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobbyManager/<>c__DisplayClass50_0
class CORDL_TYPE EOSLobbyManager___c__DisplayClass50_0 : public ::System::Object {
public:
// Declarations
/// @brief Field friendCodes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendCodes, put=__cordl_internal_set_friendCodes)) ::System::Collections::Generic::List_1<::StringW>*  friendCodes;

static inline ::GlobalNamespace::EOSLobbyManager___c__DisplayClass50_0* New_ctor() ;

/// @brief Method <FindFriendsLobbies>b__0, addr 0x18157de80, size 0x230, virtual false, abstract: false, final false
inline void _FindFriendsLobbies_b__0(::Epic::OnlineServices::Lobby::LobbySearch*  search) ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_friendCodes() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_friendCodes() ;

constexpr void __cordl_internal_set_friendCodes(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyManager___c__DisplayClass50_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobbyManager___c__DisplayClass50_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobbyManager___c__DisplayClass50_0(EOSLobbyManager___c__DisplayClass50_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobbyManager___c__DisplayClass50_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobbyManager___c__DisplayClass50_0(EOSLobbyManager___c__DisplayClass50_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18960};

/// @brief Field friendCodes, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___friendCodes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobbyManager___c__DisplayClass50_0, ___friendCodes) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobbyManager___c__DisplayClass50_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobbyManager/<>c__DisplayClass53_0
class CORDL_TYPE EOSLobbyManager___c__DisplayClass53_0 : public ::System::Object {
public:
// Declarations
/// @brief Field code, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_code, put=__cordl_internal_set_code)) ::StringW  code;

static inline ::GlobalNamespace::EOSLobbyManager___c__DisplayClass53_0* New_ctor() ;

/// @brief Method <FindLobbyByCode>b__0, addr 0x18157e0b0, size 0x3c0, virtual false, abstract: false, final false
inline void _FindLobbyByCode_b__0(::Epic::OnlineServices::Lobby::LobbySearch*  search) ;

constexpr ::StringW const& __cordl_internal_get_code() const;

constexpr ::StringW& __cordl_internal_get_code() ;

constexpr void __cordl_internal_set_code(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyManager___c__DisplayClass53_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobbyManager___c__DisplayClass53_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobbyManager___c__DisplayClass53_0(EOSLobbyManager___c__DisplayClass53_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobbyManager___c__DisplayClass53_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobbyManager___c__DisplayClass53_0(EOSLobbyManager___c__DisplayClass53_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18961};

/// @brief Field code, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___code;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobbyManager___c__DisplayClass53_0, ___code) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobbyManager___c__DisplayClass53_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobbyManager/<>c__DisplayClass55_0
class CORDL_TYPE EOSLobbyManager___c__DisplayClass55_0 : public ::System::Object {
public:
// Declarations
/// @brief Field codes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_codes, put=__cordl_internal_set_codes)) ::ArrayW<::StringW>  codes;

static inline ::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0* New_ctor() ;

/// @brief Method <GetAvailableLobbyCodeFromList>b__0, addr 0x18157e470, size 0x410, virtual false, abstract: false, final false
inline void _GetAvailableLobbyCodeFromList_b__0(::Epic::OnlineServices::Lobby::LobbySearch*  search) ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_codes() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_codes() ;

constexpr void __cordl_internal_set_codes(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyManager___c__DisplayClass55_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobbyManager___c__DisplayClass55_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobbyManager___c__DisplayClass55_0(EOSLobbyManager___c__DisplayClass55_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobbyManager___c__DisplayClass55_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobbyManager___c__DisplayClass55_0(EOSLobbyManager___c__DisplayClass55_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18962};

/// @brief Field codes, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___codes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0, ___codes) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobbyManager/<>c__DisplayClass55_1
class CORDL_TYPE EOSLobbyManager___c__DisplayClass55_1 : public ::System::Object {
public:
// Declarations
/// @brief Field code, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_code, put=__cordl_internal_set_code)) ::StringW  code;

static inline ::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_1* New_ctor() ;

/// @brief Method <GetAvailableLobbyCodeFromList>b__1, addr 0x18157e880, size 0x30, virtual false, abstract: false, final false
inline bool _GetAvailableLobbyCodeFromList_b__1(::GlobalNamespace::LobbyInfo*  lobby) ;

constexpr ::StringW const& __cordl_internal_get_code() const;

constexpr ::StringW& __cordl_internal_get_code() ;

constexpr void __cordl_internal_set_code(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyManager___c__DisplayClass55_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobbyManager___c__DisplayClass55_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobbyManager___c__DisplayClass55_1(EOSLobbyManager___c__DisplayClass55_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobbyManager___c__DisplayClass55_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobbyManager___c__DisplayClass55_1(EOSLobbyManager___c__DisplayClass55_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18963};

/// @brief Field code, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___code;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_1, ___code) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_1) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobbyManager/<>c__DisplayClass58_0
class CORDL_TYPE EOSLobbyManager___c__DisplayClass58_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this;

/// @brief Field search, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_search, put=__cordl_internal_set_search)) ::Epic::OnlineServices::Lobby::LobbySearch*  search;

/// @brief Field tcs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>*  tcs;

static inline ::GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0* New_ctor() ;

/// @brief Method <FindLobbies>b__0, addr 0x18157e8b0, size 0x260, virtual false, abstract: false, final false
inline void _FindLobbies_b__0(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo>  info) ;

constexpr ::UnityW<::GlobalNamespace::EOSLobbyManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::EOSLobbyManager>& __cordl_internal_get___4__this() ;

constexpr ::Epic::OnlineServices::Lobby::LobbySearch* const& __cordl_internal_get_search() const;

constexpr ::Epic::OnlineServices::Lobby::LobbySearch*& __cordl_internal_get_search() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSLobbyManager>  value) ;

constexpr void __cordl_internal_set_search(::Epic::OnlineServices::Lobby::LobbySearch*  value) ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyManager___c__DisplayClass58_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobbyManager___c__DisplayClass58_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobbyManager___c__DisplayClass58_0(EOSLobbyManager___c__DisplayClass58_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobbyManager___c__DisplayClass58_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobbyManager___c__DisplayClass58_0(EOSLobbyManager___c__DisplayClass58_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18964};

/// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>*  ___tcs;

/// @brief Field search, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Lobby::LobbySearch*  ___search;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSLobbyManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0, ___search) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSLobbyManager/<CheckForInternetConnection>d__49
struct CORDL_TYPE EOSLobbyManager__CheckForInternetConnection_d__49 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181575bf0, size 0x110, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyManager__CheckForInternetConnection_d__49() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }]
constexpr EOSLobbyManager__CheckForInternetConnection_d__49(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<bool>  __t__builder) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18965};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<bool>  __t__builder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__CheckForInternetConnection_d__49, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__CheckForInternetConnection_d__49, __t__builder) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobbyManager__CheckForInternetConnection_d__49) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSLobbyManager/<CleanupLobbyIfDangling>d__45
struct CORDL_TYPE EOSLobbyManager__CleanupLobbyIfDangling_d__45 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181575d00, size 0x570, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyManager__CleanupLobbyIfDangling_d__45() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr EOSLobbyManager__CleanupLobbyIfDangling_d__45(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>>  __u__1, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18966};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this;

/// @brief Field <>u__1, offset: 0x20, size: 0x20, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>>  __u__1;

/// @brief Field <>u__2, offset: 0x40, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__CleanupLobbyIfDangling_d__45, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__CleanupLobbyIfDangling_d__45, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__CleanupLobbyIfDangling_d__45, __4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__CleanupLobbyIfDangling_d__45, __u__1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__CleanupLobbyIfDangling_d__45, __u__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobbyManager__CleanupLobbyIfDangling_d__45) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSLobbyManager/<CreateLobby>d__39
struct CORDL_TYPE EOSLobbyManager__CreateLobby_d__39 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181576ec0, size 0x320, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyManager__CreateLobby_d__39() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "lobbyInfo", ty: "::GlobalNamespace::LobbyInfo*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: None }]
constexpr EOSLobbyManager__CreateLobby_d__39(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::GlobalNamespace::LobbyInfo*  lobbyInfo, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18967};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field lobbyInfo, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::LobbyInfo*  lobbyInfo;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__CreateLobby_d__39, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__CreateLobby_d__39, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__CreateLobby_d__39, lobbyInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__CreateLobby_d__39, __4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobbyManager__CreateLobby_d__39) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSLobbyManager/<CreateLobbyIfNotCreated>d__47
struct CORDL_TYPE EOSLobbyManager__CreateLobbyIfNotCreated_d__47 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181576270, size 0xc50, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyManager__CreateLobbyIfNotCreated_d__47() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: None }, CppParam { name: "lobby", ty: "::GlobalNamespace::LobbyInfo*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::GlobalNamespace::LobbyInfo*>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty: "::GlobalNamespace::LobbyInfo*", modifiers: "", def_value: None }, CppParam { name: "__u__4", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
constexpr EOSLobbyManager__CreateLobbyIfNotCreated_d__47(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, ::GlobalNamespace::LobbyInfo*  lobby, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::GlobalNamespace::LobbyInfo*>  __u__3, ::GlobalNamespace::LobbyInfo*  __7__wrap1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__4) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18968};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this;

/// @brief Field lobby, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::LobbyInfo*  lobby;

/// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x38, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2;

/// @brief Field <>u__3, offset: 0x48, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::GlobalNamespace::LobbyInfo*>  __u__3;

/// @brief Field <>7__wrap1, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::LobbyInfo*  __7__wrap1;

/// @brief Field <>u__4, offset: 0x68, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47, __4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47, lobby) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47, __u__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47, __u__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47, __7__wrap1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47, __u__4) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSLobbyManager/<DestroyCurrentLobby>d__40
struct CORDL_TYPE EOSLobbyManager__DestroyCurrentLobby_d__40 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181577420, size 0x1e0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyManager__DestroyCurrentLobby_d__40() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: None }]
constexpr EOSLobbyManager__DestroyCurrentLobby_d__40(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18969};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__DestroyCurrentLobby_d__40, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__DestroyCurrentLobby_d__40, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__DestroyCurrentLobby_d__40, __4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobbyManager__DestroyCurrentLobby_d__40) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSLobbyManager/<DestroyLobbyList>d__46
struct CORDL_TYPE EOSLobbyManager__DestroyLobbyList_d__46 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181577600, size 0x5a0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyManager__DestroyLobbyList_d__46() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "lobbies", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr EOSLobbyManager__DestroyLobbyList_d__46(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*  lobbies, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18970};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field lobbies, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*  lobbies;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__DestroyLobbyList_d__46, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__DestroyLobbyList_d__46, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__DestroyLobbyList_d__46, lobbies) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__DestroyLobbyList_d__46, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__DestroyLobbyList_d__46, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobbyManager__DestroyLobbyList_d__46) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSLobbyManager/<DestroyMemberLobby>d__42
struct CORDL_TYPE EOSLobbyManager__DestroyMemberLobby_d__42 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181577ba0, size 0x3d0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyManager__DestroyMemberLobby_d__42() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>", modifiers: "", def_value: None }]
constexpr EOSLobbyManager__DestroyMemberLobby_d__42(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18971};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this;

/// @brief Field <>u__1, offset: 0x18, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__DestroyMemberLobby_d__42, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__DestroyMemberLobby_d__42, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__DestroyMemberLobby_d__42, __4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__DestroyMemberLobby_d__42, __u__1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobbyManager__DestroyMemberLobby_d__42) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSLobbyManager/<DoesUserHaveExistingLobby>d__56
struct CORDL_TYPE EOSLobbyManager__DoesUserHaveExistingLobby_d__56 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181577f70, size 0x400, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyManager__DoesUserHaveExistingLobby_d__56() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>", modifiers: "", def_value: None }]
constexpr EOSLobbyManager__DoesUserHaveExistingLobby_d__56(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>>  __t__builder, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18972};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>>  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__DoesUserHaveExistingLobby_d__56, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__DoesUserHaveExistingLobby_d__56, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__DoesUserHaveExistingLobby_d__56, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__DoesUserHaveExistingLobby_d__56, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobbyManager__DoesUserHaveExistingLobby_d__56) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSLobbyManager/<FindFriendsLobbies>d__50
struct CORDL_TYPE EOSLobbyManager__FindFriendsLobbies_d__50 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1815789c0, size 0x190, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038b190, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyManager__FindFriendsLobbies_d__50() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>", modifiers: "", def_value: None }, CppParam { name: "friendCodes", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>", modifiers: "", def_value: None }]
constexpr EOSLobbyManager__FindFriendsLobbies_d__50(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __t__builder, ::System::Collections::Generic::List_1<::StringW>*  friendCodes, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18973};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __t__builder;

/// @brief Field friendCodes, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  friendCodes;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindFriendsLobbies_d__50, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindFriendsLobbies_d__50, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindFriendsLobbies_d__50, friendCodes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindFriendsLobbies_d__50, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindFriendsLobbies_d__50, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobbyManager__FindFriendsLobbies_d__50) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSLobbyManager/<FindLobbies>d__58
struct CORDL_TYPE EOSLobbyManager__FindLobbies_d__58 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1815791c0, size 0x430, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038b190, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyManager__FindLobbies_d__58() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: None }, CppParam { name: "maxResults", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "feedSearch", ty: "::System::Action_1<::Epic::OnlineServices::Lobby::LobbySearch*>*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>", modifiers: "", def_value: None }]
constexpr EOSLobbyManager__FindLobbies_d__58(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __t__builder, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, uint32_t  maxResults, ::System::Action_1<::Epic::OnlineServices::Lobby::LobbySearch*>*  feedSearch, ::GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18974};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this;

/// @brief Field maxResults, offset: 0x28, size: 0x4, def value: None
 uint32_t  maxResults;

/// @brief Field feedSearch, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::Epic::OnlineServices::Lobby::LobbySearch*>*  feedSearch;

/// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0*  __8__1;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindLobbies_d__58, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindLobbies_d__58, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindLobbies_d__58, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindLobbies_d__58, maxResults) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindLobbies_d__58, feedSearch) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindLobbies_d__58, __8__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindLobbies_d__58, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobbyManager__FindLobbies_d__58) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSLobbyManager/<FindLobbyAndConnectByCode>d__52
struct CORDL_TYPE EOSLobbyManager__FindLobbyAndConnectByCode_d__52 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1815795f0, size 0xb70, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyManager__FindLobbyAndConnectByCode_d__52() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: None }, CppParam { name: "code", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_lobbyInfo_5__2", ty: "::GlobalNamespace::LobbyInfo*", modifiers: "", def_value: None }, CppParam { name: "_crossplay_5__3", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::GlobalNamespace::LobbyInfo*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::GlobalNamespace::RemoteConfig*>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr EOSLobbyManager__FindLobbyAndConnectByCode_d__52(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, ::StringW  code, ::GlobalNamespace::LobbyInfo*  _lobbyInfo_5__2, bool  _crossplay_5__3, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::GlobalNamespace::LobbyInfo*>  __u__1, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::GlobalNamespace::RemoteConfig*>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18975};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this;

/// @brief Field code, offset: 0x18, size: 0x8, def value: None
 ::StringW  code;

/// @brief Field <lobbyInfo>5__2, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::LobbyInfo*  _lobbyInfo_5__2;

/// @brief Field <crossplay>5__3, offset: 0x28, size: 0x1, def value: None
 bool  _crossplay_5__3;

/// @brief Field <>u__1, offset: 0x30, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::GlobalNamespace::LobbyInfo*>  __u__1;

/// @brief Field <>u__2, offset: 0x48, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::GlobalNamespace::RemoteConfig*>  __u__2;

/// @brief Field <>u__3, offset: 0x60, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52, __4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52, code) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52, _lobbyInfo_5__2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52, _crossplay_5__3) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52, __u__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52, __u__3) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSLobbyManager/<FindLobbyByCode>d__53
struct CORDL_TYPE EOSLobbyManager__FindLobbyByCode_d__53 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18157a160, size 0x240, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyManager__FindLobbyByCode_d__53() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::GlobalNamespace::LobbyInfo*>", modifiers: "", def_value: None }, CppParam { name: "code", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>", modifiers: "", def_value: None }]
constexpr EOSLobbyManager__FindLobbyByCode_d__53(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::GlobalNamespace::LobbyInfo*>  __t__builder, ::StringW  code, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18976};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::GlobalNamespace::LobbyInfo*>  __t__builder;

/// @brief Field code, offset: 0x20, size: 0x8, def value: None
 ::StringW  code;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindLobbyByCode_d__53, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindLobbyByCode_d__53, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindLobbyByCode_d__53, code) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindLobbyByCode_d__53, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindLobbyByCode_d__53, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobbyManager__FindLobbyByCode_d__53) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSLobbyManager/<FindPublicLobbies>d__51
struct CORDL_TYPE EOSLobbyManager__FindPublicLobbies_d__51 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18157a3a0, size 0x1e0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038b190, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyManager__FindPublicLobbies_d__51() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>", modifiers: "", def_value: None }]
constexpr EOSLobbyManager__FindPublicLobbies_d__51(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __t__builder, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18977};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindPublicLobbies_d__51, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindPublicLobbies_d__51, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindPublicLobbies_d__51, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__FindPublicLobbies_d__51, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobbyManager__FindPublicLobbies_d__51) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSLobbyManager/<GenerateGameCode>d__35
struct CORDL_TYPE EOSLobbyManager__GenerateGameCode_d__35 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18157aa50, size 0x380, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyManager__GenerateGameCode_d__35() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: None }, CppParam { name: "_attempts_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_codeGenerated_5__3", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr EOSLobbyManager__GenerateGameCode_d__35(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, int32_t  _attempts_5__2, bool  _codeGenerated_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18978};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this;

/// @brief Field <attempts>5__2, offset: 0x20, size: 0x4, def value: None
 int32_t  _attempts_5__2;

/// @brief Field <codeGenerated>5__3, offset: 0x24, size: 0x1, def value: None
 bool  _codeGenerated_5__3;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1;

/// @brief Field <>u__2, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__GenerateGameCode_d__35, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__GenerateGameCode_d__35, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__GenerateGameCode_d__35, __4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__GenerateGameCode_d__35, _attempts_5__2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__GenerateGameCode_d__35, _codeGenerated_5__3) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__GenerateGameCode_d__35, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__GenerateGameCode_d__35, __u__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobbyManager__GenerateGameCode_d__35) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSLobbyManager/<GetAvailableLobbyCodeFromList>d__55
struct CORDL_TYPE EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18157add0, size 0x3c0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038b190, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>", modifiers: "", def_value: None }]
constexpr EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, ::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18979};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this;

/// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0*  __8__1;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55, __8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSLobbyManager/<JoinLobby>d__37
struct CORDL_TYPE EOSLobbyManager__JoinLobby_d__37 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18157bd70, size 0x390, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038b190, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyManager__JoinLobby_d__37() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: None }, CppParam { name: "crossPlay", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "lobbyDetails", ty: "::Epic::OnlineServices::Lobby::LobbyDetails*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr EOSLobbyManager__JoinLobby_d__37(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, bool  crossPlay, ::Epic::OnlineServices::Lobby::LobbyDetails*  lobbyDetails, ::GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18980};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this;

/// @brief Field crossPlay, offset: 0x28, size: 0x1, def value: None
 bool  crossPlay;

/// @brief Field lobbyDetails, offset: 0x30, size: 0x8, def value: None
 ::Epic::OnlineServices::Lobby::LobbyDetails*  lobbyDetails;

/// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0*  __8__1;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__JoinLobby_d__37, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__JoinLobby_d__37, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__JoinLobby_d__37, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__JoinLobby_d__37, crossPlay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__JoinLobby_d__37, lobbyDetails) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__JoinLobby_d__37, __8__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__JoinLobby_d__37, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobbyManager__JoinLobby_d__37) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSLobbyManager/<RecoverEOSLobby>d__48
struct CORDL_TYPE EOSLobbyManager__RecoverEOSLobby_d__48 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18157c5e0, size 0x5e0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyManager__RecoverEOSLobby_d__48() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSLobbyManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr EOSLobbyManager__RecoverEOSLobby_d__48(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>>  __u__1, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18981};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSLobbyManager>  __4__this;

/// @brief Field <>u__1, offset: 0x20, size: 0x20, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>>  __u__1;

/// @brief Field <>u__2, offset: 0x40, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__RecoverEOSLobby_d__48, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__RecoverEOSLobby_d__48, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__RecoverEOSLobby_d__48, __4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__RecoverEOSLobby_d__48, __u__1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager__RecoverEOSLobby_d__48, __u__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobbyManager__RecoverEOSLobby_d__48) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobbyManager
class CORDL_TYPE EOSLobbyManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _CheckForInternetConnection_d__49 = ::GlobalNamespace::EOSLobbyManager__CheckForInternetConnection_d__49;

using _CleanupLobbyIfDangling_d__45 = ::GlobalNamespace::EOSLobbyManager__CleanupLobbyIfDangling_d__45;

using _CreateLobbyIfNotCreated_d__47 = ::GlobalNamespace::EOSLobbyManager__CreateLobbyIfNotCreated_d__47;

using _CreateLobby_d__39 = ::GlobalNamespace::EOSLobbyManager__CreateLobby_d__39;

using _DestroyCurrentLobby_d__40 = ::GlobalNamespace::EOSLobbyManager__DestroyCurrentLobby_d__40;

using _DestroyLobbyList_d__46 = ::GlobalNamespace::EOSLobbyManager__DestroyLobbyList_d__46;

using _DestroyMemberLobby_d__42 = ::GlobalNamespace::EOSLobbyManager__DestroyMemberLobby_d__42;

using _DoesUserHaveExistingLobby_d__56 = ::GlobalNamespace::EOSLobbyManager__DoesUserHaveExistingLobby_d__56;

using _FindFriendsLobbies_d__50 = ::GlobalNamespace::EOSLobbyManager__FindFriendsLobbies_d__50;

using _FindLobbies_d__58 = ::GlobalNamespace::EOSLobbyManager__FindLobbies_d__58;

using _FindLobbyAndConnectByCode_d__52 = ::GlobalNamespace::EOSLobbyManager__FindLobbyAndConnectByCode_d__52;

using _FindLobbyByCode_d__53 = ::GlobalNamespace::EOSLobbyManager__FindLobbyByCode_d__53;

using _FindPublicLobbies_d__51 = ::GlobalNamespace::EOSLobbyManager__FindPublicLobbies_d__51;

using _GenerateGameCode_d__35 = ::GlobalNamespace::EOSLobbyManager__GenerateGameCode_d__35;

using _GetAvailableLobbyCodeFromList_d__55 = ::GlobalNamespace::EOSLobbyManager__GetAvailableLobbyCodeFromList_d__55;

using _JoinLobby_d__37 = ::GlobalNamespace::EOSLobbyManager__JoinLobby_d__37;

using _RecoverEOSLobby_d__48 = ::GlobalNamespace::EOSLobbyManager__RecoverEOSLobby_d__48;

using __c = ::GlobalNamespace::EOSLobbyManager___c;

using __c__DisplayClass37_0 = ::GlobalNamespace::EOSLobbyManager___c__DisplayClass37_0;

using __c__DisplayClass39_0 = ::GlobalNamespace::EOSLobbyManager___c__DisplayClass39_0;

using __c__DisplayClass41_0 = ::GlobalNamespace::EOSLobbyManager___c__DisplayClass41_0;

using __c__DisplayClass50_0 = ::GlobalNamespace::EOSLobbyManager___c__DisplayClass50_0;

using __c__DisplayClass53_0 = ::GlobalNamespace::EOSLobbyManager___c__DisplayClass53_0;

using __c__DisplayClass55_0 = ::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_0;

using __c__DisplayClass55_1 = ::GlobalNamespace::EOSLobbyManager___c__DisplayClass55_1;

using __c__DisplayClass58_0 = ::GlobalNamespace::EOSLobbyManager___c__DisplayClass58_0;

/// @brief Field CancelHasBeenCalled, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_CancelHasBeenCalled, put=setStaticF_CancelHasBeenCalled)) bool  CancelHasBeenCalled;

 __declspec(property(get=get_CurrentLobbyCode)) ::StringW  CurrentLobbyCode;

 __declspec(property(get=get_CurrentLobbyInfo)) ::GlobalNamespace::LobbyInfo*  CurrentLobbyInfo;

 __declspec(property(get=get_LobbyHostId)) ::Epic::OnlineServices::ProductUserId*  LobbyHostId;

/// @brief Field OnLobbyDisconnect, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLobbyDisconnect, put=__cordl_internal_set_OnLobbyDisconnect)) ::System::Action*  OnLobbyDisconnect;

/// @brief Field PlayerHasBeenKicked, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_PlayerHasBeenKicked, put=setStaticF_PlayerHasBeenKicked)) bool  PlayerHasBeenKicked;

/// @brief Field RunningEOSConnectingCode, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_RunningEOSConnectingCode, put=setStaticF_RunningEOSConnectingCode)) bool  RunningEOSConnectingCode;

/// @brief Field currentLobbyCode, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentLobbyCode, put=__cordl_internal_set_currentLobbyCode)) ::StringW  currentLobbyCode;

/// @brief Field currentLobbyID, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentLobbyID, put=__cordl_internal_set_currentLobbyID)) ::StringW  currentLobbyID;

/// @brief Field currentLobbyInfo, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentLobbyInfo, put=__cordl_internal_set_currentLobbyInfo)) ::GlobalNamespace::LobbyInfo*  currentLobbyInfo;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::EOSLobbyManager>  instance;

/// @brief Field lobbyHostId, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_lobbyHostId, put=__cordl_internal_set_lobbyHostId)) ::Epic::OnlineServices::ProductUserId*  lobbyHostId;

/// @brief Field onLobbyCodeCreated, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onLobbyCodeCreated, put=__cordl_internal_set_onLobbyCodeCreated)) ::System::Action*  onLobbyCodeCreated;

/// @brief Field onLobbyFoundRequestResponse, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onLobbyFoundRequestResponse, put=__cordl_internal_set_onLobbyFoundRequestResponse)) ::System::Action_1<::Epic::OnlineServices::Result>*  onLobbyFoundRequestResponse;

/// @brief Field platformId, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformId, put=__cordl_internal_set_platformId)) ::StringW  platformId;

/// @brief Method Awake, addr 0x18156e380, size 0x110, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckForInternetConnection, addr 0x18156e490, size 0x170, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> CheckForInternetConnection() ;

/// @brief Method CleanupLobbyIfDangling, addr 0x18156e600, size 0x90, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask CleanupLobbyIfDangling() ;

/// @brief Method ClearCodeAndLobby, addr 0x18156e690, size 0x40, virtual false, abstract: false, final false
inline void ClearCodeAndLobby() ;

/// @brief Method ConvertToLobbyInfo, addr 0x18156e6d0, size 0x230, virtual false, abstract: false, final false
inline ::GlobalNamespace::LobbyInfo* ConvertToLobbyInfo(::Epic::OnlineServices::Lobby::LobbyDetails*  details, ::Epic::OnlineServices::Lobby::LobbyDetailsInfo  detailsInfo) ;

/// @brief Method CreateLobby, addr 0x18156e9c0, size 0xa0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask CreateLobby(::GlobalNamespace::LobbyInfo*  lobbyInfo) ;

/// @brief Method CreateLobbyIfNotCreated, addr 0x18156e900, size 0xc0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask CreateLobbyIfNotCreated(::GlobalNamespace::LobbyInfo*  lobby) ;

/// @brief Method DestroyCurrentLobby, addr 0x18156ea60, size 0x80, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask DestroyCurrentLobby() ;

/// @brief Method DestroyLobby, addr 0x18156eb80, size 0x180, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask DestroyLobby(::GlobalNamespace::LobbyInfo*  lobbyInfo) ;

/// @brief Method DestroyLobbyList, addr 0x18156eae0, size 0xa0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask DestroyLobbyList(::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*  lobbies) ;

/// @brief Method DestroyMemberLobby, addr 0x18156ed00, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid DestroyMemberLobby() ;

/// @brief Method DoesUserHaveExistingLobby, addr 0x18156ed60, size 0x170, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<bool,::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>> DoesUserHaveExistingLobby() ;

/// @brief Method FeedUpdateAttributes, addr 0x18156eed0, size 0x210, virtual false, abstract: false, final false
inline void FeedUpdateAttributes(::Epic::OnlineServices::Lobby::LobbyModification*  update, ::GlobalNamespace::LobbyInfo*  lobbyInfo) ;

/// @brief Method FindFriendsLobbies, addr 0x18156f0e0, size 0xc0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>* FindFriendsLobbies(::System::Collections::Generic::List_1<::StringW>*  friendCodes) ;

/// @brief Method FindLobbies, addr 0x18156f1a0, size 0xd0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>* FindLobbies(uint32_t  maxResults, ::System::Action_1<::Epic::OnlineServices::Lobby::LobbySearch*>*  feedSearch) ;

/// @brief Method FindLobbyAndConnectByCode, addr 0x18156f270, size 0xa0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid FindLobbyAndConnectByCode(::StringW  code) ;

/// @brief Method FindLobbyByCode, addr 0x18156f310, size 0xb0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::GlobalNamespace::LobbyInfo*> FindLobbyByCode(::StringW  code) ;

/// @brief Method FindPublicLobbies, addr 0x18156f3c0, size 0x90, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::LobbyInfo*>*>* FindPublicLobbies() ;

/// @brief Method GenerateCode, addr 0x18156f450, size 0x90, virtual false, abstract: false, final false
inline ::ArrayW<char16_t> GenerateCode() ;

/// @brief Method GenerateGameCode, addr 0x18156f4e0, size 0x80, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask GenerateGameCode() ;

/// @brief Method GetAvailableLobbyCodeFromList, addr 0x18156f560, size 0xa0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* GetAvailableLobbyCodeFromList() ;

/// @brief Method HandleCancel, addr 0x18156f600, size 0x30, virtual false, abstract: false, final false
inline bool HandleCancel() ;

/// @brief Method JoinLobby, addr 0x18156f630, size 0xd0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* JoinLobby(::Epic::OnlineServices::Lobby::LobbyDetails*  lobbyDetails, bool  crossPlay) ;

/// @brief Method LeaveLobby, addr 0x18156f700, size 0x120, virtual false, abstract: false, final false
inline void LeaveLobby() ;

/// @brief Method LocalCheckIsInLobby, addr 0x18156f820, size 0x180, virtual false, abstract: false, final false
inline bool LocalCheckIsInLobby() ;

static inline ::GlobalNamespace::EOSLobbyManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18156f9a0, size 0xc0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RecoverEOSLobby, addr 0x18156fa60, size 0x90, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask RecoverEOSLobby() ;

/// @brief Method TryGetBoolAttribute, addr 0x18156faf0, size 0xf0, virtual false, abstract: false, final false
static inline ::System::Nullable_1<bool> TryGetBoolAttribute(::Epic::OnlineServices::Lobby::LobbyDetails*  details, ::StringW  key) ;

/// @brief Method TryGetStringAttribute, addr 0x18156fbe0, size 0x100, virtual false, abstract: false, final false
static inline ::StringW TryGetStringAttribute(::Epic::OnlineServices::Lobby::LobbyDetails*  details, ::StringW  key) ;

/// @brief Method UpdateAttribute, addr 0x181570260, size 0x1f0, virtual false, abstract: false, final false
inline void UpdateAttribute(::Epic::OnlineServices::Lobby::LobbyModification*  update, ::StringW  attributeKey, ::StringW  attributeValue) ;

/// @brief Method <DestroyCurrentLobby>b__40_0, addr 0x18156fce0, size 0x110, virtual false, abstract: false, final false
inline void _DestroyCurrentLobby_b__40_0(::by_ref<::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo>  data) ;

/// @brief Method <DestroyMemberLobby>b__42_1, addr 0x18156fdf0, size 0x3d0, virtual false, abstract: false, final false
inline void _DestroyMemberLobby_b__42_1(::Epic::OnlineServices::Lobby::LobbySearch*  feedSearch) ;

/// @brief Method <LeaveLobby>b__38_0, addr 0x1815701c0, size 0xa0, virtual false, abstract: false, final false
inline void _LeaveLobby_b__38_0(::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyCallbackInfo>  data) ;

constexpr ::System::Action* const& __cordl_internal_get_OnLobbyDisconnect() const;

constexpr ::System::Action*& __cordl_internal_get_OnLobbyDisconnect() ;

constexpr ::StringW const& __cordl_internal_get_currentLobbyCode() const;

constexpr ::StringW& __cordl_internal_get_currentLobbyCode() ;

constexpr ::StringW const& __cordl_internal_get_currentLobbyID() const;

constexpr ::StringW& __cordl_internal_get_currentLobbyID() ;

constexpr ::GlobalNamespace::LobbyInfo* const& __cordl_internal_get_currentLobbyInfo() const;

constexpr ::GlobalNamespace::LobbyInfo*& __cordl_internal_get_currentLobbyInfo() ;

constexpr ::Epic::OnlineServices::ProductUserId* const& __cordl_internal_get_lobbyHostId() const;

constexpr ::Epic::OnlineServices::ProductUserId*& __cordl_internal_get_lobbyHostId() ;

constexpr ::System::Action* const& __cordl_internal_get_onLobbyCodeCreated() const;

constexpr ::System::Action*& __cordl_internal_get_onLobbyCodeCreated() ;

constexpr ::System::Action_1<::Epic::OnlineServices::Result>* const& __cordl_internal_get_onLobbyFoundRequestResponse() const;

constexpr ::System::Action_1<::Epic::OnlineServices::Result>*& __cordl_internal_get_onLobbyFoundRequestResponse() ;

constexpr ::StringW const& __cordl_internal_get_platformId() const;

constexpr ::StringW& __cordl_internal_get_platformId() ;

constexpr void __cordl_internal_set_OnLobbyDisconnect(::System::Action*  value) ;

constexpr void __cordl_internal_set_currentLobbyCode(::StringW  value) ;

constexpr void __cordl_internal_set_currentLobbyID(::StringW  value) ;

constexpr void __cordl_internal_set_currentLobbyInfo(::GlobalNamespace::LobbyInfo*  value) ;

constexpr void __cordl_internal_set_lobbyHostId(::Epic::OnlineServices::ProductUserId*  value) ;

constexpr void __cordl_internal_set_onLobbyCodeCreated(::System::Action*  value) ;

constexpr void __cordl_internal_set_onLobbyFoundRequestResponse(::System::Action_1<::Epic::OnlineServices::Result>*  value) ;

constexpr void __cordl_internal_set_platformId(::StringW  value) ;

/// @brief Method .ctor, addr 0x181570450, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_CancelHasBeenCalled() ;

static inline bool getStaticF_PlayerHasBeenKicked() ;

static inline bool getStaticF_RunningEOSConnectingCode() ;

static inline ::UnityW<::GlobalNamespace::EOSLobbyManager> getStaticF_instance() ;

/// @brief Method get_CurrentLobbyCode, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_CurrentLobbyCode() ;

/// @brief Method get_CurrentLobbyInfo, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::LobbyInfo* get_CurrentLobbyInfo() ;

/// @brief Method get_Instance, addr 0x181570490, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::EOSLobbyManager> get_Instance() ;

/// @brief Method get_LobbyHostId, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LobbyHostId() ;

static inline void setStaticF_CancelHasBeenCalled(bool  value) ;

static inline void setStaticF_PlayerHasBeenKicked(bool  value) ;

static inline void setStaticF_RunningEOSConnectingCode(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::EOSLobbyManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobbyManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobbyManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobbyManager(EOSLobbyManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobbyManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobbyManager(EOSLobbyManager const& ) = delete;

/// @brief Field CROSSPLAY_ATTRIBUTE offset 0xffffffff size 0x8
static constexpr ::ConstString  CROSSPLAY_ATTRIBUTE{u"crossplay"};

/// @brief Field HOST_ID_ATTRIBUTE offset 0xffffffff size 0x8
static constexpr ::ConstString  HOST_ID_ATTRIBUTE{u"host_id"};

/// @brief Field IS_HOST_ATTRIBUTE_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  IS_HOST_ATTRIBUTE_NAME{u"is_host"};

/// @brief Field JOIN_ATTRIBUTE_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  JOIN_ATTRIBUTE_NAME{u"join_code"};

/// @brief Field PLATFORM_ATTRIBUTE offset 0xffffffff size 0x8
static constexpr ::ConstString  PLATFORM_ATTRIBUTE{u"platform"};

/// @brief Field PLATFORM_ID_ATTRIBUTE offset 0xffffffff size 0x8
static constexpr ::ConstString  PLATFORM_ID_ATTRIBUTE{u"platform_id"};

/// @brief Field TITLE_SETTINGS_FILENAME offset 0xffffffff size 0x8
static constexpr ::ConstString  TITLE_SETTINGS_FILENAME{u"Title_Settings"};

/// @brief Field UNIQUE_GAMECODE_MAX_ATTEMPTS offset 0xffffffff size 0x4
static constexpr int32_t  UNIQUE_GAMECODE_MAX_ATTEMPTS{static_cast<int32_t>(0x5)};

/// @brief Field USER_NAME_ATTRIBUTE offset 0xffffffff size 0x8
static constexpr ::ConstString  USER_NAME_ATTRIBUTE{u"user_name"};

/// @brief Field WORLD_NAME_ATTRIBUTE offset 0xffffffff size 0x8
static constexpr ::ConstString  WORLD_NAME_ATTRIBUTE{u"world_name"};

/// @brief Field WORLD_OWNER_PLATFORM_ID offset 0xffffffff size 0x8
static constexpr ::ConstString  WORLD_OWNER_PLATFORM_ID{u"world_owner_platformid"};

/// @brief Field WORLD_USERNAME_ATTRIBUTE_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  WORLD_USERNAME_ATTRIBUTE_NAME{u"world_username"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18982};

/// @brief Field currentLobbyID, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___currentLobbyID;

/// @brief Field currentLobbyCode, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___currentLobbyCode;

/// @brief Field onLobbyCodeCreated, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___onLobbyCodeCreated;

/// @brief Field onLobbyFoundRequestResponse, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::Epic::OnlineServices::Result>*  ___onLobbyFoundRequestResponse;

/// @brief Field OnLobbyDisconnect, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  ___OnLobbyDisconnect;

/// @brief Field lobbyHostId, offset: 0x48, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  ___lobbyHostId;

/// @brief Field platformId, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___platformId;

/// @brief Field currentLobbyInfo, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::LobbyInfo*  ___currentLobbyInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobbyManager, ___currentLobbyID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager, ___currentLobbyCode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager, ___onLobbyCodeCreated) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager, ___onLobbyFoundRequestResponse) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager, ___OnLobbyDisconnect) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager, ___lobbyHostId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager, ___platformId) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobbyManager, ___currentLobbyInfo) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobbyManager) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace

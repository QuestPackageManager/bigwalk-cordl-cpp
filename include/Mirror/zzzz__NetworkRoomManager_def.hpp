#pragma once
// IWYU pragma private; include "Mirror/NetworkRoomManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkRoomManager)
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
struct NetworkRoomManager_PendingPlayer;
}
namespace Mirror {
class NetworkRoomManager___c;
}
namespace Mirror {
class NetworkRoomPlayer;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Mirror {
class NetworkRoomManager;
}
namespace Mirror {
class NetworkRoomManager___c;
}
namespace Mirror {
struct NetworkRoomManager_PendingPlayer;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkRoomManager*);
MARK_REF_T(::Mirror::NetworkRoomManager___c*);
MARK_VAL_T(::Mirror::NetworkRoomManager_PendingPlayer);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkRoomManager*, "Mirror", "NetworkRoomManager");
DEFINE_IL2CPP_CLASS(::Mirror::NetworkRoomManager___c*, "Mirror", "NetworkRoomManager/<>c");
DEFINE_IL2CPP_CLASS(::Mirror::NetworkRoomManager_PendingPlayer, "Mirror", "NetworkRoomManager/PendingPlayer");
// Dependencies 
namespace Mirror {
// Is value type: true
// CS Name: Mirror.NetworkRoomManager/PendingPlayer
struct CORDL_TYPE NetworkRoomManager_PendingPlayer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRoomManager_PendingPlayer() ;

// Ctor Parameters [CppParam { name: "conn", ty: "::Mirror::NetworkConnectionToClient*", modifiers: "", def_value: None }, CppParam { name: "roomPlayer", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }]
constexpr NetworkRoomManager_PendingPlayer(::Mirror::NetworkConnectionToClient*  conn, ::UnityW<::UnityEngine::GameObject>  roomPlayer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19239};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field conn, offset: 0x0, size: 0x8, def value: None
 ::Mirror::NetworkConnectionToClient*  conn;

/// @brief Field roomPlayer, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  roomPlayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkRoomManager_PendingPlayer, conn) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkRoomManager_PendingPlayer, roomPlayer) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkRoomManager_PendingPlayer) == 0x10, "Size mismatch!");

} // namespace end def Mirror
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkRoomManager/<>c
class CORDL_TYPE NetworkRoomManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Mirror::NetworkRoomManager___c*  __9;

/// @brief Field <>9__16_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_0, put=setStaticF___9__16_0)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::Mirror::NetworkConnectionToClient*>,bool>*  __9__16_0;

static inline ::Mirror::NetworkRoomManager___c* New_ctor() ;

/// @brief Method <CheckReadyToBegin>b__16_0, addr 0x18152ff50, size 0x80, virtual false, abstract: false, final false
inline bool _CheckReadyToBegin_b__16_0(::System::Collections::Generic::KeyValuePair_2<int32_t,::Mirror::NetworkConnectionToClient*>  conn) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Mirror::NetworkRoomManager___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::Mirror::NetworkConnectionToClient*>,bool>* getStaticF___9__16_0() ;

static inline void setStaticF___9(::Mirror::NetworkRoomManager___c*  value) ;

static inline void setStaticF___9__16_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::Mirror::NetworkConnectionToClient*>,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRoomManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRoomManager___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRoomManager___c(NetworkRoomManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRoomManager___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRoomManager___c(NetworkRoomManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19240};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::NetworkRoomManager___c) == 0x10, "Size mismatch!");

} // namespace end def Mirror
// Dependencies Mirror.NetworkManager
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkRoomManager
class CORDL_TYPE NetworkRoomManager : public ::Mirror::NetworkManager {
public:
// Declarations
using PendingPlayer = ::Mirror::NetworkRoomManager_PendingPlayer;

using __c = ::Mirror::NetworkRoomManager___c;

/// @brief Field GameplayScene, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_GameplayScene, put=__cordl_internal_set_GameplayScene)) ::StringW  GameplayScene;

/// @brief Field RoomScene, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoomScene, put=__cordl_internal_set_RoomScene)) ::StringW  RoomScene;

/// @brief Field _allPlayersReady, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__allPlayersReady, put=__cordl_internal_set__allPlayersReady)) bool  _allPlayersReady;

 __declspec(property(get=get_allPlayersReady, put=set_allPlayersReady)) bool  allPlayersReady;

/// @brief Field clientIndex, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_clientIndex, put=__cordl_internal_set_clientIndex)) int32_t  clientIndex;

/// @brief Field minPlayers, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_minPlayers, put=__cordl_internal_set_minPlayers)) int32_t  minPlayers;

/// @brief Field pendingPlayers, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_pendingPlayers, put=__cordl_internal_set_pendingPlayers)) ::System::Collections::Generic::List_1<::Mirror::NetworkRoomManager_PendingPlayer>*  pendingPlayers;

/// @brief Field roomPlayerPrefab, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomPlayerPrefab, put=__cordl_internal_set_roomPlayerPrefab)) ::UnityW<::Mirror::NetworkRoomPlayer>  roomPlayerPrefab;

/// @brief Field roomSlots, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomSlots, put=__cordl_internal_set_roomSlots)) ::System::Collections::Generic::List_1<::UnityW<::Mirror::NetworkRoomPlayer>>*  roomSlots;

/// @brief Field showRoomGUI, offset 0x82, size 0x1 
 __declspec(property(get=__cordl_internal_get_showRoomGUI, put=__cordl_internal_set_showRoomGUI)) bool  showRoomGUI;

/// @brief Method CallOnClientEnterRoom, addr 0x1815237f0, size 0xc0, virtual false, abstract: false, final false
inline void CallOnClientEnterRoom() ;

/// @brief Method CallOnClientExitRoom, addr 0x1815238b0, size 0xc0, virtual false, abstract: false, final false
inline void CallOnClientExitRoom() ;

/// @brief Method CheckReadyToBegin, addr 0x181523970, size 0x1a0, virtual false, abstract: false, final false
inline void CheckReadyToBegin() ;

static inline ::Mirror::NetworkRoomManager* New_ctor() ;

/// @brief Method OnClientConnect, addr 0x181523b10, size 0x30, virtual true, abstract: false, final false
inline void OnClientConnect() ;

/// @brief Method OnClientDisconnect, addr 0x181523b40, size 0x20, virtual true, abstract: false, final false
inline void OnClientDisconnect() ;

/// @brief Method OnClientSceneChanged, addr 0x181523b60, size 0x70, virtual true, abstract: false, final false
inline void OnClientSceneChanged() ;

/// @brief Method OnGUI, addr 0x181523bd0, size 0x130, virtual true, abstract: false, final false
inline void OnGUI() ;

/// @brief Method OnRoomClientConnect, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnRoomClientConnect() ;

/// @brief Method OnRoomClientDisconnect, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnRoomClientDisconnect() ;

/// @brief Method OnRoomClientEnter, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnRoomClientEnter() ;

/// @brief Method OnRoomClientExit, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnRoomClientExit() ;

/// @brief Method OnRoomClientSceneChanged, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnRoomClientSceneChanged() ;

/// @brief Method OnRoomServerAddPlayer, addr 0x181523d00, size 0x10, virtual true, abstract: false, final false
inline void OnRoomServerAddPlayer(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnRoomServerConnect, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnRoomServerConnect(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnRoomServerCreateGamePlayer, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> OnRoomServerCreateGamePlayer(::Mirror::NetworkConnectionToClient*  conn, ::UnityEngine::GameObject*  roomPlayer) ;

/// @brief Method OnRoomServerCreateRoomPlayer, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> OnRoomServerCreateRoomPlayer(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnRoomServerDisconnect, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnRoomServerDisconnect(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnRoomServerPlayersNotReady, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnRoomServerPlayersNotReady() ;

/// @brief Method OnRoomServerPlayersReady, addr 0x181523d10, size 0x20, virtual true, abstract: false, final false
inline void OnRoomServerPlayersReady() ;

/// @brief Method OnRoomServerSceneChanged, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnRoomServerSceneChanged(::StringW  sceneName) ;

/// @brief Method OnRoomServerSceneLoadedForPlayer, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool OnRoomServerSceneLoadedForPlayer(::Mirror::NetworkConnectionToClient*  conn, ::UnityEngine::GameObject*  roomPlayer, ::UnityEngine::GameObject*  gamePlayer) ;

/// @brief Method OnRoomStartClient, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnRoomStartClient() ;

/// @brief Method OnRoomStartHost, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnRoomStartHost() ;

/// @brief Method OnRoomStartServer, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnRoomStartServer() ;

/// @brief Method OnRoomStopClient, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnRoomStopClient() ;

/// @brief Method OnRoomStopHost, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnRoomStopHost() ;

/// @brief Method OnRoomStopServer, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnRoomStopServer() ;

/// @brief Method OnServerAddPlayer, addr 0x181523d30, size 0x140, virtual true, abstract: false, final false
inline void OnServerAddPlayer(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnServerConnect, addr 0x181523e70, size 0x90, virtual true, abstract: false, final false
inline void OnServerConnect(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnServerDisconnect, addr 0x181523f00, size 0x260, virtual true, abstract: false, final false
inline void OnServerDisconnect(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnServerReady, addr 0x181524160, size 0xd0, virtual true, abstract: false, final false
inline void OnServerReady(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnServerSceneChanged, addr 0x181524230, size 0x100, virtual true, abstract: false, final false
inline void OnServerSceneChanged(::StringW  sceneName) ;

/// @brief Method OnStartClient, addr 0x181524330, size 0xc0, virtual true, abstract: false, final false
inline void OnStartClient() ;

/// @brief Method OnStartHost, addr 0x1815243f0, size 0x20, virtual true, abstract: false, final false
inline void OnStartHost() ;

/// @brief Method OnStartServer, addr 0x181524410, size 0x70, virtual true, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method OnStopClient, addr 0x181524480, size 0x70, virtual true, abstract: false, final false
inline void OnStopClient() ;

/// @brief Method OnStopHost, addr 0x1815244f0, size 0x20, virtual true, abstract: false, final false
inline void OnStopHost() ;

/// @brief Method OnStopServer, addr 0x181524510, size 0x60, virtual true, abstract: false, final false
inline void OnStopServer() ;

/// @brief Method OnValidate, addr 0x181524570, size 0xa0, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method ReadyStatusChanged, addr 0x181524610, size 0x230, virtual true, abstract: false, final false
inline void ReadyStatusChanged() ;

/// @brief Method RecalculateRoomPlayerIndices, addr 0x181524840, size 0x1e0, virtual false, abstract: false, final false
inline void RecalculateRoomPlayerIndices() ;

/// @brief Method SceneLoadedForPlayer, addr 0x181524a20, size 0x280, virtual false, abstract: false, final false
inline void SceneLoadedForPlayer(::Mirror::NetworkConnectionToClient*  conn, ::UnityEngine::GameObject*  roomPlayer) ;

/// @brief Method ServerChangeScene, addr 0x181524ca0, size 0x180, virtual true, abstract: false, final false
inline void ServerChangeScene(::StringW  newSceneName) ;

constexpr ::StringW const& __cordl_internal_get_GameplayScene() const;

constexpr ::StringW& __cordl_internal_get_GameplayScene() ;

constexpr ::StringW const& __cordl_internal_get_RoomScene() const;

constexpr ::StringW& __cordl_internal_get_RoomScene() ;

constexpr bool const& __cordl_internal_get__allPlayersReady() const;

constexpr bool& __cordl_internal_get__allPlayersReady() ;

constexpr int32_t const& __cordl_internal_get_clientIndex() const;

constexpr int32_t& __cordl_internal_get_clientIndex() ;

constexpr int32_t const& __cordl_internal_get_minPlayers() const;

constexpr int32_t& __cordl_internal_get_minPlayers() ;

constexpr ::System::Collections::Generic::List_1<::Mirror::NetworkRoomManager_PendingPlayer>* const& __cordl_internal_get_pendingPlayers() const;

constexpr ::System::Collections::Generic::List_1<::Mirror::NetworkRoomManager_PendingPlayer>*& __cordl_internal_get_pendingPlayers() ;

constexpr ::UnityW<::Mirror::NetworkRoomPlayer> const& __cordl_internal_get_roomPlayerPrefab() const;

constexpr ::UnityW<::Mirror::NetworkRoomPlayer>& __cordl_internal_get_roomPlayerPrefab() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Mirror::NetworkRoomPlayer>>* const& __cordl_internal_get_roomSlots() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Mirror::NetworkRoomPlayer>>*& __cordl_internal_get_roomSlots() ;

constexpr bool const& __cordl_internal_get_showRoomGUI() const;

constexpr bool& __cordl_internal_get_showRoomGUI() ;

constexpr void __cordl_internal_set_GameplayScene(::StringW  value) ;

constexpr void __cordl_internal_set_RoomScene(::StringW  value) ;

constexpr void __cordl_internal_set__allPlayersReady(bool  value) ;

constexpr void __cordl_internal_set_clientIndex(int32_t  value) ;

constexpr void __cordl_internal_set_minPlayers(int32_t  value) ;

constexpr void __cordl_internal_set_pendingPlayers(::System::Collections::Generic::List_1<::Mirror::NetworkRoomManager_PendingPlayer>*  value) ;

constexpr void __cordl_internal_set_roomPlayerPrefab(::UnityW<::Mirror::NetworkRoomPlayer>  value) ;

constexpr void __cordl_internal_set_roomSlots(::System::Collections::Generic::List_1<::UnityW<::Mirror::NetworkRoomPlayer>>*  value) ;

constexpr void __cordl_internal_set_showRoomGUI(bool  value) ;

/// @brief Method .ctor, addr 0x18151ddc0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_allPlayersReady, addr 0x18030d8a0, size 0x10, virtual false, abstract: false, final false
inline bool get_allPlayersReady() ;

/// @brief Method set_allPlayersReady, addr 0x181524e20, size 0x40, virtual false, abstract: false, final false
inline void set_allPlayersReady(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRoomManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRoomManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRoomManager(NetworkRoomManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRoomManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRoomManager(NetworkRoomManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19241};

/// @brief Field showRoomGUI, offset: 0x82, size: 0x1, def value: None
 bool  ___showRoomGUI;

/// @brief Field minPlayers, offset: 0x84, size: 0x4, def value: None
 int32_t  ___minPlayers;

/// @brief Field roomPlayerPrefab, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::Mirror::NetworkRoomPlayer>  ___roomPlayerPrefab;

/// @brief Field RoomScene, offset: 0x90, size: 0x8, def value: None
 ::StringW  ___RoomScene;

/// @brief Field GameplayScene, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___GameplayScene;

/// @brief Field pendingPlayers, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Mirror::NetworkRoomManager_PendingPlayer>*  ___pendingPlayers;

/// @brief Field _allPlayersReady, offset: 0xa8, size: 0x1, def value: None
 bool  ____allPlayersReady;

/// @brief Field roomSlots, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Mirror::NetworkRoomPlayer>>*  ___roomSlots;

/// @brief Field clientIndex, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___clientIndex;

/// @brief Size padding 0xc8 - 0xc0 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkRoomManager, ___showRoomGUI) == 0x82, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkRoomManager, ___minPlayers) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkRoomManager, ___roomPlayerPrefab) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkRoomManager, ___RoomScene) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkRoomManager, ___GameplayScene) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkRoomManager, ___pendingPlayers) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkRoomManager, ____allPlayersReady) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkRoomManager, ___roomSlots) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkRoomManager, ___clientIndex) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkRoomManager) == 0xc8, "Size mismatch!");

} // namespace end def Mirror

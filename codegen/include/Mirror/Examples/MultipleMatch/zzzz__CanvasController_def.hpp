#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/CanvasController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CanvasController)
namespace Mirror::Examples::MultipleMatch {
class CanvasController__OnServerDisconnect_d__34;
}
namespace Mirror::Examples::MultipleMatch {
class CanvasController___c;
}
namespace Mirror::Examples::MultipleMatch {
struct ClientMatchMessage;
}
namespace Mirror::Examples::MultipleMatch {
struct MatchInfo;
}
namespace Mirror::Examples::MultipleMatch {
struct PlayerInfo;
}
namespace Mirror::Examples::MultipleMatch {
class RoomGUI;
}
namespace Mirror::Examples::MultipleMatch {
struct ServerMatchMessage;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkConnection;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
struct Guid;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class ToggleGroup;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Mirror::Examples::MultipleMatch {
class CanvasController;
}
namespace Mirror::Examples::MultipleMatch {
class CanvasController__OnServerDisconnect_d__34;
}
namespace Mirror::Examples::MultipleMatch {
class CanvasController___c;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::MultipleMatch::CanvasController*);
MARK_REF_T(::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34*);
MARK_REF_T(::Mirror::Examples::MultipleMatch::CanvasController___c*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleMatch::CanvasController*, "Mirror.Examples.MultipleMatch", "CanvasController");
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34*, "Mirror.Examples.MultipleMatch", "CanvasController/<OnServerDisconnect>d__34");
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleMatch::CanvasController___c*, "Mirror.Examples.MultipleMatch", "CanvasController/<>c");
// Dependencies System.Object
namespace Mirror::Examples::MultipleMatch {
// Is value type: false
// CS Name: Mirror.Examples.MultipleMatch.CanvasController/<>c
class CORDL_TYPE CanvasController___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Mirror::Examples::MultipleMatch::CanvasController___c*  __9;

/// @brief Field <>9__34_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__34_0, put=setStaticF___9__34_0)) ::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*  __9__34_0;

/// @brief Field <>9__41_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__41_0, put=setStaticF___9__41_0)) ::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*  __9__41_0;

/// @brief Field <>9__42_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__42_0, put=setStaticF___9__42_0)) ::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*  __9__42_0;

/// @brief Field <>9__43_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__43_0, put=setStaticF___9__43_0)) ::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*  __9__43_0;

/// @brief Field <>9__46_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__46_0, put=setStaticF___9__46_0)) ::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*  __9__46_0;

static inline ::Mirror::Examples::MultipleMatch::CanvasController___c* New_ctor() ;

/// @brief Method <OnServerCreateMatch>b__43_0, addr 0x1815667f0, size 0x70, virtual false, abstract: false, final false
inline ::Mirror::Examples::MultipleMatch::PlayerInfo _OnServerCreateMatch_b__43_0(::Mirror::NetworkConnectionToClient*  playerConn) ;

/// @brief Method <OnServerDisconnect>b__34_0, addr 0x1815667f0, size 0x70, virtual false, abstract: false, final false
inline ::Mirror::Examples::MultipleMatch::PlayerInfo _OnServerDisconnect_b__34_0(::Mirror::NetworkConnectionToClient*  playerConn) ;

/// @brief Method <OnServerJoinMatch>b__46_0, addr 0x1815667f0, size 0x70, virtual false, abstract: false, final false
inline ::Mirror::Examples::MultipleMatch::PlayerInfo _OnServerJoinMatch_b__46_0(::Mirror::NetworkConnectionToClient*  playerConn) ;

/// @brief Method <OnServerLeaveMatch>b__42_0, addr 0x1815667f0, size 0x70, virtual false, abstract: false, final false
inline ::Mirror::Examples::MultipleMatch::PlayerInfo _OnServerLeaveMatch_b__42_0(::Mirror::NetworkConnectionToClient*  playerConn) ;

/// @brief Method <OnServerPlayerReady>b__41_0, addr 0x1815667f0, size 0x70, virtual false, abstract: false, final false
inline ::Mirror::Examples::MultipleMatch::PlayerInfo _OnServerPlayerReady_b__41_0(::Mirror::NetworkConnectionToClient*  playerConn) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Mirror::Examples::MultipleMatch::CanvasController___c* getStaticF___9() ;

static inline ::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>* getStaticF___9__34_0() ;

static inline ::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>* getStaticF___9__41_0() ;

static inline ::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>* getStaticF___9__42_0() ;

static inline ::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>* getStaticF___9__43_0() ;

static inline ::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>* getStaticF___9__46_0() ;

static inline void setStaticF___9(::Mirror::Examples::MultipleMatch::CanvasController___c*  value) ;

static inline void setStaticF___9__34_0(::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*  value) ;

static inline void setStaticF___9__41_0(::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*  value) ;

static inline void setStaticF___9__42_0(::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*  value) ;

static inline void setStaticF___9__43_0(::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*  value) ;

static inline void setStaticF___9__46_0(::System::Func_2<::Mirror::NetworkConnectionToClient*,::Mirror::Examples::MultipleMatch::PlayerInfo>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasController___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasController___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasController___c(CanvasController___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasController___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasController___c(CanvasController___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19294};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::Examples::MultipleMatch::CanvasController___c) == 0x10, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleMatch
// Dependencies System.Object
namespace Mirror::Examples::MultipleMatch {
// Is value type: false
// CS Name: Mirror.Examples.MultipleMatch.CanvasController/<OnServerDisconnect>d__34
class CORDL_TYPE CanvasController__OnServerDisconnect_d__34 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Mirror::Examples::MultipleMatch::CanvasController>  __4__this;

/// @brief Field conn, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_conn, put=__cordl_internal_set_conn)) ::Mirror::NetworkConnectionToClient*  conn;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181565980, size 0x6c0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Mirror::Examples::MultipleMatch::CanvasController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Mirror::Examples::MultipleMatch::CanvasController>& __cordl_internal_get___4__this() ;

constexpr ::Mirror::NetworkConnectionToClient* const& __cordl_internal_get_conn() const;

constexpr ::Mirror::NetworkConnectionToClient*& __cordl_internal_get_conn() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Mirror::Examples::MultipleMatch::CanvasController>  value) ;

constexpr void __cordl_internal_set_conn(::Mirror::NetworkConnectionToClient*  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasController__OnServerDisconnect_d__34() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasController__OnServerDisconnect_d__34", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasController__OnServerDisconnect_d__34(CanvasController__OnServerDisconnect_d__34 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasController__OnServerDisconnect_d__34", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasController__OnServerDisconnect_d__34(CanvasController__OnServerDisconnect_d__34 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19295};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::MultipleMatch::CanvasController>  _____4__this;

/// @brief Field conn, offset: 0x28, size: 0x8, def value: None
 ::Mirror::NetworkConnectionToClient*  ___conn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34, ___conn) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34) == 0x30, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleMatch
// Dependencies System.Guid, UnityEngine.MonoBehaviour
namespace Mirror::Examples::MultipleMatch {
// Is value type: false
// CS Name: Mirror.Examples.MultipleMatch.CanvasController
class CORDL_TYPE CanvasController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _OnServerDisconnect_d__34 = ::Mirror::Examples::MultipleMatch::CanvasController__OnServerDisconnect_d__34;

using __c = ::Mirror::Examples::MultipleMatch::CanvasController___c;

/// @brief Field OnPlayerDisconnected, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayerDisconnected, put=__cordl_internal_set_OnPlayerDisconnected)) ::System::Action_1<::Mirror::NetworkConnectionToClient*>*  OnPlayerDisconnected;

/// @brief Field createButton, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_createButton, put=__cordl_internal_set_createButton)) ::UnityW<::UnityEngine::UI::Button>  createButton;

/// @brief Field joinButton, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_joinButton, put=__cordl_internal_set_joinButton)) ::UnityW<::UnityEngine::UI::Button>  joinButton;

/// @brief Field lobbyView, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_lobbyView, put=__cordl_internal_set_lobbyView)) ::UnityW<::UnityEngine::GameObject>  lobbyView;

/// @brief Field localJoinedMatch, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_localJoinedMatch, put=__cordl_internal_set_localJoinedMatch)) ::System::Guid  localJoinedMatch;

/// @brief Field localPlayerMatch, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_localPlayerMatch, put=__cordl_internal_set_localPlayerMatch)) ::System::Guid  localPlayerMatch;

/// @brief Field matchConnections, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_matchConnections, put=setStaticF_matchConnections)) ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*>*  matchConnections;

/// @brief Field matchControllerPrefab, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_matchControllerPrefab, put=__cordl_internal_set_matchControllerPrefab)) ::UnityW<::UnityEngine::GameObject>  matchControllerPrefab;

/// @brief Field matchList, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_matchList, put=__cordl_internal_set_matchList)) ::UnityW<::UnityEngine::GameObject>  matchList;

/// @brief Field matchPrefab, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_matchPrefab, put=__cordl_internal_set_matchPrefab)) ::UnityW<::UnityEngine::GameObject>  matchPrefab;

/// @brief Field openMatches, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_openMatches, put=setStaticF_openMatches)) ::System::Collections::Generic::Dictionary_2<::System::Guid,::Mirror::Examples::MultipleMatch::MatchInfo>*  openMatches;

/// @brief Field playerIndex, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerIndex, put=__cordl_internal_set_playerIndex)) int32_t  playerIndex;

/// @brief Field playerInfos, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_playerInfos, put=setStaticF_playerInfos)) ::System::Collections::Generic::Dictionary_2<::Mirror::NetworkConnection*,::Mirror::Examples::MultipleMatch::PlayerInfo>*  playerInfos;

/// @brief Field playerMatches, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_playerMatches, put=setStaticF_playerMatches)) ::System::Collections::Generic::Dictionary_2<::Mirror::NetworkConnectionToClient*,::System::Guid>*  playerMatches;

/// @brief Field roomGUI, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomGUI, put=__cordl_internal_set_roomGUI)) ::UnityW<::Mirror::Examples::MultipleMatch::RoomGUI>  roomGUI;

/// @brief Field roomView, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomView, put=__cordl_internal_set_roomView)) ::UnityW<::UnityEngine::GameObject>  roomView;

/// @brief Field selectedMatch, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_selectedMatch, put=__cordl_internal_set_selectedMatch)) ::System::Guid  selectedMatch;

/// @brief Field toggleGroup, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_toggleGroup, put=__cordl_internal_set_toggleGroup)) ::UnityW<::UnityEngine::UI::ToggleGroup>  toggleGroup;

/// @brief Field waitingConnections, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_waitingConnections, put=setStaticF_waitingConnections)) ::System::Collections::Generic::List_1<::Mirror::NetworkConnectionToClient*>*  waitingConnections;

/// @brief Method InitializeData, addr 0x1815540b0, size 0xf0, virtual false, abstract: false, final false
inline void InitializeData() ;

static inline ::Mirror::Examples::MultipleMatch::CanvasController* New_ctor() ;

/// @brief Method OnClientConnect, addr 0x1815541a0, size 0xf0, virtual false, abstract: false, final false
inline void OnClientConnect() ;

/// @brief Method OnClientDisconnect, addr 0x181554290, size 0x30, virtual false, abstract: false, final false
inline void OnClientDisconnect() ;

/// @brief Method OnClientMatchMessage, addr 0x1815542c0, size 0x260, virtual false, abstract: false, final false
inline void OnClientMatchMessage(::Mirror::Examples::MultipleMatch::ClientMatchMessage  msg) ;

/// @brief Method OnMatchEnded, addr 0x181554520, size 0x60, virtual false, abstract: false, final false
inline void OnMatchEnded() ;

/// @brief Method OnServerCancelMatch, addr 0x181554580, size 0x330, virtual false, abstract: false, final false
inline void OnServerCancelMatch(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnServerCreateMatch, addr 0x1815548b0, size 0x410, virtual false, abstract: false, final false
inline void OnServerCreateMatch(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnServerDisconnect, addr 0x181554cc0, size 0xa0, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* OnServerDisconnect(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnServerJoinMatch, addr 0x181554d60, size 0x4f0, virtual false, abstract: false, final false
inline void OnServerJoinMatch(::Mirror::NetworkConnectionToClient*  conn, ::System::Guid  matchId) ;

/// @brief Method OnServerLeaveMatch, addr 0x181555250, size 0x4c0, virtual false, abstract: false, final false
inline void OnServerLeaveMatch(::Mirror::NetworkConnectionToClient*  conn, ::System::Guid  matchId) ;

/// @brief Method OnServerMatchMessage, addr 0x181555710, size 0x180, virtual false, abstract: false, final false
inline void OnServerMatchMessage(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::Examples::MultipleMatch::ServerMatchMessage  msg) ;

/// @brief Method OnServerPlayerReady, addr 0x181555890, size 0x320, virtual false, abstract: false, final false
inline void OnServerPlayerReady(::Mirror::NetworkConnectionToClient*  conn, ::System::Guid  matchId) ;

/// @brief Method OnServerReady, addr 0x181555bb0, size 0x160, virtual false, abstract: false, final false
inline void OnServerReady(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnServerStartMatch, addr 0x181555d10, size 0x540, virtual false, abstract: false, final false
inline void OnServerStartMatch(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnStartClient, addr 0x181556250, size 0xd0, virtual false, abstract: false, final false
inline void OnStartClient() ;

/// @brief Method OnStartServer, addr 0x181556320, size 0x90, virtual false, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method OnStopClient, addr 0x1815563b0, size 0x80, virtual false, abstract: false, final false
inline void OnStopClient() ;

/// @brief Method OnStopServer, addr 0x181556430, size 0xa0, virtual false, abstract: false, final false
inline void OnStopServer() ;

/// @brief Method RefreshMatchList, addr 0x1815564d0, size 0x5a0, virtual false, abstract: false, final false
inline void RefreshMatchList() ;

/// @brief Method RequestCancelMatch, addr 0x181556a70, size 0x80, virtual false, abstract: false, final false
inline void RequestCancelMatch() ;

/// @brief Method RequestCreateMatch, addr 0x181556af0, size 0x50, virtual false, abstract: false, final false
inline void RequestCreateMatch() ;

/// @brief Method RequestJoinMatch, addr 0x181556b40, size 0x90, virtual false, abstract: false, final false
inline void RequestJoinMatch() ;

/// @brief Method RequestLeaveMatch, addr 0x181556bd0, size 0x90, virtual false, abstract: false, final false
inline void RequestLeaveMatch() ;

/// @brief Method RequestReadyChange, addr 0x181556c60, size 0x110, virtual false, abstract: false, final false
inline void RequestReadyChange() ;

/// @brief Method RequestStartMatch, addr 0x181556d70, size 0x80, virtual false, abstract: false, final false
inline void RequestStartMatch() ;

/// @brief Method ResetCanvas, addr 0x181556df0, size 0x70, virtual false, abstract: false, final false
inline void ResetCanvas() ;

/// @brief Method ResetStatics, addr 0x181556e60, size 0xf0, virtual false, abstract: false, final false
static inline void ResetStatics() ;

/// @brief Method SelectMatch, addr 0x181556f50, size 0x170, virtual false, abstract: false, final false
inline void SelectMatch(::System::Guid  matchId) ;

/// @brief Method SendMatchList, addr 0x1815570c0, size 0x250, virtual false, abstract: false, final false
inline void SendMatchList(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method ShowLobbyView, addr 0x181557310, size 0x2f0, virtual false, abstract: false, final false
inline void ShowLobbyView() ;

/// @brief Method ShowRoomView, addr 0x181557600, size 0x60, virtual false, abstract: false, final false
inline void ShowRoomView() ;

constexpr ::System::Action_1<::Mirror::NetworkConnectionToClient*>* const& __cordl_internal_get_OnPlayerDisconnected() const;

constexpr ::System::Action_1<::Mirror::NetworkConnectionToClient*>*& __cordl_internal_get_OnPlayerDisconnected() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_createButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_createButton() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_joinButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_joinButton() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_lobbyView() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_lobbyView() ;

constexpr ::System::Guid const& __cordl_internal_get_localJoinedMatch() const;

constexpr ::System::Guid& __cordl_internal_get_localJoinedMatch() ;

constexpr ::System::Guid const& __cordl_internal_get_localPlayerMatch() const;

constexpr ::System::Guid& __cordl_internal_get_localPlayerMatch() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_matchControllerPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_matchControllerPrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_matchList() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_matchList() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_matchPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_matchPrefab() ;

constexpr int32_t const& __cordl_internal_get_playerIndex() const;

constexpr int32_t& __cordl_internal_get_playerIndex() ;

constexpr ::UnityW<::Mirror::Examples::MultipleMatch::RoomGUI> const& __cordl_internal_get_roomGUI() const;

constexpr ::UnityW<::Mirror::Examples::MultipleMatch::RoomGUI>& __cordl_internal_get_roomGUI() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_roomView() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_roomView() ;

constexpr ::System::Guid const& __cordl_internal_get_selectedMatch() const;

constexpr ::System::Guid& __cordl_internal_get_selectedMatch() ;

constexpr ::UnityW<::UnityEngine::UI::ToggleGroup> const& __cordl_internal_get_toggleGroup() const;

constexpr ::UnityW<::UnityEngine::UI::ToggleGroup>& __cordl_internal_get_toggleGroup() ;

constexpr void __cordl_internal_set_OnPlayerDisconnected(::System::Action_1<::Mirror::NetworkConnectionToClient*>*  value) ;

constexpr void __cordl_internal_set_createButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set_joinButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set_lobbyView(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_localJoinedMatch(::System::Guid  value) ;

constexpr void __cordl_internal_set_localPlayerMatch(::System::Guid  value) ;

constexpr void __cordl_internal_set_matchControllerPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_matchList(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_matchPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_playerIndex(int32_t  value) ;

constexpr void __cordl_internal_set_roomGUI(::UnityW<::Mirror::Examples::MultipleMatch::RoomGUI>  value) ;

constexpr void __cordl_internal_set_roomView(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_selectedMatch(::System::Guid  value) ;

constexpr void __cordl_internal_set_toggleGroup(::UnityW<::UnityEngine::UI::ToggleGroup>  value) ;

/// @brief Method .ctor, addr 0x1815577e0, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnPlayerDisconnected, addr 0x181557840, size 0x90, virtual false, abstract: false, final false
inline void add_OnPlayerDisconnected(::System::Action_1<::Mirror::NetworkConnectionToClient*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*>* getStaticF_matchConnections() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::Mirror::Examples::MultipleMatch::MatchInfo>* getStaticF_openMatches() ;

static inline ::System::Collections::Generic::Dictionary_2<::Mirror::NetworkConnection*,::Mirror::Examples::MultipleMatch::PlayerInfo>* getStaticF_playerInfos() ;

static inline ::System::Collections::Generic::Dictionary_2<::Mirror::NetworkConnectionToClient*,::System::Guid>* getStaticF_playerMatches() ;

static inline ::System::Collections::Generic::List_1<::Mirror::NetworkConnectionToClient*>* getStaticF_waitingConnections() ;

/// @brief Method remove_OnPlayerDisconnected, addr 0x1815578d0, size 0x90, virtual false, abstract: false, final false
inline void remove_OnPlayerDisconnected(::System::Action_1<::Mirror::NetworkConnectionToClient*>*  value) ;

static inline void setStaticF_matchConnections(::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*>*  value) ;

static inline void setStaticF_openMatches(::System::Collections::Generic::Dictionary_2<::System::Guid,::Mirror::Examples::MultipleMatch::MatchInfo>*  value) ;

static inline void setStaticF_playerInfos(::System::Collections::Generic::Dictionary_2<::Mirror::NetworkConnection*,::Mirror::Examples::MultipleMatch::PlayerInfo>*  value) ;

static inline void setStaticF_playerMatches(::System::Collections::Generic::Dictionary_2<::Mirror::NetworkConnectionToClient*,::System::Guid>*  value) ;

static inline void setStaticF_waitingConnections(::System::Collections::Generic::List_1<::Mirror::NetworkConnectionToClient*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasController(CanvasController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasController(CanvasController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19296};

/// @brief Field OnPlayerDisconnected, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::Mirror::NetworkConnectionToClient*>*  ___OnPlayerDisconnected;

/// @brief Field localPlayerMatch, offset: 0x28, size: 0x10, def value: None
 ::System::Guid  ___localPlayerMatch;

/// @brief Field localJoinedMatch, offset: 0x38, size: 0x10, def value: None
 ::System::Guid  ___localJoinedMatch;

/// @brief Field selectedMatch, offset: 0x48, size: 0x10, def value: None
 ::System::Guid  ___selectedMatch;

/// @brief Field playerIndex, offset: 0x58, size: 0x4, def value: None
 int32_t  ___playerIndex;

/// @brief Field matchList, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___matchList;

/// @brief Field matchPrefab, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___matchPrefab;

/// @brief Field matchControllerPrefab, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___matchControllerPrefab;

/// @brief Field createButton, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___createButton;

/// @brief Field joinButton, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___joinButton;

/// @brief Field lobbyView, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___lobbyView;

/// @brief Field roomView, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___roomView;

/// @brief Field roomGUI, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::MultipleMatch::RoomGUI>  ___roomGUI;

/// @brief Field toggleGroup, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::ToggleGroup>  ___toggleGroup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleMatch::CanvasController, ___OnPlayerDisconnected) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::CanvasController, ___localPlayerMatch) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::CanvasController, ___localJoinedMatch) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::CanvasController, ___selectedMatch) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::CanvasController, ___playerIndex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::CanvasController, ___matchList) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::CanvasController, ___matchPrefab) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::CanvasController, ___matchControllerPrefab) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::CanvasController, ___createButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::CanvasController, ___joinButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::CanvasController, ___lobbyView) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::CanvasController, ___roomView) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::CanvasController, ___roomGUI) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::CanvasController, ___toggleGroup) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleMatch::CanvasController) == 0xa8, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleMatch

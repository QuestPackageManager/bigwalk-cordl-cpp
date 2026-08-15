#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/MatchController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/Examples/MultipleMatch/zzzz__CellValue_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MatchController)
namespace Mirror::Examples::MultipleMatch {
class CanvasController;
}
namespace Mirror::Examples::MultipleMatch {
class CellGUI;
}
namespace Mirror::Examples::MultipleMatch {
struct CellValue;
}
namespace Mirror::Examples::MultipleMatch {
class MatchController__AddPlayersToMatchController_d__17;
}
namespace Mirror::Examples::MultipleMatch {
class MatchController__ServerEndMatch_d__32;
}
namespace Mirror::Examples::MultipleMatch {
struct MatchPlayerData;
}
namespace Mirror {
class NetworkBehaviour;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkIdentity;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace Mirror {
template<typename TKey,typename TValue>
class SyncDictionary_2;
}
namespace Mirror {
template<typename TKey,typename TValue>
struct SyncIDictionary_2_Operation;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
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
class Text;
}
namespace UnityEngine {
class CanvasGroup;
}
// Forward declare root types
namespace Mirror::Examples::MultipleMatch {
class MatchController;
}
namespace Mirror::Examples::MultipleMatch {
class MatchController__AddPlayersToMatchController_d__17;
}
namespace Mirror::Examples::MultipleMatch {
class MatchController__ServerEndMatch_d__32;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::MultipleMatch::MatchController*);
MARK_REF_T(::Mirror::Examples::MultipleMatch::MatchController__AddPlayersToMatchController_d__17*);
MARK_REF_T(::Mirror::Examples::MultipleMatch::MatchController__ServerEndMatch_d__32*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleMatch::MatchController*, "Mirror.Examples.MultipleMatch", "MatchController");
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleMatch::MatchController__AddPlayersToMatchController_d__17*, "Mirror.Examples.MultipleMatch", "MatchController/<AddPlayersToMatchController>d__17");
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleMatch::MatchController__ServerEndMatch_d__32*, "Mirror.Examples.MultipleMatch", "MatchController/<ServerEndMatch>d__32");
// Dependencies System.Object
namespace Mirror::Examples::MultipleMatch {
// Is value type: false
// CS Name: Mirror.Examples.MultipleMatch.MatchController/<AddPlayersToMatchController>d__17
class CORDL_TYPE MatchController__AddPlayersToMatchController_d__17 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Mirror::Examples::MultipleMatch::MatchController>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181565010, size 0x1b0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Mirror::Examples::MultipleMatch::MatchController__AddPlayersToMatchController_d__17* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::Mirror::Examples::MultipleMatch::MatchController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Mirror::Examples::MultipleMatch::MatchController>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Mirror::Examples::MultipleMatch::MatchController>  value) ;

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
constexpr MatchController__AddPlayersToMatchController_d__17() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchController__AddPlayersToMatchController_d__17", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchController__AddPlayersToMatchController_d__17(MatchController__AddPlayersToMatchController_d__17 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchController__AddPlayersToMatchController_d__17", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchController__AddPlayersToMatchController_d__17(MatchController__AddPlayersToMatchController_d__17 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19298};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::MultipleMatch::MatchController>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchController__AddPlayersToMatchController_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchController__AddPlayersToMatchController_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchController__AddPlayersToMatchController_d__17, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleMatch::MatchController__AddPlayersToMatchController_d__17) == 0x28, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleMatch
// Dependencies System.Object
namespace Mirror::Examples::MultipleMatch {
// Is value type: false
// CS Name: Mirror.Examples.MultipleMatch.MatchController/<ServerEndMatch>d__32
class CORDL_TYPE MatchController__ServerEndMatch_d__32 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Mirror::Examples::MultipleMatch::MatchController>  __4__this;

/// @brief Field conn, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_conn, put=__cordl_internal_set_conn)) ::Mirror::NetworkConnectionToClient*  conn;

/// @brief Field disconnected, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_disconnected, put=__cordl_internal_set_disconnected)) bool  disconnected;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181566040, size 0x4a0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Mirror::Examples::MultipleMatch::MatchController__ServerEndMatch_d__32* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::Mirror::Examples::MultipleMatch::MatchController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Mirror::Examples::MultipleMatch::MatchController>& __cordl_internal_get___4__this() ;

constexpr ::Mirror::NetworkConnectionToClient* const& __cordl_internal_get_conn() const;

constexpr ::Mirror::NetworkConnectionToClient*& __cordl_internal_get_conn() ;

constexpr bool const& __cordl_internal_get_disconnected() const;

constexpr bool& __cordl_internal_get_disconnected() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Mirror::Examples::MultipleMatch::MatchController>  value) ;

constexpr void __cordl_internal_set_conn(::Mirror::NetworkConnectionToClient*  value) ;

constexpr void __cordl_internal_set_disconnected(bool  value) ;

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
constexpr MatchController__ServerEndMatch_d__32() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchController__ServerEndMatch_d__32", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchController__ServerEndMatch_d__32(MatchController__ServerEndMatch_d__32 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchController__ServerEndMatch_d__32", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchController__ServerEndMatch_d__32(MatchController__ServerEndMatch_d__32 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19299};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::MultipleMatch::MatchController>  _____4__this;

/// @brief Field disconnected, offset: 0x28, size: 0x1, def value: None
 bool  ___disconnected;

/// @brief Field conn, offset: 0x30, size: 0x8, def value: None
 ::Mirror::NetworkConnectionToClient*  ___conn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchController__ServerEndMatch_d__32, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchController__ServerEndMatch_d__32, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchController__ServerEndMatch_d__32, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchController__ServerEndMatch_d__32, ___disconnected) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchController__ServerEndMatch_d__32, ___conn) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleMatch::MatchController__ServerEndMatch_d__32) == 0x38, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleMatch
// Dependencies Mirror.Examples.MultipleMatch.CellValue, Mirror.NetworkBehaviour
namespace Mirror::Examples::MultipleMatch {
// Is value type: false
// CS Name: Mirror.Examples.MultipleMatch.MatchController
class CORDL_TYPE MatchController : public ::Mirror::NetworkBehaviour {
public:
// Declarations
using _AddPlayersToMatchController_d__17 = ::Mirror::Examples::MultipleMatch::MatchController__AddPlayersToMatchController_d__17;

using _ServerEndMatch_d__32 = ::Mirror::Examples::MultipleMatch::MatchController__ServerEndMatch_d__32;

/// @brief Field MatchCells, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_MatchCells, put=__cordl_internal_set_MatchCells)) ::System::Collections::Generic::Dictionary_2<::Mirror::Examples::MultipleMatch::CellValue,::UnityW<::Mirror::Examples::MultipleMatch::CellGUI>>*  MatchCells;

 __declspec(property(get=get_NetworkcurrentPlayer, put=set_NetworkcurrentPlayer)) ::UnityW<::Mirror::NetworkIdentity>  NetworkcurrentPlayer;

/// @brief Field ___currentPlayerNetId, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get____currentPlayerNetId, put=__cordl_internal_set____currentPlayerNetId)) uint32_t  ___currentPlayerNetId;

/// @brief Field boardScore, offset 0x78, size 0x2 
 __declspec(property(get=__cordl_internal_get_boardScore, put=__cordl_internal_set_boardScore)) ::Mirror::Examples::MultipleMatch::CellValue  boardScore;

/// @brief Field canvasController, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_canvasController, put=__cordl_internal_set_canvasController)) ::UnityW<::Mirror::Examples::MultipleMatch::CanvasController>  canvasController;

/// @brief Field canvasGroup, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_canvasGroup, put=__cordl_internal_set_canvasGroup)) ::UnityW<::UnityEngine::CanvasGroup>  canvasGroup;

/// @brief Field currentPlayer, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentPlayer, put=__cordl_internal_set_currentPlayer)) ::UnityW<::Mirror::NetworkIdentity>  currentPlayer;

/// @brief Field exitButton, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_exitButton, put=__cordl_internal_set_exitButton)) ::UnityW<::UnityEngine::UI::Button>  exitButton;

/// @brief Field gameText, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameText, put=__cordl_internal_set_gameText)) ::UnityW<::UnityEngine::UI::Text>  gameText;

/// @brief Field matchPlayerData, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_matchPlayerData, put=__cordl_internal_set_matchPlayerData)) ::Mirror::SyncDictionary_2<::UnityW<::Mirror::NetworkIdentity>,::Mirror::Examples::MultipleMatch::MatchPlayerData>*  matchPlayerData;

/// @brief Field playAgain, offset 0x7a, size 0x1 
 __declspec(property(get=__cordl_internal_get_playAgain, put=__cordl_internal_set_playAgain)) bool  playAgain;

/// @brief Field playAgainButton, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_playAgainButton, put=__cordl_internal_set_playAgainButton)) ::UnityW<::UnityEngine::UI::Button>  playAgainButton;

/// @brief Field player1, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_player1, put=__cordl_internal_set_player1)) ::UnityW<::Mirror::NetworkIdentity>  player1;

/// @brief Field player2, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_player2, put=__cordl_internal_set_player2)) ::UnityW<::Mirror::NetworkIdentity>  player2;

/// @brief Field startingPlayer, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_startingPlayer, put=__cordl_internal_set_startingPlayer)) ::UnityW<::Mirror::NetworkIdentity>  startingPlayer;

/// @brief Field winCountLocal, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_winCountLocal, put=__cordl_internal_set_winCountLocal)) ::UnityW<::UnityEngine::UI::Text>  winCountLocal;

/// @brief Field winCountOpponent, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_winCountOpponent, put=__cordl_internal_set_winCountOpponent)) ::UnityW<::UnityEngine::UI::Text>  winCountOpponent;

/// @brief Method AddPlayersToMatchController, addr 0x18155a440, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* AddPlayersToMatchController() ;

/// @brief Method Awake, addr 0x18155a490, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckWinner, addr 0x18155a4c0, size 0xb0, virtual false, abstract: false, final false
inline bool CheckWinner(::Mirror::Examples::MultipleMatch::CellValue  currentScore) ;

/// @brief Method CmdMakePlay, addr 0x18155a570, size 0xc0, virtual false, abstract: false, final false
inline void CmdMakePlay(::Mirror::Examples::MultipleMatch::CellValue  cellValue, ::Mirror::NetworkConnectionToClient*  sender) ;

/// @brief Method CmdPlayAgain, addr 0x18155a630, size 0xb0, virtual false, abstract: false, final false
inline void CmdPlayAgain(::Mirror::NetworkConnectionToClient*  sender) ;

/// @brief Method CmdRequestExitGame, addr 0x18155a6e0, size 0xb0, virtual false, abstract: false, final false
inline void CmdRequestExitGame(::Mirror::NetworkConnectionToClient*  sender) ;

/// @brief Method DeserializeSyncVars, addr 0x18155a790, size 0x150, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method InvokeUserCode_CmdMakePlay__CellValue__NetworkConnectionToClient, addr 0x18155a8e0, size 0x110, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdMakePlay__CellValue__NetworkConnectionToClient(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdPlayAgain__NetworkConnectionToClient, addr 0x18155a9f0, size 0xe0, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdPlayAgain__NetworkConnectionToClient(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdRequestExitGame__NetworkConnectionToClient, addr 0x18155aad0, size 0xf0, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdRequestExitGame__NetworkConnectionToClient(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RpcExitGame, addr 0x18155abc0, size 0xd0, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcExitGame(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RpcRestartGame, addr 0x18155ac90, size 0x1a0, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcRestartGame(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RpcShowWinner__NetworkIdentity, addr 0x18155ae30, size 0xd0, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcShowWinner__NetworkIdentity(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RpcUpdateCell__CellValue__NetworkIdentity, addr 0x18155af00, size 0xe0, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcUpdateCell__CellValue__NetworkIdentity(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::Examples::MultipleMatch::MatchController* New_ctor() ;

/// @brief Method OnPlayerDisconnected, addr 0x18155afe0, size 0xa0, virtual false, abstract: false, final false
inline void OnPlayerDisconnected(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnStartClient, addr 0x18155b080, size 0x100, virtual true, abstract: false, final false
inline void OnStartClient() ;

/// @brief Method OnStartServer, addr 0x18155b180, size 0x50, virtual true, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method RequestExitGame, addr 0x18155b1d0, size 0x120, virtual false, abstract: false, final false
inline void RequestExitGame() ;

/// @brief Method RequestPlayAgain, addr 0x18155b2f0, size 0xf0, virtual false, abstract: false, final false
inline void RequestPlayAgain() ;

/// @brief Method RestartGame, addr 0x18155b3e0, size 0x310, virtual false, abstract: false, final false
inline void RestartGame() ;

/// @brief Method RpcExitGame, addr 0x18155b6f0, size 0xb0, virtual false, abstract: false, final false
inline void RpcExitGame() ;

/// @brief Method RpcRestartGame, addr 0x18155b7a0, size 0xb0, virtual false, abstract: false, final false
inline void RpcRestartGame() ;

/// @brief Method RpcShowWinner, addr 0x18155b850, size 0xc0, virtual false, abstract: false, final false
inline void RpcShowWinner(::Mirror::NetworkIdentity*  winner) ;

/// @brief Method RpcUpdateCell, addr 0x18155b910, size 0xe0, virtual false, abstract: false, final false
inline void RpcUpdateCell(::Mirror::Examples::MultipleMatch::CellValue  cellValue, ::Mirror::NetworkIdentity*  player) ;

/// @brief Method SerializeSyncVars, addr 0x18155b9f0, size 0x70, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method ServerEndMatch, addr 0x18155ba60, size 0xb0, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ServerEndMatch(::Mirror::NetworkConnectionToClient*  conn, bool  disconnected) ;

/// @brief Method UpdateGameUI, addr 0x18155bb10, size 0x110, virtual false, abstract: false, final false
inline void UpdateGameUI(::Mirror::NetworkIdentity*  _, ::Mirror::NetworkIdentity*  newPlayerTurn) ;

/// @brief Method UpdateWins, addr 0x18155bc20, size 0x150, virtual false, abstract: false, final false
inline void UpdateWins(::Mirror::SyncIDictionary_2_Operation<::UnityW<::Mirror::NetworkIdentity>,::Mirror::Examples::MultipleMatch::MatchPlayerData>  op, ::Mirror::NetworkIdentity*  key, ::Mirror::Examples::MultipleMatch::MatchPlayerData  matchPlayerData) ;

/// @brief Method UserCode_CmdMakePlay__CellValue__NetworkConnectionToClient, addr 0x18155bd70, size 0x3e0, virtual false, abstract: false, final false
inline void UserCode_CmdMakePlay__CellValue__NetworkConnectionToClient(::Mirror::Examples::MultipleMatch::CellValue  cellValue, ::Mirror::NetworkConnectionToClient*  sender) ;

/// @brief Method UserCode_CmdPlayAgain__NetworkConnectionToClient, addr 0x18155c150, size 0x20, virtual false, abstract: false, final false
inline void UserCode_CmdPlayAgain__NetworkConnectionToClient(::Mirror::NetworkConnectionToClient*  sender) ;

/// @brief Method UserCode_CmdRequestExitGame__NetworkConnectionToClient, addr 0x18155c170, size 0x30, virtual false, abstract: false, final false
inline void UserCode_CmdRequestExitGame__NetworkConnectionToClient(::Mirror::NetworkConnectionToClient*  sender) ;

/// @brief Method UserCode_RpcExitGame, addr 0x18155c1a0, size 0x70, virtual false, abstract: false, final false
inline void UserCode_RpcExitGame() ;

/// @brief Method UserCode_RpcRestartGame, addr 0x18155c210, size 0xf0, virtual false, abstract: false, final false
inline void UserCode_RpcRestartGame() ;

/// @brief Method UserCode_RpcShowWinner__NetworkIdentity, addr 0x18155c300, size 0x250, virtual false, abstract: false, final false
inline void UserCode_RpcShowWinner__NetworkIdentity(::Mirror::NetworkIdentity*  winner) ;

/// @brief Method UserCode_RpcUpdateCell__CellValue__NetworkIdentity, addr 0x18155c550, size 0x40, virtual false, abstract: false, final false
inline void UserCode_RpcUpdateCell__CellValue__NetworkIdentity(::Mirror::Examples::MultipleMatch::CellValue  cellValue, ::Mirror::NetworkIdentity*  player) ;

constexpr ::System::Collections::Generic::Dictionary_2<::Mirror::Examples::MultipleMatch::CellValue,::UnityW<::Mirror::Examples::MultipleMatch::CellGUI>>* const& __cordl_internal_get_MatchCells() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Mirror::Examples::MultipleMatch::CellValue,::UnityW<::Mirror::Examples::MultipleMatch::CellGUI>>*& __cordl_internal_get_MatchCells() ;

constexpr uint32_t const& __cordl_internal_get____currentPlayerNetId() const;

constexpr uint32_t& __cordl_internal_get____currentPlayerNetId() ;

constexpr ::Mirror::Examples::MultipleMatch::CellValue const& __cordl_internal_get_boardScore() const;

constexpr ::Mirror::Examples::MultipleMatch::CellValue& __cordl_internal_get_boardScore() ;

constexpr ::UnityW<::Mirror::Examples::MultipleMatch::CanvasController> const& __cordl_internal_get_canvasController() const;

constexpr ::UnityW<::Mirror::Examples::MultipleMatch::CanvasController>& __cordl_internal_get_canvasController() ;

constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get_canvasGroup() const;

constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get_canvasGroup() ;

constexpr ::UnityW<::Mirror::NetworkIdentity> const& __cordl_internal_get_currentPlayer() const;

constexpr ::UnityW<::Mirror::NetworkIdentity>& __cordl_internal_get_currentPlayer() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_exitButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_exitButton() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_gameText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_gameText() ;

constexpr ::Mirror::SyncDictionary_2<::UnityW<::Mirror::NetworkIdentity>,::Mirror::Examples::MultipleMatch::MatchPlayerData>* const& __cordl_internal_get_matchPlayerData() const;

constexpr ::Mirror::SyncDictionary_2<::UnityW<::Mirror::NetworkIdentity>,::Mirror::Examples::MultipleMatch::MatchPlayerData>*& __cordl_internal_get_matchPlayerData() ;

constexpr bool const& __cordl_internal_get_playAgain() const;

constexpr bool& __cordl_internal_get_playAgain() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_playAgainButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_playAgainButton() ;

constexpr ::UnityW<::Mirror::NetworkIdentity> const& __cordl_internal_get_player1() const;

constexpr ::UnityW<::Mirror::NetworkIdentity>& __cordl_internal_get_player1() ;

constexpr ::UnityW<::Mirror::NetworkIdentity> const& __cordl_internal_get_player2() const;

constexpr ::UnityW<::Mirror::NetworkIdentity>& __cordl_internal_get_player2() ;

constexpr ::UnityW<::Mirror::NetworkIdentity> const& __cordl_internal_get_startingPlayer() const;

constexpr ::UnityW<::Mirror::NetworkIdentity>& __cordl_internal_get_startingPlayer() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_winCountLocal() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_winCountLocal() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_winCountOpponent() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_winCountOpponent() ;

constexpr void __cordl_internal_set_MatchCells(::System::Collections::Generic::Dictionary_2<::Mirror::Examples::MultipleMatch::CellValue,::UnityW<::Mirror::Examples::MultipleMatch::CellGUI>>*  value) ;

constexpr void __cordl_internal_set____currentPlayerNetId(uint32_t  value) ;

constexpr void __cordl_internal_set_boardScore(::Mirror::Examples::MultipleMatch::CellValue  value) ;

constexpr void __cordl_internal_set_canvasController(::UnityW<::Mirror::Examples::MultipleMatch::CanvasController>  value) ;

constexpr void __cordl_internal_set_canvasGroup(::UnityW<::UnityEngine::CanvasGroup>  value) ;

constexpr void __cordl_internal_set_currentPlayer(::UnityW<::Mirror::NetworkIdentity>  value) ;

constexpr void __cordl_internal_set_exitButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set_gameText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_matchPlayerData(::Mirror::SyncDictionary_2<::UnityW<::Mirror::NetworkIdentity>,::Mirror::Examples::MultipleMatch::MatchPlayerData>*  value) ;

constexpr void __cordl_internal_set_playAgain(bool  value) ;

constexpr void __cordl_internal_set_playAgainButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set_player1(::UnityW<::Mirror::NetworkIdentity>  value) ;

constexpr void __cordl_internal_set_player2(::UnityW<::Mirror::NetworkIdentity>  value) ;

constexpr void __cordl_internal_set_startingPlayer(::UnityW<::Mirror::NetworkIdentity>  value) ;

constexpr void __cordl_internal_set_winCountLocal(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_winCountOpponent(::UnityW<::UnityEngine::UI::Text>  value) ;

/// @brief Method .ctor, addr 0x18155c7d0, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NetworkcurrentPlayer, addr 0x18155c860, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::Mirror::NetworkIdentity> get_NetworkcurrentPlayer() ;

/// @brief Method set_NetworkcurrentPlayer, addr 0x18155c880, size 0x100, virtual false, abstract: false, final false
inline void set_NetworkcurrentPlayer(::ByRefConst<::Mirror::NetworkIdentity*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatchController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchController(MatchController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchController(MatchController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19300};

/// @brief Field matchPlayerData, offset: 0x68, size: 0x8, def value: None
 ::Mirror::SyncDictionary_2<::UnityW<::Mirror::NetworkIdentity>,::Mirror::Examples::MultipleMatch::MatchPlayerData>*  ___matchPlayerData;

/// @brief Field MatchCells, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Mirror::Examples::MultipleMatch::CellValue,::UnityW<::Mirror::Examples::MultipleMatch::CellGUI>>*  ___MatchCells;

/// @brief Field boardScore, offset: 0x78, size: 0x2, def value: None
 ::Mirror::Examples::MultipleMatch::CellValue  ___boardScore;

/// @brief Field playAgain, offset: 0x7a, size: 0x1, def value: None
 bool  ___playAgain;

/// @brief Field canvasGroup, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CanvasGroup>  ___canvasGroup;

/// @brief Field gameText, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___gameText;

/// @brief Field exitButton, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___exitButton;

/// @brief Field playAgainButton, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___playAgainButton;

/// @brief Field winCountLocal, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___winCountLocal;

/// @brief Field winCountOpponent, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___winCountOpponent;

/// @brief Field canvasController, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::MultipleMatch::CanvasController>  ___canvasController;

/// @brief Field player1, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::Mirror::NetworkIdentity>  ___player1;

/// @brief Field player2, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::Mirror::NetworkIdentity>  ___player2;

/// @brief Field startingPlayer, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::Mirror::NetworkIdentity>  ___startingPlayer;

/// @brief Field currentPlayer, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::Mirror::NetworkIdentity>  ___currentPlayer;

/// @brief Field ___currentPlayerNetId, offset: 0xd8, size: 0x4, def value: None
 uint32_t  ______currentPlayerNetId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchController, ___matchPlayerData) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchController, ___MatchCells) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchController, ___boardScore) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchController, ___playAgain) == 0x7a, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchController, ___canvasGroup) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchController, ___gameText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchController, ___exitButton) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchController, ___playAgainButton) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchController, ___winCountLocal) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchController, ___winCountOpponent) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchController, ___canvasController) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchController, ___player1) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchController, ___player2) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchController, ___startingPlayer) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchController, ___currentPlayer) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchController, ______currentPlayerNetId) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleMatch::MatchController) == 0xe0, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleMatch

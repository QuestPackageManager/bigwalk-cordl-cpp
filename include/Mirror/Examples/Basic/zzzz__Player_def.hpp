#pragma once
// IWYU pragma private; include "Mirror/Examples/Basic/Player.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Player)
namespace Mirror::Examples::Basic {
class PlayerUI;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Mirror::Examples::Basic {
class Player;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::Basic::Player*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::Basic::Player*, "Mirror.Examples.Basic", "Player");
// Dependencies Mirror.NetworkBehaviour, UnityEngine.Color32
namespace Mirror::Examples::Basic {
// Is value type: false
// CS Name: Mirror.Examples.Basic.Player
class CORDL_TYPE Player : public ::Mirror::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_NetworkplayerColor, put=set_NetworkplayerColor)) ::UnityEngine::Color32  NetworkplayerColor;

 __declspec(property(get=get_NetworkplayerData, put=set_NetworkplayerData)) uint16_t  NetworkplayerData;

 __declspec(property(get=get_NetworkplayerNumber, put=set_NetworkplayerNumber)) uint8_t  NetworkplayerNumber;

/// @brief Field OnPlayerColorChanged, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayerColorChanged, put=__cordl_internal_set_OnPlayerColorChanged)) ::System::Action_1<::UnityEngine::Color32>*  OnPlayerColorChanged;

/// @brief Field OnPlayerDataChanged, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayerDataChanged, put=__cordl_internal_set_OnPlayerDataChanged)) ::System::Action_1<uint16_t>*  OnPlayerDataChanged;

/// @brief Field OnPlayerNumberChanged, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayerNumberChanged, put=__cordl_internal_set_OnPlayerNumberChanged)) ::System::Action_1<uint8_t>*  OnPlayerNumberChanged;

/// @brief Field playerColor, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerColor, put=__cordl_internal_set_playerColor)) ::UnityEngine::Color32  playerColor;

/// @brief Field playerData, offset 0xa0, size 0x2 
 __declspec(property(get=__cordl_internal_get_playerData, put=__cordl_internal_set_playerData)) uint16_t  playerData;

/// @brief Field playerNumber, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_playerNumber, put=__cordl_internal_set_playerNumber)) uint8_t  playerNumber;

/// @brief Field playerUI, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerUI, put=__cordl_internal_set_playerUI)) ::UnityW<::Mirror::Examples::Basic::PlayerUI>  playerUI;

/// @brief Field playerUIObject, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerUIObject, put=__cordl_internal_set_playerUIObject)) ::UnityW<::UnityEngine::GameObject>  playerUIObject;

/// @brief Field playerUIPrefab, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerUIPrefab, put=__cordl_internal_set_playerUIPrefab)) ::UnityW<::UnityEngine::GameObject>  playerUIPrefab;

/// @brief Field playersList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_playersList, put=setStaticF_playersList)) ::System::Collections::Generic::List_1<::UnityW<::Mirror::Examples::Basic::Player>>*  playersList;

/// @brief Method DeserializeSyncVars, addr 0x1815606c0, size 0x320, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::Examples::Basic::Player* New_ctor() ;

/// @brief Method OnStartClient, addr 0x181560d30, size 0x1b0, virtual true, abstract: false, final false
inline void OnStartClient() ;

/// @brief Method OnStartLocalPlayer, addr 0x181560ee0, size 0x90, virtual true, abstract: false, final false
inline void OnStartLocalPlayer() ;

/// @brief Method OnStartServer, addr 0x1815611b0, size 0x190, virtual true, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method OnStopClient, addr 0x181561340, size 0x60, virtual true, abstract: false, final false
inline void OnStopClient() ;

/// @brief Method OnStopLocalPlayer, addr 0x1815613e0, size 0x50, virtual true, abstract: false, final false
inline void OnStopLocalPlayer() ;

/// @brief Method OnStopServer, addr 0x181561430, size 0x60, virtual true, abstract: false, final false
inline void OnStopServer() ;

/// @brief Method PlayerColorChanged, addr 0x181561490, size 0x20, virtual false, abstract: false, final false
inline void PlayerColorChanged(::UnityEngine::Color32  _, ::UnityEngine::Color32  newPlayerColor) ;

/// @brief Method PlayerDataChanged, addr 0x1815614b0, size 0x30, virtual false, abstract: false, final false
inline void PlayerDataChanged(uint16_t  _, uint16_t  newPlayerData) ;

/// @brief Method PlayerNumberChanged, addr 0x1815614e0, size 0x30, virtual false, abstract: false, final false
inline void PlayerNumberChanged(uint8_t  _, uint8_t  newPlayerNumber) ;

/// @brief Method ResetPlayerNumbers, addr 0x181561510, size 0x220, virtual false, abstract: false, final false
static inline void ResetPlayerNumbers() ;

/// @brief Method SerializeSyncVars, addr 0x181561730, size 0xa0, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method UpdateData, addr 0x181561870, size 0x60, virtual false, abstract: false, final false
inline void UpdateData() ;

constexpr ::System::Action_1<::UnityEngine::Color32>* const& __cordl_internal_get_OnPlayerColorChanged() const;

constexpr ::System::Action_1<::UnityEngine::Color32>*& __cordl_internal_get_OnPlayerColorChanged() ;

constexpr ::System::Action_1<uint16_t>* const& __cordl_internal_get_OnPlayerDataChanged() const;

constexpr ::System::Action_1<uint16_t>*& __cordl_internal_get_OnPlayerDataChanged() ;

constexpr ::System::Action_1<uint8_t>* const& __cordl_internal_get_OnPlayerNumberChanged() const;

constexpr ::System::Action_1<uint8_t>*& __cordl_internal_get_OnPlayerNumberChanged() ;

constexpr ::UnityEngine::Color32 const& __cordl_internal_get_playerColor() const;

constexpr ::UnityEngine::Color32& __cordl_internal_get_playerColor() ;

constexpr uint16_t const& __cordl_internal_get_playerData() const;

constexpr uint16_t& __cordl_internal_get_playerData() ;

constexpr uint8_t const& __cordl_internal_get_playerNumber() const;

constexpr uint8_t& __cordl_internal_get_playerNumber() ;

constexpr ::UnityW<::Mirror::Examples::Basic::PlayerUI> const& __cordl_internal_get_playerUI() const;

constexpr ::UnityW<::Mirror::Examples::Basic::PlayerUI>& __cordl_internal_get_playerUI() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_playerUIObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_playerUIObject() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_playerUIPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_playerUIPrefab() ;

constexpr void __cordl_internal_set_OnPlayerColorChanged(::System::Action_1<::UnityEngine::Color32>*  value) ;

constexpr void __cordl_internal_set_OnPlayerDataChanged(::System::Action_1<uint16_t>*  value) ;

constexpr void __cordl_internal_set_OnPlayerNumberChanged(::System::Action_1<uint8_t>*  value) ;

constexpr void __cordl_internal_set_playerColor(::UnityEngine::Color32  value) ;

constexpr void __cordl_internal_set_playerData(uint16_t  value) ;

constexpr void __cordl_internal_set_playerNumber(uint8_t  value) ;

constexpr void __cordl_internal_set_playerUI(::UnityW<::Mirror::Examples::Basic::PlayerUI>  value) ;

constexpr void __cordl_internal_set_playerUIObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_playerUIPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x181561d40, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnPlayerColorChanged, addr 0x181561d80, size 0x90, virtual false, abstract: false, final false
inline void add_OnPlayerColorChanged(::System::Action_1<::UnityEngine::Color32>*  value) ;

/// @brief Method add_OnPlayerDataChanged, addr 0x181561e10, size 0x90, virtual false, abstract: false, final false
inline void add_OnPlayerDataChanged(::System::Action_1<uint16_t>*  value) ;

/// @brief Method add_OnPlayerNumberChanged, addr 0x181561ea0, size 0x90, virtual false, abstract: false, final false
inline void add_OnPlayerNumberChanged(::System::Action_1<uint8_t>*  value) ;

static inline ::System::Collections::Generic::List_1<::UnityW<::Mirror::Examples::Basic::Player>>* getStaticF_playersList() ;

/// @brief Method get_NetworkplayerColor, addr 0x181561f30, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Color32 get_NetworkplayerColor() ;

/// @brief Method get_NetworkplayerData, addr 0x181561f40, size 0x10, virtual false, abstract: false, final false
inline uint16_t get_NetworkplayerData() ;

/// @brief Method get_NetworkplayerNumber, addr 0x180310e70, size 0x10, virtual false, abstract: false, final false
inline uint8_t get_NetworkplayerNumber() ;

/// @brief Method remove_OnPlayerColorChanged, addr 0x181561f50, size 0x90, virtual false, abstract: false, final false
inline void remove_OnPlayerColorChanged(::System::Action_1<::UnityEngine::Color32>*  value) ;

/// @brief Method remove_OnPlayerDataChanged, addr 0x181561fe0, size 0x90, virtual false, abstract: false, final false
inline void remove_OnPlayerDataChanged(::System::Action_1<uint16_t>*  value) ;

/// @brief Method remove_OnPlayerNumberChanged, addr 0x181562070, size 0x90, virtual false, abstract: false, final false
inline void remove_OnPlayerNumberChanged(::System::Action_1<uint8_t>*  value) ;

static inline void setStaticF_playersList(::System::Collections::Generic::List_1<::UnityW<::Mirror::Examples::Basic::Player>>*  value) ;

/// @brief Method set_NetworkplayerColor, addr 0x181562180, size 0x70, virtual false, abstract: false, final false
inline void set_NetworkplayerColor(::ByRefConst<::UnityEngine::Color32>  value) ;

/// @brief Method set_NetworkplayerData, addr 0x1815621f0, size 0x120, virtual false, abstract: false, final false
inline void set_NetworkplayerData(::ByRefConst<uint16_t>  value) ;

/// @brief Method set_NetworkplayerNumber, addr 0x181562310, size 0x120, virtual false, abstract: false, final false
inline void set_NetworkplayerNumber(::ByRefConst<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Player() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Player", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Player(Player && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Player", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Player(Player const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19347};

/// @brief Field OnPlayerNumberChanged, offset: 0x68, size: 0x8, def value: None
 ::System::Action_1<uint8_t>*  ___OnPlayerNumberChanged;

/// @brief Field OnPlayerColorChanged, offset: 0x70, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Color32>*  ___OnPlayerColorChanged;

/// @brief Field OnPlayerDataChanged, offset: 0x78, size: 0x8, def value: None
 ::System::Action_1<uint16_t>*  ___OnPlayerDataChanged;

/// @brief Field playerUIPrefab, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___playerUIPrefab;

/// @brief Field playerUIObject, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___playerUIObject;

/// @brief Field playerUI, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::Basic::PlayerUI>  ___playerUI;

/// @brief Field playerNumber, offset: 0x98, size: 0x1, def value: None
 uint8_t  ___playerNumber;

/// @brief Field playerColor, offset: 0x9c, size: 0x4, def value: None
 ::UnityEngine::Color32  ___playerColor;

/// @brief Field playerData, offset: 0xa0, size: 0x2, def value: None
 uint16_t  ___playerData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::Basic::Player, ___OnPlayerNumberChanged) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Basic::Player, ___OnPlayerColorChanged) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Basic::Player, ___OnPlayerDataChanged) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Basic::Player, ___playerUIPrefab) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Basic::Player, ___playerUIObject) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Basic::Player, ___playerUI) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Basic::Player, ___playerNumber) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Basic::Player, ___playerColor) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Basic::Player, ___playerData) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::Basic::Player) == 0xa8, "Size mismatch!");

} // namespace end def Mirror::Examples::Basic

#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/RoomGUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(RoomGUI)
namespace Mirror::Examples::MultipleMatch {
struct PlayerInfo;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Mirror::Examples::MultipleMatch {
class RoomGUI;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::MultipleMatch::RoomGUI*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleMatch::RoomGUI*, "Mirror.Examples.MultipleMatch", "RoomGUI");
// Dependencies UnityEngine.MonoBehaviour
namespace Mirror::Examples::MultipleMatch {
// Is value type: false
// CS Name: Mirror.Examples.MultipleMatch.RoomGUI
class CORDL_TYPE RoomGUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field cancelButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancelButton, put=__cordl_internal_set_cancelButton)) ::UnityW<::UnityEngine::GameObject>  cancelButton;

/// @brief Field leaveButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_leaveButton, put=__cordl_internal_set_leaveButton)) ::UnityW<::UnityEngine::GameObject>  leaveButton;

/// @brief Field owner, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_owner, put=__cordl_internal_set_owner)) bool  owner;

/// @brief Field playerList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerList, put=__cordl_internal_set_playerList)) ::UnityW<::UnityEngine::GameObject>  playerList;

/// @brief Field playerPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerPrefab, put=__cordl_internal_set_playerPrefab)) ::UnityW<::UnityEngine::GameObject>  playerPrefab;

/// @brief Field startButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_startButton, put=__cordl_internal_set_startButton)) ::UnityW<::UnityEngine::UI::Button>  startButton;

static inline ::Mirror::Examples::MultipleMatch::RoomGUI* New_ctor() ;

/// @brief Method RefreshRoomPlayers, addr 0x181563220, size 0x4a0, virtual false, abstract: false, final false
inline void RefreshRoomPlayers(::ArrayW<::Mirror::Examples::MultipleMatch::PlayerInfo>  playerInfos) ;

/// @brief Method SetOwner, addr 0x1815636c0, size 0x60, virtual false, abstract: false, final false
inline void SetOwner(bool  owner) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_cancelButton() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_cancelButton() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_leaveButton() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_leaveButton() ;

constexpr bool const& __cordl_internal_get_owner() const;

constexpr bool& __cordl_internal_get_owner() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_playerList() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_playerList() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_playerPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_playerPrefab() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_startButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_startButton() ;

constexpr void __cordl_internal_set_cancelButton(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_leaveButton(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_owner(bool  value) ;

constexpr void __cordl_internal_set_playerList(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_playerPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_startButton(::UnityW<::UnityEngine::UI::Button>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoomGUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoomGUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RoomGUI(RoomGUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoomGUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoomGUI(RoomGUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19313};

/// @brief Field playerList, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___playerList;

/// @brief Field playerPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___playerPrefab;

/// @brief Field cancelButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___cancelButton;

/// @brief Field leaveButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___leaveButton;

/// @brief Field startButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___startButton;

/// @brief Field owner, offset: 0x48, size: 0x1, def value: None
 bool  ___owner;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleMatch::RoomGUI, ___playerList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::RoomGUI, ___playerPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::RoomGUI, ___cancelButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::RoomGUI, ___leaveButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::RoomGUI, ___startButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::RoomGUI, ___owner) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleMatch::RoomGUI) == 0x50, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleMatch

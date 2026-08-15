#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/PlayerGUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PlayerGUI)
namespace Mirror::Examples::MultipleMatch {
struct PlayerInfo;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace Mirror::Examples::MultipleMatch {
class PlayerGUI;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::MultipleMatch::PlayerGUI*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleMatch::PlayerGUI*, "Mirror.Examples.MultipleMatch", "PlayerGUI");
// Dependencies UnityEngine.MonoBehaviour
namespace Mirror::Examples::MultipleMatch {
// Is value type: false
// CS Name: Mirror.Examples.MultipleMatch.PlayerGUI
class CORDL_TYPE PlayerGUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field playerName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerName, put=__cordl_internal_set_playerName)) ::UnityW<::UnityEngine::UI::Text>  playerName;

static inline ::Mirror::Examples::MultipleMatch::PlayerGUI* New_ctor() ;

/// @brief Method SetPlayerInfo, addr 0x18155f760, size 0x140, virtual false, abstract: false, final false
inline void SetPlayerInfo(::Mirror::Examples::MultipleMatch::PlayerInfo  info) ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_playerName() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_playerName() ;

constexpr void __cordl_internal_set_playerName(::UnityW<::UnityEngine::UI::Text>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerGUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerGUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerGUI(PlayerGUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerGUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerGUI(PlayerGUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19312};

/// @brief Field playerName, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___playerName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleMatch::PlayerGUI, ___playerName) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleMatch::PlayerGUI) == 0x28, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleMatch

#pragma once
// IWYU pragma private; include "Mirror/Examples/Basic/PlayerUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerUI)
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace Mirror::Examples::Basic {
class PlayerUI;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::Basic::PlayerUI*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::Basic::PlayerUI*, "Mirror.Examples.Basic", "PlayerUI");
// Dependencies UnityEngine.MonoBehaviour
namespace Mirror::Examples::Basic {
// Is value type: false
// CS Name: Mirror.Examples.Basic.PlayerUI
class CORDL_TYPE PlayerUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field image, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_image, put=__cordl_internal_set_image)) ::UnityW<::UnityEngine::UI::Image>  image;

/// @brief Field playerDataText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerDataText, put=__cordl_internal_set_playerDataText)) ::UnityW<::UnityEngine::UI::Text>  playerDataText;

/// @brief Field playerNameText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerNameText, put=__cordl_internal_set_playerNameText)) ::UnityW<::UnityEngine::UI::Text>  playerNameText;

static inline ::Mirror::Examples::Basic::PlayerUI* New_ctor() ;

/// @brief Method OnPlayerColorChanged, addr 0x181560180, size 0xb0, virtual false, abstract: false, final false
inline void OnPlayerColorChanged(::UnityEngine::Color32  newPlayerColor) ;

/// @brief Method OnPlayerDataChanged, addr 0x181560230, size 0x60, virtual false, abstract: false, final false
inline void OnPlayerDataChanged(uint16_t  newPlayerData) ;

/// @brief Method OnPlayerNumberChanged, addr 0x181560290, size 0x60, virtual false, abstract: false, final false
inline void OnPlayerNumberChanged(uint8_t  newPlayerNumber) ;

/// @brief Method SetLocalPlayer, addr 0x1815602f0, size 0x40, virtual false, abstract: false, final false
inline void SetLocalPlayer() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_image() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_image() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_playerDataText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_playerDataText() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_playerNameText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_playerNameText() ;

constexpr void __cordl_internal_set_image(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_playerDataText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_playerNameText(::UnityW<::UnityEngine::UI::Text>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerUI(PlayerUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerUI(PlayerUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19348};

/// @brief Field image, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___image;

/// @brief Field playerNameText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___playerNameText;

/// @brief Field playerDataText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___playerDataText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::Basic::PlayerUI, ___image) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Basic::PlayerUI, ___playerNameText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Basic::PlayerUI, ___playerDataText) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::Basic::PlayerUI) == 0x38, "Size mismatch!");

} // namespace end def Mirror::Examples::Basic

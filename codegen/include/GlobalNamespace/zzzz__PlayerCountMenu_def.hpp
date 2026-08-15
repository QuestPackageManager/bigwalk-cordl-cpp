#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerCountMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PlayerCountMenu)
namespace GlobalNamespace {
struct PlayerCount;
}
namespace GlobalNamespace {
class SettingsRow;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerCountMenu;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerCountMenu*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerCountMenu*, "", "PlayerCountMenu");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerCountMenu
class CORDL_TYPE PlayerCountMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field PlayButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayButton, put=__cordl_internal_set_PlayButton)) ::UnityW<::UnityEngine::GameObject>  PlayButton;

/// @brief Field description2, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_description2, put=__cordl_internal_set_description2)) ::UnityW<::UnityEngine::Transform>  description2;

/// @brief Field description3, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_description3, put=__cordl_internal_set_description3)) ::UnityW<::UnityEngine::Transform>  description3;

/// @brief Field description4, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_description4, put=__cordl_internal_set_description4)) ::UnityW<::UnityEngine::Transform>  description4;

/// @brief Field settingsRow, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_settingsRow, put=__cordl_internal_set_settingsRow)) ::UnityW<::GlobalNamespace::SettingsRow>  settingsRow;

/// @brief Method ActionBack, addr 0x180433620, size 0x70, virtual false, abstract: false, final false
inline void ActionBack() ;

/// @brief Method ActionGoToSessionOptions, addr 0x180439360, size 0x70, virtual false, abstract: false, final false
inline void ActionGoToSessionOptions() ;

/// @brief Method ActionProceed, addr 0x1804393d0, size 0x150, virtual false, abstract: false, final false
inline void ActionProceed() ;

/// @brief Method Back, addr 0x180433620, size 0x70, virtual false, abstract: false, final false
inline void Back() ;

/// @brief Method ClearPlayerCount, addr 0x180439520, size 0x40, virtual false, abstract: false, final false
inline void ClearPlayerCount() ;

/// @brief Method GoToHostConfirmMenu, addr 0x180433620, size 0x70, virtual false, abstract: false, final false
inline void GoToHostConfirmMenu() ;

/// @brief Method GoToLoadingMenu, addr 0x180431440, size 0x70, virtual false, abstract: false, final false
inline void GoToLoadingMenu() ;

/// @brief Method GoToSessionOptions, addr 0x180439360, size 0x70, virtual false, abstract: false, final false
inline void GoToSessionOptions() ;

static inline ::GlobalNamespace::PlayerCountMenu* New_ctor() ;

/// @brief Method OnPlayerCountChange, addr 0x180439560, size 0xa0, virtual false, abstract: false, final false
inline void OnPlayerCountChange(::GlobalNamespace::PlayerCount  playerCount) ;

/// @brief Method OnSelectPlayerCount, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnSelectPlayerCount() ;

/// @brief Method SetPlayerCount, addr 0x180439600, size 0x20, virtual false, abstract: false, final false
inline void SetPlayerCount(::GlobalNamespace::PlayerCount  playerCount) ;

/// @brief Method Update, addr 0x1804334e0, size 0x90, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_PlayButton() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_PlayButton() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_description2() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_description2() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_description3() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_description3() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_description4() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_description4() ;

constexpr ::UnityW<::GlobalNamespace::SettingsRow> const& __cordl_internal_get_settingsRow() const;

constexpr ::UnityW<::GlobalNamespace::SettingsRow>& __cordl_internal_get_settingsRow() ;

constexpr void __cordl_internal_set_PlayButton(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_description2(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_description3(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_description4(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_settingsRow(::UnityW<::GlobalNamespace::SettingsRow>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerCountMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerCountMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerCountMenu(PlayerCountMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerCountMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerCountMenu(PlayerCountMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5303};

/// @brief Field description2, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___description2;

/// @brief Field description3, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___description3;

/// @brief Field description4, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___description4;

/// @brief Field settingsRow, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SettingsRow>  ___settingsRow;

/// @brief Field PlayButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___PlayButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerCountMenu, ___description2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCountMenu, ___description3) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCountMenu, ___description4) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCountMenu, ___settingsRow) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCountMenu, ___PlayButton) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerCountMenu) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace

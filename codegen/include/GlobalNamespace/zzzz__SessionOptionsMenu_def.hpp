#pragma once
// IWYU pragma private; include "GlobalNamespace/SessionOptionsMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SessionOptionsMenu)
namespace GlobalNamespace {
class SettingsRow;
}
// Forward declare root types
namespace GlobalNamespace {
class SessionOptionsMenu;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SessionOptionsMenu*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SessionOptionsMenu*, "", "SessionOptionsMenu");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SessionOptionsMenu
class CORDL_TYPE SessionOptionsMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field settingsRow, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_settingsRow, put=__cordl_internal_set_settingsRow)) ::UnityW<::GlobalNamespace::SettingsRow>  settingsRow;

/// @brief Method ActionBack, addr 0x18043d6b0, size 0x70, virtual false, abstract: false, final false
inline void ActionBack() ;

/// @brief Method Back, addr 0x18043d6b0, size 0x70, virtual false, abstract: false, final false
inline void Back() ;

/// @brief Method GoToPlayerCountMenu, addr 0x18043d6b0, size 0x70, virtual false, abstract: false, final false
inline void GoToPlayerCountMenu() ;

static inline ::GlobalNamespace::SessionOptionsMenu* New_ctor() ;

/// @brief Method OnEnable, addr 0x18043d720, size 0x90, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::GlobalNamespace::SettingsRow> const& __cordl_internal_get_settingsRow() const;

constexpr ::UnityW<::GlobalNamespace::SettingsRow>& __cordl_internal_get_settingsRow() ;

constexpr void __cordl_internal_set_settingsRow(::UnityW<::GlobalNamespace::SettingsRow>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionOptionsMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionOptionsMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionOptionsMenu(SessionOptionsMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionOptionsMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionOptionsMenu(SessionOptionsMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5304};

/// @brief Field settingsRow, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SettingsRow>  ___settingsRow;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SessionOptionsMenu, ___settingsRow) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SessionOptionsMenu) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

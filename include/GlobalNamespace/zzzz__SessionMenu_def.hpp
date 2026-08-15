#pragma once
// IWYU pragma private; include "GlobalNamespace/SessionMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SessionMenu)
namespace UnityEngine::UI {
class Selectable;
}
// Forward declare root types
namespace GlobalNamespace {
class SessionMenu;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SessionMenu*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SessionMenu*, "", "SessionMenu");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SessionMenu
class CORDL_TYPE SessionMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field defaultSelectable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultSelectable, put=__cordl_internal_set_defaultSelectable)) ::UnityW<::UnityEngine::UI::Selectable>  defaultSelectable;

/// @brief Method ActionBack, addr 0x1804318b0, size 0xb0, virtual false, abstract: false, final false
inline void ActionBack() ;

/// @brief Method ActionChangePassword, addr 0x18043d560, size 0x70, virtual false, abstract: false, final false
inline void ActionChangePassword() ;

/// @brief Method ActionGoToModerationMenu, addr 0x180437000, size 0x70, virtual false, abstract: false, final false
inline void ActionGoToModerationMenu() ;

/// @brief Method ActionServerKickAll, addr 0x18043d5d0, size 0x70, virtual false, abstract: false, final false
inline void ActionServerKickAll() ;

static inline ::GlobalNamespace::SessionMenu* New_ctor() ;

/// @brief Method OnDisable, addr 0x1804374f0, size 0x30, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method Update, addr 0x18043d640, size 0x70, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::UI::Selectable> const& __cordl_internal_get_defaultSelectable() const;

constexpr ::UnityW<::UnityEngine::UI::Selectable>& __cordl_internal_get_defaultSelectable() ;

constexpr void __cordl_internal_set_defaultSelectable(::UnityW<::UnityEngine::UI::Selectable>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionMenu(SessionMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionMenu(SessionMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5270};

/// @brief Field defaultSelectable, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Selectable>  ___defaultSelectable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SessionMenu, ___defaultSelectable) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SessionMenu) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

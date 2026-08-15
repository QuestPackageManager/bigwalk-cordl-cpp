#pragma once
// IWYU pragma private; include "GlobalNamespace/MicCheckMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MicCheckMenu)
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class MicCheckMenu;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MicCheckMenu*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MicCheckMenu*, "", "MicCheckMenu");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MicCheckMenu
class CORDL_TYPE MicCheckMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field continueButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_continueButton, put=__cordl_internal_set_continueButton)) ::UnityW<::UnityEngine::UI::Button>  continueButton;

/// @brief Method ActionContinue, addr 0x180436d90, size 0x120, virtual false, abstract: false, final false
inline void ActionContinue() ;

/// @brief Method GoToTitleMenu, addr 0x180436eb0, size 0x110, virtual false, abstract: false, final false
inline void GoToTitleMenu() ;

static inline ::GlobalNamespace::MicCheckMenu* New_ctor() ;

/// @brief Method OnEnable, addr 0x180436fc0, size 0x40, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_continueButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_continueButton() ;

constexpr void __cordl_internal_set_continueButton(::UnityW<::UnityEngine::UI::Button>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicCheckMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicCheckMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicCheckMenu(MicCheckMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicCheckMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicCheckMenu(MicCheckMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5301};

/// @brief Field continueButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___continueButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MicCheckMenu, ___continueButton) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MicCheckMenu) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

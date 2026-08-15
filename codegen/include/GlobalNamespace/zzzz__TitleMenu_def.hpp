#pragma once
// IWYU pragma private; include "GlobalNamespace/TitleMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TitleMenu)
namespace GlobalNamespace {
class MenuFade;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class TitleMenu;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TitleMenu*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TitleMenu*, "", "TitleMenu");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TitleMenu
class CORDL_TYPE TitleMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field fade, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_fade, put=__cordl_internal_set_fade)) ::UnityW<::GlobalNamespace::MenuFade>  fade;

/// @brief Field lastSelected, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastSelected, put=__cordl_internal_set_lastSelected)) ::UnityW<::UnityEngine::GameObject>  lastSelected;

/// @brief Method GoToConnectingMenu, addr 0x180438dd0, size 0x70, virtual false, abstract: false, final false
inline void GoToConnectingMenu() ;

/// @brief Method GoToCreditsMenu, addr 0x180440f90, size 0x70, virtual false, abstract: false, final false
inline void GoToCreditsMenu() ;

/// @brief Method GoToHostMenu, addr 0x180433150, size 0x70, virtual false, abstract: false, final false
inline void GoToHostMenu() ;

/// @brief Method GoToJoinMenu, addr 0x1804313d0, size 0x70, virtual false, abstract: false, final false
inline void GoToJoinMenu() ;

/// @brief Method GoToSettingsMenu, addr 0x180441000, size 0x70, virtual false, abstract: false, final false
inline void GoToSettingsMenu() ;

static inline ::GlobalNamespace::TitleMenu* New_ctor() ;

/// @brief Method OnEnable, addr 0x180441070, size 0xe0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Quit, addr 0x180441150, size 0x30, virtual false, abstract: false, final false
inline void Quit() ;

/// @brief Method Start, addr 0x180441180, size 0x40, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x1804411c0, size 0x160, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::GlobalNamespace::MenuFade> const& __cordl_internal_get_fade() const;

constexpr ::UnityW<::GlobalNamespace::MenuFade>& __cordl_internal_get_fade() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_lastSelected() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_lastSelected() ;

constexpr void __cordl_internal_set_fade(::UnityW<::GlobalNamespace::MenuFade>  value) ;

constexpr void __cordl_internal_set_lastSelected(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TitleMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TitleMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TitleMenu(TitleMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TitleMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TitleMenu(TitleMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5306};

/// @brief Field fade, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MenuFade>  ___fade;

/// @brief Field lastSelected, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___lastSelected;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TitleMenu, ___fade) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TitleMenu, ___lastSelected) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TitleMenu) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

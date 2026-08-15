#pragma once
// IWYU pragma private; include "GlobalNamespace/LoadingMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LoadingMenu)
// Forward declare root types
namespace GlobalNamespace {
class LoadingMenu;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LoadingMenu*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LoadingMenu*, "", "LoadingMenu");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LoadingMenu
class CORDL_TYPE LoadingMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::LoadingMenu* New_ctor() ;

/// @brief Method OnDisable, addr 0x180435770, size 0x40, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1804357b0, size 0x50, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadingMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadingMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadingMenu(LoadingMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadingMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadingMenu(LoadingMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5300};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LoadingMenu) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

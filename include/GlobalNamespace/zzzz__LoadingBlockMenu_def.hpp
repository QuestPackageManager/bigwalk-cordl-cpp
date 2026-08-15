#pragma once
// IWYU pragma private; include "GlobalNamespace/LoadingBlockMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LoadingBlockMenu)
// Forward declare root types
namespace GlobalNamespace {
class LoadingBlockMenu;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LoadingBlockMenu*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LoadingBlockMenu*, "", "LoadingBlockMenu");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LoadingBlockMenu
class CORDL_TYPE LoadingBlockMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::LoadingBlockMenu* New_ctor() ;

/// @brief Method OnDisable, addr 0x180435750, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180435760, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadingBlockMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadingBlockMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadingBlockMenu(LoadingBlockMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadingBlockMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadingBlockMenu(LoadingBlockMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5299};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LoadingBlockMenu) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

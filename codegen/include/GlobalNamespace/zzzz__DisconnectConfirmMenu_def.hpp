#pragma once
// IWYU pragma private; include "GlobalNamespace/DisconnectConfirmMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DisconnectConfirmMenu)
// Forward declare root types
namespace GlobalNamespace {
class DisconnectConfirmMenu;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DisconnectConfirmMenu*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DisconnectConfirmMenu*, "", "DisconnectConfirmMenu");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DisconnectConfirmMenu
class CORDL_TYPE DisconnectConfirmMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method ActionDisconnect, addr 0x180431780, size 0x130, virtual false, abstract: false, final false
inline void ActionDisconnect() ;

/// @brief Method ActionReturn, addr 0x1804318b0, size 0xb0, virtual false, abstract: false, final false
inline void ActionReturn() ;

static inline ::GlobalNamespace::DisconnectConfirmMenu* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DisconnectConfirmMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DisconnectConfirmMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DisconnectConfirmMenu(DisconnectConfirmMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisconnectConfirmMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisconnectConfirmMenu(DisconnectConfirmMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5258};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DisconnectConfirmMenu) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/KickConfirmMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(KickConfirmMenu)
// Forward declare root types
namespace GlobalNamespace {
class KickConfirmMenu;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KickConfirmMenu*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KickConfirmMenu*, "", "KickConfirmMenu");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KickConfirmMenu
class CORDL_TYPE KickConfirmMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method ActionReturn, addr 0x180435490, size 0xb0, virtual false, abstract: false, final false
inline void ActionReturn() ;

/// @brief Method ActionServerKickAll, addr 0x180435540, size 0xc0, virtual false, abstract: false, final false
inline void ActionServerKickAll() ;

/// @brief Method Kick, addr 0x180435600, size 0x150, virtual false, abstract: false, final false
inline void Kick() ;

static inline ::GlobalNamespace::KickConfirmMenu* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KickConfirmMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KickConfirmMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KickConfirmMenu(KickConfirmMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KickConfirmMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KickConfirmMenu(KickConfirmMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5259};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::KickConfirmMenu) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

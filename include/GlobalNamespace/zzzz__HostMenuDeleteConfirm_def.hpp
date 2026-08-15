#pragma once
// IWYU pragma private; include "GlobalNamespace/HostMenuDeleteConfirm.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HostMenuDeleteConfirm)
// Forward declare root types
namespace GlobalNamespace {
class HostMenuDeleteConfirm;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HostMenuDeleteConfirm*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HostMenuDeleteConfirm*, "", "HostMenuDeleteConfirm");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HostMenuDeleteConfirm
class CORDL_TYPE HostMenuDeleteConfirm : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method ActionDelete, addr 0x180433570, size 0xb0, virtual false, abstract: false, final false
inline void ActionDelete() ;

/// @brief Method Back, addr 0x180433150, size 0x70, virtual false, abstract: false, final false
inline void Back() ;

/// @brief Method GoToHostMenuConfirm, addr 0x180433620, size 0x70, virtual false, abstract: false, final false
inline void GoToHostMenuConfirm() ;

/// @brief Method GoToHostMenuSelect, addr 0x180433150, size 0x70, virtual false, abstract: false, final false
inline void GoToHostMenuSelect() ;

/// @brief Method GoToLoadingMenu, addr 0x180431440, size 0x70, virtual false, abstract: false, final false
inline void GoToLoadingMenu() ;

/// @brief Method GoToPlayerCountMenu, addr 0x1804331c0, size 0xd0, virtual false, abstract: false, final false
inline void GoToPlayerCountMenu() ;

static inline ::GlobalNamespace::HostMenuDeleteConfirm* New_ctor() ;

/// @brief Method Update, addr 0x1804334e0, size 0x90, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HostMenuDeleteConfirm() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HostMenuDeleteConfirm", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HostMenuDeleteConfirm(HostMenuDeleteConfirm && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HostMenuDeleteConfirm", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HostMenuDeleteConfirm(HostMenuDeleteConfirm const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5285};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::HostMenuDeleteConfirm) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

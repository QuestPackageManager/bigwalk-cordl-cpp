#pragma once
// IWYU pragma private; include "GlobalNamespace/PulseFlasherGizmo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PulseFlasherGizmo)
// Forward declare root types
namespace GlobalNamespace {
class PulseFlasherGizmo;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PulseFlasherGizmo*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PulseFlasherGizmo*, "", "PulseFlasherGizmo");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PulseFlasherGizmo
class CORDL_TYPE PulseFlasherGizmo : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::PulseFlasherGizmo* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x180407700, size 0x200, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PulseFlasherGizmo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PulseFlasherGizmo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PulseFlasherGizmo(PulseFlasherGizmo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PulseFlasherGizmo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PulseFlasherGizmo(PulseFlasherGizmo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5040};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PulseFlasherGizmo) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

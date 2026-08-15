#pragma once
// IWYU pragma private; include "GlobalNamespace/RockHole.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RockHole)
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class RockHole;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RockHole*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RockHole*, "", "RockHole");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RockHole
class CORDL_TYPE RockHole : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field radius, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_radius, put=__cordl_internal_set_radius)) float_t  radius;

/// @brief Method DrawGizmo, addr 0x180414480, size 0x70, virtual false, abstract: false, final false
inline void DrawGizmo() ;

/// @brief Method GetHoleVector4, addr 0x1804144f0, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetHoleVector4() ;

static inline ::GlobalNamespace::RockHole* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x180414560, size 0x10, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

constexpr float_t const& __cordl_internal_get_radius() const;

constexpr float_t& __cordl_internal_get_radius() ;

constexpr void __cordl_internal_set_radius(float_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RockHole() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RockHole", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RockHole(RockHole && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RockHole", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RockHole(RockHole const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5117};

/// @brief Field radius, offset: 0x20, size: 0x4, def value: None
 float_t  ___radius;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RockHole, ___radius) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RockHole) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

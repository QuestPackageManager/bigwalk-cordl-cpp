#pragma once
// IWYU pragma private; include "GlobalNamespace/ColliderGizmo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ColliderGizmo)
// Forward declare root types
namespace GlobalNamespace {
class ColliderGizmo;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ColliderGizmo*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ColliderGizmo*, "", "ColliderGizmo");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColliderGizmo
class CORDL_TYPE ColliderGizmo : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field color, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Color  color;

static inline ::GlobalNamespace::ColliderGizmo* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x1803e4600, size 0x360, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_color() ;

constexpr void __cordl_internal_set_color(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x1803e4960, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColliderGizmo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColliderGizmo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColliderGizmo(ColliderGizmo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColliderGizmo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColliderGizmo(ColliderGizmo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4938};

/// @brief Field color, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ___color;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColliderGizmo, ___color) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ColliderGizmo) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/SalonSwatch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SalonSwatch)
namespace GlobalNamespace {
class PeckEffectChangeBrushColor;
}
namespace GlobalNamespace {
class PlayerLookSet;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class SalonSwatch;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SalonSwatch*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SalonSwatch*, "", "SalonSwatch");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SalonSwatch
class CORDL_TYPE SalonSwatch : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _materialInstance, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialInstance, put=__cordl_internal_set__materialInstance)) ::UnityW<::UnityEngine::Material>  _materialInstance;

/// @brief Field lookSet, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_lookSet, put=__cordl_internal_set_lookSet)) ::UnityW<::GlobalNamespace::PlayerLookSet>  lookSet;

/// @brief Field peckEffect, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_peckEffect, put=__cordl_internal_set_peckEffect)) ::UnityW<::GlobalNamespace::PeckEffectChangeBrushColor>  peckEffect;

/// @brief Field targetRenderer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetRenderer, put=__cordl_internal_set_targetRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  targetRenderer;

/// @brief Method Awake, addr 0x180414f10, size 0xf0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SalonSwatch* New_ctor() ;

/// @brief Method OnDestroy, addr 0x180415000, size 0x30, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Recolor, addr 0x180414f10, size 0xf0, virtual false, abstract: false, final false
inline void Recolor() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__materialInstance() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__materialInstance() ;

constexpr ::UnityW<::GlobalNamespace::PlayerLookSet> const& __cordl_internal_get_lookSet() const;

constexpr ::UnityW<::GlobalNamespace::PlayerLookSet>& __cordl_internal_get_lookSet() ;

constexpr ::UnityW<::GlobalNamespace::PeckEffectChangeBrushColor> const& __cordl_internal_get_peckEffect() const;

constexpr ::UnityW<::GlobalNamespace::PeckEffectChangeBrushColor>& __cordl_internal_get_peckEffect() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_targetRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_targetRenderer() ;

constexpr void __cordl_internal_set__materialInstance(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_lookSet(::UnityW<::GlobalNamespace::PlayerLookSet>  value) ;

constexpr void __cordl_internal_set_peckEffect(::UnityW<::GlobalNamespace::PeckEffectChangeBrushColor>  value) ;

constexpr void __cordl_internal_set_targetRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SalonSwatch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SalonSwatch", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SalonSwatch(SalonSwatch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SalonSwatch", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SalonSwatch(SalonSwatch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5120};

/// @brief Field peckEffect, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckEffectChangeBrushColor>  ___peckEffect;

/// @brief Field lookSet, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerLookSet>  ___lookSet;

/// @brief Field targetRenderer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___targetRenderer;

/// @brief Field _materialInstance, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____materialInstance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SalonSwatch, ___peckEffect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SalonSwatch, ___lookSet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SalonSwatch, ___targetRenderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SalonSwatch, ____materialInstance) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SalonSwatch) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "HouseCulling/CullingLocation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HouseLight_def.hpp"
#include "HouseCulling/zzzz__CullingRegion_def.hpp"
#include "HouseCulling/zzzz__CullingState_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(CullingLocation)
namespace HouseCulling {
class CullingRegion;
}
namespace HouseCulling {
struct CullingState;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Terrain;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace HouseCulling {
class CullingLocation;
}
// Write type traits
MARK_REF_T(::HouseCulling::CullingLocation*);
DEFINE_IL2CPP_CLASS(::HouseCulling::CullingLocation*, "HouseCulling", "CullingLocation");
// Dependencies HouseCulling.CullingRegion, HouseCulling.CullingState, HouseLight, UnityEngine.GameObject, UnityEngine.Material, UnityEngine.MonoBehaviour, UnityEngine.Renderer
namespace HouseCulling {
// Is value type: false
// CS Name: HouseCulling.CullingLocation
class CORDL_TYPE CullingLocation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _state, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::HouseCulling::CullingState  _state;

/// @brief Field behaviours, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_behaviours, put=__cordl_internal_set_behaviours)) ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>  behaviours;

/// @brief Field gameObjects, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObjects, put=__cordl_internal_set_gameObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  gameObjects;

/// @brief Field listIsHandFilled, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_listIsHandFilled, put=__cordl_internal_set_listIsHandFilled)) bool  listIsHandFilled;

/// @brief Field originalMaterials, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalMaterials, put=__cordl_internal_set_originalMaterials)) ::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>>>  originalMaterials;

/// @brief Field region, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_region, put=__cordl_internal_set_region)) ::UnityW<::HouseCulling::CullingRegion>  region;

/// @brief Field regions, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_regions, put=__cordl_internal_set_regions)) ::ArrayW<::UnityW<::HouseCulling::CullingRegion>>  regions;

/// @brief Field reservedLocations, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_reservedLocations, put=__cordl_internal_set_reservedLocations)) ::ArrayW<::UnityW<::HouseCulling::CullingLocation>>  reservedLocations;

 __declspec(property(get=get_state, put=set_state)) ::HouseCulling::CullingState  state;

/// @brief Field staticLights, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_staticLights, put=__cordl_internal_set_staticLights)) ::ArrayW<::UnityW<::GlobalNamespace::HouseLight>>  staticLights;

/// @brief Field staticRenderers, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_staticRenderers, put=__cordl_internal_set_staticRenderers)) ::ArrayW<::UnityW<::UnityEngine::Renderer>>  staticRenderers;

/// @brief Field terrain, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrain, put=__cordl_internal_set_terrain)) ::UnityW<::UnityEngine::Terrain>  terrain;

/// @brief Field waterRenderer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_waterRenderer, put=__cordl_internal_set_waterRenderer)) ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  waterRenderer;

/// @brief Method DrawGizmoBounds, addr 0x1803be3f0, size 0x1e0, virtual false, abstract: false, final false
inline void DrawGizmoBounds() ;

/// @brief Method DrawRegionGizmos, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void DrawRegionGizmos(::HouseCulling::CullingRegion*  region, ::HouseCulling::CullingLocation*  except) ;

/// @brief Method GetBounds, addr 0x1803be5d0, size 0x1b0, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds GetBounds() ;

static inline ::HouseCulling::CullingLocation* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803be780, size 0x90, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0x1803be810, size 0x220, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x1803bea30, size 0x210, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SwapToDebugMaterial, addr 0x1803bec40, size 0xa0, virtual false, abstract: false, final false
static inline void SwapToDebugMaterial(::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  material) ;

constexpr ::HouseCulling::CullingState const& __cordl_internal_get__state() const;

constexpr ::HouseCulling::CullingState& __cordl_internal_get__state() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>> const& __cordl_internal_get_behaviours() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>& __cordl_internal_get_behaviours() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_gameObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_gameObjects() ;

constexpr bool const& __cordl_internal_get_listIsHandFilled() const;

constexpr bool& __cordl_internal_get_listIsHandFilled() ;

constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>>> const& __cordl_internal_get_originalMaterials() const;

constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>>>& __cordl_internal_get_originalMaterials() ;

constexpr ::UnityW<::HouseCulling::CullingRegion> const& __cordl_internal_get_region() const;

constexpr ::UnityW<::HouseCulling::CullingRegion>& __cordl_internal_get_region() ;

constexpr ::ArrayW<::UnityW<::HouseCulling::CullingRegion>> const& __cordl_internal_get_regions() const;

constexpr ::ArrayW<::UnityW<::HouseCulling::CullingRegion>>& __cordl_internal_get_regions() ;

constexpr ::ArrayW<::UnityW<::HouseCulling::CullingLocation>> const& __cordl_internal_get_reservedLocations() const;

constexpr ::ArrayW<::UnityW<::HouseCulling::CullingLocation>>& __cordl_internal_get_reservedLocations() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::HouseLight>> const& __cordl_internal_get_staticLights() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::HouseLight>>& __cordl_internal_get_staticLights() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& __cordl_internal_get_staticRenderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& __cordl_internal_get_staticRenderers() ;

constexpr ::UnityW<::UnityEngine::Terrain> const& __cordl_internal_get_terrain() const;

constexpr ::UnityW<::UnityEngine::Terrain>& __cordl_internal_get_terrain() ;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& __cordl_internal_get_waterRenderer() const;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& __cordl_internal_get_waterRenderer() ;

constexpr void __cordl_internal_set__state(::HouseCulling::CullingState  value) ;

constexpr void __cordl_internal_set_behaviours(::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>  value) ;

constexpr void __cordl_internal_set_gameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_listIsHandFilled(bool  value) ;

constexpr void __cordl_internal_set_originalMaterials(::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>>>  value) ;

constexpr void __cordl_internal_set_region(::UnityW<::HouseCulling::CullingRegion>  value) ;

constexpr void __cordl_internal_set_regions(::ArrayW<::UnityW<::HouseCulling::CullingRegion>>  value) ;

constexpr void __cordl_internal_set_reservedLocations(::ArrayW<::UnityW<::HouseCulling::CullingLocation>>  value) ;

constexpr void __cordl_internal_set_staticLights(::ArrayW<::UnityW<::GlobalNamespace::HouseLight>>  value) ;

constexpr void __cordl_internal_set_staticRenderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value) ;

constexpr void __cordl_internal_set_terrain(::UnityW<::UnityEngine::Terrain>  value) ;

constexpr void __cordl_internal_set_waterRenderer(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value) ;

/// @brief Method .ctor, addr 0x1803bece0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_state, addr 0x1803becf0, size 0x10, virtual false, abstract: false, final false
inline ::HouseCulling::CullingState get_state() ;

/// @brief Method set_state, addr 0x1803bed00, size 0x4e0, virtual false, abstract: false, final false
inline void set_state(::HouseCulling::CullingState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CullingLocation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CullingLocation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CullingLocation(CullingLocation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CullingLocation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CullingLocation(CullingLocation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5784};

/// @brief Field region, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::HouseCulling::CullingRegion>  ___region;

/// @brief Field regions, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::HouseCulling::CullingRegion>>  ___regions;

/// @brief Field staticRenderers, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>>  ___staticRenderers;

/// @brief Field staticLights, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::HouseLight>>  ___staticLights;

/// @brief Field terrain, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Terrain>  ___terrain;

/// @brief Field behaviours, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>  ___behaviours;

/// @brief Field gameObjects, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___gameObjects;

/// @brief Field waterRenderer, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  ___waterRenderer;

/// @brief Field listIsHandFilled, offset: 0x60, size: 0x1, def value: None
 bool  ___listIsHandFilled;

/// @brief Field reservedLocations, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityW<::HouseCulling::CullingLocation>>  ___reservedLocations;

/// @brief Field originalMaterials, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>>>  ___originalMaterials;

/// @brief Field _state, offset: 0x78, size: 0x4, def value: None
 ::HouseCulling::CullingState  ____state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HouseCulling::CullingLocation, ___region) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HouseCulling::CullingLocation, ___regions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HouseCulling::CullingLocation, ___staticRenderers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HouseCulling::CullingLocation, ___staticLights) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HouseCulling::CullingLocation, ___terrain) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HouseCulling::CullingLocation, ___behaviours) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HouseCulling::CullingLocation, ___gameObjects) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HouseCulling::CullingLocation, ___waterRenderer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HouseCulling::CullingLocation, ___listIsHandFilled) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HouseCulling::CullingLocation, ___reservedLocations) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HouseCulling::CullingLocation, ___originalMaterials) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HouseCulling::CullingLocation, ____state) == 0x78, "Offset mismatch!");

static_assert(sizeof(::HouseCulling::CullingLocation) == 0x80, "Size mismatch!");

} // namespace end def HouseCulling

#pragma once
// IWYU pragma private; include "MA/Flora/CullingUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CullingUtility)
namespace MA::Flora {
struct StaticLightingRenderMode;
}
namespace UnityEngine::Rendering {
struct LODParameters;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace MA::Flora {
class CullingUtility;
}
// Write type traits
MARK_REF_T(::MA::Flora::CullingUtility*);
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingUtility*, "MA.Flora", "CullingUtility");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.CullingUtility
class CORDL_TYPE CullingUtility : public ::System::Object {
public:
// Declarations
/// @brief Field s_BillboardMesh, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_BillboardMesh, put=setStaticF_s_BillboardMesh)) ::UnityW<::UnityEngine::Mesh>  s_BillboardMesh;

/// @brief Field s_TerrainDetailBillboardMesh, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_TerrainDetailBillboardMesh, put=setStaticF_s_TerrainDetailBillboardMesh)) ::UnityW<::UnityEngine::Mesh>  s_TerrainDetailBillboardMesh;

/// @brief Method CalculateFOVHalfAngle, addr 0x1814b95c0, size 0x30, virtual false, abstract: false, final false
static inline float_t CalculateFOVHalfAngle(float_t  fieldOfView) ;

/// @brief Method CalculateLODScreenRelativeMetric, addr 0x1814b95f0, size 0x70, virtual false, abstract: false, final false
static inline float_t CalculateLODScreenRelativeMetric(::UnityEngine::Rendering::LODParameters  lodParams, float_t  lodBias) ;

/// @brief Method CalculateLocalBounds, addr 0x1814b9660, size 0x150, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds CalculateLocalBounds(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method CalculateMeshLodConstant, addr 0x1814b97b0, size 0x30, virtual false, abstract: false, final false
static inline float_t CalculateMeshLodConstant(::UnityEngine::Rendering::LODParameters  lodParams, float_t  screenRelativeMetric, float_t  meshLodThreshold) ;

/// @brief Method CalculateScreenRelativeMetricNoBias, addr 0x1814b97e0, size 0x60, virtual false, abstract: false, final false
static inline float_t CalculateScreenRelativeMetricNoBias(::UnityEngine::Rendering::LODParameters  lodParams) ;

/// @brief Method CalculateWorldBounds, addr 0x1814b9840, size 0x2c0, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds CalculateWorldBounds(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetBillboardMesh, addr 0x1814b9b00, size 0x270, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> GetBillboardMesh() ;

/// @brief Method GetMaximumShadowDistance, addr 0x1814b9d70, size 0xa0, virtual false, abstract: false, final false
static inline float_t GetMaximumShadowDistance(::UnityEngine::Camera*  camera) ;

/// @brief Method GetSceneCullingMaskFromCamera, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline uint64_t GetSceneCullingMaskFromCamera(::UnityEngine::Camera*  camera) ;

/// @brief Method GetTerrainDetailBillboardMesh, addr 0x1814b9e10, size 0x3e0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> GetTerrainDetailBillboardMesh() ;

/// @brief Method SceneHasLightProbes, addr 0x1814ba1f0, size 0x50, virtual false, abstract: false, final false
static inline bool SceneHasLightProbes() ;

/// @brief Method StaticLightingModeFromRenderer, addr 0x1814ba240, size 0x30, virtual false, abstract: false, final false
static inline ::MA::Flora::StaticLightingRenderMode StaticLightingModeFromRenderer(::UnityEngine::Renderer*  renderer) ;

static inline ::UnityW<::UnityEngine::Mesh> getStaticF_s_BillboardMesh() ;

static inline ::UnityW<::UnityEngine::Mesh> getStaticF_s_TerrainDetailBillboardMesh() ;

/// @brief Method get_NumFramesInFlight, addr 0x1814ba270, size 0x150, virtual false, abstract: false, final false
static inline int32_t get_NumFramesInFlight() ;

static inline void setStaticF_s_BillboardMesh(::UnityW<::UnityEngine::Mesh>  value) ;

static inline void setStaticF_s_TerrainDetailBillboardMesh(::UnityW<::UnityEngine::Mesh>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CullingUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CullingUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CullingUtility(CullingUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CullingUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CullingUtility(CullingUtility const& ) = delete;

/// @brief Field LightmapIndexInfluenceOnly offset 0xffffffff size 0x4
static constexpr int32_t  LightmapIndexInfluenceOnly{static_cast<int32_t>(0xfffe)};

/// @brief Field LightmapIndexMask offset 0xffffffff size 0x4
static constexpr int32_t  LightmapIndexMask{static_cast<int32_t>(0xffff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13176};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::CullingUtility) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora

#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LODRenderingUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LODRenderingUtils)
namespace UnityEngine::Rendering {
struct LODParameters;
}
namespace UnityEngine {
class LODGroup;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class LODRenderingUtils;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::LODRenderingUtils*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::LODRenderingUtils*, "UnityEngine.Rendering", "LODRenderingUtils");
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LODRenderingUtils
class CORDL_TYPE LODRenderingUtils : public ::System::Object {
public:
// Declarations
/// @brief Method CalculateFOVHalfAngle, addr 0x1820b1b10, size 0x20, virtual false, abstract: false, final false
static inline float_t CalculateFOVHalfAngle(float_t  fieldOfView) ;

/// @brief Method CalculateLODDistance, addr 0x1820b1b30, size 0x10, virtual false, abstract: false, final false
static inline float_t CalculateLODDistance(float_t  relativeScreenHeight, float_t  size) ;

/// @brief Method CalculateMeshLodConstant, addr 0x1814b97b0, size 0x30, virtual false, abstract: false, final false
static inline float_t CalculateMeshLodConstant(::UnityEngine::Rendering::LODParameters  lodParams, float_t  screenRelativeMetric, float_t  meshLodThreshold) ;

/// @brief Method CalculatePerspectiveDistance, addr 0x1820b1b40, size 0x70, virtual false, abstract: false, final false
static inline float_t CalculatePerspectiveDistance(::UnityEngine::Vector3  objPosition, ::UnityEngine::Vector3  camPosition, float_t  sqrScreenRelativeMetric) ;

/// @brief Method CalculateScreenRelativeMetricNoBias, addr 0x1820b1bb0, size 0x50, virtual false, abstract: false, final false
static inline float_t CalculateScreenRelativeMetricNoBias(::UnityEngine::Rendering::LODParameters  lodParams) ;

/// @brief Method CalculateSqrPerspectiveDistance, addr 0x1820b1c00, size 0x50, virtual false, abstract: false, final false
static inline float_t CalculateSqrPerspectiveDistance(::UnityEngine::Vector3  objPosition, ::UnityEngine::Vector3  camPosition, float_t  sqrScreenRelativeMetric) ;

/// @brief Method GetWorldReferencePoint, addr 0x1820b1c50, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetWorldReferencePoint(::UnityEngine::LODGroup*  lodGroup) ;

/// @brief Method GetWorldSpaceScale, addr 0x1820b1cc0, size 0x50, virtual false, abstract: false, final false
static inline float_t GetWorldSpaceScale(::UnityEngine::LODGroup*  lodGroup) ;

/// @brief Method GetWorldSpaceSize, addr 0x1820b1d10, size 0x80, virtual false, abstract: false, final false
static inline float_t GetWorldSpaceSize(::UnityEngine::LODGroup*  lodGroup) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LODRenderingUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LODRenderingUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LODRenderingUtils(LODRenderingUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LODRenderingUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LODRenderingUtils(LODRenderingUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17849};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::LODRenderingUtils) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering

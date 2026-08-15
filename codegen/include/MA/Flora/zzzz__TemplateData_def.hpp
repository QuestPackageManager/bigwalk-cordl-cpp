#pragma once
// IWYU pragma private; include "MA/Flora/TemplateData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TemplateData)
namespace MA::Flora {
struct TemplateData__lodHeightRcp_e__FixedBuffer;
}
namespace MA::Flora {
struct TemplateData__lodTransitionHeightRcp_e__FixedBuffer;
}
// Forward declare root types
namespace MA::Flora {
struct TemplateData;
}
namespace MA::Flora {
struct TemplateData__lodHeightRcp_e__FixedBuffer;
}
namespace MA::Flora {
struct TemplateData__lodTransitionHeightRcp_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::MA::Flora::TemplateData);
MARK_VAL_T(::MA::Flora::TemplateData__lodHeightRcp_e__FixedBuffer);
MARK_VAL_T(::MA::Flora::TemplateData__lodTransitionHeightRcp_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::MA::Flora::TemplateData, "MA.Flora", "TemplateData");
DEFINE_IL2CPP_CLASS(::MA::Flora::TemplateData__lodHeightRcp_e__FixedBuffer, "MA.Flora", "TemplateData/<lodHeightRcp>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::MA::Flora::TemplateData__lodTransitionHeightRcp_e__FixedBuffer, "MA.Flora", "TemplateData/<lodTransitionHeightRcp>e__FixedBuffer");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TemplateData/<lodHeightRcp>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE TemplateData__lodHeightRcp_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TemplateData__lodHeightRcp_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
constexpr TemplateData__lodHeightRcp_e__FixedBuffer(float_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13053};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
 float_t  FixedElementField;

/// @brief Size padding 0x20 - 0x4 = 0x1c, packed as 0x1c
 uint8_t  _cordl_size_padding[0x1c];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::MA::Flora::TemplateData__lodHeightRcp_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TemplateData__lodHeightRcp_e__FixedBuffer) == 0x20, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TemplateData/<lodTransitionHeightRcp>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE TemplateData__lodTransitionHeightRcp_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TemplateData__lodTransitionHeightRcp_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
constexpr TemplateData__lodTransitionHeightRcp_e__FixedBuffer(float_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13054};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
 float_t  FixedElementField;

/// @brief Size padding 0x20 - 0x4 = 0x1c, packed as 0x1c
 uint8_t  _cordl_size_padding[0x1c];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::MA::Flora::TemplateData__lodTransitionHeightRcp_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TemplateData__lodTransitionHeightRcp_e__FixedBuffer) == 0x20, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.TemplateData::<lodHeightRcp>e__FixedBuffer, MA.Flora.TemplateData::<lodTransitionHeightRcp>e__FixedBuffer, UnityEngine.Vector3
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TemplateData
struct CORDL_TYPE TemplateData {
public:
// Declarations
using _lodHeightRcp_e__FixedBuffer = ::MA::Flora::TemplateData__lodHeightRcp_e__FixedBuffer;

using _lodTransitionHeightRcp_e__FixedBuffer = ::MA::Flora::TemplateData__lodTransitionHeightRcp_e__FixedBuffer;

// Ctor Parameters []
// @brief default ctor
constexpr TemplateData() ;

// Ctor Parameters [CppParam { name: "flags", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "layer", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "renderingLayerMask", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "maxRenderDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "localCenter", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "maxShadowDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "localExtent", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "localBoundingRadius", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lodPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "localSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lodCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "lodMax", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "lodMinShadow", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "packedLODFlags", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "meshLodSlope", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "meshLodBias", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "meshLodSelectionBias", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "meshLodUnused", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lodHeightRcp", ty: "::MA::Flora::TemplateData__lodHeightRcp_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "lodTransitionHeightRcp", ty: "::MA::Flora::TemplateData__lodTransitionHeightRcp_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr TemplateData(uint32_t  flags, uint32_t  layer, uint32_t  renderingLayerMask, float_t  maxRenderDistance, ::UnityEngine::Vector3  localCenter, float_t  maxShadowDistance, ::UnityEngine::Vector3  localExtent, float_t  localBoundingRadius, ::UnityEngine::Vector3  lodPoint, float_t  localSize, uint32_t  lodCount, uint32_t  lodMax, uint32_t  lodMinShadow, uint32_t  packedLODFlags, float_t  meshLodSlope, float_t  meshLodBias, float_t  meshLodSelectionBias, float_t  meshLodUnused, ::MA::Flora::TemplateData__lodHeightRcp_e__FixedBuffer  lodHeightRcp, ::MA::Flora::TemplateData__lodTransitionHeightRcp_e__FixedBuffer  lodTransitionHeightRcp) noexcept;

/// @brief Field MaxLodCount offset 0xffffffff size 0x4
static constexpr int32_t  MaxLodCount{static_cast<int32_t>(0x8)};

/// @brief Field TemplateFlagAffectedByGlobalDensity offset 0xffffffff size 0x4
static constexpr uint32_t  TemplateFlagAffectedByGlobalDensity{static_cast<uint32_t>(0x20u)};

/// @brief Field TemplateFlagAffectedByMinScreenSize offset 0xffffffff size 0x4
static constexpr uint32_t  TemplateFlagAffectedByMinScreenSize{static_cast<uint32_t>(0x80u)};

/// @brief Field TemplateFlagAffectedByRangeDensity offset 0xffffffff size 0x4
static constexpr uint32_t  TemplateFlagAffectedByRangeDensity{static_cast<uint32_t>(0x40u)};

/// @brief Field TemplateFlagHasAnimatedFade offset 0xffffffff size 0x4
static constexpr uint32_t  TemplateFlagHasAnimatedFade{static_cast<uint32_t>(0x10u)};

/// @brief Field TemplateFlagHasCrossFade offset 0xffffffff size 0x4
static constexpr uint32_t  TemplateFlagHasCrossFade{static_cast<uint32_t>(0x8u)};

/// @brief Field TemplateFlagHasMotionVectors offset 0xffffffff size 0x4
static constexpr uint32_t  TemplateFlagHasMotionVectors{static_cast<uint32_t>(0x4u)};

/// @brief Field TemplateFlagHasRandomID offset 0xffffffff size 0x4
static constexpr uint32_t  TemplateFlagHasRandomID{static_cast<uint32_t>(0x100u)};

/// @brief Field TemplateFlagIsLodGroup offset 0xffffffff size 0x4
static constexpr uint32_t  TemplateFlagIsLodGroup{static_cast<uint32_t>(0x1u)};

/// @brief Field TemplateFlagIsMeshLod offset 0xffffffff size 0x4
static constexpr uint32_t  TemplateFlagIsMeshLod{static_cast<uint32_t>(0x2u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13055};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xa0};

/// @brief Field flags, offset: 0x0, size: 0x4, def value: None
 uint32_t  flags;

/// @brief Field layer, offset: 0x4, size: 0x4, def value: None
 uint32_t  layer;

/// @brief Field renderingLayerMask, offset: 0x8, size: 0x4, def value: None
 uint32_t  renderingLayerMask;

/// @brief Field maxRenderDistance, offset: 0xc, size: 0x4, def value: None
 float_t  maxRenderDistance;

/// @brief Field localCenter, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  localCenter;

/// @brief Field maxShadowDistance, offset: 0x1c, size: 0x4, def value: None
 float_t  maxShadowDistance;

/// @brief Field localExtent, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  localExtent;

/// @brief Field localBoundingRadius, offset: 0x2c, size: 0x4, def value: None
 float_t  localBoundingRadius;

/// @brief Field lodPoint, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  lodPoint;

/// @brief Field localSize, offset: 0x3c, size: 0x4, def value: None
 float_t  localSize;

/// @brief Field lodCount, offset: 0x40, size: 0x4, def value: None
 uint32_t  lodCount;

/// @brief Field lodMax, offset: 0x44, size: 0x4, def value: None
 uint32_t  lodMax;

/// @brief Field lodMinShadow, offset: 0x48, size: 0x4, def value: None
 uint32_t  lodMinShadow;

/// @brief Field packedLODFlags, offset: 0x4c, size: 0x4, def value: None
 uint32_t  packedLODFlags;

/// @brief Field meshLodSlope, offset: 0x50, size: 0x4, def value: None
 float_t  meshLodSlope;

/// @brief Field meshLodBias, offset: 0x54, size: 0x4, def value: None
 float_t  meshLodBias;

/// @brief Field meshLodSelectionBias, offset: 0x58, size: 0x4, def value: None
 float_t  meshLodSelectionBias;

/// @brief Field meshLodUnused, offset: 0x5c, size: 0x4, def value: None
 float_t  meshLodUnused;

/// @brief Field lodHeightRcp, offset: 0x60, size: 0x20, def value: None
 ::MA::Flora::TemplateData__lodHeightRcp_e__FixedBuffer  lodHeightRcp;

/// @brief Field lodTransitionHeightRcp, offset: 0x80, size: 0x20, def value: None
 ::MA::Flora::TemplateData__lodTransitionHeightRcp_e__FixedBuffer  lodTransitionHeightRcp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TemplateData, flags) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateData, layer) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateData, renderingLayerMask) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateData, maxRenderDistance) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateData, localCenter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateData, maxShadowDistance) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateData, localExtent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateData, localBoundingRadius) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateData, lodPoint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateData, localSize) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateData, lodCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateData, lodMax) == 0x44, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateData, lodMinShadow) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateData, packedLODFlags) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateData, meshLodSlope) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateData, meshLodBias) == 0x54, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateData, meshLodSelectionBias) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateData, meshLodUnused) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateData, lodHeightRcp) == 0x60, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateData, lodTransitionHeightRcp) == 0x80, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TemplateData) == 0xa0, "Size mismatch!");

} // namespace end def MA::Flora

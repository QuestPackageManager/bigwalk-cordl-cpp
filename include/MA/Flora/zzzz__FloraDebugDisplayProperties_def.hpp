#pragma once
// IWYU pragma private; include "MA/Flora/FloraDebugDisplayProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__DebugInstanceDrawMode_def.hpp"
#include "MA/Flora/zzzz__DebugLodMode_def.hpp"
#include "MA/Flora/zzzz__DebugSpatialHashFlags_def.hpp"
#include "MA/Flora/zzzz__DebugSpatialHashMode_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloraDebugDisplayProperties)
// Forward declare root types
namespace MA::Flora {
struct FloraDebugDisplayProperties;
}
// Write type traits
MARK_VAL_T(::MA::Flora::FloraDebugDisplayProperties);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraDebugDisplayProperties, "MA.Flora", "FloraDebugDisplayProperties");
// Dependencies MA.Flora.DebugInstanceDrawMode, MA.Flora.DebugLodMode, MA.Flora.DebugSpatialHashFlags, MA.Flora.DebugSpatialHashMode, UnityEngine.EntityId, UnityEngine.Vector2
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.FloraDebugDisplayProperties
struct CORDL_TYPE FloraDebugDisplayProperties {
public:
// Declarations
/// @brief Field Default, offset 0xffffffff, size 0x3c 
 __declspec(property(get=getStaticF_Default, put=setStaticF_Default)) ::MA::Flora::FloraDebugDisplayProperties  Default;

 __declspec(property(get=get_RenderSpatialHash)) bool  RenderSpatialHash;

/// @brief Method Reset, addr 0x1814c5c80, size 0x70, virtual false, abstract: false, final false
inline void Reset() ;

static inline ::MA::Flora::FloraDebugDisplayProperties getStaticF_Default() ;

/// @brief Method get_RenderSpatialHash, addr 0x1814c5d90, size 0x120, virtual false, abstract: false, final false
inline bool get_RenderSpatialHash() ;

static inline void setStaticF_Default(::MA::Flora::FloraDebugDisplayProperties  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr FloraDebugDisplayProperties() ;

// Ctor Parameters [CppParam { name: "InstanceDrawOpacity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "InstanceDrawMode", ty: "::MA::Flora::DebugInstanceDrawMode", modifiers: "", def_value: None }, CppParam { name: "FrozenCameraId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }, CppParam { name: "EnableGPUChecks", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "LODMode", ty: "::MA::Flora::DebugLodMode", modifiers: "", def_value: None }, CppParam { name: "LODIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "OcclusionTestOverlayEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "OcclusionTestOverlayOpacity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "OcclusionOverlayCountVisible", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "OcclusionOverrideTestToAlwaysPass", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "OccluderDepthOverlayEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "OcclusionDepthViewRange", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "SpatialHashMode", ty: "::MA::Flora::DebugSpatialHashMode", modifiers: "", def_value: None }, CppParam { name: "SpatialHashFlags", ty: "::MA::Flora::DebugSpatialHashFlags", modifiers: "", def_value: None }, CppParam { name: "SpatialHashMaxDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "EnableCPUCullingStats", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "EnableGPUCullingStats", ty: "bool", modifiers: "", def_value: None }]
constexpr FloraDebugDisplayProperties(float_t  InstanceDrawOpacity, ::MA::Flora::DebugInstanceDrawMode  InstanceDrawMode, ::UnityEngine::EntityId  FrozenCameraId, bool  EnableGPUChecks, ::MA::Flora::DebugLodMode  LODMode, int32_t  LODIndex, bool  OcclusionTestOverlayEnabled, float_t  OcclusionTestOverlayOpacity, bool  OcclusionOverlayCountVisible, bool  OcclusionOverrideTestToAlwaysPass, bool  OccluderDepthOverlayEnabled, ::UnityEngine::Vector2  OcclusionDepthViewRange, ::MA::Flora::DebugSpatialHashMode  SpatialHashMode, ::MA::Flora::DebugSpatialHashFlags  SpatialHashFlags, float_t  SpatialHashMaxDistance, bool  EnableCPUCullingStats, bool  EnableGPUCullingStats) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13259};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x3c};

/// @brief Field InstanceDrawOpacity, offset: 0x0, size: 0x4, def value: None
 float_t  InstanceDrawOpacity;

/// @brief Field InstanceDrawMode, offset: 0x4, size: 0x4, def value: None
 ::MA::Flora::DebugInstanceDrawMode  InstanceDrawMode;

/// @brief Field FrozenCameraId, offset: 0x8, size: 0x4, def value: None
 ::UnityEngine::EntityId  FrozenCameraId;

/// @brief Field EnableGPUChecks, offset: 0xc, size: 0x1, def value: None
 bool  EnableGPUChecks;

/// @brief Field LODMode, offset: 0x10, size: 0x4, def value: None
 ::MA::Flora::DebugLodMode  LODMode;

/// @brief Field LODIndex, offset: 0x14, size: 0x4, def value: None
 int32_t  LODIndex;

/// @brief Field OcclusionTestOverlayEnabled, offset: 0x18, size: 0x1, def value: None
 bool  OcclusionTestOverlayEnabled;

/// @brief Field OcclusionTestOverlayOpacity, offset: 0x1c, size: 0x4, def value: None
 float_t  OcclusionTestOverlayOpacity;

/// @brief Field OcclusionOverlayCountVisible, offset: 0x20, size: 0x1, def value: None
 bool  OcclusionOverlayCountVisible;

/// @brief Field OcclusionOverrideTestToAlwaysPass, offset: 0x21, size: 0x1, def value: None
 bool  OcclusionOverrideTestToAlwaysPass;

/// @brief Field OccluderDepthOverlayEnabled, offset: 0x22, size: 0x1, def value: None
 bool  OccluderDepthOverlayEnabled;

/// @brief Field OcclusionDepthViewRange, offset: 0x24, size: 0x8, def value: None
 ::UnityEngine::Vector2  OcclusionDepthViewRange;

/// @brief Field SpatialHashMode, offset: 0x2c, size: 0x4, def value: None
 ::MA::Flora::DebugSpatialHashMode  SpatialHashMode;

/// @brief Field SpatialHashFlags, offset: 0x30, size: 0x4, def value: None
 ::MA::Flora::DebugSpatialHashFlags  SpatialHashFlags;

/// @brief Field SpatialHashMaxDistance, offset: 0x34, size: 0x4, def value: None
 float_t  SpatialHashMaxDistance;

/// @brief Field EnableCPUCullingStats, offset: 0x38, size: 0x1, def value: None
 bool  EnableCPUCullingStats;

/// @brief Field EnableGPUCullingStats, offset: 0x39, size: 0x1, def value: None
 bool  EnableGPUCullingStats;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraDebugDisplayProperties, InstanceDrawOpacity) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDebugDisplayProperties, InstanceDrawMode) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDebugDisplayProperties, FrozenCameraId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDebugDisplayProperties, EnableGPUChecks) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDebugDisplayProperties, LODMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDebugDisplayProperties, LODIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDebugDisplayProperties, OcclusionTestOverlayEnabled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDebugDisplayProperties, OcclusionTestOverlayOpacity) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDebugDisplayProperties, OcclusionOverlayCountVisible) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDebugDisplayProperties, OcclusionOverrideTestToAlwaysPass) == 0x21, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDebugDisplayProperties, OccluderDepthOverlayEnabled) == 0x22, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDebugDisplayProperties, OcclusionDepthViewRange) == 0x24, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDebugDisplayProperties, SpatialHashMode) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDebugDisplayProperties, SpatialHashFlags) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDebugDisplayProperties, SpatialHashMaxDistance) == 0x34, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDebugDisplayProperties, EnableCPUCullingStats) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraDebugDisplayProperties, EnableGPUCullingStats) == 0x39, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraDebugDisplayProperties) == 0x3c, "Size mismatch!");

} // namespace end def MA::Flora

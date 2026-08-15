#pragma once
// IWYU pragma private; include "MA/Flora/TemplateLayoutRecord.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__AABB_def.hpp"
#include "MA/Flora/zzzz__BatchDomainIndex_def.hpp"
#include "MA/Flora/zzzz__TemplateCapabilityProfile_def.hpp"
#include "MA/Flora/zzzz__TemplateData_def.hpp"
#include "MA/Flora/zzzz__TemplateLayoutKey_def.hpp"
#include "MA/Flora/zzzz__TemplateRenderFlags_def.hpp"
#include "MA/Flora/zzzz__TemplateRenderType_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "UnityEngine/zzzz__LODFadeMode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TemplateLayoutRecord)
// Forward declare root types
namespace MA::Flora {
struct TemplateLayoutRecord;
}
// Write type traits
MARK_VAL_T(::MA::Flora::TemplateLayoutRecord);
DEFINE_IL2CPP_CLASS(::MA::Flora::TemplateLayoutRecord, "MA.Flora", "TemplateLayoutRecord");
// Dependencies MA.Flora.AABB, MA.Flora.BatchDomainIndex, MA.Flora.TemplateCapabilityProfile, MA.Flora.TemplateData, MA.Flora.TemplateLayoutKey, MA.Flora.TemplateRenderFlags, MA.Flora.TemplateRenderType, Unity.Mathematics.float4, UnityEngine.LODFadeMode, UnityEngine.Vector3
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TemplateLayoutRecord
struct CORDL_TYPE TemplateLayoutRecord {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TemplateLayoutRecord() ;

// Ctor Parameters [CppParam { name: "Key", ty: "::MA::Flora::TemplateLayoutKey", modifiers: "", def_value: None }, CppParam { name: "CapabilityProfile", ty: "::MA::Flora::TemplateCapabilityProfile", modifiers: "", def_value: None }, CppParam { name: "GroupSignature", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Type", ty: "::MA::Flora::TemplateRenderType", modifiers: "", def_value: None }, CppParam { name: "Flags", ty: "::MA::Flora::TemplateRenderFlags", modifiers: "", def_value: None }, CppParam { name: "BatchDomainIndex", ty: "::MA::Flora::BatchDomainIndex", modifiers: "", def_value: None }, CppParam { name: "InitialVariationColor", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "MaxRenderDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "MaxShadowDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "AffectedByGlobalDensity", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "AffectedByRangeDensity", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "MinShadowLod", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "LodCount", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "LodFadeMode", ty: "::UnityEngine::LODFadeMode", modifiers: "", def_value: None }, CppParam { name: "HasAnimatedCrossFade", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "SupportsFadeKeyword", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "LocalAnchorPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "LocalReferencePoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "LocalSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "LocalAABB", ty: "::MA::Flora::AABB", modifiers: "", def_value: None }, CppParam { name: "LodHeights0To3", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "LodHeights4To7", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "LodTransitionHeights0To3", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "LodTransitionHeights4To7", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "TemplateData", ty: "::MA::Flora::TemplateData", modifiers: "", def_value: None }, CppParam { name: "RefCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TemplateLayoutRecord(::MA::Flora::TemplateLayoutKey  Key, ::MA::Flora::TemplateCapabilityProfile  CapabilityProfile, uint64_t  GroupSignature, ::MA::Flora::TemplateRenderType  Type, ::MA::Flora::TemplateRenderFlags  Flags, ::MA::Flora::BatchDomainIndex  BatchDomainIndex, ::Unity::Mathematics::float4  InitialVariationColor, float_t  MaxRenderDistance, float_t  MaxShadowDistance, bool  AffectedByGlobalDensity, bool  AffectedByRangeDensity, int32_t  MinShadowLod, uint8_t  LodCount, ::UnityEngine::LODFadeMode  LodFadeMode, bool  HasAnimatedCrossFade, bool  SupportsFadeKeyword, ::UnityEngine::Vector3  LocalAnchorPoint, ::UnityEngine::Vector3  LocalReferencePoint, float_t  LocalSize, ::MA::Flora::AABB  LocalAABB, ::Unity::Mathematics::float4  LodHeights0To3, ::Unity::Mathematics::float4  LodHeights4To7, ::Unity::Mathematics::float4  LodTransitionHeights0To3, ::Unity::Mathematics::float4  LodTransitionHeights4To7, ::MA::Flora::TemplateData  TemplateData, int32_t  RefCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13078};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x260};

/// @brief Field Key, offset: 0x0, size: 0xf0, def value: None
 ::MA::Flora::TemplateLayoutKey  Key;

/// @brief Field CapabilityProfile, offset: 0xf0, size: 0x10, def value: None
 ::MA::Flora::TemplateCapabilityProfile  CapabilityProfile;

/// @brief Field GroupSignature, offset: 0x100, size: 0x8, def value: None
 uint64_t  GroupSignature;

/// @brief Field Type, offset: 0x108, size: 0x4, def value: None
 ::MA::Flora::TemplateRenderType  Type;

/// @brief Field Flags, offset: 0x10c, size: 0x1, def value: None
 ::MA::Flora::TemplateRenderFlags  Flags;

/// @brief Field BatchDomainIndex, offset: 0x110, size: 0x4, def value: None
 ::MA::Flora::BatchDomainIndex  BatchDomainIndex;

/// @brief Field InitialVariationColor, offset: 0x114, size: 0x10, def value: None
 ::Unity::Mathematics::float4  InitialVariationColor;

/// @brief Field MaxRenderDistance, offset: 0x124, size: 0x4, def value: None
 float_t  MaxRenderDistance;

/// @brief Field MaxShadowDistance, offset: 0x128, size: 0x4, def value: None
 float_t  MaxShadowDistance;

/// @brief Field AffectedByGlobalDensity, offset: 0x12c, size: 0x1, def value: None
 bool  AffectedByGlobalDensity;

/// @brief Field AffectedByRangeDensity, offset: 0x12d, size: 0x1, def value: None
 bool  AffectedByRangeDensity;

/// @brief Field MinShadowLod, offset: 0x130, size: 0x4, def value: None
 int32_t  MinShadowLod;

/// @brief Field LodCount, offset: 0x134, size: 0x1, def value: None
 uint8_t  LodCount;

/// @brief Field LodFadeMode, offset: 0x138, size: 0x4, def value: None
 ::UnityEngine::LODFadeMode  LodFadeMode;

/// @brief Field HasAnimatedCrossFade, offset: 0x13c, size: 0x1, def value: None
 bool  HasAnimatedCrossFade;

/// @brief Field SupportsFadeKeyword, offset: 0x13d, size: 0x1, def value: None
 bool  SupportsFadeKeyword;

/// @brief Field LocalAnchorPoint, offset: 0x140, size: 0xc, def value: None
 ::UnityEngine::Vector3  LocalAnchorPoint;

/// @brief Field LocalReferencePoint, offset: 0x14c, size: 0xc, def value: None
 ::UnityEngine::Vector3  LocalReferencePoint;

/// @brief Field LocalSize, offset: 0x158, size: 0x4, def value: None
 float_t  LocalSize;

/// @brief Field LocalAABB, offset: 0x15c, size: 0x20, def value: None
 ::MA::Flora::AABB  LocalAABB;

/// @brief Field LodHeights0To3, offset: 0x17c, size: 0x10, def value: None
 ::Unity::Mathematics::float4  LodHeights0To3;

/// @brief Field LodHeights4To7, offset: 0x18c, size: 0x10, def value: None
 ::Unity::Mathematics::float4  LodHeights4To7;

/// @brief Field LodTransitionHeights0To3, offset: 0x19c, size: 0x10, def value: None
 ::Unity::Mathematics::float4  LodTransitionHeights0To3;

/// @brief Field LodTransitionHeights4To7, offset: 0x1ac, size: 0x10, def value: None
 ::Unity::Mathematics::float4  LodTransitionHeights4To7;

/// @brief Field TemplateData, offset: 0x1bc, size: 0xa0, def value: None
 ::MA::Flora::TemplateData  TemplateData;

/// @brief Field RefCount, offset: 0x25c, size: 0x4, def value: None
 int32_t  RefCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TemplateLayoutRecord, Key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutRecord, CapabilityProfile) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutRecord, GroupSignature) == 0x100, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutRecord, Type) == 0x108, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutRecord, Flags) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutRecord, BatchDomainIndex) == 0x110, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutRecord, InitialVariationColor) == 0x114, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutRecord, MaxRenderDistance) == 0x124, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutRecord, MaxShadowDistance) == 0x128, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutRecord, AffectedByGlobalDensity) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutRecord, AffectedByRangeDensity) == 0x12d, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutRecord, MinShadowLod) == 0x130, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutRecord, LodCount) == 0x134, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutRecord, LodFadeMode) == 0x138, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutRecord, HasAnimatedCrossFade) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutRecord, SupportsFadeKeyword) == 0x13d, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutRecord, LocalAnchorPoint) == 0x140, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutRecord, LocalReferencePoint) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutRecord, LocalSize) == 0x158, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutRecord, LocalAABB) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutRecord, LodHeights0To3) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutRecord, LodHeights4To7) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutRecord, LodTransitionHeights0To3) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutRecord, LodTransitionHeights4To7) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutRecord, TemplateData) == 0x1bc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateLayoutRecord, RefCount) == 0x25c, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TemplateLayoutRecord) == 0x260, "Size mismatch!");

} // namespace end def MA::Flora

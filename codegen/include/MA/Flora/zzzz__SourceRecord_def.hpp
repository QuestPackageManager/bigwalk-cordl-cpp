#pragma once
// IWYU pragma private; include "MA/Flora/SourceRecord.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SourceRecord)
// Forward declare root types
namespace MA::Flora {
struct SourceRecord;
}
// Write type traits
MARK_VAL_T(::MA::Flora::SourceRecord);
DEFINE_IL2CPP_CLASS(::MA::Flora::SourceRecord, "MA.Flora", "SourceRecord");
// Dependencies Unity.Mathematics.float4, UnityEngine.EntityId
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.SourceRecord
struct CORDL_TYPE SourceRecord {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SourceRecord() ;

// Ctor Parameters [CppParam { name: "IdentitySourceId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }, CppParam { name: "RenderSourceId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }, CppParam { name: "LodGroupId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }, CppParam { name: "AdditionalSettingsId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }, CppParam { name: "LightmapIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "LightmapScaleOffset", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "RefCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SourceRecord(::UnityEngine::EntityId  IdentitySourceId, ::UnityEngine::EntityId  RenderSourceId, ::UnityEngine::EntityId  LodGroupId, ::UnityEngine::EntityId  AdditionalSettingsId, int32_t  LightmapIndex, ::Unity::Mathematics::float4  LightmapScaleOffset, int32_t  RefCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13068};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field IdentitySourceId, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::EntityId  IdentitySourceId;

/// @brief Field RenderSourceId, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::EntityId  RenderSourceId;

/// @brief Field LodGroupId, offset: 0x8, size: 0x4, def value: None
 ::UnityEngine::EntityId  LodGroupId;

/// @brief Field AdditionalSettingsId, offset: 0xc, size: 0x4, def value: None
 ::UnityEngine::EntityId  AdditionalSettingsId;

/// @brief Field LightmapIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  LightmapIndex;

/// @brief Field LightmapScaleOffset, offset: 0x14, size: 0x10, def value: None
 ::Unity::Mathematics::float4  LightmapScaleOffset;

/// @brief Field RefCount, offset: 0x24, size: 0x4, def value: None
 int32_t  RefCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::SourceRecord, IdentitySourceId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::SourceRecord, RenderSourceId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::SourceRecord, LodGroupId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::SourceRecord, AdditionalSettingsId) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::SourceRecord, LightmapIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::SourceRecord, LightmapScaleOffset) == 0x14, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::SourceRecord, RefCount) == 0x24, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::SourceRecord) == 0x28, "Size mismatch!");

} // namespace end def MA::Flora

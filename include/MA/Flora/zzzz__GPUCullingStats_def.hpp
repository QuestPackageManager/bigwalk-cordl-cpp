#pragma once
// IWYU pragma private; include "MA/Flora/GPUCullingStats.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUCullingStats)
// Forward declare root types
namespace MA::Flora {
struct GPUCullingStats;
}
// Write type traits
MARK_VAL_T(::MA::Flora::GPUCullingStats);
DEFINE_IL2CPP_CLASS(::MA::Flora::GPUCullingStats, "MA.Flora", "GPUCullingStats");
// Dependencies UnityEngine.EntityId, UnityEngine.Rendering.BatchCullingViewType
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.GPUCullingStats
struct CORDL_TYPE GPUCullingStats {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GPUCullingStats() ;

// Ctor Parameters [CppParam { name: "ViewId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }, CppParam { name: "ViewType", ty: "::UnityEngine::Rendering::BatchCullingViewType", modifiers: "", def_value: None }, CppParam { name: "FrameIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "VisibleDraws", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "VisibleInstances", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "OccludedInstances", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GPUCullingStats(::UnityEngine::EntityId  ViewId, ::UnityEngine::Rendering::BatchCullingViewType  ViewType, int32_t  FrameIndex, int32_t  VisibleDraws, int32_t  VisibleInstances, int32_t  OccludedInstances) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13171};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field ViewId, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::EntityId  ViewId;

/// @brief Field ViewType, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::Rendering::BatchCullingViewType  ViewType;

/// @brief Field FrameIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  FrameIndex;

/// @brief Field VisibleDraws, offset: 0xc, size: 0x4, def value: None
 int32_t  VisibleDraws;

/// @brief Field VisibleInstances, offset: 0x10, size: 0x4, def value: None
 int32_t  VisibleInstances;

/// @brief Field OccludedInstances, offset: 0x14, size: 0x4, def value: None
 int32_t  OccludedInstances;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::GPUCullingStats, ViewId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::GPUCullingStats, ViewType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::GPUCullingStats, FrameIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::GPUCullingStats, VisibleDraws) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::GPUCullingStats, VisibleInstances) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::GPUCullingStats, OccludedInstances) == 0x14, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::GPUCullingStats) == 0x18, "Size mismatch!");

} // namespace end def MA::Flora

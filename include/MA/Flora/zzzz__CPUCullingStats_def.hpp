#pragma once
// IWYU pragma private; include "MA/Flora/CPUCullingStats.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CPUCullingStats)
// Forward declare root types
namespace MA::Flora {
struct CPUCullingStats;
}
// Write type traits
MARK_VAL_T(::MA::Flora::CPUCullingStats);
DEFINE_IL2CPP_CLASS(::MA::Flora::CPUCullingStats, "MA.Flora", "CPUCullingStats");
// Dependencies UnityEngine.EntityId, UnityEngine.Rendering.BatchCullingViewType
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CPUCullingStats
struct CORDL_TYPE CPUCullingStats {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CPUCullingStats() ;

// Ctor Parameters [CppParam { name: "ViewId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }, CppParam { name: "ViewType", ty: "::UnityEngine::Rendering::BatchCullingViewType", modifiers: "", def_value: None }, CppParam { name: "FrameIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "VisibleChunkCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "VisibleInstanceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "DrawInstanceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "DrawCommandCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CPUCullingStats(::UnityEngine::EntityId  ViewId, ::UnityEngine::Rendering::BatchCullingViewType  ViewType, int32_t  FrameIndex, int32_t  VisibleChunkCount, int32_t  VisibleInstanceCount, int32_t  DrawInstanceCount, int32_t  DrawCommandCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13170};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field ViewId, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::EntityId  ViewId;

/// @brief Field ViewType, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::Rendering::BatchCullingViewType  ViewType;

/// @brief Field FrameIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  FrameIndex;

/// @brief Field VisibleChunkCount, offset: 0xc, size: 0x4, def value: None
 int32_t  VisibleChunkCount;

/// @brief Field VisibleInstanceCount, offset: 0x10, size: 0x4, def value: None
 int32_t  VisibleInstanceCount;

/// @brief Field DrawInstanceCount, offset: 0x14, size: 0x4, def value: None
 int32_t  DrawInstanceCount;

/// @brief Field DrawCommandCount, offset: 0x18, size: 0x4, def value: None
 int32_t  DrawCommandCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CPUCullingStats, ViewId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CPUCullingStats, ViewType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CPUCullingStats, FrameIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CPUCullingStats, VisibleChunkCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CPUCullingStats, VisibleInstanceCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CPUCullingStats, DrawInstanceCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CPUCullingStats, DrawCommandCount) == 0x18, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CPUCullingStats) == 0x1c, "Size mismatch!");

} // namespace end def MA::Flora

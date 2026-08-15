#pragma once
// IWYU pragma private; include "MA/Flora/IndirectCullingParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__ConstantBufferRef_1_def.hpp"
#include "MA/Flora/zzzz__CullingViewShaderVariables_def.hpp"
#include "MA/Flora/zzzz__DrawBinConfig_def.hpp"
#include "MA/Flora/zzzz__OccluderHandles_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndirectCullingParams)
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace MA::Flora {
struct IndirectCullingParams;
}
// Write type traits
MARK_VAL_T(::MA::Flora::IndirectCullingParams);
DEFINE_IL2CPP_CLASS(::MA::Flora::IndirectCullingParams, "MA.Flora", "IndirectCullingParams");
// Dependencies MA.Flora.ConstantBufferRef`1<T>, MA.Flora.CullingViewShaderVariables, MA.Flora.DrawBinConfig, MA.Flora.OccluderHandles, UnityEngine.Rendering.BatchCullingViewType
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.IndirectCullingParams
struct CORDL_TYPE IndirectCullingParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr IndirectCullingParams() ;

// Ctor Parameters [CppParam { name: "MaxChunkCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "DrawChunkBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "DrawArgsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "DrawInfoBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "DrawBinCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "BinConfig", ty: "::MA::Flora::DrawBinConfig", modifiers: "", def_value: None }, CppParam { name: "DrawBinBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "InstanceBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "ArchetypeDataBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "BatchDomainAddressBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "TemplateDataBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "TemplateDrawBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "BlockDataBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "CullingChunkBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "CullingChunkCellBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "CullingChunkFlagBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "CullingChunkBatchDomainBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "CullingChunkAttributeBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "CullingChunkIndirectOffsetBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "CullingWorkGroupArgsBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "CullingWorkGroupCounterBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "CullingWorkGroupDataBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "IndirectArgsBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "VisibleInstancesBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "ViewShaderVariables", ty: "::MA::Flora::ConstantBufferRef_1<::MA::Flora::CullingViewShaderVariables>", modifiers: "", def_value: None }, CppParam { name: "OccluderHandles", ty: "::MA::Flora::OccluderHandles", modifiers: "", def_value: None }, CppParam { name: "ViewType", ty: "::UnityEngine::Rendering::BatchCullingViewType", modifiers: "", def_value: None }, CppParam { name: "InstanceCountMultiplier", ty: "int32_t", modifiers: "", def_value: None }]
constexpr IndirectCullingParams(int32_t  MaxChunkCount, ::UnityEngine::GraphicsBuffer*  DrawChunkBuffer, int32_t  DrawArgsCount, ::UnityEngine::GraphicsBuffer*  DrawInfoBuffer, int32_t  DrawBinCount, ::MA::Flora::DrawBinConfig  BinConfig, ::UnityEngine::GraphicsBuffer*  DrawBinBuffer, ::UnityEngine::GraphicsBuffer*  InstanceBuffer, ::UnityEngine::GraphicsBuffer*  ArchetypeDataBuffer, ::UnityEngine::GraphicsBuffer*  BatchDomainAddressBuffer, ::UnityEngine::GraphicsBuffer*  TemplateDataBuffer, ::UnityEngine::GraphicsBuffer*  TemplateDrawBuffer, ::UnityEngine::GraphicsBuffer*  BlockDataBuffer, ::UnityEngine::GraphicsBuffer*  CullingChunkBuffer, ::UnityEngine::GraphicsBuffer*  CullingChunkCellBuffer, ::UnityEngine::GraphicsBuffer*  CullingChunkFlagBuffer, ::UnityEngine::GraphicsBuffer*  CullingChunkBatchDomainBuffer, ::UnityEngine::GraphicsBuffer*  CullingChunkAttributeBuffer, ::UnityEngine::GraphicsBuffer*  CullingChunkIndirectOffsetBuffer, ::UnityEngine::GraphicsBuffer*  CullingWorkGroupArgsBuffer, ::UnityEngine::GraphicsBuffer*  CullingWorkGroupCounterBuffer, ::UnityEngine::GraphicsBuffer*  CullingWorkGroupDataBuffer, ::UnityEngine::GraphicsBuffer*  IndirectArgsBuffer, ::UnityEngine::GraphicsBuffer*  VisibleInstancesBuffer, ::MA::Flora::ConstantBufferRef_1<::MA::Flora::CullingViewShaderVariables>  ViewShaderVariables, ::MA::Flora::OccluderHandles  OccluderHandles, ::UnityEngine::Rendering::BatchCullingViewType  ViewType, int32_t  InstanceCountMultiplier) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13196};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x110};

/// @brief Field MaxChunkCount, offset: 0x0, size: 0x4, def value: None
 int32_t  MaxChunkCount;

/// @brief Field DrawChunkBuffer, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  DrawChunkBuffer;

/// @brief Field DrawArgsCount, offset: 0x10, size: 0x4, def value: None
 int32_t  DrawArgsCount;

/// @brief Field DrawInfoBuffer, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  DrawInfoBuffer;

/// @brief Field DrawBinCount, offset: 0x20, size: 0x4, def value: None
 int32_t  DrawBinCount;

/// @brief Field BinConfig, offset: 0x24, size: 0x8, def value: None
 ::MA::Flora::DrawBinConfig  BinConfig;

/// @brief Field DrawBinBuffer, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  DrawBinBuffer;

/// @brief Field InstanceBuffer, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  InstanceBuffer;

/// @brief Field ArchetypeDataBuffer, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ArchetypeDataBuffer;

/// @brief Field BatchDomainAddressBuffer, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  BatchDomainAddressBuffer;

/// @brief Field TemplateDataBuffer, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  TemplateDataBuffer;

/// @brief Field TemplateDrawBuffer, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  TemplateDrawBuffer;

/// @brief Field BlockDataBuffer, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  BlockDataBuffer;

/// @brief Field CullingChunkBuffer, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  CullingChunkBuffer;

/// @brief Field CullingChunkCellBuffer, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  CullingChunkCellBuffer;

/// @brief Field CullingChunkFlagBuffer, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  CullingChunkFlagBuffer;

/// @brief Field CullingChunkBatchDomainBuffer, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  CullingChunkBatchDomainBuffer;

/// @brief Field CullingChunkAttributeBuffer, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  CullingChunkAttributeBuffer;

/// @brief Field CullingChunkIndirectOffsetBuffer, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  CullingChunkIndirectOffsetBuffer;

/// @brief Field CullingWorkGroupArgsBuffer, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  CullingWorkGroupArgsBuffer;

/// @brief Field CullingWorkGroupCounterBuffer, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  CullingWorkGroupCounterBuffer;

/// @brief Field CullingWorkGroupDataBuffer, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  CullingWorkGroupDataBuffer;

/// @brief Field IndirectArgsBuffer, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  IndirectArgsBuffer;

/// @brief Field VisibleInstancesBuffer, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  VisibleInstancesBuffer;

/// @brief Field ViewShaderVariables, offset: 0xc0, size: 0x18, def value: None
 ::MA::Flora::ConstantBufferRef_1<::MA::Flora::CullingViewShaderVariables>  ViewShaderVariables;

/// @brief Field OccluderHandles, offset: 0xd8, size: 0x30, def value: None
 ::MA::Flora::OccluderHandles  OccluderHandles;

/// @brief Field ViewType, offset: 0x108, size: 0x4, def value: None
 ::UnityEngine::Rendering::BatchCullingViewType  ViewType;

/// @brief Field InstanceCountMultiplier, offset: 0x10c, size: 0x4, def value: None
 int32_t  InstanceCountMultiplier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::IndirectCullingParams, MaxChunkCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingParams, DrawChunkBuffer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingParams, DrawArgsCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingParams, DrawInfoBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingParams, DrawBinCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingParams, BinConfig) == 0x24, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingParams, DrawBinBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingParams, InstanceBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingParams, ArchetypeDataBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingParams, BatchDomainAddressBuffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingParams, TemplateDataBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingParams, TemplateDrawBuffer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingParams, BlockDataBuffer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingParams, CullingChunkBuffer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingParams, CullingChunkCellBuffer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingParams, CullingChunkFlagBuffer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingParams, CullingChunkBatchDomainBuffer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingParams, CullingChunkAttributeBuffer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingParams, CullingChunkIndirectOffsetBuffer) == 0x90, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingParams, CullingWorkGroupArgsBuffer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingParams, CullingWorkGroupCounterBuffer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingParams, CullingWorkGroupDataBuffer) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingParams, IndirectArgsBuffer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingParams, VisibleInstancesBuffer) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingParams, ViewShaderVariables) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingParams, OccluderHandles) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingParams, ViewType) == 0x108, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingParams, InstanceCountMultiplier) == 0x10c, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::IndirectCullingParams) == 0x110, "Size mismatch!");

} // namespace end def MA::Flora

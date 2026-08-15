#pragma once
// IWYU pragma private; include "MA/Flora/IndirectCullingParams.hpp"
#include "MA/Flora/zzzz__ConstantBufferRef_1_impl.hpp"
#include "MA/Flora/zzzz__CullingViewShaderVariables_impl.hpp"
#include "MA/Flora/zzzz__DrawBinConfig_impl.hpp"
#include "MA/Flora/zzzz__OccluderHandles_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_impl.hpp"
#include "MA/Flora/zzzz__IndirectCullingParams_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "MaxChunkCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawChunkBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawArgsCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawInfoBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawBinCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "BinConfig", ty: "::MA::Flora::DrawBinConfig", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawBinBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "InstanceBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ArchetypeDataBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "BatchDomainAddressBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateDataBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateDrawBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "BlockDataBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "CullingChunkBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "CullingChunkCellBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "CullingChunkFlagBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "CullingChunkBatchDomainBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "CullingChunkAttributeBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "CullingChunkIndirectOffsetBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "CullingWorkGroupArgsBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "CullingWorkGroupCounterBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "CullingWorkGroupDataBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "IndirectArgsBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "VisibleInstancesBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ViewShaderVariables", ty: "::MA::Flora::ConstantBufferRef_1<::MA::Flora::CullingViewShaderVariables>", modifiers: "", def_value: Some("{}") }, CppParam { name: "OccluderHandles", ty: "::MA::Flora::OccluderHandles", modifiers: "", def_value: Some("{}") }, CppParam { name: "ViewType", ty: "::UnityEngine::Rendering::BatchCullingViewType", modifiers: "", def_value: Some("{}") }, CppParam { name: "InstanceCountMultiplier", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::IndirectCullingParams::IndirectCullingParams(int32_t  MaxChunkCount, ::UnityEngine::GraphicsBuffer*  DrawChunkBuffer, int32_t  DrawArgsCount, ::UnityEngine::GraphicsBuffer*  DrawInfoBuffer, int32_t  DrawBinCount, ::MA::Flora::DrawBinConfig  BinConfig, ::UnityEngine::GraphicsBuffer*  DrawBinBuffer, ::UnityEngine::GraphicsBuffer*  InstanceBuffer, ::UnityEngine::GraphicsBuffer*  ArchetypeDataBuffer, ::UnityEngine::GraphicsBuffer*  BatchDomainAddressBuffer, ::UnityEngine::GraphicsBuffer*  TemplateDataBuffer, ::UnityEngine::GraphicsBuffer*  TemplateDrawBuffer, ::UnityEngine::GraphicsBuffer*  BlockDataBuffer, ::UnityEngine::GraphicsBuffer*  CullingChunkBuffer, ::UnityEngine::GraphicsBuffer*  CullingChunkCellBuffer, ::UnityEngine::GraphicsBuffer*  CullingChunkFlagBuffer, ::UnityEngine::GraphicsBuffer*  CullingChunkBatchDomainBuffer, ::UnityEngine::GraphicsBuffer*  CullingChunkAttributeBuffer, ::UnityEngine::GraphicsBuffer*  CullingChunkIndirectOffsetBuffer, ::UnityEngine::GraphicsBuffer*  CullingWorkGroupArgsBuffer, ::UnityEngine::GraphicsBuffer*  CullingWorkGroupCounterBuffer, ::UnityEngine::GraphicsBuffer*  CullingWorkGroupDataBuffer, ::UnityEngine::GraphicsBuffer*  IndirectArgsBuffer, ::UnityEngine::GraphicsBuffer*  VisibleInstancesBuffer, ::MA::Flora::ConstantBufferRef_1<::MA::Flora::CullingViewShaderVariables>  ViewShaderVariables, ::MA::Flora::OccluderHandles  OccluderHandles, ::UnityEngine::Rendering::BatchCullingViewType  ViewType, int32_t  InstanceCountMultiplier) noexcept  {
this->MaxChunkCount = MaxChunkCount;
this->DrawChunkBuffer = DrawChunkBuffer;
this->DrawArgsCount = DrawArgsCount;
this->DrawInfoBuffer = DrawInfoBuffer;
this->DrawBinCount = DrawBinCount;
this->BinConfig = BinConfig;
this->DrawBinBuffer = DrawBinBuffer;
this->InstanceBuffer = InstanceBuffer;
this->ArchetypeDataBuffer = ArchetypeDataBuffer;
this->BatchDomainAddressBuffer = BatchDomainAddressBuffer;
this->TemplateDataBuffer = TemplateDataBuffer;
this->TemplateDrawBuffer = TemplateDrawBuffer;
this->BlockDataBuffer = BlockDataBuffer;
this->CullingChunkBuffer = CullingChunkBuffer;
this->CullingChunkCellBuffer = CullingChunkCellBuffer;
this->CullingChunkFlagBuffer = CullingChunkFlagBuffer;
this->CullingChunkBatchDomainBuffer = CullingChunkBatchDomainBuffer;
this->CullingChunkAttributeBuffer = CullingChunkAttributeBuffer;
this->CullingChunkIndirectOffsetBuffer = CullingChunkIndirectOffsetBuffer;
this->CullingWorkGroupArgsBuffer = CullingWorkGroupArgsBuffer;
this->CullingWorkGroupCounterBuffer = CullingWorkGroupCounterBuffer;
this->CullingWorkGroupDataBuffer = CullingWorkGroupDataBuffer;
this->IndirectArgsBuffer = IndirectArgsBuffer;
this->VisibleInstancesBuffer = VisibleInstancesBuffer;
this->ViewShaderVariables = ViewShaderVariables;
this->OccluderHandles = OccluderHandles;
this->ViewType = ViewType;
this->InstanceCountMultiplier = InstanceCountMultiplier;
}
// Ctor Parameters []
constexpr ::MA::Flora::IndirectCullingParams::IndirectCullingParams()   {
}

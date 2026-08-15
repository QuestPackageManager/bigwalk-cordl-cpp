#pragma once
// IWYU pragma private; include "MA/Flora/IndirectCullingRequestParameters.hpp"
#include "MA/Flora/zzzz__DrawBinConfig_impl.hpp"
#include "MA/Flora/zzzz__FrustumPlaneCuller_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_impl.hpp"
#include "MA/Flora/zzzz__IndirectCullingRequestParameters_def.hpp"
// Ctor Parameters [CppParam { name: "FrameIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Context", ty: "::UnityEngine::Rendering::BatchCullingContext", modifiers: "", def_value: Some("{}") }, CppParam { name: "BinConfig", ty: "::MA::Flora::DrawBinConfig", modifiers: "", def_value: Some("{}") }, CppParam { name: "ScreenRelativeMetric", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshLodSelectionConstant", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "FrustumPlaneCuller", ty: "::MA::Flora::FrustumPlaneCuller", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawInstanceCapacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DrawCommandCapacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::IndirectCullingRequestParameters::IndirectCullingRequestParameters(int32_t  FrameIndex, ::UnityEngine::Rendering::BatchCullingContext  Context, ::MA::Flora::DrawBinConfig  BinConfig, float_t  ScreenRelativeMetric, float_t  MeshLodSelectionConstant, ::MA::Flora::FrustumPlaneCuller  FrustumPlaneCuller, int32_t  DrawInstanceCapacity, int32_t  DrawCommandCapacity) noexcept  {
this->FrameIndex = FrameIndex;
this->Context = Context;
this->BinConfig = BinConfig;
this->ScreenRelativeMetric = ScreenRelativeMetric;
this->MeshLodSelectionConstant = MeshLodSelectionConstant;
this->FrustumPlaneCuller = FrustumPlaneCuller;
this->DrawInstanceCapacity = DrawInstanceCapacity;
this->DrawCommandCapacity = DrawCommandCapacity;
}
// Ctor Parameters []
constexpr ::MA::Flora::IndirectCullingRequestParameters::IndirectCullingRequestParameters()   {
}

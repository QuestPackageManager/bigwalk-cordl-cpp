#pragma once
// IWYU pragma private; include "MA/Flora/OcclusionDebugOutput.hpp"
#include "MA/Flora/zzzz__OcclusionCullingDebugShaderVariables_impl.hpp"
#include "MA/Flora/zzzz__OcclusionDebugOutput_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "DepthPyramid", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: Some("{}") }, CppParam { name: "OcclusionDepthOverlay", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Constants", ty: "::MA::Flora::OcclusionCullingDebugShaderVariables", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::OcclusionDebugOutput::OcclusionDebugOutput(::UnityEngine::Rendering::RTHandle*  DepthPyramid, ::UnityEngine::GraphicsBuffer*  OcclusionDepthOverlay, ::MA::Flora::OcclusionCullingDebugShaderVariables  Constants) noexcept  {
this->DepthPyramid = DepthPyramid;
this->OcclusionDepthOverlay = OcclusionDepthOverlay;
this->Constants = Constants;
}
// Ctor Parameters []
constexpr ::MA::Flora::OcclusionDebugOutput::OcclusionDebugOutput()   {
}

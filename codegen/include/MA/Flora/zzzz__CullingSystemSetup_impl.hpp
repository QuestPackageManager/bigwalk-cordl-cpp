#pragma once
// IWYU pragma private; include "MA/Flora/CullingSystemSetup.hpp"
#include "MA/Flora/zzzz__CullingSystemSetup_def.hpp"
#include "MA/Flora/zzzz__FloraRenderPipeline_def.hpp"
#include "MA/Flora/zzzz__FloraRuntimeResources_def.hpp"
// Ctor Parameters [CppParam { name: "RenderPipeline", ty: "::MA::Flora::FloraRenderPipeline*", modifiers: "", def_value: Some("{}") }, CppParam { name: "RuntimeResources", ty: "::MA::Flora::FloraRuntimeResources*", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingSystemSetup::CullingSystemSetup(::MA::Flora::FloraRenderPipeline*  RenderPipeline, ::MA::Flora::FloraRuntimeResources*  RuntimeResources) noexcept  {
this->RenderPipeline = RenderPipeline;
this->RuntimeResources = RuntimeResources;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingSystemSetup::CullingSystemSetup()   {
}

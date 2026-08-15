#pragma once
// IWYU pragma private; include "MA/Flora/FloraRenderPipelineType.hpp"
#include "MA/Flora/zzzz__FloraRenderPipelineType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::FloraRenderPipelineType::FloraRenderPipelineType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraRenderPipelineType::FloraRenderPipelineType()   {
}
constexpr ::MA::Flora::FloraRenderPipelineType  MA::Flora::FloraRenderPipelineType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::FloraRenderPipelineType  MA::Flora::FloraRenderPipelineType::Builtin{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::FloraRenderPipelineType  MA::Flora::FloraRenderPipelineType::Universal{static_cast<int32_t>(0x2)};
constexpr ::MA::Flora::FloraRenderPipelineType  MA::Flora::FloraRenderPipelineType::HighDefinition{static_cast<int32_t>(0x3)};
constexpr ::MA::Flora::FloraRenderPipelineType  MA::Flora::FloraRenderPipelineType::Custom{static_cast<int32_t>(0x4)};

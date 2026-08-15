#pragma once
// IWYU pragma private; include "MA/Flora/TemplateRenderType.hpp"
#include "MA/Flora/zzzz__TemplateRenderType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TemplateRenderType::TemplateRenderType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::TemplateRenderType::TemplateRenderType()   {
}
constexpr ::MA::Flora::TemplateRenderType  MA::Flora::TemplateRenderType::LodGroup{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::TemplateRenderType  MA::Flora::TemplateRenderType::MeshRenderer{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::TemplateRenderType  MA::Flora::TemplateRenderType::MeshLod{static_cast<int32_t>(0x2)};
constexpr ::MA::Flora::TemplateRenderType  MA::Flora::TemplateRenderType::Billboard{static_cast<int32_t>(0x3)};

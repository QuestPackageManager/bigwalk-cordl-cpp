#pragma once
// IWYU pragma private; include "MA/Flora/TemplateOptions.hpp"
#include "MA/Flora/zzzz__TemplateOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TemplateOptions::TemplateOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::TemplateOptions::TemplateOptions()   {
}
constexpr ::MA::Flora::TemplateOptions  MA::Flora::TemplateOptions::None{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::TemplateOptions  MA::Flora::TemplateOptions::DisableMotionVectors{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::TemplateOptions  MA::Flora::TemplateOptions::DisableLightProbes{static_cast<int32_t>(0x2)};
constexpr ::MA::Flora::TemplateOptions  MA::Flora::TemplateOptions::DisableLightmaps{static_cast<int32_t>(0x4)};
constexpr ::MA::Flora::TemplateOptions  MA::Flora::TemplateOptions::RandomID{static_cast<int32_t>(0x8)};
constexpr ::MA::Flora::TemplateOptions  MA::Flora::TemplateOptions::VariationColor{static_cast<int32_t>(0x10)};

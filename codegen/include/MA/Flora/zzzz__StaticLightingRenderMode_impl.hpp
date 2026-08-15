#pragma once
// IWYU pragma private; include "MA/Flora/StaticLightingRenderMode.hpp"
#include "MA/Flora/zzzz__StaticLightingRenderMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::StaticLightingRenderMode::StaticLightingRenderMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::StaticLightingRenderMode::StaticLightingRenderMode()   {
}
constexpr ::MA::Flora::StaticLightingRenderMode  MA::Flora::StaticLightingRenderMode::None{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::StaticLightingRenderMode  MA::Flora::StaticLightingRenderMode::LightMapped{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::StaticLightingRenderMode  MA::Flora::StaticLightingRenderMode::LightProbes{static_cast<int32_t>(0x2)};

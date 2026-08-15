#pragma once
// IWYU pragma private; include "MA/Flora/FloraDensityMode.hpp"
#include "MA/Flora/zzzz__FloraDensityMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::FloraDensityMode::FloraDensityMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraDensityMode::FloraDensityMode()   {
}
constexpr ::MA::Flora::FloraDensityMode  MA::Flora::FloraDensityMode::Disabled{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::FloraDensityMode  MA::Flora::FloraDensityMode::RenderersOnly{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::FloraDensityMode  MA::Flora::FloraDensityMode::RenderersAndLODGroups{static_cast<int32_t>(0x2)};

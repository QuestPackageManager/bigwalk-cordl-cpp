#pragma once
// IWYU pragma private; include "MA/Flora/FloraMinimumScreenSizeMode.hpp"
#include "MA/Flora/zzzz__FloraMinimumScreenSizeMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::FloraMinimumScreenSizeMode::FloraMinimumScreenSizeMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraMinimumScreenSizeMode::FloraMinimumScreenSizeMode()   {
}
constexpr ::MA::Flora::FloraMinimumScreenSizeMode  MA::Flora::FloraMinimumScreenSizeMode::Disabled{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::FloraMinimumScreenSizeMode  MA::Flora::FloraMinimumScreenSizeMode::RenderersOnly{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::FloraMinimumScreenSizeMode  MA::Flora::FloraMinimumScreenSizeMode::RenderersAndLODGroups{static_cast<int32_t>(0x2)};

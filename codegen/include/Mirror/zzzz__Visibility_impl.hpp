#pragma once
// IWYU pragma private; include "Mirror/Visibility.hpp"
#include "Mirror/zzzz__Visibility_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::Visibility::Visibility(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mirror::Visibility::Visibility()   {
}
constexpr ::Mirror::Visibility  Mirror::Visibility::Default{static_cast<int32_t>(0x0)};
constexpr ::Mirror::Visibility  Mirror::Visibility::ForceHidden{static_cast<int32_t>(0x1)};
constexpr ::Mirror::Visibility  Mirror::Visibility::ForceShown{static_cast<int32_t>(0x2)};

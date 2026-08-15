#pragma once
// IWYU pragma private; include "Rewired/Config/UpdateMode.hpp"
#include "Rewired/Config/zzzz__UpdateMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Config::UpdateMode::UpdateMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Config::UpdateMode::UpdateMode()   {
}
constexpr ::Rewired::Config::UpdateMode  Rewired::Config::UpdateMode::Automatic{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Config::UpdateMode  Rewired::Config::UpdateMode::Manual{static_cast<int32_t>(0x1)};

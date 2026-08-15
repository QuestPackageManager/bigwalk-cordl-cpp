#pragma once
// IWYU pragma private; include "Rewired/Config/KeyCombinationOverrideMode.hpp"
#include "Rewired/Config/zzzz__KeyCombinationOverrideMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Config::KeyCombinationOverrideMode::KeyCombinationOverrideMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Config::KeyCombinationOverrideMode::KeyCombinationOverrideMode()   {
}
constexpr ::Rewired::Config::KeyCombinationOverrideMode  Rewired::Config::KeyCombinationOverrideMode::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Config::KeyCombinationOverrideMode  Rewired::Config::KeyCombinationOverrideMode::Pause{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Config::KeyCombinationOverrideMode  Rewired::Config::KeyCombinationOverrideMode::Cancel{static_cast<int32_t>(0x2)};
constexpr ::Rewired::Config::KeyCombinationOverrideMode  Rewired::Config::KeyCombinationOverrideMode::Overlap{static_cast<int32_t>(0x3)};

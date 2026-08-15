#pragma once
// IWYU pragma private; include "Animancer/FadeMode.hpp"
#include "Animancer/zzzz__FadeMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Animancer::FadeMode::FadeMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Animancer::FadeMode::FadeMode()   {
}
constexpr ::Animancer::FadeMode  Animancer::FadeMode::FixedSpeed{static_cast<int32_t>(0x0)};
constexpr ::Animancer::FadeMode  Animancer::FadeMode::FixedDuration{static_cast<int32_t>(0x1)};
constexpr ::Animancer::FadeMode  Animancer::FadeMode::FromStart{static_cast<int32_t>(0x2)};
constexpr ::Animancer::FadeMode  Animancer::FadeMode::NormalizedSpeed{static_cast<int32_t>(0x3)};
constexpr ::Animancer::FadeMode  Animancer::FadeMode::NormalizedDuration{static_cast<int32_t>(0x4)};
constexpr ::Animancer::FadeMode  Animancer::FadeMode::NormalizedFromStart{static_cast<int32_t>(0x5)};

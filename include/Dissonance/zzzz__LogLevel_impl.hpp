#pragma once
// IWYU pragma private; include "Dissonance/LogLevel.hpp"
#include "Dissonance/zzzz__LogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::LogLevel::LogLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::LogLevel::LogLevel()   {
}
constexpr ::Dissonance::LogLevel  Dissonance::LogLevel::Trace{static_cast<int32_t>(0x0)};
constexpr ::Dissonance::LogLevel  Dissonance::LogLevel::Debug{static_cast<int32_t>(0x1)};
constexpr ::Dissonance::LogLevel  Dissonance::LogLevel::Info{static_cast<int32_t>(0x2)};
constexpr ::Dissonance::LogLevel  Dissonance::LogLevel::Warn{static_cast<int32_t>(0x3)};
constexpr ::Dissonance::LogLevel  Dissonance::LogLevel::Error{static_cast<int32_t>(0x4)};

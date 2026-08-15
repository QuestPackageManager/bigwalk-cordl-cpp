#pragma once
// IWYU pragma private; include "Rewired/Config/LogLevel.hpp"
#include "Rewired/Config/zzzz__LogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Config::LogLevel::LogLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Config::LogLevel::LogLevel()   {
}
constexpr ::Rewired::Config::LogLevel  Rewired::Config::LogLevel::Info{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Config::LogLevel  Rewired::Config::LogLevel::Warning{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Config::LogLevel  Rewired::Config::LogLevel::Error{static_cast<int32_t>(0x2)};
constexpr ::Rewired::Config::LogLevel  Rewired::Config::LogLevel::Debug{static_cast<int32_t>(0x3)};

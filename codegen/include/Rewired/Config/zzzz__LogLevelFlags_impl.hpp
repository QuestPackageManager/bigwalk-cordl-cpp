#pragma once
// IWYU pragma private; include "Rewired/Config/LogLevelFlags.hpp"
#include "Rewired/Config/zzzz__LogLevelFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Config::LogLevelFlags::LogLevelFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Config::LogLevelFlags::LogLevelFlags()   {
}
constexpr ::Rewired::Config::LogLevelFlags  Rewired::Config::LogLevelFlags::Off{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Config::LogLevelFlags  Rewired::Config::LogLevelFlags::Info{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Config::LogLevelFlags  Rewired::Config::LogLevelFlags::Warning{static_cast<int32_t>(0x2)};
constexpr ::Rewired::Config::LogLevelFlags  Rewired::Config::LogLevelFlags::Error{static_cast<int32_t>(0x4)};
constexpr ::Rewired::Config::LogLevelFlags  Rewired::Config::LogLevelFlags::Debug{static_cast<int32_t>(0x8)};

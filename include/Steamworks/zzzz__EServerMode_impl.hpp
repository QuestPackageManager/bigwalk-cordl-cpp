#pragma once
// IWYU pragma private; include "Steamworks/EServerMode.hpp"
#include "Steamworks/zzzz__EServerMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EServerMode::EServerMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EServerMode::EServerMode()   {
}
constexpr ::Steamworks::EServerMode  Steamworks::EServerMode::eServerModeInvalid{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EServerMode  Steamworks::EServerMode::eServerModeNoAuthentication{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EServerMode  Steamworks::EServerMode::eServerModeAuthentication{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EServerMode  Steamworks::EServerMode::eServerModeAuthenticationAndSecure{static_cast<int32_t>(0x3)};

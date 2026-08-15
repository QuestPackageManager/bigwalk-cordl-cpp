#pragma once
// IWYU pragma private; include "Steamworks/ESteamControllerPad.hpp"
#include "Steamworks/zzzz__ESteamControllerPad_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ESteamControllerPad::ESteamControllerPad(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ESteamControllerPad::ESteamControllerPad()   {
}
constexpr ::Steamworks::ESteamControllerPad  Steamworks::ESteamControllerPad::k_ESteamControllerPad_Left{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ESteamControllerPad  Steamworks::ESteamControllerPad::k_ESteamControllerPad_Right{static_cast<int32_t>(0x1)};

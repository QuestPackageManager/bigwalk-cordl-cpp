#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/SteamControllerPadType.hpp"
#include "Rewired/ControllerExtensions/zzzz__SteamControllerPadType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ControllerExtensions::SteamControllerPadType::SteamControllerPadType(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::SteamControllerPadType::SteamControllerPadType()   {
}
constexpr ::Rewired::ControllerExtensions::SteamControllerPadType  Rewired::ControllerExtensions::SteamControllerPadType::Left{static_cast<uint32_t>(0x0u)};
constexpr ::Rewired::ControllerExtensions::SteamControllerPadType  Rewired::ControllerExtensions::SteamControllerPadType::Right{static_cast<uint32_t>(0x1u)};

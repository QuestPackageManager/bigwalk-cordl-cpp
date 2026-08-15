#pragma once
// IWYU pragma private; include "Steamworks/ESteamInputActionEventType.hpp"
#include "Steamworks/zzzz__ESteamInputActionEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ESteamInputActionEventType::ESteamInputActionEventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ESteamInputActionEventType::ESteamInputActionEventType()   {
}
constexpr ::Steamworks::ESteamInputActionEventType  Steamworks::ESteamInputActionEventType::ESteamInputActionEventType_DigitalAction{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ESteamInputActionEventType  Steamworks::ESteamInputActionEventType::ESteamInputActionEventType_AnalogAction{static_cast<int32_t>(0x1)};

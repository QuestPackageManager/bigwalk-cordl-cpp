#pragma once
// IWYU pragma private; include "Steamworks/ESteamDeviceFormFactor.hpp"
#include "Steamworks/zzzz__ESteamDeviceFormFactor_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ESteamDeviceFormFactor::ESteamDeviceFormFactor(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ESteamDeviceFormFactor::ESteamDeviceFormFactor()   {
}
constexpr ::Steamworks::ESteamDeviceFormFactor  Steamworks::ESteamDeviceFormFactor::k_ESteamDeviceFormFactorUnknown{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ESteamDeviceFormFactor  Steamworks::ESteamDeviceFormFactor::k_ESteamDeviceFormFactorPhone{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ESteamDeviceFormFactor  Steamworks::ESteamDeviceFormFactor::k_ESteamDeviceFormFactorTablet{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::ESteamDeviceFormFactor  Steamworks::ESteamDeviceFormFactor::k_ESteamDeviceFormFactorComputer{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::ESteamDeviceFormFactor  Steamworks::ESteamDeviceFormFactor::k_ESteamDeviceFormFactorTV{static_cast<int32_t>(0x4)};

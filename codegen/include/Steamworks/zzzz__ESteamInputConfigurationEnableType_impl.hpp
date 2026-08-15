#pragma once
// IWYU pragma private; include "Steamworks/ESteamInputConfigurationEnableType.hpp"
#include "Steamworks/zzzz__ESteamInputConfigurationEnableType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ESteamInputConfigurationEnableType::ESteamInputConfigurationEnableType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ESteamInputConfigurationEnableType::ESteamInputConfigurationEnableType()   {
}
constexpr ::Steamworks::ESteamInputConfigurationEnableType  Steamworks::ESteamInputConfigurationEnableType::k_ESteamInputConfigurationEnableType_None{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ESteamInputConfigurationEnableType  Steamworks::ESteamInputConfigurationEnableType::k_ESteamInputConfigurationEnableType_Playstation{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ESteamInputConfigurationEnableType  Steamworks::ESteamInputConfigurationEnableType::k_ESteamInputConfigurationEnableType_Xbox{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::ESteamInputConfigurationEnableType  Steamworks::ESteamInputConfigurationEnableType::k_ESteamInputConfigurationEnableType_Generic{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::ESteamInputConfigurationEnableType  Steamworks::ESteamInputConfigurationEnableType::k_ESteamInputConfigurationEnableType_Switch{static_cast<int32_t>(0x8)};

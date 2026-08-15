#pragma once
// IWYU pragma private; include "Steamworks/ESteamInputLEDFlag.hpp"
#include "Steamworks/zzzz__ESteamInputLEDFlag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ESteamInputLEDFlag::ESteamInputLEDFlag(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ESteamInputLEDFlag::ESteamInputLEDFlag()   {
}
constexpr ::Steamworks::ESteamInputLEDFlag  Steamworks::ESteamInputLEDFlag::k_ESteamInputLEDFlag_SetColor{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ESteamInputLEDFlag  Steamworks::ESteamInputLEDFlag::k_ESteamInputLEDFlag_RestoreUserDefault{static_cast<int32_t>(0x1)};

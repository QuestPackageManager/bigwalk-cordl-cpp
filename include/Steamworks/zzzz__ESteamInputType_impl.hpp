#pragma once
// IWYU pragma private; include "Steamworks/ESteamInputType.hpp"
#include "Steamworks/zzzz__ESteamInputType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ESteamInputType::ESteamInputType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ESteamInputType::ESteamInputType()   {
}
constexpr ::Steamworks::ESteamInputType  Steamworks::ESteamInputType::k_ESteamInputType_Unknown{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ESteamInputType  Steamworks::ESteamInputType::k_ESteamInputType_SteamController{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ESteamInputType  Steamworks::ESteamInputType::k_ESteamInputType_XBox360Controller{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::ESteamInputType  Steamworks::ESteamInputType::k_ESteamInputType_XBoxOneController{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::ESteamInputType  Steamworks::ESteamInputType::k_ESteamInputType_GenericGamepad{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::ESteamInputType  Steamworks::ESteamInputType::k_ESteamInputType_PS4Controller{static_cast<int32_t>(0x5)};
constexpr ::Steamworks::ESteamInputType  Steamworks::ESteamInputType::k_ESteamInputType_AppleMFiController{static_cast<int32_t>(0x6)};
constexpr ::Steamworks::ESteamInputType  Steamworks::ESteamInputType::k_ESteamInputType_AndroidController{static_cast<int32_t>(0x7)};
constexpr ::Steamworks::ESteamInputType  Steamworks::ESteamInputType::k_ESteamInputType_SwitchJoyConPair{static_cast<int32_t>(0x8)};
constexpr ::Steamworks::ESteamInputType  Steamworks::ESteamInputType::k_ESteamInputType_SwitchJoyConSingle{static_cast<int32_t>(0x9)};
constexpr ::Steamworks::ESteamInputType  Steamworks::ESteamInputType::k_ESteamInputType_SwitchProController{static_cast<int32_t>(0xa)};
constexpr ::Steamworks::ESteamInputType  Steamworks::ESteamInputType::k_ESteamInputType_MobileTouch{static_cast<int32_t>(0xb)};
constexpr ::Steamworks::ESteamInputType  Steamworks::ESteamInputType::k_ESteamInputType_PS3Controller{static_cast<int32_t>(0xc)};
constexpr ::Steamworks::ESteamInputType  Steamworks::ESteamInputType::k_ESteamInputType_PS5Controller{static_cast<int32_t>(0xd)};
constexpr ::Steamworks::ESteamInputType  Steamworks::ESteamInputType::k_ESteamInputType_SteamDeckController{static_cast<int32_t>(0xe)};
constexpr ::Steamworks::ESteamInputType  Steamworks::ESteamInputType::k_ESteamInputType_Count{static_cast<int32_t>(0xf)};
constexpr ::Steamworks::ESteamInputType  Steamworks::ESteamInputType::k_ESteamInputType_MaximumPossibleValue{static_cast<int32_t>(0xff)};

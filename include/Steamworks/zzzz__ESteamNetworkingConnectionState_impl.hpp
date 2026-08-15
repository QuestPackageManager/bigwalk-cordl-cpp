#pragma once
// IWYU pragma private; include "Steamworks/ESteamNetworkingConnectionState.hpp"
#include "Steamworks/zzzz__ESteamNetworkingConnectionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ESteamNetworkingConnectionState::ESteamNetworkingConnectionState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ESteamNetworkingConnectionState::ESteamNetworkingConnectionState()   {
}
constexpr ::Steamworks::ESteamNetworkingConnectionState  Steamworks::ESteamNetworkingConnectionState::k_ESteamNetworkingConnectionState_None{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ESteamNetworkingConnectionState  Steamworks::ESteamNetworkingConnectionState::k_ESteamNetworkingConnectionState_Connecting{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ESteamNetworkingConnectionState  Steamworks::ESteamNetworkingConnectionState::k_ESteamNetworkingConnectionState_FindingRoute{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::ESteamNetworkingConnectionState  Steamworks::ESteamNetworkingConnectionState::k_ESteamNetworkingConnectionState_Connected{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::ESteamNetworkingConnectionState  Steamworks::ESteamNetworkingConnectionState::k_ESteamNetworkingConnectionState_ClosedByPeer{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::ESteamNetworkingConnectionState  Steamworks::ESteamNetworkingConnectionState::k_ESteamNetworkingConnectionState_ProblemDetectedLocally{static_cast<int32_t>(0x5)};
constexpr ::Steamworks::ESteamNetworkingConnectionState  Steamworks::ESteamNetworkingConnectionState::k_ESteamNetworkingConnectionState_FinWait{static_cast<int32_t>(0xffffffff)};
constexpr ::Steamworks::ESteamNetworkingConnectionState  Steamworks::ESteamNetworkingConnectionState::k_ESteamNetworkingConnectionState_Linger{static_cast<int32_t>(0xfffffffe)};
constexpr ::Steamworks::ESteamNetworkingConnectionState  Steamworks::ESteamNetworkingConnectionState::k_ESteamNetworkingConnectionState_Dead{static_cast<int32_t>(0xfffffffd)};
constexpr ::Steamworks::ESteamNetworkingConnectionState  Steamworks::ESteamNetworkingConnectionState::k_ESteamNetworkingConnectionState__Force32Bit{static_cast<int32_t>(0x7fffffff)};

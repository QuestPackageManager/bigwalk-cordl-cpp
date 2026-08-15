#pragma once
// IWYU pragma private; include "Steamworks/ESteamNetConnectionEnd.hpp"
#include "Steamworks/zzzz__ESteamNetConnectionEnd_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ESteamNetConnectionEnd::ESteamNetConnectionEnd(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ESteamNetConnectionEnd::ESteamNetConnectionEnd()   {
}
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_Invalid{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_App_Min{static_cast<int32_t>(0x3e8)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_App_Generic{static_cast<int32_t>(0x3e8)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_App_Max{static_cast<int32_t>(0x7cf)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_AppException_Min{static_cast<int32_t>(0x7d0)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_AppException_Generic{static_cast<int32_t>(0x7d0)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_AppException_Max{static_cast<int32_t>(0xbb7)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_Local_Min{static_cast<int32_t>(0xbb8)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_Local_OfflineMode{static_cast<int32_t>(0xbb9)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_Local_ManyRelayConnectivity{static_cast<int32_t>(0xbba)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_Local_HostedServerPrimaryRelay{static_cast<int32_t>(0xbbb)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_Local_NetworkConfig{static_cast<int32_t>(0xbbc)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_Local_Rights{static_cast<int32_t>(0xbbd)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_Local_P2P_ICE_NoPublicAddresses{static_cast<int32_t>(0xbbe)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_Local_Max{static_cast<int32_t>(0xf9f)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_Remote_Min{static_cast<int32_t>(0xfa0)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_Remote_Timeout{static_cast<int32_t>(0xfa1)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_Remote_BadCrypt{static_cast<int32_t>(0xfa2)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_Remote_BadCert{static_cast<int32_t>(0xfa3)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_Remote_BadProtocolVersion{static_cast<int32_t>(0xfa6)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_Remote_P2P_ICE_NoPublicAddresses{static_cast<int32_t>(0xfa7)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_Remote_Max{static_cast<int32_t>(0x1387)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_Misc_Min{static_cast<int32_t>(0x1388)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_Misc_Generic{static_cast<int32_t>(0x1389)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_Misc_InternalError{static_cast<int32_t>(0x138a)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_Misc_Timeout{static_cast<int32_t>(0x138b)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_Misc_SteamConnectivity{static_cast<int32_t>(0x138d)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_Misc_NoRelaySessionsToClient{static_cast<int32_t>(0x138e)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_Misc_P2P_Rendezvous{static_cast<int32_t>(0x1390)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_Misc_P2P_NAT_Firewall{static_cast<int32_t>(0x1391)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_Misc_PeerSentNoConnection{static_cast<int32_t>(0x1392)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd_Misc_Max{static_cast<int32_t>(0x176f)};
constexpr ::Steamworks::ESteamNetConnectionEnd  Steamworks::ESteamNetConnectionEnd::k_ESteamNetConnectionEnd__Force32Bit{static_cast<int32_t>(0x7fffffff)};

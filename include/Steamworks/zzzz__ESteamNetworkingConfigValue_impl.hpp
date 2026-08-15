#pragma once
// IWYU pragma private; include "Steamworks/ESteamNetworkingConfigValue.hpp"
#include "Steamworks/zzzz__ESteamNetworkingConfigValue_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ESteamNetworkingConfigValue::ESteamNetworkingConfigValue(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ESteamNetworkingConfigValue::ESteamNetworkingConfigValue()   {
}
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_Invalid{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_TimeoutInitial{static_cast<int32_t>(0x18)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_TimeoutConnected{static_cast<int32_t>(0x19)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_SendBufferSize{static_cast<int32_t>(0x9)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_ConnectionUserData{static_cast<int32_t>(0x28)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_SendRateMin{static_cast<int32_t>(0xa)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_SendRateMax{static_cast<int32_t>(0xb)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_NagleTime{static_cast<int32_t>(0xc)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_IP_AllowWithoutAuth{static_cast<int32_t>(0x17)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_MTU_PacketSize{static_cast<int32_t>(0x20)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_MTU_DataSize{static_cast<int32_t>(0x21)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_Unencrypted{static_cast<int32_t>(0x22)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_SymmetricConnect{static_cast<int32_t>(0x25)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_LocalVirtualPort{static_cast<int32_t>(0x26)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_DualWifi_Enable{static_cast<int32_t>(0x27)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_EnableDiagnosticsUI{static_cast<int32_t>(0x2e)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_FakePacketLoss_Send{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_FakePacketLoss_Recv{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_FakePacketLag_Send{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_FakePacketLag_Recv{static_cast<int32_t>(0x5)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_FakePacketReorder_Send{static_cast<int32_t>(0x6)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_FakePacketReorder_Recv{static_cast<int32_t>(0x7)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_FakePacketReorder_Time{static_cast<int32_t>(0x8)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_FakePacketDup_Send{static_cast<int32_t>(0x1a)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_FakePacketDup_Recv{static_cast<int32_t>(0x1b)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_FakePacketDup_TimeMax{static_cast<int32_t>(0x1c)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_PacketTraceMaxBytes{static_cast<int32_t>(0x29)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_FakeRateLimit_Send_Rate{static_cast<int32_t>(0x2a)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_FakeRateLimit_Send_Burst{static_cast<int32_t>(0x2b)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_FakeRateLimit_Recv_Rate{static_cast<int32_t>(0x2c)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_FakeRateLimit_Recv_Burst{static_cast<int32_t>(0x2d)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_Callback_ConnectionStatusChanged{static_cast<int32_t>(0xc9)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_Callback_AuthStatusChanged{static_cast<int32_t>(0xca)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_Callback_RelayNetworkStatusChanged{static_cast<int32_t>(0xcb)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_Callback_MessagesSessionRequest{static_cast<int32_t>(0xcc)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_Callback_MessagesSessionFailed{static_cast<int32_t>(0xcd)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_Callback_CreateConnectionSignaling{static_cast<int32_t>(0xce)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_Callback_FakeIPResult{static_cast<int32_t>(0xcf)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_P2P_STUN_ServerList{static_cast<int32_t>(0x67)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_P2P_Transport_ICE_Enable{static_cast<int32_t>(0x68)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_P2P_Transport_ICE_Penalty{static_cast<int32_t>(0x69)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_P2P_Transport_SDR_Penalty{static_cast<int32_t>(0x6a)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_SDRClient_ConsecutitivePingTimeoutsFailInitial{static_cast<int32_t>(0x13)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_SDRClient_ConsecutitivePingTimeoutsFail{static_cast<int32_t>(0x14)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_SDRClient_MinPingsBeforePingAccurate{static_cast<int32_t>(0x15)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_SDRClient_SingleSocket{static_cast<int32_t>(0x16)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_SDRClient_ForceRelayCluster{static_cast<int32_t>(0x1d)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_SDRClient_DebugTicketAddress{static_cast<int32_t>(0x1e)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_SDRClient_ForceProxyAddr{static_cast<int32_t>(0x1f)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_SDRClient_FakeClusterPing{static_cast<int32_t>(0x24)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_LogLevel_AckRTT{static_cast<int32_t>(0xd)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_LogLevel_PacketDecode{static_cast<int32_t>(0xe)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_LogLevel_Message{static_cast<int32_t>(0xf)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_LogLevel_PacketGaps{static_cast<int32_t>(0x10)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_LogLevel_P2PRendezvous{static_cast<int32_t>(0x11)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_LogLevel_SDRRelayPings{static_cast<int32_t>(0x12)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfig_DELETED_EnumerateDevVars{static_cast<int32_t>(0x23)};
constexpr ::Steamworks::ESteamNetworkingConfigValue  Steamworks::ESteamNetworkingConfigValue::k_ESteamNetworkingConfigValue__Force32Bit{static_cast<int32_t>(0x7fffffff)};

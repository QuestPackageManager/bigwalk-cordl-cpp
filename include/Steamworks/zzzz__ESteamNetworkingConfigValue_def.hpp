#pragma once
// IWYU pragma private; include "Steamworks/ESteamNetworkingConfigValue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ESteamNetworkingConfigValue)
// Forward declare root types
namespace Steamworks {
struct ESteamNetworkingConfigValue;
}
// Write type traits
MARK_VAL_T(::Steamworks::ESteamNetworkingConfigValue);
DEFINE_IL2CPP_CLASS(::Steamworks::ESteamNetworkingConfigValue, "Steamworks", "ESteamNetworkingConfigValue");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ESteamNetworkingConfigValue
struct CORDL_TYPE ESteamNetworkingConfigValue {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ESteamNetworkingConfigValue_Unwrapped
enum struct __ESteamNetworkingConfigValue_Unwrapped : int32_t {
__E_k_ESteamNetworkingConfig_Invalid = static_cast<int32_t>(0x0),
__E_k_ESteamNetworkingConfig_TimeoutInitial = static_cast<int32_t>(0x18),
__E_k_ESteamNetworkingConfig_TimeoutConnected = static_cast<int32_t>(0x19),
__E_k_ESteamNetworkingConfig_SendBufferSize = static_cast<int32_t>(0x9),
__E_k_ESteamNetworkingConfig_ConnectionUserData = static_cast<int32_t>(0x28),
__E_k_ESteamNetworkingConfig_SendRateMin = static_cast<int32_t>(0xa),
__E_k_ESteamNetworkingConfig_SendRateMax = static_cast<int32_t>(0xb),
__E_k_ESteamNetworkingConfig_NagleTime = static_cast<int32_t>(0xc),
__E_k_ESteamNetworkingConfig_IP_AllowWithoutAuth = static_cast<int32_t>(0x17),
__E_k_ESteamNetworkingConfig_MTU_PacketSize = static_cast<int32_t>(0x20),
__E_k_ESteamNetworkingConfig_MTU_DataSize = static_cast<int32_t>(0x21),
__E_k_ESteamNetworkingConfig_Unencrypted = static_cast<int32_t>(0x22),
__E_k_ESteamNetworkingConfig_SymmetricConnect = static_cast<int32_t>(0x25),
__E_k_ESteamNetworkingConfig_LocalVirtualPort = static_cast<int32_t>(0x26),
__E_k_ESteamNetworkingConfig_DualWifi_Enable = static_cast<int32_t>(0x27),
__E_k_ESteamNetworkingConfig_EnableDiagnosticsUI = static_cast<int32_t>(0x2e),
__E_k_ESteamNetworkingConfig_FakePacketLoss_Send = static_cast<int32_t>(0x2),
__E_k_ESteamNetworkingConfig_FakePacketLoss_Recv = static_cast<int32_t>(0x3),
__E_k_ESteamNetworkingConfig_FakePacketLag_Send = static_cast<int32_t>(0x4),
__E_k_ESteamNetworkingConfig_FakePacketLag_Recv = static_cast<int32_t>(0x5),
__E_k_ESteamNetworkingConfig_FakePacketReorder_Send = static_cast<int32_t>(0x6),
__E_k_ESteamNetworkingConfig_FakePacketReorder_Recv = static_cast<int32_t>(0x7),
__E_k_ESteamNetworkingConfig_FakePacketReorder_Time = static_cast<int32_t>(0x8),
__E_k_ESteamNetworkingConfig_FakePacketDup_Send = static_cast<int32_t>(0x1a),
__E_k_ESteamNetworkingConfig_FakePacketDup_Recv = static_cast<int32_t>(0x1b),
__E_k_ESteamNetworkingConfig_FakePacketDup_TimeMax = static_cast<int32_t>(0x1c),
__E_k_ESteamNetworkingConfig_PacketTraceMaxBytes = static_cast<int32_t>(0x29),
__E_k_ESteamNetworkingConfig_FakeRateLimit_Send_Rate = static_cast<int32_t>(0x2a),
__E_k_ESteamNetworkingConfig_FakeRateLimit_Send_Burst = static_cast<int32_t>(0x2b),
__E_k_ESteamNetworkingConfig_FakeRateLimit_Recv_Rate = static_cast<int32_t>(0x2c),
__E_k_ESteamNetworkingConfig_FakeRateLimit_Recv_Burst = static_cast<int32_t>(0x2d),
__E_k_ESteamNetworkingConfig_Callback_ConnectionStatusChanged = static_cast<int32_t>(0xc9),
__E_k_ESteamNetworkingConfig_Callback_AuthStatusChanged = static_cast<int32_t>(0xca),
__E_k_ESteamNetworkingConfig_Callback_RelayNetworkStatusChanged = static_cast<int32_t>(0xcb),
__E_k_ESteamNetworkingConfig_Callback_MessagesSessionRequest = static_cast<int32_t>(0xcc),
__E_k_ESteamNetworkingConfig_Callback_MessagesSessionFailed = static_cast<int32_t>(0xcd),
__E_k_ESteamNetworkingConfig_Callback_CreateConnectionSignaling = static_cast<int32_t>(0xce),
__E_k_ESteamNetworkingConfig_Callback_FakeIPResult = static_cast<int32_t>(0xcf),
__E_k_ESteamNetworkingConfig_P2P_STUN_ServerList = static_cast<int32_t>(0x67),
__E_k_ESteamNetworkingConfig_P2P_Transport_ICE_Enable = static_cast<int32_t>(0x68),
__E_k_ESteamNetworkingConfig_P2P_Transport_ICE_Penalty = static_cast<int32_t>(0x69),
__E_k_ESteamNetworkingConfig_P2P_Transport_SDR_Penalty = static_cast<int32_t>(0x6a),
__E_k_ESteamNetworkingConfig_SDRClient_ConsecutitivePingTimeoutsFailInitial = static_cast<int32_t>(0x13),
__E_k_ESteamNetworkingConfig_SDRClient_ConsecutitivePingTimeoutsFail = static_cast<int32_t>(0x14),
__E_k_ESteamNetworkingConfig_SDRClient_MinPingsBeforePingAccurate = static_cast<int32_t>(0x15),
__E_k_ESteamNetworkingConfig_SDRClient_SingleSocket = static_cast<int32_t>(0x16),
__E_k_ESteamNetworkingConfig_SDRClient_ForceRelayCluster = static_cast<int32_t>(0x1d),
__E_k_ESteamNetworkingConfig_SDRClient_DebugTicketAddress = static_cast<int32_t>(0x1e),
__E_k_ESteamNetworkingConfig_SDRClient_ForceProxyAddr = static_cast<int32_t>(0x1f),
__E_k_ESteamNetworkingConfig_SDRClient_FakeClusterPing = static_cast<int32_t>(0x24),
__E_k_ESteamNetworkingConfig_LogLevel_AckRTT = static_cast<int32_t>(0xd),
__E_k_ESteamNetworkingConfig_LogLevel_PacketDecode = static_cast<int32_t>(0xe),
__E_k_ESteamNetworkingConfig_LogLevel_Message = static_cast<int32_t>(0xf),
__E_k_ESteamNetworkingConfig_LogLevel_PacketGaps = static_cast<int32_t>(0x10),
__E_k_ESteamNetworkingConfig_LogLevel_P2PRendezvous = static_cast<int32_t>(0x11),
__E_k_ESteamNetworkingConfig_LogLevel_SDRRelayPings = static_cast<int32_t>(0x12),
__E_k_ESteamNetworkingConfig_DELETED_EnumerateDevVars = static_cast<int32_t>(0x23),
__E_k_ESteamNetworkingConfigValue__Force32Bit = static_cast<int32_t>(0x7fffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ESteamNetworkingConfigValue_Unwrapped () const noexcept {
return static_cast<__ESteamNetworkingConfigValue_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ESteamNetworkingConfigValue() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ESteamNetworkingConfigValue(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16339};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ESteamNetworkingConfigValue__Force32Bit value: I32(2147483647)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfigValue__Force32Bit;

/// @brief Field k_ESteamNetworkingConfig_Callback_AuthStatusChanged value: I32(202)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_Callback_AuthStatusChanged;

/// @brief Field k_ESteamNetworkingConfig_Callback_ConnectionStatusChanged value: I32(201)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_Callback_ConnectionStatusChanged;

/// @brief Field k_ESteamNetworkingConfig_Callback_CreateConnectionSignaling value: I32(206)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_Callback_CreateConnectionSignaling;

/// @brief Field k_ESteamNetworkingConfig_Callback_FakeIPResult value: I32(207)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_Callback_FakeIPResult;

/// @brief Field k_ESteamNetworkingConfig_Callback_MessagesSessionFailed value: I32(205)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_Callback_MessagesSessionFailed;

/// @brief Field k_ESteamNetworkingConfig_Callback_MessagesSessionRequest value: I32(204)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_Callback_MessagesSessionRequest;

/// @brief Field k_ESteamNetworkingConfig_Callback_RelayNetworkStatusChanged value: I32(203)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_Callback_RelayNetworkStatusChanged;

/// @brief Field k_ESteamNetworkingConfig_ConnectionUserData value: I32(40)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_ConnectionUserData;

/// @brief Field k_ESteamNetworkingConfig_DELETED_EnumerateDevVars value: I32(35)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_DELETED_EnumerateDevVars;

/// @brief Field k_ESteamNetworkingConfig_DualWifi_Enable value: I32(39)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_DualWifi_Enable;

/// @brief Field k_ESteamNetworkingConfig_EnableDiagnosticsUI value: I32(46)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_EnableDiagnosticsUI;

/// @brief Field k_ESteamNetworkingConfig_FakePacketDup_Recv value: I32(27)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_FakePacketDup_Recv;

/// @brief Field k_ESteamNetworkingConfig_FakePacketDup_Send value: I32(26)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_FakePacketDup_Send;

/// @brief Field k_ESteamNetworkingConfig_FakePacketDup_TimeMax value: I32(28)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_FakePacketDup_TimeMax;

/// @brief Field k_ESteamNetworkingConfig_FakePacketLag_Recv value: I32(5)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_FakePacketLag_Recv;

/// @brief Field k_ESteamNetworkingConfig_FakePacketLag_Send value: I32(4)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_FakePacketLag_Send;

/// @brief Field k_ESteamNetworkingConfig_FakePacketLoss_Recv value: I32(3)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_FakePacketLoss_Recv;

/// @brief Field k_ESteamNetworkingConfig_FakePacketLoss_Send value: I32(2)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_FakePacketLoss_Send;

/// @brief Field k_ESteamNetworkingConfig_FakePacketReorder_Recv value: I32(7)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_FakePacketReorder_Recv;

/// @brief Field k_ESteamNetworkingConfig_FakePacketReorder_Send value: I32(6)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_FakePacketReorder_Send;

/// @brief Field k_ESteamNetworkingConfig_FakePacketReorder_Time value: I32(8)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_FakePacketReorder_Time;

/// @brief Field k_ESteamNetworkingConfig_FakeRateLimit_Recv_Burst value: I32(45)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_FakeRateLimit_Recv_Burst;

/// @brief Field k_ESteamNetworkingConfig_FakeRateLimit_Recv_Rate value: I32(44)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_FakeRateLimit_Recv_Rate;

/// @brief Field k_ESteamNetworkingConfig_FakeRateLimit_Send_Burst value: I32(43)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_FakeRateLimit_Send_Burst;

/// @brief Field k_ESteamNetworkingConfig_FakeRateLimit_Send_Rate value: I32(42)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_FakeRateLimit_Send_Rate;

/// @brief Field k_ESteamNetworkingConfig_IP_AllowWithoutAuth value: I32(23)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_IP_AllowWithoutAuth;

/// @brief Field k_ESteamNetworkingConfig_Invalid value: I32(0)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_Invalid;

/// @brief Field k_ESteamNetworkingConfig_LocalVirtualPort value: I32(38)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_LocalVirtualPort;

/// @brief Field k_ESteamNetworkingConfig_LogLevel_AckRTT value: I32(13)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_LogLevel_AckRTT;

/// @brief Field k_ESteamNetworkingConfig_LogLevel_Message value: I32(15)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_LogLevel_Message;

/// @brief Field k_ESteamNetworkingConfig_LogLevel_P2PRendezvous value: I32(17)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_LogLevel_P2PRendezvous;

/// @brief Field k_ESteamNetworkingConfig_LogLevel_PacketDecode value: I32(14)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_LogLevel_PacketDecode;

/// @brief Field k_ESteamNetworkingConfig_LogLevel_PacketGaps value: I32(16)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_LogLevel_PacketGaps;

/// @brief Field k_ESteamNetworkingConfig_LogLevel_SDRRelayPings value: I32(18)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_LogLevel_SDRRelayPings;

/// @brief Field k_ESteamNetworkingConfig_MTU_DataSize value: I32(33)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_MTU_DataSize;

/// @brief Field k_ESteamNetworkingConfig_MTU_PacketSize value: I32(32)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_MTU_PacketSize;

/// @brief Field k_ESteamNetworkingConfig_NagleTime value: I32(12)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_NagleTime;

/// @brief Field k_ESteamNetworkingConfig_P2P_STUN_ServerList value: I32(103)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_P2P_STUN_ServerList;

/// @brief Field k_ESteamNetworkingConfig_P2P_Transport_ICE_Enable value: I32(104)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_P2P_Transport_ICE_Enable;

/// @brief Field k_ESteamNetworkingConfig_P2P_Transport_ICE_Penalty value: I32(105)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_P2P_Transport_ICE_Penalty;

/// @brief Field k_ESteamNetworkingConfig_P2P_Transport_SDR_Penalty value: I32(106)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_P2P_Transport_SDR_Penalty;

/// @brief Field k_ESteamNetworkingConfig_PacketTraceMaxBytes value: I32(41)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_PacketTraceMaxBytes;

/// @brief Field k_ESteamNetworkingConfig_SDRClient_ConsecutitivePingTimeoutsFail value: I32(20)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_SDRClient_ConsecutitivePingTimeoutsFail;

/// @brief Field k_ESteamNetworkingConfig_SDRClient_ConsecutitivePingTimeoutsFailInitial value: I32(19)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_SDRClient_ConsecutitivePingTimeoutsFailInitial;

/// @brief Field k_ESteamNetworkingConfig_SDRClient_DebugTicketAddress value: I32(30)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_SDRClient_DebugTicketAddress;

/// @brief Field k_ESteamNetworkingConfig_SDRClient_FakeClusterPing value: I32(36)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_SDRClient_FakeClusterPing;

/// @brief Field k_ESteamNetworkingConfig_SDRClient_ForceProxyAddr value: I32(31)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_SDRClient_ForceProxyAddr;

/// @brief Field k_ESteamNetworkingConfig_SDRClient_ForceRelayCluster value: I32(29)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_SDRClient_ForceRelayCluster;

/// @brief Field k_ESteamNetworkingConfig_SDRClient_MinPingsBeforePingAccurate value: I32(21)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_SDRClient_MinPingsBeforePingAccurate;

/// @brief Field k_ESteamNetworkingConfig_SDRClient_SingleSocket value: I32(22)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_SDRClient_SingleSocket;

/// @brief Field k_ESteamNetworkingConfig_SendBufferSize value: I32(9)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_SendBufferSize;

/// @brief Field k_ESteamNetworkingConfig_SendRateMax value: I32(11)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_SendRateMax;

/// @brief Field k_ESteamNetworkingConfig_SendRateMin value: I32(10)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_SendRateMin;

/// @brief Field k_ESteamNetworkingConfig_SymmetricConnect value: I32(37)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_SymmetricConnect;

/// @brief Field k_ESteamNetworkingConfig_TimeoutConnected value: I32(25)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_TimeoutConnected;

/// @brief Field k_ESteamNetworkingConfig_TimeoutInitial value: I32(24)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_TimeoutInitial;

/// @brief Field k_ESteamNetworkingConfig_Unencrypted value: I32(34)
static ::Steamworks::ESteamNetworkingConfigValue const k_ESteamNetworkingConfig_Unencrypted;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ESteamNetworkingConfigValue, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ESteamNetworkingConfigValue) == 0x4, "Size mismatch!");

} // namespace end def Steamworks

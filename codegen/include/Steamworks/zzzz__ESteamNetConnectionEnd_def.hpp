#pragma once
// IWYU pragma private; include "Steamworks/ESteamNetConnectionEnd.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ESteamNetConnectionEnd)
// Forward declare root types
namespace Steamworks {
struct ESteamNetConnectionEnd;
}
// Write type traits
MARK_VAL_T(::Steamworks::ESteamNetConnectionEnd);
DEFINE_IL2CPP_CLASS(::Steamworks::ESteamNetConnectionEnd, "Steamworks", "ESteamNetConnectionEnd");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ESteamNetConnectionEnd
struct CORDL_TYPE ESteamNetConnectionEnd {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ESteamNetConnectionEnd_Unwrapped
enum struct __ESteamNetConnectionEnd_Unwrapped : int32_t {
__E_k_ESteamNetConnectionEnd_Invalid = static_cast<int32_t>(0x0),
__E_k_ESteamNetConnectionEnd_App_Min = static_cast<int32_t>(0x3e8),
__E_k_ESteamNetConnectionEnd_App_Generic = static_cast<int32_t>(0x3e8),
__E_k_ESteamNetConnectionEnd_App_Max = static_cast<int32_t>(0x7cf),
__E_k_ESteamNetConnectionEnd_AppException_Min = static_cast<int32_t>(0x7d0),
__E_k_ESteamNetConnectionEnd_AppException_Generic = static_cast<int32_t>(0x7d0),
__E_k_ESteamNetConnectionEnd_AppException_Max = static_cast<int32_t>(0xbb7),
__E_k_ESteamNetConnectionEnd_Local_Min = static_cast<int32_t>(0xbb8),
__E_k_ESteamNetConnectionEnd_Local_OfflineMode = static_cast<int32_t>(0xbb9),
__E_k_ESteamNetConnectionEnd_Local_ManyRelayConnectivity = static_cast<int32_t>(0xbba),
__E_k_ESteamNetConnectionEnd_Local_HostedServerPrimaryRelay = static_cast<int32_t>(0xbbb),
__E_k_ESteamNetConnectionEnd_Local_NetworkConfig = static_cast<int32_t>(0xbbc),
__E_k_ESteamNetConnectionEnd_Local_Rights = static_cast<int32_t>(0xbbd),
__E_k_ESteamNetConnectionEnd_Local_P2P_ICE_NoPublicAddresses = static_cast<int32_t>(0xbbe),
__E_k_ESteamNetConnectionEnd_Local_Max = static_cast<int32_t>(0xf9f),
__E_k_ESteamNetConnectionEnd_Remote_Min = static_cast<int32_t>(0xfa0),
__E_k_ESteamNetConnectionEnd_Remote_Timeout = static_cast<int32_t>(0xfa1),
__E_k_ESteamNetConnectionEnd_Remote_BadCrypt = static_cast<int32_t>(0xfa2),
__E_k_ESteamNetConnectionEnd_Remote_BadCert = static_cast<int32_t>(0xfa3),
__E_k_ESteamNetConnectionEnd_Remote_BadProtocolVersion = static_cast<int32_t>(0xfa6),
__E_k_ESteamNetConnectionEnd_Remote_P2P_ICE_NoPublicAddresses = static_cast<int32_t>(0xfa7),
__E_k_ESteamNetConnectionEnd_Remote_Max = static_cast<int32_t>(0x1387),
__E_k_ESteamNetConnectionEnd_Misc_Min = static_cast<int32_t>(0x1388),
__E_k_ESteamNetConnectionEnd_Misc_Generic = static_cast<int32_t>(0x1389),
__E_k_ESteamNetConnectionEnd_Misc_InternalError = static_cast<int32_t>(0x138a),
__E_k_ESteamNetConnectionEnd_Misc_Timeout = static_cast<int32_t>(0x138b),
__E_k_ESteamNetConnectionEnd_Misc_SteamConnectivity = static_cast<int32_t>(0x138d),
__E_k_ESteamNetConnectionEnd_Misc_NoRelaySessionsToClient = static_cast<int32_t>(0x138e),
__E_k_ESteamNetConnectionEnd_Misc_P2P_Rendezvous = static_cast<int32_t>(0x1390),
__E_k_ESteamNetConnectionEnd_Misc_P2P_NAT_Firewall = static_cast<int32_t>(0x1391),
__E_k_ESteamNetConnectionEnd_Misc_PeerSentNoConnection = static_cast<int32_t>(0x1392),
__E_k_ESteamNetConnectionEnd_Misc_Max = static_cast<int32_t>(0x176f),
__E_k_ESteamNetConnectionEnd__Force32Bit = static_cast<int32_t>(0x7fffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ESteamNetConnectionEnd_Unwrapped () const noexcept {
return static_cast<__ESteamNetConnectionEnd_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ESteamNetConnectionEnd() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ESteamNetConnectionEnd(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16336};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ESteamNetConnectionEnd_AppException_Generic value: I32(2000)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_AppException_Generic;

/// @brief Field k_ESteamNetConnectionEnd_AppException_Max value: I32(2999)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_AppException_Max;

/// @brief Field k_ESteamNetConnectionEnd_AppException_Min value: I32(2000)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_AppException_Min;

/// @brief Field k_ESteamNetConnectionEnd_App_Generic value: I32(1000)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_App_Generic;

/// @brief Field k_ESteamNetConnectionEnd_App_Max value: I32(1999)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_App_Max;

/// @brief Field k_ESteamNetConnectionEnd_App_Min value: I32(1000)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_App_Min;

/// @brief Field k_ESteamNetConnectionEnd_Invalid value: I32(0)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_Invalid;

/// @brief Field k_ESteamNetConnectionEnd_Local_HostedServerPrimaryRelay value: I32(3003)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_Local_HostedServerPrimaryRelay;

/// @brief Field k_ESteamNetConnectionEnd_Local_ManyRelayConnectivity value: I32(3002)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_Local_ManyRelayConnectivity;

/// @brief Field k_ESteamNetConnectionEnd_Local_Max value: I32(3999)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_Local_Max;

/// @brief Field k_ESteamNetConnectionEnd_Local_Min value: I32(3000)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_Local_Min;

/// @brief Field k_ESteamNetConnectionEnd_Local_NetworkConfig value: I32(3004)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_Local_NetworkConfig;

/// @brief Field k_ESteamNetConnectionEnd_Local_OfflineMode value: I32(3001)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_Local_OfflineMode;

/// @brief Field k_ESteamNetConnectionEnd_Local_P2P_ICE_NoPublicAddresses value: I32(3006)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_Local_P2P_ICE_NoPublicAddresses;

/// @brief Field k_ESteamNetConnectionEnd_Local_Rights value: I32(3005)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_Local_Rights;

/// @brief Field k_ESteamNetConnectionEnd_Misc_Generic value: I32(5001)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_Misc_Generic;

/// @brief Field k_ESteamNetConnectionEnd_Misc_InternalError value: I32(5002)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_Misc_InternalError;

/// @brief Field k_ESteamNetConnectionEnd_Misc_Max value: I32(5999)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_Misc_Max;

/// @brief Field k_ESteamNetConnectionEnd_Misc_Min value: I32(5000)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_Misc_Min;

/// @brief Field k_ESteamNetConnectionEnd_Misc_NoRelaySessionsToClient value: I32(5006)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_Misc_NoRelaySessionsToClient;

/// @brief Field k_ESteamNetConnectionEnd_Misc_P2P_NAT_Firewall value: I32(5009)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_Misc_P2P_NAT_Firewall;

/// @brief Field k_ESteamNetConnectionEnd_Misc_P2P_Rendezvous value: I32(5008)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_Misc_P2P_Rendezvous;

/// @brief Field k_ESteamNetConnectionEnd_Misc_PeerSentNoConnection value: I32(5010)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_Misc_PeerSentNoConnection;

/// @brief Field k_ESteamNetConnectionEnd_Misc_SteamConnectivity value: I32(5005)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_Misc_SteamConnectivity;

/// @brief Field k_ESteamNetConnectionEnd_Misc_Timeout value: I32(5003)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_Misc_Timeout;

/// @brief Field k_ESteamNetConnectionEnd_Remote_BadCert value: I32(4003)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_Remote_BadCert;

/// @brief Field k_ESteamNetConnectionEnd_Remote_BadCrypt value: I32(4002)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_Remote_BadCrypt;

/// @brief Field k_ESteamNetConnectionEnd_Remote_BadProtocolVersion value: I32(4006)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_Remote_BadProtocolVersion;

/// @brief Field k_ESteamNetConnectionEnd_Remote_Max value: I32(4999)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_Remote_Max;

/// @brief Field k_ESteamNetConnectionEnd_Remote_Min value: I32(4000)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_Remote_Min;

/// @brief Field k_ESteamNetConnectionEnd_Remote_P2P_ICE_NoPublicAddresses value: I32(4007)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_Remote_P2P_ICE_NoPublicAddresses;

/// @brief Field k_ESteamNetConnectionEnd_Remote_Timeout value: I32(4001)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd_Remote_Timeout;

/// @brief Field k_ESteamNetConnectionEnd__Force32Bit value: I32(2147483647)
static ::Steamworks::ESteamNetConnectionEnd const k_ESteamNetConnectionEnd__Force32Bit;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ESteamNetConnectionEnd, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ESteamNetConnectionEnd) == 0x4, "Size mismatch!");

} // namespace end def Steamworks

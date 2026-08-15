#pragma once
// IWYU pragma private; include "Steamworks/SteamGameServerNetworkingSockets.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamGameServerNetworkingSockets)
namespace Steamworks {
struct EResult;
}
namespace Steamworks {
struct ESteamNetworkingAvailability;
}
namespace Steamworks {
struct HSteamListenSocket;
}
namespace Steamworks {
struct HSteamNetConnection;
}
namespace Steamworks {
struct HSteamNetPollGroup;
}
namespace Steamworks {
struct ISteamNetworkingConnectionSignaling;
}
namespace Steamworks {
struct ISteamNetworkingSignalingRecvContext;
}
namespace Steamworks {
struct SteamDatagramHostedAddress;
}
namespace Steamworks {
struct SteamDatagramRelayAuthTicket;
}
namespace Steamworks {
struct SteamNetAuthenticationStatus_t;
}
namespace Steamworks {
struct SteamNetConnectionInfo_t;
}
namespace Steamworks {
struct SteamNetConnectionRealTimeLaneStatus_t;
}
namespace Steamworks {
struct SteamNetConnectionRealTimeStatus_t;
}
namespace Steamworks {
struct SteamNetworkingConfigValue_t;
}
namespace Steamworks {
struct SteamNetworkingErrMsg;
}
namespace Steamworks {
struct SteamNetworkingFakeIPResult_t;
}
namespace Steamworks {
struct SteamNetworkingIPAddr;
}
namespace Steamworks {
struct SteamNetworkingIdentity;
}
namespace Steamworks {
struct SteamNetworkingMessage_t;
}
namespace Steamworks {
struct SteamNetworkingPOPID;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Steamworks {
class SteamGameServerNetworkingSockets;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamGameServerNetworkingSockets*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamGameServerNetworkingSockets*, "Steamworks", "SteamGameServerNetworkingSockets");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamGameServerNetworkingSockets
class CORDL_TYPE SteamGameServerNetworkingSockets : public ::System::Object {
public:
// Declarations
/// @brief Method AcceptConnection, addr 0x180593100, size 0xd0, virtual false, abstract: false, final false
static inline ::Steamworks::EResult AcceptConnection(::Steamworks::HSteamNetConnection  hConn) ;

/// @brief Method BeginAsyncRequestFakeIP, addr 0x1805931d0, size 0xd0, virtual false, abstract: false, final false
static inline bool BeginAsyncRequestFakeIP(int32_t  nNumPorts) ;

/// @brief Method CloseConnection, addr 0x1805932a0, size 0x200, virtual false, abstract: false, final false
static inline bool CloseConnection(::Steamworks::HSteamNetConnection  hPeer, int32_t  nReason, ::StringW  pszDebug, bool  bEnableLinger) ;

/// @brief Method CloseListenSocket, addr 0x1805934a0, size 0xd0, virtual false, abstract: false, final false
static inline bool CloseListenSocket(::Steamworks::HSteamListenSocket  hSocket) ;

/// @brief Method ConfigureConnectionLanes, addr 0x180593570, size 0x100, virtual false, abstract: false, final false
static inline ::Steamworks::EResult ConfigureConnectionLanes(::Steamworks::HSteamNetConnection  hConn, int32_t  nNumLanes, ::by_ref<int32_t>  pLanePriorities, ::by_ref<uint16_t>  pLaneWeights) ;

/// @brief Method ConnectByIPAddress, addr 0x180593670, size 0x170, virtual false, abstract: false, final false
static inline ::Steamworks::HSteamNetConnection ConnectByIPAddress(::by_ref<::Steamworks::SteamNetworkingIPAddr>  address, int32_t  nOptions, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>  pOptions) ;

/// @brief Method ConnectP2P, addr 0x180593980, size 0x190, virtual false, abstract: false, final false
static inline ::Steamworks::HSteamNetConnection ConnectP2P(::by_ref<::Steamworks::SteamNetworkingIdentity>  identityRemote, int32_t  nRemoteVirtualPort, int32_t  nOptions, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>  pOptions) ;

/// @brief Method ConnectP2PCustomSignaling, addr 0x1805937e0, size 0x1a0, virtual false, abstract: false, final false
static inline ::Steamworks::HSteamNetConnection ConnectP2PCustomSignaling(::by_ref<::Steamworks::ISteamNetworkingConnectionSignaling>  pSignaling, ::by_ref<::Steamworks::SteamNetworkingIdentity>  pPeerIdentity, int32_t  nRemoteVirtualPort, int32_t  nOptions, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>  pOptions) ;

/// @brief Method ConnectToHostedDedicatedServer, addr 0x180593b10, size 0x190, virtual false, abstract: false, final false
static inline ::Steamworks::HSteamNetConnection ConnectToHostedDedicatedServer(::by_ref<::Steamworks::SteamNetworkingIdentity>  identityTarget, int32_t  nRemoteVirtualPort, int32_t  nOptions, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>  pOptions) ;

/// @brief Method CreateFakeUDPPort, addr 0x180593ca0, size 0xd0, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateFakeUDPPort(int32_t  idxFakeServerPort) ;

/// @brief Method CreateHostedDedicatedServerListenSocket, addr 0x180593d70, size 0x100, virtual false, abstract: false, final false
static inline ::Steamworks::HSteamListenSocket CreateHostedDedicatedServerListenSocket(int32_t  nLocalVirtualPort, int32_t  nOptions, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>  pOptions) ;

/// @brief Method CreateListenSocketIP, addr 0x180593e70, size 0x170, virtual false, abstract: false, final false
static inline ::Steamworks::HSteamListenSocket CreateListenSocketIP(::by_ref<::Steamworks::SteamNetworkingIPAddr>  localAddress, int32_t  nOptions, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>  pOptions) ;

/// @brief Method CreateListenSocketP2P, addr 0x1805940e0, size 0x100, virtual false, abstract: false, final false
static inline ::Steamworks::HSteamListenSocket CreateListenSocketP2P(int32_t  nLocalVirtualPort, int32_t  nOptions, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>  pOptions) ;

/// @brief Method CreateListenSocketP2PFakeIP, addr 0x180593fe0, size 0x100, virtual false, abstract: false, final false
static inline ::Steamworks::HSteamListenSocket CreateListenSocketP2PFakeIP(int32_t  idxFakePort, int32_t  nOptions, ::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>  pOptions) ;

/// @brief Method CreatePollGroup, addr 0x1805941e0, size 0xd0, virtual false, abstract: false, final false
static inline ::Steamworks::HSteamNetPollGroup CreatePollGroup() ;

/// @brief Method CreateSocketPair, addr 0x1805942b0, size 0x220, virtual false, abstract: false, final false
static inline bool CreateSocketPair(::by_ref<::Steamworks::HSteamNetConnection>  pOutConnection1, ::by_ref<::Steamworks::HSteamNetConnection>  pOutConnection2, bool  bUseNetworkLoopback, ::by_ref<::Steamworks::SteamNetworkingIdentity>  pIdentity1, ::by_ref<::Steamworks::SteamNetworkingIdentity>  pIdentity2) ;

/// @brief Method DestroyPollGroup, addr 0x1805944d0, size 0xd0, virtual false, abstract: false, final false
static inline bool DestroyPollGroup(::Steamworks::HSteamNetPollGroup  hPollGroup) ;

/// @brief Method FindRelayAuthTicketForServer, addr 0x1805945a0, size 0x200, virtual false, abstract: false, final false
static inline int32_t FindRelayAuthTicketForServer(::by_ref<::Steamworks::SteamNetworkingIdentity>  identityGameServer, int32_t  nRemoteVirtualPort, ::by_ref<::Steamworks::SteamDatagramRelayAuthTicket>  pOutParsedTicket) ;

/// @brief Method FlushMessagesOnConnection, addr 0x1805947a0, size 0xd0, virtual false, abstract: false, final false
static inline ::Steamworks::EResult FlushMessagesOnConnection(::Steamworks::HSteamNetConnection  hConn) ;

/// @brief Method GetAuthenticationStatus, addr 0x180594870, size 0x190, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamNetworkingAvailability GetAuthenticationStatus(::by_ref<::Steamworks::SteamNetAuthenticationStatus_t>  pDetails) ;

/// @brief Method GetCertificateRequest, addr 0x180594a00, size 0x160, virtual false, abstract: false, final false
static inline bool GetCertificateRequest(::by_ref<int32_t>  pcbBlob, ::System::IntPtr  pBlob, ::by_ref<::Steamworks::SteamNetworkingErrMsg>  errMsg) ;

/// @brief Method GetConnectionInfo, addr 0x180594b60, size 0x1c0, virtual false, abstract: false, final false
static inline bool GetConnectionInfo(::Steamworks::HSteamNetConnection  hConn, ::by_ref<::Steamworks::SteamNetConnectionInfo_t>  pInfo) ;

/// @brief Method GetConnectionName, addr 0x180594d20, size 0x140, virtual false, abstract: false, final false
static inline bool GetConnectionName(::Steamworks::HSteamNetConnection  hPeer, ::by_ref<::StringW>  pszName, int32_t  nMaxLen) ;

/// @brief Method GetConnectionRealTimeStatus, addr 0x180594e60, size 0xa0, virtual false, abstract: false, final false
static inline ::Steamworks::EResult GetConnectionRealTimeStatus(::Steamworks::HSteamNetConnection  hConn, ::by_ref<::Steamworks::SteamNetConnectionRealTimeStatus_t>  pStatus, int32_t  nLanes, ::by_ref<::Steamworks::SteamNetConnectionRealTimeLaneStatus_t>  pLanes) ;

/// @brief Method GetConnectionUserData, addr 0x180594f00, size 0xd0, virtual false, abstract: false, final false
static inline int64_t GetConnectionUserData(::Steamworks::HSteamNetConnection  hPeer) ;

/// @brief Method GetDetailedConnectionStatus, addr 0x180594fd0, size 0x130, virtual false, abstract: false, final false
static inline int32_t GetDetailedConnectionStatus(::Steamworks::HSteamNetConnection  hConn, ::by_ref<::StringW>  pszBuf, int32_t  cbBuf) ;

/// @brief Method GetFakeIP, addr 0x180595100, size 0x240, virtual false, abstract: false, final false
static inline void GetFakeIP(int32_t  idxFirstPort, ::by_ref<::Steamworks::SteamNetworkingFakeIPResult_t>  pInfo) ;

/// @brief Method GetGameCoordinatorServerLogin, addr 0x180595340, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::EResult GetGameCoordinatorServerLogin(::System::IntPtr  pLoginInfo, ::by_ref<int32_t>  pcbSignedBlob, ::System::IntPtr  pBlob) ;

/// @brief Method GetHostedDedicatedServerAddress, addr 0x180595430, size 0x140, virtual false, abstract: false, final false
static inline ::Steamworks::EResult GetHostedDedicatedServerAddress(::by_ref<::Steamworks::SteamDatagramHostedAddress>  pRouting) ;

/// @brief Method GetHostedDedicatedServerPOPID, addr 0x180595570, size 0xd0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamNetworkingPOPID GetHostedDedicatedServerPOPID() ;

/// @brief Method GetHostedDedicatedServerPort, addr 0x180595640, size 0xd0, virtual false, abstract: false, final false
static inline uint16_t GetHostedDedicatedServerPort() ;

/// @brief Method GetIdentity, addr 0x180595710, size 0x150, virtual false, abstract: false, final false
static inline bool GetIdentity(::by_ref<::Steamworks::SteamNetworkingIdentity>  pIdentity) ;

/// @brief Method GetListenSocketAddress, addr 0x180595860, size 0x140, virtual false, abstract: false, final false
static inline bool GetListenSocketAddress(::Steamworks::HSteamListenSocket  hSocket, ::by_ref<::Steamworks::SteamNetworkingIPAddr>  address) ;

/// @brief Method GetRemoteFakeIPForConnection, addr 0x1805959a0, size 0x130, virtual false, abstract: false, final false
static inline ::Steamworks::EResult GetRemoteFakeIPForConnection(::Steamworks::HSteamNetConnection  hConn, ::by_ref<::Steamworks::SteamNetworkingIPAddr>  pOutAddr) ;

/// @brief Method InitAuthentication, addr 0x180595ad0, size 0xd0, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamNetworkingAvailability InitAuthentication() ;

/// @brief Method ReceiveMessagesOnConnection, addr 0x180595ba0, size 0x100, virtual false, abstract: false, final false
static inline int32_t ReceiveMessagesOnConnection(::Steamworks::HSteamNetConnection  hConn, ::ArrayW<::System::IntPtr>  ppOutMessages, int32_t  nMaxMessages) ;

/// @brief Method ReceiveMessagesOnPollGroup, addr 0x180595ca0, size 0x100, virtual false, abstract: false, final false
static inline int32_t ReceiveMessagesOnPollGroup(::Steamworks::HSteamNetPollGroup  hPollGroup, ::ArrayW<::System::IntPtr>  ppOutMessages, int32_t  nMaxMessages) ;

/// @brief Method ReceivedP2PCustomSignal, addr 0x180595da0, size 0xf0, virtual false, abstract: false, final false
static inline bool ReceivedP2PCustomSignal(::System::IntPtr  pMsg, int32_t  cbMsg, ::by_ref<::Steamworks::ISteamNetworkingSignalingRecvContext>  pContext) ;

/// @brief Method ReceivedRelayAuthTicket, addr 0x180595e90, size 0x1a0, virtual false, abstract: false, final false
static inline bool ReceivedRelayAuthTicket(::System::IntPtr  pvTicket, int32_t  cbTicket, ::by_ref<::Steamworks::SteamDatagramRelayAuthTicket>  pOutParsedTicket) ;

/// @brief Method ResetIdentity, addr 0x180596030, size 0x150, virtual false, abstract: false, final false
static inline void ResetIdentity(::by_ref<::Steamworks::SteamNetworkingIdentity>  pIdentity) ;

/// @brief Method RunCallbacks, addr 0x180596180, size 0xd0, virtual false, abstract: false, final false
static inline void RunCallbacks() ;

/// @brief Method SendMessageToConnection, addr 0x180596250, size 0x110, virtual false, abstract: false, final false
static inline ::Steamworks::EResult SendMessageToConnection(::Steamworks::HSteamNetConnection  hConn, ::System::IntPtr  pData, uint32_t  cbData, int32_t  nSendFlags, ::by_ref<int64_t>  pOutMessageNumber) ;

/// @brief Method SendMessages, addr 0x180596360, size 0x80, virtual false, abstract: false, final false
static inline void SendMessages(int32_t  nMessages, ::ArrayW<::Steamworks::SteamNetworkingMessage_t>  pMessages, ::ArrayW<int64_t>  pOutMessageNumberOrResult) ;

/// @brief Method SetCertificate, addr 0x1805963e0, size 0x160, virtual false, abstract: false, final false
static inline bool SetCertificate(::System::IntPtr  pCertificate, int32_t  cbCertificate, ::by_ref<::Steamworks::SteamNetworkingErrMsg>  errMsg) ;

/// @brief Method SetConnectionName, addr 0x180596540, size 0x1c0, virtual false, abstract: false, final false
static inline void SetConnectionName(::Steamworks::HSteamNetConnection  hPeer, ::StringW  pszName) ;

/// @brief Method SetConnectionPollGroup, addr 0x180596700, size 0xe0, virtual false, abstract: false, final false
static inline bool SetConnectionPollGroup(::Steamworks::HSteamNetConnection  hConn, ::Steamworks::HSteamNetPollGroup  hPollGroup) ;

/// @brief Method SetConnectionUserData, addr 0x1805967e0, size 0xe0, virtual false, abstract: false, final false
static inline bool SetConnectionUserData(::Steamworks::HSteamNetConnection  hPeer, int64_t  nUserData) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamGameServerNetworkingSockets() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamGameServerNetworkingSockets", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamGameServerNetworkingSockets(SteamGameServerNetworkingSockets && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamGameServerNetworkingSockets", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamGameServerNetworkingSockets(SteamGameServerNetworkingSockets const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16369};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamGameServerNetworkingSockets) == 0x10, "Size mismatch!");

} // namespace end def Steamworks

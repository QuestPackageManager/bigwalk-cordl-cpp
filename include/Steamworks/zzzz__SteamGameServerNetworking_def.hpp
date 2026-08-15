#pragma once
// IWYU pragma private; include "Steamworks/SteamGameServerNetworking.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamGameServerNetworking)
namespace Steamworks {
struct CSteamID;
}
namespace Steamworks {
struct EP2PSend;
}
namespace Steamworks {
struct ESNetSocketConnectionType;
}
namespace Steamworks {
struct P2PSessionState_t;
}
namespace Steamworks {
struct SNetListenSocket_t;
}
namespace Steamworks {
struct SNetSocket_t;
}
namespace Steamworks {
struct SteamIPAddress_t;
}
// Forward declare root types
namespace Steamworks {
class SteamGameServerNetworking;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamGameServerNetworking*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamGameServerNetworking*, "Steamworks", "SteamGameServerNetworking");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamGameServerNetworking
class CORDL_TYPE SteamGameServerNetworking : public ::System::Object {
public:
// Declarations
/// @brief Method AcceptP2PSessionWithUser, addr 0x180598b80, size 0xe0, virtual false, abstract: false, final false
static inline bool AcceptP2PSessionWithUser(::Steamworks::CSteamID  steamIDRemote) ;

/// @brief Method AllowP2PPacketRelay, addr 0x180598c60, size 0xe0, virtual false, abstract: false, final false
static inline bool AllowP2PPacketRelay(bool  bAllow) ;

/// @brief Method CloseP2PChannelWithUser, addr 0x180598d40, size 0xe0, virtual false, abstract: false, final false
static inline bool CloseP2PChannelWithUser(::Steamworks::CSteamID  steamIDRemote, int32_t  nChannel) ;

/// @brief Method CloseP2PSessionWithUser, addr 0x180598e20, size 0xe0, virtual false, abstract: false, final false
static inline bool CloseP2PSessionWithUser(::Steamworks::CSteamID  steamIDRemote) ;

/// @brief Method CreateConnectionSocket, addr 0x180598f00, size 0x110, virtual false, abstract: false, final false
static inline ::Steamworks::SNetSocket_t CreateConnectionSocket(::Steamworks::SteamIPAddress_t  nIP, uint16_t  nPort, int32_t  nTimeoutSec) ;

/// @brief Method CreateListenSocket, addr 0x180599010, size 0x130, virtual false, abstract: false, final false
static inline ::Steamworks::SNetListenSocket_t CreateListenSocket(int32_t  nVirtualP2PPort, ::Steamworks::SteamIPAddress_t  nIP, uint16_t  nPort, bool  bAllowUseOfPacketRelay) ;

/// @brief Method CreateP2PConnectionSocket, addr 0x180599140, size 0x110, virtual false, abstract: false, final false
static inline ::Steamworks::SNetSocket_t CreateP2PConnectionSocket(::Steamworks::CSteamID  steamIDTarget, int32_t  nVirtualPort, int32_t  nTimeoutSec, bool  bAllowUseOfPacketRelay) ;

/// @brief Method DestroyListenSocket, addr 0x180599250, size 0xe0, virtual false, abstract: false, final false
static inline bool DestroyListenSocket(::Steamworks::SNetListenSocket_t  hSocket, bool  bNotifyRemoteEnd) ;

/// @brief Method DestroySocket, addr 0x180599330, size 0xe0, virtual false, abstract: false, final false
static inline bool DestroySocket(::Steamworks::SNetSocket_t  hSocket, bool  bNotifyRemoteEnd) ;

/// @brief Method GetListenSocketInfo, addr 0x180599410, size 0xf0, virtual false, abstract: false, final false
static inline bool GetListenSocketInfo(::Steamworks::SNetListenSocket_t  hListenSocket, ::by_ref<::Steamworks::SteamIPAddress_t>  pnIP, ::by_ref<uint16_t>  pnPort) ;

/// @brief Method GetMaxPacketSize, addr 0x180599500, size 0xd0, virtual false, abstract: false, final false
static inline int32_t GetMaxPacketSize(::Steamworks::SNetSocket_t  hSocket) ;

/// @brief Method GetP2PSessionState, addr 0x1805995d0, size 0xe0, virtual false, abstract: false, final false
static inline bool GetP2PSessionState(::Steamworks::CSteamID  steamIDRemote, ::by_ref<::Steamworks::P2PSessionState_t>  pConnectionState) ;

/// @brief Method GetSocketConnectionType, addr 0x1805996b0, size 0xd0, virtual false, abstract: false, final false
static inline ::Steamworks::ESNetSocketConnectionType GetSocketConnectionType(::Steamworks::SNetSocket_t  hSocket) ;

/// @brief Method GetSocketInfo, addr 0x180599780, size 0x110, virtual false, abstract: false, final false
static inline bool GetSocketInfo(::Steamworks::SNetSocket_t  hSocket, ::by_ref<::Steamworks::CSteamID>  pSteamIDRemote, ::by_ref<int32_t>  peSocketStatus, ::by_ref<::Steamworks::SteamIPAddress_t>  punIPRemote, ::by_ref<uint16_t>  punPortRemote) ;

/// @brief Method IsDataAvailable, addr 0x180599970, size 0xf0, virtual false, abstract: false, final false
static inline bool IsDataAvailable(::Steamworks::SNetListenSocket_t  hListenSocket, ::by_ref<uint32_t>  pcubMsgSize, ::by_ref<::Steamworks::SNetSocket_t>  phSocket) ;

/// @brief Method IsDataAvailableOnSocket, addr 0x180599890, size 0xe0, virtual false, abstract: false, final false
static inline bool IsDataAvailableOnSocket(::Steamworks::SNetSocket_t  hSocket, ::by_ref<uint32_t>  pcubMsgSize) ;

/// @brief Method IsP2PPacketAvailable, addr 0x180599a60, size 0xe0, virtual false, abstract: false, final false
static inline bool IsP2PPacketAvailable(::by_ref<uint32_t>  pcubMsgSize, int32_t  nChannel) ;

/// @brief Method ReadP2PPacket, addr 0x180599b40, size 0x120, virtual false, abstract: false, final false
static inline bool ReadP2PPacket(::ArrayW<uint8_t>  pubDest, uint32_t  cubDest, ::by_ref<uint32_t>  pcubMsgSize, ::by_ref<::Steamworks::CSteamID>  psteamIDRemote, int32_t  nChannel) ;

/// @brief Method RetrieveData, addr 0x180599d70, size 0x120, virtual false, abstract: false, final false
static inline bool RetrieveData(::Steamworks::SNetListenSocket_t  hListenSocket, ::ArrayW<uint8_t>  pubDest, uint32_t  cubDest, ::by_ref<uint32_t>  pcubMsgSize, ::by_ref<::Steamworks::SNetSocket_t>  phSocket) ;

/// @brief Method RetrieveDataFromSocket, addr 0x180599c60, size 0x110, virtual false, abstract: false, final false
static inline bool RetrieveDataFromSocket(::Steamworks::SNetSocket_t  hSocket, ::ArrayW<uint8_t>  pubDest, uint32_t  cubDest, ::by_ref<uint32_t>  pcubMsgSize) ;

/// @brief Method SendDataOnSocket, addr 0x180599e90, size 0x110, virtual false, abstract: false, final false
static inline bool SendDataOnSocket(::Steamworks::SNetSocket_t  hSocket, ::ArrayW<uint8_t>  pubData, uint32_t  cubData, bool  bReliable) ;

/// @brief Method SendP2PPacket, addr 0x180599fa0, size 0x120, virtual false, abstract: false, final false
static inline bool SendP2PPacket(::Steamworks::CSteamID  steamIDRemote, ::ArrayW<uint8_t>  pubData, uint32_t  cubData, ::Steamworks::EP2PSend  eP2PSendType, int32_t  nChannel) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamGameServerNetworking() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamGameServerNetworking", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamGameServerNetworking(SteamGameServerNetworking && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamGameServerNetworking", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamGameServerNetworking(SteamGameServerNetworking const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16368};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamGameServerNetworking) == 0x10, "Size mismatch!");

} // namespace end def Steamworks

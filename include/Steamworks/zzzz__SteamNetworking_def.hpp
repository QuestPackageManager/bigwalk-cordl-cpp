#pragma once
// IWYU pragma private; include "Steamworks/SteamNetworking.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamNetworking)
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
class SteamNetworking;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamNetworking*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamNetworking*, "Steamworks", "SteamNetworking");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamNetworking
class CORDL_TYPE SteamNetworking : public ::System::Object {
public:
// Declarations
/// @brief Method AcceptP2PSessionWithUser, addr 0x1805b6d50, size 0x40, virtual false, abstract: false, final false
static inline bool AcceptP2PSessionWithUser(::Steamworks::CSteamID  steamIDRemote) ;

/// @brief Method AllowP2PPacketRelay, addr 0x1805b6d90, size 0x40, virtual false, abstract: false, final false
static inline bool AllowP2PPacketRelay(bool  bAllow) ;

/// @brief Method CloseP2PChannelWithUser, addr 0x1805b6dd0, size 0x40, virtual false, abstract: false, final false
static inline bool CloseP2PChannelWithUser(::Steamworks::CSteamID  steamIDRemote, int32_t  nChannel) ;

/// @brief Method CloseP2PSessionWithUser, addr 0x1805b6e10, size 0x40, virtual false, abstract: false, final false
static inline bool CloseP2PSessionWithUser(::Steamworks::CSteamID  steamIDRemote) ;

/// @brief Method CreateConnectionSocket, addr 0x1805b6e50, size 0x70, virtual false, abstract: false, final false
static inline ::Steamworks::SNetSocket_t CreateConnectionSocket(::Steamworks::SteamIPAddress_t  nIP, uint16_t  nPort, int32_t  nTimeoutSec) ;

/// @brief Method CreateListenSocket, addr 0x1805b6ec0, size 0x80, virtual false, abstract: false, final false
static inline ::Steamworks::SNetListenSocket_t CreateListenSocket(int32_t  nVirtualP2PPort, ::Steamworks::SteamIPAddress_t  nIP, uint16_t  nPort, bool  bAllowUseOfPacketRelay) ;

/// @brief Method CreateP2PConnectionSocket, addr 0x1805b6f40, size 0x70, virtual false, abstract: false, final false
static inline ::Steamworks::SNetSocket_t CreateP2PConnectionSocket(::Steamworks::CSteamID  steamIDTarget, int32_t  nVirtualPort, int32_t  nTimeoutSec, bool  bAllowUseOfPacketRelay) ;

/// @brief Method DestroyListenSocket, addr 0x1805b6fb0, size 0x40, virtual false, abstract: false, final false
static inline bool DestroyListenSocket(::Steamworks::SNetListenSocket_t  hSocket, bool  bNotifyRemoteEnd) ;

/// @brief Method DestroySocket, addr 0x1805b6ff0, size 0x40, virtual false, abstract: false, final false
static inline bool DestroySocket(::Steamworks::SNetSocket_t  hSocket, bool  bNotifyRemoteEnd) ;

/// @brief Method GetListenSocketInfo, addr 0x1805b7030, size 0x60, virtual false, abstract: false, final false
static inline bool GetListenSocketInfo(::Steamworks::SNetListenSocket_t  hListenSocket, ::by_ref<::Steamworks::SteamIPAddress_t>  pnIP, ::by_ref<uint16_t>  pnPort) ;

/// @brief Method GetMaxPacketSize, addr 0x1805b7090, size 0x30, virtual false, abstract: false, final false
static inline int32_t GetMaxPacketSize(::Steamworks::SNetSocket_t  hSocket) ;

/// @brief Method GetP2PSessionState, addr 0x1805b70c0, size 0x50, virtual false, abstract: false, final false
static inline bool GetP2PSessionState(::Steamworks::CSteamID  steamIDRemote, ::by_ref<::Steamworks::P2PSessionState_t>  pConnectionState) ;

/// @brief Method GetSocketConnectionType, addr 0x1805b7110, size 0x30, virtual false, abstract: false, final false
static inline ::Steamworks::ESNetSocketConnectionType GetSocketConnectionType(::Steamworks::SNetSocket_t  hSocket) ;

/// @brief Method GetSocketInfo, addr 0x1805b7140, size 0x80, virtual false, abstract: false, final false
static inline bool GetSocketInfo(::Steamworks::SNetSocket_t  hSocket, ::by_ref<::Steamworks::CSteamID>  pSteamIDRemote, ::by_ref<int32_t>  peSocketStatus, ::by_ref<::Steamworks::SteamIPAddress_t>  punIPRemote, ::by_ref<uint16_t>  punPortRemote) ;

/// @brief Method IsDataAvailable, addr 0x1805b7200, size 0x60, virtual false, abstract: false, final false
static inline bool IsDataAvailable(::Steamworks::SNetListenSocket_t  hListenSocket, ::by_ref<uint32_t>  pcubMsgSize, ::by_ref<::Steamworks::SNetSocket_t>  phSocket) ;

/// @brief Method IsDataAvailableOnSocket, addr 0x1805b71c0, size 0x40, virtual false, abstract: false, final false
static inline bool IsDataAvailableOnSocket(::Steamworks::SNetSocket_t  hSocket, ::by_ref<uint32_t>  pcubMsgSize) ;

/// @brief Method IsP2PPacketAvailable, addr 0x1805b7260, size 0x40, virtual false, abstract: false, final false
static inline bool IsP2PPacketAvailable(::by_ref<uint32_t>  pcubMsgSize, int32_t  nChannel) ;

/// @brief Method ReadP2PPacket, addr 0x1805b72a0, size 0x80, virtual false, abstract: false, final false
static inline bool ReadP2PPacket(::ArrayW<uint8_t>  pubDest, uint32_t  cubDest, ::by_ref<uint32_t>  pcubMsgSize, ::by_ref<::Steamworks::CSteamID>  psteamIDRemote, int32_t  nChannel) ;

/// @brief Method RetrieveData, addr 0x1805b7390, size 0x80, virtual false, abstract: false, final false
static inline bool RetrieveData(::Steamworks::SNetListenSocket_t  hListenSocket, ::ArrayW<uint8_t>  pubDest, uint32_t  cubDest, ::by_ref<uint32_t>  pcubMsgSize, ::by_ref<::Steamworks::SNetSocket_t>  phSocket) ;

/// @brief Method RetrieveDataFromSocket, addr 0x1805b7320, size 0x70, virtual false, abstract: false, final false
static inline bool RetrieveDataFromSocket(::Steamworks::SNetSocket_t  hSocket, ::ArrayW<uint8_t>  pubDest, uint32_t  cubDest, ::by_ref<uint32_t>  pcubMsgSize) ;

/// @brief Method SendDataOnSocket, addr 0x1805b7410, size 0x70, virtual false, abstract: false, final false
static inline bool SendDataOnSocket(::Steamworks::SNetSocket_t  hSocket, ::ArrayW<uint8_t>  pubData, uint32_t  cubData, bool  bReliable) ;

/// @brief Method SendP2PPacket, addr 0x1805b7480, size 0x80, virtual false, abstract: false, final false
static inline bool SendP2PPacket(::Steamworks::CSteamID  steamIDRemote, ::ArrayW<uint8_t>  pubData, uint32_t  cubData, ::Steamworks::EP2PSend  eP2PSendType, int32_t  nChannel) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamNetworking() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamNetworking", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamNetworking(SteamNetworking && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamNetworking", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamNetworking(SteamNetworking const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16384};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamNetworking) == 0x10, "Size mismatch!");

} // namespace end def Steamworks

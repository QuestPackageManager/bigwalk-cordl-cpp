#pragma once
// IWYU pragma private; include "Steamworks/SteamGameServer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamGameServer)
namespace Steamworks {
struct AppId_t;
}
namespace Steamworks {
struct CSteamID;
}
namespace Steamworks {
struct EBeginAuthSessionResult;
}
namespace Steamworks {
struct EUserHasLicenseForAppResult;
}
namespace Steamworks {
struct HAuthTicket;
}
namespace Steamworks {
struct SteamAPICall_t;
}
namespace Steamworks {
struct SteamIPAddress_t;
}
// Forward declare root types
namespace Steamworks {
class SteamGameServer;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamGameServer*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamGameServer*, "Steamworks", "SteamGameServer");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamGameServer
class CORDL_TYPE SteamGameServer : public ::System::Object {
public:
// Declarations
/// @brief Method AssociateWithClan, addr 0x1805a1c30, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t AssociateWithClan(::Steamworks::CSteamID  steamIDClan) ;

/// @brief Method BLoggedOn, addr 0x1805a1d10, size 0xd0, virtual false, abstract: false, final false
static inline bool BLoggedOn() ;

/// @brief Method BSecure, addr 0x1805a1de0, size 0xd0, virtual false, abstract: false, final false
static inline bool BSecure() ;

/// @brief Method BUpdateUserData, addr 0x1805a1eb0, size 0x1e0, virtual false, abstract: false, final false
static inline bool BUpdateUserData(::Steamworks::CSteamID  steamIDUser, ::StringW  pchPlayerName, uint32_t  uScore) ;

/// @brief Method BeginAuthSession, addr 0x1805a2090, size 0x100, virtual false, abstract: false, final false
static inline ::Steamworks::EBeginAuthSessionResult BeginAuthSession(::ArrayW<uint8_t>  pAuthTicket, int32_t  cbAuthTicket, ::Steamworks::CSteamID  steamID) ;

/// @brief Method CancelAuthTicket, addr 0x1805a2190, size 0xd0, virtual false, abstract: false, final false
static inline void CancelAuthTicket(::Steamworks::HAuthTicket  hAuthTicket) ;

/// @brief Method ClearAllKeyValues, addr 0x1805a2260, size 0xd0, virtual false, abstract: false, final false
static inline void ClearAllKeyValues() ;

/// @brief Method ComputeNewPlayerCompatibility, addr 0x1805a2330, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t ComputeNewPlayerCompatibility(::Steamworks::CSteamID  steamIDNewPlayer) ;

/// @brief Method CreateUnauthenticatedUserConnection, addr 0x1805a2410, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::CSteamID CreateUnauthenticatedUserConnection() ;

/// @brief Method EndAuthSession, addr 0x1805a2500, size 0xd0, virtual false, abstract: false, final false
static inline void EndAuthSession(::Steamworks::CSteamID  steamID) ;

/// @brief Method GetAuthSessionTicket, addr 0x1805a25d0, size 0x100, virtual false, abstract: false, final false
static inline ::Steamworks::HAuthTicket GetAuthSessionTicket(::ArrayW<uint8_t>  pTicket, int32_t  cbMaxTicket, ::by_ref<uint32_t>  pcbTicket) ;

/// @brief Method GetGameplayStats, addr 0x1805a26d0, size 0xd0, virtual false, abstract: false, final false
static inline void GetGameplayStats() ;

/// @brief Method GetNextOutgoingPacket, addr 0x1805a27a0, size 0x110, virtual false, abstract: false, final false
static inline int32_t GetNextOutgoingPacket(::ArrayW<uint8_t>  pOut, int32_t  cbMaxOut, ::by_ref<uint32_t>  pNetAdr, ::by_ref<uint16_t>  pPort) ;

/// @brief Method GetPublicIP, addr 0x1805a28b0, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamIPAddress_t GetPublicIP() ;

/// @brief Method GetServerReputation, addr 0x1805a29a0, size 0xd0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t GetServerReputation() ;

/// @brief Method GetSteamID, addr 0x1805a2a70, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::CSteamID GetSteamID() ;

/// @brief Method HandleIncomingPacket, addr 0x1805a2b60, size 0x110, virtual false, abstract: false, final false
static inline bool HandleIncomingPacket(::ArrayW<uint8_t>  pData, int32_t  cbData, uint32_t  srcIP, uint16_t  srcPort) ;

/// @brief Method LogOff, addr 0x1805a2c70, size 0xd0, virtual false, abstract: false, final false
static inline void LogOff() ;

/// @brief Method LogOn, addr 0x1805a2e10, size 0x1c0, virtual false, abstract: false, final false
static inline void LogOn(::StringW  pszToken) ;

/// @brief Method LogOnAnonymous, addr 0x1805a2d40, size 0xd0, virtual false, abstract: false, final false
static inline void LogOnAnonymous() ;

/// @brief Method RequestUserGroupStatus, addr 0x1805a2fd0, size 0xe0, virtual false, abstract: false, final false
static inline bool RequestUserGroupStatus(::Steamworks::CSteamID  steamIDUser, ::Steamworks::CSteamID  steamIDGroup) ;

/// @brief Method SendUserConnectAndAuthenticate_DEPRECATED, addr 0x1805a30b0, size 0x110, virtual false, abstract: false, final false
static inline bool SendUserConnectAndAuthenticate_DEPRECATED(uint32_t  unIPClient, ::ArrayW<uint8_t>  pvAuthBlob, uint32_t  cubAuthBlobSize, ::by_ref<::Steamworks::CSteamID>  pSteamIDUser) ;

/// @brief Method SendUserDisconnect_DEPRECATED, addr 0x1805a31c0, size 0xd0, virtual false, abstract: false, final false
static inline void SendUserDisconnect_DEPRECATED(::Steamworks::CSteamID  steamIDUser) ;

/// @brief Method SetAdvertiseServerActive, addr 0x1805a3290, size 0xd0, virtual false, abstract: false, final false
static inline void SetAdvertiseServerActive(bool  bActive) ;

/// @brief Method SetBotPlayerCount, addr 0x1805a3360, size 0xd0, virtual false, abstract: false, final false
static inline void SetBotPlayerCount(int32_t  cBotplayers) ;

/// @brief Method SetDedicatedServer, addr 0x1805a3430, size 0xd0, virtual false, abstract: false, final false
static inline void SetDedicatedServer(bool  bDedicated) ;

/// @brief Method SetGameData, addr 0x1805a3500, size 0x1c0, virtual false, abstract: false, final false
static inline void SetGameData(::StringW  pchGameData) ;

/// @brief Method SetGameDescription, addr 0x1805a36c0, size 0x1c0, virtual false, abstract: false, final false
static inline void SetGameDescription(::StringW  pszGameDescription) ;

/// @brief Method SetGameTags, addr 0x1805a3880, size 0x1c0, virtual false, abstract: false, final false
static inline void SetGameTags(::StringW  pchGameTags) ;

/// @brief Method SetKeyValue, addr 0x1805a3a40, size 0x290, virtual false, abstract: false, final false
static inline void SetKeyValue(::StringW  pKey, ::StringW  pValue) ;

/// @brief Method SetMapName, addr 0x1805a3cd0, size 0x1c0, virtual false, abstract: false, final false
static inline void SetMapName(::StringW  pszMapName) ;

/// @brief Method SetMaxPlayerCount, addr 0x1805a3e90, size 0xd0, virtual false, abstract: false, final false
static inline void SetMaxPlayerCount(int32_t  cPlayersMax) ;

/// @brief Method SetModDir, addr 0x1805a3f60, size 0x1c0, virtual false, abstract: false, final false
static inline void SetModDir(::StringW  pszModDir) ;

/// @brief Method SetPasswordProtected, addr 0x1805a4120, size 0xd0, virtual false, abstract: false, final false
static inline void SetPasswordProtected(bool  bPasswordProtected) ;

/// @brief Method SetProduct, addr 0x1805a41f0, size 0x1c0, virtual false, abstract: false, final false
static inline void SetProduct(::StringW  pszProduct) ;

/// @brief Method SetRegion, addr 0x1805a43b0, size 0x1c0, virtual false, abstract: false, final false
static inline void SetRegion(::StringW  pszRegion) ;

/// @brief Method SetServerName, addr 0x1805a4570, size 0x1c0, virtual false, abstract: false, final false
static inline void SetServerName(::StringW  pszServerName) ;

/// @brief Method SetSpectatorPort, addr 0x1805a4730, size 0xd0, virtual false, abstract: false, final false
static inline void SetSpectatorPort(uint16_t  unSpectatorPort) ;

/// @brief Method SetSpectatorServerName, addr 0x1805a4800, size 0x1c0, virtual false, abstract: false, final false
static inline void SetSpectatorServerName(::StringW  pszSpectatorServerName) ;

/// @brief Method UserHasLicenseForApp, addr 0x1805a49c0, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::EUserHasLicenseForAppResult UserHasLicenseForApp(::Steamworks::CSteamID  steamID, ::Steamworks::AppId_t  appID) ;

/// @brief Method WasRestartRequested, addr 0x1805a4aa0, size 0xd0, virtual false, abstract: false, final false
static inline bool WasRestartRequested() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamGameServer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamGameServer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamGameServer(SteamGameServer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamGameServer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamGameServer(SteamGameServer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16364};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamGameServer) == 0x10, "Size mismatch!");

} // namespace end def Steamworks

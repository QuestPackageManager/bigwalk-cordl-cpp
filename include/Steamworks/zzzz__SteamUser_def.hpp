#pragma once
// IWYU pragma private; include "Steamworks/SteamUser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamUser)
namespace Steamworks {
struct AppId_t;
}
namespace Steamworks {
struct CGameID;
}
namespace Steamworks {
struct CSteamID;
}
namespace Steamworks {
struct EBeginAuthSessionResult;
}
namespace Steamworks {
struct EDurationControlOnlineState;
}
namespace Steamworks {
struct EUserHasLicenseForAppResult;
}
namespace Steamworks {
struct EVoiceResult;
}
namespace Steamworks {
struct HAuthTicket;
}
namespace Steamworks {
struct HSteamUser;
}
namespace Steamworks {
struct SteamAPICall_t;
}
// Forward declare root types
namespace Steamworks {
class SteamUser;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamUser*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamUser*, "Steamworks", "SteamUser");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamUser
class CORDL_TYPE SteamUser : public ::System::Object {
public:
// Declarations
/// @brief Method AdvertiseGame, addr 0x1805bf470, size 0x60, virtual false, abstract: false, final false
static inline void AdvertiseGame(::Steamworks::CSteamID  steamIDGameServer, uint32_t  unIPServer, uint16_t  usPortServer) ;

/// @brief Method BIsBehindNAT, addr 0x1805bf4d0, size 0x30, virtual false, abstract: false, final false
static inline bool BIsBehindNAT() ;

/// @brief Method BIsPhoneIdentifying, addr 0x1805bf500, size 0x30, virtual false, abstract: false, final false
static inline bool BIsPhoneIdentifying() ;

/// @brief Method BIsPhoneRequiringVerification, addr 0x1805bf530, size 0x30, virtual false, abstract: false, final false
static inline bool BIsPhoneRequiringVerification() ;

/// @brief Method BIsPhoneVerified, addr 0x1805bf560, size 0x30, virtual false, abstract: false, final false
static inline bool BIsPhoneVerified() ;

/// @brief Method BIsTwoFactorEnabled, addr 0x1805bf590, size 0x30, virtual false, abstract: false, final false
static inline bool BIsTwoFactorEnabled() ;

/// @brief Method BLoggedOn, addr 0x1805bf5c0, size 0x30, virtual false, abstract: false, final false
static inline bool BLoggedOn() ;

/// @brief Method BSetDurationControlOnlineState, addr 0x1805bf5f0, size 0x30, virtual false, abstract: false, final false
static inline bool BSetDurationControlOnlineState(::Steamworks::EDurationControlOnlineState  eNewState) ;

/// @brief Method BeginAuthSession, addr 0x1805bf620, size 0x60, virtual false, abstract: false, final false
static inline ::Steamworks::EBeginAuthSessionResult BeginAuthSession(::ArrayW<uint8_t>  pAuthTicket, int32_t  cbAuthTicket, ::Steamworks::CSteamID  steamID) ;

/// @brief Method CancelAuthTicket, addr 0x1805bf680, size 0x30, virtual false, abstract: false, final false
static inline void CancelAuthTicket(::Steamworks::HAuthTicket  hAuthTicket) ;

/// @brief Method DecompressVoice, addr 0x1805bf6b0, size 0x80, virtual false, abstract: false, final false
static inline ::Steamworks::EVoiceResult DecompressVoice(::ArrayW<uint8_t>  pCompressed, uint32_t  cbCompressed, ::ArrayW<uint8_t>  pDestBuffer, uint32_t  cbDestBufferSize, ::by_ref<uint32_t>  nBytesWritten, uint32_t  nDesiredSampleRate) ;

/// @brief Method EndAuthSession, addr 0x1805bf730, size 0x40, virtual false, abstract: false, final false
static inline void EndAuthSession(::Steamworks::CSteamID  steamID) ;

/// @brief Method GetAuthSessionTicket, addr 0x1805bf770, size 0x60, virtual false, abstract: false, final false
static inline ::Steamworks::HAuthTicket GetAuthSessionTicket(::ArrayW<uint8_t>  pTicket, int32_t  cbMaxTicket, ::by_ref<uint32_t>  pcbTicket) ;

/// @brief Method GetAvailableVoice, addr 0x1805bf7d0, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::EVoiceResult GetAvailableVoice(::by_ref<uint32_t>  pcbCompressed) ;

/// @brief Method GetDurationControl, addr 0x1805bf810, size 0x30, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t GetDurationControl() ;

/// @brief Method GetEncryptedAppTicket, addr 0x1805bf840, size 0x60, virtual false, abstract: false, final false
static inline bool GetEncryptedAppTicket(::ArrayW<uint8_t>  pTicket, int32_t  cbMaxTicket, ::by_ref<uint32_t>  pcbTicket) ;

/// @brief Method GetGameBadgeLevel, addr 0x1805bf8a0, size 0x40, virtual false, abstract: false, final false
static inline int32_t GetGameBadgeLevel(int32_t  nSeries, bool  bFoil) ;

/// @brief Method GetHSteamUser, addr 0x1805bf8e0, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::HSteamUser GetHSteamUser() ;

/// @brief Method GetMarketEligibility, addr 0x1805bf920, size 0x30, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t GetMarketEligibility() ;

/// @brief Method GetPlayerSteamLevel, addr 0x1805bf950, size 0x30, virtual false, abstract: false, final false
static inline int32_t GetPlayerSteamLevel() ;

/// @brief Method GetSteamID, addr 0x1805bf980, size 0x50, virtual false, abstract: false, final false
static inline ::Steamworks::CSteamID GetSteamID() ;

/// @brief Method GetUserDataFolder, addr 0x1805bf9d0, size 0x90, virtual false, abstract: false, final false
static inline bool GetUserDataFolder(::by_ref<::StringW>  pchBuffer, int32_t  cubBuffer) ;

/// @brief Method GetVoice, addr 0x1805bfa90, size 0x90, virtual false, abstract: false, final false
static inline ::Steamworks::EVoiceResult GetVoice(bool  bWantCompressed, ::ArrayW<uint8_t>  pDestBuffer, uint32_t  cbDestBufferSize, ::by_ref<uint32_t>  nBytesWritten) ;

/// @brief Method GetVoiceOptimalSampleRate, addr 0x1805bfa60, size 0x30, virtual false, abstract: false, final false
static inline uint32_t GetVoiceOptimalSampleRate() ;

/// @brief Method InitiateGameConnection_DEPRECATED, addr 0x1805bfb20, size 0x80, virtual false, abstract: false, final false
static inline int32_t InitiateGameConnection_DEPRECATED(::ArrayW<uint8_t>  pAuthBlob, int32_t  cbMaxAuthBlob, ::Steamworks::CSteamID  steamIDGameServer, uint32_t  unIPServer, uint16_t  usPortServer, bool  bSecure) ;

/// @brief Method RequestEncryptedAppTicket, addr 0x1805bfba0, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t RequestEncryptedAppTicket(::ArrayW<uint8_t>  pDataToInclude, int32_t  cbDataToInclude) ;

/// @brief Method RequestStoreAuthURL, addr 0x1805bfbe0, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t RequestStoreAuthURL(::StringW  pchRedirectURL) ;

/// @brief Method StartVoiceRecording, addr 0x1805bfcc0, size 0x30, virtual false, abstract: false, final false
static inline void StartVoiceRecording() ;

/// @brief Method StopVoiceRecording, addr 0x1805bfcf0, size 0x30, virtual false, abstract: false, final false
static inline void StopVoiceRecording() ;

/// @brief Method TerminateGameConnection_DEPRECATED, addr 0x1805bfd20, size 0x40, virtual false, abstract: false, final false
static inline void TerminateGameConnection_DEPRECATED(uint32_t  unIPServer, uint16_t  usPortServer) ;

/// @brief Method TrackAppUsageEvent, addr 0x1805bfd60, size 0xf0, virtual false, abstract: false, final false
static inline void TrackAppUsageEvent(::Steamworks::CGameID  gameID, int32_t  eAppUsageEvent, ::StringW  pchExtraInfo) ;

/// @brief Method UserHasLicenseForApp, addr 0x1805bfe50, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::EUserHasLicenseForAppResult UserHasLicenseForApp(::Steamworks::CSteamID  steamID, ::Steamworks::AppId_t  appID) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamUser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamUser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamUser(SteamUser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamUser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamUser(SteamUser const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16393};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamUser) == 0x10, "Size mismatch!");

} // namespace end def Steamworks

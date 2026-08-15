#pragma once
// IWYU pragma private; include "Steamworks/SteamApps.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamApps)
namespace Steamworks {
struct AppId_t;
}
namespace Steamworks {
struct CSteamID;
}
namespace Steamworks {
struct DepotId_t;
}
namespace Steamworks {
struct SteamAPICall_t;
}
// Forward declare root types
namespace Steamworks {
class SteamApps;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamApps*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamApps*, "Steamworks", "SteamApps");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamApps
class CORDL_TYPE SteamApps : public ::System::Object {
public:
// Declarations
/// @brief Method BGetDLCDataByIndex, addr 0x1805833b0, size 0x180, virtual false, abstract: false, final false
static inline bool BGetDLCDataByIndex(int32_t  iDLC, ::by_ref<::Steamworks::AppId_t>  pAppID, ::by_ref<bool>  pbAvailable, ::by_ref<::StringW>  pchName, int32_t  cchNameBufferSize) ;

/// @brief Method BIsAppInstalled, addr 0x180583530, size 0xd0, virtual false, abstract: false, final false
static inline bool BIsAppInstalled(::Steamworks::AppId_t  appID) ;

/// @brief Method BIsCybercafe, addr 0x180583600, size 0xd0, virtual false, abstract: false, final false
static inline bool BIsCybercafe() ;

/// @brief Method BIsDlcInstalled, addr 0x1805836d0, size 0xd0, virtual false, abstract: false, final false
static inline bool BIsDlcInstalled(::Steamworks::AppId_t  appID) ;

/// @brief Method BIsLowViolence, addr 0x1805837a0, size 0xd0, virtual false, abstract: false, final false
static inline bool BIsLowViolence() ;

/// @brief Method BIsSubscribed, addr 0x180583ae0, size 0xd0, virtual false, abstract: false, final false
static inline bool BIsSubscribed() ;

/// @brief Method BIsSubscribedApp, addr 0x180583870, size 0xd0, virtual false, abstract: false, final false
static inline bool BIsSubscribedApp(::Steamworks::AppId_t  appID) ;

/// @brief Method BIsSubscribedFromFamilySharing, addr 0x180583940, size 0xd0, virtual false, abstract: false, final false
static inline bool BIsSubscribedFromFamilySharing() ;

/// @brief Method BIsSubscribedFromFreeWeekend, addr 0x180583a10, size 0xd0, virtual false, abstract: false, final false
static inline bool BIsSubscribedFromFreeWeekend() ;

/// @brief Method BIsTimedTrial, addr 0x180583bb0, size 0xe0, virtual false, abstract: false, final false
static inline bool BIsTimedTrial(::by_ref<uint32_t>  punSecondsAllowed, ::by_ref<uint32_t>  punSecondsPlayed) ;

/// @brief Method BIsVACBanned, addr 0x180583c90, size 0xd0, virtual false, abstract: false, final false
static inline bool BIsVACBanned() ;

/// @brief Method GetAppBuildId, addr 0x180583d60, size 0xd0, virtual false, abstract: false, final false
static inline int32_t GetAppBuildId() ;

/// @brief Method GetAppInstallDir, addr 0x180583e30, size 0x130, virtual false, abstract: false, final false
static inline uint32_t GetAppInstallDir(::Steamworks::AppId_t  appID, ::by_ref<::StringW>  pchFolder, uint32_t  cchFolderBufferSize) ;

/// @brief Method GetAppOwner, addr 0x180583f60, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::CSteamID GetAppOwner() ;

/// @brief Method GetAvailableGameLanguages, addr 0x180584050, size 0xd0, virtual false, abstract: false, final false
static inline ::StringW GetAvailableGameLanguages() ;

/// @brief Method GetCurrentBetaName, addr 0x180584120, size 0x130, virtual false, abstract: false, final false
static inline bool GetCurrentBetaName(::by_ref<::StringW>  pchName, int32_t  cchNameBufferSize) ;

/// @brief Method GetCurrentGameLanguage, addr 0x180584250, size 0xd0, virtual false, abstract: false, final false
static inline ::StringW GetCurrentGameLanguage() ;

/// @brief Method GetDLCCount, addr 0x180584320, size 0xd0, virtual false, abstract: false, final false
static inline int32_t GetDLCCount() ;

/// @brief Method GetDlcDownloadProgress, addr 0x1805843f0, size 0xf0, virtual false, abstract: false, final false
static inline bool GetDlcDownloadProgress(::Steamworks::AppId_t  nAppID, ::by_ref<uint64_t>  punBytesDownloaded, ::by_ref<uint64_t>  punBytesTotal) ;

/// @brief Method GetEarliestPurchaseUnixTime, addr 0x1805844e0, size 0xd0, virtual false, abstract: false, final false
static inline uint32_t GetEarliestPurchaseUnixTime(::Steamworks::AppId_t  nAppID) ;

/// @brief Method GetFileDetails, addr 0x1805845b0, size 0x1e0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamAPICall_t GetFileDetails(::StringW  pszFileName) ;

/// @brief Method GetInstalledDepots, addr 0x180584790, size 0x100, virtual false, abstract: false, final false
static inline uint32_t GetInstalledDepots(::Steamworks::AppId_t  appID, ::ArrayW<::Steamworks::DepotId_t>  pvecDepots, uint32_t  cMaxDepots) ;

/// @brief Method GetLaunchCommandLine, addr 0x180584890, size 0x120, virtual false, abstract: false, final false
static inline int32_t GetLaunchCommandLine(::by_ref<::StringW>  pszCommandLine, int32_t  cubCommandLine) ;

/// @brief Method GetLaunchQueryParam, addr 0x1805849b0, size 0x1e0, virtual false, abstract: false, final false
static inline ::StringW GetLaunchQueryParam(::StringW  pchKey) ;

/// @brief Method InstallDLC, addr 0x180584b90, size 0xd0, virtual false, abstract: false, final false
static inline void InstallDLC(::Steamworks::AppId_t  nAppID) ;

/// @brief Method MarkContentCorrupt, addr 0x180584c60, size 0xe0, virtual false, abstract: false, final false
static inline bool MarkContentCorrupt(bool  bMissingFilesOnly) ;

/// @brief Method RequestAllProofOfPurchaseKeys, addr 0x180584d40, size 0xd0, virtual false, abstract: false, final false
static inline void RequestAllProofOfPurchaseKeys() ;

/// @brief Method RequestAppProofOfPurchaseKey, addr 0x180584e10, size 0xd0, virtual false, abstract: false, final false
static inline void RequestAppProofOfPurchaseKey(::Steamworks::AppId_t  nAppID) ;

/// @brief Method UninstallDLC, addr 0x180584ee0, size 0xd0, virtual false, abstract: false, final false
static inline void UninstallDLC(::Steamworks::AppId_t  nAppID) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamApps() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamApps", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamApps(SteamApps && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamApps", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamApps(SteamApps const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16361};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamApps) == 0x10, "Size mismatch!");

} // namespace end def Steamworks

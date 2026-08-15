#pragma once
// IWYU pragma private; include "Steamworks/NativeMethods.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeMethods)
namespace Steamworks {
struct AccountID_t;
}
namespace Steamworks {
struct AppId_t;
}
namespace Steamworks {
struct AudioPlayback_Status;
}
namespace Steamworks {
struct CGameID;
}
namespace Steamworks {
struct CSteamID;
}
namespace Steamworks {
struct DepotId_t;
}
namespace Steamworks {
struct EAccountType;
}
namespace Steamworks {
struct EActivateGameOverlayToWebPageMode;
}
namespace Steamworks {
struct EBeginAuthSessionResult;
}
namespace Steamworks {
struct EChatEntryType;
}
namespace Steamworks {
struct EControllerHapticLocation;
}
namespace Steamworks {
struct EDurationControlOnlineState;
}
namespace Steamworks {
struct EFloatingGamepadTextInputMode;
}
namespace Steamworks {
struct EFriendFlags;
}
namespace Steamworks {
struct EFriendRelationship;
}
namespace Steamworks {
struct EGameSearchErrorCode_t;
}
namespace Steamworks {
struct EGamepadTextInputLineMode;
}
namespace Steamworks {
struct EGamepadTextInputMode;
}
namespace Steamworks {
struct EHTMLKeyModifiers;
}
namespace Steamworks {
struct EHTMLMouseButton;
}
namespace Steamworks {
struct EHTTPMethod;
}
namespace Steamworks {
struct EInputActionOrigin;
}
namespace Steamworks {
struct EItemPreviewType;
}
namespace Steamworks {
struct EItemStatistic;
}
namespace Steamworks {
struct EItemUpdateStatus;
}
namespace Steamworks {
struct ELeaderboardDataRequest;
}
namespace Steamworks {
struct ELeaderboardDisplayType;
}
namespace Steamworks {
struct ELeaderboardSortMethod;
}
namespace Steamworks {
struct ELeaderboardUploadScoreMethod;
}
namespace Steamworks {
struct ELobbyComparison;
}
namespace Steamworks {
struct ELobbyDistanceFilter;
}
namespace Steamworks {
struct ELobbyType;
}
namespace Steamworks {
struct ENotificationPosition;
}
namespace Steamworks {
struct EOverlayToStoreFlag;
}
namespace Steamworks {
struct EP2PSend;
}
namespace Steamworks {
struct EParentalFeature;
}
namespace Steamworks {
struct EPersonaState;
}
namespace Steamworks {
struct EPlayerResult_t;
}
namespace Steamworks {
struct ERemoteStorageFilePathType;
}
namespace Steamworks {
struct ERemoteStorageLocalFileChange;
}
namespace Steamworks {
struct ERemoteStoragePlatform;
}
namespace Steamworks {
struct ERemoteStoragePublishedFileVisibility;
}
namespace Steamworks {
struct EResult;
}
namespace Steamworks {
struct ESNetSocketConnectionType;
}
namespace Steamworks {
struct EServerMode;
}
namespace Steamworks {
struct ESteamAPICallFailure;
}
namespace Steamworks {
struct ESteamControllerPad;
}
namespace Steamworks {
struct ESteamDeviceFormFactor;
}
namespace Steamworks {
struct ESteamIPv6ConnectivityProtocol;
}
namespace Steamworks {
struct ESteamIPv6ConnectivityState;
}
namespace Steamworks {
struct ESteamInputGlyphSize;
}
namespace Steamworks {
struct ESteamInputType;
}
namespace Steamworks {
struct ESteamNetworkingAvailability;
}
namespace Steamworks {
struct ESteamNetworkingConfigDataType;
}
namespace Steamworks {
struct ESteamNetworkingConfigScope;
}
namespace Steamworks {
struct ESteamNetworkingConfigValue;
}
namespace Steamworks {
struct ESteamNetworkingConnectionState;
}
namespace Steamworks {
struct ESteamNetworkingFakeIPType;
}
namespace Steamworks {
struct ESteamNetworkingGetConfigValueResult;
}
namespace Steamworks {
struct ESteamNetworkingSocketsDebugOutputType;
}
namespace Steamworks {
struct ESteamPartyBeaconLocationData;
}
namespace Steamworks {
struct ETextFilteringContext;
}
namespace Steamworks {
struct EUGCMatchingUGCType;
}
namespace Steamworks {
struct EUGCQuery;
}
namespace Steamworks {
struct EUGCReadAction;
}
namespace Steamworks {
struct EUniverse;
}
namespace Steamworks {
struct EUserHasLicenseForAppResult;
}
namespace Steamworks {
struct EUserUGCListSortOrder;
}
namespace Steamworks {
struct EUserUGCList;
}
namespace Steamworks {
struct EVRScreenshotType;
}
namespace Steamworks {
struct EVoiceResult;
}
namespace Steamworks {
struct EWorkshopEnumerationType;
}
namespace Steamworks {
struct EWorkshopFileAction;
}
namespace Steamworks {
struct EWorkshopFileType;
}
namespace Steamworks {
struct EWorkshopVideoProvider;
}
namespace Steamworks {
struct EXboxOrigin;
}
namespace Steamworks {
class FSteamNetworkingSocketsDebugOutput;
}
namespace Steamworks {
struct FriendGameInfo_t;
}
namespace Steamworks {
struct FriendsGroupID_t;
}
namespace Steamworks {
struct HAuthTicket;
}
namespace Steamworks {
struct HHTMLBrowser;
}
namespace Steamworks {
struct HServerListRequest;
}
namespace Steamworks {
struct HServerQuery;
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
struct HSteamPipe;
}
namespace Steamworks {
struct HSteamUser;
}
namespace Steamworks {
struct HTTPCookieContainerHandle;
}
namespace Steamworks {
struct HTTPRequestHandle;
}
namespace Steamworks {
struct ISteamNetworkingConnectionSignaling;
}
namespace Steamworks {
struct ISteamNetworkingSignalingRecvContext;
}
namespace Steamworks {
struct InputActionSetHandle_t;
}
namespace Steamworks {
struct InputAnalogActionData_t;
}
namespace Steamworks {
struct InputAnalogActionHandle_t;
}
namespace Steamworks {
struct InputDigitalActionData_t;
}
namespace Steamworks {
struct InputDigitalActionHandle_t;
}
namespace Steamworks {
struct InputHandle_t;
}
namespace Steamworks {
struct InputMotionData_t;
}
namespace Steamworks {
class InteropHelp_UTF8StringHandle;
}
namespace Steamworks {
struct LeaderboardEntry_t;
}
namespace Steamworks {
struct P2PSessionState_t;
}
namespace Steamworks {
struct PartyBeaconID_t;
}
namespace Steamworks {
struct PublishedFileId_t;
}
namespace Steamworks {
struct PublishedFileUpdateHandle_t;
}
namespace Steamworks {
struct RemotePlaySessionID_t;
}
namespace Steamworks {
struct SNetListenSocket_t;
}
namespace Steamworks {
struct SNetSocket_t;
}
namespace Steamworks {
struct ScreenshotHandle;
}
namespace Steamworks {
struct SteamAPICall_t;
}
namespace Steamworks {
class SteamAPIWarningMessageHook_t;
}
namespace Steamworks {
struct SteamDatagramHostedAddress;
}
namespace Steamworks {
struct SteamDatagramRelayAuthTicket;
}
namespace Steamworks {
struct SteamIPAddress_t;
}
namespace Steamworks {
class SteamInputActionEventCallbackPointer;
}
namespace Steamworks {
struct SteamInventoryResult_t;
}
namespace Steamworks {
struct SteamInventoryUpdateHandle_t;
}
namespace Steamworks {
struct SteamItemDef_t;
}
namespace Steamworks {
struct SteamItemDetails_t;
}
namespace Steamworks {
struct SteamItemInstanceID_t;
}
namespace Steamworks {
struct SteamLeaderboardEntries_t;
}
namespace Steamworks {
struct SteamLeaderboard_t;
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
struct SteamNetworkPingLocation_t;
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
namespace Steamworks {
struct SteamPartyBeaconLocation_t;
}
namespace Steamworks {
struct SteamRelayNetworkStatus_t;
}
namespace Steamworks {
struct SteamUGCDetails_t;
}
namespace Steamworks {
struct UGCFileWriteStreamHandle_t;
}
namespace Steamworks {
struct UGCHandle_t;
}
namespace Steamworks {
struct UGCQueryHandle_t;
}
namespace Steamworks {
struct UGCUpdateHandle_t;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Steamworks {
class NativeMethods;
}
// Write type traits
MARK_REF_T(::Steamworks::NativeMethods*);
DEFINE_IL2CPP_CLASS(::Steamworks::NativeMethods*, "Steamworks", "NativeMethods");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.NativeMethods
class CORDL_TYPE NativeMethods : public ::System::Object {
public:
// Declarations
/// @brief Method ISteamAppList_GetAppBuildId, addr 0x180553030, size 0x90, virtual false, abstract: false, final false
static inline int32_t ISteamAppList_GetAppBuildId(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  nAppID) ;

/// @brief Method ISteamAppList_GetAppInstallDir, addr 0x1805530c0, size 0xa0, virtual false, abstract: false, final false
static inline int32_t ISteamAppList_GetAppInstallDir(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  nAppID, ::System::IntPtr  pchDirectory, int32_t  cchNameMax) ;

/// @brief Method ISteamAppList_GetAppName, addr 0x180553160, size 0xa0, virtual false, abstract: false, final false
static inline int32_t ISteamAppList_GetAppName(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  nAppID, ::System::IntPtr  pchName, int32_t  cchNameMax) ;

/// @brief Method ISteamAppList_GetInstalledApps, addr 0x180553200, size 0xa0, virtual false, abstract: false, final false
static inline uint32_t ISteamAppList_GetInstalledApps(::System::IntPtr  instancePtr, ::by_ref<::ArrayW<::Steamworks::AppId_t>>  pvecAppID, uint32_t  unMaxAppIDs) ;

/// @brief Method ISteamAppList_GetNumInstalledApps, addr 0x1805532a0, size 0x80, virtual false, abstract: false, final false
static inline uint32_t ISteamAppList_GetNumInstalledApps(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamApps_BGetDLCDataByIndex, addr 0x180553320, size 0xe0, virtual false, abstract: false, final false
static inline bool ISteamApps_BGetDLCDataByIndex(::System::IntPtr  instancePtr, int32_t  iDLC, ::by_ref<::Steamworks::AppId_t>  pAppID, ::by_ref<bool>  pbAvailable, ::System::IntPtr  pchName, int32_t  cchNameBufferSize) ;

/// @brief Method ISteamApps_BIsAppInstalled, addr 0x180553400, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamApps_BIsAppInstalled(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  appID) ;

/// @brief Method ISteamApps_BIsCybercafe, addr 0x180553490, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamApps_BIsCybercafe(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamApps_BIsDlcInstalled, addr 0x180553510, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamApps_BIsDlcInstalled(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  appID) ;

/// @brief Method ISteamApps_BIsLowViolence, addr 0x1805535a0, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamApps_BIsLowViolence(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamApps_BIsSubscribed, addr 0x1805537b0, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamApps_BIsSubscribed(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamApps_BIsSubscribedApp, addr 0x180553620, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamApps_BIsSubscribedApp(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  appID) ;

/// @brief Method ISteamApps_BIsSubscribedFromFamilySharing, addr 0x1805536b0, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamApps_BIsSubscribedFromFamilySharing(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamApps_BIsSubscribedFromFreeWeekend, addr 0x180553730, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamApps_BIsSubscribedFromFreeWeekend(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamApps_BIsTimedTrial, addr 0x180553830, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamApps_BIsTimedTrial(::System::IntPtr  instancePtr, ::by_ref<uint32_t>  punSecondsAllowed, ::by_ref<uint32_t>  punSecondsPlayed) ;

/// @brief Method ISteamApps_BIsVACBanned, addr 0x1805538d0, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamApps_BIsVACBanned(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamApps_GetAppBuildId, addr 0x180553950, size 0x80, virtual false, abstract: false, final false
static inline int32_t ISteamApps_GetAppBuildId(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamApps_GetAppInstallDir, addr 0x1805539d0, size 0xa0, virtual false, abstract: false, final false
static inline uint32_t ISteamApps_GetAppInstallDir(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  appID, ::System::IntPtr  pchFolder, uint32_t  cchFolderBufferSize) ;

/// @brief Method ISteamApps_GetAppOwner, addr 0x180553a70, size 0x80, virtual false, abstract: false, final false
static inline uint64_t ISteamApps_GetAppOwner(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamApps_GetAvailableGameLanguages, addr 0x180553af0, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamApps_GetAvailableGameLanguages(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamApps_GetCurrentBetaName, addr 0x180553b70, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamApps_GetCurrentBetaName(::System::IntPtr  instancePtr, ::System::IntPtr  pchName, int32_t  cchNameBufferSize) ;

/// @brief Method ISteamApps_GetCurrentGameLanguage, addr 0x180553c10, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamApps_GetCurrentGameLanguage(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamApps_GetDLCCount, addr 0x180553c90, size 0x80, virtual false, abstract: false, final false
static inline int32_t ISteamApps_GetDLCCount(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamApps_GetDlcDownloadProgress, addr 0x180553d10, size 0xb0, virtual false, abstract: false, final false
static inline bool ISteamApps_GetDlcDownloadProgress(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  nAppID, ::by_ref<uint64_t>  punBytesDownloaded, ::by_ref<uint64_t>  punBytesTotal) ;

/// @brief Method ISteamApps_GetEarliestPurchaseUnixTime, addr 0x180553dc0, size 0x90, virtual false, abstract: false, final false
static inline uint32_t ISteamApps_GetEarliestPurchaseUnixTime(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  nAppID) ;

/// @brief Method ISteamApps_GetFileDetails, addr 0x180553e50, size 0xe0, virtual false, abstract: false, final false
static inline uint64_t ISteamApps_GetFileDetails(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pszFileName) ;

/// @brief Method ISteamApps_GetInstalledDepots, addr 0x180553f30, size 0xb0, virtual false, abstract: false, final false
static inline uint32_t ISteamApps_GetInstalledDepots(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  appID, ::by_ref<::ArrayW<::Steamworks::DepotId_t>>  pvecDepots, uint32_t  cMaxDepots) ;

/// @brief Method ISteamApps_GetLaunchCommandLine, addr 0x180553fe0, size 0xa0, virtual false, abstract: false, final false
static inline int32_t ISteamApps_GetLaunchCommandLine(::System::IntPtr  instancePtr, ::System::IntPtr  pszCommandLine, int32_t  cubCommandLine) ;

/// @brief Method ISteamApps_GetLaunchQueryParam, addr 0x180554080, size 0xe0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamApps_GetLaunchQueryParam(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchKey) ;

/// @brief Method ISteamApps_InstallDLC, addr 0x180554160, size 0x90, virtual false, abstract: false, final false
static inline void ISteamApps_InstallDLC(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  nAppID) ;

/// @brief Method ISteamApps_MarkContentCorrupt, addr 0x1805541f0, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamApps_MarkContentCorrupt(::System::IntPtr  instancePtr, bool  bMissingFilesOnly) ;

/// @brief Method ISteamApps_RequestAllProofOfPurchaseKeys, addr 0x180554280, size 0x80, virtual false, abstract: false, final false
static inline void ISteamApps_RequestAllProofOfPurchaseKeys(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamApps_RequestAppProofOfPurchaseKey, addr 0x180554300, size 0x90, virtual false, abstract: false, final false
static inline void ISteamApps_RequestAppProofOfPurchaseKey(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  nAppID) ;

/// @brief Method ISteamApps_UninstallDLC, addr 0x180554390, size 0x90, virtual false, abstract: false, final false
static inline void ISteamApps_UninstallDLC(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  nAppID) ;

/// @brief Method ISteamClient_BReleaseSteamPipe, addr 0x180554420, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamClient_BReleaseSteamPipe(::System::IntPtr  instancePtr, ::Steamworks::HSteamPipe  hSteamPipe) ;

/// @brief Method ISteamClient_BShutdownIfAllPipesClosed, addr 0x1805544b0, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamClient_BShutdownIfAllPipesClosed(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamClient_ConnectToGlobalUser, addr 0x180554530, size 0x90, virtual false, abstract: false, final false
static inline int32_t ISteamClient_ConnectToGlobalUser(::System::IntPtr  instancePtr, ::Steamworks::HSteamPipe  hSteamPipe) ;

/// @brief Method ISteamClient_CreateLocalUser, addr 0x1805545c0, size 0xa0, virtual false, abstract: false, final false
static inline int32_t ISteamClient_CreateLocalUser(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::HSteamPipe>  phSteamPipe, ::Steamworks::EAccountType  eAccountType) ;

/// @brief Method ISteamClient_CreateSteamPipe, addr 0x180554660, size 0x80, virtual false, abstract: false, final false
static inline int32_t ISteamClient_CreateSteamPipe(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamClient_GetIPCCallCount, addr 0x1805546e0, size 0x80, virtual false, abstract: false, final false
static inline uint32_t ISteamClient_GetIPCCallCount(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamClient_GetISteamAppList, addr 0x180554760, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamAppList(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamApps, addr 0x180554850, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamApps(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamController, addr 0x180554940, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamController(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamFriends, addr 0x180554a30, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamFriends(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamGameSearch, addr 0x180554b20, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamGameSearch(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamGameServer, addr 0x180554d00, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamGameServer(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamGameServerStats, addr 0x180554c10, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamGameServerStats(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamGenericInterface, addr 0x180554df0, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamGenericInterface(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamHTMLSurface, addr 0x180554ee0, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamHTMLSurface(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamHTTP, addr 0x180554fd0, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamHTTP(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamInput, addr 0x1805550c0, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamInput(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamInventory, addr 0x1805551b0, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamInventory(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamMatchmaking, addr 0x180555390, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamMatchmaking(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamMatchmakingServers, addr 0x1805552a0, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamMatchmakingServers(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamMusic, addr 0x180555570, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamMusic(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamMusicRemote, addr 0x180555480, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamMusicRemote(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamNetworking, addr 0x180555660, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamNetworking(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamParentalSettings, addr 0x180555750, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamParentalSettings(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamParties, addr 0x180555840, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamParties(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamRemotePlay, addr 0x180555930, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamRemotePlay(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamRemoteStorage, addr 0x180555a20, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamRemoteStorage(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamScreenshots, addr 0x180555b10, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamScreenshots(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamUGC, addr 0x180555c00, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamUGC(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamUser, addr 0x180555de0, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamUser(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamUserStats, addr 0x180555cf0, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamUserStats(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamUtils, addr 0x180555ed0, size 0xe0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamUtils(::System::IntPtr  instancePtr, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_GetISteamVideo, addr 0x180555fb0, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamClient_GetISteamVideo(::System::IntPtr  instancePtr, ::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion) ;

/// @brief Method ISteamClient_ReleaseUser, addr 0x1805560a0, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamClient_ReleaseUser(::System::IntPtr  instancePtr, ::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::HSteamUser  hUser) ;

/// @brief Method ISteamClient_SetLocalIPBinding, addr 0x180556140, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamClient_SetLocalIPBinding(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamIPAddress_t>  unIP, uint16_t  usPort) ;

/// @brief Method ISteamClient_SetWarningMessageHook, addr 0x1805561e0, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamClient_SetWarningMessageHook(::System::IntPtr  instancePtr, ::Steamworks::SteamAPIWarningMessageHook_t*  pFunction) ;

/// @brief Method ISteamFriends_ActivateGameOverlay, addr 0x1805566d0, size 0xd0, virtual false, abstract: false, final false
static inline void ISteamFriends_ActivateGameOverlay(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchDialog) ;

/// @brief Method ISteamFriends_ActivateGameOverlayInviteDialog, addr 0x180556350, size 0x90, virtual false, abstract: false, final false
static inline void ISteamFriends_ActivateGameOverlayInviteDialog(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby) ;

/// @brief Method ISteamFriends_ActivateGameOverlayInviteDialogConnectString, addr 0x180556280, size 0xd0, virtual false, abstract: false, final false
static inline void ISteamFriends_ActivateGameOverlayInviteDialogConnectString(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchConnectString) ;

/// @brief Method ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog, addr 0x1805563e0, size 0x90, virtual false, abstract: false, final false
static inline void ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby) ;

/// @brief Method ISteamFriends_ActivateGameOverlayToStore, addr 0x180556470, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamFriends_ActivateGameOverlayToStore(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  nAppID, ::Steamworks::EOverlayToStoreFlag  eFlag) ;

/// @brief Method ISteamFriends_ActivateGameOverlayToUser, addr 0x180556510, size 0xe0, virtual false, abstract: false, final false
static inline void ISteamFriends_ActivateGameOverlayToUser(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchDialog, ::Steamworks::CSteamID  steamID) ;

/// @brief Method ISteamFriends_ActivateGameOverlayToWebPage, addr 0x1805565f0, size 0xe0, virtual false, abstract: false, final false
static inline void ISteamFriends_ActivateGameOverlayToWebPage(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchURL, ::Steamworks::EActivateGameOverlayToWebPageMode  eMode) ;

/// @brief Method ISteamFriends_ClearRichPresence, addr 0x1805567a0, size 0x80, virtual false, abstract: false, final false
static inline void ISteamFriends_ClearRichPresence(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamFriends_CloseClanChatWindowInSteam, addr 0x180556820, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamFriends_CloseClanChatWindowInSteam(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDClanChat) ;

/// @brief Method ISteamFriends_DownloadClanActivityCounts, addr 0x1805568b0, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamFriends_DownloadClanActivityCounts(::System::IntPtr  instancePtr, ::by_ref<::ArrayW<::Steamworks::CSteamID>>  psteamIDClans, int32_t  cClansToRequest) ;

/// @brief Method ISteamFriends_EnumerateFollowingList, addr 0x180556950, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamFriends_EnumerateFollowingList(::System::IntPtr  instancePtr, uint32_t  unStartIndex) ;

/// @brief Method ISteamFriends_GetChatMemberByIndex, addr 0x1805569e0, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamFriends_GetChatMemberByIndex(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDClan, int32_t  iUser) ;

/// @brief Method ISteamFriends_GetClanActivityCounts, addr 0x180556a80, size 0xc0, virtual false, abstract: false, final false
static inline bool ISteamFriends_GetClanActivityCounts(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDClan, ::by_ref<int32_t>  pnOnline, ::by_ref<int32_t>  pnInGame, ::by_ref<int32_t>  pnChatting) ;

/// @brief Method ISteamFriends_GetClanByIndex, addr 0x180556b40, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamFriends_GetClanByIndex(::System::IntPtr  instancePtr, int32_t  iClan) ;

/// @brief Method ISteamFriends_GetClanChatMemberCount, addr 0x180556bd0, size 0x90, virtual false, abstract: false, final false
static inline int32_t ISteamFriends_GetClanChatMemberCount(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDClan) ;

/// @brief Method ISteamFriends_GetClanChatMessage, addr 0x180556c60, size 0xd0, virtual false, abstract: false, final false
static inline int32_t ISteamFriends_GetClanChatMessage(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDClanChat, int32_t  iMessage, ::System::IntPtr  prgchText, int32_t  cchTextMax, ::by_ref<::Steamworks::EChatEntryType>  peChatEntryType, ::by_ref<::Steamworks::CSteamID>  psteamidChatter) ;

/// @brief Method ISteamFriends_GetClanCount, addr 0x180556d30, size 0x80, virtual false, abstract: false, final false
static inline int32_t ISteamFriends_GetClanCount(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamFriends_GetClanName, addr 0x180556db0, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamFriends_GetClanName(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDClan) ;

/// @brief Method ISteamFriends_GetClanOfficerByIndex, addr 0x180556e40, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamFriends_GetClanOfficerByIndex(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDClan, int32_t  iOfficer) ;

/// @brief Method ISteamFriends_GetClanOfficerCount, addr 0x180556ee0, size 0x90, virtual false, abstract: false, final false
static inline int32_t ISteamFriends_GetClanOfficerCount(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDClan) ;

/// @brief Method ISteamFriends_GetClanOwner, addr 0x180556f70, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamFriends_GetClanOwner(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDClan) ;

/// @brief Method ISteamFriends_GetClanTag, addr 0x180557000, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamFriends_GetClanTag(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDClan) ;

/// @brief Method ISteamFriends_GetCoplayFriend, addr 0x180557110, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamFriends_GetCoplayFriend(::System::IntPtr  instancePtr, int32_t  iCoplayFriend) ;

/// @brief Method ISteamFriends_GetCoplayFriendCount, addr 0x180557090, size 0x80, virtual false, abstract: false, final false
static inline int32_t ISteamFriends_GetCoplayFriendCount(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamFriends_GetFollowerCount, addr 0x1805571a0, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamFriends_GetFollowerCount(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamID) ;

/// @brief Method ISteamFriends_GetFriendByIndex, addr 0x180557230, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamFriends_GetFriendByIndex(::System::IntPtr  instancePtr, int32_t  iFriend, ::Steamworks::EFriendFlags  iFriendFlags) ;

/// @brief Method ISteamFriends_GetFriendCoplayGame, addr 0x1805572d0, size 0x90, virtual false, abstract: false, final false
static inline uint32_t ISteamFriends_GetFriendCoplayGame(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDFriend) ;

/// @brief Method ISteamFriends_GetFriendCoplayTime, addr 0x180557360, size 0x90, virtual false, abstract: false, final false
static inline int32_t ISteamFriends_GetFriendCoplayTime(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDFriend) ;

/// @brief Method ISteamFriends_GetFriendCount, addr 0x180557480, size 0x90, virtual false, abstract: false, final false
static inline int32_t ISteamFriends_GetFriendCount(::System::IntPtr  instancePtr, ::Steamworks::EFriendFlags  iFriendFlags) ;

/// @brief Method ISteamFriends_GetFriendCountFromSource, addr 0x1805573f0, size 0x90, virtual false, abstract: false, final false
static inline int32_t ISteamFriends_GetFriendCountFromSource(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDSource) ;

/// @brief Method ISteamFriends_GetFriendFromSourceByIndex, addr 0x180557510, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamFriends_GetFriendFromSourceByIndex(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDSource, int32_t  iFriend) ;

/// @brief Method ISteamFriends_GetFriendGamePlayed, addr 0x1805575b0, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamFriends_GetFriendGamePlayed(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDFriend, ::by_ref<::Steamworks::FriendGameInfo_t>  pFriendGameInfo) ;

/// @brief Method ISteamFriends_GetFriendMessage, addr 0x180557650, size 0xc0, virtual false, abstract: false, final false
static inline int32_t ISteamFriends_GetFriendMessage(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDFriend, int32_t  iMessageID, ::System::IntPtr  pvData, int32_t  cubData, ::by_ref<::Steamworks::EChatEntryType>  peChatEntryType) ;

/// @brief Method ISteamFriends_GetFriendPersonaName, addr 0x1805577b0, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamFriends_GetFriendPersonaName(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDFriend) ;

/// @brief Method ISteamFriends_GetFriendPersonaNameHistory, addr 0x180557710, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamFriends_GetFriendPersonaNameHistory(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDFriend, int32_t  iPersonaName) ;

/// @brief Method ISteamFriends_GetFriendPersonaState, addr 0x180557840, size 0x90, virtual false, abstract: false, final false
static inline ::Steamworks::EPersonaState ISteamFriends_GetFriendPersonaState(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDFriend) ;

/// @brief Method ISteamFriends_GetFriendRelationship, addr 0x1805578d0, size 0x90, virtual false, abstract: false, final false
static inline ::Steamworks::EFriendRelationship ISteamFriends_GetFriendRelationship(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDFriend) ;

/// @brief Method ISteamFriends_GetFriendRichPresence, addr 0x180557a90, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamFriends_GetFriendRichPresence(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDFriend, ::Steamworks::InteropHelp_UTF8StringHandle*  pchKey) ;

/// @brief Method ISteamFriends_GetFriendRichPresenceKeyByIndex, addr 0x180557960, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamFriends_GetFriendRichPresenceKeyByIndex(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDFriend, int32_t  iKey) ;

/// @brief Method ISteamFriends_GetFriendRichPresenceKeyCount, addr 0x180557a00, size 0x90, virtual false, abstract: false, final false
static inline int32_t ISteamFriends_GetFriendRichPresenceKeyCount(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDFriend) ;

/// @brief Method ISteamFriends_GetFriendSteamLevel, addr 0x180557b80, size 0x90, virtual false, abstract: false, final false
static inline int32_t ISteamFriends_GetFriendSteamLevel(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDFriend) ;

/// @brief Method ISteamFriends_GetFriendsGroupCount, addr 0x180557c10, size 0x80, virtual false, abstract: false, final false
static inline int32_t ISteamFriends_GetFriendsGroupCount(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamFriends_GetFriendsGroupIDByIndex, addr 0x180557c90, size 0x90, virtual false, abstract: false, final false
static inline int16_t ISteamFriends_GetFriendsGroupIDByIndex(::System::IntPtr  instancePtr, int32_t  iFG) ;

/// @brief Method ISteamFriends_GetFriendsGroupMembersCount, addr 0x180557d20, size 0x90, virtual false, abstract: false, final false
static inline int32_t ISteamFriends_GetFriendsGroupMembersCount(::System::IntPtr  instancePtr, ::Steamworks::FriendsGroupID_t  friendsGroupID) ;

/// @brief Method ISteamFriends_GetFriendsGroupMembersList, addr 0x180557db0, size 0xb0, virtual false, abstract: false, final false
static inline void ISteamFriends_GetFriendsGroupMembersList(::System::IntPtr  instancePtr, ::Steamworks::FriendsGroupID_t  friendsGroupID, ::by_ref<::ArrayW<::Steamworks::CSteamID>>  pOutSteamIDMembers, int32_t  nMembersCount) ;

/// @brief Method ISteamFriends_GetFriendsGroupName, addr 0x180557e60, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamFriends_GetFriendsGroupName(::System::IntPtr  instancePtr, ::Steamworks::FriendsGroupID_t  friendsGroupID) ;

/// @brief Method ISteamFriends_GetLargeFriendAvatar, addr 0x180557ef0, size 0x90, virtual false, abstract: false, final false
static inline int32_t ISteamFriends_GetLargeFriendAvatar(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDFriend) ;

/// @brief Method ISteamFriends_GetMediumFriendAvatar, addr 0x180557f80, size 0x90, virtual false, abstract: false, final false
static inline int32_t ISteamFriends_GetMediumFriendAvatar(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDFriend) ;

/// @brief Method ISteamFriends_GetNumChatsWithUnreadPriorityMessages, addr 0x180558010, size 0x80, virtual false, abstract: false, final false
static inline int32_t ISteamFriends_GetNumChatsWithUnreadPriorityMessages(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamFriends_GetPersonaName, addr 0x180558090, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamFriends_GetPersonaName(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamFriends_GetPersonaState, addr 0x180558110, size 0x80, virtual false, abstract: false, final false
static inline ::Steamworks::EPersonaState ISteamFriends_GetPersonaState(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamFriends_GetPlayerNickname, addr 0x180558190, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamFriends_GetPlayerNickname(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDPlayer) ;

/// @brief Method ISteamFriends_GetSmallFriendAvatar, addr 0x180558220, size 0x90, virtual false, abstract: false, final false
static inline int32_t ISteamFriends_GetSmallFriendAvatar(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDFriend) ;

/// @brief Method ISteamFriends_GetUserRestrictions, addr 0x1805582b0, size 0x80, virtual false, abstract: false, final false
static inline uint32_t ISteamFriends_GetUserRestrictions(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamFriends_HasFriend, addr 0x180558330, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamFriends_HasFriend(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDFriend, ::Steamworks::EFriendFlags  iFriendFlags) ;

/// @brief Method ISteamFriends_InviteUserToGame, addr 0x1805583d0, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamFriends_InviteUserToGame(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDFriend, ::Steamworks::InteropHelp_UTF8StringHandle*  pchConnectString) ;

/// @brief Method ISteamFriends_IsClanChatAdmin, addr 0x1805584c0, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamFriends_IsClanChatAdmin(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDClanChat, ::Steamworks::CSteamID  steamIDUser) ;

/// @brief Method ISteamFriends_IsClanChatWindowOpenInSteam, addr 0x180558560, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamFriends_IsClanChatWindowOpenInSteam(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDClanChat) ;

/// @brief Method ISteamFriends_IsClanOfficialGameGroup, addr 0x1805585f0, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamFriends_IsClanOfficialGameGroup(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDClan) ;

/// @brief Method ISteamFriends_IsClanPublic, addr 0x180558680, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamFriends_IsClanPublic(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDClan) ;

/// @brief Method ISteamFriends_IsFollowing, addr 0x180558710, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamFriends_IsFollowing(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamID) ;

/// @brief Method ISteamFriends_IsUserInSource, addr 0x1805587a0, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamFriends_IsUserInSource(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDUser, ::Steamworks::CSteamID  steamIDSource) ;

/// @brief Method ISteamFriends_JoinClanChatRoom, addr 0x180558840, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamFriends_JoinClanChatRoom(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDClan) ;

/// @brief Method ISteamFriends_LeaveClanChatRoom, addr 0x1805588d0, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamFriends_LeaveClanChatRoom(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDClan) ;

/// @brief Method ISteamFriends_OpenClanChatWindowInSteam, addr 0x180558960, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamFriends_OpenClanChatWindowInSteam(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDClanChat) ;

/// @brief Method ISteamFriends_RegisterProtocolInOverlayBrowser, addr 0x1805589f0, size 0xe0, virtual false, abstract: false, final false
static inline bool ISteamFriends_RegisterProtocolInOverlayBrowser(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchProtocol) ;

/// @brief Method ISteamFriends_ReplyToFriendMessage, addr 0x180558ad0, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamFriends_ReplyToFriendMessage(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDFriend, ::Steamworks::InteropHelp_UTF8StringHandle*  pchMsgToSend) ;

/// @brief Method ISteamFriends_RequestClanOfficerList, addr 0x180558bc0, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamFriends_RequestClanOfficerList(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDClan) ;

/// @brief Method ISteamFriends_RequestFriendRichPresence, addr 0x180558c50, size 0x90, virtual false, abstract: false, final false
static inline void ISteamFriends_RequestFriendRichPresence(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDFriend) ;

/// @brief Method ISteamFriends_RequestUserInformation, addr 0x180558ce0, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamFriends_RequestUserInformation(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDUser, bool  bRequireNameOnly) ;

/// @brief Method ISteamFriends_SendClanChatMessage, addr 0x180558d80, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamFriends_SendClanChatMessage(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDClanChat, ::Steamworks::InteropHelp_UTF8StringHandle*  pchText) ;

/// @brief Method ISteamFriends_SetInGameVoiceSpeaking, addr 0x180558e70, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamFriends_SetInGameVoiceSpeaking(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDUser, bool  bSpeaking) ;

/// @brief Method ISteamFriends_SetListenForFriendsMessages, addr 0x180558f10, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamFriends_SetListenForFriendsMessages(::System::IntPtr  instancePtr, bool  bInterceptEnabled) ;

/// @brief Method ISteamFriends_SetPersonaName, addr 0x180558fa0, size 0xe0, virtual false, abstract: false, final false
static inline uint64_t ISteamFriends_SetPersonaName(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchPersonaName) ;

/// @brief Method ISteamFriends_SetPlayedWith, addr 0x180559080, size 0x90, virtual false, abstract: false, final false
static inline void ISteamFriends_SetPlayedWith(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDUserPlayedWith) ;

/// @brief Method ISteamFriends_SetRichPresence, addr 0x180559110, size 0x140, virtual false, abstract: false, final false
static inline bool ISteamFriends_SetRichPresence(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchKey, ::Steamworks::InteropHelp_UTF8StringHandle*  pchValue) ;

/// @brief Method ISteamGameSearch_AcceptGame, addr 0x180559250, size 0x80, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t ISteamGameSearch_AcceptGame(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamGameSearch_AddGameSearchParams, addr 0x1805592d0, size 0x140, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t ISteamGameSearch_AddGameSearchParams(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchKeyToFind, ::Steamworks::InteropHelp_UTF8StringHandle*  pchValuesToFind) ;

/// @brief Method ISteamGameSearch_CancelRequestPlayersForGame, addr 0x180559410, size 0x80, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t ISteamGameSearch_CancelRequestPlayersForGame(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamGameSearch_DeclineGame, addr 0x180559490, size 0x80, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t ISteamGameSearch_DeclineGame(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamGameSearch_EndGame, addr 0x180559590, size 0x90, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t ISteamGameSearch_EndGame(::System::IntPtr  instancePtr, uint64_t  ullUniqueGameID) ;

/// @brief Method ISteamGameSearch_EndGameSearch, addr 0x180559510, size 0x80, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t ISteamGameSearch_EndGameSearch(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamGameSearch_HostConfirmGameStart, addr 0x180559620, size 0x90, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t ISteamGameSearch_HostConfirmGameStart(::System::IntPtr  instancePtr, uint64_t  ullUniqueGameID) ;

/// @brief Method ISteamGameSearch_RequestPlayersForGame, addr 0x1805596b0, size 0xa0, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t ISteamGameSearch_RequestPlayersForGame(::System::IntPtr  instancePtr, int32_t  nPlayerMin, int32_t  nPlayerMax, int32_t  nMaxTeamSize) ;

/// @brief Method ISteamGameSearch_RetrieveConnectionDetails, addr 0x180559750, size 0xb0, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t ISteamGameSearch_RetrieveConnectionDetails(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDHost, ::System::IntPtr  pchConnectionDetails, int32_t  cubConnectionDetails) ;

/// @brief Method ISteamGameSearch_SearchForGameSolo, addr 0x180559800, size 0xa0, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t ISteamGameSearch_SearchForGameSolo(::System::IntPtr  instancePtr, int32_t  nPlayerMin, int32_t  nPlayerMax) ;

/// @brief Method ISteamGameSearch_SearchForGameWithLobby, addr 0x1805598a0, size 0xb0, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t ISteamGameSearch_SearchForGameWithLobby(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby, int32_t  nPlayerMin, int32_t  nPlayerMax) ;

/// @brief Method ISteamGameSearch_SetConnectionDetails, addr 0x180559950, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t ISteamGameSearch_SetConnectionDetails(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchConnectionDetails, int32_t  cubConnectionDetails) ;

/// @brief Method ISteamGameSearch_SetGameHostParams, addr 0x180559a30, size 0x140, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t ISteamGameSearch_SetGameHostParams(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchKey, ::Steamworks::InteropHelp_UTF8StringHandle*  pchValue) ;

/// @brief Method ISteamGameSearch_SubmitPlayerResult, addr 0x180559b70, size 0xb0, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t ISteamGameSearch_SubmitPlayerResult(::System::IntPtr  instancePtr, uint64_t  ullUniqueGameID, ::Steamworks::CSteamID  steamIDPlayer, ::Steamworks::EPlayerResult_t  EPlayerResult) ;

/// @brief Method ISteamGameServerStats_ClearUserAchievement, addr 0x180559c20, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamGameServerStats_ClearUserAchievement(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDUser, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName) ;

/// @brief Method ISteamGameServerStats_GetUserAchievement, addr 0x180559d10, size 0x120, virtual false, abstract: false, final false
static inline bool ISteamGameServerStats_GetUserAchievement(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDUser, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName, ::by_ref<bool>  pbAchieved) ;

/// @brief Method ISteamGameServerStats_GetUserStatFloat, addr 0x180559e30, size 0x100, virtual false, abstract: false, final false
static inline bool ISteamGameServerStats_GetUserStatFloat(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDUser, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName, ::by_ref<float_t>  pData) ;

/// @brief Method ISteamGameServerStats_GetUserStatInt32, addr 0x180559f30, size 0x100, virtual false, abstract: false, final false
static inline bool ISteamGameServerStats_GetUserStatInt32(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDUser, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName, ::by_ref<int32_t>  pData) ;

/// @brief Method ISteamGameServerStats_RequestUserStats, addr 0x18055a030, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamGameServerStats_RequestUserStats(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDUser) ;

/// @brief Method ISteamGameServerStats_SetUserAchievement, addr 0x18055a0c0, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamGameServerStats_SetUserAchievement(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDUser, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName) ;

/// @brief Method ISteamGameServerStats_SetUserStatFloat, addr 0x18055a1b0, size 0x100, virtual false, abstract: false, final false
static inline bool ISteamGameServerStats_SetUserStatFloat(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDUser, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName, float_t  fData) ;

/// @brief Method ISteamGameServerStats_SetUserStatInt32, addr 0x18055a2b0, size 0x100, virtual false, abstract: false, final false
static inline bool ISteamGameServerStats_SetUserStatInt32(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDUser, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName, int32_t  nData) ;

/// @brief Method ISteamGameServerStats_StoreUserStats, addr 0x18055a3b0, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamGameServerStats_StoreUserStats(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDUser) ;

/// @brief Method ISteamGameServerStats_UpdateUserAvgRateStat, addr 0x18055a440, size 0x110, virtual false, abstract: false, final false
static inline bool ISteamGameServerStats_UpdateUserAvgRateStat(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDUser, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName, float_t  flCountThisSession, double_t  dSessionLength) ;

/// @brief Method ISteamGameServer_AssociateWithClan, addr 0x18055a550, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamGameServer_AssociateWithClan(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDClan) ;

/// @brief Method ISteamGameServer_BLoggedOn, addr 0x18055a5e0, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamGameServer_BLoggedOn(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamGameServer_BSecure, addr 0x18055a660, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamGameServer_BSecure(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamGameServer_BUpdateUserData, addr 0x18055a6e0, size 0x100, virtual false, abstract: false, final false
static inline bool ISteamGameServer_BUpdateUserData(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDUser, ::Steamworks::InteropHelp_UTF8StringHandle*  pchPlayerName, uint32_t  uScore) ;

/// @brief Method ISteamGameServer_BeginAuthSession, addr 0x18055a7e0, size 0xb0, virtual false, abstract: false, final false
static inline ::Steamworks::EBeginAuthSessionResult ISteamGameServer_BeginAuthSession(::System::IntPtr  instancePtr, ::ArrayW<uint8_t>  pAuthTicket, int32_t  cbAuthTicket, ::Steamworks::CSteamID  steamID) ;

/// @brief Method ISteamGameServer_CancelAuthTicket, addr 0x18055a890, size 0x90, virtual false, abstract: false, final false
static inline void ISteamGameServer_CancelAuthTicket(::System::IntPtr  instancePtr, ::Steamworks::HAuthTicket  hAuthTicket) ;

/// @brief Method ISteamGameServer_ClearAllKeyValues, addr 0x18055a920, size 0x80, virtual false, abstract: false, final false
static inline void ISteamGameServer_ClearAllKeyValues(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamGameServer_ComputeNewPlayerCompatibility, addr 0x18055a9a0, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamGameServer_ComputeNewPlayerCompatibility(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDNewPlayer) ;

/// @brief Method ISteamGameServer_CreateUnauthenticatedUserConnection, addr 0x18055aa30, size 0x80, virtual false, abstract: false, final false
static inline uint64_t ISteamGameServer_CreateUnauthenticatedUserConnection(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamGameServer_EndAuthSession, addr 0x18055aab0, size 0x90, virtual false, abstract: false, final false
static inline void ISteamGameServer_EndAuthSession(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamID) ;

/// @brief Method ISteamGameServer_GetAuthSessionTicket, addr 0x18055ab40, size 0xb0, virtual false, abstract: false, final false
static inline uint32_t ISteamGameServer_GetAuthSessionTicket(::System::IntPtr  instancePtr, ::ArrayW<uint8_t>  pTicket, int32_t  cbMaxTicket, ::by_ref<uint32_t>  pcbTicket) ;

/// @brief Method ISteamGameServer_GetGameplayStats, addr 0x18055abf0, size 0x80, virtual false, abstract: false, final false
static inline void ISteamGameServer_GetGameplayStats(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamGameServer_GetNextOutgoingPacket, addr 0x18055ac70, size 0xc0, virtual false, abstract: false, final false
static inline int32_t ISteamGameServer_GetNextOutgoingPacket(::System::IntPtr  instancePtr, ::ArrayW<uint8_t>  pOut, int32_t  cbMaxOut, ::by_ref<uint32_t>  pNetAdr, ::by_ref<uint16_t>  pPort) ;

/// @brief Method ISteamGameServer_GetPublicIP, addr 0x18055ad30, size 0xa0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamIPAddress_t ISteamGameServer_GetPublicIP(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamGameServer_GetServerReputation, addr 0x18055add0, size 0x80, virtual false, abstract: false, final false
static inline uint64_t ISteamGameServer_GetServerReputation(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamGameServer_GetSteamID, addr 0x18055ae50, size 0x80, virtual false, abstract: false, final false
static inline uint64_t ISteamGameServer_GetSteamID(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamGameServer_HandleIncomingPacket, addr 0x18055aed0, size 0xd0, virtual false, abstract: false, final false
static inline bool ISteamGameServer_HandleIncomingPacket(::System::IntPtr  instancePtr, ::ArrayW<uint8_t>  pData, int32_t  cbData, uint32_t  srcIP, uint16_t  srcPort) ;

/// @brief Method ISteamGameServer_LogOff, addr 0x18055afa0, size 0x80, virtual false, abstract: false, final false
static inline void ISteamGameServer_LogOff(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamGameServer_LogOn, addr 0x18055b0a0, size 0xd0, virtual false, abstract: false, final false
static inline void ISteamGameServer_LogOn(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pszToken) ;

/// @brief Method ISteamGameServer_LogOnAnonymous, addr 0x18055b020, size 0x80, virtual false, abstract: false, final false
static inline void ISteamGameServer_LogOnAnonymous(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamGameServer_RequestUserGroupStatus, addr 0x18055b170, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamGameServer_RequestUserGroupStatus(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDUser, ::Steamworks::CSteamID  steamIDGroup) ;

/// @brief Method ISteamGameServer_SendUserConnectAndAuthenticate_DEPRECATED, addr 0x18055b210, size 0xc0, virtual false, abstract: false, final false
static inline bool ISteamGameServer_SendUserConnectAndAuthenticate_DEPRECATED(::System::IntPtr  instancePtr, uint32_t  unIPClient, ::ArrayW<uint8_t>  pvAuthBlob, uint32_t  cubAuthBlobSize, ::by_ref<::Steamworks::CSteamID>  pSteamIDUser) ;

/// @brief Method ISteamGameServer_SendUserDisconnect_DEPRECATED, addr 0x18055b2d0, size 0x90, virtual false, abstract: false, final false
static inline void ISteamGameServer_SendUserDisconnect_DEPRECATED(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDUser) ;

/// @brief Method ISteamGameServer_SetAdvertiseServerActive, addr 0x18055b360, size 0x90, virtual false, abstract: false, final false
static inline void ISteamGameServer_SetAdvertiseServerActive(::System::IntPtr  instancePtr, bool  bActive) ;

/// @brief Method ISteamGameServer_SetBotPlayerCount, addr 0x18055b3f0, size 0x90, virtual false, abstract: false, final false
static inline void ISteamGameServer_SetBotPlayerCount(::System::IntPtr  instancePtr, int32_t  cBotplayers) ;

/// @brief Method ISteamGameServer_SetDedicatedServer, addr 0x18055b480, size 0x90, virtual false, abstract: false, final false
static inline void ISteamGameServer_SetDedicatedServer(::System::IntPtr  instancePtr, bool  bDedicated) ;

/// @brief Method ISteamGameServer_SetGameData, addr 0x18055b510, size 0xd0, virtual false, abstract: false, final false
static inline void ISteamGameServer_SetGameData(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchGameData) ;

/// @brief Method ISteamGameServer_SetGameDescription, addr 0x18055b5e0, size 0xd0, virtual false, abstract: false, final false
static inline void ISteamGameServer_SetGameDescription(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pszGameDescription) ;

/// @brief Method ISteamGameServer_SetGameTags, addr 0x18055b6b0, size 0xd0, virtual false, abstract: false, final false
static inline void ISteamGameServer_SetGameTags(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchGameTags) ;

/// @brief Method ISteamGameServer_SetKeyValue, addr 0x18055b780, size 0x130, virtual false, abstract: false, final false
static inline void ISteamGameServer_SetKeyValue(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pKey, ::Steamworks::InteropHelp_UTF8StringHandle*  pValue) ;

/// @brief Method ISteamGameServer_SetMapName, addr 0x18055b8b0, size 0xd0, virtual false, abstract: false, final false
static inline void ISteamGameServer_SetMapName(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pszMapName) ;

/// @brief Method ISteamGameServer_SetMaxPlayerCount, addr 0x18055b980, size 0x90, virtual false, abstract: false, final false
static inline void ISteamGameServer_SetMaxPlayerCount(::System::IntPtr  instancePtr, int32_t  cPlayersMax) ;

/// @brief Method ISteamGameServer_SetModDir, addr 0x18055ba10, size 0xd0, virtual false, abstract: false, final false
static inline void ISteamGameServer_SetModDir(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pszModDir) ;

/// @brief Method ISteamGameServer_SetPasswordProtected, addr 0x18055bae0, size 0x90, virtual false, abstract: false, final false
static inline void ISteamGameServer_SetPasswordProtected(::System::IntPtr  instancePtr, bool  bPasswordProtected) ;

/// @brief Method ISteamGameServer_SetProduct, addr 0x18055bb70, size 0xd0, virtual false, abstract: false, final false
static inline void ISteamGameServer_SetProduct(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pszProduct) ;

/// @brief Method ISteamGameServer_SetRegion, addr 0x18055bc40, size 0xd0, virtual false, abstract: false, final false
static inline void ISteamGameServer_SetRegion(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pszRegion) ;

/// @brief Method ISteamGameServer_SetServerName, addr 0x18055bd10, size 0xd0, virtual false, abstract: false, final false
static inline void ISteamGameServer_SetServerName(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pszServerName) ;

/// @brief Method ISteamGameServer_SetSpectatorPort, addr 0x18055bde0, size 0x90, virtual false, abstract: false, final false
static inline void ISteamGameServer_SetSpectatorPort(::System::IntPtr  instancePtr, uint16_t  unSpectatorPort) ;

/// @brief Method ISteamGameServer_SetSpectatorServerName, addr 0x18055be70, size 0xd0, virtual false, abstract: false, final false
static inline void ISteamGameServer_SetSpectatorServerName(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pszSpectatorServerName) ;

/// @brief Method ISteamGameServer_UserHasLicenseForApp, addr 0x18055bf40, size 0xa0, virtual false, abstract: false, final false
static inline ::Steamworks::EUserHasLicenseForAppResult ISteamGameServer_UserHasLicenseForApp(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamID, ::Steamworks::AppId_t  appID) ;

/// @brief Method ISteamGameServer_WasRestartRequested, addr 0x18055bfe0, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamGameServer_WasRestartRequested(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamHTMLSurface_AddHeader, addr 0x18055c060, size 0x150, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_AddHeader(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle, ::Steamworks::InteropHelp_UTF8StringHandle*  pchKey, ::Steamworks::InteropHelp_UTF8StringHandle*  pchValue) ;

/// @brief Method ISteamHTMLSurface_AllowStartRequest, addr 0x18055c1b0, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_AllowStartRequest(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle, bool  bAllowed) ;

/// @brief Method ISteamHTMLSurface_CopyToClipboard, addr 0x18055c250, size 0x90, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_CopyToClipboard(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle) ;

/// @brief Method ISteamHTMLSurface_CreateBrowser, addr 0x18055c2e0, size 0x140, virtual false, abstract: false, final false
static inline uint64_t ISteamHTMLSurface_CreateBrowser(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchUserAgent, ::Steamworks::InteropHelp_UTF8StringHandle*  pchUserCSS) ;

/// @brief Method ISteamHTMLSurface_ExecuteJavascript, addr 0x18055c420, size 0xe0, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_ExecuteJavascript(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle, ::Steamworks::InteropHelp_UTF8StringHandle*  pchScript) ;

/// @brief Method ISteamHTMLSurface_FileLoadDialogResponse, addr 0x18055c500, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_FileLoadDialogResponse(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle, ::System::IntPtr  pchSelectedFiles) ;

/// @brief Method ISteamHTMLSurface_Find, addr 0x18055c5a0, size 0x100, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_Find(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle, ::Steamworks::InteropHelp_UTF8StringHandle*  pchSearchStr, bool  bCurrentlyInFind, bool  bReverse) ;

/// @brief Method ISteamHTMLSurface_GetLinkAtPosition, addr 0x18055c6a0, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_GetLinkAtPosition(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle, int32_t  x, int32_t  y) ;

/// @brief Method ISteamHTMLSurface_GoBack, addr 0x18055c740, size 0x90, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_GoBack(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle) ;

/// @brief Method ISteamHTMLSurface_GoForward, addr 0x18055c7d0, size 0x90, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_GoForward(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle) ;

/// @brief Method ISteamHTMLSurface_Init, addr 0x18055c860, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamHTMLSurface_Init(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamHTMLSurface_JSDialogResponse, addr 0x18055c8e0, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_JSDialogResponse(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle, bool  bResult) ;

/// @brief Method ISteamHTMLSurface_KeyChar, addr 0x18055c980, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_KeyChar(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle, uint32_t  cUnicodeChar, ::Steamworks::EHTMLKeyModifiers  eHTMLKeyModifiers) ;

/// @brief Method ISteamHTMLSurface_KeyDown, addr 0x18055ca20, size 0xb0, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_KeyDown(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle, uint32_t  nNativeKeyCode, ::Steamworks::EHTMLKeyModifiers  eHTMLKeyModifiers, bool  bIsSystemKey) ;

/// @brief Method ISteamHTMLSurface_KeyUp, addr 0x18055cad0, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_KeyUp(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle, uint32_t  nNativeKeyCode, ::Steamworks::EHTMLKeyModifiers  eHTMLKeyModifiers) ;

/// @brief Method ISteamHTMLSurface_LoadURL, addr 0x18055cb70, size 0x150, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_LoadURL(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle, ::Steamworks::InteropHelp_UTF8StringHandle*  pchURL, ::Steamworks::InteropHelp_UTF8StringHandle*  pchPostData) ;

/// @brief Method ISteamHTMLSurface_MouseDoubleClick, addr 0x18055ccc0, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_MouseDoubleClick(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle, ::Steamworks::EHTMLMouseButton  eMouseButton) ;

/// @brief Method ISteamHTMLSurface_MouseDown, addr 0x18055cd60, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_MouseDown(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle, ::Steamworks::EHTMLMouseButton  eMouseButton) ;

/// @brief Method ISteamHTMLSurface_MouseMove, addr 0x18055ce00, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_MouseMove(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle, int32_t  x, int32_t  y) ;

/// @brief Method ISteamHTMLSurface_MouseUp, addr 0x18055cea0, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_MouseUp(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle, ::Steamworks::EHTMLMouseButton  eMouseButton) ;

/// @brief Method ISteamHTMLSurface_MouseWheel, addr 0x18055cf40, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_MouseWheel(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle, int32_t  nDelta) ;

/// @brief Method ISteamHTMLSurface_OpenDeveloperTools, addr 0x18055cfe0, size 0x90, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_OpenDeveloperTools(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle) ;

/// @brief Method ISteamHTMLSurface_PasteFromClipboard, addr 0x18055d070, size 0x90, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_PasteFromClipboard(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle) ;

/// @brief Method ISteamHTMLSurface_Reload, addr 0x18055d100, size 0x90, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_Reload(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle) ;

/// @brief Method ISteamHTMLSurface_RemoveBrowser, addr 0x18055d190, size 0x90, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_RemoveBrowser(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle) ;

/// @brief Method ISteamHTMLSurface_SetBackgroundMode, addr 0x18055d220, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_SetBackgroundMode(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle, bool  bBackgroundMode) ;

/// @brief Method ISteamHTMLSurface_SetCookie, addr 0x18055d2c0, size 0x240, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_SetCookie(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchHostname, ::Steamworks::InteropHelp_UTF8StringHandle*  pchKey, ::Steamworks::InteropHelp_UTF8StringHandle*  pchValue, ::Steamworks::InteropHelp_UTF8StringHandle*  pchPath, uint32_t  nExpires, bool  bSecure, bool  bHTTPOnly) ;

/// @brief Method ISteamHTMLSurface_SetDPIScalingFactor, addr 0x18055d500, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_SetDPIScalingFactor(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle, float_t  flDPIScaling) ;

/// @brief Method ISteamHTMLSurface_SetHorizontalScroll, addr 0x18055d5a0, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_SetHorizontalScroll(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle, uint32_t  nAbsolutePixelScroll) ;

/// @brief Method ISteamHTMLSurface_SetKeyFocus, addr 0x18055d640, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_SetKeyFocus(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle, bool  bHasKeyFocus) ;

/// @brief Method ISteamHTMLSurface_SetPageScaleFactor, addr 0x18055d6e0, size 0xb0, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_SetPageScaleFactor(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle, float_t  flZoom, int32_t  nPointX, int32_t  nPointY) ;

/// @brief Method ISteamHTMLSurface_SetSize, addr 0x18055d790, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_SetSize(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle, uint32_t  unWidth, uint32_t  unHeight) ;

/// @brief Method ISteamHTMLSurface_SetVerticalScroll, addr 0x18055d830, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_SetVerticalScroll(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle, uint32_t  nAbsolutePixelScroll) ;

/// @brief Method ISteamHTMLSurface_Shutdown, addr 0x18055d8d0, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamHTMLSurface_Shutdown(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamHTMLSurface_StopFind, addr 0x18055d950, size 0x90, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_StopFind(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle) ;

/// @brief Method ISteamHTMLSurface_StopLoad, addr 0x18055d9e0, size 0x90, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_StopLoad(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle) ;

/// @brief Method ISteamHTMLSurface_ViewSource, addr 0x18055da70, size 0x90, virtual false, abstract: false, final false
static inline void ISteamHTMLSurface_ViewSource(::System::IntPtr  instancePtr, ::Steamworks::HHTMLBrowser  unBrowserHandle) ;

/// @brief Method ISteamHTTP_CreateCookieContainer, addr 0x18055db00, size 0x90, virtual false, abstract: false, final false
static inline uint32_t ISteamHTTP_CreateCookieContainer(::System::IntPtr  instancePtr, bool  bAllowResponsesToModify) ;

/// @brief Method ISteamHTTP_CreateHTTPRequest, addr 0x18055db90, size 0xe0, virtual false, abstract: false, final false
static inline uint32_t ISteamHTTP_CreateHTTPRequest(::System::IntPtr  instancePtr, ::Steamworks::EHTTPMethod  eHTTPRequestMethod, ::Steamworks::InteropHelp_UTF8StringHandle*  pchAbsoluteURL) ;

/// @brief Method ISteamHTTP_DeferHTTPRequest, addr 0x18055dc70, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamHTTP_DeferHTTPRequest(::System::IntPtr  instancePtr, ::Steamworks::HTTPRequestHandle  hRequest) ;

/// @brief Method ISteamHTTP_GetHTTPDownloadProgressPct, addr 0x18055dd00, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamHTTP_GetHTTPDownloadProgressPct(::System::IntPtr  instancePtr, ::Steamworks::HTTPRequestHandle  hRequest, ::by_ref<float_t>  pflPercentOut) ;

/// @brief Method ISteamHTTP_GetHTTPRequestWasTimedOut, addr 0x18055dda0, size 0xb0, virtual false, abstract: false, final false
static inline bool ISteamHTTP_GetHTTPRequestWasTimedOut(::System::IntPtr  instancePtr, ::Steamworks::HTTPRequestHandle  hRequest, ::by_ref<bool>  pbWasTimedOut) ;

/// @brief Method ISteamHTTP_GetHTTPResponseBodyData, addr 0x18055de50, size 0xb0, virtual false, abstract: false, final false
static inline bool ISteamHTTP_GetHTTPResponseBodyData(::System::IntPtr  instancePtr, ::Steamworks::HTTPRequestHandle  hRequest, ::ArrayW<uint8_t>  pBodyDataBuffer, uint32_t  unBufferSize) ;

/// @brief Method ISteamHTTP_GetHTTPResponseBodySize, addr 0x18055df00, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamHTTP_GetHTTPResponseBodySize(::System::IntPtr  instancePtr, ::Steamworks::HTTPRequestHandle  hRequest, ::by_ref<uint32_t>  unBodySize) ;

/// @brief Method ISteamHTTP_GetHTTPResponseHeaderSize, addr 0x18055dfa0, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamHTTP_GetHTTPResponseHeaderSize(::System::IntPtr  instancePtr, ::Steamworks::HTTPRequestHandle  hRequest, ::Steamworks::InteropHelp_UTF8StringHandle*  pchHeaderName, ::by_ref<uint32_t>  unResponseHeaderSize) ;

/// @brief Method ISteamHTTP_GetHTTPResponseHeaderValue, addr 0x18055e090, size 0x120, virtual false, abstract: false, final false
static inline bool ISteamHTTP_GetHTTPResponseHeaderValue(::System::IntPtr  instancePtr, ::Steamworks::HTTPRequestHandle  hRequest, ::Steamworks::InteropHelp_UTF8StringHandle*  pchHeaderName, ::ArrayW<uint8_t>  pHeaderValueBuffer, uint32_t  unBufferSize) ;

/// @brief Method ISteamHTTP_GetHTTPStreamingResponseBodyData, addr 0x18055e1b0, size 0xc0, virtual false, abstract: false, final false
static inline bool ISteamHTTP_GetHTTPStreamingResponseBodyData(::System::IntPtr  instancePtr, ::Steamworks::HTTPRequestHandle  hRequest, uint32_t  cOffset, ::ArrayW<uint8_t>  pBodyDataBuffer, uint32_t  unBufferSize) ;

/// @brief Method ISteamHTTP_PrioritizeHTTPRequest, addr 0x18055e270, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamHTTP_PrioritizeHTTPRequest(::System::IntPtr  instancePtr, ::Steamworks::HTTPRequestHandle  hRequest) ;

/// @brief Method ISteamHTTP_ReleaseCookieContainer, addr 0x18055e300, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamHTTP_ReleaseCookieContainer(::System::IntPtr  instancePtr, ::Steamworks::HTTPCookieContainerHandle  hCookieContainer) ;

/// @brief Method ISteamHTTP_ReleaseHTTPRequest, addr 0x18055e390, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamHTTP_ReleaseHTTPRequest(::System::IntPtr  instancePtr, ::Steamworks::HTTPRequestHandle  hRequest) ;

/// @brief Method ISteamHTTP_SendHTTPRequest, addr 0x18055e4c0, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamHTTP_SendHTTPRequest(::System::IntPtr  instancePtr, ::Steamworks::HTTPRequestHandle  hRequest, ::by_ref<::Steamworks::SteamAPICall_t>  pCallHandle) ;

/// @brief Method ISteamHTTP_SendHTTPRequestAndStreamResponse, addr 0x18055e420, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamHTTP_SendHTTPRequestAndStreamResponse(::System::IntPtr  instancePtr, ::Steamworks::HTTPRequestHandle  hRequest, ::by_ref<::Steamworks::SteamAPICall_t>  pCallHandle) ;

/// @brief Method ISteamHTTP_SetCookie, addr 0x18055e560, size 0x1c0, virtual false, abstract: false, final false
static inline bool ISteamHTTP_SetCookie(::System::IntPtr  instancePtr, ::Steamworks::HTTPCookieContainerHandle  hCookieContainer, ::Steamworks::InteropHelp_UTF8StringHandle*  pchHost, ::Steamworks::InteropHelp_UTF8StringHandle*  pchUrl, ::Steamworks::InteropHelp_UTF8StringHandle*  pchCookie) ;

/// @brief Method ISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS, addr 0x18055e720, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS(::System::IntPtr  instancePtr, ::Steamworks::HTTPRequestHandle  hRequest, uint32_t  unMilliseconds) ;

/// @brief Method ISteamHTTP_SetHTTPRequestContextValue, addr 0x18055e7c0, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamHTTP_SetHTTPRequestContextValue(::System::IntPtr  instancePtr, ::Steamworks::HTTPRequestHandle  hRequest, uint64_t  ulContextValue) ;

/// @brief Method ISteamHTTP_SetHTTPRequestCookieContainer, addr 0x18055e860, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamHTTP_SetHTTPRequestCookieContainer(::System::IntPtr  instancePtr, ::Steamworks::HTTPRequestHandle  hRequest, ::Steamworks::HTTPCookieContainerHandle  hCookieContainer) ;

/// @brief Method ISteamHTTP_SetHTTPRequestGetOrPostParameter, addr 0x18055e900, size 0x160, virtual false, abstract: false, final false
static inline bool ISteamHTTP_SetHTTPRequestGetOrPostParameter(::System::IntPtr  instancePtr, ::Steamworks::HTTPRequestHandle  hRequest, ::Steamworks::InteropHelp_UTF8StringHandle*  pchParamName, ::Steamworks::InteropHelp_UTF8StringHandle*  pchParamValue) ;

/// @brief Method ISteamHTTP_SetHTTPRequestHeaderValue, addr 0x18055ea60, size 0x160, virtual false, abstract: false, final false
static inline bool ISteamHTTP_SetHTTPRequestHeaderValue(::System::IntPtr  instancePtr, ::Steamworks::HTTPRequestHandle  hRequest, ::Steamworks::InteropHelp_UTF8StringHandle*  pchHeaderName, ::Steamworks::InteropHelp_UTF8StringHandle*  pchHeaderValue) ;

/// @brief Method ISteamHTTP_SetHTTPRequestNetworkActivityTimeout, addr 0x18055ebc0, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamHTTP_SetHTTPRequestNetworkActivityTimeout(::System::IntPtr  instancePtr, ::Steamworks::HTTPRequestHandle  hRequest, uint32_t  unTimeoutSeconds) ;

/// @brief Method ISteamHTTP_SetHTTPRequestRawPostBody, addr 0x18055ec60, size 0x120, virtual false, abstract: false, final false
static inline bool ISteamHTTP_SetHTTPRequestRawPostBody(::System::IntPtr  instancePtr, ::Steamworks::HTTPRequestHandle  hRequest, ::Steamworks::InteropHelp_UTF8StringHandle*  pchContentType, ::ArrayW<uint8_t>  pubBody, uint32_t  unBodyLen) ;

/// @brief Method ISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate, addr 0x18055ed80, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate(::System::IntPtr  instancePtr, ::Steamworks::HTTPRequestHandle  hRequest, bool  bRequireVerifiedCertificate) ;

/// @brief Method ISteamHTTP_SetHTTPRequestUserAgentInfo, addr 0x18055ee20, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamHTTP_SetHTTPRequestUserAgentInfo(::System::IntPtr  instancePtr, ::Steamworks::HTTPRequestHandle  hRequest, ::Steamworks::InteropHelp_UTF8StringHandle*  pchUserAgentInfo) ;

/// @brief Method ISteamInput_ActivateActionSet, addr 0x18055efb0, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamInput_ActivateActionSet(::System::IntPtr  instancePtr, ::Steamworks::InputHandle_t  inputHandle, ::Steamworks::InputActionSetHandle_t  actionSetHandle) ;

/// @brief Method ISteamInput_ActivateActionSetLayer, addr 0x18055ef10, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamInput_ActivateActionSetLayer(::System::IntPtr  instancePtr, ::Steamworks::InputHandle_t  inputHandle, ::Steamworks::InputActionSetHandle_t  actionSetLayerHandle) ;

/// @brief Method ISteamInput_BNewDataAvailable, addr 0x18055f050, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamInput_BNewDataAvailable(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamInput_BWaitForData, addr 0x18055f0d0, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamInput_BWaitForData(::System::IntPtr  instancePtr, bool  bWaitForever, uint32_t  unTimeout) ;

/// @brief Method ISteamInput_DeactivateActionSetLayer, addr 0x18055f170, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamInput_DeactivateActionSetLayer(::System::IntPtr  instancePtr, ::Steamworks::InputHandle_t  inputHandle, ::Steamworks::InputActionSetHandle_t  actionSetLayerHandle) ;

/// @brief Method ISteamInput_DeactivateAllActionSetLayers, addr 0x18055f210, size 0x90, virtual false, abstract: false, final false
static inline void ISteamInput_DeactivateAllActionSetLayers(::System::IntPtr  instancePtr, ::Steamworks::InputHandle_t  inputHandle) ;

/// @brief Method ISteamInput_EnableActionEventCallbacks, addr 0x18055f2a0, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamInput_EnableActionEventCallbacks(::System::IntPtr  instancePtr, ::Steamworks::SteamInputActionEventCallbackPointer*  pCallback) ;

/// @brief Method ISteamInput_EnableDeviceCallbacks, addr 0x18055f340, size 0x80, virtual false, abstract: false, final false
static inline void ISteamInput_EnableDeviceCallbacks(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamInput_GetActionOriginFromXboxOrigin, addr 0x18055f3c0, size 0xa0, virtual false, abstract: false, final false
static inline ::Steamworks::EInputActionOrigin ISteamInput_GetActionOriginFromXboxOrigin(::System::IntPtr  instancePtr, ::Steamworks::InputHandle_t  inputHandle, ::Steamworks::EXboxOrigin  eOrigin) ;

/// @brief Method ISteamInput_GetActionSetHandle, addr 0x18055f460, size 0xe0, virtual false, abstract: false, final false
static inline uint64_t ISteamInput_GetActionSetHandle(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pszActionSetName) ;

/// @brief Method ISteamInput_GetActiveActionSetLayers, addr 0x18055f540, size 0xa0, virtual false, abstract: false, final false
static inline int32_t ISteamInput_GetActiveActionSetLayers(::System::IntPtr  instancePtr, ::Steamworks::InputHandle_t  inputHandle, ::by_ref<::ArrayW<::Steamworks::InputActionSetHandle_t>>  handlesOut) ;

/// @brief Method ISteamInput_GetAnalogActionData, addr 0x18055f5e0, size 0xc0, virtual false, abstract: false, final false
static inline ::Steamworks::InputAnalogActionData_t ISteamInput_GetAnalogActionData(::System::IntPtr  instancePtr, ::Steamworks::InputHandle_t  inputHandle, ::Steamworks::InputAnalogActionHandle_t  analogActionHandle) ;

/// @brief Method ISteamInput_GetAnalogActionHandle, addr 0x18055f6a0, size 0xe0, virtual false, abstract: false, final false
static inline uint64_t ISteamInput_GetAnalogActionHandle(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pszActionName) ;

/// @brief Method ISteamInput_GetAnalogActionOrigins, addr 0x18055f780, size 0xc0, virtual false, abstract: false, final false
static inline int32_t ISteamInput_GetAnalogActionOrigins(::System::IntPtr  instancePtr, ::Steamworks::InputHandle_t  inputHandle, ::Steamworks::InputActionSetHandle_t  actionSetHandle, ::Steamworks::InputAnalogActionHandle_t  analogActionHandle, ::by_ref<::ArrayW<::Steamworks::EInputActionOrigin>>  originsOut) ;

/// @brief Method ISteamInput_GetConnectedControllers, addr 0x18055f840, size 0xa0, virtual false, abstract: false, final false
static inline int32_t ISteamInput_GetConnectedControllers(::System::IntPtr  instancePtr, ::by_ref<::ArrayW<::Steamworks::InputHandle_t>>  handlesOut) ;

/// @brief Method ISteamInput_GetControllerForGamepadIndex, addr 0x18055f8e0, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamInput_GetControllerForGamepadIndex(::System::IntPtr  instancePtr, int32_t  nIndex) ;

/// @brief Method ISteamInput_GetCurrentActionSet, addr 0x18055f970, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamInput_GetCurrentActionSet(::System::IntPtr  instancePtr, ::Steamworks::InputHandle_t  inputHandle) ;

/// @brief Method ISteamInput_GetDeviceBindingRevision, addr 0x18055fa00, size 0xb0, virtual false, abstract: false, final false
static inline bool ISteamInput_GetDeviceBindingRevision(::System::IntPtr  instancePtr, ::Steamworks::InputHandle_t  inputHandle, ::by_ref<int32_t>  pMajor, ::by_ref<int32_t>  pMinor) ;

/// @brief Method ISteamInput_GetDigitalActionData, addr 0x18055fab0, size 0xa0, virtual false, abstract: false, final false
static inline ::Steamworks::InputDigitalActionData_t ISteamInput_GetDigitalActionData(::System::IntPtr  instancePtr, ::Steamworks::InputHandle_t  inputHandle, ::Steamworks::InputDigitalActionHandle_t  digitalActionHandle) ;

/// @brief Method ISteamInput_GetDigitalActionHandle, addr 0x18055fb50, size 0xe0, virtual false, abstract: false, final false
static inline uint64_t ISteamInput_GetDigitalActionHandle(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pszActionName) ;

/// @brief Method ISteamInput_GetDigitalActionOrigins, addr 0x18055fc30, size 0xc0, virtual false, abstract: false, final false
static inline int32_t ISteamInput_GetDigitalActionOrigins(::System::IntPtr  instancePtr, ::Steamworks::InputHandle_t  inputHandle, ::Steamworks::InputActionSetHandle_t  actionSetHandle, ::Steamworks::InputDigitalActionHandle_t  digitalActionHandle, ::by_ref<::ArrayW<::Steamworks::EInputActionOrigin>>  originsOut) ;

/// @brief Method ISteamInput_GetGamepadIndexForController, addr 0x18055fcf0, size 0x90, virtual false, abstract: false, final false
static inline int32_t ISteamInput_GetGamepadIndexForController(::System::IntPtr  instancePtr, ::Steamworks::InputHandle_t  ulinputHandle) ;

/// @brief Method ISteamInput_GetGlyphForActionOrigin_Legacy, addr 0x18055fd80, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamInput_GetGlyphForActionOrigin_Legacy(::System::IntPtr  instancePtr, ::Steamworks::EInputActionOrigin  eOrigin) ;

/// @brief Method ISteamInput_GetGlyphForXboxOrigin, addr 0x18055fe10, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamInput_GetGlyphForXboxOrigin(::System::IntPtr  instancePtr, ::Steamworks::EXboxOrigin  eOrigin) ;

/// @brief Method ISteamInput_GetGlyphPNGForActionOrigin, addr 0x18055fea0, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamInput_GetGlyphPNGForActionOrigin(::System::IntPtr  instancePtr, ::Steamworks::EInputActionOrigin  eOrigin, ::Steamworks::ESteamInputGlyphSize  eSize, uint32_t  unFlags) ;

/// @brief Method ISteamInput_GetGlyphSVGForActionOrigin, addr 0x18055ff40, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamInput_GetGlyphSVGForActionOrigin(::System::IntPtr  instancePtr, ::Steamworks::EInputActionOrigin  eOrigin, uint32_t  unFlags) ;

/// @brief Method ISteamInput_GetInputTypeForHandle, addr 0x18055ffe0, size 0x90, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamInputType ISteamInput_GetInputTypeForHandle(::System::IntPtr  instancePtr, ::Steamworks::InputHandle_t  inputHandle) ;

/// @brief Method ISteamInput_GetMotionData, addr 0x180560070, size 0xc0, virtual false, abstract: false, final false
static inline ::Steamworks::InputMotionData_t ISteamInput_GetMotionData(::System::IntPtr  instancePtr, ::Steamworks::InputHandle_t  inputHandle) ;

/// @brief Method ISteamInput_GetRemotePlaySessionID, addr 0x180560130, size 0x90, virtual false, abstract: false, final false
static inline uint32_t ISteamInput_GetRemotePlaySessionID(::System::IntPtr  instancePtr, ::Steamworks::InputHandle_t  inputHandle) ;

/// @brief Method ISteamInput_GetSessionInputConfigurationSettings, addr 0x1805601c0, size 0x80, virtual false, abstract: false, final false
static inline uint16_t ISteamInput_GetSessionInputConfigurationSettings(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamInput_GetStringForActionOrigin, addr 0x180560240, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamInput_GetStringForActionOrigin(::System::IntPtr  instancePtr, ::Steamworks::EInputActionOrigin  eOrigin) ;

/// @brief Method ISteamInput_GetStringForAnalogActionName, addr 0x1805602d0, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamInput_GetStringForAnalogActionName(::System::IntPtr  instancePtr, ::Steamworks::InputAnalogActionHandle_t  eActionHandle) ;

/// @brief Method ISteamInput_GetStringForDigitalActionName, addr 0x180560360, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamInput_GetStringForDigitalActionName(::System::IntPtr  instancePtr, ::Steamworks::InputDigitalActionHandle_t  eActionHandle) ;

/// @brief Method ISteamInput_GetStringForXboxOrigin, addr 0x1805603f0, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamInput_GetStringForXboxOrigin(::System::IntPtr  instancePtr, ::Steamworks::EXboxOrigin  eOrigin) ;

/// @brief Method ISteamInput_Init, addr 0x180560480, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamInput_Init(::System::IntPtr  instancePtr, bool  bExplicitlyCallRunFrame) ;

/// @brief Method ISteamInput_Legacy_TriggerHapticPulse, addr 0x180560510, size 0xb0, virtual false, abstract: false, final false
static inline void ISteamInput_Legacy_TriggerHapticPulse(::System::IntPtr  instancePtr, ::Steamworks::InputHandle_t  inputHandle, ::Steamworks::ESteamControllerPad  eTargetPad, uint16_t  usDurationMicroSec) ;

/// @brief Method ISteamInput_Legacy_TriggerRepeatedHapticPulse, addr 0x1805605c0, size 0xd0, virtual false, abstract: false, final false
static inline void ISteamInput_Legacy_TriggerRepeatedHapticPulse(::System::IntPtr  instancePtr, ::Steamworks::InputHandle_t  inputHandle, ::Steamworks::ESteamControllerPad  eTargetPad, uint16_t  usDurationMicroSec, uint16_t  usOffMicroSec, uint16_t  unRepeat, uint32_t  nFlags) ;

/// @brief Method ISteamInput_RunFrame, addr 0x180560690, size 0x90, virtual false, abstract: false, final false
static inline void ISteamInput_RunFrame(::System::IntPtr  instancePtr, bool  bReservedValue) ;

/// @brief Method ISteamInput_SetInputActionManifestFilePath, addr 0x180560720, size 0xe0, virtual false, abstract: false, final false
static inline bool ISteamInput_SetInputActionManifestFilePath(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchInputActionManifestAbsolutePath) ;

/// @brief Method ISteamInput_SetLEDColor, addr 0x180560800, size 0xc0, virtual false, abstract: false, final false
static inline void ISteamInput_SetLEDColor(::System::IntPtr  instancePtr, ::Steamworks::InputHandle_t  inputHandle, uint8_t  nColorR, uint8_t  nColorG, uint8_t  nColorB, uint32_t  nFlags) ;

/// @brief Method ISteamInput_ShowBindingPanel, addr 0x1805608c0, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamInput_ShowBindingPanel(::System::IntPtr  instancePtr, ::Steamworks::InputHandle_t  inputHandle) ;

/// @brief Method ISteamInput_Shutdown, addr 0x180560950, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamInput_Shutdown(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamInput_StopAnalogActionMomentum, addr 0x1805609d0, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamInput_StopAnalogActionMomentum(::System::IntPtr  instancePtr, ::Steamworks::InputHandle_t  inputHandle, ::Steamworks::InputAnalogActionHandle_t  eAction) ;

/// @brief Method ISteamInput_TranslateActionOrigin, addr 0x180560a70, size 0xa0, virtual false, abstract: false, final false
static inline ::Steamworks::EInputActionOrigin ISteamInput_TranslateActionOrigin(::System::IntPtr  instancePtr, ::Steamworks::ESteamInputType  eDestinationInputType, ::Steamworks::EInputActionOrigin  eSourceOrigin) ;

/// @brief Method ISteamInput_TriggerSimpleHapticEvent, addr 0x180560b10, size 0xd0, virtual false, abstract: false, final false
static inline void ISteamInput_TriggerSimpleHapticEvent(::System::IntPtr  instancePtr, ::Steamworks::InputHandle_t  inputHandle, ::Steamworks::EControllerHapticLocation  eHapticLocation, uint8_t  nIntensity, char16_t  nGainDB, uint8_t  nOtherIntensity, char16_t  nOtherGainDB) ;

/// @brief Method ISteamInput_TriggerVibration, addr 0x180560cb0, size 0xb0, virtual false, abstract: false, final false
static inline void ISteamInput_TriggerVibration(::System::IntPtr  instancePtr, ::Steamworks::InputHandle_t  inputHandle, uint16_t  usLeftSpeed, uint16_t  usRightSpeed) ;

/// @brief Method ISteamInput_TriggerVibrationExtended, addr 0x180560be0, size 0xd0, virtual false, abstract: false, final false
static inline void ISteamInput_TriggerVibrationExtended(::System::IntPtr  instancePtr, ::Steamworks::InputHandle_t  inputHandle, uint16_t  usLeftSpeed, uint16_t  usRightSpeed, uint16_t  usLeftTriggerSpeed, uint16_t  usRightTriggerSpeed) ;

/// @brief Method ISteamInventory_AddPromoItem, addr 0x180560d60, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamInventory_AddPromoItem(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::Steamworks::SteamItemDef_t  itemDef) ;

/// @brief Method ISteamInventory_AddPromoItems, addr 0x180560e00, size 0xc0, virtual false, abstract: false, final false
static inline bool ISteamInventory_AddPromoItems(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::by_ref<::ArrayW<::Steamworks::SteamItemDef_t>>  pArrayItemDefs, uint32_t  unArrayLength) ;

/// @brief Method ISteamInventory_CheckResultSteamID, addr 0x180560ec0, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamInventory_CheckResultSteamID(::System::IntPtr  instancePtr, ::Steamworks::SteamInventoryResult_t  resultHandle, ::Steamworks::CSteamID  steamIDExpected) ;

/// @brief Method ISteamInventory_ConsumeItem, addr 0x180560f60, size 0xb0, virtual false, abstract: false, final false
static inline bool ISteamInventory_ConsumeItem(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::Steamworks::SteamItemInstanceID_t  itemConsume, uint32_t  unQuantity) ;

/// @brief Method ISteamInventory_DeserializeResult, addr 0x180561010, size 0xc0, virtual false, abstract: false, final false
static inline bool ISteamInventory_DeserializeResult(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamInventoryResult_t>  pOutResultHandle, ::ArrayW<uint8_t>  pBuffer, uint32_t  unBufferSize, bool  bRESERVED_MUST_BE_FALSE) ;

/// @brief Method ISteamInventory_DestroyResult, addr 0x1805610d0, size 0x90, virtual false, abstract: false, final false
static inline void ISteamInventory_DestroyResult(::System::IntPtr  instancePtr, ::Steamworks::SteamInventoryResult_t  resultHandle) ;

/// @brief Method ISteamInventory_ExchangeItems, addr 0x180561160, size 0x110, virtual false, abstract: false, final false
static inline bool ISteamInventory_ExchangeItems(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::by_ref<::ArrayW<::Steamworks::SteamItemDef_t>>  pArrayGenerate, ::by_ref<::ArrayW<uint32_t>>  punArrayGenerateQuantity, uint32_t  unArrayGenerateLength, ::by_ref<::ArrayW<::Steamworks::SteamItemInstanceID_t>>  pArrayDestroy, ::by_ref<::ArrayW<uint32_t>>  punArrayDestroyQuantity, uint32_t  unArrayDestroyLength) ;

/// @brief Method ISteamInventory_GenerateItems, addr 0x180561270, size 0xd0, virtual false, abstract: false, final false
static inline bool ISteamInventory_GenerateItems(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::by_ref<::ArrayW<::Steamworks::SteamItemDef_t>>  pArrayItemDefs, ::by_ref<::ArrayW<uint32_t>>  punArrayQuantity, uint32_t  unArrayLength) ;

/// @brief Method ISteamInventory_GetAllItems, addr 0x180561340, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamInventory_GetAllItems(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle) ;

/// @brief Method ISteamInventory_GetEligiblePromoItemDefinitionIDs, addr 0x1805613d0, size 0xc0, virtual false, abstract: false, final false
static inline bool ISteamInventory_GetEligiblePromoItemDefinitionIDs(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamID, ::by_ref<::ArrayW<::Steamworks::SteamItemDef_t>>  pItemDefIDs, ::by_ref<uint32_t>  punItemDefIDsArraySize) ;

/// @brief Method ISteamInventory_GetItemDefinitionIDs, addr 0x180561490, size 0xb0, virtual false, abstract: false, final false
static inline bool ISteamInventory_GetItemDefinitionIDs(::System::IntPtr  instancePtr, ::by_ref<::ArrayW<::Steamworks::SteamItemDef_t>>  pItemDefIDs, ::by_ref<uint32_t>  punItemDefIDsArraySize) ;

/// @brief Method ISteamInventory_GetItemDefinitionProperty, addr 0x180561540, size 0x110, virtual false, abstract: false, final false
static inline bool ISteamInventory_GetItemDefinitionProperty(::System::IntPtr  instancePtr, ::Steamworks::SteamItemDef_t  iDefinition, ::Steamworks::InteropHelp_UTF8StringHandle*  pchPropertyName, ::System::IntPtr  pchValueBuffer, ::by_ref<uint32_t>  punValueBufferSizeOut) ;

/// @brief Method ISteamInventory_GetItemPrice, addr 0x180561650, size 0xb0, virtual false, abstract: false, final false
static inline bool ISteamInventory_GetItemPrice(::System::IntPtr  instancePtr, ::Steamworks::SteamItemDef_t  iDefinition, ::by_ref<uint64_t>  pCurrentPrice, ::by_ref<uint64_t>  pBasePrice) ;

/// @brief Method ISteamInventory_GetItemsByID, addr 0x180561700, size 0xc0, virtual false, abstract: false, final false
static inline bool ISteamInventory_GetItemsByID(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::by_ref<::ArrayW<::Steamworks::SteamItemInstanceID_t>>  pInstanceIDs, uint32_t  unCountInstanceIDs) ;

/// @brief Method ISteamInventory_GetItemsWithPrices, addr 0x1805617c0, size 0xe0, virtual false, abstract: false, final false
static inline bool ISteamInventory_GetItemsWithPrices(::System::IntPtr  instancePtr, ::by_ref<::ArrayW<::Steamworks::SteamItemDef_t>>  pArrayItemDefs, ::by_ref<::ArrayW<uint64_t>>  pCurrentPrices, ::by_ref<::ArrayW<uint64_t>>  pBasePrices, uint32_t  unArrayLength) ;

/// @brief Method ISteamInventory_GetNumItemsWithPrices, addr 0x1805618a0, size 0x80, virtual false, abstract: false, final false
static inline uint32_t ISteamInventory_GetNumItemsWithPrices(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamInventory_GetResultItemProperty, addr 0x180561920, size 0x120, virtual false, abstract: false, final false
static inline bool ISteamInventory_GetResultItemProperty(::System::IntPtr  instancePtr, ::Steamworks::SteamInventoryResult_t  resultHandle, uint32_t  unItemIndex, ::Steamworks::InteropHelp_UTF8StringHandle*  pchPropertyName, ::System::IntPtr  pchValueBuffer, ::by_ref<uint32_t>  punValueBufferSizeOut) ;

/// @brief Method ISteamInventory_GetResultItems, addr 0x180561a40, size 0xb0, virtual false, abstract: false, final false
static inline bool ISteamInventory_GetResultItems(::System::IntPtr  instancePtr, ::Steamworks::SteamInventoryResult_t  resultHandle, ::by_ref<::ArrayW<::Steamworks::SteamItemDetails_t>>  pOutItemsArray, ::by_ref<uint32_t>  punOutItemsArraySize) ;

/// @brief Method ISteamInventory_GetResultStatus, addr 0x180561af0, size 0x90, virtual false, abstract: false, final false
static inline ::Steamworks::EResult ISteamInventory_GetResultStatus(::System::IntPtr  instancePtr, ::Steamworks::SteamInventoryResult_t  resultHandle) ;

/// @brief Method ISteamInventory_GetResultTimestamp, addr 0x180561b80, size 0x90, virtual false, abstract: false, final false
static inline uint32_t ISteamInventory_GetResultTimestamp(::System::IntPtr  instancePtr, ::Steamworks::SteamInventoryResult_t  resultHandle) ;

/// @brief Method ISteamInventory_GrantPromoItems, addr 0x180561c10, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamInventory_GrantPromoItems(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle) ;

/// @brief Method ISteamInventory_InspectItem, addr 0x180561ca0, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamInventory_InspectItem(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::Steamworks::InteropHelp_UTF8StringHandle*  pchItemToken) ;

/// @brief Method ISteamInventory_LoadItemDefinitions, addr 0x180561d90, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamInventory_LoadItemDefinitions(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamInventory_RemoveProperty, addr 0x180561e10, size 0x100, virtual false, abstract: false, final false
static inline bool ISteamInventory_RemoveProperty(::System::IntPtr  instancePtr, ::Steamworks::SteamInventoryUpdateHandle_t  handle, ::Steamworks::SteamItemInstanceID_t  nItemID, ::Steamworks::InteropHelp_UTF8StringHandle*  pchPropertyName) ;

/// @brief Method ISteamInventory_RequestEligiblePromoItemDefinitionsIDs, addr 0x180561f10, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamInventory_RequestEligiblePromoItemDefinitionsIDs(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamID) ;

/// @brief Method ISteamInventory_RequestPrices, addr 0x180561fa0, size 0x80, virtual false, abstract: false, final false
static inline uint64_t ISteamInventory_RequestPrices(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamInventory_SendItemDropHeartbeat, addr 0x180562020, size 0x80, virtual false, abstract: false, final false
static inline void ISteamInventory_SendItemDropHeartbeat(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamInventory_SerializeResult, addr 0x1805620a0, size 0xb0, virtual false, abstract: false, final false
static inline bool ISteamInventory_SerializeResult(::System::IntPtr  instancePtr, ::Steamworks::SteamInventoryResult_t  resultHandle, ::ArrayW<uint8_t>  pOutBuffer, ::by_ref<uint32_t>  punOutBufferSize) ;

/// @brief Method ISteamInventory_SetPropertyBool, addr 0x180562150, size 0x110, virtual false, abstract: false, final false
static inline bool ISteamInventory_SetPropertyBool(::System::IntPtr  instancePtr, ::Steamworks::SteamInventoryUpdateHandle_t  handle, ::Steamworks::SteamItemInstanceID_t  nItemID, ::Steamworks::InteropHelp_UTF8StringHandle*  pchPropertyName, bool  bValue) ;

/// @brief Method ISteamInventory_SetPropertyFloat, addr 0x180562260, size 0x110, virtual false, abstract: false, final false
static inline bool ISteamInventory_SetPropertyFloat(::System::IntPtr  instancePtr, ::Steamworks::SteamInventoryUpdateHandle_t  handle, ::Steamworks::SteamItemInstanceID_t  nItemID, ::Steamworks::InteropHelp_UTF8StringHandle*  pchPropertyName, float_t  flValue) ;

/// @brief Method ISteamInventory_SetPropertyInt64, addr 0x180562370, size 0x110, virtual false, abstract: false, final false
static inline bool ISteamInventory_SetPropertyInt64(::System::IntPtr  instancePtr, ::Steamworks::SteamInventoryUpdateHandle_t  handle, ::Steamworks::SteamItemInstanceID_t  nItemID, ::Steamworks::InteropHelp_UTF8StringHandle*  pchPropertyName, int64_t  nValue) ;

/// @brief Method ISteamInventory_SetPropertyString, addr 0x180562480, size 0x180, virtual false, abstract: false, final false
static inline bool ISteamInventory_SetPropertyString(::System::IntPtr  instancePtr, ::Steamworks::SteamInventoryUpdateHandle_t  handle, ::Steamworks::SteamItemInstanceID_t  nItemID, ::Steamworks::InteropHelp_UTF8StringHandle*  pchPropertyName, ::Steamworks::InteropHelp_UTF8StringHandle*  pchPropertyValue) ;

/// @brief Method ISteamInventory_StartPurchase, addr 0x180562600, size 0xc0, virtual false, abstract: false, final false
static inline uint64_t ISteamInventory_StartPurchase(::System::IntPtr  instancePtr, ::by_ref<::ArrayW<::Steamworks::SteamItemDef_t>>  pArrayItemDefs, ::by_ref<::ArrayW<uint32_t>>  punArrayQuantity, uint32_t  unArrayLength) ;

/// @brief Method ISteamInventory_StartUpdateProperties, addr 0x1805626c0, size 0x80, virtual false, abstract: false, final false
static inline uint64_t ISteamInventory_StartUpdateProperties(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamInventory_SubmitUpdateProperties, addr 0x180562740, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamInventory_SubmitUpdateProperties(::System::IntPtr  instancePtr, ::Steamworks::SteamInventoryUpdateHandle_t  handle, ::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle) ;

/// @brief Method ISteamInventory_TradeItems, addr 0x1805627e0, size 0x120, virtual false, abstract: false, final false
static inline bool ISteamInventory_TradeItems(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::Steamworks::CSteamID  steamIDTradePartner, ::by_ref<::ArrayW<::Steamworks::SteamItemInstanceID_t>>  pArrayGive, ::by_ref<::ArrayW<uint32_t>>  pArrayGiveQuantity, uint32_t  nArrayGiveLength, ::by_ref<::ArrayW<::Steamworks::SteamItemInstanceID_t>>  pArrayGet, ::by_ref<::ArrayW<uint32_t>>  pArrayGetQuantity, uint32_t  nArrayGetLength) ;

/// @brief Method ISteamInventory_TransferItemQuantity, addr 0x180562900, size 0xc0, virtual false, abstract: false, final false
static inline bool ISteamInventory_TransferItemQuantity(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::Steamworks::SteamItemInstanceID_t  itemIdSource, uint32_t  unQuantity, ::Steamworks::SteamItemInstanceID_t  itemIdDest) ;

/// @brief Method ISteamInventory_TriggerItemDrop, addr 0x1805629c0, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamInventory_TriggerItemDrop(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamInventoryResult_t>  pResultHandle, ::Steamworks::SteamItemDef_t  dropListDefinition) ;

/// @brief Method ISteamMatchmakingServers_CancelQuery, addr 0x180562a60, size 0x90, virtual false, abstract: false, final false
static inline void ISteamMatchmakingServers_CancelQuery(::System::IntPtr  instancePtr, ::Steamworks::HServerListRequest  hRequest) ;

/// @brief Method ISteamMatchmakingServers_CancelServerQuery, addr 0x180562af0, size 0x90, virtual false, abstract: false, final false
static inline void ISteamMatchmakingServers_CancelServerQuery(::System::IntPtr  instancePtr, ::Steamworks::HServerQuery  hServerQuery) ;

/// @brief Method ISteamMatchmakingServers_GetServerCount, addr 0x180562b80, size 0x90, virtual false, abstract: false, final false
static inline int32_t ISteamMatchmakingServers_GetServerCount(::System::IntPtr  instancePtr, ::Steamworks::HServerListRequest  hRequest) ;

/// @brief Method ISteamMatchmakingServers_GetServerDetails, addr 0x180562c10, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamMatchmakingServers_GetServerDetails(::System::IntPtr  instancePtr, ::Steamworks::HServerListRequest  hRequest, int32_t  iServer) ;

/// @brief Method ISteamMatchmakingServers_IsRefreshing, addr 0x180562cb0, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamMatchmakingServers_IsRefreshing(::System::IntPtr  instancePtr, ::Steamworks::HServerListRequest  hRequest) ;

/// @brief Method ISteamMatchmakingServers_PingServer, addr 0x180562d40, size 0xb0, virtual false, abstract: false, final false
static inline int32_t ISteamMatchmakingServers_PingServer(::System::IntPtr  instancePtr, uint32_t  unIP, uint16_t  usPort, ::System::IntPtr  pRequestServersResponse) ;

/// @brief Method ISteamMatchmakingServers_PlayerDetails, addr 0x180562df0, size 0xb0, virtual false, abstract: false, final false
static inline int32_t ISteamMatchmakingServers_PlayerDetails(::System::IntPtr  instancePtr, uint32_t  unIP, uint16_t  usPort, ::System::IntPtr  pRequestServersResponse) ;

/// @brief Method ISteamMatchmakingServers_RefreshQuery, addr 0x180562ea0, size 0x90, virtual false, abstract: false, final false
static inline void ISteamMatchmakingServers_RefreshQuery(::System::IntPtr  instancePtr, ::Steamworks::HServerListRequest  hRequest) ;

/// @brief Method ISteamMatchmakingServers_RefreshServer, addr 0x180562f30, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamMatchmakingServers_RefreshServer(::System::IntPtr  instancePtr, ::Steamworks::HServerListRequest  hRequest, int32_t  iServer) ;

/// @brief Method ISteamMatchmakingServers_ReleaseRequest, addr 0x180562fd0, size 0x90, virtual false, abstract: false, final false
static inline void ISteamMatchmakingServers_ReleaseRequest(::System::IntPtr  instancePtr, ::Steamworks::HServerListRequest  hServerListRequest) ;

/// @brief Method ISteamMatchmakingServers_RequestFavoritesServerList, addr 0x180563060, size 0xb0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamMatchmakingServers_RequestFavoritesServerList(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  iApp, ::System::IntPtr  ppchFilters, uint32_t  nFilters, ::System::IntPtr  pRequestServersResponse) ;

/// @brief Method ISteamMatchmakingServers_RequestFriendsServerList, addr 0x180563110, size 0xb0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamMatchmakingServers_RequestFriendsServerList(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  iApp, ::System::IntPtr  ppchFilters, uint32_t  nFilters, ::System::IntPtr  pRequestServersResponse) ;

/// @brief Method ISteamMatchmakingServers_RequestHistoryServerList, addr 0x1805631c0, size 0xb0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamMatchmakingServers_RequestHistoryServerList(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  iApp, ::System::IntPtr  ppchFilters, uint32_t  nFilters, ::System::IntPtr  pRequestServersResponse) ;

/// @brief Method ISteamMatchmakingServers_RequestInternetServerList, addr 0x180563270, size 0xb0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamMatchmakingServers_RequestInternetServerList(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  iApp, ::System::IntPtr  ppchFilters, uint32_t  nFilters, ::System::IntPtr  pRequestServersResponse) ;

/// @brief Method ISteamMatchmakingServers_RequestLANServerList, addr 0x180563320, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamMatchmakingServers_RequestLANServerList(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  iApp, ::System::IntPtr  pRequestServersResponse) ;

/// @brief Method ISteamMatchmakingServers_RequestSpectatorServerList, addr 0x1805633c0, size 0xb0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamMatchmakingServers_RequestSpectatorServerList(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  iApp, ::System::IntPtr  ppchFilters, uint32_t  nFilters, ::System::IntPtr  pRequestServersResponse) ;

/// @brief Method ISteamMatchmakingServers_ServerRules, addr 0x180563470, size 0xb0, virtual false, abstract: false, final false
static inline int32_t ISteamMatchmakingServers_ServerRules(::System::IntPtr  instancePtr, uint32_t  unIP, uint16_t  usPort, ::System::IntPtr  pRequestServersResponse) ;

/// @brief Method ISteamMatchmaking_AddFavoriteGame, addr 0x180563520, size 0xd0, virtual false, abstract: false, final false
static inline int32_t ISteamMatchmaking_AddFavoriteGame(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  nAppID, uint32_t  nIP, uint16_t  nConnPort, uint16_t  nQueryPort, uint32_t  unFlags, uint32_t  rTime32LastPlayedOnServer) ;

/// @brief Method ISteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter, addr 0x1805635f0, size 0x90, virtual false, abstract: false, final false
static inline void ISteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby) ;

/// @brief Method ISteamMatchmaking_AddRequestLobbyListDistanceFilter, addr 0x180563680, size 0x90, virtual false, abstract: false, final false
static inline void ISteamMatchmaking_AddRequestLobbyListDistanceFilter(::System::IntPtr  instancePtr, ::Steamworks::ELobbyDistanceFilter  eLobbyDistanceFilter) ;

/// @brief Method ISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable, addr 0x180563710, size 0x90, virtual false, abstract: false, final false
static inline void ISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable(::System::IntPtr  instancePtr, int32_t  nSlotsAvailable) ;

/// @brief Method ISteamMatchmaking_AddRequestLobbyListNearValueFilter, addr 0x1805637a0, size 0xe0, virtual false, abstract: false, final false
static inline void ISteamMatchmaking_AddRequestLobbyListNearValueFilter(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchKeyToMatch, int32_t  nValueToBeCloseTo) ;

/// @brief Method ISteamMatchmaking_AddRequestLobbyListNumericalFilter, addr 0x180563880, size 0xf0, virtual false, abstract: false, final false
static inline void ISteamMatchmaking_AddRequestLobbyListNumericalFilter(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchKeyToMatch, int32_t  nValueToMatch, ::Steamworks::ELobbyComparison  eComparisonType) ;

/// @brief Method ISteamMatchmaking_AddRequestLobbyListResultCountFilter, addr 0x180563970, size 0x90, virtual false, abstract: false, final false
static inline void ISteamMatchmaking_AddRequestLobbyListResultCountFilter(::System::IntPtr  instancePtr, int32_t  cMaxResults) ;

/// @brief Method ISteamMatchmaking_AddRequestLobbyListStringFilter, addr 0x180563a00, size 0x150, virtual false, abstract: false, final false
static inline void ISteamMatchmaking_AddRequestLobbyListStringFilter(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchKeyToMatch, ::Steamworks::InteropHelp_UTF8StringHandle*  pchValueToMatch, ::Steamworks::ELobbyComparison  eComparisonType) ;

/// @brief Method ISteamMatchmaking_CreateLobby, addr 0x180563b50, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamMatchmaking_CreateLobby(::System::IntPtr  instancePtr, ::Steamworks::ELobbyType  eLobbyType, int32_t  cMaxMembers) ;

/// @brief Method ISteamMatchmaking_DeleteLobbyData, addr 0x180563bf0, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamMatchmaking_DeleteLobbyData(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby, ::Steamworks::InteropHelp_UTF8StringHandle*  pchKey) ;

/// @brief Method ISteamMatchmaking_GetFavoriteGame, addr 0x180563d60, size 0xe0, virtual false, abstract: false, final false
static inline bool ISteamMatchmaking_GetFavoriteGame(::System::IntPtr  instancePtr, int32_t  iGame, ::by_ref<::Steamworks::AppId_t>  pnAppID, ::by_ref<uint32_t>  pnIP, ::by_ref<uint16_t>  pnConnPort, ::by_ref<uint16_t>  pnQueryPort, ::by_ref<uint32_t>  punFlags, ::by_ref<uint32_t>  pRTime32LastPlayedOnServer) ;

/// @brief Method ISteamMatchmaking_GetFavoriteGameCount, addr 0x180563ce0, size 0x80, virtual false, abstract: false, final false
static inline int32_t ISteamMatchmaking_GetFavoriteGameCount(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamMatchmaking_GetLobbyByIndex, addr 0x180563e40, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamMatchmaking_GetLobbyByIndex(::System::IntPtr  instancePtr, int32_t  iLobby) ;

/// @brief Method ISteamMatchmaking_GetLobbyChatEntry, addr 0x180563ed0, size 0xe0, virtual false, abstract: false, final false
static inline int32_t ISteamMatchmaking_GetLobbyChatEntry(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby, int32_t  iChatID, ::by_ref<::Steamworks::CSteamID>  pSteamIDUser, ::ArrayW<uint8_t>  pvData, int32_t  cubData, ::by_ref<::Steamworks::EChatEntryType>  peChatEntryType) ;

/// @brief Method ISteamMatchmaking_GetLobbyData, addr 0x180564110, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamMatchmaking_GetLobbyData(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby, ::Steamworks::InteropHelp_UTF8StringHandle*  pchKey) ;

/// @brief Method ISteamMatchmaking_GetLobbyDataByIndex, addr 0x180563fb0, size 0xd0, virtual false, abstract: false, final false
static inline bool ISteamMatchmaking_GetLobbyDataByIndex(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby, int32_t  iLobbyData, ::System::IntPtr  pchKey, int32_t  cchKeyBufferSize, ::System::IntPtr  pchValue, int32_t  cchValueBufferSize) ;

/// @brief Method ISteamMatchmaking_GetLobbyDataCount, addr 0x180564080, size 0x90, virtual false, abstract: false, final false
static inline int32_t ISteamMatchmaking_GetLobbyDataCount(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby) ;

/// @brief Method ISteamMatchmaking_GetLobbyGameServer, addr 0x180564200, size 0xc0, virtual false, abstract: false, final false
static inline bool ISteamMatchmaking_GetLobbyGameServer(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby, ::by_ref<uint32_t>  punGameServerIP, ::by_ref<uint16_t>  punGameServerPort, ::by_ref<::Steamworks::CSteamID>  psteamIDGameServer) ;

/// @brief Method ISteamMatchmaking_GetLobbyMemberByIndex, addr 0x1805642c0, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamMatchmaking_GetLobbyMemberByIndex(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby, int32_t  iMember) ;

/// @brief Method ISteamMatchmaking_GetLobbyMemberData, addr 0x180564360, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamMatchmaking_GetLobbyMemberData(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby, ::Steamworks::CSteamID  steamIDUser, ::Steamworks::InteropHelp_UTF8StringHandle*  pchKey) ;

/// @brief Method ISteamMatchmaking_GetLobbyMemberLimit, addr 0x180564450, size 0x90, virtual false, abstract: false, final false
static inline int32_t ISteamMatchmaking_GetLobbyMemberLimit(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby) ;

/// @brief Method ISteamMatchmaking_GetLobbyOwner, addr 0x1805644e0, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamMatchmaking_GetLobbyOwner(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby) ;

/// @brief Method ISteamMatchmaking_GetNumLobbyMembers, addr 0x180564570, size 0x90, virtual false, abstract: false, final false
static inline int32_t ISteamMatchmaking_GetNumLobbyMembers(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby) ;

/// @brief Method ISteamMatchmaking_InviteUserToLobby, addr 0x180564600, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamMatchmaking_InviteUserToLobby(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby, ::Steamworks::CSteamID  steamIDInvitee) ;

/// @brief Method ISteamMatchmaking_JoinLobby, addr 0x1805646a0, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamMatchmaking_JoinLobby(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby) ;

/// @brief Method ISteamMatchmaking_LeaveLobby, addr 0x180564730, size 0x90, virtual false, abstract: false, final false
static inline void ISteamMatchmaking_LeaveLobby(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby) ;

/// @brief Method ISteamMatchmaking_RemoveFavoriteGame, addr 0x1805647c0, size 0xd0, virtual false, abstract: false, final false
static inline bool ISteamMatchmaking_RemoveFavoriteGame(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  nAppID, uint32_t  nIP, uint16_t  nConnPort, uint16_t  nQueryPort, uint32_t  unFlags) ;

/// @brief Method ISteamMatchmaking_RequestLobbyData, addr 0x180564890, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamMatchmaking_RequestLobbyData(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby) ;

/// @brief Method ISteamMatchmaking_RequestLobbyList, addr 0x180564920, size 0x80, virtual false, abstract: false, final false
static inline uint64_t ISteamMatchmaking_RequestLobbyList(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamMatchmaking_SendLobbyChatMsg, addr 0x1805649a0, size 0xc0, virtual false, abstract: false, final false
static inline bool ISteamMatchmaking_SendLobbyChatMsg(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby, ::ArrayW<uint8_t>  pvMsgBody, int32_t  cubMsgBody) ;

/// @brief Method ISteamMatchmaking_SetLinkedLobby, addr 0x180564a60, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamMatchmaking_SetLinkedLobby(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby, ::Steamworks::CSteamID  steamIDLobbyDependent) ;

/// @brief Method ISteamMatchmaking_SetLobbyData, addr 0x180564b00, size 0x160, virtual false, abstract: false, final false
static inline bool ISteamMatchmaking_SetLobbyData(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby, ::Steamworks::InteropHelp_UTF8StringHandle*  pchKey, ::Steamworks::InteropHelp_UTF8StringHandle*  pchValue) ;

/// @brief Method ISteamMatchmaking_SetLobbyGameServer, addr 0x180564c60, size 0xc0, virtual false, abstract: false, final false
static inline void ISteamMatchmaking_SetLobbyGameServer(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby, uint32_t  unGameServerIP, uint16_t  unGameServerPort, ::Steamworks::CSteamID  steamIDGameServer) ;

/// @brief Method ISteamMatchmaking_SetLobbyJoinable, addr 0x180564d20, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamMatchmaking_SetLobbyJoinable(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby, bool  bLobbyJoinable) ;

/// @brief Method ISteamMatchmaking_SetLobbyMemberData, addr 0x180564dc0, size 0x150, virtual false, abstract: false, final false
static inline void ISteamMatchmaking_SetLobbyMemberData(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby, ::Steamworks::InteropHelp_UTF8StringHandle*  pchKey, ::Steamworks::InteropHelp_UTF8StringHandle*  pchValue) ;

/// @brief Method ISteamMatchmaking_SetLobbyMemberLimit, addr 0x180564f10, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamMatchmaking_SetLobbyMemberLimit(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby, int32_t  cMaxMembers) ;

/// @brief Method ISteamMatchmaking_SetLobbyOwner, addr 0x180564fb0, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamMatchmaking_SetLobbyOwner(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby, ::Steamworks::CSteamID  steamIDNewOwner) ;

/// @brief Method ISteamMatchmaking_SetLobbyType, addr 0x180565050, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamMatchmaking_SetLobbyType(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDLobby, ::Steamworks::ELobbyType  eLobbyType) ;

/// @brief Method ISteamMusicRemote_BActivationSuccess, addr 0x1805650f0, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_BActivationSuccess(::System::IntPtr  instancePtr, bool  bValue) ;

/// @brief Method ISteamMusicRemote_BIsCurrentMusicRemote, addr 0x180565180, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_BIsCurrentMusicRemote(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamMusicRemote_CurrentEntryDidChange, addr 0x180565200, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_CurrentEntryDidChange(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamMusicRemote_CurrentEntryIsAvailable, addr 0x180565280, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_CurrentEntryIsAvailable(::System::IntPtr  instancePtr, bool  bAvailable) ;

/// @brief Method ISteamMusicRemote_CurrentEntryWillChange, addr 0x180565310, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_CurrentEntryWillChange(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamMusicRemote_DeregisterSteamMusicRemote, addr 0x180565390, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_DeregisterSteamMusicRemote(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamMusicRemote_EnableLooped, addr 0x180565410, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_EnableLooped(::System::IntPtr  instancePtr, bool  bValue) ;

/// @brief Method ISteamMusicRemote_EnablePlayNext, addr 0x1805654a0, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_EnablePlayNext(::System::IntPtr  instancePtr, bool  bValue) ;

/// @brief Method ISteamMusicRemote_EnablePlayPrevious, addr 0x180565530, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_EnablePlayPrevious(::System::IntPtr  instancePtr, bool  bValue) ;

/// @brief Method ISteamMusicRemote_EnablePlaylists, addr 0x1805655c0, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_EnablePlaylists(::System::IntPtr  instancePtr, bool  bValue) ;

/// @brief Method ISteamMusicRemote_EnableQueue, addr 0x180565650, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_EnableQueue(::System::IntPtr  instancePtr, bool  bValue) ;

/// @brief Method ISteamMusicRemote_EnableShuffled, addr 0x1805656e0, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_EnableShuffled(::System::IntPtr  instancePtr, bool  bValue) ;

/// @brief Method ISteamMusicRemote_PlaylistDidChange, addr 0x180565770, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_PlaylistDidChange(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamMusicRemote_PlaylistWillChange, addr 0x1805657f0, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_PlaylistWillChange(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamMusicRemote_QueueDidChange, addr 0x180565870, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_QueueDidChange(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamMusicRemote_QueueWillChange, addr 0x1805658f0, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_QueueWillChange(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamMusicRemote_RegisterSteamMusicRemote, addr 0x180565970, size 0xe0, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_RegisterSteamMusicRemote(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName) ;

/// @brief Method ISteamMusicRemote_ResetPlaylistEntries, addr 0x180565a50, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_ResetPlaylistEntries(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamMusicRemote_ResetQueueEntries, addr 0x180565ad0, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_ResetQueueEntries(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamMusicRemote_SetCurrentPlaylistEntry, addr 0x180565b50, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_SetCurrentPlaylistEntry(::System::IntPtr  instancePtr, int32_t  nID) ;

/// @brief Method ISteamMusicRemote_SetCurrentQueueEntry, addr 0x180565be0, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_SetCurrentQueueEntry(::System::IntPtr  instancePtr, int32_t  nID) ;

/// @brief Method ISteamMusicRemote_SetDisplayName, addr 0x180565c70, size 0xe0, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_SetDisplayName(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchDisplayName) ;

/// @brief Method ISteamMusicRemote_SetPNGIcon_64x64, addr 0x180565d50, size 0xb0, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_SetPNGIcon_64x64(::System::IntPtr  instancePtr, ::ArrayW<uint8_t>  pvBuffer, uint32_t  cbBufferLength) ;

/// @brief Method ISteamMusicRemote_SetPlaylistEntry, addr 0x180565e00, size 0x100, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_SetPlaylistEntry(::System::IntPtr  instancePtr, int32_t  nID, int32_t  nPosition, ::Steamworks::InteropHelp_UTF8StringHandle*  pchEntryText) ;

/// @brief Method ISteamMusicRemote_SetQueueEntry, addr 0x180565f00, size 0x100, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_SetQueueEntry(::System::IntPtr  instancePtr, int32_t  nID, int32_t  nPosition, ::Steamworks::InteropHelp_UTF8StringHandle*  pchEntryText) ;

/// @brief Method ISteamMusicRemote_UpdateCurrentEntryCoverArt, addr 0x180566000, size 0xb0, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_UpdateCurrentEntryCoverArt(::System::IntPtr  instancePtr, ::ArrayW<uint8_t>  pvBuffer, uint32_t  cbBufferLength) ;

/// @brief Method ISteamMusicRemote_UpdateCurrentEntryElapsedSeconds, addr 0x1805660b0, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_UpdateCurrentEntryElapsedSeconds(::System::IntPtr  instancePtr, int32_t  nValue) ;

/// @brief Method ISteamMusicRemote_UpdateCurrentEntryText, addr 0x180566140, size 0xe0, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_UpdateCurrentEntryText(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchText) ;

/// @brief Method ISteamMusicRemote_UpdateLooped, addr 0x180566220, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_UpdateLooped(::System::IntPtr  instancePtr, bool  bValue) ;

/// @brief Method ISteamMusicRemote_UpdatePlaybackStatus, addr 0x1805662b0, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_UpdatePlaybackStatus(::System::IntPtr  instancePtr, ::Steamworks::AudioPlayback_Status  nStatus) ;

/// @brief Method ISteamMusicRemote_UpdateShuffled, addr 0x180566340, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_UpdateShuffled(::System::IntPtr  instancePtr, bool  bValue) ;

/// @brief Method ISteamMusicRemote_UpdateVolume, addr 0x1805663d0, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamMusicRemote_UpdateVolume(::System::IntPtr  instancePtr, float_t  flValue) ;

/// @brief Method ISteamMusic_BIsEnabled, addr 0x180566460, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamMusic_BIsEnabled(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamMusic_BIsPlaying, addr 0x1805664e0, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamMusic_BIsPlaying(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamMusic_GetPlaybackStatus, addr 0x180566560, size 0x80, virtual false, abstract: false, final false
static inline ::Steamworks::AudioPlayback_Status ISteamMusic_GetPlaybackStatus(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamMusic_GetVolume, addr 0x1805665e0, size 0x80, virtual false, abstract: false, final false
static inline float_t ISteamMusic_GetVolume(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamMusic_Pause, addr 0x180566660, size 0x80, virtual false, abstract: false, final false
static inline void ISteamMusic_Pause(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamMusic_Play, addr 0x1805667e0, size 0x80, virtual false, abstract: false, final false
static inline void ISteamMusic_Play(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamMusic_PlayNext, addr 0x1805666e0, size 0x80, virtual false, abstract: false, final false
static inline void ISteamMusic_PlayNext(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamMusic_PlayPrevious, addr 0x180566760, size 0x80, virtual false, abstract: false, final false
static inline void ISteamMusic_PlayPrevious(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamMusic_SetVolume, addr 0x180566860, size 0x90, virtual false, abstract: false, final false
static inline void ISteamMusic_SetVolume(::System::IntPtr  instancePtr, float_t  flVolume) ;

/// @brief Method ISteamNetworkingMessages_AcceptSessionWithUser, addr 0x1805668f0, size 0x110, virtual false, abstract: false, final false
static inline bool ISteamNetworkingMessages_AcceptSessionWithUser(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamNetworkingIdentity>  identityRemote) ;

/// @brief Method ISteamNetworkingMessages_CloseChannelWithUser, addr 0x180566a00, size 0x120, virtual false, abstract: false, final false
static inline bool ISteamNetworkingMessages_CloseChannelWithUser(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamNetworkingIdentity>  identityRemote, int32_t  nLocalChannel) ;

/// @brief Method ISteamNetworkingMessages_CloseSessionWithUser, addr 0x180566b20, size 0x110, virtual false, abstract: false, final false
static inline bool ISteamNetworkingMessages_CloseSessionWithUser(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamNetworkingIdentity>  identityRemote) ;

/// @brief Method ISteamNetworkingMessages_GetSessionConnectionInfo, addr 0x180566c30, size 0x270, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamNetworkingConnectionState ISteamNetworkingMessages_GetSessionConnectionInfo(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamNetworkingIdentity>  identityRemote, ::by_ref<::Steamworks::SteamNetConnectionInfo_t>  pConnectionInfo, ::by_ref<::Steamworks::SteamNetConnectionRealTimeStatus_t>  pQuickStatus) ;

/// @brief Method ISteamNetworkingMessages_ReceiveMessagesOnChannel, addr 0x180566ea0, size 0xb0, virtual false, abstract: false, final false
static inline int32_t ISteamNetworkingMessages_ReceiveMessagesOnChannel(::System::IntPtr  instancePtr, int32_t  nLocalChannel, ::by_ref<::ArrayW<::System::IntPtr>>  ppOutMessages, int32_t  nMaxMessages) ;

/// @brief Method ISteamNetworkingMessages_SendMessageToUser, addr 0x180566f50, size 0x140, virtual false, abstract: false, final false
static inline ::Steamworks::EResult ISteamNetworkingMessages_SendMessageToUser(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamNetworkingIdentity>  identityRemote, ::System::IntPtr  pubData, uint32_t  cubData, int32_t  nSendFlags, int32_t  nRemoteChannel) ;

/// @brief Method ISteamNetworkingSockets_AcceptConnection, addr 0x180567090, size 0x90, virtual false, abstract: false, final false
static inline ::Steamworks::EResult ISteamNetworkingSockets_AcceptConnection(::System::IntPtr  instancePtr, ::Steamworks::HSteamNetConnection  hConn) ;

/// @brief Method ISteamNetworkingSockets_BeginAsyncRequestFakeIP, addr 0x180567120, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamNetworkingSockets_BeginAsyncRequestFakeIP(::System::IntPtr  instancePtr, int32_t  nNumPorts) ;

/// @brief Method ISteamNetworkingSockets_CloseConnection, addr 0x1805671b0, size 0x110, virtual false, abstract: false, final false
static inline bool ISteamNetworkingSockets_CloseConnection(::System::IntPtr  instancePtr, ::Steamworks::HSteamNetConnection  hPeer, int32_t  nReason, ::Steamworks::InteropHelp_UTF8StringHandle*  pszDebug, bool  bEnableLinger) ;

/// @brief Method ISteamNetworkingSockets_CloseListenSocket, addr 0x1805672c0, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamNetworkingSockets_CloseListenSocket(::System::IntPtr  instancePtr, ::Steamworks::HSteamListenSocket  hSocket) ;

/// @brief Method ISteamNetworkingSockets_ConfigureConnectionLanes, addr 0x180567350, size 0xb0, virtual false, abstract: false, final false
static inline ::Steamworks::EResult ISteamNetworkingSockets_ConfigureConnectionLanes(::System::IntPtr  instancePtr, ::Steamworks::HSteamNetConnection  hConn, int32_t  nNumLanes, ::by_ref<int32_t>  pLanePriorities, ::by_ref<uint16_t>  pLaneWeights) ;

/// @brief Method ISteamNetworkingSockets_ConnectByIPAddress, addr 0x180567400, size 0x110, virtual false, abstract: false, final false
static inline uint32_t ISteamNetworkingSockets_ConnectByIPAddress(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamNetworkingIPAddr>  address, int32_t  nOptions, ::by_ref<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>  pOptions) ;

/// @brief Method ISteamNetworkingSockets_ConnectP2P, addr 0x180567660, size 0x140, virtual false, abstract: false, final false
static inline uint32_t ISteamNetworkingSockets_ConnectP2P(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamNetworkingIdentity>  identityRemote, int32_t  nRemoteVirtualPort, int32_t  nOptions, ::by_ref<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>  pOptions) ;

/// @brief Method ISteamNetworkingSockets_ConnectP2PCustomSignaling, addr 0x180567510, size 0x150, virtual false, abstract: false, final false
static inline uint32_t ISteamNetworkingSockets_ConnectP2PCustomSignaling(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::ISteamNetworkingConnectionSignaling>  pSignaling, ::by_ref<::Steamworks::SteamNetworkingIdentity>  pPeerIdentity, int32_t  nRemoteVirtualPort, int32_t  nOptions, ::by_ref<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>  pOptions) ;

/// @brief Method ISteamNetworkingSockets_ConnectToHostedDedicatedServer, addr 0x1805677a0, size 0x140, virtual false, abstract: false, final false
static inline uint32_t ISteamNetworkingSockets_ConnectToHostedDedicatedServer(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamNetworkingIdentity>  identityTarget, int32_t  nRemoteVirtualPort, int32_t  nOptions, ::by_ref<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>  pOptions) ;

/// @brief Method ISteamNetworkingSockets_CreateFakeUDPPort, addr 0x1805678e0, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamNetworkingSockets_CreateFakeUDPPort(::System::IntPtr  instancePtr, int32_t  idxFakeServerPort) ;

/// @brief Method ISteamNetworkingSockets_CreateHostedDedicatedServerListenSocket, addr 0x180567970, size 0xb0, virtual false, abstract: false, final false
static inline uint32_t ISteamNetworkingSockets_CreateHostedDedicatedServerListenSocket(::System::IntPtr  instancePtr, int32_t  nLocalVirtualPort, int32_t  nOptions, ::by_ref<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>  pOptions) ;

/// @brief Method ISteamNetworkingSockets_CreateListenSocketIP, addr 0x180567a20, size 0x110, virtual false, abstract: false, final false
static inline uint32_t ISteamNetworkingSockets_CreateListenSocketIP(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamNetworkingIPAddr>  localAddress, int32_t  nOptions, ::by_ref<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>  pOptions) ;

/// @brief Method ISteamNetworkingSockets_CreateListenSocketP2P, addr 0x180567be0, size 0xb0, virtual false, abstract: false, final false
static inline uint32_t ISteamNetworkingSockets_CreateListenSocketP2P(::System::IntPtr  instancePtr, int32_t  nLocalVirtualPort, int32_t  nOptions, ::by_ref<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>  pOptions) ;

/// @brief Method ISteamNetworkingSockets_CreateListenSocketP2PFakeIP, addr 0x180567b30, size 0xb0, virtual false, abstract: false, final false
static inline uint32_t ISteamNetworkingSockets_CreateListenSocketP2PFakeIP(::System::IntPtr  instancePtr, int32_t  idxFakePort, int32_t  nOptions, ::by_ref<::ArrayW<::Steamworks::SteamNetworkingConfigValue_t>>  pOptions) ;

/// @brief Method ISteamNetworkingSockets_CreatePollGroup, addr 0x180567c90, size 0x80, virtual false, abstract: false, final false
static inline uint32_t ISteamNetworkingSockets_CreatePollGroup(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamNetworkingSockets_CreateSocketPair, addr 0x180567d10, size 0x1d0, virtual false, abstract: false, final false
static inline bool ISteamNetworkingSockets_CreateSocketPair(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::HSteamNetConnection>  pOutConnection1, ::by_ref<::Steamworks::HSteamNetConnection>  pOutConnection2, bool  bUseNetworkLoopback, ::by_ref<::Steamworks::SteamNetworkingIdentity>  pIdentity1, ::by_ref<::Steamworks::SteamNetworkingIdentity>  pIdentity2) ;

/// @brief Method ISteamNetworkingSockets_DestroyPollGroup, addr 0x180567ee0, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamNetworkingSockets_DestroyPollGroup(::System::IntPtr  instancePtr, ::Steamworks::HSteamNetPollGroup  hPollGroup) ;

/// @brief Method ISteamNetworkingSockets_FindRelayAuthTicketForServer, addr 0x180567f70, size 0x1b0, virtual false, abstract: false, final false
static inline int32_t ISteamNetworkingSockets_FindRelayAuthTicketForServer(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamNetworkingIdentity>  identityGameServer, int32_t  nRemoteVirtualPort, ::by_ref<::Steamworks::SteamDatagramRelayAuthTicket>  pOutParsedTicket) ;

/// @brief Method ISteamNetworkingSockets_FlushMessagesOnConnection, addr 0x180568120, size 0x90, virtual false, abstract: false, final false
static inline ::Steamworks::EResult ISteamNetworkingSockets_FlushMessagesOnConnection(::System::IntPtr  instancePtr, ::Steamworks::HSteamNetConnection  hConn) ;

/// @brief Method ISteamNetworkingSockets_GetAuthenticationStatus, addr 0x1805681b0, size 0x140, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamNetworkingAvailability ISteamNetworkingSockets_GetAuthenticationStatus(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamNetAuthenticationStatus_t>  pDetails) ;

/// @brief Method ISteamNetworkingSockets_GetCertificateRequest, addr 0x1805682f0, size 0x110, virtual false, abstract: false, final false
static inline bool ISteamNetworkingSockets_GetCertificateRequest(::System::IntPtr  instancePtr, ::by_ref<int32_t>  pcbBlob, ::System::IntPtr  pBlob, ::by_ref<::Steamworks::SteamNetworkingErrMsg>  errMsg) ;

/// @brief Method ISteamNetworkingSockets_GetConnectionInfo, addr 0x180568400, size 0x160, virtual false, abstract: false, final false
static inline bool ISteamNetworkingSockets_GetConnectionInfo(::System::IntPtr  instancePtr, ::Steamworks::HSteamNetConnection  hConn, ::by_ref<::Steamworks::SteamNetConnectionInfo_t>  pInfo) ;

/// @brief Method ISteamNetworkingSockets_GetConnectionName, addr 0x180568560, size 0xb0, virtual false, abstract: false, final false
static inline bool ISteamNetworkingSockets_GetConnectionName(::System::IntPtr  instancePtr, ::Steamworks::HSteamNetConnection  hPeer, ::System::IntPtr  pszName, int32_t  nMaxLen) ;

/// @brief Method ISteamNetworkingSockets_GetConnectionRealTimeStatus, addr 0x180568610, size 0x3c0, virtual false, abstract: false, final false
static inline ::Steamworks::EResult ISteamNetworkingSockets_GetConnectionRealTimeStatus(::System::IntPtr  instancePtr, ::Steamworks::HSteamNetConnection  hConn, ::by_ref<::Steamworks::SteamNetConnectionRealTimeStatus_t>  pStatus, int32_t  nLanes, ::by_ref<::Steamworks::SteamNetConnectionRealTimeLaneStatus_t>  pLanes) ;

/// @brief Method ISteamNetworkingSockets_GetConnectionUserData, addr 0x1805689d0, size 0x90, virtual false, abstract: false, final false
static inline int64_t ISteamNetworkingSockets_GetConnectionUserData(::System::IntPtr  instancePtr, ::Steamworks::HSteamNetConnection  hPeer) ;

/// @brief Method ISteamNetworkingSockets_GetDetailedConnectionStatus, addr 0x180568a60, size 0xa0, virtual false, abstract: false, final false
static inline int32_t ISteamNetworkingSockets_GetDetailedConnectionStatus(::System::IntPtr  instancePtr, ::Steamworks::HSteamNetConnection  hConn, ::System::IntPtr  pszBuf, int32_t  cbBuf) ;

/// @brief Method ISteamNetworkingSockets_GetFakeIP, addr 0x180568b00, size 0x1e0, virtual false, abstract: false, final false
static inline void ISteamNetworkingSockets_GetFakeIP(::System::IntPtr  instancePtr, int32_t  idxFirstPort, ::by_ref<::Steamworks::SteamNetworkingFakeIPResult_t>  pInfo) ;

/// @brief Method ISteamNetworkingSockets_GetGameCoordinatorServerLogin, addr 0x180568ce0, size 0xb0, virtual false, abstract: false, final false
static inline ::Steamworks::EResult ISteamNetworkingSockets_GetGameCoordinatorServerLogin(::System::IntPtr  instancePtr, ::System::IntPtr  pLoginInfo, ::by_ref<int32_t>  pcbSignedBlob, ::System::IntPtr  pBlob) ;

/// @brief Method ISteamNetworkingSockets_GetHostedDedicatedServerAddress, addr 0x180568d90, size 0x100, virtual false, abstract: false, final false
static inline ::Steamworks::EResult ISteamNetworkingSockets_GetHostedDedicatedServerAddress(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamDatagramHostedAddress>  pRouting) ;

/// @brief Method ISteamNetworkingSockets_GetHostedDedicatedServerPOPID, addr 0x180568e90, size 0x80, virtual false, abstract: false, final false
static inline uint32_t ISteamNetworkingSockets_GetHostedDedicatedServerPOPID(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamNetworkingSockets_GetHostedDedicatedServerPort, addr 0x180568f10, size 0x80, virtual false, abstract: false, final false
static inline uint16_t ISteamNetworkingSockets_GetHostedDedicatedServerPort(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamNetworkingSockets_GetIdentity, addr 0x180568f90, size 0x100, virtual false, abstract: false, final false
static inline bool ISteamNetworkingSockets_GetIdentity(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamNetworkingIdentity>  pIdentity) ;

/// @brief Method ISteamNetworkingSockets_GetListenSocketAddress, addr 0x180569090, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamNetworkingSockets_GetListenSocketAddress(::System::IntPtr  instancePtr, ::Steamworks::HSteamListenSocket  hSocket, ::by_ref<::Steamworks::SteamNetworkingIPAddr>  address) ;

/// @brief Method ISteamNetworkingSockets_GetRemoteFakeIPForConnection, addr 0x180569180, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::EResult ISteamNetworkingSockets_GetRemoteFakeIPForConnection(::System::IntPtr  instancePtr, ::Steamworks::HSteamNetConnection  hConn, ::by_ref<::Steamworks::SteamNetworkingIPAddr>  pOutAddr) ;

/// @brief Method ISteamNetworkingSockets_InitAuthentication, addr 0x180569270, size 0x80, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamNetworkingAvailability ISteamNetworkingSockets_InitAuthentication(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamNetworkingSockets_ReceiveMessagesOnConnection, addr 0x1805692f0, size 0xb0, virtual false, abstract: false, final false
static inline int32_t ISteamNetworkingSockets_ReceiveMessagesOnConnection(::System::IntPtr  instancePtr, ::Steamworks::HSteamNetConnection  hConn, ::by_ref<::ArrayW<::System::IntPtr>>  ppOutMessages, int32_t  nMaxMessages) ;

/// @brief Method ISteamNetworkingSockets_ReceiveMessagesOnPollGroup, addr 0x1805693a0, size 0xb0, virtual false, abstract: false, final false
static inline int32_t ISteamNetworkingSockets_ReceiveMessagesOnPollGroup(::System::IntPtr  instancePtr, ::Steamworks::HSteamNetPollGroup  hPollGroup, ::by_ref<::ArrayW<::System::IntPtr>>  ppOutMessages, int32_t  nMaxMessages) ;

/// @brief Method ISteamNetworkingSockets_ReceivedP2PCustomSignal, addr 0x180569450, size 0xb0, virtual false, abstract: false, final false
static inline bool ISteamNetworkingSockets_ReceivedP2PCustomSignal(::System::IntPtr  instancePtr, ::System::IntPtr  pMsg, int32_t  cbMsg, ::by_ref<::Steamworks::ISteamNetworkingSignalingRecvContext>  pContext) ;

/// @brief Method ISteamNetworkingSockets_ReceivedRelayAuthTicket, addr 0x180569500, size 0x140, virtual false, abstract: false, final false
static inline bool ISteamNetworkingSockets_ReceivedRelayAuthTicket(::System::IntPtr  instancePtr, ::System::IntPtr  pvTicket, int32_t  cbTicket, ::by_ref<::Steamworks::SteamDatagramRelayAuthTicket>  pOutParsedTicket) ;

/// @brief Method ISteamNetworkingSockets_ResetIdentity, addr 0x180569640, size 0x100, virtual false, abstract: false, final false
static inline void ISteamNetworkingSockets_ResetIdentity(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamNetworkingIdentity>  pIdentity) ;

/// @brief Method ISteamNetworkingSockets_RunCallbacks, addr 0x180569740, size 0x80, virtual false, abstract: false, final false
static inline void ISteamNetworkingSockets_RunCallbacks(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamNetworkingSockets_SendMessageToConnection, addr 0x1805697c0, size 0xc0, virtual false, abstract: false, final false
static inline ::Steamworks::EResult ISteamNetworkingSockets_SendMessageToConnection(::System::IntPtr  instancePtr, ::Steamworks::HSteamNetConnection  hConn, ::System::IntPtr  pData, uint32_t  cbData, int32_t  nSendFlags, ::by_ref<int64_t>  pOutMessageNumber) ;

/// @brief Method ISteamNetworkingSockets_SendMessages, addr 0x180569880, size 0x260, virtual false, abstract: false, final false
static inline void ISteamNetworkingSockets_SendMessages(::System::IntPtr  instancePtr, int32_t  nMessages, ::by_ref<::ArrayW<::Steamworks::SteamNetworkingMessage_t>>  pMessages, ::by_ref<::ArrayW<int64_t>>  pOutMessageNumberOrResult) ;

/// @brief Method ISteamNetworkingSockets_SetCertificate, addr 0x180569ae0, size 0x110, virtual false, abstract: false, final false
static inline bool ISteamNetworkingSockets_SetCertificate(::System::IntPtr  instancePtr, ::System::IntPtr  pCertificate, int32_t  cbCertificate, ::by_ref<::Steamworks::SteamNetworkingErrMsg>  errMsg) ;

/// @brief Method ISteamNetworkingSockets_SetConnectionName, addr 0x180569bf0, size 0xe0, virtual false, abstract: false, final false
static inline void ISteamNetworkingSockets_SetConnectionName(::System::IntPtr  instancePtr, ::Steamworks::HSteamNetConnection  hPeer, ::Steamworks::InteropHelp_UTF8StringHandle*  pszName) ;

/// @brief Method ISteamNetworkingSockets_SetConnectionPollGroup, addr 0x180569cd0, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamNetworkingSockets_SetConnectionPollGroup(::System::IntPtr  instancePtr, ::Steamworks::HSteamNetConnection  hConn, ::Steamworks::HSteamNetPollGroup  hPollGroup) ;

/// @brief Method ISteamNetworkingSockets_SetConnectionUserData, addr 0x180569d70, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamNetworkingSockets_SetConnectionUserData(::System::IntPtr  instancePtr, ::Steamworks::HSteamNetConnection  hPeer, int64_t  nUserData) ;

/// @brief Method ISteamNetworkingUtils_AllocateMessage, addr 0x180569e10, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamNetworkingUtils_AllocateMessage(::System::IntPtr  instancePtr, int32_t  cbAllocateBuffer) ;

/// @brief Method ISteamNetworkingUtils_CheckPingDataUpToDate, addr 0x180569ea0, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamNetworkingUtils_CheckPingDataUpToDate(::System::IntPtr  instancePtr, float_t  flMaxAgeSeconds) ;

/// @brief Method ISteamNetworkingUtils_ConvertPingLocationToString, addr 0x180569f30, size 0x1d0, virtual false, abstract: false, final false
static inline void ISteamNetworkingUtils_ConvertPingLocationToString(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamNetworkPingLocation_t>  location, ::System::IntPtr  pszBuf, int32_t  cchBufSize) ;

/// @brief Method ISteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations, addr 0x18056a100, size 0x2d0, virtual false, abstract: false, final false
static inline int32_t ISteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamNetworkPingLocation_t>  location1, ::by_ref<::Steamworks::SteamNetworkPingLocation_t>  location2) ;

/// @brief Method ISteamNetworkingUtils_EstimatePingTimeFromLocalHost, addr 0x18056a3d0, size 0x1b0, virtual false, abstract: false, final false
static inline int32_t ISteamNetworkingUtils_EstimatePingTimeFromLocalHost(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamNetworkPingLocation_t>  remoteLocation) ;

/// @brief Method ISteamNetworkingUtils_GetConfigValue, addr 0x18056a620, size 0xd0, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamNetworkingGetConfigValueResult ISteamNetworkingUtils_GetConfigValue(::System::IntPtr  instancePtr, ::Steamworks::ESteamNetworkingConfigValue  eValue, ::Steamworks::ESteamNetworkingConfigScope  eScopeType, ::System::IntPtr  scopeObj, ::by_ref<::Steamworks::ESteamNetworkingConfigDataType>  pOutDataType, ::System::IntPtr  pResult, ::by_ref<uint64_t>  cbResult) ;

/// @brief Method ISteamNetworkingUtils_GetConfigValueInfo, addr 0x18056a580, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamNetworkingUtils_GetConfigValueInfo(::System::IntPtr  instancePtr, ::Steamworks::ESteamNetworkingConfigValue  eValue, ::by_ref<::Steamworks::ESteamNetworkingConfigDataType>  pOutDataType, ::by_ref<::Steamworks::ESteamNetworkingConfigScope>  pOutScope) ;

/// @brief Method ISteamNetworkingUtils_GetDirectPingToPOP, addr 0x18056a6f0, size 0x90, virtual false, abstract: false, final false
static inline int32_t ISteamNetworkingUtils_GetDirectPingToPOP(::System::IntPtr  instancePtr, ::Steamworks::SteamNetworkingPOPID  popID) ;

/// @brief Method ISteamNetworkingUtils_GetIPv4FakeIPType, addr 0x18056a780, size 0x90, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamNetworkingFakeIPType ISteamNetworkingUtils_GetIPv4FakeIPType(::System::IntPtr  instancePtr, uint32_t  nIPv4) ;

/// @brief Method ISteamNetworkingUtils_GetLocalPingLocation, addr 0x18056a810, size 0x160, virtual false, abstract: false, final false
static inline float_t ISteamNetworkingUtils_GetLocalPingLocation(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamNetworkPingLocation_t>  result) ;

/// @brief Method ISteamNetworkingUtils_GetLocalTimestamp, addr 0x18056a970, size 0x80, virtual false, abstract: false, final false
static inline int64_t ISteamNetworkingUtils_GetLocalTimestamp(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamNetworkingUtils_GetPOPCount, addr 0x18056a9f0, size 0x80, virtual false, abstract: false, final false
static inline int32_t ISteamNetworkingUtils_GetPOPCount(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamNetworkingUtils_GetPOPList, addr 0x18056aa70, size 0xa0, virtual false, abstract: false, final false
static inline int32_t ISteamNetworkingUtils_GetPOPList(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamNetworkingPOPID>  list, int32_t  nListSz) ;

/// @brief Method ISteamNetworkingUtils_GetPingToDataCenter, addr 0x18056ab10, size 0xa0, virtual false, abstract: false, final false
static inline int32_t ISteamNetworkingUtils_GetPingToDataCenter(::System::IntPtr  instancePtr, ::Steamworks::SteamNetworkingPOPID  popID, ::by_ref<::Steamworks::SteamNetworkingPOPID>  pViaRelayPoP) ;

/// @brief Method ISteamNetworkingUtils_GetRealIdentityForFakeIP, addr 0x18056abb0, size 0x170, virtual false, abstract: false, final false
static inline ::Steamworks::EResult ISteamNetworkingUtils_GetRealIdentityForFakeIP(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamNetworkingIPAddr>  fakeIP, ::by_ref<::Steamworks::SteamNetworkingIdentity>  pOutRealIdentity) ;

/// @brief Method ISteamNetworkingUtils_GetRelayNetworkStatus, addr 0x18056ad20, size 0x170, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamNetworkingAvailability ISteamNetworkingUtils_GetRelayNetworkStatus(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamRelayNetworkStatus_t>  pDetails) ;

/// @brief Method ISteamNetworkingUtils_InitRelayNetworkAccess, addr 0x18056ae90, size 0x80, virtual false, abstract: false, final false
static inline void ISteamNetworkingUtils_InitRelayNetworkAccess(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamNetworkingUtils_IsFakeIPv4, addr 0x18056af10, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamNetworkingUtils_IsFakeIPv4(::System::IntPtr  instancePtr, uint32_t  nIPv4) ;

/// @brief Method ISteamNetworkingUtils_IterateGenericEditableConfigValues, addr 0x18056afa0, size 0xa0, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamNetworkingConfigValue ISteamNetworkingUtils_IterateGenericEditableConfigValues(::System::IntPtr  instancePtr, ::Steamworks::ESteamNetworkingConfigValue  eCurrent, bool  bEnumerateDevVars) ;

/// @brief Method ISteamNetworkingUtils_ParsePingLocationString, addr 0x18056b040, size 0x190, virtual false, abstract: false, final false
static inline bool ISteamNetworkingUtils_ParsePingLocationString(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pszString, ::by_ref<::Steamworks::SteamNetworkPingLocation_t>  result) ;

/// @brief Method ISteamNetworkingUtils_SetConfigValue, addr 0x18056b1d0, size 0xc0, virtual false, abstract: false, final false
static inline bool ISteamNetworkingUtils_SetConfigValue(::System::IntPtr  instancePtr, ::Steamworks::ESteamNetworkingConfigValue  eValue, ::Steamworks::ESteamNetworkingConfigScope  eScopeType, ::System::IntPtr  scopeObj, ::Steamworks::ESteamNetworkingConfigDataType  eDataType, ::System::IntPtr  pArg) ;

/// @brief Method ISteamNetworkingUtils_SetDebugOutputFunction, addr 0x18056b290, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamNetworkingUtils_SetDebugOutputFunction(::System::IntPtr  instancePtr, ::Steamworks::ESteamNetworkingSocketsDebugOutputType  eDetailLevel, ::Steamworks::FSteamNetworkingSocketsDebugOutput*  pfnFunc) ;

/// @brief Method ISteamNetworkingUtils_SteamNetworkingIPAddr_GetFakeIPType, addr 0x18056b330, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamNetworkingFakeIPType ISteamNetworkingUtils_SteamNetworkingIPAddr_GetFakeIPType(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamNetworkingIPAddr>  addr) ;

/// @brief Method ISteamNetworkingUtils_SteamNetworkingIPAddr_ParseString, addr 0x18056b420, size 0x140, virtual false, abstract: false, final false
static inline bool ISteamNetworkingUtils_SteamNetworkingIPAddr_ParseString(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamNetworkingIPAddr>  pAddr, ::Steamworks::InteropHelp_UTF8StringHandle*  pszStr) ;

/// @brief Method ISteamNetworkingUtils_SteamNetworkingIPAddr_ToString, addr 0x18056b560, size 0x110, virtual false, abstract: false, final false
static inline void ISteamNetworkingUtils_SteamNetworkingIPAddr_ToString(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamNetworkingIPAddr>  addr, ::System::IntPtr  buf, uint32_t  cbBuf, bool  bWithPort) ;

/// @brief Method ISteamNetworkingUtils_SteamNetworkingIdentity_ParseString, addr 0x18056b670, size 0x150, virtual false, abstract: false, final false
static inline bool ISteamNetworkingUtils_SteamNetworkingIdentity_ParseString(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamNetworkingIdentity>  pIdentity, ::Steamworks::InteropHelp_UTF8StringHandle*  pszStr) ;

/// @brief Method ISteamNetworkingUtils_SteamNetworkingIdentity_ToString, addr 0x18056b7c0, size 0x120, virtual false, abstract: false, final false
static inline void ISteamNetworkingUtils_SteamNetworkingIdentity_ToString(::System::IntPtr  instancePtr, ::by_ref<::Steamworks::SteamNetworkingIdentity>  identity, ::System::IntPtr  buf, uint32_t  cbBuf) ;

/// @brief Method ISteamNetworking_AcceptP2PSessionWithUser, addr 0x18056b8e0, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamNetworking_AcceptP2PSessionWithUser(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDRemote) ;

/// @brief Method ISteamNetworking_AllowP2PPacketRelay, addr 0x18056b970, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamNetworking_AllowP2PPacketRelay(::System::IntPtr  instancePtr, bool  bAllow) ;

/// @brief Method ISteamNetworking_CloseP2PChannelWithUser, addr 0x18056ba00, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamNetworking_CloseP2PChannelWithUser(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDRemote, int32_t  nChannel) ;

/// @brief Method ISteamNetworking_CloseP2PSessionWithUser, addr 0x18056baa0, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamNetworking_CloseP2PSessionWithUser(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDRemote) ;

/// @brief Method ISteamNetworking_CreateConnectionSocket, addr 0x18056bb30, size 0xc0, virtual false, abstract: false, final false
static inline uint32_t ISteamNetworking_CreateConnectionSocket(::System::IntPtr  instancePtr, ::Steamworks::SteamIPAddress_t  nIP, uint16_t  nPort, int32_t  nTimeoutSec) ;

/// @brief Method ISteamNetworking_CreateListenSocket, addr 0x18056bbf0, size 0xd0, virtual false, abstract: false, final false
static inline uint32_t ISteamNetworking_CreateListenSocket(::System::IntPtr  instancePtr, int32_t  nVirtualP2PPort, ::Steamworks::SteamIPAddress_t  nIP, uint16_t  nPort, bool  bAllowUseOfPacketRelay) ;

/// @brief Method ISteamNetworking_CreateP2PConnectionSocket, addr 0x18056bcc0, size 0xc0, virtual false, abstract: false, final false
static inline uint32_t ISteamNetworking_CreateP2PConnectionSocket(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDTarget, int32_t  nVirtualPort, int32_t  nTimeoutSec, bool  bAllowUseOfPacketRelay) ;

/// @brief Method ISteamNetworking_DestroyListenSocket, addr 0x18056bd80, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamNetworking_DestroyListenSocket(::System::IntPtr  instancePtr, ::Steamworks::SNetListenSocket_t  hSocket, bool  bNotifyRemoteEnd) ;

/// @brief Method ISteamNetworking_DestroySocket, addr 0x18056be20, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamNetworking_DestroySocket(::System::IntPtr  instancePtr, ::Steamworks::SNetSocket_t  hSocket, bool  bNotifyRemoteEnd) ;

/// @brief Method ISteamNetworking_GetListenSocketInfo, addr 0x18056bec0, size 0xb0, virtual false, abstract: false, final false
static inline bool ISteamNetworking_GetListenSocketInfo(::System::IntPtr  instancePtr, ::Steamworks::SNetListenSocket_t  hListenSocket, ::by_ref<::Steamworks::SteamIPAddress_t>  pnIP, ::by_ref<uint16_t>  pnPort) ;

/// @brief Method ISteamNetworking_GetMaxPacketSize, addr 0x18056bf70, size 0x90, virtual false, abstract: false, final false
static inline int32_t ISteamNetworking_GetMaxPacketSize(::System::IntPtr  instancePtr, ::Steamworks::SNetSocket_t  hSocket) ;

/// @brief Method ISteamNetworking_GetP2PSessionState, addr 0x18056c000, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamNetworking_GetP2PSessionState(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDRemote, ::by_ref<::Steamworks::P2PSessionState_t>  pConnectionState) ;

/// @brief Method ISteamNetworking_GetSocketConnectionType, addr 0x18056c0a0, size 0x90, virtual false, abstract: false, final false
static inline ::Steamworks::ESNetSocketConnectionType ISteamNetworking_GetSocketConnectionType(::System::IntPtr  instancePtr, ::Steamworks::SNetSocket_t  hSocket) ;

/// @brief Method ISteamNetworking_GetSocketInfo, addr 0x18056c130, size 0xd0, virtual false, abstract: false, final false
static inline bool ISteamNetworking_GetSocketInfo(::System::IntPtr  instancePtr, ::Steamworks::SNetSocket_t  hSocket, ::by_ref<::Steamworks::CSteamID>  pSteamIDRemote, ::by_ref<int32_t>  peSocketStatus, ::by_ref<::Steamworks::SteamIPAddress_t>  punIPRemote, ::by_ref<uint16_t>  punPortRemote) ;

/// @brief Method ISteamNetworking_IsDataAvailable, addr 0x18056c2a0, size 0xb0, virtual false, abstract: false, final false
static inline bool ISteamNetworking_IsDataAvailable(::System::IntPtr  instancePtr, ::Steamworks::SNetListenSocket_t  hListenSocket, ::by_ref<uint32_t>  pcubMsgSize, ::by_ref<::Steamworks::SNetSocket_t>  phSocket) ;

/// @brief Method ISteamNetworking_IsDataAvailableOnSocket, addr 0x18056c200, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamNetworking_IsDataAvailableOnSocket(::System::IntPtr  instancePtr, ::Steamworks::SNetSocket_t  hSocket, ::by_ref<uint32_t>  pcubMsgSize) ;

/// @brief Method ISteamNetworking_IsP2PPacketAvailable, addr 0x18056c350, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamNetworking_IsP2PPacketAvailable(::System::IntPtr  instancePtr, ::by_ref<uint32_t>  pcubMsgSize, int32_t  nChannel) ;

/// @brief Method ISteamNetworking_ReadP2PPacket, addr 0x18056c3f0, size 0xd0, virtual false, abstract: false, final false
static inline bool ISteamNetworking_ReadP2PPacket(::System::IntPtr  instancePtr, ::ArrayW<uint8_t>  pubDest, uint32_t  cubDest, ::by_ref<uint32_t>  pcubMsgSize, ::by_ref<::Steamworks::CSteamID>  psteamIDRemote, int32_t  nChannel) ;

/// @brief Method ISteamNetworking_RetrieveData, addr 0x18056c580, size 0xd0, virtual false, abstract: false, final false
static inline bool ISteamNetworking_RetrieveData(::System::IntPtr  instancePtr, ::Steamworks::SNetListenSocket_t  hListenSocket, ::ArrayW<uint8_t>  pubDest, uint32_t  cubDest, ::by_ref<uint32_t>  pcubMsgSize, ::by_ref<::Steamworks::SNetSocket_t>  phSocket) ;

/// @brief Method ISteamNetworking_RetrieveDataFromSocket, addr 0x18056c4c0, size 0xc0, virtual false, abstract: false, final false
static inline bool ISteamNetworking_RetrieveDataFromSocket(::System::IntPtr  instancePtr, ::Steamworks::SNetSocket_t  hSocket, ::ArrayW<uint8_t>  pubDest, uint32_t  cubDest, ::by_ref<uint32_t>  pcubMsgSize) ;

/// @brief Method ISteamNetworking_SendDataOnSocket, addr 0x18056c650, size 0xc0, virtual false, abstract: false, final false
static inline bool ISteamNetworking_SendDataOnSocket(::System::IntPtr  instancePtr, ::Steamworks::SNetSocket_t  hSocket, ::ArrayW<uint8_t>  pubData, uint32_t  cubData, bool  bReliable) ;

/// @brief Method ISteamNetworking_SendP2PPacket, addr 0x18056c710, size 0xd0, virtual false, abstract: false, final false
static inline bool ISteamNetworking_SendP2PPacket(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDRemote, ::ArrayW<uint8_t>  pubData, uint32_t  cubData, ::Steamworks::EP2PSend  eP2PSendType, int32_t  nChannel) ;

/// @brief Method ISteamParentalSettings_BIsAppBlocked, addr 0x18056c7e0, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamParentalSettings_BIsAppBlocked(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  nAppID) ;

/// @brief Method ISteamParentalSettings_BIsAppInBlockList, addr 0x18056c870, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamParentalSettings_BIsAppInBlockList(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  nAppID) ;

/// @brief Method ISteamParentalSettings_BIsFeatureBlocked, addr 0x18056c900, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamParentalSettings_BIsFeatureBlocked(::System::IntPtr  instancePtr, ::Steamworks::EParentalFeature  eFeature) ;

/// @brief Method ISteamParentalSettings_BIsFeatureInBlockList, addr 0x18056c990, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamParentalSettings_BIsFeatureInBlockList(::System::IntPtr  instancePtr, ::Steamworks::EParentalFeature  eFeature) ;

/// @brief Method ISteamParentalSettings_BIsParentalLockEnabled, addr 0x18056ca20, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamParentalSettings_BIsParentalLockEnabled(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamParentalSettings_BIsParentalLockLocked, addr 0x18056caa0, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamParentalSettings_BIsParentalLockLocked(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamParties_CancelReservation, addr 0x18056cb20, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamParties_CancelReservation(::System::IntPtr  instancePtr, ::Steamworks::PartyBeaconID_t  ulBeacon, ::Steamworks::CSteamID  steamIDUser) ;

/// @brief Method ISteamParties_ChangeNumOpenSlots, addr 0x18056cbc0, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamParties_ChangeNumOpenSlots(::System::IntPtr  instancePtr, ::Steamworks::PartyBeaconID_t  ulBeacon, uint32_t  unOpenSlots) ;

/// @brief Method ISteamParties_CreateBeacon, addr 0x18056cc60, size 0x180, virtual false, abstract: false, final false
static inline uint64_t ISteamParties_CreateBeacon(::System::IntPtr  instancePtr, uint32_t  unOpenSlots, ::by_ref<::Steamworks::SteamPartyBeaconLocation_t>  pBeaconLocation, ::Steamworks::InteropHelp_UTF8StringHandle*  pchConnectString, ::Steamworks::InteropHelp_UTF8StringHandle*  pchMetadata) ;

/// @brief Method ISteamParties_DestroyBeacon, addr 0x18056cde0, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamParties_DestroyBeacon(::System::IntPtr  instancePtr, ::Steamworks::PartyBeaconID_t  ulBeacon) ;

/// @brief Method ISteamParties_GetAvailableBeaconLocations, addr 0x18056ce70, size 0xb0, virtual false, abstract: false, final false
static inline bool ISteamParties_GetAvailableBeaconLocations(::System::IntPtr  instancePtr, ::by_ref<::ArrayW<::Steamworks::SteamPartyBeaconLocation_t>>  pLocationList, uint32_t  uMaxNumLocations) ;

/// @brief Method ISteamParties_GetBeaconByIndex, addr 0x18056cf20, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamParties_GetBeaconByIndex(::System::IntPtr  instancePtr, uint32_t  unIndex) ;

/// @brief Method ISteamParties_GetBeaconDetails, addr 0x18056cfb0, size 0xd0, virtual false, abstract: false, final false
static inline bool ISteamParties_GetBeaconDetails(::System::IntPtr  instancePtr, ::Steamworks::PartyBeaconID_t  ulBeaconID, ::by_ref<::Steamworks::CSteamID>  pSteamIDBeaconOwner, ::by_ref<::Steamworks::SteamPartyBeaconLocation_t>  pLocation, ::System::IntPtr  pchMetadata, int32_t  cchMetadata) ;

/// @brief Method ISteamParties_GetBeaconLocationData, addr 0x18056d080, size 0xc0, virtual false, abstract: false, final false
static inline bool ISteamParties_GetBeaconLocationData(::System::IntPtr  instancePtr, ::Steamworks::SteamPartyBeaconLocation_t  BeaconLocation, ::Steamworks::ESteamPartyBeaconLocationData  eData, ::System::IntPtr  pchDataStringOut, int32_t  cchDataStringOut) ;

/// @brief Method ISteamParties_GetNumActiveBeacons, addr 0x18056d140, size 0x80, virtual false, abstract: false, final false
static inline uint32_t ISteamParties_GetNumActiveBeacons(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamParties_GetNumAvailableBeaconLocations, addr 0x18056d1c0, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamParties_GetNumAvailableBeaconLocations(::System::IntPtr  instancePtr, ::by_ref<uint32_t>  puNumLocations) ;

/// @brief Method ISteamParties_JoinParty, addr 0x18056d250, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamParties_JoinParty(::System::IntPtr  instancePtr, ::Steamworks::PartyBeaconID_t  ulBeaconID) ;

/// @brief Method ISteamParties_OnReservationCompleted, addr 0x18056d2e0, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamParties_OnReservationCompleted(::System::IntPtr  instancePtr, ::Steamworks::PartyBeaconID_t  ulBeacon, ::Steamworks::CSteamID  steamIDUser) ;

/// @brief Method ISteamRemotePlay_BGetSessionClientResolution, addr 0x18056d380, size 0xb0, virtual false, abstract: false, final false
static inline bool ISteamRemotePlay_BGetSessionClientResolution(::System::IntPtr  instancePtr, ::Steamworks::RemotePlaySessionID_t  unSessionID, ::by_ref<int32_t>  pnResolutionX, ::by_ref<int32_t>  pnResolutionY) ;

/// @brief Method ISteamRemotePlay_BSendRemotePlayTogetherInvite, addr 0x18056d430, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamRemotePlay_BSendRemotePlayTogetherInvite(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDFriend) ;

/// @brief Method ISteamRemotePlay_GetSessionClientFormFactor, addr 0x18056d4c0, size 0x90, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamDeviceFormFactor ISteamRemotePlay_GetSessionClientFormFactor(::System::IntPtr  instancePtr, ::Steamworks::RemotePlaySessionID_t  unSessionID) ;

/// @brief Method ISteamRemotePlay_GetSessionClientName, addr 0x18056d550, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamRemotePlay_GetSessionClientName(::System::IntPtr  instancePtr, ::Steamworks::RemotePlaySessionID_t  unSessionID) ;

/// @brief Method ISteamRemotePlay_GetSessionCount, addr 0x18056d5e0, size 0x80, virtual false, abstract: false, final false
static inline uint32_t ISteamRemotePlay_GetSessionCount(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamRemotePlay_GetSessionID, addr 0x18056d660, size 0x90, virtual false, abstract: false, final false
static inline uint32_t ISteamRemotePlay_GetSessionID(::System::IntPtr  instancePtr, int32_t  iSessionIndex) ;

/// @brief Method ISteamRemotePlay_GetSessionSteamID, addr 0x18056d6f0, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamRemotePlay_GetSessionSteamID(::System::IntPtr  instancePtr, ::Steamworks::RemotePlaySessionID_t  unSessionID) ;

/// @brief Method ISteamRemoteStorage_BeginFileWriteBatch, addr 0x18056d780, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamRemoteStorage_BeginFileWriteBatch(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamRemoteStorage_CommitPublishedFileUpdate, addr 0x18056d800, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamRemoteStorage_CommitPublishedFileUpdate(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileUpdateHandle_t  updateHandle) ;

/// @brief Method ISteamRemoteStorage_CreatePublishedFileUpdateRequest, addr 0x18056d890, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamRemoteStorage_CreatePublishedFileUpdateRequest(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileId_t  unPublishedFileId) ;

/// @brief Method ISteamRemoteStorage_DeletePublishedFile, addr 0x18056d920, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamRemoteStorage_DeletePublishedFile(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileId_t  unPublishedFileId) ;

/// @brief Method ISteamRemoteStorage_EndFileWriteBatch, addr 0x18056d9b0, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamRemoteStorage_EndFileWriteBatch(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamRemoteStorage_EnumeratePublishedFilesByUserAction, addr 0x18056da30, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamRemoteStorage_EnumeratePublishedFilesByUserAction(::System::IntPtr  instancePtr, ::Steamworks::EWorkshopFileAction  eAction, uint32_t  unStartIndex) ;

/// @brief Method ISteamRemoteStorage_EnumeratePublishedWorkshopFiles, addr 0x18056dad0, size 0xd0, virtual false, abstract: false, final false
static inline uint64_t ISteamRemoteStorage_EnumeratePublishedWorkshopFiles(::System::IntPtr  instancePtr, ::Steamworks::EWorkshopEnumerationType  eEnumerationType, uint32_t  unStartIndex, uint32_t  unCount, uint32_t  unDays, ::System::IntPtr  pTags, ::System::IntPtr  pUserTags) ;

/// @brief Method ISteamRemoteStorage_EnumerateUserPublishedFiles, addr 0x18056dba0, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamRemoteStorage_EnumerateUserPublishedFiles(::System::IntPtr  instancePtr, uint32_t  unStartIndex) ;

/// @brief Method ISteamRemoteStorage_EnumerateUserSharedWorkshopFiles, addr 0x18056dc30, size 0xc0, virtual false, abstract: false, final false
static inline uint64_t ISteamRemoteStorage_EnumerateUserSharedWorkshopFiles(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamId, uint32_t  unStartIndex, ::System::IntPtr  pRequiredTags, ::System::IntPtr  pExcludedTags) ;

/// @brief Method ISteamRemoteStorage_EnumerateUserSubscribedFiles, addr 0x18056dcf0, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamRemoteStorage_EnumerateUserSubscribedFiles(::System::IntPtr  instancePtr, uint32_t  unStartIndex) ;

/// @brief Method ISteamRemoteStorage_FileDelete, addr 0x18056dd80, size 0xe0, virtual false, abstract: false, final false
static inline bool ISteamRemoteStorage_FileDelete(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchFile) ;

/// @brief Method ISteamRemoteStorage_FileExists, addr 0x18056de60, size 0xe0, virtual false, abstract: false, final false
static inline bool ISteamRemoteStorage_FileExists(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchFile) ;

/// @brief Method ISteamRemoteStorage_FileForget, addr 0x18056df40, size 0xe0, virtual false, abstract: false, final false
static inline bool ISteamRemoteStorage_FileForget(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchFile) ;

/// @brief Method ISteamRemoteStorage_FilePersisted, addr 0x18056e020, size 0xe0, virtual false, abstract: false, final false
static inline bool ISteamRemoteStorage_FilePersisted(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchFile) ;

/// @brief Method ISteamRemoteStorage_FileRead, addr 0x18056e2b0, size 0x100, virtual false, abstract: false, final false
static inline int32_t ISteamRemoteStorage_FileRead(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchFile, ::ArrayW<uint8_t>  pvData, int32_t  cubDataToRead) ;

/// @brief Method ISteamRemoteStorage_FileReadAsync, addr 0x18056e1c0, size 0xf0, virtual false, abstract: false, final false
static inline uint64_t ISteamRemoteStorage_FileReadAsync(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchFile, uint32_t  nOffset, uint32_t  cubToRead) ;

/// @brief Method ISteamRemoteStorage_FileReadAsyncComplete, addr 0x18056e100, size 0xc0, virtual false, abstract: false, final false
static inline bool ISteamRemoteStorage_FileReadAsyncComplete(::System::IntPtr  instancePtr, ::Steamworks::SteamAPICall_t  hReadCall, ::ArrayW<uint8_t>  pvBuffer, uint32_t  cubToRead) ;

/// @brief Method ISteamRemoteStorage_FileShare, addr 0x18056e3b0, size 0xe0, virtual false, abstract: false, final false
static inline uint64_t ISteamRemoteStorage_FileShare(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchFile) ;

/// @brief Method ISteamRemoteStorage_FileWrite, addr 0x18056e850, size 0x100, virtual false, abstract: false, final false
static inline bool ISteamRemoteStorage_FileWrite(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchFile, ::ArrayW<uint8_t>  pvData, int32_t  cubData) ;

/// @brief Method ISteamRemoteStorage_FileWriteAsync, addr 0x18056e490, size 0x100, virtual false, abstract: false, final false
static inline uint64_t ISteamRemoteStorage_FileWriteAsync(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchFile, ::ArrayW<uint8_t>  pvData, uint32_t  cubData) ;

/// @brief Method ISteamRemoteStorage_FileWriteStreamCancel, addr 0x18056e590, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamRemoteStorage_FileWriteStreamCancel(::System::IntPtr  instancePtr, ::Steamworks::UGCFileWriteStreamHandle_t  writeHandle) ;

/// @brief Method ISteamRemoteStorage_FileWriteStreamClose, addr 0x18056e620, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamRemoteStorage_FileWriteStreamClose(::System::IntPtr  instancePtr, ::Steamworks::UGCFileWriteStreamHandle_t  writeHandle) ;

/// @brief Method ISteamRemoteStorage_FileWriteStreamOpen, addr 0x18056e6b0, size 0xe0, virtual false, abstract: false, final false
static inline uint64_t ISteamRemoteStorage_FileWriteStreamOpen(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchFile) ;

/// @brief Method ISteamRemoteStorage_FileWriteStreamWriteChunk, addr 0x18056e790, size 0xc0, virtual false, abstract: false, final false
static inline bool ISteamRemoteStorage_FileWriteStreamWriteChunk(::System::IntPtr  instancePtr, ::Steamworks::UGCFileWriteStreamHandle_t  writeHandle, ::ArrayW<uint8_t>  pvData, int32_t  cubData) ;

/// @brief Method ISteamRemoteStorage_GetCachedUGCCount, addr 0x18056e950, size 0x80, virtual false, abstract: false, final false
static inline int32_t ISteamRemoteStorage_GetCachedUGCCount(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamRemoteStorage_GetCachedUGCHandle, addr 0x18056e9d0, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamRemoteStorage_GetCachedUGCHandle(::System::IntPtr  instancePtr, int32_t  iCachedContent) ;

/// @brief Method ISteamRemoteStorage_GetFileCount, addr 0x18056ea60, size 0x80, virtual false, abstract: false, final false
static inline int32_t ISteamRemoteStorage_GetFileCount(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamRemoteStorage_GetFileNameAndSize, addr 0x18056eae0, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamRemoteStorage_GetFileNameAndSize(::System::IntPtr  instancePtr, int32_t  iFile, ::by_ref<int32_t>  pnFileSizeInBytes) ;

/// @brief Method ISteamRemoteStorage_GetFileSize, addr 0x18056eb80, size 0xe0, virtual false, abstract: false, final false
static inline int32_t ISteamRemoteStorage_GetFileSize(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchFile) ;

/// @brief Method ISteamRemoteStorage_GetFileTimestamp, addr 0x18056ec60, size 0xe0, virtual false, abstract: false, final false
static inline int64_t ISteamRemoteStorage_GetFileTimestamp(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchFile) ;

/// @brief Method ISteamRemoteStorage_GetLocalFileChange, addr 0x18056edc0, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamRemoteStorage_GetLocalFileChange(::System::IntPtr  instancePtr, int32_t  iFile, ::by_ref<::Steamworks::ERemoteStorageLocalFileChange>  pEChangeType, ::by_ref<::Steamworks::ERemoteStorageFilePathType>  pEFilePathType) ;

/// @brief Method ISteamRemoteStorage_GetLocalFileChangeCount, addr 0x18056ed40, size 0x80, virtual false, abstract: false, final false
static inline int32_t ISteamRemoteStorage_GetLocalFileChangeCount(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamRemoteStorage_GetPublishedFileDetails, addr 0x18056ee60, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamRemoteStorage_GetPublishedFileDetails(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileId_t  unPublishedFileId, uint32_t  unMaxSecondsOld) ;

/// @brief Method ISteamRemoteStorage_GetPublishedItemVoteDetails, addr 0x18056ef00, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamRemoteStorage_GetPublishedItemVoteDetails(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileId_t  unPublishedFileId) ;

/// @brief Method ISteamRemoteStorage_GetQuota, addr 0x18056ef90, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamRemoteStorage_GetQuota(::System::IntPtr  instancePtr, ::by_ref<uint64_t>  pnTotalBytes, ::by_ref<uint64_t>  puAvailableBytes) ;

/// @brief Method ISteamRemoteStorage_GetSyncPlatforms, addr 0x18056f030, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::ERemoteStoragePlatform ISteamRemoteStorage_GetSyncPlatforms(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchFile) ;

/// @brief Method ISteamRemoteStorage_GetUGCDetails, addr 0x18056f110, size 0xd0, virtual false, abstract: false, final false
static inline bool ISteamRemoteStorage_GetUGCDetails(::System::IntPtr  instancePtr, ::Steamworks::UGCHandle_t  hContent, ::by_ref<::Steamworks::AppId_t>  pnAppID, ::by_ref<::System::IntPtr>  ppchName, ::by_ref<int32_t>  pnFileSizeInBytes, ::by_ref<::Steamworks::CSteamID>  pSteamIDOwner) ;

/// @brief Method ISteamRemoteStorage_GetUGCDownloadProgress, addr 0x18056f1e0, size 0xb0, virtual false, abstract: false, final false
static inline bool ISteamRemoteStorage_GetUGCDownloadProgress(::System::IntPtr  instancePtr, ::Steamworks::UGCHandle_t  hContent, ::by_ref<int32_t>  pnBytesDownloaded, ::by_ref<int32_t>  pnBytesExpected) ;

/// @brief Method ISteamRemoteStorage_GetUserPublishedItemVoteDetails, addr 0x18056f290, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamRemoteStorage_GetUserPublishedItemVoteDetails(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileId_t  unPublishedFileId) ;

/// @brief Method ISteamRemoteStorage_IsCloudEnabledForAccount, addr 0x18056f320, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamRemoteStorage_IsCloudEnabledForAccount(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamRemoteStorage_IsCloudEnabledForApp, addr 0x18056f3a0, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamRemoteStorage_IsCloudEnabledForApp(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamRemoteStorage_PublishVideo, addr 0x18056f420, size 0x2a0, virtual false, abstract: false, final false
static inline uint64_t ISteamRemoteStorage_PublishVideo(::System::IntPtr  instancePtr, ::Steamworks::EWorkshopVideoProvider  eVideoProvider, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVideoAccount, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVideoIdentifier, ::Steamworks::InteropHelp_UTF8StringHandle*  pchPreviewFile, ::Steamworks::AppId_t  nConsumerAppId, ::Steamworks::InteropHelp_UTF8StringHandle*  pchTitle, ::Steamworks::InteropHelp_UTF8StringHandle*  pchDescription, ::Steamworks::ERemoteStoragePublishedFileVisibility  eVisibility, ::System::IntPtr  pTags) ;

/// @brief Method ISteamRemoteStorage_PublishWorkshopFile, addr 0x18056f6c0, size 0x270, virtual false, abstract: false, final false
static inline uint64_t ISteamRemoteStorage_PublishWorkshopFile(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchFile, ::Steamworks::InteropHelp_UTF8StringHandle*  pchPreviewFile, ::Steamworks::AppId_t  nConsumerAppId, ::Steamworks::InteropHelp_UTF8StringHandle*  pchTitle, ::Steamworks::InteropHelp_UTF8StringHandle*  pchDescription, ::Steamworks::ERemoteStoragePublishedFileVisibility  eVisibility, ::System::IntPtr  pTags, ::Steamworks::EWorkshopFileType  eWorkshopFileType) ;

/// @brief Method ISteamRemoteStorage_SetCloudEnabledForApp, addr 0x18056f930, size 0x90, virtual false, abstract: false, final false
static inline void ISteamRemoteStorage_SetCloudEnabledForApp(::System::IntPtr  instancePtr, bool  bEnabled) ;

/// @brief Method ISteamRemoteStorage_SetSyncPlatforms, addr 0x18056f9c0, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamRemoteStorage_SetSyncPlatforms(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchFile, ::Steamworks::ERemoteStoragePlatform  eRemoteStoragePlatform) ;

/// @brief Method ISteamRemoteStorage_SetUserPublishedFileAction, addr 0x18056fab0, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamRemoteStorage_SetUserPublishedFileAction(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileId_t  unPublishedFileId, ::Steamworks::EWorkshopFileAction  eAction) ;

/// @brief Method ISteamRemoteStorage_SubscribePublishedFile, addr 0x18056fb50, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamRemoteStorage_SubscribePublishedFile(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileId_t  unPublishedFileId) ;

/// @brief Method ISteamRemoteStorage_UGCDownload, addr 0x18056fcd0, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamRemoteStorage_UGCDownload(::System::IntPtr  instancePtr, ::Steamworks::UGCHandle_t  hContent, uint32_t  unPriority) ;

/// @brief Method ISteamRemoteStorage_UGCDownloadToLocation, addr 0x18056fbe0, size 0xf0, virtual false, abstract: false, final false
static inline uint64_t ISteamRemoteStorage_UGCDownloadToLocation(::System::IntPtr  instancePtr, ::Steamworks::UGCHandle_t  hContent, ::Steamworks::InteropHelp_UTF8StringHandle*  pchLocation, uint32_t  unPriority) ;

/// @brief Method ISteamRemoteStorage_UGCRead, addr 0x18056fd70, size 0xd0, virtual false, abstract: false, final false
static inline int32_t ISteamRemoteStorage_UGCRead(::System::IntPtr  instancePtr, ::Steamworks::UGCHandle_t  hContent, ::ArrayW<uint8_t>  pvData, int32_t  cubDataToRead, uint32_t  cOffset, ::Steamworks::EUGCReadAction  eAction) ;

/// @brief Method ISteamRemoteStorage_UnsubscribePublishedFile, addr 0x18056fe40, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamRemoteStorage_UnsubscribePublishedFile(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileId_t  unPublishedFileId) ;

/// @brief Method ISteamRemoteStorage_UpdatePublishedFileDescription, addr 0x18056fed0, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamRemoteStorage_UpdatePublishedFileDescription(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileUpdateHandle_t  updateHandle, ::Steamworks::InteropHelp_UTF8StringHandle*  pchDescription) ;

/// @brief Method ISteamRemoteStorage_UpdatePublishedFileFile, addr 0x18056ffc0, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamRemoteStorage_UpdatePublishedFileFile(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileUpdateHandle_t  updateHandle, ::Steamworks::InteropHelp_UTF8StringHandle*  pchFile) ;

/// @brief Method ISteamRemoteStorage_UpdatePublishedFilePreviewFile, addr 0x1805700b0, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamRemoteStorage_UpdatePublishedFilePreviewFile(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileUpdateHandle_t  updateHandle, ::Steamworks::InteropHelp_UTF8StringHandle*  pchPreviewFile) ;

/// @brief Method ISteamRemoteStorage_UpdatePublishedFileSetChangeDescription, addr 0x1805701a0, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamRemoteStorage_UpdatePublishedFileSetChangeDescription(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileUpdateHandle_t  updateHandle, ::Steamworks::InteropHelp_UTF8StringHandle*  pchChangeDescription) ;

/// @brief Method ISteamRemoteStorage_UpdatePublishedFileTags, addr 0x180570290, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamRemoteStorage_UpdatePublishedFileTags(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileUpdateHandle_t  updateHandle, ::System::IntPtr  pTags) ;

/// @brief Method ISteamRemoteStorage_UpdatePublishedFileTitle, addr 0x180570330, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamRemoteStorage_UpdatePublishedFileTitle(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileUpdateHandle_t  updateHandle, ::Steamworks::InteropHelp_UTF8StringHandle*  pchTitle) ;

/// @brief Method ISteamRemoteStorage_UpdatePublishedFileVisibility, addr 0x180570420, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamRemoteStorage_UpdatePublishedFileVisibility(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileUpdateHandle_t  updateHandle, ::Steamworks::ERemoteStoragePublishedFileVisibility  eVisibility) ;

/// @brief Method ISteamRemoteStorage_UpdateUserPublishedItemVote, addr 0x1805704c0, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamRemoteStorage_UpdateUserPublishedItemVote(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileId_t  unPublishedFileId, bool  bVoteUp) ;

/// @brief Method ISteamScreenshots_AddScreenshotToLibrary, addr 0x180570560, size 0x160, virtual false, abstract: false, final false
static inline uint32_t ISteamScreenshots_AddScreenshotToLibrary(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchFilename, ::Steamworks::InteropHelp_UTF8StringHandle*  pchThumbnailFilename, int32_t  nWidth, int32_t  nHeight) ;

/// @brief Method ISteamScreenshots_AddVRScreenshotToLibrary, addr 0x1805706c0, size 0x150, virtual false, abstract: false, final false
static inline uint32_t ISteamScreenshots_AddVRScreenshotToLibrary(::System::IntPtr  instancePtr, ::Steamworks::EVRScreenshotType  eType, ::Steamworks::InteropHelp_UTF8StringHandle*  pchFilename, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVRFilename) ;

/// @brief Method ISteamScreenshots_HookScreenshots, addr 0x180570810, size 0x90, virtual false, abstract: false, final false
static inline void ISteamScreenshots_HookScreenshots(::System::IntPtr  instancePtr, bool  bHook) ;

/// @brief Method ISteamScreenshots_IsScreenshotsHooked, addr 0x1805708a0, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamScreenshots_IsScreenshotsHooked(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamScreenshots_SetLocation, addr 0x180570920, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamScreenshots_SetLocation(::System::IntPtr  instancePtr, ::Steamworks::ScreenshotHandle  hScreenshot, ::Steamworks::InteropHelp_UTF8StringHandle*  pchLocation) ;

/// @brief Method ISteamScreenshots_TagPublishedFile, addr 0x180570a10, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamScreenshots_TagPublishedFile(::System::IntPtr  instancePtr, ::Steamworks::ScreenshotHandle  hScreenshot, ::Steamworks::PublishedFileId_t  unPublishedFileID) ;

/// @brief Method ISteamScreenshots_TagUser, addr 0x180570ab0, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamScreenshots_TagUser(::System::IntPtr  instancePtr, ::Steamworks::ScreenshotHandle  hScreenshot, ::Steamworks::CSteamID  steamID) ;

/// @brief Method ISteamScreenshots_TriggerScreenshot, addr 0x180570b50, size 0x80, virtual false, abstract: false, final false
static inline void ISteamScreenshots_TriggerScreenshot(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamScreenshots_WriteScreenshot, addr 0x180570bd0, size 0xc0, virtual false, abstract: false, final false
static inline uint32_t ISteamScreenshots_WriteScreenshot(::System::IntPtr  instancePtr, ::ArrayW<uint8_t>  pubRGB, uint32_t  cubRGB, int32_t  nWidth, int32_t  nHeight) ;

/// @brief Method ISteamUGC_AddAppDependency, addr 0x180570c90, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamUGC_AddAppDependency(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileId_t  nPublishedFileID, ::Steamworks::AppId_t  nAppID) ;

/// @brief Method ISteamUGC_AddDependency, addr 0x180570d30, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamUGC_AddDependency(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileId_t  nParentPublishedFileID, ::Steamworks::PublishedFileId_t  nChildPublishedFileID) ;

/// @brief Method ISteamUGC_AddExcludedTag, addr 0x180570dd0, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamUGC_AddExcludedTag(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, ::Steamworks::InteropHelp_UTF8StringHandle*  pTagName) ;

/// @brief Method ISteamUGC_AddItemKeyValueTag, addr 0x180570ec0, size 0x160, virtual false, abstract: false, final false
static inline bool ISteamUGC_AddItemKeyValueTag(::System::IntPtr  instancePtr, ::Steamworks::UGCUpdateHandle_t  handle, ::Steamworks::InteropHelp_UTF8StringHandle*  pchKey, ::Steamworks::InteropHelp_UTF8StringHandle*  pchValue) ;

/// @brief Method ISteamUGC_AddItemPreviewFile, addr 0x180571020, size 0x100, virtual false, abstract: false, final false
static inline bool ISteamUGC_AddItemPreviewFile(::System::IntPtr  instancePtr, ::Steamworks::UGCUpdateHandle_t  handle, ::Steamworks::InteropHelp_UTF8StringHandle*  pszPreviewFile, ::Steamworks::EItemPreviewType  type) ;

/// @brief Method ISteamUGC_AddItemPreviewVideo, addr 0x180571120, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamUGC_AddItemPreviewVideo(::System::IntPtr  instancePtr, ::Steamworks::UGCUpdateHandle_t  handle, ::Steamworks::InteropHelp_UTF8StringHandle*  pszVideoID) ;

/// @brief Method ISteamUGC_AddItemToFavorites, addr 0x180571210, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamUGC_AddItemToFavorites(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  nAppId, ::Steamworks::PublishedFileId_t  nPublishedFileID) ;

/// @brief Method ISteamUGC_AddRequiredKeyValueTag, addr 0x1805712b0, size 0x160, virtual false, abstract: false, final false
static inline bool ISteamUGC_AddRequiredKeyValueTag(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, ::Steamworks::InteropHelp_UTF8StringHandle*  pKey, ::Steamworks::InteropHelp_UTF8StringHandle*  pValue) ;

/// @brief Method ISteamUGC_AddRequiredTag, addr 0x1805714b0, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamUGC_AddRequiredTag(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, ::Steamworks::InteropHelp_UTF8StringHandle*  pTagName) ;

/// @brief Method ISteamUGC_AddRequiredTagGroup, addr 0x180571410, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamUGC_AddRequiredTagGroup(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, ::System::IntPtr  pTagGroups) ;

/// @brief Method ISteamUGC_BInitWorkshopForGameServer, addr 0x1805715a0, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamUGC_BInitWorkshopForGameServer(::System::IntPtr  instancePtr, ::Steamworks::DepotId_t  unWorkshopDepotID, ::Steamworks::InteropHelp_UTF8StringHandle*  pszFolder) ;

/// @brief Method ISteamUGC_CreateItem, addr 0x180571690, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamUGC_CreateItem(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  nConsumerAppId, ::Steamworks::EWorkshopFileType  eFileType) ;

/// @brief Method ISteamUGC_CreateQueryAllUGCRequestCursor, addr 0x180571730, size 0x120, virtual false, abstract: false, final false
static inline uint64_t ISteamUGC_CreateQueryAllUGCRequestCursor(::System::IntPtr  instancePtr, ::Steamworks::EUGCQuery  eQueryType, ::Steamworks::EUGCMatchingUGCType  eMatchingeMatchingUGCTypeFileType, ::Steamworks::AppId_t  nCreatorAppID, ::Steamworks::AppId_t  nConsumerAppID, ::Steamworks::InteropHelp_UTF8StringHandle*  pchCursor) ;

/// @brief Method ISteamUGC_CreateQueryAllUGCRequestPage, addr 0x180571850, size 0xc0, virtual false, abstract: false, final false
static inline uint64_t ISteamUGC_CreateQueryAllUGCRequestPage(::System::IntPtr  instancePtr, ::Steamworks::EUGCQuery  eQueryType, ::Steamworks::EUGCMatchingUGCType  eMatchingeMatchingUGCTypeFileType, ::Steamworks::AppId_t  nCreatorAppID, ::Steamworks::AppId_t  nConsumerAppID, uint32_t  unPage) ;

/// @brief Method ISteamUGC_CreateQueryUGCDetailsRequest, addr 0x180571910, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamUGC_CreateQueryUGCDetailsRequest(::System::IntPtr  instancePtr, ::by_ref<::ArrayW<::Steamworks::PublishedFileId_t>>  pvecPublishedFileID, uint32_t  unNumPublishedFileIDs) ;

/// @brief Method ISteamUGC_CreateQueryUserUGCRequest, addr 0x1805719b0, size 0xd0, virtual false, abstract: false, final false
static inline uint64_t ISteamUGC_CreateQueryUserUGCRequest(::System::IntPtr  instancePtr, ::Steamworks::AccountID_t  unAccountID, ::Steamworks::EUserUGCList  eListType, ::Steamworks::EUGCMatchingUGCType  eMatchingUGCType, ::Steamworks::EUserUGCListSortOrder  eSortOrder, ::Steamworks::AppId_t  nCreatorAppID, ::Steamworks::AppId_t  nConsumerAppID, uint32_t  unPage) ;

/// @brief Method ISteamUGC_DeleteItem, addr 0x180571a80, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamUGC_DeleteItem(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileId_t  nPublishedFileID) ;

/// @brief Method ISteamUGC_DownloadItem, addr 0x180571b10, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamUGC_DownloadItem(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileId_t  nPublishedFileID, bool  bHighPriority) ;

/// @brief Method ISteamUGC_GetAppDependencies, addr 0x180571bb0, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamUGC_GetAppDependencies(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileId_t  nPublishedFileID) ;

/// @brief Method ISteamUGC_GetItemDownloadInfo, addr 0x180571c40, size 0xb0, virtual false, abstract: false, final false
static inline bool ISteamUGC_GetItemDownloadInfo(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileId_t  nPublishedFileID, ::by_ref<uint64_t>  punBytesDownloaded, ::by_ref<uint64_t>  punBytesTotal) ;

/// @brief Method ISteamUGC_GetItemInstallInfo, addr 0x180571cf0, size 0xd0, virtual false, abstract: false, final false
static inline bool ISteamUGC_GetItemInstallInfo(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileId_t  nPublishedFileID, ::by_ref<uint64_t>  punSizeOnDisk, ::System::IntPtr  pchFolder, uint32_t  cchFolderSize, ::by_ref<uint32_t>  punTimeStamp) ;

/// @brief Method ISteamUGC_GetItemState, addr 0x180571dc0, size 0x90, virtual false, abstract: false, final false
static inline uint32_t ISteamUGC_GetItemState(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileId_t  nPublishedFileID) ;

/// @brief Method ISteamUGC_GetItemUpdateProgress, addr 0x180571e50, size 0xb0, virtual false, abstract: false, final false
static inline ::Steamworks::EItemUpdateStatus ISteamUGC_GetItemUpdateProgress(::System::IntPtr  instancePtr, ::Steamworks::UGCUpdateHandle_t  handle, ::by_ref<uint64_t>  punBytesProcessed, ::by_ref<uint64_t>  punBytesTotal) ;

/// @brief Method ISteamUGC_GetNumSubscribedItems, addr 0x180571f00, size 0x80, virtual false, abstract: false, final false
static inline uint32_t ISteamUGC_GetNumSubscribedItems(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUGC_GetQueryFirstUGCKeyValueTag, addr 0x180571f80, size 0x120, virtual false, abstract: false, final false
static inline bool ISteamUGC_GetQueryFirstUGCKeyValueTag(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::Steamworks::InteropHelp_UTF8StringHandle*  pchKey, ::System::IntPtr  pchValue, uint32_t  cchValueSize) ;

/// @brief Method ISteamUGC_GetQueryUGCAdditionalPreview, addr 0x1805720a0, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamUGC_GetQueryUGCAdditionalPreview(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, uint32_t  previewIndex, ::System::IntPtr  pchURLOrVideoID, uint32_t  cchURLSize, ::System::IntPtr  pchOriginalFileName, uint32_t  cchOriginalFileNameSize, ::by_ref<::Steamworks::EItemPreviewType>  pPreviewType) ;

/// @brief Method ISteamUGC_GetQueryUGCChildren, addr 0x180572190, size 0xc0, virtual false, abstract: false, final false
static inline bool ISteamUGC_GetQueryUGCChildren(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::by_ref<::ArrayW<::Steamworks::PublishedFileId_t>>  pvecPublishedFileID, uint32_t  cMaxEntries) ;

/// @brief Method ISteamUGC_GetQueryUGCKeyValueTag, addr 0x180572250, size 0xe0, virtual false, abstract: false, final false
static inline bool ISteamUGC_GetQueryUGCKeyValueTag(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, uint32_t  keyValueTagIndex, ::System::IntPtr  pchKey, uint32_t  cchKeySize, ::System::IntPtr  pchValue, uint32_t  cchValueSize) ;

/// @brief Method ISteamUGC_GetQueryUGCMetadata, addr 0x180572330, size 0xc0, virtual false, abstract: false, final false
static inline bool ISteamUGC_GetQueryUGCMetadata(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::System::IntPtr  pchMetadata, uint32_t  cchMetadatasize) ;

/// @brief Method ISteamUGC_GetQueryUGCNumAdditionalPreviews, addr 0x1805723f0, size 0xa0, virtual false, abstract: false, final false
static inline uint32_t ISteamUGC_GetQueryUGCNumAdditionalPreviews(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, uint32_t  index) ;

/// @brief Method ISteamUGC_GetQueryUGCNumKeyValueTags, addr 0x180572490, size 0xa0, virtual false, abstract: false, final false
static inline uint32_t ISteamUGC_GetQueryUGCNumKeyValueTags(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, uint32_t  index) ;

/// @brief Method ISteamUGC_GetQueryUGCNumTags, addr 0x180572530, size 0xa0, virtual false, abstract: false, final false
static inline uint32_t ISteamUGC_GetQueryUGCNumTags(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, uint32_t  index) ;

/// @brief Method ISteamUGC_GetQueryUGCPreviewURL, addr 0x1805725d0, size 0xc0, virtual false, abstract: false, final false
static inline bool ISteamUGC_GetQueryUGCPreviewURL(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::System::IntPtr  pchURL, uint32_t  cchURLSize) ;

/// @brief Method ISteamUGC_GetQueryUGCResult, addr 0x180572690, size 0x180, virtual false, abstract: false, final false
static inline bool ISteamUGC_GetQueryUGCResult(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::by_ref<::Steamworks::SteamUGCDetails_t>  pDetails) ;

/// @brief Method ISteamUGC_GetQueryUGCStatistic, addr 0x180572810, size 0xc0, virtual false, abstract: false, final false
static inline bool ISteamUGC_GetQueryUGCStatistic(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, ::Steamworks::EItemStatistic  eStatType, ::by_ref<uint64_t>  pStatValue) ;

/// @brief Method ISteamUGC_GetQueryUGCTag, addr 0x1805729a0, size 0xd0, virtual false, abstract: false, final false
static inline bool ISteamUGC_GetQueryUGCTag(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, uint32_t  indexTag, ::System::IntPtr  pchValue, uint32_t  cchValueSize) ;

/// @brief Method ISteamUGC_GetQueryUGCTagDisplayName, addr 0x1805728d0, size 0xd0, virtual false, abstract: false, final false
static inline bool ISteamUGC_GetQueryUGCTagDisplayName(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, uint32_t  index, uint32_t  indexTag, ::System::IntPtr  pchValue, uint32_t  cchValueSize) ;

/// @brief Method ISteamUGC_GetSubscribedItems, addr 0x180572a70, size 0xa0, virtual false, abstract: false, final false
static inline uint32_t ISteamUGC_GetSubscribedItems(::System::IntPtr  instancePtr, ::by_ref<::ArrayW<::Steamworks::PublishedFileId_t>>  pvecPublishedFileID, uint32_t  cMaxEntries) ;

/// @brief Method ISteamUGC_GetUserItemVote, addr 0x180572b10, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamUGC_GetUserItemVote(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileId_t  nPublishedFileID) ;

/// @brief Method ISteamUGC_GetWorkshopEULAStatus, addr 0x180572ba0, size 0x80, virtual false, abstract: false, final false
static inline uint64_t ISteamUGC_GetWorkshopEULAStatus(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUGC_ReleaseQueryUGCRequest, addr 0x180572c20, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamUGC_ReleaseQueryUGCRequest(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle) ;

/// @brief Method ISteamUGC_RemoveAllItemKeyValueTags, addr 0x180572cb0, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamUGC_RemoveAllItemKeyValueTags(::System::IntPtr  instancePtr, ::Steamworks::UGCUpdateHandle_t  handle) ;

/// @brief Method ISteamUGC_RemoveAppDependency, addr 0x180572d40, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamUGC_RemoveAppDependency(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileId_t  nPublishedFileID, ::Steamworks::AppId_t  nAppID) ;

/// @brief Method ISteamUGC_RemoveDependency, addr 0x180572de0, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamUGC_RemoveDependency(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileId_t  nParentPublishedFileID, ::Steamworks::PublishedFileId_t  nChildPublishedFileID) ;

/// @brief Method ISteamUGC_RemoveItemFromFavorites, addr 0x180572e80, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamUGC_RemoveItemFromFavorites(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  nAppId, ::Steamworks::PublishedFileId_t  nPublishedFileID) ;

/// @brief Method ISteamUGC_RemoveItemKeyValueTags, addr 0x180572f20, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamUGC_RemoveItemKeyValueTags(::System::IntPtr  instancePtr, ::Steamworks::UGCUpdateHandle_t  handle, ::Steamworks::InteropHelp_UTF8StringHandle*  pchKey) ;

/// @brief Method ISteamUGC_RemoveItemPreview, addr 0x180573010, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamUGC_RemoveItemPreview(::System::IntPtr  instancePtr, ::Steamworks::UGCUpdateHandle_t  handle, uint32_t  index) ;

/// @brief Method ISteamUGC_RequestUGCDetails, addr 0x1805730b0, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamUGC_RequestUGCDetails(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileId_t  nPublishedFileID, uint32_t  unMaxAgeSeconds) ;

/// @brief Method ISteamUGC_SendQueryUGCRequest, addr 0x180573150, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamUGC_SendQueryUGCRequest(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle) ;

/// @brief Method ISteamUGC_SetAllowCachedResponse, addr 0x1805731e0, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamUGC_SetAllowCachedResponse(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, uint32_t  unMaxAgeSeconds) ;

/// @brief Method ISteamUGC_SetAllowLegacyUpload, addr 0x180573280, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamUGC_SetAllowLegacyUpload(::System::IntPtr  instancePtr, ::Steamworks::UGCUpdateHandle_t  handle, bool  bAllowLegacyUpload) ;

/// @brief Method ISteamUGC_SetCloudFileNameFilter, addr 0x180573320, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamUGC_SetCloudFileNameFilter(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, ::Steamworks::InteropHelp_UTF8StringHandle*  pMatchCloudFileName) ;

/// @brief Method ISteamUGC_SetItemContent, addr 0x180573410, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamUGC_SetItemContent(::System::IntPtr  instancePtr, ::Steamworks::UGCUpdateHandle_t  handle, ::Steamworks::InteropHelp_UTF8StringHandle*  pszContentFolder) ;

/// @brief Method ISteamUGC_SetItemDescription, addr 0x180573500, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamUGC_SetItemDescription(::System::IntPtr  instancePtr, ::Steamworks::UGCUpdateHandle_t  handle, ::Steamworks::InteropHelp_UTF8StringHandle*  pchDescription) ;

/// @brief Method ISteamUGC_SetItemMetadata, addr 0x1805735f0, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamUGC_SetItemMetadata(::System::IntPtr  instancePtr, ::Steamworks::UGCUpdateHandle_t  handle, ::Steamworks::InteropHelp_UTF8StringHandle*  pchMetaData) ;

/// @brief Method ISteamUGC_SetItemPreview, addr 0x1805736e0, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamUGC_SetItemPreview(::System::IntPtr  instancePtr, ::Steamworks::UGCUpdateHandle_t  handle, ::Steamworks::InteropHelp_UTF8StringHandle*  pszPreviewFile) ;

/// @brief Method ISteamUGC_SetItemTags, addr 0x1805737d0, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamUGC_SetItemTags(::System::IntPtr  instancePtr, ::Steamworks::UGCUpdateHandle_t  updateHandle, ::System::IntPtr  pTags) ;

/// @brief Method ISteamUGC_SetItemTitle, addr 0x180573870, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamUGC_SetItemTitle(::System::IntPtr  instancePtr, ::Steamworks::UGCUpdateHandle_t  handle, ::Steamworks::InteropHelp_UTF8StringHandle*  pchTitle) ;

/// @brief Method ISteamUGC_SetItemUpdateLanguage, addr 0x180573960, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamUGC_SetItemUpdateLanguage(::System::IntPtr  instancePtr, ::Steamworks::UGCUpdateHandle_t  handle, ::Steamworks::InteropHelp_UTF8StringHandle*  pchLanguage) ;

/// @brief Method ISteamUGC_SetItemVisibility, addr 0x180573a50, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamUGC_SetItemVisibility(::System::IntPtr  instancePtr, ::Steamworks::UGCUpdateHandle_t  handle, ::Steamworks::ERemoteStoragePublishedFileVisibility  eVisibility) ;

/// @brief Method ISteamUGC_SetLanguage, addr 0x180573af0, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamUGC_SetLanguage(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, ::Steamworks::InteropHelp_UTF8StringHandle*  pchLanguage) ;

/// @brief Method ISteamUGC_SetMatchAnyTag, addr 0x180573be0, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamUGC_SetMatchAnyTag(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, bool  bMatchAnyTag) ;

/// @brief Method ISteamUGC_SetRankedByTrendDays, addr 0x180573c80, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamUGC_SetRankedByTrendDays(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, uint32_t  unDays) ;

/// @brief Method ISteamUGC_SetReturnAdditionalPreviews, addr 0x180573d20, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamUGC_SetReturnAdditionalPreviews(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, bool  bReturnAdditionalPreviews) ;

/// @brief Method ISteamUGC_SetReturnChildren, addr 0x180573dc0, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamUGC_SetReturnChildren(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, bool  bReturnChildren) ;

/// @brief Method ISteamUGC_SetReturnKeyValueTags, addr 0x180573e60, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamUGC_SetReturnKeyValueTags(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, bool  bReturnKeyValueTags) ;

/// @brief Method ISteamUGC_SetReturnLongDescription, addr 0x180573f00, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamUGC_SetReturnLongDescription(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, bool  bReturnLongDescription) ;

/// @brief Method ISteamUGC_SetReturnMetadata, addr 0x180573fa0, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamUGC_SetReturnMetadata(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, bool  bReturnMetadata) ;

/// @brief Method ISteamUGC_SetReturnOnlyIDs, addr 0x180574040, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamUGC_SetReturnOnlyIDs(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, bool  bReturnOnlyIDs) ;

/// @brief Method ISteamUGC_SetReturnPlaytimeStats, addr 0x1805740e0, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamUGC_SetReturnPlaytimeStats(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, uint32_t  unDays) ;

/// @brief Method ISteamUGC_SetReturnTotalOnly, addr 0x180574180, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamUGC_SetReturnTotalOnly(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, bool  bReturnTotalOnly) ;

/// @brief Method ISteamUGC_SetSearchText, addr 0x180574220, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamUGC_SetSearchText(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, ::Steamworks::InteropHelp_UTF8StringHandle*  pSearchText) ;

/// @brief Method ISteamUGC_SetTimeCreatedDateRange, addr 0x180574310, size 0xb0, virtual false, abstract: false, final false
static inline bool ISteamUGC_SetTimeCreatedDateRange(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, uint32_t  rtStart, uint32_t  rtEnd) ;

/// @brief Method ISteamUGC_SetTimeUpdatedDateRange, addr 0x1805743c0, size 0xb0, virtual false, abstract: false, final false
static inline bool ISteamUGC_SetTimeUpdatedDateRange(::System::IntPtr  instancePtr, ::Steamworks::UGCQueryHandle_t  handle, uint32_t  rtStart, uint32_t  rtEnd) ;

/// @brief Method ISteamUGC_SetUserItemVote, addr 0x180574470, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamUGC_SetUserItemVote(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileId_t  nPublishedFileID, bool  bVoteUp) ;

/// @brief Method ISteamUGC_ShowWorkshopEULA, addr 0x180574510, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamUGC_ShowWorkshopEULA(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUGC_StartItemUpdate, addr 0x180574590, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamUGC_StartItemUpdate(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  nConsumerAppId, ::Steamworks::PublishedFileId_t  nPublishedFileID) ;

/// @brief Method ISteamUGC_StartPlaytimeTracking, addr 0x180574630, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamUGC_StartPlaytimeTracking(::System::IntPtr  instancePtr, ::by_ref<::ArrayW<::Steamworks::PublishedFileId_t>>  pvecPublishedFileID, uint32_t  unNumPublishedFileIDs) ;

/// @brief Method ISteamUGC_StopPlaytimeTracking, addr 0x180574750, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamUGC_StopPlaytimeTracking(::System::IntPtr  instancePtr, ::by_ref<::ArrayW<::Steamworks::PublishedFileId_t>>  pvecPublishedFileID, uint32_t  unNumPublishedFileIDs) ;

/// @brief Method ISteamUGC_StopPlaytimeTrackingForAllItems, addr 0x1805746d0, size 0x80, virtual false, abstract: false, final false
static inline uint64_t ISteamUGC_StopPlaytimeTrackingForAllItems(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUGC_SubmitItemUpdate, addr 0x1805747f0, size 0xf0, virtual false, abstract: false, final false
static inline uint64_t ISteamUGC_SubmitItemUpdate(::System::IntPtr  instancePtr, ::Steamworks::UGCUpdateHandle_t  handle, ::Steamworks::InteropHelp_UTF8StringHandle*  pchChangeNote) ;

/// @brief Method ISteamUGC_SubscribeItem, addr 0x1805748e0, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamUGC_SubscribeItem(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileId_t  nPublishedFileID) ;

/// @brief Method ISteamUGC_SuspendDownloads, addr 0x180574970, size 0x90, virtual false, abstract: false, final false
static inline void ISteamUGC_SuspendDownloads(::System::IntPtr  instancePtr, bool  bSuspend) ;

/// @brief Method ISteamUGC_UnsubscribeItem, addr 0x180574a00, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamUGC_UnsubscribeItem(::System::IntPtr  instancePtr, ::Steamworks::PublishedFileId_t  nPublishedFileID) ;

/// @brief Method ISteamUGC_UpdateItemPreviewFile, addr 0x180574a90, size 0x100, virtual false, abstract: false, final false
static inline bool ISteamUGC_UpdateItemPreviewFile(::System::IntPtr  instancePtr, ::Steamworks::UGCUpdateHandle_t  handle, uint32_t  index, ::Steamworks::InteropHelp_UTF8StringHandle*  pszPreviewFile) ;

/// @brief Method ISteamUGC_UpdateItemPreviewVideo, addr 0x180574b90, size 0x100, virtual false, abstract: false, final false
static inline bool ISteamUGC_UpdateItemPreviewVideo(::System::IntPtr  instancePtr, ::Steamworks::UGCUpdateHandle_t  handle, uint32_t  index, ::Steamworks::InteropHelp_UTF8StringHandle*  pszVideoID) ;

/// @brief Method ISteamUserStats_AttachLeaderboardUGC, addr 0x180574c90, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamUserStats_AttachLeaderboardUGC(::System::IntPtr  instancePtr, ::Steamworks::SteamLeaderboard_t  hSteamLeaderboard, ::Steamworks::UGCHandle_t  hUGC) ;

/// @brief Method ISteamUserStats_ClearAchievement, addr 0x180574d30, size 0xe0, virtual false, abstract: false, final false
static inline bool ISteamUserStats_ClearAchievement(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName) ;

/// @brief Method ISteamUserStats_DownloadLeaderboardEntries, addr 0x180574ec0, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t ISteamUserStats_DownloadLeaderboardEntries(::System::IntPtr  instancePtr, ::Steamworks::SteamLeaderboard_t  hSteamLeaderboard, ::Steamworks::ELeaderboardDataRequest  eLeaderboardDataRequest, int32_t  nRangeStart, int32_t  nRangeEnd) ;

/// @brief Method ISteamUserStats_DownloadLeaderboardEntriesForUsers, addr 0x180574e10, size 0xb0, virtual false, abstract: false, final false
static inline uint64_t ISteamUserStats_DownloadLeaderboardEntriesForUsers(::System::IntPtr  instancePtr, ::Steamworks::SteamLeaderboard_t  hSteamLeaderboard, ::by_ref<::ArrayW<::Steamworks::CSteamID>>  prgUsers, int32_t  cUsers) ;

/// @brief Method ISteamUserStats_FindLeaderboard, addr 0x180574f70, size 0xe0, virtual false, abstract: false, final false
static inline uint64_t ISteamUserStats_FindLeaderboard(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchLeaderboardName) ;

/// @brief Method ISteamUserStats_FindOrCreateLeaderboard, addr 0x180575050, size 0xf0, virtual false, abstract: false, final false
static inline uint64_t ISteamUserStats_FindOrCreateLeaderboard(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchLeaderboardName, ::Steamworks::ELeaderboardSortMethod  eLeaderboardSortMethod, ::Steamworks::ELeaderboardDisplayType  eLeaderboardDisplayType) ;

/// @brief Method ISteamUserStats_GetAchievement, addr 0x1805757f0, size 0x100, virtual false, abstract: false, final false
static inline bool ISteamUserStats_GetAchievement(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName, ::by_ref<bool>  pbAchieved) ;

/// @brief Method ISteamUserStats_GetAchievementAchievedPercent, addr 0x180575140, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamUserStats_GetAchievementAchievedPercent(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName, ::by_ref<float_t>  pflPercent) ;

/// @brief Method ISteamUserStats_GetAchievementAndUnlockTime, addr 0x180575230, size 0x110, virtual false, abstract: false, final false
static inline bool ISteamUserStats_GetAchievementAndUnlockTime(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName, ::by_ref<bool>  pbAchieved, ::by_ref<uint32_t>  punUnlockTime) ;

/// @brief Method ISteamUserStats_GetAchievementDisplayAttribute, addr 0x180575340, size 0x140, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamUserStats_GetAchievementDisplayAttribute(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName, ::Steamworks::InteropHelp_UTF8StringHandle*  pchKey) ;

/// @brief Method ISteamUserStats_GetAchievementIcon, addr 0x180575480, size 0xe0, virtual false, abstract: false, final false
static inline int32_t ISteamUserStats_GetAchievementIcon(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName) ;

/// @brief Method ISteamUserStats_GetAchievementName, addr 0x180575560, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamUserStats_GetAchievementName(::System::IntPtr  instancePtr, uint32_t  iAchievement) ;

/// @brief Method ISteamUserStats_GetAchievementProgressLimitsFloat, addr 0x1805755f0, size 0x100, virtual false, abstract: false, final false
static inline bool ISteamUserStats_GetAchievementProgressLimitsFloat(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName, ::by_ref<float_t>  pfMinProgress, ::by_ref<float_t>  pfMaxProgress) ;

/// @brief Method ISteamUserStats_GetAchievementProgressLimitsInt32, addr 0x1805756f0, size 0x100, virtual false, abstract: false, final false
static inline bool ISteamUserStats_GetAchievementProgressLimitsInt32(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName, ::by_ref<int32_t>  pnMinProgress, ::by_ref<int32_t>  pnMaxProgress) ;

/// @brief Method ISteamUserStats_GetDownloadedLeaderboardEntry, addr 0x1805758f0, size 0xd0, virtual false, abstract: false, final false
static inline bool ISteamUserStats_GetDownloadedLeaderboardEntry(::System::IntPtr  instancePtr, ::Steamworks::SteamLeaderboardEntries_t  hSteamLeaderboardEntries, int32_t  index, ::by_ref<::Steamworks::LeaderboardEntry_t>  pLeaderboardEntry, ::by_ref<::ArrayW<int32_t>>  pDetails, int32_t  cDetailsMax) ;

/// @brief Method ISteamUserStats_GetGlobalStatDouble, addr 0x1805759c0, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamUserStats_GetGlobalStatDouble(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchStatName, ::by_ref<double_t>  pData) ;

/// @brief Method ISteamUserStats_GetGlobalStatHistoryDouble, addr 0x180575ab0, size 0x100, virtual false, abstract: false, final false
static inline int32_t ISteamUserStats_GetGlobalStatHistoryDouble(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchStatName, ::by_ref<::ArrayW<double_t>>  pData, uint32_t  cubData) ;

/// @brief Method ISteamUserStats_GetGlobalStatHistoryInt64, addr 0x180575bb0, size 0x100, virtual false, abstract: false, final false
static inline int32_t ISteamUserStats_GetGlobalStatHistoryInt64(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchStatName, ::by_ref<::ArrayW<int64_t>>  pData, uint32_t  cubData) ;

/// @brief Method ISteamUserStats_GetGlobalStatInt64, addr 0x180575cb0, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamUserStats_GetGlobalStatInt64(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchStatName, ::by_ref<int64_t>  pData) ;

/// @brief Method ISteamUserStats_GetLeaderboardDisplayType, addr 0x180575da0, size 0x90, virtual false, abstract: false, final false
static inline ::Steamworks::ELeaderboardDisplayType ISteamUserStats_GetLeaderboardDisplayType(::System::IntPtr  instancePtr, ::Steamworks::SteamLeaderboard_t  hSteamLeaderboard) ;

/// @brief Method ISteamUserStats_GetLeaderboardEntryCount, addr 0x180575e30, size 0x90, virtual false, abstract: false, final false
static inline int32_t ISteamUserStats_GetLeaderboardEntryCount(::System::IntPtr  instancePtr, ::Steamworks::SteamLeaderboard_t  hSteamLeaderboard) ;

/// @brief Method ISteamUserStats_GetLeaderboardName, addr 0x180575ec0, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamUserStats_GetLeaderboardName(::System::IntPtr  instancePtr, ::Steamworks::SteamLeaderboard_t  hSteamLeaderboard) ;

/// @brief Method ISteamUserStats_GetLeaderboardSortMethod, addr 0x180575f50, size 0x90, virtual false, abstract: false, final false
static inline ::Steamworks::ELeaderboardSortMethod ISteamUserStats_GetLeaderboardSortMethod(::System::IntPtr  instancePtr, ::Steamworks::SteamLeaderboard_t  hSteamLeaderboard) ;

/// @brief Method ISteamUserStats_GetMostAchievedAchievementInfo, addr 0x180575fe0, size 0xd0, virtual false, abstract: false, final false
static inline int32_t ISteamUserStats_GetMostAchievedAchievementInfo(::System::IntPtr  instancePtr, ::System::IntPtr  pchName, uint32_t  unNameBufLen, ::by_ref<float_t>  pflPercent, ::by_ref<bool>  pbAchieved) ;

/// @brief Method ISteamUserStats_GetNextMostAchievedAchievementInfo, addr 0x1805760b0, size 0xe0, virtual false, abstract: false, final false
static inline int32_t ISteamUserStats_GetNextMostAchievedAchievementInfo(::System::IntPtr  instancePtr, int32_t  iIteratorPrevious, ::System::IntPtr  pchName, uint32_t  unNameBufLen, ::by_ref<float_t>  pflPercent, ::by_ref<bool>  pbAchieved) ;

/// @brief Method ISteamUserStats_GetNumAchievements, addr 0x180576190, size 0x80, virtual false, abstract: false, final false
static inline uint32_t ISteamUserStats_GetNumAchievements(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUserStats_GetNumberOfCurrentPlayers, addr 0x180576210, size 0x80, virtual false, abstract: false, final false
static inline uint64_t ISteamUserStats_GetNumberOfCurrentPlayers(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUserStats_GetStatFloat, addr 0x180576290, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamUserStats_GetStatFloat(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName, ::by_ref<float_t>  pData) ;

/// @brief Method ISteamUserStats_GetStatInt32, addr 0x180576380, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamUserStats_GetStatInt32(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName, ::by_ref<int32_t>  pData) ;

/// @brief Method ISteamUserStats_GetUserAchievement, addr 0x1805765a0, size 0x120, virtual false, abstract: false, final false
static inline bool ISteamUserStats_GetUserAchievement(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDUser, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName, ::by_ref<bool>  pbAchieved) ;

/// @brief Method ISteamUserStats_GetUserAchievementAndUnlockTime, addr 0x180576470, size 0x130, virtual false, abstract: false, final false
static inline bool ISteamUserStats_GetUserAchievementAndUnlockTime(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDUser, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName, ::by_ref<bool>  pbAchieved, ::by_ref<uint32_t>  punUnlockTime) ;

/// @brief Method ISteamUserStats_GetUserStatFloat, addr 0x1805766c0, size 0x100, virtual false, abstract: false, final false
static inline bool ISteamUserStats_GetUserStatFloat(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDUser, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName, ::by_ref<float_t>  pData) ;

/// @brief Method ISteamUserStats_GetUserStatInt32, addr 0x1805767c0, size 0x100, virtual false, abstract: false, final false
static inline bool ISteamUserStats_GetUserStatInt32(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDUser, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName, ::by_ref<int32_t>  pData) ;

/// @brief Method ISteamUserStats_IndicateAchievementProgress, addr 0x1805768c0, size 0x100, virtual false, abstract: false, final false
static inline bool ISteamUserStats_IndicateAchievementProgress(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName, uint32_t  nCurProgress, uint32_t  nMaxProgress) ;

/// @brief Method ISteamUserStats_RequestCurrentStats, addr 0x1805769c0, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamUserStats_RequestCurrentStats(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUserStats_RequestGlobalAchievementPercentages, addr 0x180576a40, size 0x80, virtual false, abstract: false, final false
static inline uint64_t ISteamUserStats_RequestGlobalAchievementPercentages(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUserStats_RequestGlobalStats, addr 0x180576ac0, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamUserStats_RequestGlobalStats(::System::IntPtr  instancePtr, int32_t  nHistoryDays) ;

/// @brief Method ISteamUserStats_RequestUserStats, addr 0x180576b50, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ISteamUserStats_RequestUserStats(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDUser) ;

/// @brief Method ISteamUserStats_ResetAllStats, addr 0x180576be0, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamUserStats_ResetAllStats(::System::IntPtr  instancePtr, bool  bAchievementsToo) ;

/// @brief Method ISteamUserStats_SetAchievement, addr 0x180576c70, size 0xe0, virtual false, abstract: false, final false
static inline bool ISteamUserStats_SetAchievement(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName) ;

/// @brief Method ISteamUserStats_SetStatFloat, addr 0x180576d50, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamUserStats_SetStatFloat(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName, float_t  fData) ;

/// @brief Method ISteamUserStats_SetStatInt32, addr 0x180576e40, size 0xf0, virtual false, abstract: false, final false
static inline bool ISteamUserStats_SetStatInt32(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName, int32_t  nData) ;

/// @brief Method ISteamUserStats_StoreStats, addr 0x180576f30, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamUserStats_StoreStats(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUserStats_UpdateAvgRateStat, addr 0x180576fb0, size 0x110, virtual false, abstract: false, final false
static inline bool ISteamUserStats_UpdateAvgRateStat(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchName, float_t  flCountThisSession, double_t  dSessionLength) ;

/// @brief Method ISteamUserStats_UploadLeaderboardScore, addr 0x1805770c0, size 0xd0, virtual false, abstract: false, final false
static inline uint64_t ISteamUserStats_UploadLeaderboardScore(::System::IntPtr  instancePtr, ::Steamworks::SteamLeaderboard_t  hSteamLeaderboard, ::Steamworks::ELeaderboardUploadScoreMethod  eLeaderboardUploadScoreMethod, int32_t  nScore, ::by_ref<::ArrayW<int32_t>>  pScoreDetails, int32_t  cScoreDetailsCount) ;

/// @brief Method ISteamUser_AdvertiseGame, addr 0x180577190, size 0xb0, virtual false, abstract: false, final false
static inline void ISteamUser_AdvertiseGame(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamIDGameServer, uint32_t  unIPServer, uint16_t  usPortServer) ;

/// @brief Method ISteamUser_BIsBehindNAT, addr 0x180577240, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamUser_BIsBehindNAT(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUser_BIsPhoneIdentifying, addr 0x1805772c0, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamUser_BIsPhoneIdentifying(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUser_BIsPhoneRequiringVerification, addr 0x180577340, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamUser_BIsPhoneRequiringVerification(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUser_BIsPhoneVerified, addr 0x1805773c0, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamUser_BIsPhoneVerified(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUser_BIsTwoFactorEnabled, addr 0x180577440, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamUser_BIsTwoFactorEnabled(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUser_BLoggedOn, addr 0x1805774c0, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamUser_BLoggedOn(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUser_BSetDurationControlOnlineState, addr 0x180577540, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamUser_BSetDurationControlOnlineState(::System::IntPtr  instancePtr, ::Steamworks::EDurationControlOnlineState  eNewState) ;

/// @brief Method ISteamUser_BeginAuthSession, addr 0x1805775d0, size 0xb0, virtual false, abstract: false, final false
static inline ::Steamworks::EBeginAuthSessionResult ISteamUser_BeginAuthSession(::System::IntPtr  instancePtr, ::ArrayW<uint8_t>  pAuthTicket, int32_t  cbAuthTicket, ::Steamworks::CSteamID  steamID) ;

/// @brief Method ISteamUser_CancelAuthTicket, addr 0x180577680, size 0x90, virtual false, abstract: false, final false
static inline void ISteamUser_CancelAuthTicket(::System::IntPtr  instancePtr, ::Steamworks::HAuthTicket  hAuthTicket) ;

/// @brief Method ISteamUser_DecompressVoice, addr 0x180577710, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::EVoiceResult ISteamUser_DecompressVoice(::System::IntPtr  instancePtr, ::ArrayW<uint8_t>  pCompressed, uint32_t  cbCompressed, ::ArrayW<uint8_t>  pDestBuffer, uint32_t  cbDestBufferSize, ::by_ref<uint32_t>  nBytesWritten, uint32_t  nDesiredSampleRate) ;

/// @brief Method ISteamUser_EndAuthSession, addr 0x1805777f0, size 0x90, virtual false, abstract: false, final false
static inline void ISteamUser_EndAuthSession(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamID) ;

/// @brief Method ISteamUser_GetAuthSessionTicket, addr 0x180577880, size 0xb0, virtual false, abstract: false, final false
static inline uint32_t ISteamUser_GetAuthSessionTicket(::System::IntPtr  instancePtr, ::ArrayW<uint8_t>  pTicket, int32_t  cbMaxTicket, ::by_ref<uint32_t>  pcbTicket) ;

/// @brief Method ISteamUser_GetAvailableVoice, addr 0x180577930, size 0xb0, virtual false, abstract: false, final false
static inline ::Steamworks::EVoiceResult ISteamUser_GetAvailableVoice(::System::IntPtr  instancePtr, ::by_ref<uint32_t>  pcbCompressed, ::System::IntPtr  pcbUncompressed_Deprecated, uint32_t  nUncompressedVoiceDesiredSampleRate_Deprecated) ;

/// @brief Method ISteamUser_GetDurationControl, addr 0x1805779e0, size 0x80, virtual false, abstract: false, final false
static inline uint64_t ISteamUser_GetDurationControl(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUser_GetEncryptedAppTicket, addr 0x180577a60, size 0xc0, virtual false, abstract: false, final false
static inline bool ISteamUser_GetEncryptedAppTicket(::System::IntPtr  instancePtr, ::ArrayW<uint8_t>  pTicket, int32_t  cbMaxTicket, ::by_ref<uint32_t>  pcbTicket) ;

/// @brief Method ISteamUser_GetGameBadgeLevel, addr 0x180577b20, size 0xa0, virtual false, abstract: false, final false
static inline int32_t ISteamUser_GetGameBadgeLevel(::System::IntPtr  instancePtr, int32_t  nSeries, bool  bFoil) ;

/// @brief Method ISteamUser_GetHSteamUser, addr 0x180577bc0, size 0x80, virtual false, abstract: false, final false
static inline int32_t ISteamUser_GetHSteamUser(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUser_GetMarketEligibility, addr 0x180577c40, size 0x80, virtual false, abstract: false, final false
static inline uint64_t ISteamUser_GetMarketEligibility(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUser_GetPlayerSteamLevel, addr 0x180577cc0, size 0x80, virtual false, abstract: false, final false
static inline int32_t ISteamUser_GetPlayerSteamLevel(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUser_GetSteamID, addr 0x180577d40, size 0x80, virtual false, abstract: false, final false
static inline uint64_t ISteamUser_GetSteamID(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUser_GetUserDataFolder, addr 0x180577dc0, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamUser_GetUserDataFolder(::System::IntPtr  instancePtr, ::System::IntPtr  pchBuffer, int32_t  cubBuffer) ;

/// @brief Method ISteamUser_GetVoice, addr 0x180577ee0, size 0x110, virtual false, abstract: false, final false
static inline ::Steamworks::EVoiceResult ISteamUser_GetVoice(::System::IntPtr  instancePtr, bool  bWantCompressed, ::ArrayW<uint8_t>  pDestBuffer, uint32_t  cbDestBufferSize, ::by_ref<uint32_t>  nBytesWritten, bool  bWantUncompressed_Deprecated, ::System::IntPtr  pUncompressedDestBuffer_Deprecated, uint32_t  cbUncompressedDestBufferSize_Deprecated, ::System::IntPtr  nUncompressBytesWritten_Deprecated, uint32_t  nUncompressedVoiceDesiredSampleRate_Deprecated) ;

/// @brief Method ISteamUser_GetVoiceOptimalSampleRate, addr 0x180577e60, size 0x80, virtual false, abstract: false, final false
static inline uint32_t ISteamUser_GetVoiceOptimalSampleRate(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUser_InitiateGameConnection_DEPRECATED, addr 0x180577ff0, size 0xe0, virtual false, abstract: false, final false
static inline int32_t ISteamUser_InitiateGameConnection_DEPRECATED(::System::IntPtr  instancePtr, ::ArrayW<uint8_t>  pAuthBlob, int32_t  cbMaxAuthBlob, ::Steamworks::CSteamID  steamIDGameServer, uint32_t  unIPServer, uint16_t  usPortServer, bool  bSecure) ;

/// @brief Method ISteamUser_RequestEncryptedAppTicket, addr 0x1805780d0, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ISteamUser_RequestEncryptedAppTicket(::System::IntPtr  instancePtr, ::ArrayW<uint8_t>  pDataToInclude, int32_t  cbDataToInclude) ;

/// @brief Method ISteamUser_RequestStoreAuthURL, addr 0x180578170, size 0xe0, virtual false, abstract: false, final false
static inline uint64_t ISteamUser_RequestStoreAuthURL(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  pchRedirectURL) ;

/// @brief Method ISteamUser_StartVoiceRecording, addr 0x180578250, size 0x80, virtual false, abstract: false, final false
static inline void ISteamUser_StartVoiceRecording(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUser_StopVoiceRecording, addr 0x1805782d0, size 0x80, virtual false, abstract: false, final false
static inline void ISteamUser_StopVoiceRecording(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUser_TerminateGameConnection_DEPRECATED, addr 0x180578350, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamUser_TerminateGameConnection_DEPRECATED(::System::IntPtr  instancePtr, uint32_t  unIPServer, uint16_t  usPortServer) ;

/// @brief Method ISteamUser_TrackAppUsageEvent, addr 0x1805783f0, size 0xf0, virtual false, abstract: false, final false
static inline void ISteamUser_TrackAppUsageEvent(::System::IntPtr  instancePtr, ::Steamworks::CGameID  gameID, int32_t  eAppUsageEvent, ::Steamworks::InteropHelp_UTF8StringHandle*  pchExtraInfo) ;

/// @brief Method ISteamUser_UserHasLicenseForApp, addr 0x1805784e0, size 0xa0, virtual false, abstract: false, final false
static inline ::Steamworks::EUserHasLicenseForAppResult ISteamUser_UserHasLicenseForApp(::System::IntPtr  instancePtr, ::Steamworks::CSteamID  steamID, ::Steamworks::AppId_t  appID) ;

/// @brief Method ISteamUtils_BOverlayNeedsPresent, addr 0x180578580, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamUtils_BOverlayNeedsPresent(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUtils_CheckFileSignature, addr 0x180578600, size 0xe0, virtual false, abstract: false, final false
static inline uint64_t ISteamUtils_CheckFileSignature(::System::IntPtr  instancePtr, ::Steamworks::InteropHelp_UTF8StringHandle*  szFileName) ;

/// @brief Method ISteamUtils_DismissFloatingGamepadTextInput, addr 0x1805786e0, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamUtils_DismissFloatingGamepadTextInput(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUtils_FilterText, addr 0x180578760, size 0x120, virtual false, abstract: false, final false
static inline int32_t ISteamUtils_FilterText(::System::IntPtr  instancePtr, ::Steamworks::ETextFilteringContext  eContext, ::Steamworks::CSteamID  sourceSteamID, ::Steamworks::InteropHelp_UTF8StringHandle*  pchInputMessage, ::System::IntPtr  pchOutFilteredText, uint32_t  nByteSizeOutFilteredText) ;

/// @brief Method ISteamUtils_GetAPICallFailureReason, addr 0x180578880, size 0x90, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamAPICallFailure ISteamUtils_GetAPICallFailureReason(::System::IntPtr  instancePtr, ::Steamworks::SteamAPICall_t  hSteamAPICall) ;

/// @brief Method ISteamUtils_GetAPICallResult, addr 0x180578910, size 0xe0, virtual false, abstract: false, final false
static inline bool ISteamUtils_GetAPICallResult(::System::IntPtr  instancePtr, ::Steamworks::SteamAPICall_t  hSteamAPICall, ::System::IntPtr  pCallback, int32_t  cubCallback, int32_t  iCallbackExpected, ::by_ref<bool>  pbFailed) ;

/// @brief Method ISteamUtils_GetAppID, addr 0x1805789f0, size 0x80, virtual false, abstract: false, final false
static inline uint32_t ISteamUtils_GetAppID(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUtils_GetConnectedUniverse, addr 0x180578a70, size 0x80, virtual false, abstract: false, final false
static inline ::Steamworks::EUniverse ISteamUtils_GetConnectedUniverse(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUtils_GetCurrentBatteryPower, addr 0x180578af0, size 0x80, virtual false, abstract: false, final false
static inline uint8_t ISteamUtils_GetCurrentBatteryPower(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUtils_GetEnteredGamepadTextInput, addr 0x180578b70, size 0xa0, virtual false, abstract: false, final false
static inline bool ISteamUtils_GetEnteredGamepadTextInput(::System::IntPtr  instancePtr, ::System::IntPtr  pchText, uint32_t  cchText) ;

/// @brief Method ISteamUtils_GetEnteredGamepadTextLength, addr 0x180578c10, size 0x80, virtual false, abstract: false, final false
static inline uint32_t ISteamUtils_GetEnteredGamepadTextLength(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUtils_GetIPCCallCount, addr 0x180578c90, size 0x80, virtual false, abstract: false, final false
static inline uint32_t ISteamUtils_GetIPCCallCount(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUtils_GetIPCountry, addr 0x180578d10, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamUtils_GetIPCountry(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUtils_GetIPv6ConnectivityState, addr 0x180578d90, size 0x90, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamIPv6ConnectivityState ISteamUtils_GetIPv6ConnectivityState(::System::IntPtr  instancePtr, ::Steamworks::ESteamIPv6ConnectivityProtocol  eProtocol) ;

/// @brief Method ISteamUtils_GetImageRGBA, addr 0x180578e20, size 0xb0, virtual false, abstract: false, final false
static inline bool ISteamUtils_GetImageRGBA(::System::IntPtr  instancePtr, int32_t  iImage, ::ArrayW<uint8_t>  pubDest, int32_t  nDestBufferSize) ;

/// @brief Method ISteamUtils_GetImageSize, addr 0x180578ed0, size 0xb0, virtual false, abstract: false, final false
static inline bool ISteamUtils_GetImageSize(::System::IntPtr  instancePtr, int32_t  iImage, ::by_ref<uint32_t>  pnWidth, ::by_ref<uint32_t>  pnHeight) ;

/// @brief Method ISteamUtils_GetSecondsSinceAppActive, addr 0x180578f80, size 0x80, virtual false, abstract: false, final false
static inline uint32_t ISteamUtils_GetSecondsSinceAppActive(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUtils_GetSecondsSinceComputerActive, addr 0x180579000, size 0x80, virtual false, abstract: false, final false
static inline uint32_t ISteamUtils_GetSecondsSinceComputerActive(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUtils_GetServerRealTime, addr 0x180579080, size 0x80, virtual false, abstract: false, final false
static inline uint32_t ISteamUtils_GetServerRealTime(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUtils_GetSteamUILanguage, addr 0x180579100, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr ISteamUtils_GetSteamUILanguage(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUtils_InitFilterText, addr 0x180579180, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamUtils_InitFilterText(::System::IntPtr  instancePtr, uint32_t  unFilterOptions) ;

/// @brief Method ISteamUtils_IsAPICallCompleted, addr 0x180579210, size 0xb0, virtual false, abstract: false, final false
static inline bool ISteamUtils_IsAPICallCompleted(::System::IntPtr  instancePtr, ::Steamworks::SteamAPICall_t  hSteamAPICall, ::by_ref<bool>  pbFailed) ;

/// @brief Method ISteamUtils_IsOverlayEnabled, addr 0x1805792c0, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamUtils_IsOverlayEnabled(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUtils_IsSteamChinaLauncher, addr 0x180579340, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamUtils_IsSteamChinaLauncher(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUtils_IsSteamInBigPictureMode, addr 0x1805793c0, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamUtils_IsSteamInBigPictureMode(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUtils_IsSteamRunningInVR, addr 0x180579440, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamUtils_IsSteamRunningInVR(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUtils_IsSteamRunningOnSteamDeck, addr 0x1805794c0, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamUtils_IsSteamRunningOnSteamDeck(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUtils_IsVRHeadsetStreamingEnabled, addr 0x180579540, size 0x80, virtual false, abstract: false, final false
static inline bool ISteamUtils_IsVRHeadsetStreamingEnabled(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamUtils_SetGameLauncherMode, addr 0x1805795c0, size 0x90, virtual false, abstract: false, final false
static inline void ISteamUtils_SetGameLauncherMode(::System::IntPtr  instancePtr, bool  bLauncherMode) ;

/// @brief Method ISteamUtils_SetOverlayNotificationInset, addr 0x180579650, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamUtils_SetOverlayNotificationInset(::System::IntPtr  instancePtr, int32_t  nHorizontalInset, int32_t  nVerticalInset) ;

/// @brief Method ISteamUtils_SetOverlayNotificationPosition, addr 0x1805796f0, size 0x90, virtual false, abstract: false, final false
static inline void ISteamUtils_SetOverlayNotificationPosition(::System::IntPtr  instancePtr, ::Steamworks::ENotificationPosition  eNotificationPosition) ;

/// @brief Method ISteamUtils_SetVRHeadsetStreamingEnabled, addr 0x180579780, size 0x90, virtual false, abstract: false, final false
static inline void ISteamUtils_SetVRHeadsetStreamingEnabled(::System::IntPtr  instancePtr, bool  bEnabled) ;

/// @brief Method ISteamUtils_SetWarningMessageHook, addr 0x180579810, size 0xa0, virtual false, abstract: false, final false
static inline void ISteamUtils_SetWarningMessageHook(::System::IntPtr  instancePtr, ::Steamworks::SteamAPIWarningMessageHook_t*  pFunction) ;

/// @brief Method ISteamUtils_ShowFloatingGamepadTextInput, addr 0x1805798b0, size 0xc0, virtual false, abstract: false, final false
static inline bool ISteamUtils_ShowFloatingGamepadTextInput(::System::IntPtr  instancePtr, ::Steamworks::EFloatingGamepadTextInputMode  eKeyboardMode, int32_t  nTextFieldXPosition, int32_t  nTextFieldYPosition, int32_t  nTextFieldWidth, int32_t  nTextFieldHeight) ;

/// @brief Method ISteamUtils_ShowGamepadTextInput, addr 0x180579970, size 0x190, virtual false, abstract: false, final false
static inline bool ISteamUtils_ShowGamepadTextInput(::System::IntPtr  instancePtr, ::Steamworks::EGamepadTextInputMode  eInputMode, ::Steamworks::EGamepadTextInputLineMode  eLineInputMode, ::Steamworks::InteropHelp_UTF8StringHandle*  pchDescription, uint32_t  unCharMax, ::Steamworks::InteropHelp_UTF8StringHandle*  pchExistingText) ;

/// @brief Method ISteamUtils_StartVRDashboard, addr 0x180579b00, size 0x80, virtual false, abstract: false, final false
static inline void ISteamUtils_StartVRDashboard(::System::IntPtr  instancePtr) ;

/// @brief Method ISteamVideo_GetOPFSettings, addr 0x180579b80, size 0x90, virtual false, abstract: false, final false
static inline void ISteamVideo_GetOPFSettings(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  unVideoAppID) ;

/// @brief Method ISteamVideo_GetOPFStringForApp, addr 0x180579c10, size 0xb0, virtual false, abstract: false, final false
static inline bool ISteamVideo_GetOPFStringForApp(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  unVideoAppID, ::System::IntPtr  pchBuffer, ::by_ref<int32_t>  pnBufferSize) ;

/// @brief Method ISteamVideo_GetVideoURL, addr 0x180579cc0, size 0x90, virtual false, abstract: false, final false
static inline void ISteamVideo_GetVideoURL(::System::IntPtr  instancePtr, ::Steamworks::AppId_t  unVideoAppID) ;

/// @brief Method ISteamVideo_IsBroadcasting, addr 0x180579d50, size 0x90, virtual false, abstract: false, final false
static inline bool ISteamVideo_IsBroadcasting(::System::IntPtr  instancePtr, ::by_ref<int32_t>  pnNumViewers) ;

/// @brief Method SteamAPI_GetHSteamPipe, addr 0x180579de0, size 0x70, virtual false, abstract: false, final false
static inline int32_t SteamAPI_GetHSteamPipe() ;

/// @brief Method SteamAPI_GetHSteamUser, addr 0x180579e50, size 0x70, virtual false, abstract: false, final false
static inline int32_t SteamAPI_GetHSteamUser() ;

/// @brief Method SteamAPI_GetSteamInstallPath, addr 0x180579ec0, size 0x70, virtual false, abstract: false, final false
static inline int32_t SteamAPI_GetSteamInstallPath() ;

/// @brief Method SteamAPI_ISteamNetworkingConnectionSignaling_Release, addr 0x180579f30, size 0x80, virtual false, abstract: false, final false
static inline void SteamAPI_ISteamNetworkingConnectionSignaling_Release(::by_ref<::Steamworks::ISteamNetworkingConnectionSignaling>  self) ;

/// @brief Method SteamAPI_ISteamNetworkingConnectionSignaling_SendSignal, addr 0x180579fb0, size 0x180, virtual false, abstract: false, final false
static inline bool SteamAPI_ISteamNetworkingConnectionSignaling_SendSignal(::by_ref<::Steamworks::ISteamNetworkingConnectionSignaling>  self, ::Steamworks::HSteamNetConnection  hConn, ::by_ref<::Steamworks::SteamNetConnectionInfo_t>  info, ::System::IntPtr  pMsg, int32_t  cbMsg) ;

/// @brief Method SteamAPI_ISteamNetworkingSignalingRecvContext_OnConnectRequest, addr 0x18057a130, size 0x130, virtual false, abstract: false, final false
static inline ::System::IntPtr SteamAPI_ISteamNetworkingSignalingRecvContext_OnConnectRequest(::by_ref<::Steamworks::ISteamNetworkingSignalingRecvContext>  self, ::Steamworks::HSteamNetConnection  hConn, ::by_ref<::Steamworks::SteamNetworkingIdentity>  identityPeer, int32_t  nLocalVirtualPort) ;

/// @brief Method SteamAPI_ISteamNetworkingSignalingRecvContext_SendRejectionSignal, addr 0x18057a260, size 0x120, virtual false, abstract: false, final false
static inline void SteamAPI_ISteamNetworkingSignalingRecvContext_SendRejectionSignal(::by_ref<::Steamworks::ISteamNetworkingSignalingRecvContext>  self, ::by_ref<::Steamworks::SteamNetworkingIdentity>  identityPeer, ::System::IntPtr  pMsg, int32_t  cbMsg) ;

/// @brief Method SteamAPI_Init, addr 0x18057a380, size 0x70, virtual false, abstract: false, final false
static inline bool SteamAPI_Init() ;

/// @brief Method SteamAPI_IsSteamRunning, addr 0x18057a3f0, size 0x70, virtual false, abstract: false, final false
static inline bool SteamAPI_IsSteamRunning() ;

/// @brief Method SteamAPI_ManualDispatch_FreeLastCallback, addr 0x18057a460, size 0x80, virtual false, abstract: false, final false
static inline void SteamAPI_ManualDispatch_FreeLastCallback(::Steamworks::HSteamPipe  hSteamPipe) ;

/// @brief Method SteamAPI_ManualDispatch_GetAPICallResult, addr 0x18057a4e0, size 0xe0, virtual false, abstract: false, final false
static inline bool SteamAPI_ManualDispatch_GetAPICallResult(::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::SteamAPICall_t  hSteamAPICall, ::System::IntPtr  pCallback, int32_t  cubCallback, int32_t  iCallbackExpected, ::by_ref<bool>  pbFailed) ;

/// @brief Method SteamAPI_ManualDispatch_GetNextCallback, addr 0x18057a5c0, size 0x90, virtual false, abstract: false, final false
static inline bool SteamAPI_ManualDispatch_GetNextCallback(::Steamworks::HSteamPipe  hSteamPipe, ::System::IntPtr  pCallbackMsg) ;

/// @brief Method SteamAPI_ManualDispatch_Init, addr 0x18057a650, size 0x70, virtual false, abstract: false, final false
static inline void SteamAPI_ManualDispatch_Init() ;

/// @brief Method SteamAPI_ManualDispatch_RunFrame, addr 0x18057a6c0, size 0x80, virtual false, abstract: false, final false
static inline void SteamAPI_ManualDispatch_RunFrame(::Steamworks::HSteamPipe  hSteamPipe) ;

/// @brief Method SteamAPI_RegisterCallResult, addr 0x18057a740, size 0x90, virtual false, abstract: false, final false
static inline void SteamAPI_RegisterCallResult(::System::IntPtr  pCallback, uint64_t  hAPICall) ;

/// @brief Method SteamAPI_RegisterCallback, addr 0x18057a7d0, size 0x90, virtual false, abstract: false, final false
static inline void SteamAPI_RegisterCallback(::System::IntPtr  pCallback, int32_t  iCallback) ;

/// @brief Method SteamAPI_ReleaseCurrentThreadMemory, addr 0x18057a860, size 0x70, virtual false, abstract: false, final false
static inline void SteamAPI_ReleaseCurrentThreadMemory() ;

/// @brief Method SteamAPI_RestartAppIfNecessary, addr 0x18057a8d0, size 0x80, virtual false, abstract: false, final false
static inline bool SteamAPI_RestartAppIfNecessary(::Steamworks::AppId_t  unOwnAppID) ;

/// @brief Method SteamAPI_RunCallbacks, addr 0x18057a950, size 0x70, virtual false, abstract: false, final false
static inline void SteamAPI_RunCallbacks() ;

/// @brief Method SteamAPI_SetBreakpadAppID, addr 0x18057a9c0, size 0x80, virtual false, abstract: false, final false
static inline void SteamAPI_SetBreakpadAppID(uint32_t  unAppID) ;

/// @brief Method SteamAPI_SetMiniDumpComment, addr 0x18057aa40, size 0xc0, virtual false, abstract: false, final false
static inline void SteamAPI_SetMiniDumpComment(::Steamworks::InteropHelp_UTF8StringHandle*  pchMsg) ;

/// @brief Method SteamAPI_SetTryCatchCallbacks, addr 0x18057ab00, size 0x80, virtual false, abstract: false, final false
static inline void SteamAPI_SetTryCatchCallbacks(bool  bTryCatchCallbacks) ;

/// @brief Method SteamAPI_Shutdown, addr 0x18057ab80, size 0x70, virtual false, abstract: false, final false
static inline void SteamAPI_Shutdown() ;

/// @brief Method SteamAPI_SteamNetworkingIPAddr_Clear, addr 0x18057abf0, size 0xe0, virtual false, abstract: false, final false
static inline void SteamAPI_SteamNetworkingIPAddr_Clear(::by_ref<::Steamworks::SteamNetworkingIPAddr>  self) ;

/// @brief Method SteamAPI_SteamNetworkingIPAddr_GetFakeIPType, addr 0x18057acd0, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamNetworkingFakeIPType SteamAPI_SteamNetworkingIPAddr_GetFakeIPType(::by_ref<::Steamworks::SteamNetworkingIPAddr>  self) ;

/// @brief Method SteamAPI_SteamNetworkingIPAddr_GetIPv4, addr 0x18057adc0, size 0xf0, virtual false, abstract: false, final false
static inline uint32_t SteamAPI_SteamNetworkingIPAddr_GetIPv4(::by_ref<::Steamworks::SteamNetworkingIPAddr>  self) ;

/// @brief Method SteamAPI_SteamNetworkingIPAddr_IsEqualTo, addr 0x18057aeb0, size 0x140, virtual false, abstract: false, final false
static inline bool SteamAPI_SteamNetworkingIPAddr_IsEqualTo(::by_ref<::Steamworks::SteamNetworkingIPAddr>  self, ::by_ref<::Steamworks::SteamNetworkingIPAddr>  x) ;

/// @brief Method SteamAPI_SteamNetworkingIPAddr_IsFakeIP, addr 0x18057aff0, size 0xf0, virtual false, abstract: false, final false
static inline bool SteamAPI_SteamNetworkingIPAddr_IsFakeIP(::by_ref<::Steamworks::SteamNetworkingIPAddr>  self) ;

/// @brief Method SteamAPI_SteamNetworkingIPAddr_IsIPv4, addr 0x18057b0e0, size 0xf0, virtual false, abstract: false, final false
static inline bool SteamAPI_SteamNetworkingIPAddr_IsIPv4(::by_ref<::Steamworks::SteamNetworkingIPAddr>  self) ;

/// @brief Method SteamAPI_SteamNetworkingIPAddr_IsIPv6AllZeros, addr 0x18057b1d0, size 0xf0, virtual false, abstract: false, final false
static inline bool SteamAPI_SteamNetworkingIPAddr_IsIPv6AllZeros(::by_ref<::Steamworks::SteamNetworkingIPAddr>  self) ;

/// @brief Method SteamAPI_SteamNetworkingIPAddr_IsLocalHost, addr 0x18057b2c0, size 0xf0, virtual false, abstract: false, final false
static inline bool SteamAPI_SteamNetworkingIPAddr_IsLocalHost(::by_ref<::Steamworks::SteamNetworkingIPAddr>  self) ;

/// @brief Method SteamAPI_SteamNetworkingIPAddr_ParseString, addr 0x18057b3b0, size 0x150, virtual false, abstract: false, final false
static inline bool SteamAPI_SteamNetworkingIPAddr_ParseString(::by_ref<::Steamworks::SteamNetworkingIPAddr>  self, ::Steamworks::InteropHelp_UTF8StringHandle*  pszStr) ;

/// @brief Method SteamAPI_SteamNetworkingIPAddr_SetIPv4, addr 0x18057b500, size 0xf0, virtual false, abstract: false, final false
static inline void SteamAPI_SteamNetworkingIPAddr_SetIPv4(::by_ref<::Steamworks::SteamNetworkingIPAddr>  self, uint32_t  nIP, uint16_t  nPort) ;

/// @brief Method SteamAPI_SteamNetworkingIPAddr_SetIPv6, addr 0x18057b6e0, size 0x100, virtual false, abstract: false, final false
static inline void SteamAPI_SteamNetworkingIPAddr_SetIPv6(::by_ref<::Steamworks::SteamNetworkingIPAddr>  self, ::by_ref<::ArrayW<uint8_t>>  ipv6, uint16_t  nPort) ;

/// @brief Method SteamAPI_SteamNetworkingIPAddr_SetIPv6LocalHost, addr 0x18057b5f0, size 0xf0, virtual false, abstract: false, final false
static inline void SteamAPI_SteamNetworkingIPAddr_SetIPv6LocalHost(::by_ref<::Steamworks::SteamNetworkingIPAddr>  self, uint16_t  nPort) ;

/// @brief Method SteamAPI_SteamNetworkingIPAddr_ToString, addr 0x18057b7e0, size 0x100, virtual false, abstract: false, final false
static inline void SteamAPI_SteamNetworkingIPAddr_ToString(::by_ref<::Steamworks::SteamNetworkingIPAddr>  self, ::System::IntPtr  buf, uint32_t  cbBuf, bool  bWithPort) ;

/// @brief Method SteamAPI_SteamNetworkingIdentity_Clear, addr 0x18057b8e0, size 0xf0, virtual false, abstract: false, final false
static inline void SteamAPI_SteamNetworkingIdentity_Clear(::by_ref<::Steamworks::SteamNetworkingIdentity>  self) ;

/// @brief Method SteamAPI_SteamNetworkingIdentity_GetFakeIPType, addr 0x18057b9d0, size 0x100, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamNetworkingFakeIPType SteamAPI_SteamNetworkingIdentity_GetFakeIPType(::by_ref<::Steamworks::SteamNetworkingIdentity>  self) ;

/// @brief Method SteamAPI_SteamNetworkingIdentity_GetGenericBytes, addr 0x18057bad0, size 0x110, virtual false, abstract: false, final false
static inline ::System::IntPtr SteamAPI_SteamNetworkingIdentity_GetGenericBytes(::by_ref<::Steamworks::SteamNetworkingIdentity>  self, ::by_ref<int32_t>  cbLen) ;

/// @brief Method SteamAPI_SteamNetworkingIdentity_GetGenericString, addr 0x18057bbe0, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr SteamAPI_SteamNetworkingIdentity_GetGenericString(::by_ref<::Steamworks::SteamNetworkingIdentity>  self) ;

/// @brief Method SteamAPI_SteamNetworkingIdentity_GetIPAddr, addr 0x18057bce0, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr SteamAPI_SteamNetworkingIdentity_GetIPAddr(::by_ref<::Steamworks::SteamNetworkingIdentity>  self) ;

/// @brief Method SteamAPI_SteamNetworkingIdentity_GetIPv4, addr 0x18057bde0, size 0x100, virtual false, abstract: false, final false
static inline uint32_t SteamAPI_SteamNetworkingIdentity_GetIPv4(::by_ref<::Steamworks::SteamNetworkingIdentity>  self) ;

/// @brief Method SteamAPI_SteamNetworkingIdentity_GetSteamID, addr 0x18057bfe0, size 0x100, virtual false, abstract: false, final false
static inline uint64_t SteamAPI_SteamNetworkingIdentity_GetSteamID(::by_ref<::Steamworks::SteamNetworkingIdentity>  self) ;

/// @brief Method SteamAPI_SteamNetworkingIdentity_GetSteamID64, addr 0x18057bee0, size 0x100, virtual false, abstract: false, final false
static inline uint64_t SteamAPI_SteamNetworkingIdentity_GetSteamID64(::by_ref<::Steamworks::SteamNetworkingIdentity>  self) ;

/// @brief Method SteamAPI_SteamNetworkingIdentity_GetXboxPairwiseID, addr 0x18057c0e0, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr SteamAPI_SteamNetworkingIdentity_GetXboxPairwiseID(::by_ref<::Steamworks::SteamNetworkingIdentity>  self) ;

/// @brief Method SteamAPI_SteamNetworkingIdentity_IsEqualTo, addr 0x18057c1e0, size 0x190, virtual false, abstract: false, final false
static inline bool SteamAPI_SteamNetworkingIdentity_IsEqualTo(::by_ref<::Steamworks::SteamNetworkingIdentity>  self, ::by_ref<::Steamworks::SteamNetworkingIdentity>  x) ;

/// @brief Method SteamAPI_SteamNetworkingIdentity_IsFakeIP, addr 0x18057c370, size 0x110, virtual false, abstract: false, final false
static inline bool SteamAPI_SteamNetworkingIdentity_IsFakeIP(::by_ref<::Steamworks::SteamNetworkingIdentity>  self) ;

/// @brief Method SteamAPI_SteamNetworkingIdentity_IsInvalid, addr 0x18057c480, size 0x110, virtual false, abstract: false, final false
static inline bool SteamAPI_SteamNetworkingIdentity_IsInvalid(::by_ref<::Steamworks::SteamNetworkingIdentity>  self) ;

/// @brief Method SteamAPI_SteamNetworkingIdentity_IsLocalHost, addr 0x18057c590, size 0x110, virtual false, abstract: false, final false
static inline bool SteamAPI_SteamNetworkingIdentity_IsLocalHost(::by_ref<::Steamworks::SteamNetworkingIdentity>  self) ;

/// @brief Method SteamAPI_SteamNetworkingIdentity_ParseString, addr 0x18057c6a0, size 0x160, virtual false, abstract: false, final false
static inline bool SteamAPI_SteamNetworkingIdentity_ParseString(::by_ref<::Steamworks::SteamNetworkingIdentity>  self, ::Steamworks::InteropHelp_UTF8StringHandle*  pszStr) ;

/// @brief Method SteamAPI_SteamNetworkingIdentity_SetGenericBytes, addr 0x18057c800, size 0x120, virtual false, abstract: false, final false
static inline bool SteamAPI_SteamNetworkingIdentity_SetGenericBytes(::by_ref<::Steamworks::SteamNetworkingIdentity>  self, ::by_ref<::ArrayW<uint8_t>>  data, uint32_t  cbLen) ;

/// @brief Method SteamAPI_SteamNetworkingIdentity_SetGenericString, addr 0x18057c920, size 0x160, virtual false, abstract: false, final false
static inline bool SteamAPI_SteamNetworkingIdentity_SetGenericString(::by_ref<::Steamworks::SteamNetworkingIdentity>  self, ::Steamworks::InteropHelp_UTF8StringHandle*  pszString) ;

/// @brief Method SteamAPI_SteamNetworkingIdentity_SetIPAddr, addr 0x18057ca80, size 0x170, virtual false, abstract: false, final false
static inline ::System::IntPtr SteamAPI_SteamNetworkingIdentity_SetIPAddr(::by_ref<::Steamworks::SteamNetworkingIdentity>  self, ::by_ref<::Steamworks::SteamNetworkingIPAddr>  addr) ;

/// @brief Method SteamAPI_SteamNetworkingIdentity_SetIPv4Addr, addr 0x18057cbf0, size 0x110, virtual false, abstract: false, final false
static inline void SteamAPI_SteamNetworkingIdentity_SetIPv4Addr(::by_ref<::Steamworks::SteamNetworkingIdentity>  self, uint32_t  nIPv4, uint16_t  nPort) ;

/// @brief Method SteamAPI_SteamNetworkingIdentity_SetLocalHost, addr 0x18057cd00, size 0xf0, virtual false, abstract: false, final false
static inline void SteamAPI_SteamNetworkingIdentity_SetLocalHost(::by_ref<::Steamworks::SteamNetworkingIdentity>  self) ;

/// @brief Method SteamAPI_SteamNetworkingIdentity_SetSteamID, addr 0x18057cef0, size 0x100, virtual false, abstract: false, final false
static inline void SteamAPI_SteamNetworkingIdentity_SetSteamID(::by_ref<::Steamworks::SteamNetworkingIdentity>  self, uint64_t  steamID) ;

/// @brief Method SteamAPI_SteamNetworkingIdentity_SetSteamID64, addr 0x18057cdf0, size 0x100, virtual false, abstract: false, final false
static inline void SteamAPI_SteamNetworkingIdentity_SetSteamID64(::by_ref<::Steamworks::SteamNetworkingIdentity>  self, uint64_t  steamID) ;

/// @brief Method SteamAPI_SteamNetworkingIdentity_SetXboxPairwiseID, addr 0x18057cff0, size 0x160, virtual false, abstract: false, final false
static inline bool SteamAPI_SteamNetworkingIdentity_SetXboxPairwiseID(::by_ref<::Steamworks::SteamNetworkingIdentity>  self, ::Steamworks::InteropHelp_UTF8StringHandle*  pszString) ;

/// @brief Method SteamAPI_SteamNetworkingIdentity_ToString, addr 0x18057d150, size 0x110, virtual false, abstract: false, final false
static inline void SteamAPI_SteamNetworkingIdentity_ToString(::by_ref<::Steamworks::SteamNetworkingIdentity>  self, ::System::IntPtr  buf, uint32_t  cbBuf) ;

/// @brief Method SteamAPI_SteamNetworkingMessage_t_Release, addr 0x18057d260, size 0x80, virtual false, abstract: false, final false
static inline void SteamAPI_SteamNetworkingMessage_t_Release(::System::IntPtr  self) ;

/// @brief Method SteamAPI_UnregisterCallResult, addr 0x18057d2e0, size 0x90, virtual false, abstract: false, final false
static inline void SteamAPI_UnregisterCallResult(::System::IntPtr  pCallback, uint64_t  hAPICall) ;

/// @brief Method SteamAPI_UnregisterCallback, addr 0x18057d370, size 0x80, virtual false, abstract: false, final false
static inline void SteamAPI_UnregisterCallback(::System::IntPtr  pCallback) ;

/// @brief Method SteamAPI_UseBreakpadCrashHandler, addr 0x18057d3f0, size 0x1c0, virtual false, abstract: false, final false
static inline void SteamAPI_UseBreakpadCrashHandler(::Steamworks::InteropHelp_UTF8StringHandle*  pchVersion, ::Steamworks::InteropHelp_UTF8StringHandle*  pchDate, ::Steamworks::InteropHelp_UTF8StringHandle*  pchTime, bool  bFullMemoryDumps, ::System::IntPtr  pvContext, ::System::IntPtr  m_pfnPreMinidumpCallback) ;

/// @brief Method SteamAPI_WriteMiniDump, addr 0x18057d5b0, size 0xa0, virtual false, abstract: false, final false
static inline void SteamAPI_WriteMiniDump(uint32_t  uStructuredExceptionCode, ::System::IntPtr  pvExceptionInfo, uint32_t  uBuildID) ;

/// @brief Method SteamClient, addr 0x18057d650, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr SteamClient() ;

/// @brief Method SteamEncryptedAppTicket_BDecryptTicket, addr 0x18057d6c0, size 0xf0, virtual false, abstract: false, final false
static inline bool SteamEncryptedAppTicket_BDecryptTicket(::by_ref<::ArrayW<uint8_t>>  rgubTicketEncrypted, uint32_t  cubTicketEncrypted, ::by_ref<::ArrayW<uint8_t>>  rgubTicketDecrypted, ::by_ref<uint32_t>  pcubTicketDecrypted, ::ArrayW<uint8_t>  rgubKey, int32_t  cubKey) ;

/// @brief Method SteamEncryptedAppTicket_BIsLicenseBorrowed, addr 0x18057d7b0, size 0xa0, virtual false, abstract: false, final false
static inline bool SteamEncryptedAppTicket_BIsLicenseBorrowed(::by_ref<::ArrayW<uint8_t>>  rgubTicketDecrypted, uint32_t  cubTicketDecrypted) ;

/// @brief Method SteamEncryptedAppTicket_BIsLicenseTemporary, addr 0x18057d850, size 0xa0, virtual false, abstract: false, final false
static inline bool SteamEncryptedAppTicket_BIsLicenseTemporary(::by_ref<::ArrayW<uint8_t>>  rgubTicketDecrypted, uint32_t  cubTicketDecrypted) ;

/// @brief Method SteamEncryptedAppTicket_BIsTicketForApp, addr 0x18057d8f0, size 0xa0, virtual false, abstract: false, final false
static inline bool SteamEncryptedAppTicket_BIsTicketForApp(::by_ref<::ArrayW<uint8_t>>  rgubTicketDecrypted, uint32_t  cubTicketDecrypted, ::Steamworks::AppId_t  nAppID) ;

/// @brief Method SteamEncryptedAppTicket_BIsTicketSigned, addr 0x18057d990, size 0xc0, virtual false, abstract: false, final false
static inline bool SteamEncryptedAppTicket_BIsTicketSigned(::by_ref<::ArrayW<uint8_t>>  rgubTicketDecrypted, uint32_t  cubTicketDecrypted, ::by_ref<::ArrayW<uint8_t>>  pubRSAKey, uint32_t  cubRSAKey) ;

/// @brief Method SteamEncryptedAppTicket_BUserIsVacBanned, addr 0x18057da50, size 0xa0, virtual false, abstract: false, final false
static inline bool SteamEncryptedAppTicket_BUserIsVacBanned(::by_ref<::ArrayW<uint8_t>>  rgubTicketDecrypted, uint32_t  cubTicketDecrypted) ;

/// @brief Method SteamEncryptedAppTicket_BUserOwnsAppInTicket, addr 0x18057daf0, size 0xa0, virtual false, abstract: false, final false
static inline bool SteamEncryptedAppTicket_BUserOwnsAppInTicket(::by_ref<::ArrayW<uint8_t>>  rgubTicketDecrypted, uint32_t  cubTicketDecrypted, ::Steamworks::AppId_t  nAppID) ;

/// @brief Method SteamEncryptedAppTicket_GetTicketAppID, addr 0x18057db90, size 0x90, virtual false, abstract: false, final false
static inline uint32_t SteamEncryptedAppTicket_GetTicketAppID(::by_ref<::ArrayW<uint8_t>>  rgubTicketDecrypted, uint32_t  cubTicketDecrypted) ;

/// @brief Method SteamEncryptedAppTicket_GetTicketIssueTime, addr 0x18057dc20, size 0x90, virtual false, abstract: false, final false
static inline uint32_t SteamEncryptedAppTicket_GetTicketIssueTime(::by_ref<::ArrayW<uint8_t>>  rgubTicketDecrypted, uint32_t  cubTicketDecrypted) ;

/// @brief Method SteamEncryptedAppTicket_GetTicketSteamID, addr 0x18057dcb0, size 0xa0, virtual false, abstract: false, final false
static inline void SteamEncryptedAppTicket_GetTicketSteamID(::by_ref<::ArrayW<uint8_t>>  rgubTicketDecrypted, uint32_t  cubTicketDecrypted, ::by_ref<::Steamworks::CSteamID>  psteamID) ;

/// @brief Method SteamEncryptedAppTicket_GetUserVariableData, addr 0x18057dd50, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr SteamEncryptedAppTicket_GetUserVariableData(::by_ref<::ArrayW<uint8_t>>  rgubTicketDecrypted, uint32_t  cubTicketDecrypted, ::by_ref<uint32_t>  pcubUserData) ;

/// @brief Method SteamGameServerClient, addr 0x18057ddf0, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr SteamGameServerClient() ;

/// @brief Method SteamGameServer_BSecure, addr 0x1805504e0, size 0x70, virtual false, abstract: false, final false
static inline bool SteamGameServer_BSecure() ;

/// @brief Method SteamGameServer_GetHSteamPipe, addr 0x18057de60, size 0x70, virtual false, abstract: false, final false
static inline int32_t SteamGameServer_GetHSteamPipe() ;

/// @brief Method SteamGameServer_GetHSteamUser, addr 0x18057ded0, size 0x70, virtual false, abstract: false, final false
static inline int32_t SteamGameServer_GetHSteamUser() ;

/// @brief Method SteamGameServer_GetSteamID, addr 0x18057df40, size 0x70, virtual false, abstract: false, final false
static inline uint64_t SteamGameServer_GetSteamID() ;

/// @brief Method SteamGameServer_ReleaseCurrentThreadMemory, addr 0x180550850, size 0x70, virtual false, abstract: false, final false
static inline void SteamGameServer_ReleaseCurrentThreadMemory() ;

/// @brief Method SteamGameServer_RunCallbacks, addr 0x18057dfb0, size 0x70, virtual false, abstract: false, final false
static inline void SteamGameServer_RunCallbacks() ;

/// @brief Method SteamGameServer_Shutdown, addr 0x18057e020, size 0x70, virtual false, abstract: false, final false
static inline void SteamGameServer_Shutdown() ;

/// @brief Method SteamInternal_ContextInit, addr 0x18057e090, size 0x80, virtual false, abstract: false, final false
static inline ::System::IntPtr SteamInternal_ContextInit(::System::IntPtr  pContextInitData) ;

/// @brief Method SteamInternal_CreateInterface, addr 0x18057e110, size 0xd0, virtual false, abstract: false, final false
static inline ::System::IntPtr SteamInternal_CreateInterface(::Steamworks::InteropHelp_UTF8StringHandle*  ver) ;

/// @brief Method SteamInternal_FindOrCreateGameServerInterface, addr 0x18057e1e0, size 0xe0, virtual false, abstract: false, final false
static inline ::System::IntPtr SteamInternal_FindOrCreateGameServerInterface(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::InteropHelp_UTF8StringHandle*  pszVersion) ;

/// @brief Method SteamInternal_FindOrCreateUserInterface, addr 0x18057e2c0, size 0xe0, virtual false, abstract: false, final false
static inline ::System::IntPtr SteamInternal_FindOrCreateUserInterface(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::InteropHelp_UTF8StringHandle*  pszVersion) ;

/// @brief Method SteamInternal_GameServer_Init, addr 0x18057e3a0, size 0x120, virtual false, abstract: false, final false
static inline bool SteamInternal_GameServer_Init(uint32_t  unIP, uint16_t  usPort, uint16_t  usGamePort, uint16_t  usQueryPort, ::Steamworks::EServerMode  eServerMode, ::Steamworks::InteropHelp_UTF8StringHandle*  pchVersionString) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeMethods() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeMethods", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeMethods(NativeMethods && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeMethods", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeMethods(NativeMethods const& ) = delete;

/// @brief Field NativeLibraryName offset 0xffffffff size 0x8
static constexpr ::ConstString  NativeLibraryName{u"steam_api64"};

/// @brief Field NativeLibrary_SDKEncryptedAppTicket offset 0xffffffff size 0x8
static constexpr ::ConstString  NativeLibrary_SDKEncryptedAppTicket{u"sdkencryptedappticket64"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16025};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::NativeMethods) == 0x10, "Size mismatch!");

} // namespace end def Steamworks

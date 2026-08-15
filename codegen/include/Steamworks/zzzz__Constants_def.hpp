#pragma once
// IWYU pragma private; include "Steamworks/Constants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Constants)
// Forward declare root types
namespace Steamworks {
class Constants;
}
// Write type traits
MARK_REF_T(::Steamworks::Constants*);
DEFINE_IL2CPP_CLASS(::Steamworks::Constants*, "Steamworks", "Constants");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.Constants
class CORDL_TYPE Constants : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Constants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Constants", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Constants(Constants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Constants", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Constants(Constants const& ) = delete;

/// @brief Field INVALID_HTTPREQUEST_HANDLE offset 0xffffffff size 0x4
static constexpr int32_t  INVALID_HTTPREQUEST_HANDLE{static_cast<int32_t>(0x0)};

/// @brief Field STEAMAPPLIST_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMAPPLIST_INTERFACE_VERSION{u"STEAMAPPLIST_INTERFACE_VERSION001"};

/// @brief Field STEAMAPPS_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMAPPS_INTERFACE_VERSION{u"STEAMAPPS_INTERFACE_VERSION008"};

/// @brief Field STEAMAPPTICKET_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMAPPTICKET_INTERFACE_VERSION{u"STEAMAPPTICKET_INTERFACE_VERSION001"};

/// @brief Field STEAMCLIENT_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMCLIENT_INTERFACE_VERSION{u"SteamClient020"};

/// @brief Field STEAMFRIENDS_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMFRIENDS_INTERFACE_VERSION{u"SteamFriends017"};

/// @brief Field STEAMGAMECOORDINATOR_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMGAMECOORDINATOR_INTERFACE_VERSION{u"SteamGameCoordinator001"};

/// @brief Field STEAMGAMESEARCH_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMGAMESEARCH_INTERFACE_VERSION{u"SteamMatchGameSearch001"};

/// @brief Field STEAMGAMESERVERSTATS_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMGAMESERVERSTATS_INTERFACE_VERSION{u"SteamGameServerStats001"};

/// @brief Field STEAMGAMESERVER_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMGAMESERVER_INTERFACE_VERSION{u"SteamGameServer014"};

/// @brief Field STEAMGAMESERVER_QUERY_PORT_SHARED offset 0xffffffff size 0x2
static constexpr uint16_t  STEAMGAMESERVER_QUERY_PORT_SHARED{static_cast<uint16_t>(0xffffu)};

/// @brief Field STEAMHTMLSURFACE_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMHTMLSURFACE_INTERFACE_VERSION{u"STEAMHTMLSURFACE_INTERFACE_VERSION_005"};

/// @brief Field STEAMHTTP_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMHTTP_INTERFACE_VERSION{u"STEAMHTTP_INTERFACE_VERSION003"};

/// @brief Field STEAMINPUT_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMINPUT_INTERFACE_VERSION{u"SteamInput006"};

/// @brief Field STEAMINVENTORY_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMINVENTORY_INTERFACE_VERSION{u"STEAMINVENTORY_INTERFACE_V003"};

/// @brief Field STEAMMATCHMAKINGSERVERS_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMMATCHMAKINGSERVERS_INTERFACE_VERSION{u"SteamMatchMakingServers002"};

/// @brief Field STEAMMATCHMAKING_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMMATCHMAKING_INTERFACE_VERSION{u"SteamMatchMaking009"};

/// @brief Field STEAMMUSICREMOTE_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMMUSICREMOTE_INTERFACE_VERSION{u"STEAMMUSICREMOTE_INTERFACE_VERSION001"};

/// @brief Field STEAMMUSIC_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMMUSIC_INTERFACE_VERSION{u"STEAMMUSIC_INTERFACE_VERSION001"};

/// @brief Field STEAMNETWORKINGMESSAGES_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMNETWORKINGMESSAGES_INTERFACE_VERSION{u"SteamNetworkingMessages002"};

/// @brief Field STEAMNETWORKINGSOCKETS_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMNETWORKINGSOCKETS_INTERFACE_VERSION{u"SteamNetworkingSockets012"};

/// @brief Field STEAMNETWORKINGUTILS_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMNETWORKINGUTILS_INTERFACE_VERSION{u"SteamNetworkingUtils004"};

/// @brief Field STEAMNETWORKING_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMNETWORKING_INTERFACE_VERSION{u"SteamNetworking006"};

/// @brief Field STEAMPARENTALSETTINGS_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMPARENTALSETTINGS_INTERFACE_VERSION{u"STEAMPARENTALSETTINGS_INTERFACE_VERSION001"};

/// @brief Field STEAMPARTIES_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMPARTIES_INTERFACE_VERSION{u"SteamParties002"};

/// @brief Field STEAMREMOTEPLAY_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMREMOTEPLAY_INTERFACE_VERSION{u"STEAMREMOTEPLAY_INTERFACE_VERSION001"};

/// @brief Field STEAMREMOTESTORAGE_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMREMOTESTORAGE_INTERFACE_VERSION{u"STEAMREMOTESTORAGE_INTERFACE_VERSION016"};

/// @brief Field STEAMSCREENSHOTS_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMSCREENSHOTS_INTERFACE_VERSION{u"STEAMSCREENSHOTS_INTERFACE_VERSION003"};

/// @brief Field STEAMUGC_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMUGC_INTERFACE_VERSION{u"STEAMUGC_INTERFACE_VERSION016"};

/// @brief Field STEAMUSERSTATS_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMUSERSTATS_INTERFACE_VERSION{u"STEAMUSERSTATS_INTERFACE_VERSION012"};

/// @brief Field STEAMUSER_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMUSER_INTERFACE_VERSION{u"SteamUser021"};

/// @brief Field STEAMUTILS_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMUTILS_INTERFACE_VERSION{u"SteamUtils010"};

/// @brief Field STEAMVIDEO_INTERFACE_VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  STEAMVIDEO_INTERFACE_VERSION{u"STEAMVIDEO_INTERFACE_V002"};

/// @brief Field STEAM_INPUT_HANDLE_ALL_CONTROLLERS offset 0xffffffff size 0x8
static constexpr uint64_t  STEAM_INPUT_HANDLE_ALL_CONTROLLERS{static_cast<uint64_t>(0xffffffffffffffffu)};

/// @brief Field STEAM_INPUT_MAX_ACTIVE_LAYERS offset 0xffffffff size 0x4
static constexpr int32_t  STEAM_INPUT_MAX_ACTIVE_LAYERS{static_cast<int32_t>(0x10)};

/// @brief Field STEAM_INPUT_MAX_ANALOG_ACTIONS offset 0xffffffff size 0x4
static constexpr int32_t  STEAM_INPUT_MAX_ANALOG_ACTIONS{static_cast<int32_t>(0x10)};

/// @brief Field STEAM_INPUT_MAX_ANALOG_ACTION_DATA offset 0xffffffff size 0x4
static constexpr float_t  STEAM_INPUT_MAX_ANALOG_ACTION_DATA{static_cast<float_t>(1.0f)};

/// @brief Field STEAM_INPUT_MAX_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  STEAM_INPUT_MAX_COUNT{static_cast<int32_t>(0x10)};

/// @brief Field STEAM_INPUT_MAX_DIGITAL_ACTIONS offset 0xffffffff size 0x4
static constexpr int32_t  STEAM_INPUT_MAX_DIGITAL_ACTIONS{static_cast<int32_t>(0x80)};

/// @brief Field STEAM_INPUT_MAX_ORIGINS offset 0xffffffff size 0x4
static constexpr int32_t  STEAM_INPUT_MAX_ORIGINS{static_cast<int32_t>(0x8)};

/// @brief Field STEAM_INPUT_MIN_ANALOG_ACTION_DATA offset 0xffffffff size 0x4
static constexpr float_t  STEAM_INPUT_MIN_ANALOG_ACTION_DATA{static_cast<float_t>(-1.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16238};

/// @brief Field kNumUGCResultsPerPage offset 0xffffffff size 0x4
static constexpr int32_t  kNumUGCResultsPerPage{static_cast<int32_t>(0x32)};

/// @brief Field k_ISteamParentalSettingsCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_ISteamParentalSettingsCallbacks{static_cast<int32_t>(0x1388)};

/// @brief Field k_ScreenshotThumbWidth offset 0xffffffff size 0x4
static constexpr int32_t  k_ScreenshotThumbWidth{static_cast<int32_t>(0xc8)};

/// @brief Field k_SteamMusicNameMaxLength offset 0xffffffff size 0x4
static constexpr int32_t  k_SteamMusicNameMaxLength{static_cast<int32_t>(0xff)};

/// @brief Field k_SteamMusicPNGMaxLength offset 0xffffffff size 0x4
static constexpr int32_t  k_SteamMusicPNGMaxLength{static_cast<int32_t>(0xffff)};

/// @brief Field k_cEnumerateFollowersMax offset 0xffffffff size 0x4
static constexpr int32_t  k_cEnumerateFollowersMax{static_cast<int32_t>(0x32)};

/// @brief Field k_cFriendsGroupLimit offset 0xffffffff size 0x4
static constexpr int32_t  k_cFriendsGroupLimit{static_cast<int32_t>(0x64)};

/// @brief Field k_cLeaderboardDetailsMax offset 0xffffffff size 0x4
static constexpr int32_t  k_cLeaderboardDetailsMax{static_cast<int32_t>(0x40)};

/// @brief Field k_cbMaxGameServerGameData offset 0xffffffff size 0x4
static constexpr int32_t  k_cbMaxGameServerGameData{static_cast<int32_t>(0x800)};

/// @brief Field k_cbMaxGameServerGameDescription offset 0xffffffff size 0x4
static constexpr int32_t  k_cbMaxGameServerGameDescription{static_cast<int32_t>(0x40)};

/// @brief Field k_cbMaxGameServerGameDir offset 0xffffffff size 0x4
static constexpr int32_t  k_cbMaxGameServerGameDir{static_cast<int32_t>(0x20)};

/// @brief Field k_cbMaxGameServerMapName offset 0xffffffff size 0x4
static constexpr int32_t  k_cbMaxGameServerMapName{static_cast<int32_t>(0x20)};

/// @brief Field k_cbMaxGameServerName offset 0xffffffff size 0x4
static constexpr int32_t  k_cbMaxGameServerName{static_cast<int32_t>(0x40)};

/// @brief Field k_cbMaxGameServerTags offset 0xffffffff size 0x4
static constexpr int32_t  k_cbMaxGameServerTags{static_cast<int32_t>(0x80)};

/// @brief Field k_cbMaxSteamNetworkingSocketsMessageSizeSend offset 0xffffffff size 0x4
static constexpr int32_t  k_cbMaxSteamNetworkingSocketsMessageSizeSend{static_cast<int32_t>(0x80000)};

/// @brief Field k_cchDeveloperMetadataMax offset 0xffffffff size 0x4
static constexpr int32_t  k_cchDeveloperMetadataMax{static_cast<int32_t>(0x1388)};

/// @brief Field k_cchFilenameMax offset 0xffffffff size 0x4
static constexpr int32_t  k_cchFilenameMax{static_cast<int32_t>(0x104)};

/// @brief Field k_cchGameExtraInfoMax offset 0xffffffff size 0x4
static constexpr int32_t  k_cchGameExtraInfoMax{static_cast<int32_t>(0x40)};

/// @brief Field k_cchLeaderboardNameMax offset 0xffffffff size 0x4
static constexpr int32_t  k_cchLeaderboardNameMax{static_cast<int32_t>(0x80)};

/// @brief Field k_cchMaxFriendsGroupName offset 0xffffffff size 0x4
static constexpr int32_t  k_cchMaxFriendsGroupName{static_cast<int32_t>(0x40)};

/// @brief Field k_cchMaxRichPresenceKeyLength offset 0xffffffff size 0x4
static constexpr int32_t  k_cchMaxRichPresenceKeyLength{static_cast<int32_t>(0x40)};

/// @brief Field k_cchMaxRichPresenceKeys offset 0xffffffff size 0x4
static constexpr int32_t  k_cchMaxRichPresenceKeys{static_cast<int32_t>(0x1e)};

/// @brief Field k_cchMaxRichPresenceValueLength offset 0xffffffff size 0x4
static constexpr int32_t  k_cchMaxRichPresenceValueLength{static_cast<int32_t>(0x100)};

/// @brief Field k_cchMaxSteamNetworkingErrMsg offset 0xffffffff size 0x4
static constexpr int32_t  k_cchMaxSteamNetworkingErrMsg{static_cast<int32_t>(0x400)};

/// @brief Field k_cchMaxSteamNetworkingPingLocationString offset 0xffffffff size 0x4
static constexpr int32_t  k_cchMaxSteamNetworkingPingLocationString{static_cast<int32_t>(0x400)};

/// @brief Field k_cchPersonaNameMax offset 0xffffffff size 0x4
static constexpr int32_t  k_cchPersonaNameMax{static_cast<int32_t>(0x80)};

/// @brief Field k_cchPublishedDocumentChangeDescriptionMax offset 0xffffffff size 0x4
static constexpr int32_t  k_cchPublishedDocumentChangeDescriptionMax{static_cast<int32_t>(0x1f40)};

/// @brief Field k_cchPublishedDocumentDescriptionMax offset 0xffffffff size 0x4
static constexpr int32_t  k_cchPublishedDocumentDescriptionMax{static_cast<int32_t>(0x1f40)};

/// @brief Field k_cchPublishedDocumentTitleMax offset 0xffffffff size 0x4
static constexpr int32_t  k_cchPublishedDocumentTitleMax{static_cast<int32_t>(0x81)};

/// @brief Field k_cchPublishedFileURLMax offset 0xffffffff size 0x4
static constexpr int32_t  k_cchPublishedFileURLMax{static_cast<int32_t>(0x100)};

/// @brief Field k_cchStatNameMax offset 0xffffffff size 0x4
static constexpr int32_t  k_cchStatNameMax{static_cast<int32_t>(0x80)};

/// @brief Field k_cchSteamNetworkingMaxConnectionAppName offset 0xffffffff size 0x4
static constexpr int32_t  k_cchSteamNetworkingMaxConnectionAppName{static_cast<int32_t>(0x20)};

/// @brief Field k_cchSteamNetworkingMaxConnectionCloseReason offset 0xffffffff size 0x4
static constexpr int32_t  k_cchSteamNetworkingMaxConnectionCloseReason{static_cast<int32_t>(0x80)};

/// @brief Field k_cchSteamNetworkingMaxConnectionDescription offset 0xffffffff size 0x4
static constexpr int32_t  k_cchSteamNetworkingMaxConnectionDescription{static_cast<int32_t>(0x80)};

/// @brief Field k_cchTagListMax offset 0xffffffff size 0x4
static constexpr int32_t  k_cchTagListMax{static_cast<int32_t>(0x401)};

/// @brief Field k_cubAppProofOfPurchaseKeyMax offset 0xffffffff size 0x4
static constexpr int32_t  k_cubAppProofOfPurchaseKeyMax{static_cast<int32_t>(0xf0)};

/// @brief Field k_cubChatMetadataMax offset 0xffffffff size 0x4
static constexpr int32_t  k_cubChatMetadataMax{static_cast<int32_t>(0x2000)};

/// @brief Field k_cubUFSTagTypeMax offset 0xffffffff size 0x4
static constexpr int32_t  k_cubUFSTagTypeMax{static_cast<int32_t>(0xff)};

/// @brief Field k_cubUFSTagValueMax offset 0xffffffff size 0x4
static constexpr int32_t  k_cubUFSTagValueMax{static_cast<int32_t>(0xff)};

/// @brief Field k_cwchPersonaNameMax offset 0xffffffff size 0x4
static constexpr int32_t  k_cwchPersonaNameMax{static_cast<int32_t>(0x20)};

/// @brief Field k_iSteam2AsyncCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteam2AsyncCallbacks{static_cast<int32_t>(0x76c)};

/// @brief Field k_iSteamAppListCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamAppListCallbacks{static_cast<int32_t>(0xf3c)};

/// @brief Field k_iSteamAppsCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamAppsCallbacks{static_cast<int32_t>(0x3e8)};

/// @brief Field k_iSteamBillingCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamBillingCallbacks{static_cast<int32_t>(0x190)};

/// @brief Field k_iSteamChatCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamChatCallbacks{static_cast<int32_t>(0x170c)};

/// @brief Field k_iSteamContentServerCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamContentServerCallbacks{static_cast<int32_t>(0x258)};

/// @brief Field k_iSteamControllerCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamControllerCallbacks{static_cast<int32_t>(0xaf0)};

/// @brief Field k_iSteamFriendsCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamFriendsCallbacks{static_cast<int32_t>(0x12c)};

/// @brief Field k_iSteamGameCoordinatorCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamGameCoordinatorCallbacks{static_cast<int32_t>(0x6a4)};

/// @brief Field k_iSteamGameNotificationCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamGameNotificationCallbacks{static_cast<int32_t>(0x1130)};

/// @brief Field k_iSteamGameSearchCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamGameSearchCallbacks{static_cast<int32_t>(0x1450)};

/// @brief Field k_iSteamGameServerCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamGameServerCallbacks{static_cast<int32_t>(0xc8)};

/// @brief Field k_iSteamGameServerItemsCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamGameServerItemsCallbacks{static_cast<int32_t>(0x5dc)};

/// @brief Field k_iSteamGameServerStatsCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamGameServerStatsCallbacks{static_cast<int32_t>(0x708)};

/// @brief Field k_iSteamGameStatsCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamGameStatsCallbacks{static_cast<int32_t>(0x7d0)};

/// @brief Field k_iSteamHTMLSurfaceCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamHTMLSurfaceCallbacks{static_cast<int32_t>(0x1194)};

/// @brief Field k_iSteamHTTPCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamHTTPCallbacks{static_cast<int32_t>(0x834)};

/// @brief Field k_iSteamInventoryCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamInventoryCallbacks{static_cast<int32_t>(0x125c)};

/// @brief Field k_iSteamMatchmakingCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamMatchmakingCallbacks{static_cast<int32_t>(0x1f4)};

/// @brief Field k_iSteamMusicCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamMusicCallbacks{static_cast<int32_t>(0xfa0)};

/// @brief Field k_iSteamMusicRemoteCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamMusicRemoteCallbacks{static_cast<int32_t>(0x1004)};

/// @brief Field k_iSteamNetworkingCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamNetworkingCallbacks{static_cast<int32_t>(0x4b0)};

/// @brief Field k_iSteamNetworkingMessagesCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamNetworkingMessagesCallbacks{static_cast<int32_t>(0x4e2)};

/// @brief Field k_iSteamNetworkingSocketsCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamNetworkingSocketsCallbacks{static_cast<int32_t>(0x4c4)};

/// @brief Field k_iSteamNetworkingUtilsCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamNetworkingUtilsCallbacks{static_cast<int32_t>(0x500)};

/// @brief Field k_iSteamPartiesCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamPartiesCallbacks{static_cast<int32_t>(0x14b4)};

/// @brief Field k_iSteamRemotePlayCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamRemotePlayCallbacks{static_cast<int32_t>(0x1644)};

/// @brief Field k_iSteamRemoteStorageCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamRemoteStorageCallbacks{static_cast<int32_t>(0x514)};

/// @brief Field k_iSteamSTARCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamSTARCallbacks{static_cast<int32_t>(0x157c)};

/// @brief Field k_iSteamScreenshotsCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamScreenshotsCallbacks{static_cast<int32_t>(0x8fc)};

/// @brief Field k_iSteamStreamClientCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamStreamClientCallbacks{static_cast<int32_t>(0xdac)};

/// @brief Field k_iSteamStreamLauncherCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamStreamLauncherCallbacks{static_cast<int32_t>(0xa28)};

/// @brief Field k_iSteamUGCCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamUGCCallbacks{static_cast<int32_t>(0xd48)};

/// @brief Field k_iSteamUserCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamUserCallbacks{static_cast<int32_t>(0x64)};

/// @brief Field k_iSteamUserStatsCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamUserStatsCallbacks{static_cast<int32_t>(0x44c)};

/// @brief Field k_iSteamUtilsCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamUtilsCallbacks{static_cast<int32_t>(0x2bc)};

/// @brief Field k_iSteamVideoCallbacks offset 0xffffffff size 0x4
static constexpr int32_t  k_iSteamVideoCallbacks{static_cast<int32_t>(0x11f8)};

/// @brief Field k_nMaxLobbyKeyLength offset 0xffffffff size 0x1
static constexpr uint8_t  k_nMaxLobbyKeyLength{static_cast<uint8_t>(0xffu)};

/// @brief Field k_nMaxReturnPorts offset 0xffffffff size 0x4
static constexpr int32_t  k_nMaxReturnPorts{static_cast<int32_t>(0x8)};

/// @brief Field k_nScreenshotMaxTaggedPublishedFiles offset 0xffffffff size 0x4
static constexpr int32_t  k_nScreenshotMaxTaggedPublishedFiles{static_cast<int32_t>(0x20)};

/// @brief Field k_nScreenshotMaxTaggedUsers offset 0xffffffff size 0x4
static constexpr int32_t  k_nScreenshotMaxTaggedUsers{static_cast<int32_t>(0x20)};

/// @brief Field k_nSteamEncryptedAppTicketSymmetricKeyLen offset 0xffffffff size 0x4
static constexpr int32_t  k_nSteamEncryptedAppTicketSymmetricKeyLen{static_cast<int32_t>(0x20)};

/// @brief Field k_nSteamNetworkConnectionInfoFlags_DualWifi offset 0xffffffff size 0x4
static constexpr int32_t  k_nSteamNetworkConnectionInfoFlags_DualWifi{static_cast<int32_t>(0x20)};

/// @brief Field k_nSteamNetworkConnectionInfoFlags_Fast offset 0xffffffff size 0x4
static constexpr int32_t  k_nSteamNetworkConnectionInfoFlags_Fast{static_cast<int32_t>(0x8)};

/// @brief Field k_nSteamNetworkConnectionInfoFlags_LoopbackBuffers offset 0xffffffff size 0x4
static constexpr int32_t  k_nSteamNetworkConnectionInfoFlags_LoopbackBuffers{static_cast<int32_t>(0x4)};

/// @brief Field k_nSteamNetworkConnectionInfoFlags_Relayed offset 0xffffffff size 0x4
static constexpr int32_t  k_nSteamNetworkConnectionInfoFlags_Relayed{static_cast<int32_t>(0x10)};

/// @brief Field k_nSteamNetworkConnectionInfoFlags_Unauthenticated offset 0xffffffff size 0x4
static constexpr int32_t  k_nSteamNetworkConnectionInfoFlags_Unauthenticated{static_cast<int32_t>(0x1)};

/// @brief Field k_nSteamNetworkConnectionInfoFlags_Unencrypted offset 0xffffffff size 0x4
static constexpr int32_t  k_nSteamNetworkConnectionInfoFlags_Unencrypted{static_cast<int32_t>(0x2)};

/// @brief Field k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_All offset 0xffffffff size 0x4
static constexpr int32_t  k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_All{static_cast<int32_t>(0x7fffffff)};

/// @brief Field k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_Default offset 0xffffffff size 0x4
static constexpr int32_t  k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_Default{static_cast<int32_t>(0xffffffff)};

/// @brief Field k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_Disable offset 0xffffffff size 0x4
static constexpr int32_t  k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_Disable{static_cast<int32_t>(0x0)};

/// @brief Field k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_Private offset 0xffffffff size 0x4
static constexpr int32_t  k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_Private{static_cast<int32_t>(0x2)};

/// @brief Field k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_Public offset 0xffffffff size 0x4
static constexpr int32_t  k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_Public{static_cast<int32_t>(0x4)};

/// @brief Field k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_Relay offset 0xffffffff size 0x4
static constexpr int32_t  k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_Relay{static_cast<int32_t>(0x1)};

/// @brief Field k_nSteamNetworkingPing_Failed offset 0xffffffff size 0x4
static constexpr int32_t  k_nSteamNetworkingPing_Failed{static_cast<int32_t>(0xffffffff)};

/// @brief Field k_nSteamNetworkingPing_Unknown offset 0xffffffff size 0x4
static constexpr int32_t  k_nSteamNetworkingPing_Unknown{static_cast<int32_t>(0xfffffffe)};

/// @brief Field k_nSteamNetworkingSend_AutoRestartBrokenSession offset 0xffffffff size 0x4
static constexpr int32_t  k_nSteamNetworkingSend_AutoRestartBrokenSession{static_cast<int32_t>(0x20)};

/// @brief Field k_nSteamNetworkingSend_NoDelay offset 0xffffffff size 0x4
static constexpr int32_t  k_nSteamNetworkingSend_NoDelay{static_cast<int32_t>(0x4)};

/// @brief Field k_nSteamNetworkingSend_NoNagle offset 0xffffffff size 0x4
static constexpr int32_t  k_nSteamNetworkingSend_NoNagle{static_cast<int32_t>(0x1)};

/// @brief Field k_nSteamNetworkingSend_Reliable offset 0xffffffff size 0x4
static constexpr int32_t  k_nSteamNetworkingSend_Reliable{static_cast<int32_t>(0x8)};

/// @brief Field k_nSteamNetworkingSend_ReliableNoNagle offset 0xffffffff size 0x4
static constexpr int32_t  k_nSteamNetworkingSend_ReliableNoNagle{static_cast<int32_t>(0x9)};

/// @brief Field k_nSteamNetworkingSend_Unreliable offset 0xffffffff size 0x4
static constexpr int32_t  k_nSteamNetworkingSend_Unreliable{static_cast<int32_t>(0x0)};

/// @brief Field k_nSteamNetworkingSend_UnreliableNoDelay offset 0xffffffff size 0x4
static constexpr int32_t  k_nSteamNetworkingSend_UnreliableNoDelay{static_cast<int32_t>(0x5)};

/// @brief Field k_nSteamNetworkingSend_UnreliableNoNagle offset 0xffffffff size 0x4
static constexpr int32_t  k_nSteamNetworkingSend_UnreliableNoNagle{static_cast<int32_t>(0x1)};

/// @brief Field k_nSteamNetworkingSend_UseCurrentThread offset 0xffffffff size 0x4
static constexpr int32_t  k_nSteamNetworkingSend_UseCurrentThread{static_cast<int32_t>(0x10)};

/// @brief Field k_ulPartyBeaconIdInvalid offset 0xffffffff size 0x8
static constexpr uint64_t  k_ulPartyBeaconIdInvalid{static_cast<uint64_t>(0x0u)};

/// @brief Field k_unEnumeratePublishedFilesMaxResults offset 0xffffffff size 0x4
static constexpr int32_t  k_unEnumeratePublishedFilesMaxResults{static_cast<int32_t>(0x32)};

/// @brief Field k_unFavoriteFlagFavorite offset 0xffffffff size 0x4
static constexpr int32_t  k_unFavoriteFlagFavorite{static_cast<int32_t>(0x1)};

/// @brief Field k_unFavoriteFlagHistory offset 0xffffffff size 0x4
static constexpr int32_t  k_unFavoriteFlagHistory{static_cast<int32_t>(0x2)};

/// @brief Field k_unFavoriteFlagNone offset 0xffffffff size 0x4
static constexpr int32_t  k_unFavoriteFlagNone{static_cast<int32_t>(0x0)};

/// @brief Field k_unMaxCloudFileChunkSize offset 0xffffffff size 0x4
static constexpr int32_t  k_unMaxCloudFileChunkSize{static_cast<int32_t>(0x6400000)};

/// @brief Field k_unSteamAccountIDMask offset 0xffffffff size 0x4
static constexpr int32_t  k_unSteamAccountIDMask{static_cast<int32_t>(0xffffffff)};

/// @brief Field k_unSteamAccountInstanceMask offset 0xffffffff size 0x4
static constexpr int32_t  k_unSteamAccountInstanceMask{static_cast<int32_t>(0xfffff)};

/// @brief Field k_unSteamUserDefaultInstance offset 0xffffffff size 0x4
static constexpr int32_t  k_unSteamUserDefaultInstance{static_cast<int32_t>(0x1)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::Constants) == 0x10, "Size mismatch!");

} // namespace end def Steamworks

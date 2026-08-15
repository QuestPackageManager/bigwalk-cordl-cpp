#pragma once
// IWYU pragma private; include "Steamworks/CSteamAPIContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CSteamAPIContext)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Steamworks {
class CSteamAPIContext;
}
// Write type traits
MARK_REF_T(::Steamworks::CSteamAPIContext*);
DEFINE_IL2CPP_CLASS(::Steamworks::CSteamAPIContext*, "Steamworks", "CSteamAPIContext");
// Dependencies System.IntPtr, System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.CSteamAPIContext
class CORDL_TYPE CSteamAPIContext : public ::System::Object {
public:
// Declarations
/// @brief Field m_pController, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pController, put=setStaticF_m_pController)) ::System::IntPtr  m_pController;

/// @brief Field m_pSteamAppList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamAppList, put=setStaticF_m_pSteamAppList)) ::System::IntPtr  m_pSteamAppList;

/// @brief Field m_pSteamApps, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamApps, put=setStaticF_m_pSteamApps)) ::System::IntPtr  m_pSteamApps;

/// @brief Field m_pSteamClient, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamClient, put=setStaticF_m_pSteamClient)) ::System::IntPtr  m_pSteamClient;

/// @brief Field m_pSteamFriends, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamFriends, put=setStaticF_m_pSteamFriends)) ::System::IntPtr  m_pSteamFriends;

/// @brief Field m_pSteamGameSearch, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamGameSearch, put=setStaticF_m_pSteamGameSearch)) ::System::IntPtr  m_pSteamGameSearch;

/// @brief Field m_pSteamHTMLSurface, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamHTMLSurface, put=setStaticF_m_pSteamHTMLSurface)) ::System::IntPtr  m_pSteamHTMLSurface;

/// @brief Field m_pSteamHTTP, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamHTTP, put=setStaticF_m_pSteamHTTP)) ::System::IntPtr  m_pSteamHTTP;

/// @brief Field m_pSteamInput, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamInput, put=setStaticF_m_pSteamInput)) ::System::IntPtr  m_pSteamInput;

/// @brief Field m_pSteamInventory, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamInventory, put=setStaticF_m_pSteamInventory)) ::System::IntPtr  m_pSteamInventory;

/// @brief Field m_pSteamMatchmaking, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamMatchmaking, put=setStaticF_m_pSteamMatchmaking)) ::System::IntPtr  m_pSteamMatchmaking;

/// @brief Field m_pSteamMatchmakingServers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamMatchmakingServers, put=setStaticF_m_pSteamMatchmakingServers)) ::System::IntPtr  m_pSteamMatchmakingServers;

/// @brief Field m_pSteamMusic, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamMusic, put=setStaticF_m_pSteamMusic)) ::System::IntPtr  m_pSteamMusic;

/// @brief Field m_pSteamMusicRemote, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamMusicRemote, put=setStaticF_m_pSteamMusicRemote)) ::System::IntPtr  m_pSteamMusicRemote;

/// @brief Field m_pSteamNetworking, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamNetworking, put=setStaticF_m_pSteamNetworking)) ::System::IntPtr  m_pSteamNetworking;

/// @brief Field m_pSteamNetworkingMessages, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamNetworkingMessages, put=setStaticF_m_pSteamNetworkingMessages)) ::System::IntPtr  m_pSteamNetworkingMessages;

/// @brief Field m_pSteamNetworkingSockets, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamNetworkingSockets, put=setStaticF_m_pSteamNetworkingSockets)) ::System::IntPtr  m_pSteamNetworkingSockets;

/// @brief Field m_pSteamNetworkingUtils, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamNetworkingUtils, put=setStaticF_m_pSteamNetworkingUtils)) ::System::IntPtr  m_pSteamNetworkingUtils;

/// @brief Field m_pSteamParentalSettings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamParentalSettings, put=setStaticF_m_pSteamParentalSettings)) ::System::IntPtr  m_pSteamParentalSettings;

/// @brief Field m_pSteamParties, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamParties, put=setStaticF_m_pSteamParties)) ::System::IntPtr  m_pSteamParties;

/// @brief Field m_pSteamRemotePlay, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamRemotePlay, put=setStaticF_m_pSteamRemotePlay)) ::System::IntPtr  m_pSteamRemotePlay;

/// @brief Field m_pSteamRemoteStorage, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamRemoteStorage, put=setStaticF_m_pSteamRemoteStorage)) ::System::IntPtr  m_pSteamRemoteStorage;

/// @brief Field m_pSteamScreenshots, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamScreenshots, put=setStaticF_m_pSteamScreenshots)) ::System::IntPtr  m_pSteamScreenshots;

/// @brief Field m_pSteamUGC, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamUGC, put=setStaticF_m_pSteamUGC)) ::System::IntPtr  m_pSteamUGC;

/// @brief Field m_pSteamUser, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamUser, put=setStaticF_m_pSteamUser)) ::System::IntPtr  m_pSteamUser;

/// @brief Field m_pSteamUserStats, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamUserStats, put=setStaticF_m_pSteamUserStats)) ::System::IntPtr  m_pSteamUserStats;

/// @brief Field m_pSteamUtils, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamUtils, put=setStaticF_m_pSteamUtils)) ::System::IntPtr  m_pSteamUtils;

/// @brief Field m_pSteamVideo, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamVideo, put=setStaticF_m_pSteamVideo)) ::System::IntPtr  m_pSteamVideo;

/// @brief Method Clear, addr 0x18054b290, size 0x240, virtual false, abstract: false, final false
static inline void Clear() ;

/// @brief Method GetSteamAppList, addr 0x18054b4d0, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamAppList() ;

/// @brief Method GetSteamApps, addr 0x18054b4f0, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamApps() ;

/// @brief Method GetSteamClient, addr 0x18054b510, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamClient() ;

/// @brief Method GetSteamController, addr 0x18054b530, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamController() ;

/// @brief Method GetSteamFriends, addr 0x18054b550, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamFriends() ;

/// @brief Method GetSteamGameSearch, addr 0x18054b570, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamGameSearch() ;

/// @brief Method GetSteamHTMLSurface, addr 0x18054b590, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamHTMLSurface() ;

/// @brief Method GetSteamHTTP, addr 0x18054b5b0, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamHTTP() ;

/// @brief Method GetSteamInput, addr 0x18054b5d0, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamInput() ;

/// @brief Method GetSteamInventory, addr 0x18054b5f0, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamInventory() ;

/// @brief Method GetSteamMatchmaking, addr 0x18054b630, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamMatchmaking() ;

/// @brief Method GetSteamMatchmakingServers, addr 0x18054b610, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamMatchmakingServers() ;

/// @brief Method GetSteamMusic, addr 0x18054b670, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamMusic() ;

/// @brief Method GetSteamMusicRemote, addr 0x18054b650, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamMusicRemote() ;

/// @brief Method GetSteamNetworking, addr 0x18054b6f0, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamNetworking() ;

/// @brief Method GetSteamNetworkingMessages, addr 0x18054b690, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamNetworkingMessages() ;

/// @brief Method GetSteamNetworkingSockets, addr 0x18054b6b0, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamNetworkingSockets() ;

/// @brief Method GetSteamNetworkingUtils, addr 0x18054b6d0, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamNetworkingUtils() ;

/// @brief Method GetSteamParentalSettings, addr 0x18054b710, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamParentalSettings() ;

/// @brief Method GetSteamParties, addr 0x18054b730, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamParties() ;

/// @brief Method GetSteamRemotePlay, addr 0x18054b750, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamRemotePlay() ;

/// @brief Method GetSteamRemoteStorage, addr 0x18054b770, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamRemoteStorage() ;

/// @brief Method GetSteamScreenshots, addr 0x18054b790, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamScreenshots() ;

/// @brief Method GetSteamUGC, addr 0x18054b7b0, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamUGC() ;

/// @brief Method GetSteamUser, addr 0x18054b7f0, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamUser() ;

/// @brief Method GetSteamUserStats, addr 0x18054b7d0, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamUserStats() ;

/// @brief Method GetSteamUtils, addr 0x18054b810, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamUtils() ;

/// @brief Method GetSteamVideo, addr 0x18054b830, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamVideo() ;

/// @brief Method Init, addr 0x18054b850, size 0x9e0, virtual false, abstract: false, final false
static inline bool Init() ;

static inline ::System::IntPtr getStaticF_m_pController() ;

static inline ::System::IntPtr getStaticF_m_pSteamAppList() ;

static inline ::System::IntPtr getStaticF_m_pSteamApps() ;

static inline ::System::IntPtr getStaticF_m_pSteamClient() ;

static inline ::System::IntPtr getStaticF_m_pSteamFriends() ;

static inline ::System::IntPtr getStaticF_m_pSteamGameSearch() ;

static inline ::System::IntPtr getStaticF_m_pSteamHTMLSurface() ;

static inline ::System::IntPtr getStaticF_m_pSteamHTTP() ;

static inline ::System::IntPtr getStaticF_m_pSteamInput() ;

static inline ::System::IntPtr getStaticF_m_pSteamInventory() ;

static inline ::System::IntPtr getStaticF_m_pSteamMatchmaking() ;

static inline ::System::IntPtr getStaticF_m_pSteamMatchmakingServers() ;

static inline ::System::IntPtr getStaticF_m_pSteamMusic() ;

static inline ::System::IntPtr getStaticF_m_pSteamMusicRemote() ;

static inline ::System::IntPtr getStaticF_m_pSteamNetworking() ;

static inline ::System::IntPtr getStaticF_m_pSteamNetworkingMessages() ;

static inline ::System::IntPtr getStaticF_m_pSteamNetworkingSockets() ;

static inline ::System::IntPtr getStaticF_m_pSteamNetworkingUtils() ;

static inline ::System::IntPtr getStaticF_m_pSteamParentalSettings() ;

static inline ::System::IntPtr getStaticF_m_pSteamParties() ;

static inline ::System::IntPtr getStaticF_m_pSteamRemotePlay() ;

static inline ::System::IntPtr getStaticF_m_pSteamRemoteStorage() ;

static inline ::System::IntPtr getStaticF_m_pSteamScreenshots() ;

static inline ::System::IntPtr getStaticF_m_pSteamUGC() ;

static inline ::System::IntPtr getStaticF_m_pSteamUser() ;

static inline ::System::IntPtr getStaticF_m_pSteamUserStats() ;

static inline ::System::IntPtr getStaticF_m_pSteamUtils() ;

static inline ::System::IntPtr getStaticF_m_pSteamVideo() ;

static inline void setStaticF_m_pController(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamAppList(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamApps(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamClient(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamFriends(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamGameSearch(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamHTMLSurface(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamHTTP(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamInput(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamInventory(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamMatchmaking(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamMatchmakingServers(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamMusic(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamMusicRemote(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamNetworking(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamNetworkingMessages(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamNetworkingSockets(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamNetworkingUtils(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamParentalSettings(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamParties(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamRemotePlay(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamRemoteStorage(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamScreenshots(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamUGC(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamUser(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamUserStats(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamUtils(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamVideo(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CSteamAPIContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CSteamAPIContext", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CSteamAPIContext(CSteamAPIContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CSteamAPIContext", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CSteamAPIContext(CSteamAPIContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16022};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::CSteamAPIContext) == 0x10, "Size mismatch!");

} // namespace end def Steamworks

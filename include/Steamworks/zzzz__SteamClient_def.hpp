#pragma once
// IWYU pragma private; include "Steamworks/SteamClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamClient)
namespace Steamworks {
struct EAccountType;
}
namespace Steamworks {
struct HSteamPipe;
}
namespace Steamworks {
struct HSteamUser;
}
namespace Steamworks {
class SteamAPIWarningMessageHook_t;
}
namespace Steamworks {
struct SteamIPAddress_t;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Steamworks {
class SteamClient;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamClient*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamClient*, "Steamworks", "SteamClient");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamClient
class CORDL_TYPE SteamClient : public ::System::Object {
public:
// Declarations
/// @brief Method BReleaseSteamPipe, addr 0x180584fb0, size 0x60, virtual false, abstract: false, final false
static inline bool BReleaseSteamPipe(::Steamworks::HSteamPipe  hSteamPipe) ;

/// @brief Method BShutdownIfAllPipesClosed, addr 0x180585010, size 0x60, virtual false, abstract: false, final false
static inline bool BShutdownIfAllPipesClosed() ;

/// @brief Method ConnectToGlobalUser, addr 0x180585070, size 0x70, virtual false, abstract: false, final false
static inline ::Steamworks::HSteamUser ConnectToGlobalUser(::Steamworks::HSteamPipe  hSteamPipe) ;

/// @brief Method CreateLocalUser, addr 0x1805850e0, size 0x80, virtual false, abstract: false, final false
static inline ::Steamworks::HSteamUser CreateLocalUser(::by_ref<::Steamworks::HSteamPipe>  phSteamPipe, ::Steamworks::EAccountType  eAccountType) ;

/// @brief Method CreateSteamPipe, addr 0x180585160, size 0x60, virtual false, abstract: false, final false
static inline ::Steamworks::HSteamPipe CreateSteamPipe() ;

/// @brief Method GetIPCCallCount, addr 0x1805851c0, size 0x60, virtual false, abstract: false, final false
static inline uint32_t GetIPCCallCount() ;

/// @brief Method GetISteamAppList, addr 0x180585220, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamAppList(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamApps, addr 0x180585320, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamApps(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamController, addr 0x180585420, size 0x130, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamController(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamFriends, addr 0x180585550, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamFriends(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamGameSearch, addr 0x180585650, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamGameSearch(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamGameServer, addr 0x180585880, size 0x130, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamGameServer(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamGameServerStats, addr 0x180585750, size 0x130, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamGameServerStats(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamGenericInterface, addr 0x1805859b0, size 0x130, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamGenericInterface(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamHTMLSurface, addr 0x180585ae0, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamHTMLSurface(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamHTTP, addr 0x180585be0, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamHTTP(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamInput, addr 0x180585ce0, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamInput(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamInventory, addr 0x180585de0, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamInventory(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamMatchmaking, addr 0x180585fe0, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamMatchmaking(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamMatchmakingServers, addr 0x180585ee0, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamMatchmakingServers(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamMusic, addr 0x1805861e0, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamMusic(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamMusicRemote, addr 0x1805860e0, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamMusicRemote(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamNetworking, addr 0x1805862e0, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamNetworking(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamParentalSettings, addr 0x1805863e0, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamParentalSettings(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamParties, addr 0x1805864e0, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamParties(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamRemotePlay, addr 0x1805865e0, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamRemotePlay(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamRemoteStorage, addr 0x1805866e0, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamRemoteStorage(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamScreenshots, addr 0x1805867e0, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamScreenshots(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamUGC, addr 0x1805868e0, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamUGC(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamUser, addr 0x180586ae0, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamUser(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamUserStats, addr 0x1805869e0, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamUserStats(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamUtils, addr 0x180586be0, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamUtils(::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamVideo, addr 0x180586cd0, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamVideo(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method ReleaseUser, addr 0x180586dd0, size 0x70, virtual false, abstract: false, final false
static inline void ReleaseUser(::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::HSteamUser  hUser) ;

/// @brief Method SetLocalIPBinding, addr 0x180586e40, size 0x70, virtual false, abstract: false, final false
static inline void SetLocalIPBinding(::by_ref<::Steamworks::SteamIPAddress_t>  unIP, uint16_t  usPort) ;

/// @brief Method SetWarningMessageHook, addr 0x180586eb0, size 0x60, virtual false, abstract: false, final false
static inline void SetWarningMessageHook(::Steamworks::SteamAPIWarningMessageHook_t*  pFunction) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamClient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamClient(SteamClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamClient(SteamClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16362};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamClient) == 0x10, "Size mismatch!");

} // namespace end def Steamworks

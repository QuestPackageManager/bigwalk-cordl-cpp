#pragma once
// IWYU pragma private; include "Steamworks/SteamGameServerClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamGameServerClient)
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
class SteamGameServerClient;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamGameServerClient*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamGameServerClient*, "Steamworks", "SteamGameServerClient");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamGameServerClient
class CORDL_TYPE SteamGameServerClient : public ::System::Object {
public:
// Declarations
/// @brief Method BReleaseSteamPipe, addr 0x18058be60, size 0x60, virtual false, abstract: false, final false
static inline bool BReleaseSteamPipe(::Steamworks::HSteamPipe  hSteamPipe) ;

/// @brief Method BShutdownIfAllPipesClosed, addr 0x18058bec0, size 0x60, virtual false, abstract: false, final false
static inline bool BShutdownIfAllPipesClosed() ;

/// @brief Method ConnectToGlobalUser, addr 0x18058bf20, size 0x70, virtual false, abstract: false, final false
static inline ::Steamworks::HSteamUser ConnectToGlobalUser(::Steamworks::HSteamPipe  hSteamPipe) ;

/// @brief Method CreateLocalUser, addr 0x18058bf90, size 0x80, virtual false, abstract: false, final false
static inline ::Steamworks::HSteamUser CreateLocalUser(::by_ref<::Steamworks::HSteamPipe>  phSteamPipe, ::Steamworks::EAccountType  eAccountType) ;

/// @brief Method CreateSteamPipe, addr 0x18058c010, size 0x60, virtual false, abstract: false, final false
static inline ::Steamworks::HSteamPipe CreateSteamPipe() ;

/// @brief Method GetIPCCallCount, addr 0x18058c070, size 0x60, virtual false, abstract: false, final false
static inline uint32_t GetIPCCallCount() ;

/// @brief Method GetISteamAppList, addr 0x18058c0d0, size 0x130, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamAppList(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamApps, addr 0x18058c200, size 0x130, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamApps(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamController, addr 0x18058c330, size 0x130, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamController(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamFriends, addr 0x18058c460, size 0x130, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamFriends(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamGameSearch, addr 0x18058c590, size 0x130, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamGameSearch(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamGameServer, addr 0x18058c7c0, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamGameServer(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamGameServerStats, addr 0x18058c6c0, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamGameServerStats(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamGenericInterface, addr 0x18058c8c0, size 0x130, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamGenericInterface(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamHTMLSurface, addr 0x18058c9f0, size 0x130, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamHTMLSurface(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamHTTP, addr 0x18058cb20, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamHTTP(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamInput, addr 0x18058cc20, size 0x130, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamInput(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamInventory, addr 0x18058cd50, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamInventory(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamMatchmaking, addr 0x18058cf80, size 0x130, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamMatchmaking(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamMatchmakingServers, addr 0x18058ce50, size 0x130, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamMatchmakingServers(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamMusic, addr 0x18058d1e0, size 0x130, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamMusic(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamMusicRemote, addr 0x18058d0b0, size 0x130, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamMusicRemote(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamNetworking, addr 0x18058d310, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamNetworking(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamParentalSettings, addr 0x18058d410, size 0x130, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamParentalSettings(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamParties, addr 0x18058d540, size 0x130, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamParties(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamRemotePlay, addr 0x18058d670, size 0x130, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamRemotePlay(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamRemoteStorage, addr 0x18058d7a0, size 0x130, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamRemoteStorage(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamScreenshots, addr 0x18058d8d0, size 0x130, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamScreenshots(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamUGC, addr 0x18058da00, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamUGC(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamUser, addr 0x18058dc30, size 0x130, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamUser(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamUserStats, addr 0x18058db00, size 0x130, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamUserStats(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamUtils, addr 0x18058dd60, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamUtils(::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method GetISteamVideo, addr 0x18058de50, size 0x130, virtual false, abstract: false, final false
static inline ::System::IntPtr GetISteamVideo(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion) ;

/// @brief Method ReleaseUser, addr 0x18058df80, size 0x70, virtual false, abstract: false, final false
static inline void ReleaseUser(::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::HSteamUser  hUser) ;

/// @brief Method SetLocalIPBinding, addr 0x18058dff0, size 0x70, virtual false, abstract: false, final false
static inline void SetLocalIPBinding(::by_ref<::Steamworks::SteamIPAddress_t>  unIP, uint16_t  usPort) ;

/// @brief Method SetWarningMessageHook, addr 0x18058e060, size 0x60, virtual false, abstract: false, final false
static inline void SetWarningMessageHook(::Steamworks::SteamAPIWarningMessageHook_t*  pFunction) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamGameServerClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamGameServerClient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamGameServerClient(SteamGameServerClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamGameServerClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamGameServerClient(SteamGameServerClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16365};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamGameServerClient) == 0x10, "Size mismatch!");

} // namespace end def Steamworks

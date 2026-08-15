#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/PlatformInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformInterface)
namespace Epic::OnlineServices::Achievements {
class AchievementsInterface;
}
namespace Epic::OnlineServices::AntiCheatClient {
class AntiCheatClientInterface;
}
namespace Epic::OnlineServices::AntiCheatServer {
class AntiCheatServerInterface;
}
namespace Epic::OnlineServices::Auth {
class AuthInterface;
}
namespace Epic::OnlineServices::Connect {
class ConnectInterface;
}
namespace Epic::OnlineServices::CustomInvites {
class CustomInvitesInterface;
}
namespace Epic::OnlineServices::Ecom {
class EcomInterface;
}
namespace Epic::OnlineServices::Friends {
class FriendsInterface;
}
namespace Epic::OnlineServices::IntegratedPlatform {
class IntegratedPlatformInterface;
}
namespace Epic::OnlineServices::KWS {
class KWSInterface;
}
namespace Epic::OnlineServices::Leaderboards {
class LeaderboardsInterface;
}
namespace Epic::OnlineServices::Lobby {
class LobbyInterface;
}
namespace Epic::OnlineServices::Metrics {
class MetricsInterface;
}
namespace Epic::OnlineServices::Mods {
class ModsInterface;
}
namespace Epic::OnlineServices::P2P {
class P2PInterface;
}
namespace Epic::OnlineServices::Platform {
struct ApplicationStatus;
}
namespace Epic::OnlineServices::Platform {
struct DesktopCrossplayStatusInfo;
}
namespace Epic::OnlineServices::Platform {
struct GetDesktopCrossplayStatusOptions;
}
namespace Epic::OnlineServices::Platform {
struct InitializeOptions;
}
namespace Epic::OnlineServices::Platform {
struct NetworkStatus;
}
namespace Epic::OnlineServices::Platform {
struct Options;
}
namespace Epic::OnlineServices::Platform {
struct WindowsOptions;
}
namespace Epic::OnlineServices::PlayerDataStorage {
class PlayerDataStorageInterface;
}
namespace Epic::OnlineServices::Presence {
class PresenceInterface;
}
namespace Epic::OnlineServices::ProgressionSnapshot {
class ProgressionSnapshotInterface;
}
namespace Epic::OnlineServices::RTCAdmin {
class RTCAdminInterface;
}
namespace Epic::OnlineServices::RTC {
class RTCInterface;
}
namespace Epic::OnlineServices::Reports {
class ReportsInterface;
}
namespace Epic::OnlineServices::Sanctions {
class SanctionsInterface;
}
namespace Epic::OnlineServices::Sessions {
class SessionsInterface;
}
namespace Epic::OnlineServices::Stats {
class StatsInterface;
}
namespace Epic::OnlineServices::TitleStorage {
class TitleStorageInterface;
}
namespace Epic::OnlineServices::UI {
class UIInterface;
}
namespace Epic::OnlineServices::UserInfo {
class UserInfoInterface;
}
namespace Epic::OnlineServices {
class EpicAccountId;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::Platform {
class PlatformInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Platform::PlatformInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Platform::PlatformInterface*, "Epic.OnlineServices.Platform", "PlatformInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::Platform {
// Is value type: false
// CS Name: Epic.OnlineServices.Platform.PlatformInterface
class CORDL_TYPE PlatformInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Field CHECKFORLAUNCHERANDRESTART_ENV_VAR, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CHECKFORLAUNCHERANDRESTART_ENV_VAR, put=setStaticF_CHECKFORLAUNCHERANDRESTART_ENV_VAR)) ::Epic::OnlineServices::Utf8String*  CHECKFORLAUNCHERANDRESTART_ENV_VAR;

/// @brief Method CheckForLauncherAndRestart, addr 0x1804fc4e0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CheckForLauncherAndRestart() ;

/// @brief Method Create, addr 0x1804fc4f0, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Platform::PlatformInterface* Create(::by_ref<::Epic::OnlineServices::Platform::Options>  options) ;

/// @brief Method Create, addr 0x1804fc580, size 0x90, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Platform::PlatformInterface* Create(::by_ref<::Epic::OnlineServices::Platform::WindowsOptions>  options) ;

/// @brief Method GetAchievementsInterface, addr 0x1804fc610, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Achievements::AchievementsInterface* GetAchievementsInterface() ;

/// @brief Method GetActiveCountryCode, addr 0x1804fc650, size 0xa0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result GetActiveCountryCode(::Epic::OnlineServices::EpicAccountId*  localUserId, ::by_ref<::Epic::OnlineServices::Utf8String*>  outBuffer) ;

/// @brief Method GetActiveLocaleCode, addr 0x1804fc6f0, size 0xa0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result GetActiveLocaleCode(::Epic::OnlineServices::EpicAccountId*  localUserId, ::by_ref<::Epic::OnlineServices::Utf8String*>  outBuffer) ;

/// @brief Method GetAntiCheatClientInterface, addr 0x1804fc790, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface* GetAntiCheatClientInterface() ;

/// @brief Method GetAntiCheatServerInterface, addr 0x1804fc7d0, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface* GetAntiCheatServerInterface() ;

/// @brief Method GetApplicationStatus, addr 0x1804fc810, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Platform::ApplicationStatus GetApplicationStatus() ;

/// @brief Method GetAuthInterface, addr 0x1804fc820, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Auth::AuthInterface* GetAuthInterface() ;

/// @brief Method GetConnectInterface, addr 0x1804fc860, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Connect::ConnectInterface* GetConnectInterface() ;

/// @brief Method GetCustomInvitesInterface, addr 0x1804fc8a0, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface* GetCustomInvitesInterface() ;

/// @brief Method GetDesktopCrossplayStatus, addr 0x1804fc8e0, size 0x60, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result GetDesktopCrossplayStatus(::by_ref<::Epic::OnlineServices::Platform::GetDesktopCrossplayStatusOptions>  options, ::by_ref<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>  outDesktopCrossplayStatusInfo) ;

/// @brief Method GetEcomInterface, addr 0x1804fc940, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Ecom::EcomInterface* GetEcomInterface() ;

/// @brief Method GetFriendsInterface, addr 0x1804fc980, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Friends::FriendsInterface* GetFriendsInterface() ;

/// @brief Method GetIntegratedPlatformInterface, addr 0x1804fc9c0, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface* GetIntegratedPlatformInterface() ;

/// @brief Method GetKWSInterface, addr 0x1804fca00, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::KWS::KWSInterface* GetKWSInterface() ;

/// @brief Method GetLeaderboardsInterface, addr 0x1804fca40, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Leaderboards::LeaderboardsInterface* GetLeaderboardsInterface() ;

/// @brief Method GetLobbyInterface, addr 0x1804fca80, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Lobby::LobbyInterface* GetLobbyInterface() ;

/// @brief Method GetMetricsInterface, addr 0x1804fcac0, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Metrics::MetricsInterface* GetMetricsInterface() ;

/// @brief Method GetModsInterface, addr 0x1804fcb00, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Mods::ModsInterface* GetModsInterface() ;

/// @brief Method GetNetworkStatus, addr 0x1804fcb40, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Platform::NetworkStatus GetNetworkStatus() ;

/// @brief Method GetOverrideCountryCode, addr 0x1804fcb50, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result GetOverrideCountryCode(::by_ref<::Epic::OnlineServices::Utf8String*>  outBuffer) ;

/// @brief Method GetOverrideLocaleCode, addr 0x1804fcbd0, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result GetOverrideLocaleCode(::by_ref<::Epic::OnlineServices::Utf8String*>  outBuffer) ;

/// @brief Method GetP2PInterface, addr 0x1804fcc50, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::P2P::P2PInterface* GetP2PInterface() ;

/// @brief Method GetPlayerDataStorageInterface, addr 0x1804fcc90, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface* GetPlayerDataStorageInterface() ;

/// @brief Method GetPresenceInterface, addr 0x1804fccd0, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Presence::PresenceInterface* GetPresenceInterface() ;

/// @brief Method GetProgressionSnapshotInterface, addr 0x1804fcd10, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface* GetProgressionSnapshotInterface() ;

/// @brief Method GetRTCAdminInterface, addr 0x1804fcd50, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::RTCAdmin::RTCAdminInterface* GetRTCAdminInterface() ;

/// @brief Method GetRTCInterface, addr 0x1804fcd90, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::RTC::RTCInterface* GetRTCInterface() ;

/// @brief Method GetReportsInterface, addr 0x1804fcdd0, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Reports::ReportsInterface* GetReportsInterface() ;

/// @brief Method GetSanctionsInterface, addr 0x1804fce10, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Sanctions::SanctionsInterface* GetSanctionsInterface() ;

/// @brief Method GetSessionsInterface, addr 0x1804fce50, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Sessions::SessionsInterface* GetSessionsInterface() ;

/// @brief Method GetStatsInterface, addr 0x1804fce90, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Stats::StatsInterface* GetStatsInterface() ;

/// @brief Method GetTitleStorageInterface, addr 0x1804fced0, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::TitleStorage::TitleStorageInterface* GetTitleStorageInterface() ;

/// @brief Method GetUIInterface, addr 0x1804fcf10, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::UI::UIInterface* GetUIInterface() ;

/// @brief Method GetUserInfoInterface, addr 0x1804fcf50, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::UserInfo::UserInfoInterface* GetUserInfoInterface() ;

/// @brief Method Initialize, addr 0x1804fcf90, size 0x60, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result Initialize(::by_ref<::Epic::OnlineServices::Platform::InitializeOptions>  options) ;

static inline ::Epic::OnlineServices::Platform::PlatformInterface* New_ctor() ;

static inline ::Epic::OnlineServices::Platform::PlatformInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method Release, addr 0x1804fcff0, size 0x10, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method SetApplicationStatus, addr 0x1804fd000, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetApplicationStatus(::Epic::OnlineServices::Platform::ApplicationStatus  newStatus) ;

/// @brief Method SetNetworkStatus, addr 0x1804fd010, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetNetworkStatus(::Epic::OnlineServices::Platform::NetworkStatus  newStatus) ;

/// @brief Method SetOverrideCountryCode, addr 0x1804fd020, size 0x50, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetOverrideCountryCode(::Epic::OnlineServices::Utf8String*  newCountryCode) ;

/// @brief Method SetOverrideLocaleCode, addr 0x1804fd070, size 0x50, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetOverrideLocaleCode(::Epic::OnlineServices::Utf8String*  newLocaleCode) ;

/// @brief Method Shutdown, addr 0x1804fd0c0, size 0x10, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Result Shutdown() ;

/// @brief Method Tick, addr 0x1804fd0d0, size 0x10, virtual false, abstract: false, final false
inline void Tick() ;

/// @brief Method ToString, addr 0x1804fd110, size 0x30, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Utf8String* ToString(::Epic::OnlineServices::Platform::ApplicationStatus  applicationStatus) ;

/// @brief Method ToString, addr 0x1804fd0e0, size 0x30, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Utf8String* ToString(::Epic::OnlineServices::Platform::NetworkStatus  networkStatus) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

static inline ::Epic::OnlineServices::Utf8String* getStaticF_CHECKFORLAUNCHERANDRESTART_ENV_VAR() ;

static inline void setStaticF_CHECKFORLAUNCHERANDRESTART_ENV_VAR(::Epic::OnlineServices::Utf8String*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformInterface(PlatformInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformInterface(PlatformInterface const& ) = delete;

/// @brief Field CLIENTCREDENTIALS_CLIENTID_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  CLIENTCREDENTIALS_CLIENTID_MAX_LENGTH{static_cast<int32_t>(0x40)};

/// @brief Field CLIENTCREDENTIALS_CLIENTSECRET_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  CLIENTCREDENTIALS_CLIENTSECRET_MAX_LENGTH{static_cast<int32_t>(0x40)};

/// @brief Field COUNTRYCODE_MAX_BUFFER_LEN offset 0xffffffff size 0x4
static constexpr int32_t  COUNTRYCODE_MAX_BUFFER_LEN{static_cast<int32_t>(0x5)};

/// @brief Field COUNTRYCODE_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  COUNTRYCODE_MAX_LENGTH{static_cast<int32_t>(0x4)};

/// @brief Field GETDESKTOPCROSSPLAYSTATUS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETDESKTOPCROSSPLAYSTATUS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field INITIALIZEOPTIONS_PRODUCTNAME_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  INITIALIZEOPTIONS_PRODUCTNAME_MAX_LENGTH{static_cast<int32_t>(0x40)};

/// @brief Field INITIALIZEOPTIONS_PRODUCTVERSION_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  INITIALIZEOPTIONS_PRODUCTVERSION_MAX_LENGTH{static_cast<int32_t>(0x40)};

/// @brief Field INITIALIZE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  INITIALIZE_API_LATEST{static_cast<int32_t>(0x5)};

/// @brief Field INITIALIZE_THREADAFFINITY_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  INITIALIZE_THREADAFFINITY_API_LATEST{static_cast<int32_t>(0x4)};

/// @brief Field LOCALECODE_MAX_BUFFER_LEN offset 0xffffffff size 0x4
static constexpr int32_t  LOCALECODE_MAX_BUFFER_LEN{static_cast<int32_t>(0xa)};

/// @brief Field LOCALECODE_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  LOCALECODE_MAX_LENGTH{static_cast<int32_t>(0x9)};

/// @brief Field OPTIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  OPTIONS_API_LATEST{static_cast<int32_t>(0xf)};

/// @brief Field OPTIONS_DEPLOYMENTID_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  OPTIONS_DEPLOYMENTID_MAX_LENGTH{static_cast<int32_t>(0x40)};

/// @brief Field OPTIONS_ENCRYPTIONKEY_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  OPTIONS_ENCRYPTIONKEY_LENGTH{static_cast<int32_t>(0x40)};

/// @brief Field OPTIONS_PRODUCTID_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  OPTIONS_PRODUCTID_MAX_LENGTH{static_cast<int32_t>(0x40)};

/// @brief Field OPTIONS_SANDBOXID_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  OPTIONS_SANDBOXID_MAX_LENGTH{static_cast<int32_t>(0x40)};

/// @brief Field RTCOPTIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  RTCOPTIONS_API_LATEST{static_cast<int32_t>(0x3)};

/// @brief Field WINDOWS_RTCOPTIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  WINDOWS_RTCOPTIONS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8358};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Platform::PlatformInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Platform

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/PlatformInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/Platform/zzzz__PlatformInterface_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__AchievementsInterface_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__AntiCheatClientInterface_def.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__AntiCheatServerInterface_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__AuthInterface_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__ConnectInterface_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__CustomInvitesInterface_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__EcomInterface_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__FriendsInterface_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__IntegratedPlatformInterface_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__KWSInterface_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__LeaderboardsInterface_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyInterface_def.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__MetricsInterface_def.hpp"
#include "Epic/OnlineServices/Mods/zzzz__ModsInterface_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__P2PInterface_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__ApplicationStatus_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__DesktopCrossplayStatusInfo_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__GetDesktopCrossplayStatusOptions_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__InitializeOptions_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__NetworkStatus_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__Options_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__WindowsOptions_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__PlayerDataStorageInterface_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceInterface_def.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__ProgressionSnapshotInterface_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__RTCInterface_def.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__RTCAdminInterface_def.hpp"
#include "Epic/OnlineServices/Reports/zzzz__ReportsInterface_def.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__SanctionsInterface_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionsInterface_def.hpp"
#include "Epic/OnlineServices/Stats/zzzz__StatsInterface_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__TitleStorageInterface_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__UIInterface_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__UserInfoInterface_def.hpp"
#include "Epic/OnlineServices/zzzz__EpicAccountId_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::PlatformInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::Platform::PlatformInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (*)(::Epic::OnlineServices::Platform::ApplicationStatus)>(&::Epic::OnlineServices::Platform::PlatformInterface::ToString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804fd110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"ToString", {}, {::i2c::type_of<::Epic::OnlineServices::Platform::ApplicationStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (*)(::Epic::OnlineServices::Platform::NetworkStatus)>(&::Epic::OnlineServices::Platform::PlatformInterface::ToString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804fd0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"ToString", {}, {::i2c::type_of<::Epic::OnlineServices::Platform::NetworkStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (*)(::by_ref<::Epic::OnlineServices::Platform::InitializeOptions>)>(&::Epic::OnlineServices::Platform::PlatformInterface::Initialize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804fcf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"Initialize", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::InitializeOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.CheckForLauncherAndRestart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::CheckForLauncherAndRestart)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804fc4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"CheckForLauncherAndRestart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Platform::PlatformInterface* (*)(::by_ref<::Epic::OnlineServices::Platform::Options>)>(&::Epic::OnlineServices::Platform::PlatformInterface::Create)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804fc4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"Create", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::Options>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetAchievementsInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Achievements::AchievementsInterface* (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetAchievementsInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804fc610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetAchievementsInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetActiveCountryCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Platform::PlatformInterface::*)(::Epic::OnlineServices::EpicAccountId*, ::by_ref<::Epic::OnlineServices::Utf8String*>)>(&::Epic::OnlineServices::Platform::PlatformInterface::GetActiveCountryCode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804fc650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetActiveCountryCode", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetActiveLocaleCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Platform::PlatformInterface::*)(::Epic::OnlineServices::EpicAccountId*, ::by_ref<::Epic::OnlineServices::Utf8String*>)>(&::Epic::OnlineServices::Platform::PlatformInterface::GetActiveLocaleCode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804fc6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetActiveLocaleCode", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetAntiCheatClientInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface* (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetAntiCheatClientInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804fc790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetAntiCheatClientInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetAntiCheatServerInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface* (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetAntiCheatServerInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804fc7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetAntiCheatServerInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetApplicationStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Platform::ApplicationStatus (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetApplicationStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804fc810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetApplicationStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetAuthInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Auth::AuthInterface* (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetAuthInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804fc820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetAuthInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetConnectInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Connect::ConnectInterface* (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetConnectInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804fc860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetConnectInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetCustomInvitesInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface* (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetCustomInvitesInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804fc8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetCustomInvitesInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetDesktopCrossplayStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Platform::PlatformInterface::*)(::by_ref<::Epic::OnlineServices::Platform::GetDesktopCrossplayStatusOptions>, ::by_ref<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>)>(&::Epic::OnlineServices::Platform::PlatformInterface::GetDesktopCrossplayStatus)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804fc8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetDesktopCrossplayStatus", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::GetDesktopCrossplayStatusOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetEcomInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Ecom::EcomInterface* (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetEcomInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804fc940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetEcomInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetFriendsInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Friends::FriendsInterface* (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetFriendsInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804fc980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetFriendsInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetIntegratedPlatformInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface* (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetIntegratedPlatformInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804fc9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetIntegratedPlatformInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetKWSInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::KWS::KWSInterface* (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetKWSInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804fca00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetKWSInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetLeaderboardsInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface* (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetLeaderboardsInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804fca40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetLeaderboardsInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetLobbyInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::LobbyInterface* (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetLobbyInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804fca80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetLobbyInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetMetricsInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Metrics::MetricsInterface* (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetMetricsInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804fcac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetMetricsInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetModsInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Mods::ModsInterface* (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetModsInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804fcb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetModsInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetNetworkStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Platform::NetworkStatus (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetNetworkStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804fcb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetNetworkStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetOverrideCountryCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Platform::PlatformInterface::*)(::by_ref<::Epic::OnlineServices::Utf8String*>)>(&::Epic::OnlineServices::Platform::PlatformInterface::GetOverrideCountryCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804fcb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetOverrideCountryCode", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetOverrideLocaleCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Platform::PlatformInterface::*)(::by_ref<::Epic::OnlineServices::Utf8String*>)>(&::Epic::OnlineServices::Platform::PlatformInterface::GetOverrideLocaleCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804fcbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetOverrideLocaleCode", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetP2PInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::P2P::P2PInterface* (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetP2PInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804fcc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetP2PInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetPlayerDataStorageInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface* (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetPlayerDataStorageInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804fcc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetPlayerDataStorageInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetPresenceInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Presence::PresenceInterface* (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetPresenceInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804fccd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetPresenceInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetProgressionSnapshotInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface* (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetProgressionSnapshotInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804fcd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetProgressionSnapshotInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetRTCAdminInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTCAdmin::RTCAdminInterface* (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetRTCAdminInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804fcd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetRTCAdminInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetRTCInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTC::RTCInterface* (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetRTCInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804fcd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetRTCInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetReportsInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Reports::ReportsInterface* (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetReportsInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804fcdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetReportsInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetSanctionsInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sanctions::SanctionsInterface* (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetSanctionsInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804fce10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetSanctionsInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetSessionsInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sessions::SessionsInterface* (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetSessionsInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804fce50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetSessionsInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetStatsInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Stats::StatsInterface* (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetStatsInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804fce90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetStatsInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetTitleStorageInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::TitleStorage::TitleStorageInterface* (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetTitleStorageInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804fced0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetTitleStorageInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetUIInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::UI::UIInterface* (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetUIInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804fcf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetUIInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.GetUserInfoInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::UserInfo::UserInfoInterface* (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::GetUserInfoInterface)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804fcf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetUserInfoInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::Release)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804fcff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.SetApplicationStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Platform::PlatformInterface::*)(::Epic::OnlineServices::Platform::ApplicationStatus)>(&::Epic::OnlineServices::Platform::PlatformInterface::SetApplicationStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804fd000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"SetApplicationStatus", {}, {::i2c::type_of<::Epic::OnlineServices::Platform::ApplicationStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.SetNetworkStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Platform::PlatformInterface::*)(::Epic::OnlineServices::Platform::NetworkStatus)>(&::Epic::OnlineServices::Platform::PlatformInterface::SetNetworkStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804fd010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"SetNetworkStatus", {}, {::i2c::type_of<::Epic::OnlineServices::Platform::NetworkStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.SetOverrideCountryCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Platform::PlatformInterface::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Platform::PlatformInterface::SetOverrideCountryCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804fd020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"SetOverrideCountryCode", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.SetOverrideLocaleCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Platform::PlatformInterface::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Platform::PlatformInterface::SetOverrideLocaleCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804fd070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"SetOverrideLocaleCode", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::PlatformInterface::*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::Tick)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804fd0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (*)()>(&::Epic::OnlineServices::Platform::PlatformInterface::Shutdown)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804fd0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"Shutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::PlatformInterface.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Platform::PlatformInterface* (*)(::by_ref<::Epic::OnlineServices::Platform::WindowsOptions>)>(&::Epic::OnlineServices::Platform::PlatformInterface::Create)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804fc580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"Create", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::WindowsOptions>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Platform::PlatformInterface::setStaticF_CHECKFORLAUNCHERANDRESTART_ENV_VAR(::Epic::OnlineServices::Utf8String*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Utf8String*, "CHECKFORLAUNCHERANDRESTART_ENV_VAR", ::Epic::OnlineServices::Platform::PlatformInterface*>(std::forward<::Epic::OnlineServices::Utf8String*>(value));
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Platform::PlatformInterface::getStaticF_CHECKFORLAUNCHERANDRESTART_ENV_VAR()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Utf8String*, "CHECKFORLAUNCHERANDRESTART_ENV_VAR", ::Epic::OnlineServices::Platform::PlatformInterface*>();
}
inline void Epic::OnlineServices::Platform::PlatformInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::Platform::PlatformInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Platform::PlatformInterface::ToString(::Epic::OnlineServices::Platform::ApplicationStatus  applicationStatus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"ToString", {}, {::i2c::type_of<::Epic::OnlineServices::Platform::ApplicationStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(nullptr, ___internal_method, applicationStatus);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Platform::PlatformInterface::ToString(::Epic::OnlineServices::Platform::NetworkStatus  networkStatus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"ToString", {}, {::i2c::type_of<::Epic::OnlineServices::Platform::NetworkStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(nullptr, ___internal_method, networkStatus);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Platform::PlatformInterface::Initialize(::by_ref<::Epic::OnlineServices::Platform::InitializeOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"Initialize", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::InitializeOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(nullptr, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Platform::PlatformInterface::CheckForLauncherAndRestart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"CheckForLauncherAndRestart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Platform::PlatformInterface* Epic::OnlineServices::Platform::PlatformInterface::Create(::by_ref<::Epic::OnlineServices::Platform::Options>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"Create", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::Options>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Platform::PlatformInterface*>(nullptr, ___internal_method, options);
}
inline ::Epic::OnlineServices::Achievements::AchievementsInterface* Epic::OnlineServices::Platform::PlatformInterface::GetAchievementsInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetAchievementsInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Achievements::AchievementsInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Platform::PlatformInterface::GetActiveCountryCode(::Epic::OnlineServices::EpicAccountId*  localUserId, ::by_ref<::Epic::OnlineServices::Utf8String*>  outBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetActiveCountryCode", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, localUserId, outBuffer);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Platform::PlatformInterface::GetActiveLocaleCode(::Epic::OnlineServices::EpicAccountId*  localUserId, ::by_ref<::Epic::OnlineServices::Utf8String*>  outBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetActiveLocaleCode", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, localUserId, outBuffer);
}
inline ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface* Epic::OnlineServices::Platform::PlatformInterface::GetAntiCheatClientInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetAntiCheatClientInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface* Epic::OnlineServices::Platform::PlatformInterface::GetAntiCheatServerInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetAntiCheatServerInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Platform::ApplicationStatus Epic::OnlineServices::Platform::PlatformInterface::GetApplicationStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetApplicationStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Platform::ApplicationStatus>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Auth::AuthInterface* Epic::OnlineServices::Platform::PlatformInterface::GetAuthInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetAuthInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Auth::AuthInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Connect::ConnectInterface* Epic::OnlineServices::Platform::PlatformInterface::GetConnectInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetConnectInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Connect::ConnectInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::CustomInvites::CustomInvitesInterface* Epic::OnlineServices::Platform::PlatformInterface::GetCustomInvitesInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetCustomInvitesInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Platform::PlatformInterface::GetDesktopCrossplayStatus(::by_ref<::Epic::OnlineServices::Platform::GetDesktopCrossplayStatusOptions>  options, ::by_ref<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>  outDesktopCrossplayStatusInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetDesktopCrossplayStatus", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::GetDesktopCrossplayStatusOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::DesktopCrossplayStatusInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outDesktopCrossplayStatusInfo);
}
inline ::Epic::OnlineServices::Ecom::EcomInterface* Epic::OnlineServices::Platform::PlatformInterface::GetEcomInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetEcomInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Ecom::EcomInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Friends::FriendsInterface* Epic::OnlineServices::Platform::PlatformInterface::GetFriendsInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetFriendsInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Friends::FriendsInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface* Epic::OnlineServices::Platform::PlatformInterface::GetIntegratedPlatformInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetIntegratedPlatformInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::KWS::KWSInterface* Epic::OnlineServices::Platform::PlatformInterface::GetKWSInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetKWSInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::KWS::KWSInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Leaderboards::LeaderboardsInterface* Epic::OnlineServices::Platform::PlatformInterface::GetLeaderboardsInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetLeaderboardsInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Lobby::LobbyInterface* Epic::OnlineServices::Platform::PlatformInterface::GetLobbyInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetLobbyInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::LobbyInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Metrics::MetricsInterface* Epic::OnlineServices::Platform::PlatformInterface::GetMetricsInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetMetricsInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Metrics::MetricsInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Mods::ModsInterface* Epic::OnlineServices::Platform::PlatformInterface::GetModsInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetModsInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Mods::ModsInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Platform::NetworkStatus Epic::OnlineServices::Platform::PlatformInterface::GetNetworkStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetNetworkStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Platform::NetworkStatus>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Platform::PlatformInterface::GetOverrideCountryCode(::by_ref<::Epic::OnlineServices::Utf8String*>  outBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetOverrideCountryCode", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, outBuffer);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Platform::PlatformInterface::GetOverrideLocaleCode(::by_ref<::Epic::OnlineServices::Utf8String*>  outBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetOverrideLocaleCode", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, outBuffer);
}
inline ::Epic::OnlineServices::P2P::P2PInterface* Epic::OnlineServices::Platform::PlatformInterface::GetP2PInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetP2PInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::P2P::P2PInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface* Epic::OnlineServices::Platform::PlatformInterface::GetPlayerDataStorageInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetPlayerDataStorageInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Presence::PresenceInterface* Epic::OnlineServices::Platform::PlatformInterface::GetPresenceInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetPresenceInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Presence::PresenceInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface* Epic::OnlineServices::Platform::PlatformInterface::GetProgressionSnapshotInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetProgressionSnapshotInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::RTCAdmin::RTCAdminInterface* Epic::OnlineServices::Platform::PlatformInterface::GetRTCAdminInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetRTCAdminInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTCAdmin::RTCAdminInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::RTC::RTCInterface* Epic::OnlineServices::Platform::PlatformInterface::GetRTCInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetRTCInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTC::RTCInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Reports::ReportsInterface* Epic::OnlineServices::Platform::PlatformInterface::GetReportsInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetReportsInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Reports::ReportsInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Sanctions::SanctionsInterface* Epic::OnlineServices::Platform::PlatformInterface::GetSanctionsInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetSanctionsInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sanctions::SanctionsInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Sessions::SessionsInterface* Epic::OnlineServices::Platform::PlatformInterface::GetSessionsInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetSessionsInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sessions::SessionsInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Stats::StatsInterface* Epic::OnlineServices::Platform::PlatformInterface::GetStatsInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetStatsInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Stats::StatsInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::TitleStorage::TitleStorageInterface* Epic::OnlineServices::Platform::PlatformInterface::GetTitleStorageInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetTitleStorageInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::TitleStorage::TitleStorageInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::UI::UIInterface* Epic::OnlineServices::Platform::PlatformInterface::GetUIInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetUIInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::UI::UIInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::UserInfo::UserInfoInterface* Epic::OnlineServices::Platform::PlatformInterface::GetUserInfoInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"GetUserInfoInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(this, ___internal_method);
}
inline void Epic::OnlineServices::Platform::PlatformInterface::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Platform::PlatformInterface::SetApplicationStatus(::Epic::OnlineServices::Platform::ApplicationStatus  newStatus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"SetApplicationStatus", {}, {::i2c::type_of<::Epic::OnlineServices::Platform::ApplicationStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, newStatus);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Platform::PlatformInterface::SetNetworkStatus(::Epic::OnlineServices::Platform::NetworkStatus  newStatus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"SetNetworkStatus", {}, {::i2c::type_of<::Epic::OnlineServices::Platform::NetworkStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, newStatus);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Platform::PlatformInterface::SetOverrideCountryCode(::Epic::OnlineServices::Utf8String*  newCountryCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"SetOverrideCountryCode", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, newCountryCode);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Platform::PlatformInterface::SetOverrideLocaleCode(::Epic::OnlineServices::Utf8String*  newLocaleCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"SetOverrideLocaleCode", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, newLocaleCode);
}
inline void Epic::OnlineServices::Platform::PlatformInterface::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Platform::PlatformInterface::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"Shutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(nullptr, ___internal_method);
}
inline ::Epic::OnlineServices::Platform::PlatformInterface* Epic::OnlineServices::Platform::PlatformInterface::Create(::by_ref<::Epic::OnlineServices::Platform::WindowsOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::PlatformInterface*>(),
                        {"Create", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::WindowsOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Platform::PlatformInterface*>(nullptr, ___internal_method, options);
}
inline ::Epic::OnlineServices::Platform::PlatformInterface* Epic::OnlineServices::Platform::PlatformInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Platform::PlatformInterface*>());
}
inline ::Epic::OnlineServices::Platform::PlatformInterface* Epic::OnlineServices::Platform::PlatformInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Platform::PlatformInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Platform::PlatformInterface::PlatformInterface()   {
}

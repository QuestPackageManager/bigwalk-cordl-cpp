#pragma once
// IWYU pragma private; include "EpicTransport/EOSSDKComponent.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginCredentialType_impl.hpp"
#include "Epic/OnlineServices/Logging/zzzz__LogLevel_impl.hpp"
#include "Epic/OnlineServices/zzzz__ExternalCredentialType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "EpicTransport/zzzz__EOSSDKComponent_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__AchievementsInterface_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__AuthInterface_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__AuthExpirationCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__ConnectInterface_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__CreateDeviceIdCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__CreateUserCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__LoginCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__EcomInterface_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__FriendsInterface_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__LeaderboardsInterface_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyInterface_def.hpp"
#include "Epic/OnlineServices/Logging/zzzz__LogMessageFunc_def.hpp"
#include "Epic/OnlineServices/Logging/zzzz__LogMessage_def.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__MetricsInterface_def.hpp"
#include "Epic/OnlineServices/Mods/zzzz__ModsInterface_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__P2PInterface_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__PlatformInterface_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__PlayerDataStorageInterface_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceInterface_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionsInterface_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__TitleStorageInterface_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__UIInterface_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__UserInfoInterface_def.hpp"
#include "Epic/OnlineServices/zzzz__EpicAccountId_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "EpicTransport/zzzz__EOSSDKComponent_def.hpp"
#include "GlobalNamespace/zzzz__EosApiKey_def.hpp"
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::EOSSDKComponent___c::*)()>(&::EpicTransport::EOSSDKComponent___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent___c._InitializeImplementation_b__68_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::EOSSDKComponent___c::*)(::by_ref<::Epic::OnlineServices::Logging::LogMessage>)>(&::EpicTransport::EOSSDKComponent___c::_InitializeImplementation_b__68_0)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18158e8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent___c*>(),
                        {"<InitializeImplementation>b__68_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Logging::LogMessage>>()}}
                    )));
    return ___internal_method;
  }
};
inline void EpicTransport::EOSSDKComponent___c::setStaticF___9(::EpicTransport::EOSSDKComponent___c*  value)  {
::cordl_internals::setStaticField<::EpicTransport::EOSSDKComponent___c*, "<>9", ::EpicTransport::EOSSDKComponent___c*>(std::forward<::EpicTransport::EOSSDKComponent___c*>(value));
}
inline ::EpicTransport::EOSSDKComponent___c* EpicTransport::EOSSDKComponent___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::EpicTransport::EOSSDKComponent___c*, "<>9", ::EpicTransport::EOSSDKComponent___c*>();
}
inline void EpicTransport::EOSSDKComponent___c::setStaticF___9__68_0(::Epic::OnlineServices::Logging::LogMessageFunc*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Logging::LogMessageFunc*, "<>9__68_0", ::EpicTransport::EOSSDKComponent___c*>(std::forward<::Epic::OnlineServices::Logging::LogMessageFunc*>(value));
}
inline ::Epic::OnlineServices::Logging::LogMessageFunc* EpicTransport::EOSSDKComponent___c::getStaticF___9__68_0()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Logging::LogMessageFunc*, "<>9__68_0", ::EpicTransport::EOSSDKComponent___c*>();
}
inline void EpicTransport::EOSSDKComponent___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void EpicTransport::EOSSDKComponent___c::_InitializeImplementation_b__68_0(::by_ref<::Epic::OnlineServices::Logging::LogMessage>  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent___c*>(),
                        {"<InitializeImplementation>b__68_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Logging::LogMessage>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::EpicTransport::EOSSDKComponent___c* EpicTransport::EOSSDKComponent___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::EpicTransport::EOSSDKComponent___c*>());
}
// Ctor Parameters []
constexpr ::EpicTransport::EOSSDKComponent___c::EOSSDKComponent___c()   {
}
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.get_DisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::EpicTransport::EOSSDKComponent::get_DisplayName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181584c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"get_DisplayName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.set_DisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::EpicTransport::EOSSDKComponent::set_DisplayName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181584dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"set_DisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.get_CollectPlayerMetrics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::EpicTransport::EOSSDKComponent::get_CollectPlayerMetrics)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181584bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"get_CollectPlayerMetrics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.SetAuthInterfaceLoginCredentialId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::EpicTransport::EOSSDKComponent::SetAuthInterfaceLoginCredentialId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181584a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"SetAuthInterfaceLoginCredentialId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.SetAuthInterfaceCredentialToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::EpicTransport::EOSSDKComponent::SetAuthInterfaceCredentialToken)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815849e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"SetAuthInterfaceCredentialToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.SetConnectInterfaceCredentialToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::EpicTransport::EOSSDKComponent::SetConnectInterfaceCredentialToken)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181584a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"SetConnectInterfaceCredentialToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.GetAchievementsInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Achievements::AchievementsInterface* (*)()>(&::EpicTransport::EOSSDKComponent::GetAchievementsInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181583980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetAchievementsInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.GetAuthInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Auth::AuthInterface* (*)()>(&::EpicTransport::EOSSDKComponent::GetAuthInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815839b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetAuthInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.GetConnectInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Connect::ConnectInterface* (*)()>(&::EpicTransport::EOSSDKComponent::GetConnectInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815839e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetConnectInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.GetEcomInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Ecom::EcomInterface* (*)()>(&::EpicTransport::EOSSDKComponent::GetEcomInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181583a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetEcomInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.GetFriendsInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Friends::FriendsInterface* (*)()>(&::EpicTransport::EOSSDKComponent::GetFriendsInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181583a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetFriendsInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.GetLeaderboardsInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface* (*)()>(&::EpicTransport::EOSSDKComponent::GetLeaderboardsInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181583a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetLeaderboardsInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.GetLobbyInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::LobbyInterface* (*)()>(&::EpicTransport::EOSSDKComponent::GetLobbyInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181583aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetLobbyInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.GetMetricsInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Metrics::MetricsInterface* (*)()>(&::EpicTransport::EOSSDKComponent::GetMetricsInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181583ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetMetricsInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.GetModsInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Mods::ModsInterface* (*)()>(&::EpicTransport::EOSSDKComponent::GetModsInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181583b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetModsInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.GetP2PInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::P2P::P2PInterface* (*)()>(&::EpicTransport::EOSSDKComponent::GetP2PInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181583b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetP2PInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.GetPlayerDataStorageInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface* (*)()>(&::EpicTransport::EOSSDKComponent::GetPlayerDataStorageInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181583b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetPlayerDataStorageInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.GetPresenceInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Presence::PresenceInterface* (*)()>(&::EpicTransport::EOSSDKComponent::GetPresenceInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181583b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetPresenceInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.GetSessionsInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sessions::SessionsInterface* (*)()>(&::EpicTransport::EOSSDKComponent::GetSessionsInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181583bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetSessionsInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.GetTitleStorageInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::TitleStorage::TitleStorageInterface* (*)()>(&::EpicTransport::EOSSDKComponent::GetTitleStorageInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181583bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetTitleStorageInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.GetUIInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::UI::UIInterface* (*)()>(&::EpicTransport::EOSSDKComponent::GetUIInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181583c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetUIInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.GetUserInfoInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::UserInfo::UserInfoInterface* (*)()>(&::EpicTransport::EOSSDKComponent::GetUserInfoInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181583c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetUserInfoInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.get_LocalUserAccountId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::EpicAccountId* (*)()>(&::EpicTransport::EOSSDKComponent::get_LocalUserAccountId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181584d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"get_LocalUserAccountId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.get_LocalUserAccountIdString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::EpicTransport::EOSSDKComponent::get_LocalUserAccountIdString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181584d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"get_LocalUserAccountIdString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.get_LocalUserProductId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (*)()>(&::EpicTransport::EOSSDKComponent::get_LocalUserProductId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181584da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"get_LocalUserProductId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.get_LocalUserProductIdString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::EpicTransport::EOSSDKComponent::get_LocalUserProductIdString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181584d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"get_LocalUserProductIdString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::EpicTransport::EOSSDKComponent::get_Initialized)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181584c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.get_IsConnecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::EpicTransport::EOSSDKComponent::get_IsConnecting)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181584ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"get_IsConnecting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.ResetConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::EpicTransport::EOSSDKComponent::ResetConnection)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815849a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"ResetConnection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::EpicTransport::EOSSDKComponent> (*)()>(&::EpicTransport::EOSSDKComponent::get_Instance)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181584c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::EpicTransport::EOSSDKComponent::Tick)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181584a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::EOSSDKComponent::*)()>(&::EpicTransport::EOSSDKComponent::Awake)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x181583500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.InitializeImplementation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::EOSSDKComponent::*)()>(&::EpicTransport::EOSSDKComponent::InitializeImplementation)> {
  constexpr static std::size_t size = 0x790;
  constexpr static std::size_t addrs = 0x181583c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"InitializeImplementation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::EpicTransport::EOSSDKComponent::Initialize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181584410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.OnAuthInterfaceLogin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::EOSSDKComponent::*)(::by_ref<::Epic::OnlineServices::Auth::LoginCallbackInfo>)>(&::EpicTransport::EOSSDKComponent::OnAuthInterfaceLogin)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1815845b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"OnAuthInterfaceLogin", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LoginCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.OnCreateDeviceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::EOSSDKComponent::*)(::by_ref<::Epic::OnlineServices::Connect::CreateDeviceIdCallbackInfo>)>(&::EpicTransport::EOSSDKComponent::OnCreateDeviceId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181584920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"OnCreateDeviceId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CreateDeviceIdCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.ConnectInterfaceLogin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::EOSSDKComponent::*)()>(&::EpicTransport::EOSSDKComponent::ConnectInterfaceLogin)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x181583730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"ConnectInterfaceLogin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.OnConnectInterfaceLogin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::EOSSDKComponent::*)(::by_ref<::Epic::OnlineServices::Connect::LoginCallbackInfo>)>(&::EpicTransport::EOSSDKComponent::OnConnectInterfaceLogin)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1815846e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"OnConnectInterfaceLogin", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::LoginCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.OnAuthExpiration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::EOSSDKComponent::*)(::by_ref<::Epic::OnlineServices::Connect::AuthExpirationCallbackInfo>)>(&::EpicTransport::EOSSDKComponent::OnAuthExpiration)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181584550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"OnAuthExpiration", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::AuthExpirationCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::EOSSDKComponent::*)()>(&::EpicTransport::EOSSDKComponent::LateUpdate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181584470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent.OnApplicationQuit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::EOSSDKComponent::*)()>(&::EpicTransport::EOSSDKComponent::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1815844e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::EOSSDKComponent::*)()>(&::EpicTransport::EOSSDKComponent::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181584b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::EOSSDKComponent._OnConnectInterfaceLogin_b__73_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::EOSSDKComponent::*)(::by_ref<::Epic::OnlineServices::Connect::CreateUserCallbackInfo>)>(&::EpicTransport::EOSSDKComponent::_OnConnectInterfaceLogin_b__73_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181584b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"<OnConnectInterfaceLogin>b__73_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CreateUserCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::EosApiKey>& EpicTransport::EOSSDKComponent::__cordl_internal_get_apiKeys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___apiKeys;
}
constexpr ::UnityW<::GlobalNamespace::EosApiKey> const& EpicTransport::EOSSDKComponent::__cordl_internal_get_apiKeys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___apiKeys;
}
constexpr void EpicTransport::EOSSDKComponent::__cordl_internal_set_apiKeys(::UnityW<::GlobalNamespace::EosApiKey>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___apiKeys = value;
}
constexpr bool& EpicTransport::EOSSDKComponent::__cordl_internal_get_authInterfaceLogin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authInterfaceLogin;
}
constexpr bool const& EpicTransport::EOSSDKComponent::__cordl_internal_get_authInterfaceLogin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authInterfaceLogin;
}
constexpr void EpicTransport::EOSSDKComponent::__cordl_internal_set_authInterfaceLogin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authInterfaceLogin = value;
}
constexpr ::Epic::OnlineServices::Auth::LoginCredentialType& EpicTransport::EOSSDKComponent::__cordl_internal_get_authInterfaceCredentialType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authInterfaceCredentialType;
}
constexpr ::Epic::OnlineServices::Auth::LoginCredentialType const& EpicTransport::EOSSDKComponent::__cordl_internal_get_authInterfaceCredentialType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authInterfaceCredentialType;
}
constexpr void EpicTransport::EOSSDKComponent::__cordl_internal_set_authInterfaceCredentialType(::Epic::OnlineServices::Auth::LoginCredentialType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authInterfaceCredentialType = value;
}
constexpr uint32_t& EpicTransport::EOSSDKComponent::__cordl_internal_get_devAuthToolPort()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___devAuthToolPort;
}
constexpr uint32_t const& EpicTransport::EOSSDKComponent::__cordl_internal_get_devAuthToolPort() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___devAuthToolPort;
}
constexpr void EpicTransport::EOSSDKComponent::__cordl_internal_set_devAuthToolPort(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___devAuthToolPort = value;
}
constexpr ::StringW& EpicTransport::EOSSDKComponent::__cordl_internal_get_devAuthToolCredentialName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___devAuthToolCredentialName;
}
constexpr ::StringW const& EpicTransport::EOSSDKComponent::__cordl_internal_get_devAuthToolCredentialName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___devAuthToolCredentialName;
}
constexpr void EpicTransport::EOSSDKComponent::__cordl_internal_set_devAuthToolCredentialName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___devAuthToolCredentialName = value;
}
constexpr ::Epic::OnlineServices::ExternalCredentialType& EpicTransport::EOSSDKComponent::__cordl_internal_get_connectInterfaceCredentialType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectInterfaceCredentialType;
}
constexpr ::Epic::OnlineServices::ExternalCredentialType const& EpicTransport::EOSSDKComponent::__cordl_internal_get_connectInterfaceCredentialType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectInterfaceCredentialType;
}
constexpr void EpicTransport::EOSSDKComponent::__cordl_internal_set_connectInterfaceCredentialType(::Epic::OnlineServices::ExternalCredentialType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectInterfaceCredentialType = value;
}
constexpr ::StringW& EpicTransport::EOSSDKComponent::__cordl_internal_get_deviceModel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deviceModel;
}
constexpr ::StringW const& EpicTransport::EOSSDKComponent::__cordl_internal_get_deviceModel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deviceModel;
}
constexpr void EpicTransport::EOSSDKComponent::__cordl_internal_set_deviceModel(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deviceModel = value;
}
constexpr ::StringW& EpicTransport::EOSSDKComponent::__cordl_internal_get_displayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayName;
}
constexpr ::StringW const& EpicTransport::EOSSDKComponent::__cordl_internal_get_displayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayName;
}
constexpr void EpicTransport::EOSSDKComponent::__cordl_internal_set_displayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayName = value;
}
constexpr ::Epic::OnlineServices::Logging::LogLevel& EpicTransport::EOSSDKComponent::__cordl_internal_get_epicLoggerLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___epicLoggerLevel;
}
constexpr ::Epic::OnlineServices::Logging::LogLevel const& EpicTransport::EOSSDKComponent::__cordl_internal_get_epicLoggerLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___epicLoggerLevel;
}
constexpr void EpicTransport::EOSSDKComponent::__cordl_internal_set_epicLoggerLevel(::Epic::OnlineServices::Logging::LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___epicLoggerLevel = value;
}
constexpr bool& EpicTransport::EOSSDKComponent::__cordl_internal_get_collectPlayerMetrics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectPlayerMetrics;
}
constexpr bool const& EpicTransport::EOSSDKComponent::__cordl_internal_get_collectPlayerMetrics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectPlayerMetrics;
}
constexpr void EpicTransport::EOSSDKComponent::__cordl_internal_set_collectPlayerMetrics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectPlayerMetrics = value;
}
constexpr bool& EpicTransport::EOSSDKComponent::__cordl_internal_get_checkForEpicLauncherAndRestart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkForEpicLauncherAndRestart;
}
constexpr bool const& EpicTransport::EOSSDKComponent::__cordl_internal_get_checkForEpicLauncherAndRestart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkForEpicLauncherAndRestart;
}
constexpr void EpicTransport::EOSSDKComponent::__cordl_internal_set_checkForEpicLauncherAndRestart(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkForEpicLauncherAndRestart = value;
}
constexpr bool& EpicTransport::EOSSDKComponent::__cordl_internal_get_delayedInitialization()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayedInitialization;
}
constexpr bool const& EpicTransport::EOSSDKComponent::__cordl_internal_get_delayedInitialization() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayedInitialization;
}
constexpr void EpicTransport::EOSSDKComponent::__cordl_internal_set_delayedInitialization(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delayedInitialization = value;
}
constexpr float_t& EpicTransport::EOSSDKComponent::__cordl_internal_get_platformTickIntervalInSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformTickIntervalInSeconds;
}
constexpr float_t const& EpicTransport::EOSSDKComponent::__cordl_internal_get_platformTickIntervalInSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformTickIntervalInSeconds;
}
constexpr void EpicTransport::EOSSDKComponent::__cordl_internal_set_platformTickIntervalInSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformTickIntervalInSeconds = value;
}
constexpr float_t& EpicTransport::EOSSDKComponent::__cordl_internal_get_platformTickTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformTickTimer;
}
constexpr float_t const& EpicTransport::EOSSDKComponent::__cordl_internal_get_platformTickTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformTickTimer;
}
constexpr void EpicTransport::EOSSDKComponent::__cordl_internal_set_platformTickTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformTickTimer = value;
}
constexpr uint32_t& EpicTransport::EOSSDKComponent::__cordl_internal_get_tickBudgetInMilliseconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tickBudgetInMilliseconds;
}
constexpr uint32_t const& EpicTransport::EOSSDKComponent::__cordl_internal_get_tickBudgetInMilliseconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tickBudgetInMilliseconds;
}
constexpr void EpicTransport::EOSSDKComponent::__cordl_internal_set_tickBudgetInMilliseconds(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tickBudgetInMilliseconds = value;
}
constexpr uint64_t& EpicTransport::EOSSDKComponent::__cordl_internal_get_authExpirationHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authExpirationHandle;
}
constexpr uint64_t const& EpicTransport::EOSSDKComponent::__cordl_internal_get_authExpirationHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authExpirationHandle;
}
constexpr void EpicTransport::EOSSDKComponent::__cordl_internal_set_authExpirationHandle(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authExpirationHandle = value;
}
constexpr ::StringW& EpicTransport::EOSSDKComponent::__cordl_internal_get_authInterfaceLoginCredentialId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authInterfaceLoginCredentialId;
}
constexpr ::StringW const& EpicTransport::EOSSDKComponent::__cordl_internal_get_authInterfaceLoginCredentialId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authInterfaceLoginCredentialId;
}
constexpr void EpicTransport::EOSSDKComponent::__cordl_internal_set_authInterfaceLoginCredentialId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authInterfaceLoginCredentialId = value;
}
constexpr ::StringW& EpicTransport::EOSSDKComponent::__cordl_internal_get_authInterfaceCredentialToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authInterfaceCredentialToken;
}
constexpr ::StringW const& EpicTransport::EOSSDKComponent::__cordl_internal_get_authInterfaceCredentialToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authInterfaceCredentialToken;
}
constexpr void EpicTransport::EOSSDKComponent::__cordl_internal_set_authInterfaceCredentialToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authInterfaceCredentialToken = value;
}
constexpr ::StringW& EpicTransport::EOSSDKComponent::__cordl_internal_get_connectInterfaceCredentialToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectInterfaceCredentialToken;
}
constexpr ::StringW const& EpicTransport::EOSSDKComponent::__cordl_internal_get_connectInterfaceCredentialToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectInterfaceCredentialToken;
}
constexpr void EpicTransport::EOSSDKComponent::__cordl_internal_set_connectInterfaceCredentialToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectInterfaceCredentialToken = value;
}
constexpr ::Epic::OnlineServices::Platform::PlatformInterface*& EpicTransport::EOSSDKComponent::__cordl_internal_get_EOS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EOS;
}
constexpr ::Epic::OnlineServices::Platform::PlatformInterface* const& EpicTransport::EOSSDKComponent::__cordl_internal_get_EOS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EOS;
}
constexpr void EpicTransport::EOSSDKComponent::__cordl_internal_set_EOS(::Epic::OnlineServices::Platform::PlatformInterface*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EOS = value;
}
constexpr ::Epic::OnlineServices::EpicAccountId*& EpicTransport::EOSSDKComponent::__cordl_internal_get_localUserAccountId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localUserAccountId;
}
constexpr ::Epic::OnlineServices::EpicAccountId* const& EpicTransport::EOSSDKComponent::__cordl_internal_get_localUserAccountId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localUserAccountId;
}
constexpr void EpicTransport::EOSSDKComponent::__cordl_internal_set_localUserAccountId(::Epic::OnlineServices::EpicAccountId*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localUserAccountId = value;
}
constexpr ::StringW& EpicTransport::EOSSDKComponent::__cordl_internal_get_localUserAccountIdString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localUserAccountIdString;
}
constexpr ::StringW const& EpicTransport::EOSSDKComponent::__cordl_internal_get_localUserAccountIdString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localUserAccountIdString;
}
constexpr void EpicTransport::EOSSDKComponent::__cordl_internal_set_localUserAccountIdString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localUserAccountIdString = value;
}
constexpr ::Epic::OnlineServices::ProductUserId*& EpicTransport::EOSSDKComponent::__cordl_internal_get_localUserProductId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localUserProductId;
}
constexpr ::Epic::OnlineServices::ProductUserId* const& EpicTransport::EOSSDKComponent::__cordl_internal_get_localUserProductId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localUserProductId;
}
constexpr void EpicTransport::EOSSDKComponent::__cordl_internal_set_localUserProductId(::Epic::OnlineServices::ProductUserId*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localUserProductId = value;
}
constexpr ::StringW& EpicTransport::EOSSDKComponent::__cordl_internal_get_localUserProductIdString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localUserProductIdString;
}
constexpr ::StringW const& EpicTransport::EOSSDKComponent::__cordl_internal_get_localUserProductIdString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localUserProductIdString;
}
constexpr void EpicTransport::EOSSDKComponent::__cordl_internal_set_localUserProductIdString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localUserProductIdString = value;
}
constexpr bool& EpicTransport::EOSSDKComponent::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& EpicTransport::EOSSDKComponent::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void EpicTransport::EOSSDKComponent::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
constexpr bool& EpicTransport::EOSSDKComponent::__cordl_internal_get_isConnecting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isConnecting;
}
constexpr bool const& EpicTransport::EOSSDKComponent::__cordl_internal_get_isConnecting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isConnecting;
}
constexpr void EpicTransport::EOSSDKComponent::__cordl_internal_set_isConnecting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isConnecting = value;
}
inline void EpicTransport::EOSSDKComponent::setStaticF_instance(::UnityW<::EpicTransport::EOSSDKComponent>  value)  {
::cordl_internals::setStaticField<::UnityW<::EpicTransport::EOSSDKComponent>, "instance", ::EpicTransport::EOSSDKComponent*>(std::forward<::UnityW<::EpicTransport::EOSSDKComponent>>(value));
}
inline ::UnityW<::EpicTransport::EOSSDKComponent> EpicTransport::EOSSDKComponent::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::EpicTransport::EOSSDKComponent>, "instance", ::EpicTransport::EOSSDKComponent*>();
}
inline ::StringW EpicTransport::EOSSDKComponent::get_DisplayName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"get_DisplayName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void EpicTransport::EOSSDKComponent::set_DisplayName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"set_DisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool EpicTransport::EOSSDKComponent::get_CollectPlayerMetrics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"get_CollectPlayerMetrics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void EpicTransport::EOSSDKComponent::SetAuthInterfaceLoginCredentialId(::StringW  credentialId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"SetAuthInterfaceLoginCredentialId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, credentialId);
}
inline void EpicTransport::EOSSDKComponent::SetAuthInterfaceCredentialToken(::StringW  credentialToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"SetAuthInterfaceCredentialToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, credentialToken);
}
inline void EpicTransport::EOSSDKComponent::SetConnectInterfaceCredentialToken(::StringW  credentialToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"SetConnectInterfaceCredentialToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, credentialToken);
}
inline ::Epic::OnlineServices::Achievements::AchievementsInterface* EpicTransport::EOSSDKComponent::GetAchievementsInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetAchievementsInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Achievements::AchievementsInterface*>(nullptr, ___internal_method);
}
inline ::Epic::OnlineServices::Auth::AuthInterface* EpicTransport::EOSSDKComponent::GetAuthInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetAuthInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Auth::AuthInterface*>(nullptr, ___internal_method);
}
inline ::Epic::OnlineServices::Connect::ConnectInterface* EpicTransport::EOSSDKComponent::GetConnectInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetConnectInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Connect::ConnectInterface*>(nullptr, ___internal_method);
}
inline ::Epic::OnlineServices::Ecom::EcomInterface* EpicTransport::EOSSDKComponent::GetEcomInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetEcomInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Ecom::EcomInterface*>(nullptr, ___internal_method);
}
inline ::Epic::OnlineServices::Friends::FriendsInterface* EpicTransport::EOSSDKComponent::GetFriendsInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetFriendsInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Friends::FriendsInterface*>(nullptr, ___internal_method);
}
inline ::Epic::OnlineServices::Leaderboards::LeaderboardsInterface* EpicTransport::EOSSDKComponent::GetLeaderboardsInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetLeaderboardsInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(nullptr, ___internal_method);
}
inline ::Epic::OnlineServices::Lobby::LobbyInterface* EpicTransport::EOSSDKComponent::GetLobbyInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetLobbyInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::LobbyInterface*>(nullptr, ___internal_method);
}
inline ::Epic::OnlineServices::Metrics::MetricsInterface* EpicTransport::EOSSDKComponent::GetMetricsInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetMetricsInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Metrics::MetricsInterface*>(nullptr, ___internal_method);
}
inline ::Epic::OnlineServices::Mods::ModsInterface* EpicTransport::EOSSDKComponent::GetModsInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetModsInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Mods::ModsInterface*>(nullptr, ___internal_method);
}
inline ::Epic::OnlineServices::P2P::P2PInterface* EpicTransport::EOSSDKComponent::GetP2PInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetP2PInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::P2P::P2PInterface*>(nullptr, ___internal_method);
}
inline ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface* EpicTransport::EOSSDKComponent::GetPlayerDataStorageInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetPlayerDataStorageInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(nullptr, ___internal_method);
}
inline ::Epic::OnlineServices::Presence::PresenceInterface* EpicTransport::EOSSDKComponent::GetPresenceInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetPresenceInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Presence::PresenceInterface*>(nullptr, ___internal_method);
}
inline ::Epic::OnlineServices::Sessions::SessionsInterface* EpicTransport::EOSSDKComponent::GetSessionsInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetSessionsInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sessions::SessionsInterface*>(nullptr, ___internal_method);
}
inline ::Epic::OnlineServices::TitleStorage::TitleStorageInterface* EpicTransport::EOSSDKComponent::GetTitleStorageInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetTitleStorageInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::TitleStorage::TitleStorageInterface*>(nullptr, ___internal_method);
}
inline ::Epic::OnlineServices::UI::UIInterface* EpicTransport::EOSSDKComponent::GetUIInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetUIInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::UI::UIInterface*>(nullptr, ___internal_method);
}
inline ::Epic::OnlineServices::UserInfo::UserInfoInterface* EpicTransport::EOSSDKComponent::GetUserInfoInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"GetUserInfoInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(nullptr, ___internal_method);
}
inline ::Epic::OnlineServices::EpicAccountId* EpicTransport::EOSSDKComponent::get_LocalUserAccountId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"get_LocalUserAccountId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::EpicAccountId*>(nullptr, ___internal_method);
}
inline ::StringW EpicTransport::EOSSDKComponent::get_LocalUserAccountIdString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"get_LocalUserAccountIdString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::Epic::OnlineServices::ProductUserId* EpicTransport::EOSSDKComponent::get_LocalUserProductId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"get_LocalUserProductId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(nullptr, ___internal_method);
}
inline ::StringW EpicTransport::EOSSDKComponent::get_LocalUserProductIdString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"get_LocalUserProductIdString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool EpicTransport::EOSSDKComponent::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool EpicTransport::EOSSDKComponent::get_IsConnecting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"get_IsConnecting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void EpicTransport::EOSSDKComponent::ResetConnection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"ResetConnection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityW<::EpicTransport::EOSSDKComponent> EpicTransport::EOSSDKComponent::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::EpicTransport::EOSSDKComponent>>(nullptr, ___internal_method);
}
inline void EpicTransport::EOSSDKComponent::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void EpicTransport::EOSSDKComponent::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void EpicTransport::EOSSDKComponent::InitializeImplementation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"InitializeImplementation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void EpicTransport::EOSSDKComponent::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void EpicTransport::EOSSDKComponent::OnAuthInterfaceLogin(::by_ref<::Epic::OnlineServices::Auth::LoginCallbackInfo>  loginCallbackInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"OnAuthInterfaceLogin", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LoginCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loginCallbackInfo);
}
inline void EpicTransport::EOSSDKComponent::OnCreateDeviceId(::by_ref<::Epic::OnlineServices::Connect::CreateDeviceIdCallbackInfo>  createDeviceIdCallbackInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"OnCreateDeviceId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CreateDeviceIdCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, createDeviceIdCallbackInfo);
}
inline void EpicTransport::EOSSDKComponent::ConnectInterfaceLogin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"ConnectInterfaceLogin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void EpicTransport::EOSSDKComponent::OnConnectInterfaceLogin(::by_ref<::Epic::OnlineServices::Connect::LoginCallbackInfo>  loginCallbackInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"OnConnectInterfaceLogin", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::LoginCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loginCallbackInfo);
}
inline void EpicTransport::EOSSDKComponent::OnAuthExpiration(::by_ref<::Epic::OnlineServices::Connect::AuthExpirationCallbackInfo>  authExpirationCallbackInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"OnAuthExpiration", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::AuthExpirationCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, authExpirationCallbackInfo);
}
inline void EpicTransport::EOSSDKComponent::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void EpicTransport::EOSSDKComponent::OnApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void EpicTransport::EOSSDKComponent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void EpicTransport::EOSSDKComponent::_OnConnectInterfaceLogin_b__73_0(::by_ref<::Epic::OnlineServices::Connect::CreateUserCallbackInfo>  cb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::EOSSDKComponent*>(),
                        {"<OnConnectInterfaceLogin>b__73_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CreateUserCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cb);
}
inline ::EpicTransport::EOSSDKComponent* EpicTransport::EOSSDKComponent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::EpicTransport::EOSSDKComponent*>());
}
// Ctor Parameters []
constexpr ::EpicTransport::EOSSDKComponent::EOSSDKComponent()   {
}

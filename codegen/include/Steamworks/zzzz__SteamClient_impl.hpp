#pragma once
// IWYU pragma private; include "Steamworks/SteamClient.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamClient_def.hpp"
#include "Steamworks/zzzz__EAccountType_def.hpp"
#include "Steamworks/zzzz__HSteamPipe_def.hpp"
#include "Steamworks/zzzz__HSteamUser_def.hpp"
#include "Steamworks/zzzz__SteamAPIWarningMessageHook_t_def.hpp"
#include "Steamworks/zzzz__SteamIPAddress_t_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamClient.CreateSteamPipe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamPipe (*)()>(&::Steamworks::SteamClient::CreateSteamPipe)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180585160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"CreateSteamPipe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.BReleaseSteamPipe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamPipe)>(&::Steamworks::SteamClient::BReleaseSteamPipe)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180584fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"BReleaseSteamPipe", {}, {::i2c::type_of<::Steamworks::HSteamPipe>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.ConnectToGlobalUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamUser (*)(::Steamworks::HSteamPipe)>(&::Steamworks::SteamClient::ConnectToGlobalUser)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180585070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"ConnectToGlobalUser", {}, {::i2c::type_of<::Steamworks::HSteamPipe>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.CreateLocalUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamUser (*)(::by_ref<::Steamworks::HSteamPipe>, ::Steamworks::EAccountType)>(&::Steamworks::SteamClient::CreateLocalUser)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805850e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"CreateLocalUser", {}, {::i2c::type_of<::by_ref<::Steamworks::HSteamPipe>>(), ::i2c::type_of<::Steamworks::EAccountType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.ReleaseUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HSteamPipe, ::Steamworks::HSteamUser)>(&::Steamworks::SteamClient::ReleaseUser)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180586dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"ReleaseUser", {}, {::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::HSteamUser>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamUser)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180586ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamUser", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamGameServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamGameServer)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180585880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamGameServer", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.SetLocalIPBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Steamworks::SteamIPAddress_t>, uint16_t)>(&::Steamworks::SteamClient::SetLocalIPBinding)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180586e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"SetLocalIPBinding", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamIPAddress_t>>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamFriends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamFriends)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180585550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamFriends", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamUtils
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamUtils)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180586be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamUtils", {}, {::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamMatchmaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamMatchmaking)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180585fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamMatchmaking", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamMatchmakingServers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamMatchmakingServers)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180585ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamMatchmakingServers", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamGenericInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamGenericInterface)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1805859b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamGenericInterface", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamUserStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamUserStats)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805869e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamUserStats", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamGameServerStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamGameServerStats)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180585750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamGameServerStats", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamApps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamApps)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180585320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamApps", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamNetworking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamNetworking)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805862e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamNetworking", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamRemoteStorage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamRemoteStorage)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805866e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamRemoteStorage", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamScreenshots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamScreenshots)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805867e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamScreenshots", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamGameSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamGameSearch)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180585650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamGameSearch", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetIPCCallCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::Steamworks::SteamClient::GetIPCCallCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805851c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetIPCCallCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.SetWarningMessageHook
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::SteamAPIWarningMessageHook_t*)>(&::Steamworks::SteamClient::SetWarningMessageHook)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180586eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"SetWarningMessageHook", {}, {::i2c::type_of<::Steamworks::SteamAPIWarningMessageHook_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.BShutdownIfAllPipesClosed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamClient::BShutdownIfAllPipesClosed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180585010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"BShutdownIfAllPipesClosed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamHTTP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamHTTP)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180585be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamHTTP", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamController)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180585420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamController", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamUGC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamUGC)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805868e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamUGC", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamAppList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamAppList)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180585220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamAppList", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamMusic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamMusic)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805861e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamMusic", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamMusicRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamMusicRemote)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805860e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamMusicRemote", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamHTMLSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamHTMLSurface)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180585ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamHTMLSurface", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamInventory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamInventory)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180585de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamInventory", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamVideo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamVideo)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180586cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamVideo", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamParentalSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamParentalSettings)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805863e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamParentalSettings", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamInput)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180585ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamInput", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamParties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamParties)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805864e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamParties", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamClient.GetISteamRemotePlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamClient::GetISteamRemotePlay)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805865e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamRemotePlay", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Steamworks::HSteamPipe Steamworks::SteamClient::CreateSteamPipe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"CreateSteamPipe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamPipe>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamClient::BReleaseSteamPipe(::Steamworks::HSteamPipe  hSteamPipe)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"BReleaseSteamPipe", {}, {::i2c::type_of<::Steamworks::HSteamPipe>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hSteamPipe);
}
inline ::Steamworks::HSteamUser Steamworks::SteamClient::ConnectToGlobalUser(::Steamworks::HSteamPipe  hSteamPipe)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"ConnectToGlobalUser", {}, {::i2c::type_of<::Steamworks::HSteamPipe>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamUser>(nullptr, ___internal_method, hSteamPipe);
}
inline ::Steamworks::HSteamUser Steamworks::SteamClient::CreateLocalUser(::by_ref<::Steamworks::HSteamPipe>  phSteamPipe, ::Steamworks::EAccountType  eAccountType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"CreateLocalUser", {}, {::i2c::type_of<::by_ref<::Steamworks::HSteamPipe>>(), ::i2c::type_of<::Steamworks::EAccountType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamUser>(nullptr, ___internal_method, phSteamPipe, eAccountType);
}
inline void Steamworks::SteamClient::ReleaseUser(::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::HSteamUser  hUser)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"ReleaseUser", {}, {::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::HSteamUser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hSteamPipe, hUser);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamUser(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamUser", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamGameServer(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamGameServer", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline void Steamworks::SteamClient::SetLocalIPBinding(::by_ref<::Steamworks::SteamIPAddress_t>  unIP, uint16_t  usPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"SetLocalIPBinding", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamIPAddress_t>>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unIP, usPort);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamFriends(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamFriends", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamUtils(::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamUtils", {}, {::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamMatchmaking(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamMatchmaking", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamMatchmakingServers(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamMatchmakingServers", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamGenericInterface(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamGenericInterface", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamUserStats(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamUserStats", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamGameServerStats(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamGameServerStats", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamApps(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamApps", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamNetworking(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamNetworking", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamRemoteStorage(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamRemoteStorage", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamScreenshots(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamScreenshots", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamGameSearch(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamGameSearch", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline uint32_t Steamworks::SteamClient::GetIPCCallCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetIPCCallCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline void Steamworks::SteamClient::SetWarningMessageHook(::Steamworks::SteamAPIWarningMessageHook_t*  pFunction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"SetWarningMessageHook", {}, {::i2c::type_of<::Steamworks::SteamAPIWarningMessageHook_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pFunction);
}
inline bool Steamworks::SteamClient::BShutdownIfAllPipesClosed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"BShutdownIfAllPipesClosed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamHTTP(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamHTTP", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamController(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamController", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamUGC(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamUGC", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamAppList(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamAppList", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamMusic(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamMusic", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamMusicRemote(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamMusicRemote", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamHTMLSurface(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamHTMLSurface", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamInventory(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamInventory", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamVideo(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamVideo", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamParentalSettings(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamParentalSettings", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamInput(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamInput", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamParties(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamParties", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamClient::GetISteamRemotePlay(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamClient*>(),
                        {"GetISteamRemotePlay", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamClient::SteamClient()   {
}

#pragma once
// IWYU pragma private; include "Steamworks/SteamGameServerClient.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamGameServerClient_def.hpp"
#include "Steamworks/zzzz__EAccountType_def.hpp"
#include "Steamworks/zzzz__HSteamPipe_def.hpp"
#include "Steamworks/zzzz__HSteamUser_def.hpp"
#include "Steamworks/zzzz__SteamAPIWarningMessageHook_t_def.hpp"
#include "Steamworks/zzzz__SteamIPAddress_t_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.CreateSteamPipe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamPipe (*)()>(&::Steamworks::SteamGameServerClient::CreateSteamPipe)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18058c010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"CreateSteamPipe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.BReleaseSteamPipe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HSteamPipe)>(&::Steamworks::SteamGameServerClient::BReleaseSteamPipe)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18058be60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"BReleaseSteamPipe", {}, {::i2c::type_of<::Steamworks::HSteamPipe>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.ConnectToGlobalUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamUser (*)(::Steamworks::HSteamPipe)>(&::Steamworks::SteamGameServerClient::ConnectToGlobalUser)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18058bf20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"ConnectToGlobalUser", {}, {::i2c::type_of<::Steamworks::HSteamPipe>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.CreateLocalUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamUser (*)(::by_ref<::Steamworks::HSteamPipe>, ::Steamworks::EAccountType)>(&::Steamworks::SteamGameServerClient::CreateLocalUser)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18058bf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"CreateLocalUser", {}, {::i2c::type_of<::by_ref<::Steamworks::HSteamPipe>>(), ::i2c::type_of<::Steamworks::EAccountType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.ReleaseUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HSteamPipe, ::Steamworks::HSteamUser)>(&::Steamworks::SteamGameServerClient::ReleaseUser)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18058df80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"ReleaseUser", {}, {::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::HSteamUser>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetISteamUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamGameServerClient::GetISteamUser)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18058dc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamUser", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetISteamGameServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamGameServerClient::GetISteamGameServer)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18058c7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamGameServer", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.SetLocalIPBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Steamworks::SteamIPAddress_t>, uint16_t)>(&::Steamworks::SteamGameServerClient::SetLocalIPBinding)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18058dff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"SetLocalIPBinding", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamIPAddress_t>>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetISteamFriends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamGameServerClient::GetISteamFriends)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18058c460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamFriends", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetISteamUtils
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamGameServerClient::GetISteamUtils)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18058dd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamUtils", {}, {::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetISteamMatchmaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamGameServerClient::GetISteamMatchmaking)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18058cf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamMatchmaking", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetISteamMatchmakingServers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamGameServerClient::GetISteamMatchmakingServers)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18058ce50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamMatchmakingServers", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetISteamGenericInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamGameServerClient::GetISteamGenericInterface)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18058c8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamGenericInterface", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetISteamUserStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamGameServerClient::GetISteamUserStats)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18058db00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamUserStats", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetISteamGameServerStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamGameServerClient::GetISteamGameServerStats)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18058c6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamGameServerStats", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetISteamApps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamGameServerClient::GetISteamApps)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18058c200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamApps", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetISteamNetworking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamGameServerClient::GetISteamNetworking)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18058d310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamNetworking", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetISteamRemoteStorage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamGameServerClient::GetISteamRemoteStorage)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18058d7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamRemoteStorage", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetISteamScreenshots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamGameServerClient::GetISteamScreenshots)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18058d8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamScreenshots", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetISteamGameSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamGameServerClient::GetISteamGameSearch)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18058c590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamGameSearch", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetIPCCallCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::Steamworks::SteamGameServerClient::GetIPCCallCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18058c070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetIPCCallCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.SetWarningMessageHook
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::SteamAPIWarningMessageHook_t*)>(&::Steamworks::SteamGameServerClient::SetWarningMessageHook)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18058e060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"SetWarningMessageHook", {}, {::i2c::type_of<::Steamworks::SteamAPIWarningMessageHook_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.BShutdownIfAllPipesClosed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamGameServerClient::BShutdownIfAllPipesClosed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18058bec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"BShutdownIfAllPipesClosed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetISteamHTTP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamGameServerClient::GetISteamHTTP)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18058cb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamHTTP", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetISteamController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamGameServerClient::GetISteamController)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18058c330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamController", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetISteamUGC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamGameServerClient::GetISteamUGC)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18058da00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamUGC", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetISteamAppList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamGameServerClient::GetISteamAppList)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18058c0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamAppList", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetISteamMusic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamGameServerClient::GetISteamMusic)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18058d1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamMusic", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetISteamMusicRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamGameServerClient::GetISteamMusicRemote)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18058d0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamMusicRemote", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetISteamHTMLSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamGameServerClient::GetISteamHTMLSurface)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18058c9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamHTMLSurface", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetISteamInventory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamGameServerClient::GetISteamInventory)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18058cd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamInventory", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetISteamVideo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamGameServerClient::GetISteamVideo)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18058de50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamVideo", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetISteamParentalSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamGameServerClient::GetISteamParentalSettings)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18058d410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamParentalSettings", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetISteamInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamGameServerClient::GetISteamInput)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18058cc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamInput", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetISteamParties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamGameServerClient::GetISteamParties)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18058d540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamParties", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerClient.GetISteamRemotePlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HSteamUser, ::Steamworks::HSteamPipe, ::StringW)>(&::Steamworks::SteamGameServerClient::GetISteamRemotePlay)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18058d670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamRemotePlay", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Steamworks::HSteamPipe Steamworks::SteamGameServerClient::CreateSteamPipe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"CreateSteamPipe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamPipe>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamGameServerClient::BReleaseSteamPipe(::Steamworks::HSteamPipe  hSteamPipe)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"BReleaseSteamPipe", {}, {::i2c::type_of<::Steamworks::HSteamPipe>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hSteamPipe);
}
inline ::Steamworks::HSteamUser Steamworks::SteamGameServerClient::ConnectToGlobalUser(::Steamworks::HSteamPipe  hSteamPipe)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"ConnectToGlobalUser", {}, {::i2c::type_of<::Steamworks::HSteamPipe>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamUser>(nullptr, ___internal_method, hSteamPipe);
}
inline ::Steamworks::HSteamUser Steamworks::SteamGameServerClient::CreateLocalUser(::by_ref<::Steamworks::HSteamPipe>  phSteamPipe, ::Steamworks::EAccountType  eAccountType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"CreateLocalUser", {}, {::i2c::type_of<::by_ref<::Steamworks::HSteamPipe>>(), ::i2c::type_of<::Steamworks::EAccountType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamUser>(nullptr, ___internal_method, phSteamPipe, eAccountType);
}
inline void Steamworks::SteamGameServerClient::ReleaseUser(::Steamworks::HSteamPipe  hSteamPipe, ::Steamworks::HSteamUser  hUser)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"ReleaseUser", {}, {::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::Steamworks::HSteamUser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hSteamPipe, hUser);
}
inline ::System::IntPtr Steamworks::SteamGameServerClient::GetISteamUser(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamUser", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamGameServerClient::GetISteamGameServer(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamGameServer", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline void Steamworks::SteamGameServerClient::SetLocalIPBinding(::by_ref<::Steamworks::SteamIPAddress_t>  unIP, uint16_t  usPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"SetLocalIPBinding", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamIPAddress_t>>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unIP, usPort);
}
inline ::System::IntPtr Steamworks::SteamGameServerClient::GetISteamFriends(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamFriends", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamGameServerClient::GetISteamUtils(::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamUtils", {}, {::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamGameServerClient::GetISteamMatchmaking(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamMatchmaking", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamGameServerClient::GetISteamMatchmakingServers(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamMatchmakingServers", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamGameServerClient::GetISteamGenericInterface(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamGenericInterface", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamGameServerClient::GetISteamUserStats(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamUserStats", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamGameServerClient::GetISteamGameServerStats(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamGameServerStats", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamGameServerClient::GetISteamApps(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamApps", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamGameServerClient::GetISteamNetworking(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamNetworking", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamGameServerClient::GetISteamRemoteStorage(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamRemoteStorage", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamGameServerClient::GetISteamScreenshots(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamScreenshots", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamGameServerClient::GetISteamGameSearch(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamGameSearch", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline uint32_t Steamworks::SteamGameServerClient::GetIPCCallCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetIPCCallCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline void Steamworks::SteamGameServerClient::SetWarningMessageHook(::Steamworks::SteamAPIWarningMessageHook_t*  pFunction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"SetWarningMessageHook", {}, {::i2c::type_of<::Steamworks::SteamAPIWarningMessageHook_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pFunction);
}
inline bool Steamworks::SteamGameServerClient::BShutdownIfAllPipesClosed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"BShutdownIfAllPipesClosed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::IntPtr Steamworks::SteamGameServerClient::GetISteamHTTP(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamHTTP", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamGameServerClient::GetISteamController(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamController", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamGameServerClient::GetISteamUGC(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamUGC", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamGameServerClient::GetISteamAppList(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamAppList", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamGameServerClient::GetISteamMusic(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamMusic", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamGameServerClient::GetISteamMusicRemote(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamMusicRemote", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamGameServerClient::GetISteamHTMLSurface(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamHTMLSurface", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamGameServerClient::GetISteamInventory(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamInventory", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamGameServerClient::GetISteamVideo(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamVideo", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamGameServerClient::GetISteamParentalSettings(::Steamworks::HSteamUser  hSteamuser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamParentalSettings", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamuser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamGameServerClient::GetISteamInput(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamInput", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamGameServerClient::GetISteamParties(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamParties", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
inline ::System::IntPtr Steamworks::SteamGameServerClient::GetISteamRemotePlay(::Steamworks::HSteamUser  hSteamUser, ::Steamworks::HSteamPipe  hSteamPipe, ::StringW  pchVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerClient*>(),
                        {"GetISteamRemotePlay", {}, {::i2c::type_of<::Steamworks::HSteamUser>(), ::i2c::type_of<::Steamworks::HSteamPipe>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hSteamUser, hSteamPipe, pchVersion);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamGameServerClient::SteamGameServerClient()   {
}

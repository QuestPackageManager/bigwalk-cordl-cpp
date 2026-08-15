#pragma once
// IWYU pragma private; include "Steamworks/GameServer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__GameServer_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__EServerMode_def.hpp"
#include "Steamworks/zzzz__HSteamPipe_def.hpp"
#include "Steamworks/zzzz__HSteamUser_def.hpp"
//  Writing Method size for method: ::Steamworks::GameServer.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, uint16_t, uint16_t, ::Steamworks::EServerMode, ::StringW)>(&::Steamworks::GameServer::Init)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180550670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameServer*>(),
                        {"Init", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Steamworks::EServerMode>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::GameServer.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::GameServer::Shutdown)> {
  constexpr static std::size_t size = 0xc00;
  constexpr static std::size_t addrs = 0x1805508d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameServer*>(),
                        {"Shutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::GameServer.RunCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::GameServer::RunCallbacks)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805508c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameServer*>(),
                        {"RunCallbacks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::GameServer.ReleaseCurrentThreadMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::GameServer::ReleaseCurrentThreadMemory)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180550850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameServer*>(),
                        {"ReleaseCurrentThreadMemory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::GameServer.BSecure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::GameServer::BSecure)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805504e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameServer*>(),
                        {"BSecure", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::GameServer.GetSteamID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::CSteamID (*)()>(&::Steamworks::GameServer::GetSteamID)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805505e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameServer*>(),
                        {"GetSteamID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::GameServer.GetHSteamPipe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamPipe (*)()>(&::Steamworks::GameServer::GetHSteamPipe)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180550550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameServer*>(),
                        {"GetHSteamPipe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::GameServer.GetHSteamUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HSteamUser (*)()>(&::Steamworks::GameServer::GetHSteamUser)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180550570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameServer*>(),
                        {"GetHSteamUser", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Steamworks::GameServer::Init(uint32_t  unIP, uint16_t  usGamePort, uint16_t  usQueryPort, ::Steamworks::EServerMode  eServerMode, ::StringW  pchVersionString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameServer*>(),
                        {"Init", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Steamworks::EServerMode>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, unIP, usGamePort, usQueryPort, eServerMode, pchVersionString);
}
inline void Steamworks::GameServer::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameServer*>(),
                        {"Shutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Steamworks::GameServer::RunCallbacks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameServer*>(),
                        {"RunCallbacks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Steamworks::GameServer::ReleaseCurrentThreadMemory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameServer*>(),
                        {"ReleaseCurrentThreadMemory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Steamworks::GameServer::BSecure()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameServer*>(),
                        {"BSecure", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::Steamworks::CSteamID Steamworks::GameServer::GetSteamID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameServer*>(),
                        {"GetSteamID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::CSteamID>(nullptr, ___internal_method);
}
inline ::Steamworks::HSteamPipe Steamworks::GameServer::GetHSteamPipe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameServer*>(),
                        {"GetHSteamPipe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamPipe>(nullptr, ___internal_method);
}
inline ::Steamworks::HSteamUser Steamworks::GameServer::GetHSteamUser()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GameServer*>(),
                        {"GetHSteamUser", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HSteamUser>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Steamworks::GameServer::GameServer()   {
}

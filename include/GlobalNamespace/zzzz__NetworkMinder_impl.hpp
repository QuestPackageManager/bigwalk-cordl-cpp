#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkMinder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkMinder_def.hpp"
#include "GlobalNamespace/zzzz__NetworkMinder_def.hpp"
#include "Mirror/zzzz__NetworkManager_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NetworkMinder_HostTransportType::NetworkMinder_HostTransportType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkMinder_HostTransportType::NetworkMinder_HostTransportType()   {
}
constexpr ::GlobalNamespace::NetworkMinder_HostTransportType  GlobalNamespace::NetworkMinder_HostTransportType::Both{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::NetworkMinder_HostTransportType  GlobalNamespace::NetworkMinder_HostTransportType::Ip{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::NetworkMinder_HostTransportType  GlobalNamespace::NetworkMinder_HostTransportType::Steam{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::NetworkMinder.get_networkManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Mirror::NetworkManager> (::GlobalNamespace::NetworkMinder::*)()>(&::GlobalNamespace::NetworkMinder::get_networkManager)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180426e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"get_networkManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkMinder.JoinGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::NetworkMinder::JoinGame)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180426240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"JoinGame", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkMinder.SetLoadingMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::NetworkMinder::SetLoadingMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180426520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"SetLoadingMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkMinder.CleanupTransport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::NetworkMinder::CleanupTransport)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x180425df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"CleanupTransport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkMinder.ForceResetP2PInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::NetworkMinder::ForceResetP2PInterface)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1804260a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"ForceResetP2PInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkMinder.SetHostTransport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkMinder::*)()>(&::GlobalNamespace::NetworkMinder::SetHostTransport)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x180426380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"SetHostTransport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkMinder.SetPlatformTransport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::NetworkMinder::SetPlatformTransport)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x180426380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"SetPlatformTransport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkMinder.SetStandalonePlatformTransport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::NetworkMinder::SetStandalonePlatformTransport)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1804265a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"SetStandalonePlatformTransport", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkMinder.SetToIpTransport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::NetworkMinder::SetToIpTransport)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1804269b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"SetToIpTransport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkMinder.SetToEOSTransport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::NetworkMinder::SetToEOSTransport)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180426880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"SetToEOSTransport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkMinder.SetToBothTransports
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::NetworkMinder::SetToBothTransports)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1804266f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"SetToBothTransports", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkMinder.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkMinder::*)()>(&::GlobalNamespace::NetworkMinder::Initialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkMinder.SetTransportAndConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::NetworkMinder::SetTransportAndConnect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180426ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"SetTransportAndConnect", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkMinder.ProcessSteamCommandLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkMinder::*)()>(&::GlobalNamespace::NetworkMinder::ProcessSteamCommandLine)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804262f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"ProcessSteamCommandLine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkMinder.StartHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::NetworkMinder::StartHost)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x180426b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"StartHost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkMinder.SetServerPassword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::NetworkMinder::SetServerPassword)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180426530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"SetServerPassword", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkMinder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkMinder::*)()>(&::GlobalNamespace::NetworkMinder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NetworkMinder_HostTransportType& GlobalNamespace::NetworkMinder::__cordl_internal_get_hostTransportType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostTransportType;
}
constexpr ::GlobalNamespace::NetworkMinder_HostTransportType const& GlobalNamespace::NetworkMinder::__cordl_internal_get_hostTransportType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostTransportType;
}
constexpr void GlobalNamespace::NetworkMinder::__cordl_internal_set_hostTransportType(::GlobalNamespace::NetworkMinder_HostTransportType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hostTransportType = value;
}
constexpr bool& GlobalNamespace::NetworkMinder::__cordl_internal_get_hasProcessedCommandLine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasProcessedCommandLine;
}
constexpr bool const& GlobalNamespace::NetworkMinder::__cordl_internal_get_hasProcessedCommandLine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasProcessedCommandLine;
}
constexpr void GlobalNamespace::NetworkMinder::__cordl_internal_set_hasProcessedCommandLine(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasProcessedCommandLine = value;
}
inline ::UnityW<::Mirror::NetworkManager> GlobalNamespace::NetworkMinder::get_networkManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"get_networkManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Mirror::NetworkManager>>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkMinder::JoinGame(::StringW  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"JoinGame", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, address);
}
inline void GlobalNamespace::NetworkMinder::SetLoadingMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"SetLoadingMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::NetworkMinder::CleanupTransport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"CleanupTransport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::NetworkMinder::ForceResetP2PInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"ForceResetP2PInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::NetworkMinder::SetHostTransport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"SetHostTransport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkMinder::SetPlatformTransport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"SetPlatformTransport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::NetworkMinder::SetStandalonePlatformTransport(::StringW  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"SetStandalonePlatformTransport", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, address);
}
inline void GlobalNamespace::NetworkMinder::SetToIpTransport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"SetToIpTransport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::NetworkMinder::SetToEOSTransport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"SetToEOSTransport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::NetworkMinder::SetToBothTransports()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"SetToBothTransports", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::NetworkMinder::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkMinder::SetTransportAndConnect(::StringW  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"SetTransportAndConnect", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, address);
}
inline void GlobalNamespace::NetworkMinder::ProcessSteamCommandLine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"ProcessSteamCommandLine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkMinder::StartHost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"StartHost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::NetworkMinder::SetServerPassword(::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {"SetServerPassword", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, password);
}
inline void GlobalNamespace::NetworkMinder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkMinder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NetworkMinder* GlobalNamespace::NetworkMinder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkMinder*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkMinder::NetworkMinder()   {
}

#pragma once
// IWYU pragma private; include "Mirror/FizzySteam/FizzySteamworks.hpp"
#include "Mirror/zzzz__Transport_impl.hpp"
#include "Steamworks/zzzz__EP2PSend_impl.hpp"
#include "Mirror/FizzySteam/zzzz__FizzySteamworks_def.hpp"
#include "Mirror/FizzySteam/zzzz__IClient_def.hpp"
#include "Mirror/FizzySteam/zzzz__IServer_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Mirror::FizzySteam::FizzySteamworks.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::FizzySteamworks::*)()>(&::Mirror::FizzySteam::FizzySteamworks::OnEnable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18062b540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::FizzySteamworks.ClientEarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::FizzySteamworks::*)()>(&::Mirror::FizzySteam::FizzySteamworks::ClientEarlyUpdate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18062b310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::FizzySteamworks.ServerEarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::FizzySteamworks::*)()>(&::Mirror::FizzySteam::FizzySteamworks::ServerEarlyUpdate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18062b650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::FizzySteamworks.ClientLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::FizzySteamworks::*)()>(&::Mirror::FizzySteam::FizzySteamworks::ClientLateUpdate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18062b350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::FizzySteamworks.ServerLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::FizzySteamworks::*)()>(&::Mirror::FizzySteam::FizzySteamworks::ServerLateUpdate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18062b770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::FizzySteamworks.ClientConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::FizzySteam::FizzySteamworks::*)()>(&::Mirror::FizzySteam::FizzySteamworks::ClientConnected)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18062b2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::FizzySteamworks.ClientConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::FizzySteamworks::*)(::StringW)>(&::Mirror::FizzySteam::FizzySteamworks::ClientConnect)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18062b0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::FizzySteamworks.ClientConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::FizzySteamworks::*)(::System::Uri*)>(&::Mirror::FizzySteam::FizzySteamworks::ClientConnect)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18062b000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::FizzySteamworks.ClientSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::FizzySteamworks::*)(::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::FizzySteam::FizzySteamworks::ClientSend)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18062b390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::FizzySteamworks.ClientDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::FizzySteamworks::*)()>(&::Mirror::FizzySteam::FizzySteamworks::ClientDisconnect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18062b2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::FizzySteamworks.ClientActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::FizzySteam::FizzySteamworks::*)()>(&::Mirror::FizzySteam::FizzySteamworks::ClientActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18062afe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                        {"ClientActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::FizzySteamworks.ServerActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::FizzySteam::FizzySteamworks::*)()>(&::Mirror::FizzySteam::FizzySteamworks::ServerActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18062b560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::FizzySteamworks.ServerStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::FizzySteamworks::*)()>(&::Mirror::FizzySteam::FizzySteamworks::ServerStart)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18062b8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::FizzySteamworks.ServerUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::Mirror::FizzySteam::FizzySteamworks::*)()>(&::Mirror::FizzySteam::FizzySteamworks::ServerUri)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18062bb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::FizzySteamworks.ServerSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::FizzySteamworks::*)(int32_t, ::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::FizzySteam::FizzySteamworks::ServerSend)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18062b7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::FizzySteamworks.ServerDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::FizzySteamworks::*)(int32_t)>(&::Mirror::FizzySteam::FizzySteamworks::ServerDisconnect)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18062b580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::FizzySteamworks.ServerGetClientAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mirror::FizzySteam::FizzySteamworks::*)(int32_t)>(&::Mirror::FizzySteam::FizzySteamworks::ServerGetClientAddress)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18062b690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::FizzySteamworks.ServerStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::FizzySteamworks::*)()>(&::Mirror::FizzySteam::FizzySteamworks::ServerStop)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18062bab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::FizzySteamworks.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::FizzySteamworks::*)()>(&::Mirror::FizzySteam::FizzySteamworks::Shutdown)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18062bb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::FizzySteamworks.GetMaxPacketSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::FizzySteam::FizzySteamworks::*)(int32_t)>(&::Mirror::FizzySteam::FizzySteamworks::GetMaxPacketSize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18062b490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::FizzySteamworks.Available
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::FizzySteam::FizzySteamworks::*)()>(&::Mirror::FizzySteam::FizzySteamworks::Available)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18062afc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::FizzySteamworks.InitRelayNetworkAccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::FizzySteamworks::*)()>(&::Mirror::FizzySteam::FizzySteamworks::InitRelayNetworkAccess)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18062b500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                        {"InitRelayNetworkAccess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::FizzySteamworks.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::FizzySteamworks::*)()>(&::Mirror::FizzySteam::FizzySteamworks::OnDestroy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18062b520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::FizzySteamworks._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::FizzySteamworks::*)()>(&::Mirror::FizzySteam::FizzySteamworks::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18062bc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Steamworks::EP2PSend>& Mirror::FizzySteam::FizzySteamworks::__cordl_internal_get_Channels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Channels;
}
constexpr ::ArrayW<::Steamworks::EP2PSend> const& Mirror::FizzySteam::FizzySteamworks::__cordl_internal_get_Channels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Channels;
}
constexpr void Mirror::FizzySteam::FizzySteamworks::__cordl_internal_set_Channels(::ArrayW<::Steamworks::EP2PSend>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Channels = value;
}
constexpr int32_t& Mirror::FizzySteam::FizzySteamworks::__cordl_internal_get_Timeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Timeout;
}
constexpr int32_t const& Mirror::FizzySteam::FizzySteamworks::__cordl_internal_get_Timeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Timeout;
}
constexpr void Mirror::FizzySteam::FizzySteamworks::__cordl_internal_set_Timeout(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Timeout = value;
}
constexpr bool& Mirror::FizzySteam::FizzySteamworks::__cordl_internal_get_AllowSteamRelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowSteamRelay;
}
constexpr bool const& Mirror::FizzySteam::FizzySteamworks::__cordl_internal_get_AllowSteamRelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowSteamRelay;
}
constexpr void Mirror::FizzySteam::FizzySteamworks::__cordl_internal_set_AllowSteamRelay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AllowSteamRelay = value;
}
constexpr bool& Mirror::FizzySteam::FizzySteamworks::__cordl_internal_get_UseNextGenSteamNetworking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseNextGenSteamNetworking;
}
constexpr bool const& Mirror::FizzySteam::FizzySteamworks::__cordl_internal_get_UseNextGenSteamNetworking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseNextGenSteamNetworking;
}
constexpr void Mirror::FizzySteam::FizzySteamworks::__cordl_internal_set_UseNextGenSteamNetworking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseNextGenSteamNetworking = value;
}
inline void Mirror::FizzySteam::FizzySteamworks::setStaticF_client(::Mirror::FizzySteam::IClient*  value)  {
::cordl_internals::setStaticField<::Mirror::FizzySteam::IClient*, "client", ::Mirror::FizzySteam::FizzySteamworks*>(std::forward<::Mirror::FizzySteam::IClient*>(value));
}
inline ::Mirror::FizzySteam::IClient* Mirror::FizzySteam::FizzySteamworks::getStaticF_client()  {
return ::cordl_internals::getStaticField<::Mirror::FizzySteam::IClient*, "client", ::Mirror::FizzySteam::FizzySteamworks*>();
}
inline void Mirror::FizzySteam::FizzySteamworks::setStaticF_server(::Mirror::FizzySteam::IServer*  value)  {
::cordl_internals::setStaticField<::Mirror::FizzySteam::IServer*, "server", ::Mirror::FizzySteam::FizzySteamworks*>(std::forward<::Mirror::FizzySteam::IServer*>(value));
}
inline ::Mirror::FizzySteam::IServer* Mirror::FizzySteam::FizzySteamworks::getStaticF_server()  {
return ::cordl_internals::getStaticField<::Mirror::FizzySteam::IServer*, "server", ::Mirror::FizzySteam::FizzySteamworks*>();
}
inline void Mirror::FizzySteam::FizzySteamworks::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::FizzySteamworks::ClientEarlyUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::FizzySteamworks::ServerEarlyUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::FizzySteamworks::ClientLateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::FizzySteamworks::ServerLateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::FizzySteam::FizzySteamworks::ClientConnected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::FizzySteam::FizzySteamworks::ClientConnect(::StringW  address)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline void Mirror::FizzySteam::FizzySteamworks::ClientConnect(::System::Uri*  uri)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri);
}
inline void Mirror::FizzySteam::FizzySteamworks::ClientSend(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment, channelId);
}
inline void Mirror::FizzySteam::FizzySteamworks::ClientDisconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::FizzySteam::FizzySteamworks::ClientActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                        {"ClientActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Mirror::FizzySteam::FizzySteamworks::ServerActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::FizzySteam::FizzySteamworks::ServerStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Uri* Mirror::FizzySteam::FizzySteamworks::ServerUri()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline void Mirror::FizzySteam::FizzySteamworks::ServerSend(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId, segment, channelId);
}
inline void Mirror::FizzySteam::FizzySteamworks::ServerDisconnect(int32_t  connectionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId);
}
inline ::StringW Mirror::FizzySteam::FizzySteamworks::ServerGetClientAddress(int32_t  connectionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, connectionId);
}
inline void Mirror::FizzySteam::FizzySteamworks::ServerStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::FizzySteamworks::Shutdown()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Mirror::FizzySteam::FizzySteamworks::GetMaxPacketSize(int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, channelId);
}
inline bool Mirror::FizzySteam::FizzySteamworks::Available()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::FizzySteam::FizzySteamworks::InitRelayNetworkAccess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                        {"InitRelayNetworkAccess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::FizzySteamworks::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::FizzySteamworks::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::FizzySteamworks*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::FizzySteam::FizzySteamworks* Mirror::FizzySteam::FizzySteamworks::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::FizzySteam::FizzySteamworks*>());
}
// Ctor Parameters []
constexpr ::Mirror::FizzySteam::FizzySteamworks::FizzySteamworks()   {
}

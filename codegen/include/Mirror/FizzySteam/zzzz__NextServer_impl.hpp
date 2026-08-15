#pragma once
// IWYU pragma private; include "Mirror/FizzySteam/NextServer.hpp"
#include "Mirror/FizzySteam/zzzz__NextCommon_impl.hpp"
#include "Steamworks/zzzz__HSteamListenSocket_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/FizzySteam/zzzz__NextServer_def.hpp"
#include "Mirror/FizzySteam/zzzz__BidirectionalDictionary_2_def.hpp"
#include "Mirror/FizzySteam/zzzz__FizzySteamworks_def.hpp"
#include "Mirror/FizzySteam/zzzz__IServer_def.hpp"
#include "Mirror/FizzySteam/zzzz__NextServer_def.hpp"
#include "Mirror/zzzz__TransportError_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__Callback_1_def.hpp"
#include "Steamworks/zzzz__HSteamNetConnection_def.hpp"
#include "Steamworks/zzzz__SteamNetConnectionStatusChangedCallback_t_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
//  Writing Method size for method: ::Mirror::FizzySteam::NextServer___c__DisplayClass19_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextServer___c__DisplayClass19_0::*)()>(&::Mirror::FizzySteam::NextServer___c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer___c__DisplayClass19_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextServer___c__DisplayClass19_0._CreateServer_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextServer___c__DisplayClass19_0::*)(int32_t)>(&::Mirror::FizzySteam::NextServer___c__DisplayClass19_0::_CreateServer_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1806310c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer___c__DisplayClass19_0*>(),
                        {"<CreateServer>b__0", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextServer___c__DisplayClass19_0._CreateServer_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextServer___c__DisplayClass19_0::*)(int32_t)>(&::Mirror::FizzySteam::NextServer___c__DisplayClass19_0::_CreateServer_b__1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1806310f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer___c__DisplayClass19_0*>(),
                        {"<CreateServer>b__1", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextServer___c__DisplayClass19_0._CreateServer_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextServer___c__DisplayClass19_0::*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(&::Mirror::FizzySteam::NextServer___c__DisplayClass19_0::_CreateServer_b__2)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180631120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer___c__DisplayClass19_0*>(),
                        {"<CreateServer>b__2", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextServer___c__DisplayClass19_0._CreateServer_b__3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextServer___c__DisplayClass19_0::*)(int32_t, ::Mirror::TransportError, ::StringW)>(&::Mirror::FizzySteam::NextServer___c__DisplayClass19_0::_CreateServer_b__3)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1806311a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer___c__DisplayClass19_0*>(),
                        {"<CreateServer>b__3", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::TransportError>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Mirror::FizzySteam::FizzySteamworks>& Mirror::FizzySteam::NextServer___c__DisplayClass19_0::__cordl_internal_get_transport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transport;
}
constexpr ::UnityW<::Mirror::FizzySteam::FizzySteamworks> const& Mirror::FizzySteam::NextServer___c__DisplayClass19_0::__cordl_internal_get_transport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transport;
}
constexpr void Mirror::FizzySteam::NextServer___c__DisplayClass19_0::__cordl_internal_set_transport(::UnityW<::Mirror::FizzySteam::FizzySteamworks>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transport = value;
}
inline void Mirror::FizzySteam::NextServer___c__DisplayClass19_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer___c__DisplayClass19_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::NextServer___c__DisplayClass19_0::_CreateServer_b__0(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer___c__DisplayClass19_0*>(),
                        {"<CreateServer>b__0", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Mirror::FizzySteam::NextServer___c__DisplayClass19_0::_CreateServer_b__1(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer___c__DisplayClass19_0*>(),
                        {"<CreateServer>b__1", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Mirror::FizzySteam::NextServer___c__DisplayClass19_0::_CreateServer_b__2(int32_t  id, ::ArrayW<uint8_t>  data, int32_t  ch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer___c__DisplayClass19_0*>(),
                        {"<CreateServer>b__2", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, data, ch);
}
inline void Mirror::FizzySteam::NextServer___c__DisplayClass19_0::_CreateServer_b__3(int32_t  id, ::Mirror::TransportError  error, ::StringW  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer___c__DisplayClass19_0*>(),
                        {"<CreateServer>b__3", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::TransportError>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, error, reason);
}
inline ::Mirror::FizzySteam::NextServer___c__DisplayClass19_0* Mirror::FizzySteam::NextServer___c__DisplayClass19_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::FizzySteam::NextServer___c__DisplayClass19_0*>());
}
// Ctor Parameters []
constexpr ::Mirror::FizzySteam::NextServer___c__DisplayClass19_0::NextServer___c__DisplayClass19_0()   {
}
//  Writing Method size for method: ::Mirror::FizzySteam::NextServer.add_OnConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextServer::*)(::System::Action_1<int32_t>*)>(&::Mirror::FizzySteam::NextServer::add_OnConnected)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18062fee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"add_OnConnected", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextServer.remove_OnConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextServer::*)(::System::Action_1<int32_t>*)>(&::Mirror::FizzySteam::NextServer::remove_OnConnected)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180630120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"remove_OnConnected", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextServer.add_OnReceivedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextServer::*)(::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*)>(&::Mirror::FizzySteam::NextServer::add_OnReceivedData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180630000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"add_OnReceivedData", {}, {::i2c::type_of<::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextServer.remove_OnReceivedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextServer::*)(::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*)>(&::Mirror::FizzySteam::NextServer::remove_OnReceivedData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180630240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"remove_OnReceivedData", {}, {::i2c::type_of<::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextServer.add_OnDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextServer::*)(::System::Action_1<int32_t>*)>(&::Mirror::FizzySteam::NextServer::add_OnDisconnected)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18062ff70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"add_OnDisconnected", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextServer.remove_OnDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextServer::*)(::System::Action_1<int32_t>*)>(&::Mirror::FizzySteam::NextServer::remove_OnDisconnected)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1806301b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"remove_OnDisconnected", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextServer.add_OnReceivedError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextServer::*)(::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*)>(&::Mirror::FizzySteam::NextServer::add_OnReceivedError)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180630090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"add_OnReceivedError", {}, {::i2c::type_of<::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextServer.remove_OnReceivedError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextServer::*)(::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*)>(&::Mirror::FizzySteam::NextServer::remove_OnReceivedError)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1806302d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"remove_OnReceivedError", {}, {::i2c::type_of<::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextServer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextServer::*)(int32_t)>(&::Mirror::FizzySteam::NextServer::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18062fe20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextServer.CreateServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::FizzySteam::NextServer* (*)(::Mirror::FizzySteam::FizzySteamworks*, int32_t)>(&::Mirror::FizzySteam::NextServer::CreateServer)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x18062ef40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"CreateServer", {}, {::i2c::type_of<::Mirror::FizzySteam::FizzySteamworks*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextServer.Host
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextServer::*)()>(&::Mirror::FizzySteam::NextServer::Host)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18062f580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"Host", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextServer.OnConnectionStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextServer::*)(::Steamworks::SteamNetConnectionStatusChangedCallback_t)>(&::Mirror::FizzySteam::NextServer::OnConnectionStatusChanged)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x18062f690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"OnConnectionStatusChanged", {}, {::i2c::type_of<::Steamworks::SteamNetConnectionStatusChangedCallback_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextServer.InternalDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextServer::*)(int32_t, ::Steamworks::HSteamNetConnection)>(&::Mirror::FizzySteam::NextServer::InternalDisconnect)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18062f5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"InternalDisconnect", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Steamworks::HSteamNetConnection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextServer.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextServer::*)(int32_t)>(&::Mirror::FizzySteam::NextServer::Disconnect)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18062f2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"Disconnect", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextServer.FlushData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextServer::*)()>(&::Mirror::FizzySteam::NextServer::FlushData)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18062f400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"FlushData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextServer.ReceiveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextServer::*)()>(&::Mirror::FizzySteam::NextServer::ReceiveData)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18062f9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"ReceiveData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextServer.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextServer::*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(&::Mirror::FizzySteam::NextServer::Send)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18062fb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"Send", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextServer.ServerGetClientAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mirror::FizzySteam::NextServer::*)(int32_t)>(&::Mirror::FizzySteam::NextServer::ServerGetClientAddress)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18062fd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"ServerGetClientAddress", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::NextServer.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::NextServer::*)()>(&::Mirror::FizzySteam::NextServer::Shutdown)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18062fdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"Shutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<int32_t>*& Mirror::FizzySteam::NextServer::__cordl_internal_get_OnConnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnected;
}
constexpr ::System::Action_1<int32_t>* const& Mirror::FizzySteam::NextServer::__cordl_internal_get_OnConnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnected;
}
constexpr void Mirror::FizzySteam::NextServer::__cordl_internal_set_OnConnected(::System::Action_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnConnected = value;
}
constexpr ::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*& Mirror::FizzySteam::NextServer::__cordl_internal_get_OnReceivedData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReceivedData;
}
constexpr ::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>* const& Mirror::FizzySteam::NextServer::__cordl_internal_get_OnReceivedData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReceivedData;
}
constexpr void Mirror::FizzySteam::NextServer::__cordl_internal_set_OnReceivedData(::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnReceivedData = value;
}
constexpr ::System::Action_1<int32_t>*& Mirror::FizzySteam::NextServer::__cordl_internal_get_OnDisconnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnected;
}
constexpr ::System::Action_1<int32_t>* const& Mirror::FizzySteam::NextServer::__cordl_internal_get_OnDisconnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnected;
}
constexpr void Mirror::FizzySteam::NextServer::__cordl_internal_set_OnDisconnected(::System::Action_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDisconnected = value;
}
constexpr ::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*& Mirror::FizzySteam::NextServer::__cordl_internal_get_OnReceivedError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReceivedError;
}
constexpr ::System::Action_3<int32_t,::Mirror::TransportError,::StringW>* const& Mirror::FizzySteam::NextServer::__cordl_internal_get_OnReceivedError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReceivedError;
}
constexpr void Mirror::FizzySteam::NextServer::__cordl_internal_set_OnReceivedError(::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnReceivedError = value;
}
constexpr ::Mirror::FizzySteam::BidirectionalDictionary_2<::Steamworks::HSteamNetConnection,int32_t>*& Mirror::FizzySteam::NextServer::__cordl_internal_get_connToMirrorID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connToMirrorID;
}
constexpr ::Mirror::FizzySteam::BidirectionalDictionary_2<::Steamworks::HSteamNetConnection,int32_t>* const& Mirror::FizzySteam::NextServer::__cordl_internal_get_connToMirrorID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connToMirrorID;
}
constexpr void Mirror::FizzySteam::NextServer::__cordl_internal_set_connToMirrorID(::Mirror::FizzySteam::BidirectionalDictionary_2<::Steamworks::HSteamNetConnection,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connToMirrorID = value;
}
constexpr ::Mirror::FizzySteam::BidirectionalDictionary_2<::Steamworks::CSteamID,int32_t>*& Mirror::FizzySteam::NextServer::__cordl_internal_get_steamIDToMirrorID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steamIDToMirrorID;
}
constexpr ::Mirror::FizzySteam::BidirectionalDictionary_2<::Steamworks::CSteamID,int32_t>* const& Mirror::FizzySteam::NextServer::__cordl_internal_get_steamIDToMirrorID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steamIDToMirrorID;
}
constexpr void Mirror::FizzySteam::NextServer::__cordl_internal_set_steamIDToMirrorID(::Mirror::FizzySteam::BidirectionalDictionary_2<::Steamworks::CSteamID,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___steamIDToMirrorID = value;
}
constexpr int32_t& Mirror::FizzySteam::NextServer::__cordl_internal_get_maxConnections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxConnections;
}
constexpr int32_t const& Mirror::FizzySteam::NextServer::__cordl_internal_get_maxConnections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxConnections;
}
constexpr void Mirror::FizzySteam::NextServer::__cordl_internal_set_maxConnections(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxConnections = value;
}
constexpr int32_t& Mirror::FizzySteam::NextServer::__cordl_internal_get_nextConnectionID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextConnectionID;
}
constexpr int32_t const& Mirror::FizzySteam::NextServer::__cordl_internal_get_nextConnectionID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextConnectionID;
}
constexpr void Mirror::FizzySteam::NextServer::__cordl_internal_set_nextConnectionID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextConnectionID = value;
}
constexpr ::Steamworks::HSteamListenSocket& Mirror::FizzySteam::NextServer::__cordl_internal_get_listenSocket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenSocket;
}
constexpr ::Steamworks::HSteamListenSocket const& Mirror::FizzySteam::NextServer::__cordl_internal_get_listenSocket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenSocket;
}
constexpr void Mirror::FizzySteam::NextServer::__cordl_internal_set_listenSocket(::Steamworks::HSteamListenSocket  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___listenSocket = value;
}
constexpr ::Steamworks::Callback_1<::Steamworks::SteamNetConnectionStatusChangedCallback_t>*& Mirror::FizzySteam::NextServer::__cordl_internal_get_c_onConnectionChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___c_onConnectionChange;
}
constexpr ::Steamworks::Callback_1<::Steamworks::SteamNetConnectionStatusChangedCallback_t>* const& Mirror::FizzySteam::NextServer::__cordl_internal_get_c_onConnectionChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___c_onConnectionChange;
}
constexpr void Mirror::FizzySteam::NextServer::__cordl_internal_set_c_onConnectionChange(::Steamworks::Callback_1<::Steamworks::SteamNetConnectionStatusChangedCallback_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___c_onConnectionChange = value;
}
inline void Mirror::FizzySteam::NextServer::add_OnConnected(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"add_OnConnected", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::NextServer::remove_OnConnected(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"remove_OnConnected", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::NextServer::add_OnReceivedData(::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"add_OnReceivedData", {}, {::i2c::type_of<::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::NextServer::remove_OnReceivedData(::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"remove_OnReceivedData", {}, {::i2c::type_of<::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::NextServer::add_OnDisconnected(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"add_OnDisconnected", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::NextServer::remove_OnDisconnected(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"remove_OnDisconnected", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::NextServer::add_OnReceivedError(::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"add_OnReceivedError", {}, {::i2c::type_of<::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::NextServer::remove_OnReceivedError(::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"remove_OnReceivedError", {}, {::i2c::type_of<::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::NextServer::_ctor(int32_t  maxConnections)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxConnections);
}
inline ::Mirror::FizzySteam::NextServer* Mirror::FizzySteam::NextServer::CreateServer(::Mirror::FizzySteam::FizzySteamworks*  transport, int32_t  maxConnections)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"CreateServer", {}, {::i2c::type_of<::Mirror::FizzySteam::FizzySteamworks*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::FizzySteam::NextServer*>(nullptr, ___internal_method, transport, maxConnections);
}
inline void Mirror::FizzySteam::NextServer::Host()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"Host", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::NextServer::OnConnectionStatusChanged(::Steamworks::SteamNetConnectionStatusChangedCallback_t  param)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"OnConnectionStatusChanged", {}, {::i2c::type_of<::Steamworks::SteamNetConnectionStatusChangedCallback_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, param);
}
inline void Mirror::FizzySteam::NextServer::InternalDisconnect(int32_t  connId, ::Steamworks::HSteamNetConnection  socket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"InternalDisconnect", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Steamworks::HSteamNetConnection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connId, socket);
}
inline void Mirror::FizzySteam::NextServer::Disconnect(int32_t  connectionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"Disconnect", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId);
}
inline void Mirror::FizzySteam::NextServer::FlushData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"FlushData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::NextServer::ReceiveData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"ReceiveData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::NextServer::Send(int32_t  connectionId, ::ArrayW<uint8_t>  data, int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"Send", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId, data, channelId);
}
inline ::StringW Mirror::FizzySteam::NextServer::ServerGetClientAddress(int32_t  connectionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"ServerGetClientAddress", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, connectionId);
}
inline void Mirror::FizzySteam::NextServer::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::NextServer*>(),
                        {"Shutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::FizzySteam::NextServer* Mirror::FizzySteam::NextServer::New_ctor(int32_t  maxConnections)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::FizzySteam::NextServer*>(maxConnections));
}
/// @brief Convert operator to "::Mirror::FizzySteam::IServer"
constexpr  Mirror::FizzySteam::NextServer::operator ::Mirror::FizzySteam::IServer*() noexcept {
return static_cast<::Mirror::FizzySteam::IServer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Mirror::FizzySteam::IServer"
constexpr ::Mirror::FizzySteam::IServer* Mirror::FizzySteam::NextServer::i___Mirror__FizzySteam__IServer() noexcept {
return static_cast<::Mirror::FizzySteam::IServer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mirror::FizzySteam::NextServer::NextServer()   {
}

#pragma once
// IWYU pragma private; include "Mirror/FizzySteam/LegacyServer.hpp"
#include "Mirror/FizzySteam/zzzz__LegacyCommon_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/FizzySteam/zzzz__LegacyServer_def.hpp"
#include "Mirror/FizzySteam/zzzz__BidirectionalDictionary_2_def.hpp"
#include "Mirror/FizzySteam/zzzz__FizzySteamworks_def.hpp"
#include "Mirror/FizzySteam/zzzz__IServer_def.hpp"
#include "Mirror/FizzySteam/zzzz__LegacyCommon_def.hpp"
#include "Mirror/FizzySteam/zzzz__LegacyServer_def.hpp"
#include "Mirror/zzzz__TransportError_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__P2PSessionRequest_t_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0::*)()>(&::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0._CreateServer_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0::*)(int32_t)>(&::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0::_CreateServer_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1806310c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0*>(),
                        {"<CreateServer>b__0", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0._CreateServer_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0::*)(int32_t)>(&::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0::_CreateServer_b__1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1806310f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0*>(),
                        {"<CreateServer>b__1", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0._CreateServer_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0::*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(&::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0::_CreateServer_b__2)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180631120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0*>(),
                        {"<CreateServer>b__2", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0._CreateServer_b__3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0::*)(int32_t, ::Mirror::TransportError, ::StringW)>(&::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0::_CreateServer_b__3)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1806311a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0*>(),
                        {"<CreateServer>b__3", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::TransportError>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Mirror::FizzySteam::FizzySteamworks>& Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0::__cordl_internal_get_transport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transport;
}
constexpr ::UnityW<::Mirror::FizzySteam::FizzySteamworks> const& Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0::__cordl_internal_get_transport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transport;
}
constexpr void Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0::__cordl_internal_set_transport(::UnityW<::Mirror::FizzySteam::FizzySteamworks>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transport = value;
}
inline void Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0::_CreateServer_b__0(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0*>(),
                        {"<CreateServer>b__0", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0::_CreateServer_b__1(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0*>(),
                        {"<CreateServer>b__1", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0::_CreateServer_b__2(int32_t  id, ::ArrayW<uint8_t>  data, int32_t  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0*>(),
                        {"<CreateServer>b__2", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, data, channel);
}
inline void Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0::_CreateServer_b__3(int32_t  id, ::Mirror::TransportError  error, ::StringW  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0*>(),
                        {"<CreateServer>b__3", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::TransportError>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, error, reason);
}
inline ::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0* Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0*>());
}
// Ctor Parameters []
constexpr ::Mirror::FizzySteam::LegacyServer___c__DisplayClass15_0::LegacyServer___c__DisplayClass15_0()   {
}
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyServer.add_OnConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyServer::*)(::System::Action_1<int32_t>*)>(&::Mirror::FizzySteam::LegacyServer::add_OnConnected)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18062da90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"add_OnConnected", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyServer.remove_OnConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyServer::*)(::System::Action_1<int32_t>*)>(&::Mirror::FizzySteam::LegacyServer::remove_OnConnected)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18062dcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"remove_OnConnected", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyServer.add_OnReceivedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyServer::*)(::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*)>(&::Mirror::FizzySteam::LegacyServer::add_OnReceivedData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18062dbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"add_OnReceivedData", {}, {::i2c::type_of<::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyServer.remove_OnReceivedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyServer::*)(::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*)>(&::Mirror::FizzySteam::LegacyServer::remove_OnReceivedData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18062ddf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"remove_OnReceivedData", {}, {::i2c::type_of<::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyServer.add_OnDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyServer::*)(::System::Action_1<int32_t>*)>(&::Mirror::FizzySteam::LegacyServer::add_OnDisconnected)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18062db20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"add_OnDisconnected", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyServer.remove_OnDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyServer::*)(::System::Action_1<int32_t>*)>(&::Mirror::FizzySteam::LegacyServer::remove_OnDisconnected)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18062dd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"remove_OnDisconnected", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyServer.add_OnReceivedError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyServer::*)(::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*)>(&::Mirror::FizzySteam::LegacyServer::add_OnReceivedError)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18062dc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"add_OnReceivedError", {}, {::i2c::type_of<::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyServer.remove_OnReceivedError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyServer::*)(::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*)>(&::Mirror::FizzySteam::LegacyServer::remove_OnReceivedError)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18062de80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"remove_OnReceivedError", {}, {::i2c::type_of<::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyServer.CreateServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::FizzySteam::LegacyServer* (*)(::Mirror::FizzySteam::FizzySteamworks*, int32_t)>(&::Mirror::FizzySteam::LegacyServer::CreateServer)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x18062ce50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"CreateServer", {}, {::i2c::type_of<::Mirror::FizzySteam::FizzySteamworks*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyServer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyServer::*)(::Mirror::FizzySteam::FizzySteamworks*, int32_t)>(&::Mirror::FizzySteam::LegacyServer::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18062da30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::FizzySteam::FizzySteamworks*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyServer.OnNewConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyServer::*)(::Steamworks::P2PSessionRequest_t)>(&::Mirror::FizzySteam::LegacyServer::OnNewConnection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18062d290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyServer.OnReceiveInternalData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyServer::*)(::Mirror::FizzySteam::LegacyCommon_InternalMessages, ::Steamworks::CSteamID)>(&::Mirror::FizzySteam::LegacyServer::OnReceiveInternalData)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18062d3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyServer.OnReceiveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyServer::*)(::ArrayW<uint8_t>, ::Steamworks::CSteamID, int32_t)>(&::Mirror::FizzySteam::LegacyServer::OnReceiveData)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18062d2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyServer.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyServer::*)(int32_t)>(&::Mirror::FizzySteam::LegacyServer::Disconnect)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18062d160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"Disconnect", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyServer.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyServer::*)()>(&::Mirror::FizzySteam::LegacyServer::Shutdown)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x18062d770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"Shutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyServer.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyServer::*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(&::Mirror::FizzySteam::LegacyServer::Send)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18062d590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"Send", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyServer.ServerGetClientAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mirror::FizzySteam::LegacyServer::*)(int32_t)>(&::Mirror::FizzySteam::LegacyServer::ServerGetClientAddress)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18062d6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"ServerGetClientAddress", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyServer.OnConnectionFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyServer::*)(::Steamworks::CSteamID)>(&::Mirror::FizzySteam::LegacyServer::OnConnectionFailed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18062d200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                    {::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::FizzySteam::LegacyServer.FlushData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::FizzySteam::LegacyServer::*)()>(&::Mirror::FizzySteam::LegacyServer::FlushData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"FlushData", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<int32_t>*& Mirror::FizzySteam::LegacyServer::__cordl_internal_get_OnConnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnected;
}
constexpr ::System::Action_1<int32_t>* const& Mirror::FizzySteam::LegacyServer::__cordl_internal_get_OnConnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnected;
}
constexpr void Mirror::FizzySteam::LegacyServer::__cordl_internal_set_OnConnected(::System::Action_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnConnected = value;
}
constexpr ::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*& Mirror::FizzySteam::LegacyServer::__cordl_internal_get_OnReceivedData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReceivedData;
}
constexpr ::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>* const& Mirror::FizzySteam::LegacyServer::__cordl_internal_get_OnReceivedData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReceivedData;
}
constexpr void Mirror::FizzySteam::LegacyServer::__cordl_internal_set_OnReceivedData(::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnReceivedData = value;
}
constexpr ::System::Action_1<int32_t>*& Mirror::FizzySteam::LegacyServer::__cordl_internal_get_OnDisconnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnected;
}
constexpr ::System::Action_1<int32_t>* const& Mirror::FizzySteam::LegacyServer::__cordl_internal_get_OnDisconnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnected;
}
constexpr void Mirror::FizzySteam::LegacyServer::__cordl_internal_set_OnDisconnected(::System::Action_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDisconnected = value;
}
constexpr ::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*& Mirror::FizzySteam::LegacyServer::__cordl_internal_get_OnReceivedError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReceivedError;
}
constexpr ::System::Action_3<int32_t,::Mirror::TransportError,::StringW>* const& Mirror::FizzySteam::LegacyServer::__cordl_internal_get_OnReceivedError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReceivedError;
}
constexpr void Mirror::FizzySteam::LegacyServer::__cordl_internal_set_OnReceivedError(::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnReceivedError = value;
}
constexpr ::Mirror::FizzySteam::BidirectionalDictionary_2<::Steamworks::CSteamID,int32_t>*& Mirror::FizzySteam::LegacyServer::__cordl_internal_get_steamToMirrorIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steamToMirrorIds;
}
constexpr ::Mirror::FizzySteam::BidirectionalDictionary_2<::Steamworks::CSteamID,int32_t>* const& Mirror::FizzySteam::LegacyServer::__cordl_internal_get_steamToMirrorIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steamToMirrorIds;
}
constexpr void Mirror::FizzySteam::LegacyServer::__cordl_internal_set_steamToMirrorIds(::Mirror::FizzySteam::BidirectionalDictionary_2<::Steamworks::CSteamID,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___steamToMirrorIds = value;
}
constexpr int32_t& Mirror::FizzySteam::LegacyServer::__cordl_internal_get_maxConnections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxConnections;
}
constexpr int32_t const& Mirror::FizzySteam::LegacyServer::__cordl_internal_get_maxConnections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxConnections;
}
constexpr void Mirror::FizzySteam::LegacyServer::__cordl_internal_set_maxConnections(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxConnections = value;
}
constexpr int32_t& Mirror::FizzySteam::LegacyServer::__cordl_internal_get_nextConnectionID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextConnectionID;
}
constexpr int32_t const& Mirror::FizzySteam::LegacyServer::__cordl_internal_get_nextConnectionID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextConnectionID;
}
constexpr void Mirror::FizzySteam::LegacyServer::__cordl_internal_set_nextConnectionID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextConnectionID = value;
}
inline void Mirror::FizzySteam::LegacyServer::add_OnConnected(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"add_OnConnected", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::LegacyServer::remove_OnConnected(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"remove_OnConnected", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::LegacyServer::add_OnReceivedData(::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"add_OnReceivedData", {}, {::i2c::type_of<::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::LegacyServer::remove_OnReceivedData(::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"remove_OnReceivedData", {}, {::i2c::type_of<::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::LegacyServer::add_OnDisconnected(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"add_OnDisconnected", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::LegacyServer::remove_OnDisconnected(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"remove_OnDisconnected", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::LegacyServer::add_OnReceivedError(::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"add_OnReceivedError", {}, {::i2c::type_of<::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::FizzySteam::LegacyServer::remove_OnReceivedError(::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"remove_OnReceivedError", {}, {::i2c::type_of<::System::Action_3<int32_t,::Mirror::TransportError,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Mirror::FizzySteam::LegacyServer* Mirror::FizzySteam::LegacyServer::CreateServer(::Mirror::FizzySteam::FizzySteamworks*  transport, int32_t  maxConnections)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"CreateServer", {}, {::i2c::type_of<::Mirror::FizzySteam::FizzySteamworks*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::FizzySteam::LegacyServer*>(nullptr, ___internal_method, transport, maxConnections);
}
inline void Mirror::FizzySteam::LegacyServer::_ctor(::Mirror::FizzySteam::FizzySteamworks*  transport, int32_t  maxConnections)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::FizzySteam::FizzySteamworks*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transport, maxConnections);
}
inline void Mirror::FizzySteam::LegacyServer::OnNewConnection(::Steamworks::P2PSessionRequest_t  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Mirror::FizzySteam::LegacyServer::OnReceiveInternalData(::Mirror::FizzySteam::LegacyCommon_InternalMessages  type, ::Steamworks::CSteamID  clientSteamID)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, clientSteamID);
}
inline void Mirror::FizzySteam::LegacyServer::OnReceiveData(::ArrayW<uint8_t>  data, ::Steamworks::CSteamID  clientSteamID, int32_t  channel)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, clientSteamID, channel);
}
inline void Mirror::FizzySteam::LegacyServer::Disconnect(int32_t  connectionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"Disconnect", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId);
}
inline void Mirror::FizzySteam::LegacyServer::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"Shutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::FizzySteam::LegacyServer::Send(int32_t  connectionId, ::ArrayW<uint8_t>  data, int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"Send", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId, data, channelId);
}
inline ::StringW Mirror::FizzySteam::LegacyServer::ServerGetClientAddress(int32_t  connectionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"ServerGetClientAddress", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, connectionId);
}
inline void Mirror::FizzySteam::LegacyServer::OnConnectionFailed(::Steamworks::CSteamID  remoteId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remoteId);
}
inline void Mirror::FizzySteam::LegacyServer::FlushData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::LegacyServer*>(),
                        {"FlushData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::FizzySteam::LegacyServer* Mirror::FizzySteam::LegacyServer::New_ctor(::Mirror::FizzySteam::FizzySteamworks*  transport, int32_t  maxConnections)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::FizzySteam::LegacyServer*>(transport, maxConnections));
}
/// @brief Convert operator to "::Mirror::FizzySteam::IServer"
constexpr  Mirror::FizzySteam::LegacyServer::operator ::Mirror::FizzySteam::IServer*() noexcept {
return static_cast<::Mirror::FizzySteam::IServer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Mirror::FizzySteam::IServer"
constexpr ::Mirror::FizzySteam::IServer* Mirror::FizzySteam::LegacyServer::i___Mirror__FizzySteam__IServer() noexcept {
return static_cast<::Mirror::FizzySteam::IServer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mirror::FizzySteam::LegacyServer::LegacyServer()   {
}

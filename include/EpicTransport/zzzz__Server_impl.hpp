#pragma once
// IWYU pragma private; include "EpicTransport/Server.hpp"
#include "EpicTransport/zzzz__Common_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "EpicTransport/zzzz__Server_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnIncomingConnectionRequestInfo_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SocketId_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "EpicTransport/zzzz__BidirectionalDictionary_2_def.hpp"
#include "EpicTransport/zzzz__Common_def.hpp"
#include "EpicTransport/zzzz__EosTransport_def.hpp"
#include "EpicTransport/zzzz__Server_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::EpicTransport::Server___c__DisplayClass16_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Server___c__DisplayClass16_0::*)()>(&::EpicTransport::Server___c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server___c__DisplayClass16_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Server___c__DisplayClass16_0._CreateServer_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Server___c__DisplayClass16_0::*)(int32_t)>(&::EpicTransport::Server___c__DisplayClass16_0::_CreateServer_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1806310c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server___c__DisplayClass16_0*>(),
                        {"<CreateServer>b__0", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Server___c__DisplayClass16_0._CreateServer_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Server___c__DisplayClass16_0::*)(int32_t)>(&::EpicTransport::Server___c__DisplayClass16_0::_CreateServer_b__1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1806310f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server___c__DisplayClass16_0*>(),
                        {"<CreateServer>b__1", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Server___c__DisplayClass16_0._CreateServer_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Server___c__DisplayClass16_0::*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(&::EpicTransport::Server___c__DisplayClass16_0::_CreateServer_b__2)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180631120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server___c__DisplayClass16_0*>(),
                        {"<CreateServer>b__2", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Server___c__DisplayClass16_0._CreateServer_b__3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Server___c__DisplayClass16_0::*)(int32_t, ::System::Exception*)>(&::EpicTransport::Server___c__DisplayClass16_0::_CreateServer_b__3)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18158ea90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server___c__DisplayClass16_0*>(),
                        {"<CreateServer>b__3", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::EpicTransport::EosTransport>& EpicTransport::Server___c__DisplayClass16_0::__cordl_internal_get_transport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transport;
}
constexpr ::UnityW<::EpicTransport::EosTransport> const& EpicTransport::Server___c__DisplayClass16_0::__cordl_internal_get_transport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transport;
}
constexpr void EpicTransport::Server___c__DisplayClass16_0::__cordl_internal_set_transport(::UnityW<::EpicTransport::EosTransport>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transport = value;
}
inline void EpicTransport::Server___c__DisplayClass16_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server___c__DisplayClass16_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void EpicTransport::Server___c__DisplayClass16_0::_CreateServer_b__0(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server___c__DisplayClass16_0*>(),
                        {"<CreateServer>b__0", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void EpicTransport::Server___c__DisplayClass16_0::_CreateServer_b__1(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server___c__DisplayClass16_0*>(),
                        {"<CreateServer>b__1", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void EpicTransport::Server___c__DisplayClass16_0::_CreateServer_b__2(int32_t  id, ::ArrayW<uint8_t>  data, int32_t  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server___c__DisplayClass16_0*>(),
                        {"<CreateServer>b__2", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, data, channel);
}
inline void EpicTransport::Server___c__DisplayClass16_0::_CreateServer_b__3(int32_t  id, ::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server___c__DisplayClass16_0*>(),
                        {"<CreateServer>b__3", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, exception);
}
inline ::EpicTransport::Server___c__DisplayClass16_0* EpicTransport::Server___c__DisplayClass16_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::EpicTransport::Server___c__DisplayClass16_0*>());
}
// Ctor Parameters []
constexpr ::EpicTransport::Server___c__DisplayClass16_0::Server___c__DisplayClass16_0()   {
}
//  Writing Method size for method: ::EpicTransport::Server.add_OnConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Server::*)(::System::Action_1<int32_t>*)>(&::EpicTransport::Server::add_OnConnected)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18158b450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"add_OnConnected", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Server.remove_OnConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Server::*)(::System::Action_1<int32_t>*)>(&::EpicTransport::Server::remove_OnConnected)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18158b6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"remove_OnConnected", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Server.add_OnReceivedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Server::*)(::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*)>(&::EpicTransport::Server::add_OnReceivedData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18158b590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"add_OnReceivedData", {}, {::i2c::type_of<::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Server.remove_OnReceivedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Server::*)(::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*)>(&::EpicTransport::Server::remove_OnReceivedData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18158b810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"remove_OnReceivedData", {}, {::i2c::type_of<::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Server.add_OnDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Server::*)(::System::Action_1<int32_t>*)>(&::EpicTransport::Server::add_OnDisconnected)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18158b4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"add_OnDisconnected", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Server.remove_OnDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Server::*)(::System::Action_1<int32_t>*)>(&::EpicTransport::Server::remove_OnDisconnected)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18158b770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"remove_OnDisconnected", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Server.add_OnReceivedError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Server::*)(::System::Action_2<int32_t,::System::Exception*>*)>(&::EpicTransport::Server::add_OnReceivedError)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18158b630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"add_OnReceivedError", {}, {::i2c::type_of<::System::Action_2<int32_t,::System::Exception*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Server.remove_OnReceivedError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Server::*)(::System::Action_2<int32_t,::System::Exception*>*)>(&::EpicTransport::Server::remove_OnReceivedError)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18158b8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"remove_OnReceivedError", {}, {::i2c::type_of<::System::Action_2<int32_t,::System::Exception*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Server.CreateServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::EpicTransport::Server* (*)(::EpicTransport::EosTransport*, int32_t)>(&::EpicTransport::Server::CreateServer)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x181589b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"CreateServer", {}, {::i2c::type_of<::EpicTransport::EosTransport*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Server._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Server::*)(::EpicTransport::EosTransport*, int32_t)>(&::EpicTransport::Server::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18158b3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {".ctor", {}, {::i2c::type_of<::EpicTransport::EosTransport*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Server.OnNewConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Server::*)(::by_ref<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfo>)>(&::EpicTransport::Server::OnNewConnection)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x18158a640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::EpicTransport::Server*>(),
                    {::i2c::class_of<::EpicTransport::Server*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Server.OnReceiveInternalData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Server::*)(::EpicTransport::Common_InternalMessages, ::Epic::OnlineServices::ProductUserId*, ::Epic::OnlineServices::P2P::SocketId)>(&::EpicTransport::Server::OnReceiveInternalData)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x18158aae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::EpicTransport::Server*>(),
                    {::i2c::class_of<::EpicTransport::Server*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Server.OnReceiveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Server::*)(::ArrayW<uint8_t>, ::Epic::OnlineServices::ProductUserId*, int32_t)>(&::EpicTransport::Server::OnReceiveData)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18158a940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::EpicTransport::Server*>(),
                    {::i2c::class_of<::EpicTransport::Server*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Server.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Server::*)(int32_t)>(&::EpicTransport::Server::Disconnect)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181589ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"Disconnect", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Server.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Server::*)()>(&::EpicTransport::Server::Shutdown)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x18158b060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"Shutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Server.SendAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Server::*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(&::EpicTransport::Server::SendAll)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18158ae00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"SendAll", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Server.ServerGetClientAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::EpicTransport::Server::*)(int32_t)>(&::EpicTransport::Server::ServerGetClientAddress)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18158af60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"ServerGetClientAddress", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Server.OnConnectionFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Server::*)(::Epic::OnlineServices::ProductUserId*)>(&::EpicTransport::Server::OnConnectionFailed)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18158a570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::EpicTransport::Server*>(),
                    {::i2c::class_of<::EpicTransport::Server*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Server.get_NextConnectionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::EpicTransport::Server::*)()>(&::EpicTransport::Server::get_NextConnectionId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"get_NextConnectionId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Server.SeedNextConnectionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Server::*)(int32_t)>(&::EpicTransport::Server::SeedNextConnectionId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18158ade0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"SeedNextConnectionId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Server.GetActiveConnectionIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::EpicTransport::Server::*)()>(&::EpicTransport::Server::GetActiveConnectionIds)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x18158a330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"GetActiveConnectionIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::EpicTransport::Server.DisposeNodeQuiet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::EpicTransport::Server::*)()>(&::EpicTransport::Server::DisposeNodeQuiet)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x18158a030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"DisposeNodeQuiet", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<int32_t>*& EpicTransport::Server::__cordl_internal_get_OnConnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnected;
}
constexpr ::System::Action_1<int32_t>* const& EpicTransport::Server::__cordl_internal_get_OnConnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnected;
}
constexpr void EpicTransport::Server::__cordl_internal_set_OnConnected(::System::Action_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnConnected = value;
}
constexpr ::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*& EpicTransport::Server::__cordl_internal_get_OnReceivedData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReceivedData;
}
constexpr ::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>* const& EpicTransport::Server::__cordl_internal_get_OnReceivedData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReceivedData;
}
constexpr void EpicTransport::Server::__cordl_internal_set_OnReceivedData(::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnReceivedData = value;
}
constexpr ::System::Action_1<int32_t>*& EpicTransport::Server::__cordl_internal_get_OnDisconnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnected;
}
constexpr ::System::Action_1<int32_t>* const& EpicTransport::Server::__cordl_internal_get_OnDisconnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnected;
}
constexpr void EpicTransport::Server::__cordl_internal_set_OnDisconnected(::System::Action_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDisconnected = value;
}
constexpr ::System::Action_2<int32_t,::System::Exception*>*& EpicTransport::Server::__cordl_internal_get_OnReceivedError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReceivedError;
}
constexpr ::System::Action_2<int32_t,::System::Exception*>* const& EpicTransport::Server::__cordl_internal_get_OnReceivedError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReceivedError;
}
constexpr void EpicTransport::Server::__cordl_internal_set_OnReceivedError(::System::Action_2<int32_t,::System::Exception*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnReceivedError = value;
}
constexpr ::EpicTransport::BidirectionalDictionary_2<::Epic::OnlineServices::ProductUserId*,int32_t>*& EpicTransport::Server::__cordl_internal_get_epicToMirrorIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___epicToMirrorIds;
}
constexpr ::EpicTransport::BidirectionalDictionary_2<::Epic::OnlineServices::ProductUserId*,int32_t>* const& EpicTransport::Server::__cordl_internal_get_epicToMirrorIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___epicToMirrorIds;
}
constexpr void EpicTransport::Server::__cordl_internal_set_epicToMirrorIds(::EpicTransport::BidirectionalDictionary_2<::Epic::OnlineServices::ProductUserId*,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___epicToMirrorIds = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Epic::OnlineServices::ProductUserId*,::Epic::OnlineServices::P2P::SocketId>*& EpicTransport::Server::__cordl_internal_get_epicToSocketIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___epicToSocketIds;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Epic::OnlineServices::ProductUserId*,::Epic::OnlineServices::P2P::SocketId>* const& EpicTransport::Server::__cordl_internal_get_epicToSocketIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___epicToSocketIds;
}
constexpr void EpicTransport::Server::__cordl_internal_set_epicToSocketIds(::System::Collections::Generic::Dictionary_2<::Epic::OnlineServices::ProductUserId*,::Epic::OnlineServices::P2P::SocketId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___epicToSocketIds = value;
}
constexpr int32_t& EpicTransport::Server::__cordl_internal_get_maxConnections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxConnections;
}
constexpr int32_t const& EpicTransport::Server::__cordl_internal_get_maxConnections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxConnections;
}
constexpr void EpicTransport::Server::__cordl_internal_set_maxConnections(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxConnections = value;
}
constexpr int32_t& EpicTransport::Server::__cordl_internal_get_nextConnectionID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextConnectionID;
}
constexpr int32_t const& EpicTransport::Server::__cordl_internal_get_nextConnectionID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextConnectionID;
}
constexpr void EpicTransport::Server::__cordl_internal_set_nextConnectionID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextConnectionID = value;
}
inline void EpicTransport::Server::add_OnConnected(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"add_OnConnected", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void EpicTransport::Server::remove_OnConnected(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"remove_OnConnected", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void EpicTransport::Server::add_OnReceivedData(::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"add_OnReceivedData", {}, {::i2c::type_of<::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void EpicTransport::Server::remove_OnReceivedData(::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"remove_OnReceivedData", {}, {::i2c::type_of<::System::Action_3<int32_t,::ArrayW<uint8_t>,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void EpicTransport::Server::add_OnDisconnected(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"add_OnDisconnected", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void EpicTransport::Server::remove_OnDisconnected(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"remove_OnDisconnected", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void EpicTransport::Server::add_OnReceivedError(::System::Action_2<int32_t,::System::Exception*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"add_OnReceivedError", {}, {::i2c::type_of<::System::Action_2<int32_t,::System::Exception*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void EpicTransport::Server::remove_OnReceivedError(::System::Action_2<int32_t,::System::Exception*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"remove_OnReceivedError", {}, {::i2c::type_of<::System::Action_2<int32_t,::System::Exception*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::EpicTransport::Server* EpicTransport::Server::CreateServer(::EpicTransport::EosTransport*  transport, int32_t  maxConnections)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"CreateServer", {}, {::i2c::type_of<::EpicTransport::EosTransport*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::EpicTransport::Server*>(nullptr, ___internal_method, transport, maxConnections);
}
inline void EpicTransport::Server::_ctor(::EpicTransport::EosTransport*  transport, int32_t  maxConnections)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {".ctor", {}, {::i2c::type_of<::EpicTransport::EosTransport*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transport, maxConnections);
}
inline void EpicTransport::Server::OnNewConnection(::by_ref<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfo>  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::EpicTransport::Server*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void EpicTransport::Server::OnReceiveInternalData(::EpicTransport::Common_InternalMessages  type, ::Epic::OnlineServices::ProductUserId*  clientUserId, ::Epic::OnlineServices::P2P::SocketId  socketId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::EpicTransport::Server*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, clientUserId, socketId);
}
inline void EpicTransport::Server::OnReceiveData(::ArrayW<uint8_t>  data, ::Epic::OnlineServices::ProductUserId*  clientUserId, int32_t  channel)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::EpicTransport::Server*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, clientUserId, channel);
}
inline void EpicTransport::Server::Disconnect(int32_t  connectionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"Disconnect", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId);
}
inline void EpicTransport::Server::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"Shutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void EpicTransport::Server::SendAll(int32_t  connectionId, ::ArrayW<uint8_t>  data, int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"SendAll", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId, data, channelId);
}
inline ::StringW EpicTransport::Server::ServerGetClientAddress(int32_t  connectionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"ServerGetClientAddress", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, connectionId);
}
inline void EpicTransport::Server::OnConnectionFailed(::Epic::OnlineServices::ProductUserId*  remoteId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::EpicTransport::Server*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remoteId);
}
inline int32_t EpicTransport::Server::get_NextConnectionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"get_NextConnectionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void EpicTransport::Server::SeedNextConnectionId(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"SeedNextConnectionId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline ::System::Collections::Generic::List_1<int32_t>* EpicTransport::Server::GetActiveConnectionIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"GetActiveConnectionIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*>(this, ___internal_method);
}
inline void EpicTransport::Server::DisposeNodeQuiet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::EpicTransport::Server*>(),
                        {"DisposeNodeQuiet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::EpicTransport::Server* EpicTransport::Server::New_ctor(::EpicTransport::EosTransport*  transport, int32_t  maxConnections)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::EpicTransport::Server*>(transport, maxConnections));
}
// Ctor Parameters []
constexpr ::EpicTransport::Server::Server()   {
}

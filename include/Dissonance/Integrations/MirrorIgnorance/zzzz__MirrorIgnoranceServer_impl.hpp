#pragma once
// IWYU pragma private; include "Dissonance/Integrations/MirrorIgnorance/MirrorIgnoranceServer.hpp"
#include "Dissonance/Integrations/MirrorIgnorance/zzzz__MirrorConn_impl.hpp"
#include "Dissonance/Networking/zzzz__BaseServer_3_impl.hpp"
#include "Dissonance/Integrations/MirrorIgnorance/zzzz__MirrorIgnoranceServer_def.hpp"
#include "Dissonance/Integrations/MirrorIgnorance/zzzz__DissonanceNetworkMessage_def.hpp"
#include "Dissonance/Integrations/MirrorIgnorance/zzzz__MirrorConn_def.hpp"
#include "Dissonance/Integrations/MirrorIgnorance/zzzz__MirrorIgnoranceClient_def.hpp"
#include "Dissonance/Integrations/MirrorIgnorance/zzzz__MirrorIgnoranceCommsNetwork_def.hpp"
#include "Dissonance/Networking/Server/zzzz__ServerState_def.hpp"
#include "Dissonance/Networking/zzzz__ClientInfo_1_def.hpp"
#include "Mirror/zzzz__NetworkConnection_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::*)(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::_ctor)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x1803cfc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::Connect)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803cf660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(),
                    {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer.OnMessageReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::*)(::Mirror::NetworkConnection*, ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::OnMessageReceived)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803cf780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(),
                        {"OnMessageReceived", {}, {::i2c::type_of<::Mirror::NetworkConnection*>(), ::i2c::type_of<::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer.AddClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::*)(::Dissonance::Networking::ClientInfo_1<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>*)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::AddClient)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803cf5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(),
                    {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::Disconnect)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803cf6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(),
                    {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer.ReadMessages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::ReadMessages)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(),
                    {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::Server::ServerState (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::Update)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803cfb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(),
                    {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer.IsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Mirror::NetworkConnection*)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::IsConnected)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803cf710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(),
                        {"IsConnected", {}, {::i2c::type_of<::Mirror::NetworkConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer.SendReliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::*)(::Dissonance::Integrations::MirrorIgnorance::MirrorConn, ::System::ArraySegment_1<uint8_t>)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::SendReliable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803cf820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(),
                    {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer.SendUnreliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::*)(::Dissonance::Integrations::MirrorIgnorance::MirrorConn, ::System::ArraySegment_1<uint8_t>)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::SendUnreliable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803cf870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(),
                    {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::*)(::System::ArraySegment_1<uint8_t>, ::Dissonance::Integrations::MirrorIgnorance::MirrorConn, uint8_t)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::Send)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x1803cf8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(),
                        {"Send", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork>& Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::__cordl_internal_get__network()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____network;
}
constexpr ::UnityW<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork> const& Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::__cordl_internal_get__network() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____network;
}
constexpr void Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::__cordl_internal_set__network(::UnityW<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____network = value;
}
constexpr ::System::Collections::Generic::List_1<::Mirror::NetworkConnection*>*& Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::__cordl_internal_get__addedConnections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addedConnections;
}
constexpr ::System::Collections::Generic::List_1<::Mirror::NetworkConnection*>* const& Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::__cordl_internal_get__addedConnections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addedConnections;
}
constexpr void Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::__cordl_internal_set__addedConnections(::System::Collections::Generic::List_1<::Mirror::NetworkConnection*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____addedConnections = value;
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::_ctor(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*  network)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, network);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::Connect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::OnMessageReceived(::Mirror::NetworkConnection*  source, ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(),
                        {"OnMessageReceived", {}, {::i2c::type_of<::Mirror::NetworkConnection*>(), ::i2c::type_of<::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, msg);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::AddClient(::Dissonance::Networking::ClientInfo_1<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>*  client)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::Disconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::ReadMessages()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Networking::Server::ServerState Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::Server::ServerState>(this, ___internal_method);
}
inline bool Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::IsConnected(::Mirror::NetworkConnection*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(),
                        {"IsConnected", {}, {::i2c::type_of<::Mirror::NetworkConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, conn);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::SendReliable(::Dissonance::Integrations::MirrorIgnorance::MirrorConn  connection, ::System::ArraySegment_1<uint8_t>  packet)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, packet);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::SendUnreliable(::Dissonance::Integrations::MirrorIgnorance::MirrorConn  connection, ::System::ArraySegment_1<uint8_t>  packet)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, packet);
}
inline bool Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::Send(::System::ArraySegment_1<uint8_t>  packet, ::Dissonance::Integrations::MirrorIgnorance::MirrorConn  connection, uint8_t  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(),
                        {"Send", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, packet, connection, channel);
}
inline ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer* Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::New_ctor(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*  network)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(network));
}
// Ctor Parameters []
constexpr ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer::MirrorIgnoranceServer()   {
}

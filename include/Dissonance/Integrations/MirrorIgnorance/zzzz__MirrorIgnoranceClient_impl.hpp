#pragma once
// IWYU pragma private; include "Dissonance/Integrations/MirrorIgnorance/MirrorIgnoranceClient.hpp"
#include "Dissonance/Integrations/MirrorIgnorance/zzzz__MirrorConn_impl.hpp"
#include "Dissonance/Networking/zzzz__BaseClient_3_impl.hpp"
#include "Dissonance/Integrations/MirrorIgnorance/zzzz__MirrorIgnoranceClient_def.hpp"
#include "Dissonance/Integrations/MirrorIgnorance/zzzz__DissonanceNetworkMessage_def.hpp"
#include "Dissonance/Integrations/MirrorIgnorance/zzzz__MirrorIgnoranceCommsNetwork_def.hpp"
#include "Dissonance/Integrations/MirrorIgnorance/zzzz__MirrorIgnoranceServer_def.hpp"
#include "Mirror/zzzz__NetworkConnection_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::*)(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803cdd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::Connect)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803cd990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*>(),
                    {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::Disconnect)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803cda10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*>(),
                    {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient.OnMessageReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::*)(::Mirror::NetworkConnection*, ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::OnMessageReceived)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803cda90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*>(),
                        {"OnMessageReceived", {}, {::i2c::type_of<::Mirror::NetworkConnection*>(), ::i2c::type_of<::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient.ReadMessages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::ReadMessages)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*>(),
                    {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient.SendReliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::*)(::System::ArraySegment_1<uint8_t>)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::SendReliable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803cdb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*>(),
                    {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient.SendUnreliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::*)(::System::ArraySegment_1<uint8_t>)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::SendUnreliable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803cdb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*>(),
                    {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::*)(::System::ArraySegment_1<uint8_t>, uint8_t)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::Send)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1803cdb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*>(),
                        {"Send", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork>& Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::__cordl_internal_get__network()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____network;
}
constexpr ::UnityW<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork> const& Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::__cordl_internal_get__network() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____network;
}
constexpr void Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::__cordl_internal_set__network(::UnityW<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____network = value;
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::_ctor(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*  network)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, network);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::Connect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::Disconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::OnMessageReceived(::Mirror::NetworkConnection*  source, ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*>(),
                        {"OnMessageReceived", {}, {::i2c::type_of<::Mirror::NetworkConnection*>(), ::i2c::type_of<::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, msg);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::ReadMessages()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::SendReliable(::System::ArraySegment_1<uint8_t>  packet)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::SendUnreliable(::System::ArraySegment_1<uint8_t>  packet)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
inline bool Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::Send(::System::ArraySegment_1<uint8_t>  packet, uint8_t  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*>(),
                        {"Send", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, packet, channel);
}
inline ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient* Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::New_ctor(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*  network)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*>(network));
}
// Ctor Parameters []
constexpr ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient::MirrorIgnoranceClient()   {
}

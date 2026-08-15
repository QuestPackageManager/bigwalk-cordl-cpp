#pragma once
// IWYU pragma private; include "kcp2k/KcpClient.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "kcp2k/zzzz__KcpClient_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/zzzz__EndPoint_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "kcp2k/zzzz__ErrorCode_def.hpp"
#include "kcp2k/zzzz__KcpChannel_def.hpp"
#include "kcp2k/zzzz__KcpConfig_def.hpp"
#include "kcp2k/zzzz__KcpPeer_def.hpp"
//  Writing Method size for method: ::kcp2k::KcpClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpClient::*)(::System::Action*, ::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*, ::System::Action*, ::System::Action_2<::kcp2k::ErrorCode,::StringW>*, ::kcp2k::KcpConfig*)>(&::kcp2k::KcpClient::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18144dda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpClient*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_2<::kcp2k::ErrorCode,::StringW>*>(), ::i2c::type_of<::kcp2k::KcpConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpClient.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpClient::*)(::StringW, uint16_t)>(&::kcp2k::KcpClient::Connect)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x18144d620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpClient*>(),
                        {"Connect", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpClient.RawReceive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::kcp2k::KcpClient::*)(::by_ref<::System::ArraySegment_1<uint8_t>>)>(&::kcp2k::KcpClient::RawReceive)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18144d9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpClient*>(),
                    {::i2c::class_of<::kcp2k::KcpClient*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpClient.RawSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpClient::*)(::System::ArraySegment_1<uint8_t>)>(&::kcp2k::KcpClient::RawSend)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18144da70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpClient*>(),
                    {::i2c::class_of<::kcp2k::KcpClient*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpClient.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpClient::*)(::System::ArraySegment_1<uint8_t>, ::kcp2k::KcpChannel)>(&::kcp2k::KcpClient::Send)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18144daf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpClient*>(),
                        {"Send", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::kcp2k::KcpChannel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpClient.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpClient::*)()>(&::kcp2k::KcpClient::Disconnect)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18144d9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpClient*>(),
                        {"Disconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpClient.TickIncoming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpClient::*)()>(&::kcp2k::KcpClient::TickIncoming)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18144db70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpClient*>(),
                    {::i2c::class_of<::kcp2k::KcpClient*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpClient.TickOutgoing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpClient::*)()>(&::kcp2k::KcpClient::TickOutgoing)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18144dc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpClient*>(),
                    {::i2c::class_of<::kcp2k::KcpClient*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpClient.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpClient::*)()>(&::kcp2k::KcpClient::Tick)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18144dc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::kcp2k::KcpClient*>(),
                    {::i2c::class_of<::kcp2k::KcpClient*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpClient._Connect_g__OnAuthenticatedWrap_11_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpClient::*)()>(&::kcp2k::KcpClient::_Connect_g__OnAuthenticatedWrap_11_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18144dc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpClient*>(),
                        {"<Connect>g__OnAuthenticatedWrap|11_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpClient._Connect_g__OnDisconnectedWrap_11_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpClient::*)()>(&::kcp2k::KcpClient::_Connect_g__OnDisconnectedWrap_11_1)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18144dce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpClient*>(),
                        {"<Connect>g__OnDisconnectedWrap|11_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::kcp2k::KcpPeer*& kcp2k::KcpClient::__cordl_internal_get_peer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peer;
}
constexpr ::kcp2k::KcpPeer* const& kcp2k::KcpClient::__cordl_internal_get_peer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peer;
}
constexpr void kcp2k::KcpClient::__cordl_internal_set_peer(::kcp2k::KcpPeer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peer = value;
}
constexpr ::System::Net::Sockets::Socket*& kcp2k::KcpClient::__cordl_internal_get_socket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___socket;
}
constexpr ::System::Net::Sockets::Socket* const& kcp2k::KcpClient::__cordl_internal_get_socket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___socket;
}
constexpr void kcp2k::KcpClient::__cordl_internal_set_socket(::System::Net::Sockets::Socket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___socket = value;
}
constexpr ::System::Net::EndPoint*& kcp2k::KcpClient::__cordl_internal_get_remoteEndPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remoteEndPoint;
}
constexpr ::System::Net::EndPoint* const& kcp2k::KcpClient::__cordl_internal_get_remoteEndPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remoteEndPoint;
}
constexpr void kcp2k::KcpClient::__cordl_internal_set_remoteEndPoint(::System::Net::EndPoint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remoteEndPoint = value;
}
constexpr ::kcp2k::KcpConfig*& kcp2k::KcpClient::__cordl_internal_get_config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___config;
}
constexpr ::kcp2k::KcpConfig* const& kcp2k::KcpClient::__cordl_internal_get_config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___config;
}
constexpr void kcp2k::KcpClient::__cordl_internal_set_config(::kcp2k::KcpConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___config = value;
}
constexpr ::ArrayW<uint8_t>& kcp2k::KcpClient::__cordl_internal_get_rawReceiveBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawReceiveBuffer;
}
constexpr ::ArrayW<uint8_t> const& kcp2k::KcpClient::__cordl_internal_get_rawReceiveBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawReceiveBuffer;
}
constexpr void kcp2k::KcpClient::__cordl_internal_set_rawReceiveBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rawReceiveBuffer = value;
}
constexpr ::System::Action*& kcp2k::KcpClient::__cordl_internal_get_OnConnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnected;
}
constexpr ::System::Action* const& kcp2k::KcpClient::__cordl_internal_get_OnConnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnected;
}
constexpr void kcp2k::KcpClient::__cordl_internal_set_OnConnected(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnConnected = value;
}
constexpr ::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*& kcp2k::KcpClient::__cordl_internal_get_OnData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnData;
}
constexpr ::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>* const& kcp2k::KcpClient::__cordl_internal_get_OnData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnData;
}
constexpr void kcp2k::KcpClient::__cordl_internal_set_OnData(::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnData = value;
}
constexpr ::System::Action*& kcp2k::KcpClient::__cordl_internal_get_OnDisconnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnected;
}
constexpr ::System::Action* const& kcp2k::KcpClient::__cordl_internal_get_OnDisconnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnected;
}
constexpr void kcp2k::KcpClient::__cordl_internal_set_OnDisconnected(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDisconnected = value;
}
constexpr ::System::Action_2<::kcp2k::ErrorCode,::StringW>*& kcp2k::KcpClient::__cordl_internal_get_OnError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnError;
}
constexpr ::System::Action_2<::kcp2k::ErrorCode,::StringW>* const& kcp2k::KcpClient::__cordl_internal_get_OnError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnError;
}
constexpr void kcp2k::KcpClient::__cordl_internal_set_OnError(::System::Action_2<::kcp2k::ErrorCode,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnError = value;
}
constexpr bool& kcp2k::KcpClient::__cordl_internal_get_connected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connected;
}
constexpr bool const& kcp2k::KcpClient::__cordl_internal_get_connected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connected;
}
constexpr void kcp2k::KcpClient::__cordl_internal_set_connected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connected = value;
}
inline void kcp2k::KcpClient::_ctor(::System::Action*  OnConnected, ::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*  OnData, ::System::Action*  OnDisconnected, ::System::Action_2<::kcp2k::ErrorCode,::StringW>*  OnError, ::kcp2k::KcpConfig*  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpClient*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_2<::kcp2k::ErrorCode,::StringW>*>(), ::i2c::type_of<::kcp2k::KcpConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, OnConnected, OnData, OnDisconnected, OnError, config);
}
inline void kcp2k::KcpClient::Connect(::StringW  address, uint16_t  port)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpClient*>(),
                        {"Connect", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, port);
}
inline bool kcp2k::KcpClient::RawReceive(::by_ref<::System::ArraySegment_1<uint8_t>>  segment)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpClient*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, segment);
}
inline void kcp2k::KcpClient::RawSend(::System::ArraySegment_1<uint8_t>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpClient*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void kcp2k::KcpClient::Send(::System::ArraySegment_1<uint8_t>  segment, ::kcp2k::KcpChannel  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpClient*>(),
                        {"Send", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::kcp2k::KcpChannel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment, channel);
}
inline void kcp2k::KcpClient::Disconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpClient*>(),
                        {"Disconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpClient::TickIncoming()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpClient*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpClient::TickOutgoing()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpClient*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpClient::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::kcp2k::KcpClient*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpClient::_Connect_g__OnAuthenticatedWrap_11_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpClient*>(),
                        {"<Connect>g__OnAuthenticatedWrap|11_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpClient::_Connect_g__OnDisconnectedWrap_11_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpClient*>(),
                        {"<Connect>g__OnDisconnectedWrap|11_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::kcp2k::KcpClient* kcp2k::KcpClient::New_ctor(::System::Action*  OnConnected, ::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*  OnData, ::System::Action*  OnDisconnected, ::System::Action_2<::kcp2k::ErrorCode,::StringW>*  OnError, ::kcp2k::KcpConfig*  config)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::kcp2k::KcpClient*>(OnConnected, OnData, OnDisconnected, OnError, config));
}
// Ctor Parameters []
constexpr ::kcp2k::KcpClient::KcpClient()   {
}

#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/WebSocketClientStandAlone.hpp"
#include "Mirror/SimpleWeb/zzzz__SimpleWebClient_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__TcpConfig_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__WebSocketClientStandAlone_def.hpp"
#include "Mirror/SimpleWeb/zzzz__ClientHandshake_def.hpp"
#include "Mirror/SimpleWeb/zzzz__ClientSslHelper_def.hpp"
#include "Mirror/SimpleWeb/zzzz__Connection_def.hpp"
#include "Mirror/SimpleWeb/zzzz__TcpConfig_def.hpp"
#include "Mirror/SimpleWeb/zzzz__WebSocketClientStandAlone_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0::*)()>(&::Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0._Connect_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0::*)()>(&::Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0::_Connect_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ad6200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0*>(),
                        {"<Connect>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Mirror::SimpleWeb::WebSocketClientStandAlone*& Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Mirror::SimpleWeb::WebSocketClientStandAlone* const& Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0::__cordl_internal_set___4__this(::Mirror::SimpleWeb::WebSocketClientStandAlone*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Uri*& Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0::__cordl_internal_get_serverAddress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverAddress;
}
constexpr ::System::Uri* const& Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0::__cordl_internal_get_serverAddress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverAddress;
}
constexpr void Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0::__cordl_internal_set_serverAddress(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverAddress = value;
}
inline void Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0::_Connect_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0*>(),
                        {"<Connect>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0* Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::WebSocketClientStandAlone___c__DisplayClass5_0::WebSocketClientStandAlone___c__DisplayClass5_0()   {
}
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketClientStandAlone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketClientStandAlone::*)(int32_t, int32_t, ::Mirror::SimpleWeb::TcpConfig)>(&::Mirror::SimpleWeb::WebSocketClientStandAlone::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181ad6ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientStandAlone*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::SimpleWeb::TcpConfig>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketClientStandAlone.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketClientStandAlone::*)(::System::Uri*)>(&::Mirror::SimpleWeb::WebSocketClientStandAlone::Connect)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181ad67d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientStandAlone*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientStandAlone*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketClientStandAlone.ConnectAndReceiveLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketClientStandAlone::*)(::System::Uri*)>(&::Mirror::SimpleWeb::WebSocketClientStandAlone::ConnectAndReceiveLoop)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x181ad6390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientStandAlone*>(),
                        {"ConnectAndReceiveLoop", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketClientStandAlone.AfterConnectionDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketClientStandAlone::*)(::Mirror::SimpleWeb::Connection*)>(&::Mirror::SimpleWeb::WebSocketClientStandAlone::AfterConnectionDisposed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181ad6330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientStandAlone*>(),
                        {"AfterConnectionDisposed", {}, {::i2c::type_of<::Mirror::SimpleWeb::Connection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketClientStandAlone.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketClientStandAlone::*)()>(&::Mirror::SimpleWeb::WebSocketClientStandAlone::Disconnect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ad6940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientStandAlone*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientStandAlone*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketClientStandAlone.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketClientStandAlone::*)(::System::ArraySegment_1<uint8_t>)>(&::Mirror::SimpleWeb::WebSocketClientStandAlone::Send)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181ad6970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientStandAlone*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientStandAlone*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketClientStandAlone._ConnectAndReceiveLoop_b__6_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketClientStandAlone::*)()>(&::Mirror::SimpleWeb::WebSocketClientStandAlone::_ConnectAndReceiveLoop_b__6_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181ad6a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientStandAlone*>(),
                        {"<ConnectAndReceiveLoop>b__6_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Mirror::SimpleWeb::ClientSslHelper*& Mirror::SimpleWeb::WebSocketClientStandAlone::__cordl_internal_get_sslHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sslHelper;
}
constexpr ::Mirror::SimpleWeb::ClientSslHelper* const& Mirror::SimpleWeb::WebSocketClientStandAlone::__cordl_internal_get_sslHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sslHelper;
}
constexpr void Mirror::SimpleWeb::WebSocketClientStandAlone::__cordl_internal_set_sslHelper(::Mirror::SimpleWeb::ClientSslHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sslHelper = value;
}
constexpr ::Mirror::SimpleWeb::ClientHandshake*& Mirror::SimpleWeb::WebSocketClientStandAlone::__cordl_internal_get_handshake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handshake;
}
constexpr ::Mirror::SimpleWeb::ClientHandshake* const& Mirror::SimpleWeb::WebSocketClientStandAlone::__cordl_internal_get_handshake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handshake;
}
constexpr void Mirror::SimpleWeb::WebSocketClientStandAlone::__cordl_internal_set_handshake(::Mirror::SimpleWeb::ClientHandshake*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handshake = value;
}
constexpr ::Mirror::SimpleWeb::TcpConfig& Mirror::SimpleWeb::WebSocketClientStandAlone::__cordl_internal_get_tcpConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcpConfig;
}
constexpr ::Mirror::SimpleWeb::TcpConfig const& Mirror::SimpleWeb::WebSocketClientStandAlone::__cordl_internal_get_tcpConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcpConfig;
}
constexpr void Mirror::SimpleWeb::WebSocketClientStandAlone::__cordl_internal_set_tcpConfig(::Mirror::SimpleWeb::TcpConfig  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcpConfig = value;
}
constexpr ::Mirror::SimpleWeb::Connection*& Mirror::SimpleWeb::WebSocketClientStandAlone::__cordl_internal_get_conn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conn;
}
constexpr ::Mirror::SimpleWeb::Connection* const& Mirror::SimpleWeb::WebSocketClientStandAlone::__cordl_internal_get_conn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conn;
}
constexpr void Mirror::SimpleWeb::WebSocketClientStandAlone::__cordl_internal_set_conn(::Mirror::SimpleWeb::Connection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___conn = value;
}
inline void Mirror::SimpleWeb::WebSocketClientStandAlone::_ctor(int32_t  maxMessageSize, int32_t  maxMessagesPerTick, ::Mirror::SimpleWeb::TcpConfig  tcpConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientStandAlone*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::SimpleWeb::TcpConfig>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxMessageSize, maxMessagesPerTick, tcpConfig);
}
inline void Mirror::SimpleWeb::WebSocketClientStandAlone::Connect(::System::Uri*  serverAddress)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientStandAlone*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serverAddress);
}
inline void Mirror::SimpleWeb::WebSocketClientStandAlone::ConnectAndReceiveLoop(::System::Uri*  serverAddress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientStandAlone*>(),
                        {"ConnectAndReceiveLoop", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serverAddress);
}
inline void Mirror::SimpleWeb::WebSocketClientStandAlone::AfterConnectionDisposed(::Mirror::SimpleWeb::Connection*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientStandAlone*>(),
                        {"AfterConnectionDisposed", {}, {::i2c::type_of<::Mirror::SimpleWeb::Connection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::SimpleWeb::WebSocketClientStandAlone::Disconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientStandAlone*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::WebSocketClientStandAlone::Send(::System::ArraySegment_1<uint8_t>  segment)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientStandAlone*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment);
}
inline void Mirror::SimpleWeb::WebSocketClientStandAlone::_ConnectAndReceiveLoop_b__6_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientStandAlone*>(),
                        {"<ConnectAndReceiveLoop>b__6_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::SimpleWeb::WebSocketClientStandAlone* Mirror::SimpleWeb::WebSocketClientStandAlone::New_ctor(int32_t  maxMessageSize, int32_t  maxMessagesPerTick, ::Mirror::SimpleWeb::TcpConfig  tcpConfig)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SimpleWeb::WebSocketClientStandAlone*>(maxMessageSize, maxMessagesPerTick, tcpConfig));
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::WebSocketClientStandAlone::WebSocketClientStandAlone()   {
}

#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/WebSocketServer.hpp"
#include "Mirror/SimpleWeb/zzzz__TcpConfig_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__WebSocketServer_def.hpp"
#include "Mirror/SimpleWeb/zzzz__ArrayBuffer_def.hpp"
#include "Mirror/SimpleWeb/zzzz__BufferPool_def.hpp"
#include "Mirror/SimpleWeb/zzzz__Connection_def.hpp"
#include "Mirror/SimpleWeb/zzzz__Message_def.hpp"
#include "Mirror/SimpleWeb/zzzz__ServerHandshake_def.hpp"
#include "Mirror/SimpleWeb/zzzz__ServerSslHelper_def.hpp"
#include "Mirror/SimpleWeb/zzzz__SslConfig_def.hpp"
#include "Mirror/SimpleWeb/zzzz__TcpConfig_def.hpp"
#include "Mirror/SimpleWeb/zzzz__WebSocketServer_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/Net/Sockets/zzzz__TcpListener_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0::*)()>(&::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0._acceptLoop_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0::*)()>(&::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0::_acceptLoop_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ad6150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0*>(),
                        {"<acceptLoop>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Mirror::SimpleWeb::Connection*& Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0::__cordl_internal_get_conn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conn;
}
constexpr ::Mirror::SimpleWeb::Connection* const& Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0::__cordl_internal_get_conn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conn;
}
constexpr void Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0::__cordl_internal_set_conn(::Mirror::SimpleWeb::Connection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___conn = value;
}
constexpr ::Mirror::SimpleWeb::WebSocketServer*& Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Mirror::SimpleWeb::WebSocketServer* const& Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0::__cordl_internal_set___4__this(::Mirror::SimpleWeb::WebSocketServer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0::_acceptLoop_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0*>(),
                        {"<acceptLoop>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0* Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0*>());
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0::WebSocketServer___c__DisplayClass14_0()   {
}
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0::*)()>(&::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0._HandshakeAndReceiveLoop_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0::*)()>(&::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0::_HandshakeAndReceiveLoop_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181ad6180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0*>(),
                        {"<HandshakeAndReceiveLoop>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Mirror::SimpleWeb::Connection*& Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0::__cordl_internal_get_conn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conn;
}
constexpr ::Mirror::SimpleWeb::Connection* const& Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0::__cordl_internal_get_conn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conn;
}
constexpr void Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0::__cordl_internal_set_conn(::Mirror::SimpleWeb::Connection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___conn = value;
}
constexpr ::Mirror::SimpleWeb::WebSocketServer*& Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Mirror::SimpleWeb::WebSocketServer* const& Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0::__cordl_internal_set___4__this(::Mirror::SimpleWeb::WebSocketServer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0::_HandshakeAndReceiveLoop_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0*>(),
                        {"<HandshakeAndReceiveLoop>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0* Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0*>());
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0::WebSocketServer___c__DisplayClass15_0()   {
}
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketServer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketServer::*)(::Mirror::SimpleWeb::TcpConfig, int32_t, int32_t, ::Mirror::SimpleWeb::SslConfig, ::Mirror::SimpleWeb::BufferPool*)>(&::Mirror::SimpleWeb::WebSocketServer::_ctor)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x181ad8330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketServer*>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::SimpleWeb::TcpConfig>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::SimpleWeb::SslConfig>(), ::i2c::type_of<::Mirror::SimpleWeb::BufferPool*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketServer.Listen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketServer::*)(int32_t)>(&::Mirror::SimpleWeb::WebSocketServer::Listen)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181ad8020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketServer*>(),
                        {"Listen", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketServer.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketServer::*)()>(&::Mirror::SimpleWeb::WebSocketServer::Stop)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181ad8240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketServer*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketServer.acceptLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketServer::*)()>(&::Mirror::SimpleWeb::WebSocketServer::acceptLoop)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x181ad8560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketServer*>(),
                        {"acceptLoop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketServer.HandshakeAndReceiveLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketServer::*)(::Mirror::SimpleWeb::Connection*)>(&::Mirror::SimpleWeb::WebSocketServer::HandshakeAndReceiveLoop)> {
  constexpr static std::size_t size = 0x890;
  constexpr static std::size_t addrs = 0x181ad7790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketServer*>(),
                        {"HandshakeAndReceiveLoop", {}, {::i2c::type_of<::Mirror::SimpleWeb::Connection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketServer.AfterConnectionDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketServer::*)(::Mirror::SimpleWeb::Connection*)>(&::Mirror::SimpleWeb::WebSocketServer::AfterConnectionDisposed)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ad7500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketServer*>(),
                        {"AfterConnectionDisposed", {}, {::i2c::type_of<::Mirror::SimpleWeb::Connection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketServer.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketServer::*)(int32_t, ::Mirror::SimpleWeb::ArrayBuffer*)>(&::Mirror::SimpleWeb::WebSocketServer::Send)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181ad8150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketServer*>(),
                        {"Send", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::SimpleWeb::ArrayBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketServer.CloseConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::SimpleWeb::WebSocketServer::*)(int32_t)>(&::Mirror::SimpleWeb::WebSocketServer::CloseConnection)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181ad75a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketServer*>(),
                        {"CloseConnection", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketServer.GetClientAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mirror::SimpleWeb::WebSocketServer::*)(int32_t)>(&::Mirror::SimpleWeb::WebSocketServer::GetClientAddress)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181ad76b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketServer*>(),
                        {"GetClientAddress", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>*& Mirror::SimpleWeb::WebSocketServer::__cordl_internal_get_receiveQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receiveQueue;
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>* const& Mirror::SimpleWeb::WebSocketServer::__cordl_internal_get_receiveQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receiveQueue;
}
constexpr void Mirror::SimpleWeb::WebSocketServer::__cordl_internal_set_receiveQueue(::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___receiveQueue = value;
}
constexpr ::Mirror::SimpleWeb::TcpConfig& Mirror::SimpleWeb::WebSocketServer::__cordl_internal_get_tcpConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcpConfig;
}
constexpr ::Mirror::SimpleWeb::TcpConfig const& Mirror::SimpleWeb::WebSocketServer::__cordl_internal_get_tcpConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcpConfig;
}
constexpr void Mirror::SimpleWeb::WebSocketServer::__cordl_internal_set_tcpConfig(::Mirror::SimpleWeb::TcpConfig  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcpConfig = value;
}
constexpr int32_t& Mirror::SimpleWeb::WebSocketServer::__cordl_internal_get_maxMessageSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxMessageSize;
}
constexpr int32_t const& Mirror::SimpleWeb::WebSocketServer::__cordl_internal_get_maxMessageSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxMessageSize;
}
constexpr void Mirror::SimpleWeb::WebSocketServer::__cordl_internal_set_maxMessageSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxMessageSize = value;
}
constexpr ::System::Net::Sockets::TcpListener*& Mirror::SimpleWeb::WebSocketServer::__cordl_internal_get_listener()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listener;
}
constexpr ::System::Net::Sockets::TcpListener* const& Mirror::SimpleWeb::WebSocketServer::__cordl_internal_get_listener() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listener;
}
constexpr void Mirror::SimpleWeb::WebSocketServer::__cordl_internal_set_listener(::System::Net::Sockets::TcpListener*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___listener = value;
}
constexpr ::System::Threading::Thread*& Mirror::SimpleWeb::WebSocketServer::__cordl_internal_get_acceptThread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acceptThread;
}
constexpr ::System::Threading::Thread* const& Mirror::SimpleWeb::WebSocketServer::__cordl_internal_get_acceptThread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acceptThread;
}
constexpr void Mirror::SimpleWeb::WebSocketServer::__cordl_internal_set_acceptThread(::System::Threading::Thread*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___acceptThread = value;
}
constexpr bool& Mirror::SimpleWeb::WebSocketServer::__cordl_internal_get_serverStopped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverStopped;
}
constexpr bool const& Mirror::SimpleWeb::WebSocketServer::__cordl_internal_get_serverStopped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverStopped;
}
constexpr void Mirror::SimpleWeb::WebSocketServer::__cordl_internal_set_serverStopped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverStopped = value;
}
constexpr ::Mirror::SimpleWeb::ServerHandshake*& Mirror::SimpleWeb::WebSocketServer::__cordl_internal_get_handShake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handShake;
}
constexpr ::Mirror::SimpleWeb::ServerHandshake* const& Mirror::SimpleWeb::WebSocketServer::__cordl_internal_get_handShake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handShake;
}
constexpr void Mirror::SimpleWeb::WebSocketServer::__cordl_internal_set_handShake(::Mirror::SimpleWeb::ServerHandshake*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handShake = value;
}
constexpr ::Mirror::SimpleWeb::ServerSslHelper*& Mirror::SimpleWeb::WebSocketServer::__cordl_internal_get_sslHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sslHelper;
}
constexpr ::Mirror::SimpleWeb::ServerSslHelper* const& Mirror::SimpleWeb::WebSocketServer::__cordl_internal_get_sslHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sslHelper;
}
constexpr void Mirror::SimpleWeb::WebSocketServer::__cordl_internal_set_sslHelper(::Mirror::SimpleWeb::ServerSslHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sslHelper = value;
}
constexpr ::Mirror::SimpleWeb::BufferPool*& Mirror::SimpleWeb::WebSocketServer::__cordl_internal_get_bufferPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferPool;
}
constexpr ::Mirror::SimpleWeb::BufferPool* const& Mirror::SimpleWeb::WebSocketServer::__cordl_internal_get_bufferPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferPool;
}
constexpr void Mirror::SimpleWeb::WebSocketServer::__cordl_internal_set_bufferPool(::Mirror::SimpleWeb::BufferPool*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bufferPool = value;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Mirror::SimpleWeb::Connection*>*& Mirror::SimpleWeb::WebSocketServer::__cordl_internal_get_connections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connections;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Mirror::SimpleWeb::Connection*>* const& Mirror::SimpleWeb::WebSocketServer::__cordl_internal_get_connections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connections;
}
constexpr void Mirror::SimpleWeb::WebSocketServer::__cordl_internal_set_connections(::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Mirror::SimpleWeb::Connection*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connections = value;
}
constexpr int32_t& Mirror::SimpleWeb::WebSocketServer::__cordl_internal_get__idCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____idCounter;
}
constexpr int32_t const& Mirror::SimpleWeb::WebSocketServer::__cordl_internal_get__idCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____idCounter;
}
constexpr void Mirror::SimpleWeb::WebSocketServer::__cordl_internal_set__idCounter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____idCounter = value;
}
inline void Mirror::SimpleWeb::WebSocketServer::_ctor(::Mirror::SimpleWeb::TcpConfig  tcpConfig, int32_t  maxMessageSize, int32_t  handshakeMaxSize, ::Mirror::SimpleWeb::SslConfig  sslConfig, ::Mirror::SimpleWeb::BufferPool*  bufferPool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketServer*>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::SimpleWeb::TcpConfig>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::SimpleWeb::SslConfig>(), ::i2c::type_of<::Mirror::SimpleWeb::BufferPool*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tcpConfig, maxMessageSize, handshakeMaxSize, sslConfig, bufferPool);
}
inline void Mirror::SimpleWeb::WebSocketServer::Listen(int32_t  port)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketServer*>(),
                        {"Listen", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, port);
}
inline void Mirror::SimpleWeb::WebSocketServer::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketServer*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::WebSocketServer::acceptLoop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketServer*>(),
                        {"acceptLoop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::WebSocketServer::HandshakeAndReceiveLoop(::Mirror::SimpleWeb::Connection*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketServer*>(),
                        {"HandshakeAndReceiveLoop", {}, {::i2c::type_of<::Mirror::SimpleWeb::Connection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::SimpleWeb::WebSocketServer::AfterConnectionDisposed(::Mirror::SimpleWeb::Connection*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketServer*>(),
                        {"AfterConnectionDisposed", {}, {::i2c::type_of<::Mirror::SimpleWeb::Connection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::SimpleWeb::WebSocketServer::Send(int32_t  id, ::Mirror::SimpleWeb::ArrayBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketServer*>(),
                        {"Send", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::SimpleWeb::ArrayBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, buffer);
}
inline bool Mirror::SimpleWeb::WebSocketServer::CloseConnection(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketServer*>(),
                        {"CloseConnection", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline ::StringW Mirror::SimpleWeb::WebSocketServer::GetClientAddress(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketServer*>(),
                        {"GetClientAddress", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, id);
}
inline ::Mirror::SimpleWeb::WebSocketServer* Mirror::SimpleWeb::WebSocketServer::New_ctor(::Mirror::SimpleWeb::TcpConfig  tcpConfig, int32_t  maxMessageSize, int32_t  handshakeMaxSize, ::Mirror::SimpleWeb::SslConfig  sslConfig, ::Mirror::SimpleWeb::BufferPool*  bufferPool)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SimpleWeb::WebSocketServer*>(tcpConfig, maxMessageSize, handshakeMaxSize, sslConfig, bufferPool));
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::WebSocketServer::WebSocketServer()   {
}

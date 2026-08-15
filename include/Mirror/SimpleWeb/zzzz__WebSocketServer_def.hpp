#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/WebSocketServer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/SimpleWeb/zzzz__TcpConfig_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocketServer)
namespace Mirror::SimpleWeb {
class ArrayBuffer;
}
namespace Mirror::SimpleWeb {
class BufferPool;
}
namespace Mirror::SimpleWeb {
class Connection;
}
namespace Mirror::SimpleWeb {
struct Message;
}
namespace Mirror::SimpleWeb {
class ServerHandshake;
}
namespace Mirror::SimpleWeb {
class ServerSslHelper;
}
namespace Mirror::SimpleWeb {
struct SslConfig;
}
namespace Mirror::SimpleWeb {
struct TcpConfig;
}
namespace Mirror::SimpleWeb {
class WebSocketServer___c__DisplayClass14_0;
}
namespace Mirror::SimpleWeb {
class WebSocketServer___c__DisplayClass15_0;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
namespace System::Collections::Concurrent {
template<typename T>
class ConcurrentQueue_1;
}
namespace System::Net::Sockets {
class TcpListener;
}
namespace System::Threading {
class Thread;
}
// Forward declare root types
namespace Mirror::SimpleWeb {
class WebSocketServer;
}
namespace Mirror::SimpleWeb {
class WebSocketServer___c__DisplayClass14_0;
}
namespace Mirror::SimpleWeb {
class WebSocketServer___c__DisplayClass15_0;
}
// Write type traits
MARK_REF_T(::Mirror::SimpleWeb::WebSocketServer*);
MARK_REF_T(::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0*);
MARK_REF_T(::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0*);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::WebSocketServer*, "Mirror.SimpleWeb", "WebSocketServer");
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0*, "Mirror.SimpleWeb", "WebSocketServer/<>c__DisplayClass14_0");
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0*, "Mirror.SimpleWeb", "WebSocketServer/<>c__DisplayClass15_0");
// Dependencies System.Object
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.WebSocketServer/<>c__DisplayClass14_0
class CORDL_TYPE WebSocketServer___c__DisplayClass14_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Mirror::SimpleWeb::WebSocketServer*  __4__this;

/// @brief Field conn, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_conn, put=__cordl_internal_set_conn)) ::Mirror::SimpleWeb::Connection*  conn;

static inline ::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0* New_ctor() ;

constexpr ::Mirror::SimpleWeb::WebSocketServer* const& __cordl_internal_get___4__this() const;

constexpr ::Mirror::SimpleWeb::WebSocketServer*& __cordl_internal_get___4__this() ;

constexpr ::Mirror::SimpleWeb::Connection* const& __cordl_internal_get_conn() const;

constexpr ::Mirror::SimpleWeb::Connection*& __cordl_internal_get_conn() ;

constexpr void __cordl_internal_set___4__this(::Mirror::SimpleWeb::WebSocketServer*  value) ;

constexpr void __cordl_internal_set_conn(::Mirror::SimpleWeb::Connection*  value) ;

/// @brief Method <acceptLoop>b__0, addr 0x181ad6150, size 0x30, virtual false, abstract: false, final false
inline void _acceptLoop_b__0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketServer___c__DisplayClass14_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketServer___c__DisplayClass14_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketServer___c__DisplayClass14_0(WebSocketServer___c__DisplayClass14_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketServer___c__DisplayClass14_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketServer___c__DisplayClass14_0(WebSocketServer___c__DisplayClass14_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20545};

/// @brief Field conn, offset: 0x10, size: 0x8, def value: None
 ::Mirror::SimpleWeb::Connection*  ___conn;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Mirror::SimpleWeb::WebSocketServer*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0, ___conn) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0) == 0x20, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
// Dependencies System.Object
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.WebSocketServer/<>c__DisplayClass15_0
class CORDL_TYPE WebSocketServer___c__DisplayClass15_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Mirror::SimpleWeb::WebSocketServer*  __4__this;

/// @brief Field conn, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_conn, put=__cordl_internal_set_conn)) ::Mirror::SimpleWeb::Connection*  conn;

static inline ::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0* New_ctor() ;

/// @brief Method <HandshakeAndReceiveLoop>b__0, addr 0x181ad6180, size 0x80, virtual false, abstract: false, final false
inline void _HandshakeAndReceiveLoop_b__0() ;

constexpr ::Mirror::SimpleWeb::WebSocketServer* const& __cordl_internal_get___4__this() const;

constexpr ::Mirror::SimpleWeb::WebSocketServer*& __cordl_internal_get___4__this() ;

constexpr ::Mirror::SimpleWeb::Connection* const& __cordl_internal_get_conn() const;

constexpr ::Mirror::SimpleWeb::Connection*& __cordl_internal_get_conn() ;

constexpr void __cordl_internal_set___4__this(::Mirror::SimpleWeb::WebSocketServer*  value) ;

constexpr void __cordl_internal_set_conn(::Mirror::SimpleWeb::Connection*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketServer___c__DisplayClass15_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketServer___c__DisplayClass15_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketServer___c__DisplayClass15_0(WebSocketServer___c__DisplayClass15_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketServer___c__DisplayClass15_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketServer___c__DisplayClass15_0(WebSocketServer___c__DisplayClass15_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20546};

/// @brief Field conn, offset: 0x10, size: 0x8, def value: None
 ::Mirror::SimpleWeb::Connection*  ___conn;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Mirror::SimpleWeb::WebSocketServer*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0, ___conn) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0) == 0x20, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
// Dependencies Mirror.SimpleWeb.TcpConfig, System.Object
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.WebSocketServer
class CORDL_TYPE WebSocketServer : public ::System::Object {
public:
// Declarations
using __c__DisplayClass14_0 = ::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass14_0;

using __c__DisplayClass15_0 = ::Mirror::SimpleWeb::WebSocketServer___c__DisplayClass15_0;

/// @brief Field _idCounter, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__idCounter, put=__cordl_internal_set__idCounter)) int32_t  _idCounter;

/// @brief Field acceptThread, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_acceptThread, put=__cordl_internal_set_acceptThread)) ::System::Threading::Thread*  acceptThread;

/// @brief Field bufferPool, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_bufferPool, put=__cordl_internal_set_bufferPool)) ::Mirror::SimpleWeb::BufferPool*  bufferPool;

/// @brief Field connections, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_connections, put=__cordl_internal_set_connections)) ::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Mirror::SimpleWeb::Connection*>*  connections;

/// @brief Field handShake, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_handShake, put=__cordl_internal_set_handShake)) ::Mirror::SimpleWeb::ServerHandshake*  handShake;

/// @brief Field listener, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_listener, put=__cordl_internal_set_listener)) ::System::Net::Sockets::TcpListener*  listener;

/// @brief Field maxMessageSize, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxMessageSize, put=__cordl_internal_set_maxMessageSize)) int32_t  maxMessageSize;

/// @brief Field receiveQueue, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_receiveQueue, put=__cordl_internal_set_receiveQueue)) ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>*  receiveQueue;

/// @brief Field serverStopped, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_serverStopped, put=__cordl_internal_set_serverStopped)) bool  serverStopped;

/// @brief Field sslHelper, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_sslHelper, put=__cordl_internal_set_sslHelper)) ::Mirror::SimpleWeb::ServerSslHelper*  sslHelper;

/// @brief Field tcpConfig, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_tcpConfig, put=__cordl_internal_set_tcpConfig)) ::Mirror::SimpleWeb::TcpConfig  tcpConfig;

/// @brief Method AfterConnectionDisposed, addr 0x181ad7500, size 0xa0, virtual false, abstract: false, final false
inline void AfterConnectionDisposed(::Mirror::SimpleWeb::Connection*  conn) ;

/// @brief Method CloseConnection, addr 0x181ad75a0, size 0x110, virtual false, abstract: false, final false
inline bool CloseConnection(int32_t  id) ;

/// @brief Method GetClientAddress, addr 0x181ad76b0, size 0xe0, virtual false, abstract: false, final false
inline ::StringW GetClientAddress(int32_t  id) ;

/// @brief Method HandshakeAndReceiveLoop, addr 0x181ad7790, size 0x890, virtual false, abstract: false, final false
inline void HandshakeAndReceiveLoop(::Mirror::SimpleWeb::Connection*  conn) ;

/// @brief Method Listen, addr 0x181ad8020, size 0x130, virtual false, abstract: false, final false
inline void Listen(int32_t  port) ;

static inline ::Mirror::SimpleWeb::WebSocketServer* New_ctor(::Mirror::SimpleWeb::TcpConfig  tcpConfig, int32_t  maxMessageSize, int32_t  handshakeMaxSize, ::Mirror::SimpleWeb::SslConfig  sslConfig, ::Mirror::SimpleWeb::BufferPool*  bufferPool) ;

/// @brief Method Send, addr 0x181ad8150, size 0xf0, virtual false, abstract: false, final false
inline void Send(int32_t  id, ::Mirror::SimpleWeb::ArrayBuffer*  buffer) ;

/// @brief Method Stop, addr 0x181ad8240, size 0xf0, virtual false, abstract: false, final false
inline void Stop() ;

constexpr int32_t const& __cordl_internal_get__idCounter() const;

constexpr int32_t& __cordl_internal_get__idCounter() ;

constexpr ::System::Threading::Thread* const& __cordl_internal_get_acceptThread() const;

constexpr ::System::Threading::Thread*& __cordl_internal_get_acceptThread() ;

constexpr ::Mirror::SimpleWeb::BufferPool* const& __cordl_internal_get_bufferPool() const;

constexpr ::Mirror::SimpleWeb::BufferPool*& __cordl_internal_get_bufferPool() ;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Mirror::SimpleWeb::Connection*>* const& __cordl_internal_get_connections() const;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Mirror::SimpleWeb::Connection*>*& __cordl_internal_get_connections() ;

constexpr ::Mirror::SimpleWeb::ServerHandshake* const& __cordl_internal_get_handShake() const;

constexpr ::Mirror::SimpleWeb::ServerHandshake*& __cordl_internal_get_handShake() ;

constexpr ::System::Net::Sockets::TcpListener* const& __cordl_internal_get_listener() const;

constexpr ::System::Net::Sockets::TcpListener*& __cordl_internal_get_listener() ;

constexpr int32_t const& __cordl_internal_get_maxMessageSize() const;

constexpr int32_t& __cordl_internal_get_maxMessageSize() ;

constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>* const& __cordl_internal_get_receiveQueue() const;

constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>*& __cordl_internal_get_receiveQueue() ;

constexpr bool const& __cordl_internal_get_serverStopped() const;

constexpr bool& __cordl_internal_get_serverStopped() ;

constexpr ::Mirror::SimpleWeb::ServerSslHelper* const& __cordl_internal_get_sslHelper() const;

constexpr ::Mirror::SimpleWeb::ServerSslHelper*& __cordl_internal_get_sslHelper() ;

constexpr ::Mirror::SimpleWeb::TcpConfig const& __cordl_internal_get_tcpConfig() const;

constexpr ::Mirror::SimpleWeb::TcpConfig& __cordl_internal_get_tcpConfig() ;

constexpr void __cordl_internal_set__idCounter(int32_t  value) ;

constexpr void __cordl_internal_set_acceptThread(::System::Threading::Thread*  value) ;

constexpr void __cordl_internal_set_bufferPool(::Mirror::SimpleWeb::BufferPool*  value) ;

constexpr void __cordl_internal_set_connections(::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Mirror::SimpleWeb::Connection*>*  value) ;

constexpr void __cordl_internal_set_handShake(::Mirror::SimpleWeb::ServerHandshake*  value) ;

constexpr void __cordl_internal_set_listener(::System::Net::Sockets::TcpListener*  value) ;

constexpr void __cordl_internal_set_maxMessageSize(int32_t  value) ;

constexpr void __cordl_internal_set_receiveQueue(::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>*  value) ;

constexpr void __cordl_internal_set_serverStopped(bool  value) ;

constexpr void __cordl_internal_set_sslHelper(::Mirror::SimpleWeb::ServerSslHelper*  value) ;

constexpr void __cordl_internal_set_tcpConfig(::Mirror::SimpleWeb::TcpConfig  value) ;

/// @brief Method .ctor, addr 0x181ad8330, size 0x230, virtual false, abstract: false, final false
inline void _ctor(::Mirror::SimpleWeb::TcpConfig  tcpConfig, int32_t  maxMessageSize, int32_t  handshakeMaxSize, ::Mirror::SimpleWeb::SslConfig  sslConfig, ::Mirror::SimpleWeb::BufferPool*  bufferPool) ;

/// @brief Method acceptLoop, addr 0x181ad8560, size 0x220, virtual false, abstract: false, final false
inline void acceptLoop() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketServer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketServer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketServer(WebSocketServer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketServer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketServer(WebSocketServer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20547};

/// @brief Field receiveQueue, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>*  ___receiveQueue;

/// @brief Field tcpConfig, offset: 0x18, size: 0xc, def value: None
 ::Mirror::SimpleWeb::TcpConfig  ___tcpConfig;

/// @brief Field maxMessageSize, offset: 0x24, size: 0x4, def value: None
 int32_t  ___maxMessageSize;

/// @brief Field listener, offset: 0x28, size: 0x8, def value: None
 ::System::Net::Sockets::TcpListener*  ___listener;

/// @brief Field acceptThread, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::Thread*  ___acceptThread;

/// @brief Field serverStopped, offset: 0x38, size: 0x1, def value: None
 bool  ___serverStopped;

/// @brief Field handShake, offset: 0x40, size: 0x8, def value: None
 ::Mirror::SimpleWeb::ServerHandshake*  ___handShake;

/// @brief Field sslHelper, offset: 0x48, size: 0x8, def value: None
 ::Mirror::SimpleWeb::ServerSslHelper*  ___sslHelper;

/// @brief Field bufferPool, offset: 0x50, size: 0x8, def value: None
 ::Mirror::SimpleWeb::BufferPool*  ___bufferPool;

/// @brief Field connections, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Mirror::SimpleWeb::Connection*>*  ___connections;

/// @brief Field _idCounter, offset: 0x60, size: 0x4, def value: None
 int32_t  ____idCounter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SimpleWeb::WebSocketServer, ___receiveQueue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::WebSocketServer, ___tcpConfig) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::WebSocketServer, ___maxMessageSize) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::WebSocketServer, ___listener) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::WebSocketServer, ___acceptThread) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::WebSocketServer, ___serverStopped) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::WebSocketServer, ___handShake) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::WebSocketServer, ___sslHelper) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::WebSocketServer, ___bufferPool) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::WebSocketServer, ___connections) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::WebSocketServer, ____idCounter) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Mirror::SimpleWeb::WebSocketServer) == 0x68, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb

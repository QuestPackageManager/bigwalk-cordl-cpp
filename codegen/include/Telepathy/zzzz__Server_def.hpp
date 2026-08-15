#pragma once
// IWYU pragma private; include "Telepathy/Server.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Telepathy/zzzz__Common_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Server)
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
namespace System::Net::Sockets {
class TcpClient;
}
namespace System::Net::Sockets {
class TcpListener;
}
namespace System::Threading {
class Thread;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace Telepathy {
class ConnectionState;
}
namespace Telepathy {
class MagnificentReceivePipe;
}
namespace Telepathy {
class Server___c__DisplayClass16_0;
}
namespace Telepathy {
class Server___c__DisplayClass17_0;
}
// Forward declare root types
namespace Telepathy {
class Server;
}
namespace Telepathy {
class Server___c__DisplayClass16_0;
}
namespace Telepathy {
class Server___c__DisplayClass17_0;
}
// Write type traits
MARK_REF_T(::Telepathy::Server*);
MARK_REF_T(::Telepathy::Server___c__DisplayClass16_0*);
MARK_REF_T(::Telepathy::Server___c__DisplayClass17_0*);
DEFINE_IL2CPP_CLASS(::Telepathy::Server*, "Telepathy", "Server");
DEFINE_IL2CPP_CLASS(::Telepathy::Server___c__DisplayClass16_0*, "Telepathy", "Server/<>c__DisplayClass16_0");
DEFINE_IL2CPP_CLASS(::Telepathy::Server___c__DisplayClass17_0*, "Telepathy", "Server/<>c__DisplayClass17_0");
// Dependencies System.Object
namespace Telepathy {
// Is value type: false
// CS Name: Telepathy.Server/<>c__DisplayClass16_0
class CORDL_TYPE Server___c__DisplayClass16_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Telepathy::Server*  __4__this;

/// @brief Field client, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_client, put=__cordl_internal_set_client)) ::System::Net::Sockets::TcpClient*  client;

/// @brief Field connection, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_connection, put=__cordl_internal_set_connection)) ::Telepathy::ConnectionState*  connection;

/// @brief Field connectionId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_connectionId, put=__cordl_internal_set_connectionId)) int32_t  connectionId;

/// @brief Field sendThread, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sendThread, put=__cordl_internal_set_sendThread)) ::System::Threading::Thread*  sendThread;

static inline ::Telepathy::Server___c__DisplayClass16_0* New_ctor() ;

/// @brief Method <Listen>b__0, addr 0x181e5b200, size 0xf0, virtual false, abstract: false, final false
inline void _Listen_b__0() ;

/// @brief Method <Listen>b__1, addr 0x181e5b2f0, size 0x110, virtual false, abstract: false, final false
inline void _Listen_b__1() ;

constexpr ::Telepathy::Server* const& __cordl_internal_get___4__this() const;

constexpr ::Telepathy::Server*& __cordl_internal_get___4__this() ;

constexpr ::System::Net::Sockets::TcpClient* const& __cordl_internal_get_client() const;

constexpr ::System::Net::Sockets::TcpClient*& __cordl_internal_get_client() ;

constexpr ::Telepathy::ConnectionState* const& __cordl_internal_get_connection() const;

constexpr ::Telepathy::ConnectionState*& __cordl_internal_get_connection() ;

constexpr int32_t const& __cordl_internal_get_connectionId() const;

constexpr int32_t& __cordl_internal_get_connectionId() ;

constexpr ::System::Threading::Thread* const& __cordl_internal_get_sendThread() const;

constexpr ::System::Threading::Thread*& __cordl_internal_get_sendThread() ;

constexpr void __cordl_internal_set___4__this(::Telepathy::Server*  value) ;

constexpr void __cordl_internal_set_client(::System::Net::Sockets::TcpClient*  value) ;

constexpr void __cordl_internal_set_connection(::Telepathy::ConnectionState*  value) ;

constexpr void __cordl_internal_set_connectionId(int32_t  value) ;

constexpr void __cordl_internal_set_sendThread(::System::Threading::Thread*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Server___c__DisplayClass16_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Server___c__DisplayClass16_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Server___c__DisplayClass16_0(Server___c__DisplayClass16_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Server___c__DisplayClass16_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Server___c__DisplayClass16_0(Server___c__DisplayClass16_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21327};

/// @brief Field connectionId, offset: 0x10, size: 0x4, def value: None
 int32_t  ___connectionId;

/// @brief Field client, offset: 0x18, size: 0x8, def value: None
 ::System::Net::Sockets::TcpClient*  ___client;

/// @brief Field connection, offset: 0x20, size: 0x8, def value: None
 ::Telepathy::ConnectionState*  ___connection;

/// @brief Field sendThread, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::Thread*  ___sendThread;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::Telepathy::Server*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Telepathy::Server___c__DisplayClass16_0, ___connectionId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Telepathy::Server___c__DisplayClass16_0, ___client) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Telepathy::Server___c__DisplayClass16_0, ___connection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Telepathy::Server___c__DisplayClass16_0, ___sendThread) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Telepathy::Server___c__DisplayClass16_0, _____4__this) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Telepathy::Server___c__DisplayClass16_0) == 0x38, "Size mismatch!");

} // namespace end def Telepathy
// Dependencies System.Object
namespace Telepathy {
// Is value type: false
// CS Name: Telepathy.Server/<>c__DisplayClass17_0
class CORDL_TYPE Server___c__DisplayClass17_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Telepathy::Server*  __4__this;

/// @brief Field port, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_port, put=__cordl_internal_set_port)) int32_t  port;

static inline ::Telepathy::Server___c__DisplayClass17_0* New_ctor() ;

/// @brief Method <Start>b__0, addr 0x181e5b400, size 0x30, virtual false, abstract: false, final false
inline void _Start_b__0() ;

constexpr ::Telepathy::Server* const& __cordl_internal_get___4__this() const;

constexpr ::Telepathy::Server*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get_port() const;

constexpr int32_t& __cordl_internal_get_port() ;

constexpr void __cordl_internal_set___4__this(::Telepathy::Server*  value) ;

constexpr void __cordl_internal_set_port(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Server___c__DisplayClass17_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Server___c__DisplayClass17_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Server___c__DisplayClass17_0(Server___c__DisplayClass17_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Server___c__DisplayClass17_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Server___c__DisplayClass17_0(Server___c__DisplayClass17_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21328};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Telepathy::Server*  _____4__this;

/// @brief Field port, offset: 0x18, size: 0x4, def value: None
 int32_t  ___port;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Telepathy::Server___c__DisplayClass17_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Telepathy::Server___c__DisplayClass17_0, ___port) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Telepathy::Server___c__DisplayClass17_0) == 0x20, "Size mismatch!");

} // namespace end def Telepathy
// Dependencies Telepathy.Common
namespace Telepathy {
// Is value type: false
// CS Name: Telepathy.Server
class CORDL_TYPE Server : public ::Telepathy::Common {
public:
// Declarations
using __c__DisplayClass16_0 = ::Telepathy::Server___c__DisplayClass16_0;

using __c__DisplayClass17_0 = ::Telepathy::Server___c__DisplayClass17_0;

 __declspec(property(get=get_Active)) bool  Active;

/// @brief Field OnConnected, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnConnected, put=__cordl_internal_set_OnConnected)) ::System::Action_1<int32_t>*  OnConnected;

/// @brief Field OnData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnData, put=__cordl_internal_set_OnData)) ::System::Action_2<int32_t,::System::ArraySegment_1<uint8_t>>*  OnData;

/// @brief Field OnDisconnected, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDisconnected, put=__cordl_internal_set_OnDisconnected)) ::System::Action_1<int32_t>*  OnDisconnected;

 __declspec(property(get=get_ReceivePipeTotalCount)) int32_t  ReceivePipeTotalCount;

/// @brief Field ReceiveQueueLimit, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReceiveQueueLimit, put=__cordl_internal_set_ReceiveQueueLimit)) int32_t  ReceiveQueueLimit;

/// @brief Field SendQueueLimit, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_SendQueueLimit, put=__cordl_internal_set_SendQueueLimit)) int32_t  SendQueueLimit;

/// @brief Field clients, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_clients, put=__cordl_internal_set_clients)) ::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Telepathy::ConnectionState*>*  clients;

/// @brief Field counter, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_counter, put=__cordl_internal_set_counter)) int32_t  counter;

/// @brief Field listener, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_listener, put=__cordl_internal_set_listener)) ::System::Net::Sockets::TcpListener*  listener;

/// @brief Field listenerThread, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_listenerThread, put=__cordl_internal_set_listenerThread)) ::System::Threading::Thread*  listenerThread;

/// @brief Field receivePipe, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_receivePipe, put=__cordl_internal_set_receivePipe)) ::Telepathy::MagnificentReceivePipe*  receivePipe;

/// @brief Method Disconnect, addr 0x181e597f0, size 0xc0, virtual false, abstract: false, final false
inline bool Disconnect(int32_t  connectionId) ;

/// @brief Method GetClientAddress, addr 0x181e598b0, size 0xd0, virtual false, abstract: false, final false
inline ::StringW GetClientAddress(int32_t  connectionId) ;

/// @brief Method Listen, addr 0x181e59980, size 0x520, virtual false, abstract: false, final false
inline void Listen(int32_t  port) ;

static inline ::Telepathy::Server* New_ctor(int32_t  MaxMessageSize) ;

/// @brief Method NextConnectionId, addr 0x181e59ea0, size 0x70, virtual false, abstract: false, final false
inline int32_t NextConnectionId() ;

/// @brief Method Send, addr 0x181e59f10, size 0x230, virtual false, abstract: false, final false
inline bool Send(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  message) ;

/// @brief Method Start, addr 0x181e5a140, size 0x1b0, virtual false, abstract: false, final false
inline bool Start(int32_t  port) ;

/// @brief Method Stop, addr 0x181e5a2f0, size 0x2f0, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method Tick, addr 0x181e5a5e0, size 0x1b0, virtual false, abstract: false, final false
inline int32_t Tick(int32_t  processLimit, ::System::Func_1<bool>*  checkEnabled) ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnConnected() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnConnected() ;

constexpr ::System::Action_2<int32_t,::System::ArraySegment_1<uint8_t>>* const& __cordl_internal_get_OnData() const;

constexpr ::System::Action_2<int32_t,::System::ArraySegment_1<uint8_t>>*& __cordl_internal_get_OnData() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnDisconnected() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnDisconnected() ;

constexpr int32_t const& __cordl_internal_get_ReceiveQueueLimit() const;

constexpr int32_t& __cordl_internal_get_ReceiveQueueLimit() ;

constexpr int32_t const& __cordl_internal_get_SendQueueLimit() const;

constexpr int32_t& __cordl_internal_get_SendQueueLimit() ;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Telepathy::ConnectionState*>* const& __cordl_internal_get_clients() const;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Telepathy::ConnectionState*>*& __cordl_internal_get_clients() ;

constexpr int32_t const& __cordl_internal_get_counter() const;

constexpr int32_t& __cordl_internal_get_counter() ;

constexpr ::System::Net::Sockets::TcpListener* const& __cordl_internal_get_listener() const;

constexpr ::System::Net::Sockets::TcpListener*& __cordl_internal_get_listener() ;

constexpr ::System::Threading::Thread* const& __cordl_internal_get_listenerThread() const;

constexpr ::System::Threading::Thread*& __cordl_internal_get_listenerThread() ;

constexpr ::Telepathy::MagnificentReceivePipe* const& __cordl_internal_get_receivePipe() const;

constexpr ::Telepathy::MagnificentReceivePipe*& __cordl_internal_get_receivePipe() ;

constexpr void __cordl_internal_set_OnConnected(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_OnData(::System::Action_2<int32_t,::System::ArraySegment_1<uint8_t>>*  value) ;

constexpr void __cordl_internal_set_OnDisconnected(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_ReceiveQueueLimit(int32_t  value) ;

constexpr void __cordl_internal_set_SendQueueLimit(int32_t  value) ;

constexpr void __cordl_internal_set_clients(::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Telepathy::ConnectionState*>*  value) ;

constexpr void __cordl_internal_set_counter(int32_t  value) ;

constexpr void __cordl_internal_set_listener(::System::Net::Sockets::TcpListener*  value) ;

constexpr void __cordl_internal_set_listenerThread(::System::Threading::Thread*  value) ;

constexpr void __cordl_internal_set_receivePipe(::Telepathy::MagnificentReceivePipe*  value) ;

/// @brief Method .ctor, addr 0x181e5a790, size 0x70, virtual false, abstract: false, final false
inline void _ctor(int32_t  MaxMessageSize) ;

/// @brief Method get_Active, addr 0x181e5a800, size 0x20, virtual false, abstract: false, final false
inline bool get_Active() ;

/// @brief Method get_ReceivePipeTotalCount, addr 0x181e5a820, size 0x20, virtual false, abstract: false, final false
inline int32_t get_ReceivePipeTotalCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Server() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Server", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Server(Server && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Server", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Server(Server const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21329};

/// @brief Field OnConnected, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnConnected;

/// @brief Field OnData, offset: 0x28, size: 0x8, def value: None
 ::System::Action_2<int32_t,::System::ArraySegment_1<uint8_t>>*  ___OnData;

/// @brief Field OnDisconnected, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnDisconnected;

/// @brief Field listener, offset: 0x38, size: 0x8, def value: None
 ::System::Net::Sockets::TcpListener*  ___listener;

/// @brief Field listenerThread, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::Thread*  ___listenerThread;

/// @brief Field SendQueueLimit, offset: 0x48, size: 0x4, def value: None
 int32_t  ___SendQueueLimit;

/// @brief Field ReceiveQueueLimit, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___ReceiveQueueLimit;

/// @brief Field receivePipe, offset: 0x50, size: 0x8, def value: None
 ::Telepathy::MagnificentReceivePipe*  ___receivePipe;

/// @brief Field clients, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Telepathy::ConnectionState*>*  ___clients;

/// @brief Field counter, offset: 0x60, size: 0x4, def value: None
 int32_t  ___counter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Telepathy::Server, ___OnConnected) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Telepathy::Server, ___OnData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Telepathy::Server, ___OnDisconnected) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Telepathy::Server, ___listener) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Telepathy::Server, ___listenerThread) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Telepathy::Server, ___SendQueueLimit) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Telepathy::Server, ___ReceiveQueueLimit) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Telepathy::Server, ___receivePipe) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Telepathy::Server, ___clients) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Telepathy::Server, ___counter) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Telepathy::Server) == 0x68, "Size mismatch!");

} // namespace end def Telepathy

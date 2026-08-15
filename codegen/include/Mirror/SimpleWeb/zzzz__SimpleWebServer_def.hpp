#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/SimpleWebServer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleWebServer)
namespace Mirror::SimpleWeb {
class BufferPool;
}
namespace Mirror::SimpleWeb {
struct SslConfig;
}
namespace Mirror::SimpleWeb {
struct TcpConfig;
}
namespace Mirror::SimpleWeb {
class WebSocketServer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
class Exception;
}
namespace UnityEngine {
class MonoBehaviour;
}
// Forward declare root types
namespace Mirror::SimpleWeb {
class SimpleWebServer;
}
// Write type traits
MARK_REF_T(::Mirror::SimpleWeb::SimpleWebServer*);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::SimpleWebServer*, "Mirror.SimpleWeb", "SimpleWebServer");
// Dependencies System.Object
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.SimpleWebServer
class CORDL_TYPE SimpleWebServer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Active, put=set_Active)) bool  Active;

/// @brief Field <Active>k__BackingField, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__Active_k__BackingField, put=__cordl_internal_set__Active_k__BackingField)) bool  _Active_k__BackingField;

/// @brief Field bufferPool, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_bufferPool, put=__cordl_internal_set_bufferPool)) ::Mirror::SimpleWeb::BufferPool*  bufferPool;

/// @brief Field maxMessagesPerTick, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxMessagesPerTick, put=__cordl_internal_set_maxMessagesPerTick)) int32_t  maxMessagesPerTick;

/// @brief Field onConnect, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onConnect, put=__cordl_internal_set_onConnect)) ::System::Action_1<int32_t>*  onConnect;

/// @brief Field onData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onData, put=__cordl_internal_set_onData)) ::System::Action_2<int32_t,::System::ArraySegment_1<uint8_t>>*  onData;

/// @brief Field onDisconnect, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onDisconnect, put=__cordl_internal_set_onDisconnect)) ::System::Action_1<int32_t>*  onDisconnect;

/// @brief Field onError, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onError, put=__cordl_internal_set_onError)) ::System::Action_2<int32_t,::System::Exception*>*  onError;

/// @brief Field server, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_server, put=__cordl_internal_set_server)) ::Mirror::SimpleWeb::WebSocketServer*  server;

/// @brief Method GetClientAddress, addr 0x181ad5050, size 0x100, virtual false, abstract: false, final false
inline ::StringW GetClientAddress(int32_t  connectionId) ;

/// @brief Method KickClient, addr 0x181ad5150, size 0x120, virtual false, abstract: false, final false
inline bool KickClient(int32_t  connectionId) ;

static inline ::Mirror::SimpleWeb::SimpleWebServer* New_ctor(int32_t  maxMessagesPerTick, ::Mirror::SimpleWeb::TcpConfig  tcpConfig, int32_t  maxMessageSize, int32_t  handshakeMaxSize, ::Mirror::SimpleWeb::SslConfig  sslConfig) ;

/// @brief Method ProcessMessageQueue, addr 0x181ad54f0, size 0x10, virtual false, abstract: false, final false
inline void ProcessMessageQueue() ;

/// @brief Method ProcessMessageQueue, addr 0x181ad5270, size 0x280, virtual false, abstract: false, final false
inline void ProcessMessageQueue(::UnityEngine::MonoBehaviour*  behaviour) ;

/// @brief Method SendAll, addr 0x181ad5500, size 0x140, virtual false, abstract: false, final false
inline void SendAll(::System::Collections::Generic::List_1<int32_t>*  connectionIds, ::System::ArraySegment_1<uint8_t>  source) ;

/// @brief Method SendOne, addr 0x181ad5640, size 0xc0, virtual false, abstract: false, final false
inline void SendOne(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  source) ;

/// @brief Method Start, addr 0x181ad5700, size 0x150, virtual false, abstract: false, final false
inline void Start(uint16_t  port) ;

/// @brief Method Stop, addr 0x181ad5850, size 0x110, virtual false, abstract: false, final false
inline void Stop() ;

constexpr bool const& __cordl_internal_get__Active_k__BackingField() const;

constexpr bool& __cordl_internal_get__Active_k__BackingField() ;

constexpr ::Mirror::SimpleWeb::BufferPool* const& __cordl_internal_get_bufferPool() const;

constexpr ::Mirror::SimpleWeb::BufferPool*& __cordl_internal_get_bufferPool() ;

constexpr int32_t const& __cordl_internal_get_maxMessagesPerTick() const;

constexpr int32_t& __cordl_internal_get_maxMessagesPerTick() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_onConnect() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_onConnect() ;

constexpr ::System::Action_2<int32_t,::System::ArraySegment_1<uint8_t>>* const& __cordl_internal_get_onData() const;

constexpr ::System::Action_2<int32_t,::System::ArraySegment_1<uint8_t>>*& __cordl_internal_get_onData() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_onDisconnect() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_onDisconnect() ;

constexpr ::System::Action_2<int32_t,::System::Exception*>* const& __cordl_internal_get_onError() const;

constexpr ::System::Action_2<int32_t,::System::Exception*>*& __cordl_internal_get_onError() ;

constexpr ::Mirror::SimpleWeb::WebSocketServer* const& __cordl_internal_get_server() const;

constexpr ::Mirror::SimpleWeb::WebSocketServer*& __cordl_internal_get_server() ;

constexpr void __cordl_internal_set__Active_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_bufferPool(::Mirror::SimpleWeb::BufferPool*  value) ;

constexpr void __cordl_internal_set_maxMessagesPerTick(int32_t  value) ;

constexpr void __cordl_internal_set_onConnect(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_onData(::System::Action_2<int32_t,::System::ArraySegment_1<uint8_t>>*  value) ;

constexpr void __cordl_internal_set_onDisconnect(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_onError(::System::Action_2<int32_t,::System::Exception*>*  value) ;

constexpr void __cordl_internal_set_server(::Mirror::SimpleWeb::WebSocketServer*  value) ;

/// @brief Method .ctor, addr 0x181ad5960, size 0x110, virtual false, abstract: false, final false
inline void _ctor(int32_t  maxMessagesPerTick, ::Mirror::SimpleWeb::TcpConfig  tcpConfig, int32_t  maxMessageSize, int32_t  handshakeMaxSize, ::Mirror::SimpleWeb::SslConfig  sslConfig) ;

/// @brief Method add_onConnect, addr 0x18062fee0, size 0x90, virtual false, abstract: false, final false
inline void add_onConnect(::System::Action_1<int32_t>*  value) ;

/// @brief Method add_onData, addr 0x181ad5a70, size 0x90, virtual false, abstract: false, final false
inline void add_onData(::System::Action_2<int32_t,::System::ArraySegment_1<uint8_t>>*  value) ;

/// @brief Method add_onDisconnect, addr 0x181ad5b00, size 0x90, virtual false, abstract: false, final false
inline void add_onDisconnect(::System::Action_1<int32_t>*  value) ;

/// @brief Method add_onError, addr 0x181ad5b90, size 0x90, virtual false, abstract: false, final false
inline void add_onError(::System::Action_2<int32_t,::System::Exception*>*  value) ;

/// @brief Method get_Active, addr 0x1802fdd10, size 0x10, virtual false, abstract: false, final false
inline bool get_Active() ;

/// @brief Method remove_onConnect, addr 0x180630120, size 0x90, virtual false, abstract: false, final false
inline void remove_onConnect(::System::Action_1<int32_t>*  value) ;

/// @brief Method remove_onData, addr 0x181ad5c20, size 0x90, virtual false, abstract: false, final false
inline void remove_onData(::System::Action_2<int32_t,::System::ArraySegment_1<uint8_t>>*  value) ;

/// @brief Method remove_onDisconnect, addr 0x181ad5cb0, size 0x90, virtual false, abstract: false, final false
inline void remove_onDisconnect(::System::Action_1<int32_t>*  value) ;

/// @brief Method remove_onError, addr 0x181ad5d40, size 0x90, virtual false, abstract: false, final false
inline void remove_onError(::System::Action_2<int32_t,::System::Exception*>*  value) ;

/// @brief Method set_Active, addr 0x180503b70, size 0x10, virtual false, abstract: false, final false
inline void set_Active(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleWebServer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleWebServer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleWebServer(SimpleWebServer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleWebServer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleWebServer(SimpleWebServer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20544};

/// @brief Field onConnect, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___onConnect;

/// @brief Field onDisconnect, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___onDisconnect;

/// @brief Field onData, offset: 0x20, size: 0x8, def value: None
 ::System::Action_2<int32_t,::System::ArraySegment_1<uint8_t>>*  ___onData;

/// @brief Field onError, offset: 0x28, size: 0x8, def value: None
 ::System::Action_2<int32_t,::System::Exception*>*  ___onError;

/// @brief Field maxMessagesPerTick, offset: 0x30, size: 0x4, def value: None
 int32_t  ___maxMessagesPerTick;

/// @brief Field server, offset: 0x38, size: 0x8, def value: None
 ::Mirror::SimpleWeb::WebSocketServer*  ___server;

/// @brief Field bufferPool, offset: 0x40, size: 0x8, def value: None
 ::Mirror::SimpleWeb::BufferPool*  ___bufferPool;

/// @brief Field <Active>k__BackingField, offset: 0x48, size: 0x1, def value: None
 bool  ____Active_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebServer, ___onConnect) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebServer, ___onDisconnect) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebServer, ___onData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebServer, ___onError) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebServer, ___maxMessagesPerTick) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebServer, ___server) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebServer, ___bufferPool) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebServer, ____Active_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Mirror::SimpleWeb::SimpleWebServer) == 0x50, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb

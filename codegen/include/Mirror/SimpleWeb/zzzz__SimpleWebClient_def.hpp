#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/SimpleWebClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/SimpleWeb/zzzz__ClientState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleWebClient)
namespace Mirror::SimpleWeb {
class BufferPool;
}
namespace Mirror::SimpleWeb {
struct ClientState;
}
namespace Mirror::SimpleWeb {
struct Message;
}
namespace Mirror::SimpleWeb {
struct TcpConfig;
}
namespace System::Collections::Concurrent {
template<typename T>
class ConcurrentQueue_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class Exception;
}
namespace System {
class Uri;
}
namespace UnityEngine {
class MonoBehaviour;
}
// Forward declare root types
namespace Mirror::SimpleWeb {
class SimpleWebClient;
}
// Write type traits
MARK_REF_T(::Mirror::SimpleWeb::SimpleWebClient*);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::SimpleWebClient*, "Mirror.SimpleWeb", "SimpleWebClient");
// Dependencies Mirror.SimpleWeb.ClientState, System.Object
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.SimpleWebClient
class CORDL_TYPE SimpleWebClient : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ConnectionState)) ::Mirror::SimpleWeb::ClientState  ConnectionState;

/// @brief Field bufferPool, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_bufferPool, put=__cordl_internal_set_bufferPool)) ::Mirror::SimpleWeb::BufferPool*  bufferPool;

/// @brief Field maxMessageSize, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxMessageSize, put=__cordl_internal_set_maxMessageSize)) int32_t  maxMessageSize;

/// @brief Field maxMessagesPerTick, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxMessagesPerTick, put=__cordl_internal_set_maxMessagesPerTick)) int32_t  maxMessagesPerTick;

/// @brief Field onConnect, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onConnect, put=__cordl_internal_set_onConnect)) ::System::Action*  onConnect;

/// @brief Field onData, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onData, put=__cordl_internal_set_onData)) ::System::Action_1<::System::ArraySegment_1<uint8_t>>*  onData;

/// @brief Field onDisconnect, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onDisconnect, put=__cordl_internal_set_onDisconnect)) ::System::Action*  onDisconnect;

/// @brief Field onError, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_onError, put=__cordl_internal_set_onError)) ::System::Action_1<::System::Exception*>*  onError;

/// @brief Field receiveQueue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_receiveQueue, put=__cordl_internal_set_receiveQueue)) ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>*  receiveQueue;

/// @brief Field state, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::Mirror::SimpleWeb::ClientState  state;

/// @brief Method Connect, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Connect(::System::Uri*  serverAddress) ;

/// @brief Method Create, addr 0x181ad4ab0, size 0xa0, virtual false, abstract: false, final false
static inline ::Mirror::SimpleWeb::SimpleWebClient* Create(int32_t  maxMessageSize, int32_t  maxMessagesPerTick, ::Mirror::SimpleWeb::TcpConfig  tcpConfig) ;

/// @brief Method Disconnect, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Disconnect() ;

static inline ::Mirror::SimpleWeb::SimpleWebClient* New_ctor(int32_t  maxMessageSize, int32_t  maxMessagesPerTick) ;

/// @brief Method ProcessMessageQueue, addr 0x181ad4b50, size 0x10, virtual false, abstract: false, final false
inline void ProcessMessageQueue() ;

/// @brief Method ProcessMessageQueue, addr 0x181ad4b60, size 0x200, virtual false, abstract: false, final false
inline void ProcessMessageQueue(::UnityEngine::MonoBehaviour*  behaviour) ;

/// @brief Method Send, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Send(::System::ArraySegment_1<uint8_t>  segment) ;

constexpr ::Mirror::SimpleWeb::BufferPool* const& __cordl_internal_get_bufferPool() const;

constexpr ::Mirror::SimpleWeb::BufferPool*& __cordl_internal_get_bufferPool() ;

constexpr int32_t const& __cordl_internal_get_maxMessageSize() const;

constexpr int32_t& __cordl_internal_get_maxMessageSize() ;

constexpr int32_t const& __cordl_internal_get_maxMessagesPerTick() const;

constexpr int32_t& __cordl_internal_get_maxMessagesPerTick() ;

constexpr ::System::Action* const& __cordl_internal_get_onConnect() const;

constexpr ::System::Action*& __cordl_internal_get_onConnect() ;

constexpr ::System::Action_1<::System::ArraySegment_1<uint8_t>>* const& __cordl_internal_get_onData() const;

constexpr ::System::Action_1<::System::ArraySegment_1<uint8_t>>*& __cordl_internal_get_onData() ;

constexpr ::System::Action* const& __cordl_internal_get_onDisconnect() const;

constexpr ::System::Action*& __cordl_internal_get_onDisconnect() ;

constexpr ::System::Action_1<::System::Exception*>* const& __cordl_internal_get_onError() const;

constexpr ::System::Action_1<::System::Exception*>*& __cordl_internal_get_onError() ;

constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>* const& __cordl_internal_get_receiveQueue() const;

constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>*& __cordl_internal_get_receiveQueue() ;

constexpr ::Mirror::SimpleWeb::ClientState const& __cordl_internal_get_state() const;

constexpr ::Mirror::SimpleWeb::ClientState& __cordl_internal_get_state() ;

constexpr void __cordl_internal_set_bufferPool(::Mirror::SimpleWeb::BufferPool*  value) ;

constexpr void __cordl_internal_set_maxMessageSize(int32_t  value) ;

constexpr void __cordl_internal_set_maxMessagesPerTick(int32_t  value) ;

constexpr void __cordl_internal_set_onConnect(::System::Action*  value) ;

constexpr void __cordl_internal_set_onData(::System::Action_1<::System::ArraySegment_1<uint8_t>>*  value) ;

constexpr void __cordl_internal_set_onDisconnect(::System::Action*  value) ;

constexpr void __cordl_internal_set_onError(::System::Action_1<::System::Exception*>*  value) ;

constexpr void __cordl_internal_set_receiveQueue(::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>*  value) ;

constexpr void __cordl_internal_set_state(::Mirror::SimpleWeb::ClientState  value) ;

/// @brief Method .ctor, addr 0x181ad4d60, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  maxMessageSize, int32_t  maxMessagesPerTick) ;

/// @brief Method add_onConnect, addr 0x18062eaa0, size 0x80, virtual false, abstract: false, final false
inline void add_onConnect(::System::Action*  value) ;

/// @brief Method add_onData, addr 0x181ad4e10, size 0x90, virtual false, abstract: false, final false
inline void add_onData(::System::Action_1<::System::ArraySegment_1<uint8_t>>*  value) ;

/// @brief Method add_onDisconnect, addr 0x180da2d10, size 0x120, virtual false, abstract: false, final false
inline void add_onDisconnect(::System::Action*  value) ;

/// @brief Method add_onError, addr 0x181ad4ea0, size 0x90, virtual false, abstract: false, final false
inline void add_onError(::System::Action_1<::System::Exception*>*  value) ;

/// @brief Method get_ConnectionState, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline ::Mirror::SimpleWeb::ClientState get_ConnectionState() ;

/// @brief Method remove_onConnect, addr 0x18062ec30, size 0x80, virtual false, abstract: false, final false
inline void remove_onConnect(::System::Action*  value) ;

/// @brief Method remove_onData, addr 0x181ad4f30, size 0x90, virtual false, abstract: false, final false
inline void remove_onData(::System::Action_1<::System::ArraySegment_1<uint8_t>>*  value) ;

/// @brief Method remove_onDisconnect, addr 0x180da3000, size 0x80, virtual false, abstract: false, final false
inline void remove_onDisconnect(::System::Action*  value) ;

/// @brief Method remove_onError, addr 0x181ad4fc0, size 0x90, virtual false, abstract: false, final false
inline void remove_onError(::System::Action_1<::System::Exception*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleWebClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleWebClient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleWebClient(SimpleWebClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleWebClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleWebClient(SimpleWebClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20511};

/// @brief Field maxMessagesPerTick, offset: 0x10, size: 0x4, def value: None
 int32_t  ___maxMessagesPerTick;

/// @brief Field maxMessageSize, offset: 0x14, size: 0x4, def value: None
 int32_t  ___maxMessageSize;

/// @brief Field receiveQueue, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>*  ___receiveQueue;

/// @brief Field bufferPool, offset: 0x20, size: 0x8, def value: None
 ::Mirror::SimpleWeb::BufferPool*  ___bufferPool;

/// @brief Field state, offset: 0x28, size: 0x4, def value: None
 ::Mirror::SimpleWeb::ClientState  ___state;

/// @brief Field onConnect, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___onConnect;

/// @brief Field onDisconnect, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  ___onDisconnect;

/// @brief Field onData, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::System::ArraySegment_1<uint8_t>>*  ___onData;

/// @brief Field onError, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<::System::Exception*>*  ___onError;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebClient, ___maxMessagesPerTick) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebClient, ___maxMessageSize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebClient, ___receiveQueue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebClient, ___bufferPool) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebClient, ___state) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebClient, ___onConnect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebClient, ___onDisconnect) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebClient, ___onData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::SimpleWebClient, ___onError) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Mirror::SimpleWeb::SimpleWebClient) == 0x50, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb

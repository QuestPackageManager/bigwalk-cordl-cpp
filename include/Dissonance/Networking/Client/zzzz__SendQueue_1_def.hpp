#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/SendQueue_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SendQueue_1)
namespace Dissonance::Datastructures {
template<typename T>
class ConcurrentPool_1;
}
namespace Dissonance::Datastructures {
template<typename T>
class Pool_1;
}
namespace Dissonance::Networking::Client {
template<typename TPeer>
class IClient_1;
}
namespace Dissonance::Networking::Client {
template<typename TPeer>
class ISendQueue_1;
}
namespace Dissonance::Networking::Client {
template<typename TPeer>
class SendQueue_1___c;
}
namespace Dissonance::Networking {
template<typename TPeer>
class ClientInfo_1;
}
namespace Dissonance::Threading {
template<typename T>
class ReadonlyLockedValue_1;
}
namespace Dissonance {
class Log;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance::Networking::Client {
template<typename TPeer>
class SendQueue_1;
}
namespace Dissonance::Networking::Client {
template<typename TPeer>
class SendQueue_1___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Networking::Client::SendQueue_1);
MARK_GEN_REF_T_PTR(::Dissonance::Networking::Client::SendQueue_1___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::Client::SendQueue_1, "Dissonance.Networking.Client", "SendQueue`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::Client::SendQueue_1___c, "Dissonance.Networking.Client", "SendQueue`1/<>c");
// Dependencies System.Object
namespace Dissonance::Networking::Client {
// cpp template
template<typename TPeer>
// Is value type: false
// CS Name: Dissonance.Networking.Client.SendQueue`1/<>c<TPeer>
class CORDL_TYPE SendQueue_1___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Dissonance::Networking::Client::SendQueue_1___c<TPeer>*  __9;

/// @brief Field <>9__9_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_0, put=setStaticF___9__9_0)) ::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*>*  __9__9_0;

static inline ::Dissonance::Networking::Client::SendQueue_1___c<TPeer>* New_ctor() ;

/// @brief Method <.ctor>b__9_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>* __ctor_b__9_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Dissonance::Networking::Client::SendQueue_1___c<TPeer>* getStaticF___9() ;

static inline ::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*>* getStaticF___9__9_0() ;

static inline void setStaticF___9(::Dissonance::Networking::Client::SendQueue_1___c<TPeer>*  value) ;

static inline void setStaticF___9__9_0(::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SendQueue_1___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SendQueue_1___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SendQueue_1___c(SendQueue_1___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SendQueue_1___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SendQueue_1___c(SendQueue_1___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16918};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking::Client
// Dependencies System.Object
namespace Dissonance::Networking::Client {
// cpp template
template<typename TPeer>
// Is value type: false
// CS Name: Dissonance.Networking.Client.SendQueue`1<TPeer>
class CORDL_TYPE SendQueue_1 : public ::System::Object {
public:
// Declarations
using __c = ::Dissonance::Networking::Client::SendQueue_1___c<TPeer>;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

/// @brief Field _client, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__client, put=__cordl_internal_set__client)) ::Dissonance::Networking::Client::IClient_1<TPeer>*  _client;

/// @brief Field _listPool, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__listPool, put=__cordl_internal_set__listPool)) ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*>*  _listPool;

/// @brief Field _reliableP2PQueue, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__reliableP2PQueue, put=__cordl_internal_set__reliableP2PQueue)) ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*,::System::ArraySegment_1<uint8_t>>>*>*  _reliableP2PQueue;

/// @brief Field _sendBufferPool, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__sendBufferPool, put=__cordl_internal_set__sendBufferPool)) ::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>*  _sendBufferPool;

/// @brief Field _serverReliableQueue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__serverReliableQueue, put=__cordl_internal_set__serverReliableQueue)) ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*>*  _serverReliableQueue;

/// @brief Field _serverUnreliableQueue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__serverUnreliableQueue, put=__cordl_internal_set__serverUnreliableQueue)) ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*>*  _serverUnreliableQueue;

/// @brief Field _tmpRecycleQueue, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpRecycleQueue, put=__cordl_internal_set__tmpRecycleQueue)) ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*  _tmpRecycleQueue;

/// @brief Field _unreliableP2PQueue, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__unreliableP2PQueue, put=__cordl_internal_set__unreliableP2PQueue)) ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*,::System::ArraySegment_1<uint8_t>>>*>*  _unreliableP2PQueue;

/// @brief Convert operator to "::Dissonance::Networking::Client::ISendQueue_1<TPeer>"
constexpr operator  ::Dissonance::Networking::Client::ISendQueue_1<TPeer>*() noexcept;

/// @brief Method Drop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t Drop(::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<T>*>*  l) ;

/// @brief Method EnqeueUnreliable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void EnqeueUnreliable(::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method EnqueueP2P, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void EnqueueP2P(uint16_t  localId, ::System::Collections::Generic::ICollection_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  destinations, ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*,::System::ArraySegment_1<uint8_t>>>*  queue, ::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method EnqueueReliable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void EnqueueReliable(::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method EnqueueReliableP2P, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void EnqueueReliableP2P(uint16_t  localId, ::System::Collections::Generic::IList_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  destinations, ::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method EnqueueUnreliableP2P, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void EnqueueUnreliableP2P(uint16_t  localId, ::System::Collections::Generic::IList_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  destinations, ::System::ArraySegment_1<uint8_t>  packet) ;

/// @brief Method GetSendBuffer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::ArrayW<uint8_t> GetSendBuffer() ;

static inline ::Dissonance::Networking::Client::SendQueue_1<TPeer>* New_ctor(::Dissonance::Networking::Client::IClient_1<TPeer>*  client, ::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>*  bytePool) ;

/// @brief Method RecycleSendBuffer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void RecycleSendBuffer(::ArrayW<uint8_t>  buffer) ;

/// @brief Method Stop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::Dissonance::Networking::Client::IClient_1<TPeer>* const& __cordl_internal_get__client() const;

constexpr ::Dissonance::Networking::Client::IClient_1<TPeer>*& __cordl_internal_get__client() ;

constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*>* const& __cordl_internal_get__listPool() const;

constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*>*& __cordl_internal_get__listPool() ;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*,::System::ArraySegment_1<uint8_t>>>*>* const& __cordl_internal_get__reliableP2PQueue() const;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*,::System::ArraySegment_1<uint8_t>>>*>*& __cordl_internal_get__reliableP2PQueue() ;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>* const& __cordl_internal_get__sendBufferPool() const;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>*& __cordl_internal_get__sendBufferPool() ;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*>* const& __cordl_internal_get__serverReliableQueue() const;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*>*& __cordl_internal_get__serverReliableQueue() ;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*>* const& __cordl_internal_get__serverUnreliableQueue() const;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*>*& __cordl_internal_get__serverUnreliableQueue() ;

constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>* const& __cordl_internal_get__tmpRecycleQueue() const;

constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*& __cordl_internal_get__tmpRecycleQueue() ;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*,::System::ArraySegment_1<uint8_t>>>*>* const& __cordl_internal_get__unreliableP2PQueue() const;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*,::System::ArraySegment_1<uint8_t>>>*>*& __cordl_internal_get__unreliableP2PQueue() ;

constexpr void __cordl_internal_set__client(::Dissonance::Networking::Client::IClient_1<TPeer>*  value) ;

constexpr void __cordl_internal_set__listPool(::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*>*  value) ;

constexpr void __cordl_internal_set__reliableP2PQueue(::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*,::System::ArraySegment_1<uint8_t>>>*>*  value) ;

constexpr void __cordl_internal_set__sendBufferPool(::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>*  value) ;

constexpr void __cordl_internal_set__serverReliableQueue(::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*>*  value) ;

constexpr void __cordl_internal_set__serverUnreliableQueue(::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*>*  value) ;

constexpr void __cordl_internal_set__tmpRecycleQueue(::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*  value) ;

constexpr void __cordl_internal_set__unreliableP2PQueue(::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*,::System::ArraySegment_1<uint8_t>>>*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Networking::Client::IClient_1<TPeer>*  client, ::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>*  bytePool) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Convert to "::Dissonance::Networking::Client::ISendQueue_1<TPeer>"
constexpr ::Dissonance::Networking::Client::ISendQueue_1<TPeer>* i___Dissonance__Networking__Client__ISendQueue_1_TPeer_() noexcept;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SendQueue_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SendQueue_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SendQueue_1(SendQueue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SendQueue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SendQueue_1(SendQueue_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16919};

/// @brief Field _client, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Networking::Client::IClient_1<TPeer>*  ____client;

/// @brief Field _serverReliableQueue, offset: 0x18, size: 0x8, def value: None
 ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*>*  ____serverReliableQueue;

/// @brief Field _serverUnreliableQueue, offset: 0x20, size: 0x8, def value: None
 ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*>*  ____serverUnreliableQueue;

/// @brief Field _reliableP2PQueue, offset: 0x28, size: 0x8, def value: None
 ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*,::System::ArraySegment_1<uint8_t>>>*>*  ____reliableP2PQueue;

/// @brief Field _unreliableP2PQueue, offset: 0x30, size: 0x8, def value: None
 ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*,::System::ArraySegment_1<uint8_t>>>*>*  ____unreliableP2PQueue;

/// @brief Field _sendBufferPool, offset: 0x38, size: 0x8, def value: None
 ::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>*  ____sendBufferPool;

/// @brief Field _listPool, offset: 0x40, size: 0x8, def value: None
 ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*>*  ____listPool;

/// @brief Field _tmpRecycleQueue, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*  ____tmpRecycleQueue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking::Client

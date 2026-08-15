#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/Connection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Connection)
namespace Mirror::SimpleWeb {
class ArrayBuffer;
}
namespace System::Collections::Concurrent {
template<typename T>
class ConcurrentQueue_1;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Sockets {
class TcpClient;
}
namespace System::Threading {
class ManualResetEventSlim;
}
namespace System::Threading {
class Thread;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mirror::SimpleWeb {
class Connection;
}
// Write type traits
MARK_REF_T(::Mirror::SimpleWeb::Connection*);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::Connection*, "Mirror.SimpleWeb", "Connection");
// Dependencies System.Object
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.Connection
class CORDL_TYPE Connection : public ::System::Object {
public:
// Declarations
/// @brief Field client, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_client, put=__cordl_internal_set_client)) ::System::Net::Sockets::TcpClient*  client;

/// @brief Field connId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_connId, put=__cordl_internal_set_connId)) int32_t  connId;

/// @brief Field disposedLock, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_disposedLock, put=__cordl_internal_set_disposedLock)) ::System::Object*  disposedLock;

/// @brief Field hasDisposed, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasDisposed, put=__cordl_internal_set_hasDisposed)) bool  hasDisposed;

/// @brief Field onDispose, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_onDispose, put=__cordl_internal_set_onDispose)) ::System::Action_1<::Mirror::SimpleWeb::Connection*>*  onDispose;

/// @brief Field receiveThread, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_receiveThread, put=__cordl_internal_set_receiveThread)) ::System::Threading::Thread*  receiveThread;

/// @brief Field sendPending, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_sendPending, put=__cordl_internal_set_sendPending)) ::System::Threading::ManualResetEventSlim*  sendPending;

/// @brief Field sendQueue, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_sendQueue, put=__cordl_internal_set_sendQueue)) ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::ArrayBuffer*>*  sendQueue;

/// @brief Field sendThread, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_sendThread, put=__cordl_internal_set_sendThread)) ::System::Threading::Thread*  sendThread;

/// @brief Field stream, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_stream, put=__cordl_internal_set_stream)) ::System::IO::Stream*  stream;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x181ad0510, size 0x1f0, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Mirror::SimpleWeb::Connection* New_ctor(::System::Net::Sockets::TcpClient*  client, ::System::Action_1<::Mirror::SimpleWeb::Connection*>*  onDispose) ;

/// @brief Method ToString, addr 0x181ad0700, size 0xf0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Net::Sockets::TcpClient* const& __cordl_internal_get_client() const;

constexpr ::System::Net::Sockets::TcpClient*& __cordl_internal_get_client() ;

constexpr int32_t const& __cordl_internal_get_connId() const;

constexpr int32_t& __cordl_internal_get_connId() ;

constexpr ::System::Object* const& __cordl_internal_get_disposedLock() const;

constexpr ::System::Object*& __cordl_internal_get_disposedLock() ;

constexpr bool const& __cordl_internal_get_hasDisposed() const;

constexpr bool& __cordl_internal_get_hasDisposed() ;

constexpr ::System::Action_1<::Mirror::SimpleWeb::Connection*>* const& __cordl_internal_get_onDispose() const;

constexpr ::System::Action_1<::Mirror::SimpleWeb::Connection*>*& __cordl_internal_get_onDispose() ;

constexpr ::System::Threading::Thread* const& __cordl_internal_get_receiveThread() const;

constexpr ::System::Threading::Thread*& __cordl_internal_get_receiveThread() ;

constexpr ::System::Threading::ManualResetEventSlim* const& __cordl_internal_get_sendPending() const;

constexpr ::System::Threading::ManualResetEventSlim*& __cordl_internal_get_sendPending() ;

constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::ArrayBuffer*>* const& __cordl_internal_get_sendQueue() const;

constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::ArrayBuffer*>*& __cordl_internal_get_sendQueue() ;

constexpr ::System::Threading::Thread* const& __cordl_internal_get_sendThread() const;

constexpr ::System::Threading::Thread*& __cordl_internal_get_sendThread() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_stream() ;

constexpr void __cordl_internal_set_client(::System::Net::Sockets::TcpClient*  value) ;

constexpr void __cordl_internal_set_connId(int32_t  value) ;

constexpr void __cordl_internal_set_disposedLock(::System::Object*  value) ;

constexpr void __cordl_internal_set_hasDisposed(bool  value) ;

constexpr void __cordl_internal_set_onDispose(::System::Action_1<::Mirror::SimpleWeb::Connection*>*  value) ;

constexpr void __cordl_internal_set_receiveThread(::System::Threading::Thread*  value) ;

constexpr void __cordl_internal_set_sendPending(::System::Threading::ManualResetEventSlim*  value) ;

constexpr void __cordl_internal_set_sendQueue(::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::ArrayBuffer*>*  value) ;

constexpr void __cordl_internal_set_sendThread(::System::Threading::Thread*  value) ;

constexpr void __cordl_internal_set_stream(::System::IO::Stream*  value) ;

/// @brief Method .ctor, addr 0x181ad07f0, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::System::Net::Sockets::TcpClient*  client, ::System::Action_1<::Mirror::SimpleWeb::Connection*>*  onDispose) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Connection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Connection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Connection(Connection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Connection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Connection(Connection const& ) = delete;

/// @brief Field IdNotSet offset 0xffffffff size 0x4
static constexpr int32_t  IdNotSet{static_cast<int32_t>(0xffffffff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20522};

/// @brief Field disposedLock, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ___disposedLock;

/// @brief Field client, offset: 0x18, size: 0x8, def value: None
 ::System::Net::Sockets::TcpClient*  ___client;

/// @brief Field connId, offset: 0x20, size: 0x4, def value: None
 int32_t  ___connId;

/// @brief Field stream, offset: 0x28, size: 0x8, def value: None
 ::System::IO::Stream*  ___stream;

/// @brief Field receiveThread, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::Thread*  ___receiveThread;

/// @brief Field sendThread, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::Thread*  ___sendThread;

/// @brief Field sendPending, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::ManualResetEventSlim*  ___sendPending;

/// @brief Field sendQueue, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::ArrayBuffer*>*  ___sendQueue;

/// @brief Field onDispose, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<::Mirror::SimpleWeb::Connection*>*  ___onDispose;

/// @brief Field hasDisposed, offset: 0x58, size: 0x1, def value: None
 bool  ___hasDisposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SimpleWeb::Connection, ___disposedLock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::Connection, ___client) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::Connection, ___connId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::Connection, ___stream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::Connection, ___receiveThread) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::Connection, ___sendThread) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::Connection, ___sendPending) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::Connection, ___sendQueue) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::Connection, ___onDispose) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::Connection, ___hasDisposed) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Mirror::SimpleWeb::Connection) == 0x60, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb

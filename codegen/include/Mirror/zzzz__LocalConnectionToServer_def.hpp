#pragma once
// IWYU pragma private; include "Mirror/LocalConnectionToServer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkConnectionToServer_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalConnectionToServer)
namespace Mirror {
class LocalConnectionToClient;
}
namespace Mirror {
class NetworkWriterPooled;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Mirror {
class LocalConnectionToServer;
}
// Write type traits
MARK_REF_T(::Mirror::LocalConnectionToServer*);
DEFINE_IL2CPP_CLASS(::Mirror::LocalConnectionToServer*, "Mirror", "LocalConnectionToServer");
// Dependencies Mirror.NetworkConnectionToServer
namespace Mirror {
// Is value type: false
// CS Name: Mirror.LocalConnectionToServer
class CORDL_TYPE LocalConnectionToServer : public ::Mirror::NetworkConnectionToServer {
public:
// Declarations
 __declspec(property(get=get_address)) ::StringW  address;

/// @brief Field connectedEventPending, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_connectedEventPending, put=__cordl_internal_set_connectedEventPending)) bool  connectedEventPending;

/// @brief Field connectionToClient, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectionToClient, put=__cordl_internal_set_connectionToClient)) ::Mirror::LocalConnectionToClient*  connectionToClient;

/// @brief Field disconnectedEventPending, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_disconnectedEventPending, put=__cordl_internal_set_disconnectedEventPending)) bool  disconnectedEventPending;

/// @brief Field queue, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_queue, put=__cordl_internal_set_queue)) ::System::Collections::Generic::Queue_1<::Mirror::NetworkWriterPooled*>*  queue;

/// @brief Method Disconnect, addr 0x181536e40, size 0x240, virtual true, abstract: false, final false
inline void Disconnect() ;

/// @brief Method DisconnectInternal, addr 0x181536df0, size 0x50, virtual false, abstract: false, final false
inline void DisconnectInternal() ;

/// @brief Method IsAlive, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool IsAlive(float_t  timeout) ;

static inline ::Mirror::LocalConnectionToServer* New_ctor() ;

/// @brief Method QueueConnectedEvent, addr 0x181537080, size 0x10, virtual false, abstract: false, final false
inline void QueueConnectedEvent() ;

/// @brief Method QueueDisconnectedEvent, addr 0x181537090, size 0x10, virtual false, abstract: false, final false
inline void QueueDisconnectedEvent() ;

/// @brief Method Send, addr 0x1815370a0, size 0x1a0, virtual true, abstract: false, final false
inline void Send(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId) ;

/// @brief Method Update, addr 0x181537240, size 0x370, virtual true, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_connectedEventPending() const;

constexpr bool& __cordl_internal_get_connectedEventPending() ;

constexpr ::Mirror::LocalConnectionToClient* const& __cordl_internal_get_connectionToClient() const;

constexpr ::Mirror::LocalConnectionToClient*& __cordl_internal_get_connectionToClient() ;

constexpr bool const& __cordl_internal_get_disconnectedEventPending() const;

constexpr bool& __cordl_internal_get_disconnectedEventPending() ;

constexpr ::System::Collections::Generic::Queue_1<::Mirror::NetworkWriterPooled*>* const& __cordl_internal_get_queue() const;

constexpr ::System::Collections::Generic::Queue_1<::Mirror::NetworkWriterPooled*>*& __cordl_internal_get_queue() ;

constexpr void __cordl_internal_set_connectedEventPending(bool  value) ;

constexpr void __cordl_internal_set_connectionToClient(::Mirror::LocalConnectionToClient*  value) ;

constexpr void __cordl_internal_set_disconnectedEventPending(bool  value) ;

constexpr void __cordl_internal_set_queue(::System::Collections::Generic::Queue_1<::Mirror::NetworkWriterPooled*>*  value) ;

/// @brief Method .ctor, addr 0x1815375b0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_address, addr 0x181536de0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_address() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalConnectionToServer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalConnectionToServer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalConnectionToServer(LocalConnectionToServer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalConnectionToServer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalConnectionToServer(LocalConnectionToServer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18276};

/// @brief Field connectionToClient, offset: 0x48, size: 0x8, def value: None
 ::Mirror::LocalConnectionToClient*  ___connectionToClient;

/// @brief Field queue, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Mirror::NetworkWriterPooled*>*  ___queue;

/// @brief Field connectedEventPending, offset: 0x58, size: 0x1, def value: None
 bool  ___connectedEventPending;

/// @brief Field disconnectedEventPending, offset: 0x59, size: 0x1, def value: None
 bool  ___disconnectedEventPending;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::LocalConnectionToServer, ___connectionToClient) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mirror::LocalConnectionToServer, ___queue) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mirror::LocalConnectionToServer, ___connectedEventPending) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mirror::LocalConnectionToServer, ___disconnectedEventPending) == 0x59, "Offset mismatch!");

static_assert(sizeof(::Mirror::LocalConnectionToServer) == 0x60, "Size mismatch!");

} // namespace end def Mirror

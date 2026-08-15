#pragma once
// IWYU pragma private; include "Telepathy/ConnectionState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionState)
namespace System::Net::Sockets {
class TcpClient;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace Telepathy {
class MagnificentSendPipe;
}
// Forward declare root types
namespace Telepathy {
class ConnectionState;
}
// Write type traits
MARK_REF_T(::Telepathy::ConnectionState*);
DEFINE_IL2CPP_CLASS(::Telepathy::ConnectionState*, "Telepathy", "ConnectionState");
// Dependencies System.Object
namespace Telepathy {
// Is value type: false
// CS Name: Telepathy.ConnectionState
class CORDL_TYPE ConnectionState : public ::System::Object {
public:
// Declarations
/// @brief Field client, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_client, put=__cordl_internal_set_client)) ::System::Net::Sockets::TcpClient*  client;

/// @brief Field sendPending, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sendPending, put=__cordl_internal_set_sendPending)) ::System::Threading::ManualResetEvent*  sendPending;

/// @brief Field sendPipe, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sendPipe, put=__cordl_internal_set_sendPipe)) ::Telepathy::MagnificentSendPipe*  sendPipe;

static inline ::Telepathy::ConnectionState* New_ctor(::System::Net::Sockets::TcpClient*  client, int32_t  MaxMessageSize) ;

constexpr ::System::Net::Sockets::TcpClient* const& __cordl_internal_get_client() const;

constexpr ::System::Net::Sockets::TcpClient*& __cordl_internal_get_client() ;

constexpr ::System::Threading::ManualResetEvent* const& __cordl_internal_get_sendPending() const;

constexpr ::System::Threading::ManualResetEvent*& __cordl_internal_get_sendPending() ;

constexpr ::Telepathy::MagnificentSendPipe* const& __cordl_internal_get_sendPipe() const;

constexpr ::Telepathy::MagnificentSendPipe*& __cordl_internal_get_sendPipe() ;

constexpr void __cordl_internal_set_client(::System::Net::Sockets::TcpClient*  value) ;

constexpr void __cordl_internal_set_sendPending(::System::Threading::ManualResetEvent*  value) ;

constexpr void __cordl_internal_set_sendPipe(::Telepathy::MagnificentSendPipe*  value) ;

/// @brief Method .ctor, addr 0x181e584d0, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::System::Net::Sockets::TcpClient*  client, int32_t  MaxMessageSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConnectionState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConnectionState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConnectionState(ConnectionState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConnectionState(ConnectionState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21317};

/// @brief Field client, offset: 0x10, size: 0x8, def value: None
 ::System::Net::Sockets::TcpClient*  ___client;

/// @brief Field sendPipe, offset: 0x18, size: 0x8, def value: None
 ::Telepathy::MagnificentSendPipe*  ___sendPipe;

/// @brief Field sendPending, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::ManualResetEvent*  ___sendPending;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Telepathy::ConnectionState, ___client) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Telepathy::ConnectionState, ___sendPipe) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Telepathy::ConnectionState, ___sendPending) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Telepathy::ConnectionState) == 0x28, "Size mismatch!");

} // namespace end def Telepathy

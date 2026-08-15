#pragma once
// IWYU pragma private; include "Telepathy/ClientConnectionState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Telepathy/zzzz__ConnectionState_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClientConnectionState)
namespace System::Threading {
class Thread;
}
namespace Telepathy {
class MagnificentReceivePipe;
}
// Forward declare root types
namespace Telepathy {
class ClientConnectionState;
}
// Write type traits
MARK_REF_T(::Telepathy::ClientConnectionState*);
DEFINE_IL2CPP_CLASS(::Telepathy::ClientConnectionState*, "Telepathy", "ClientConnectionState");
// Dependencies Telepathy.ConnectionState
namespace Telepathy {
// Is value type: false
// CS Name: Telepathy.ClientConnectionState
class CORDL_TYPE ClientConnectionState : public ::Telepathy::ConnectionState {
public:
// Declarations
 __declspec(property(get=get_Connected)) bool  Connected;

/// @brief Field Connecting, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_Connecting, put=__cordl_internal_set_Connecting)) bool  Connecting;

/// @brief Field receivePipe, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_receivePipe, put=__cordl_internal_set_receivePipe)) ::Telepathy::MagnificentReceivePipe*  receivePipe;

/// @brief Field receiveThread, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_receiveThread, put=__cordl_internal_set_receiveThread)) ::System::Threading::Thread*  receiveThread;

/// @brief Method Dispose, addr 0x181e57820, size 0x60, virtual false, abstract: false, final false
inline void Dispose() ;

static inline ::Telepathy::ClientConnectionState* New_ctor(int32_t  MaxMessageSize) ;

constexpr bool const& __cordl_internal_get_Connecting() const;

constexpr bool& __cordl_internal_get_Connecting() ;

constexpr ::Telepathy::MagnificentReceivePipe* const& __cordl_internal_get_receivePipe() const;

constexpr ::Telepathy::MagnificentReceivePipe*& __cordl_internal_get_receivePipe() ;

constexpr ::System::Threading::Thread* const& __cordl_internal_get_receiveThread() const;

constexpr ::System::Threading::Thread*& __cordl_internal_get_receiveThread() ;

constexpr void __cordl_internal_set_Connecting(bool  value) ;

constexpr void __cordl_internal_set_receivePipe(::Telepathy::MagnificentReceivePipe*  value) ;

constexpr void __cordl_internal_set_receiveThread(::System::Threading::Thread*  value) ;

/// @brief Method .ctor, addr 0x181e57880, size 0x80, virtual false, abstract: false, final false
inline void _ctor(int32_t  MaxMessageSize) ;

/// @brief Method get_Connected, addr 0x181e57900, size 0x20, virtual false, abstract: false, final false
inline bool get_Connected() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClientConnectionState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClientConnectionState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClientConnectionState(ClientConnectionState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClientConnectionState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClientConnectionState(ClientConnectionState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21312};

/// @brief Field receiveThread, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::Thread*  ___receiveThread;

/// @brief Field Connecting, offset: 0x30, size: 0x1, def value: None
 bool  ___Connecting;

/// @brief Field receivePipe, offset: 0x38, size: 0x8, def value: None
 ::Telepathy::MagnificentReceivePipe*  ___receivePipe;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Telepathy::ClientConnectionState, ___receiveThread) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Telepathy::ClientConnectionState, ___Connecting) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Telepathy::ClientConnectionState, ___receivePipe) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Telepathy::ClientConnectionState) == 0x40, "Size mismatch!");

} // namespace end def Telepathy

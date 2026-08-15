#pragma once
// IWYU pragma private; include "Telepathy/ThreadFunctions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadFunctions)
namespace System::Net::Sockets {
class NetworkStream;
}
namespace System::Net::Sockets {
class TcpClient;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace Telepathy {
class MagnificentReceivePipe;
}
namespace Telepathy {
class MagnificentSendPipe;
}
// Forward declare root types
namespace Telepathy {
class ThreadFunctions;
}
// Write type traits
MARK_REF_T(::Telepathy::ThreadFunctions*);
DEFINE_IL2CPP_CLASS(::Telepathy::ThreadFunctions*, "Telepathy", "ThreadFunctions");
// Dependencies System.Object
namespace Telepathy {
// Is value type: false
// CS Name: Telepathy.ThreadFunctions
class CORDL_TYPE ThreadFunctions : public ::System::Object {
public:
// Declarations
/// @brief Method ReadMessageBlocking, addr 0x181e5a840, size 0x200, virtual false, abstract: false, final false
static inline bool ReadMessageBlocking(::System::Net::Sockets::NetworkStream*  stream, int32_t  MaxMessageSize, ::ArrayW<uint8_t>  headerBuffer, ::ArrayW<uint8_t>  payloadBuffer, ::by_ref<int32_t>  size) ;

/// @brief Method ReceiveLoop, addr 0x181e5aa40, size 0x3d0, virtual false, abstract: false, final false
static inline void ReceiveLoop(int32_t  connectionId, ::System::Net::Sockets::TcpClient*  client, int32_t  MaxMessageSize, ::Telepathy::MagnificentReceivePipe*  receivePipe, int32_t  QueueLimit) ;

/// @brief Method SendLoop, addr 0x181e5ae10, size 0x270, virtual false, abstract: false, final false
static inline void SendLoop(int32_t  connectionId, ::System::Net::Sockets::TcpClient*  client, ::Telepathy::MagnificentSendPipe*  sendPipe, ::System::Threading::ManualResetEvent*  sendPending) ;

/// @brief Method SendMessagesBlocking, addr 0x181e5b080, size 0xd0, virtual false, abstract: false, final false
static inline bool SendMessagesBlocking(::System::Net::Sockets::NetworkStream*  stream, ::ArrayW<uint8_t>  payload, int32_t  packetSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThreadFunctions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThreadFunctions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadFunctions(ThreadFunctions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadFunctions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadFunctions(ThreadFunctions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21330};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Telepathy::ThreadFunctions) == 0x10, "Size mismatch!");

} // namespace end def Telepathy

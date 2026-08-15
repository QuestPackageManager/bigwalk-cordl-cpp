#pragma once
// IWYU pragma private; include "kcp2k/Extensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Extensions)
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net {
class EndPoint;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace kcp2k {
class Extensions;
}
// Write type traits
MARK_REF_T(::kcp2k::Extensions*);
DEFINE_IL2CPP_CLASS(::kcp2k::Extensions*, "kcp2k", "Extensions");
// Dependencies System.Object
namespace kcp2k {
// Is value type: false
// CS Name: kcp2k.Extensions
class CORDL_TYPE Extensions : public ::System::Object {
public:
// Declarations
/// @brief Method ReceiveFromNonBlocking, addr 0x18144d2a0, size 0x110, virtual false, abstract: false, final false
static inline bool ReceiveFromNonBlocking(::System::Net::Sockets::Socket*  socket, ::ArrayW<uint8_t>  recvBuffer, ::by_ref<::System::ArraySegment_1<uint8_t>>  data, ::by_ref<::System::Net::EndPoint*>  remoteEP) ;

/// @brief Method ReceiveNonBlocking, addr 0x18144d3b0, size 0x100, virtual false, abstract: false, final false
static inline bool ReceiveNonBlocking(::System::Net::Sockets::Socket*  socket, ::ArrayW<uint8_t>  recvBuffer, ::by_ref<::System::ArraySegment_1<uint8_t>>  data) ;

/// @brief Method SendNonBlocking, addr 0x18144d4b0, size 0xb0, virtual false, abstract: false, final false
static inline bool SendNonBlocking(::System::Net::Sockets::Socket*  socket, ::System::ArraySegment_1<uint8_t>  data) ;

/// @brief Method SendToNonBlocking, addr 0x18144d560, size 0xc0, virtual false, abstract: false, final false
static inline bool SendToNonBlocking(::System::Net::Sockets::Socket*  socket, ::System::ArraySegment_1<uint8_t>  data, ::System::Net::EndPoint*  remoteEP) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Extensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Extensions(Extensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Extensions(Extensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20867};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::kcp2k::Extensions) == 0x10, "Size mismatch!");

} // namespace end def kcp2k

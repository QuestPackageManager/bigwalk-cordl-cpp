#pragma once
// IWYU pragma private; include "kcp2k/KcpServerConnection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(KcpServerConnection)
namespace System::Net {
class EndPoint;
}
namespace kcp2k {
class KcpPeer;
}
// Forward declare root types
namespace kcp2k {
struct KcpServerConnection;
}
// Write type traits
MARK_VAL_T(::kcp2k::KcpServerConnection);
DEFINE_IL2CPP_CLASS(::kcp2k::KcpServerConnection, "kcp2k", "KcpServerConnection");
// Dependencies 
namespace kcp2k {
// Is value type: true
// CS Name: kcp2k.KcpServerConnection
struct CORDL_TYPE KcpServerConnection {
public:
// Declarations
/// @brief Method .ctor, addr 0x18144fc10, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::System::Net::EndPoint*  remoteEndPoint) ;

// Ctor Parameters []
// @brief default ctor
constexpr KcpServerConnection() ;

// Ctor Parameters [CppParam { name: "peer", ty: "::kcp2k::KcpPeer*", modifiers: "", def_value: None }, CppParam { name: "remoteEndPoint", ty: "::System::Net::EndPoint*", modifiers: "", def_value: None }]
constexpr KcpServerConnection(::kcp2k::KcpPeer*  peer, ::System::Net::EndPoint*  remoteEndPoint) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20876};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field peer, offset: 0x0, size: 0x8, def value: None
 ::kcp2k::KcpPeer*  peer;

/// @brief Field remoteEndPoint, offset: 0x8, size: 0x8, def value: None
 ::System::Net::EndPoint*  remoteEndPoint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::kcp2k::KcpServerConnection, peer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpServerConnection, remoteEndPoint) == 0x8, "Offset mismatch!");

static_assert(sizeof(::kcp2k::KcpServerConnection) == 0x10, "Size mismatch!");

} // namespace end def kcp2k

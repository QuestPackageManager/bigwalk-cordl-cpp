#pragma once
// IWYU pragma private; include "Mirror/NetworkConnectionToServer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkConnection_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkConnectionToServer)
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Mirror {
class NetworkConnectionToServer;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkConnectionToServer*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkConnectionToServer*, "Mirror", "NetworkConnectionToServer");
// Dependencies Mirror.NetworkConnection
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkConnectionToServer
class CORDL_TYPE NetworkConnectionToServer : public ::Mirror::NetworkConnection {
public:
// Declarations
/// @brief Method Disconnect, addr 0x181542590, size 0x70, virtual true, abstract: false, final false
inline void Disconnect() ;

static inline ::Mirror::NetworkConnectionToServer* New_ctor() ;

/// @brief Method SendToTransport, addr 0x181542600, size 0x50, virtual true, abstract: false, final false
inline void SendToTransport(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId) ;

/// @brief Method .ctor, addr 0x181542650, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkConnectionToServer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkConnectionToServer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkConnectionToServer(NetworkConnectionToServer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkConnectionToServer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkConnectionToServer(NetworkConnectionToServer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18312};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::NetworkConnectionToServer) == 0x48, "Size mismatch!");

} // namespace end def Mirror

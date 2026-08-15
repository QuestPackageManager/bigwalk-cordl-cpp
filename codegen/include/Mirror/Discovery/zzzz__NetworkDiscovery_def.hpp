#pragma once
// IWYU pragma private; include "Mirror/Discovery/NetworkDiscovery.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/Discovery/zzzz__NetworkDiscoveryBase_2_def.hpp"
#include "Mirror/Discovery/zzzz__ServerRequest_def.hpp"
#include "Mirror/Discovery/zzzz__ServerResponse_def.hpp"
CORDL_MODULE_EXPORT(NetworkDiscovery)
namespace Mirror::Discovery {
struct ServerRequest;
}
namespace Mirror::Discovery {
struct ServerResponse;
}
namespace System::Net {
class IPEndPoint;
}
// Forward declare root types
namespace Mirror::Discovery {
class NetworkDiscovery;
}
// Write type traits
MARK_REF_T(::Mirror::Discovery::NetworkDiscovery*);
DEFINE_IL2CPP_CLASS(::Mirror::Discovery::NetworkDiscovery*, "Mirror.Discovery", "NetworkDiscovery");
// Dependencies Mirror.Discovery.NetworkDiscoveryBase`2<Request, Response>, Mirror.Discovery.ServerRequest, Mirror.Discovery.ServerResponse
namespace Mirror::Discovery {
// Is value type: false
// CS Name: Mirror.Discovery.NetworkDiscovery
class CORDL_TYPE NetworkDiscovery : public ::Mirror::Discovery::NetworkDiscoveryBase_2<::Mirror::Discovery::ServerRequest,::Mirror::Discovery::ServerResponse> {
public:
// Declarations
/// @brief Method GetRequest, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline ::Mirror::Discovery::ServerRequest GetRequest() ;

static inline ::Mirror::Discovery::NetworkDiscovery* New_ctor() ;

/// @brief Method ProcessRequest, addr 0x181533df0, size 0xb0, virtual true, abstract: false, final false
inline ::Mirror::Discovery::ServerResponse ProcessRequest(::Mirror::Discovery::ServerRequest  request, ::System::Net::IPEndPoint*  endpoint) ;

/// @brief Method ProcessResponse, addr 0x181533ea0, size 0xf0, virtual true, abstract: false, final false
inline void ProcessResponse(::Mirror::Discovery::ServerResponse  response, ::System::Net::IPEndPoint*  endpoint) ;

/// @brief Method .ctor, addr 0x181533f90, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkDiscovery() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkDiscovery", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkDiscovery(NetworkDiscovery && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkDiscovery", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkDiscovery(NetworkDiscovery const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19257};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::Discovery::NetworkDiscovery) == 0x68, "Size mismatch!");

} // namespace end def Mirror::Discovery

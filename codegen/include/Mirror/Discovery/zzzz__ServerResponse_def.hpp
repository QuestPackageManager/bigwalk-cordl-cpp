#pragma once
// IWYU pragma private; include "Mirror/Discovery/ServerResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ServerResponse)
namespace Mirror {
class NetworkMessage;
}
namespace System::Net {
class IPEndPoint;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Mirror::Discovery {
struct ServerResponse;
}
// Write type traits
MARK_VAL_T(::Mirror::Discovery::ServerResponse);
DEFINE_IL2CPP_CLASS(::Mirror::Discovery::ServerResponse, "Mirror.Discovery", "ServerResponse");
// Dependencies 
namespace Mirror::Discovery {
// Is value type: true
// CS Name: Mirror.Discovery.ServerResponse
struct CORDL_TYPE ServerResponse {
public:
// Declarations
 __declspec(property(get=get_EndPoint, put=set_EndPoint)) ::System::Net::IPEndPoint*  EndPoint;

/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr operator  ::Mirror::NetworkMessage*() ;

/// @brief Method get_EndPoint, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Net::IPEndPoint* get_EndPoint() ;

/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* i___Mirror__NetworkMessage() ;

/// @brief Method set_EndPoint, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_EndPoint(::System::Net::IPEndPoint*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ServerResponse() ;

// Ctor Parameters [CppParam { name: "_EndPoint_k__BackingField", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: None }, CppParam { name: "uri", ty: "::System::Uri*", modifiers: "", def_value: None }, CppParam { name: "serverId", ty: "int64_t", modifiers: "", def_value: None }]
constexpr ServerResponse(::System::Net::IPEndPoint*  _EndPoint_k__BackingField, ::System::Uri*  uri, int64_t  serverId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19265};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <EndPoint>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Net::IPEndPoint*  _EndPoint_k__BackingField;

/// @brief Field uri, offset: 0x8, size: 0x8, def value: None
 ::System::Uri*  uri;

/// @brief Field serverId, offset: 0x10, size: 0x8, def value: None
 int64_t  serverId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Discovery::ServerResponse, _EndPoint_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::Discovery::ServerResponse, uri) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mirror::Discovery::ServerResponse, serverId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Mirror::Discovery::ServerResponse) == 0x18, "Size mismatch!");

} // namespace end def Mirror::Discovery

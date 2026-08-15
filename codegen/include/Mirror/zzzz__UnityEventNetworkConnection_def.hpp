#pragma once
// IWYU pragma private; include "Mirror/UnityEventNetworkConnection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(UnityEventNetworkConnection)
namespace Mirror {
class NetworkConnectionToClient;
}
// Forward declare root types
namespace Mirror {
class UnityEventNetworkConnection;
}
// Write type traits
MARK_REF_T(::Mirror::UnityEventNetworkConnection*);
DEFINE_IL2CPP_CLASS(::Mirror::UnityEventNetworkConnection*, "Mirror", "UnityEventNetworkConnection");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Mirror {
// Is value type: false
// CS Name: Mirror.UnityEventNetworkConnection
class CORDL_TYPE UnityEventNetworkConnection : public ::UnityEngine::Events::UnityEvent_1<::Mirror::NetworkConnectionToClient*> {
public:
// Declarations
static inline ::Mirror::UnityEventNetworkConnection* New_ctor() ;

/// @brief Method .ctor, addr 0x180da3080, size 0x8190, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityEventNetworkConnection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityEventNetworkConnection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityEventNetworkConnection(UnityEventNetworkConnection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityEventNetworkConnection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityEventNetworkConnection(UnityEventNetworkConnection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18295};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::UnityEventNetworkConnection) == 0x30, "Size mismatch!");

} // namespace end def Mirror

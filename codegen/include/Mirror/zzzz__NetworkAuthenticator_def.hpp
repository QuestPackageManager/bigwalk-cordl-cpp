#pragma once
// IWYU pragma private; include "Mirror/NetworkAuthenticator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NetworkAuthenticator)
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class UnityEventNetworkConnection;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Mirror {
class NetworkAuthenticator;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkAuthenticator*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkAuthenticator*, "Mirror", "NetworkAuthenticator");
// Dependencies UnityEngine.MonoBehaviour
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkAuthenticator
class CORDL_TYPE NetworkAuthenticator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnClientAuthenticated, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClientAuthenticated, put=__cordl_internal_set_OnClientAuthenticated)) ::UnityEngine::Events::UnityEvent*  OnClientAuthenticated;

/// @brief Field OnServerAuthenticated, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnServerAuthenticated, put=__cordl_internal_set_OnServerAuthenticated)) ::Mirror::UnityEventNetworkConnection*  OnServerAuthenticated;

/// @brief Method ClientAccept, addr 0x181537690, size 0x20, virtual false, abstract: false, final false
inline void ClientAccept() ;

/// @brief Method ClientReject, addr 0x1815376b0, size 0x90, virtual false, abstract: false, final false
inline void ClientReject() ;

static inline ::Mirror::NetworkAuthenticator* New_ctor() ;

/// @brief Method OnClientAuthenticate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnClientAuthenticate() ;

/// @brief Method OnServerAuthenticate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnServerAuthenticate(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnStartClient, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnStartClient() ;

/// @brief Method OnStartServer, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method OnStopClient, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnStopClient() ;

/// @brief Method OnStopServer, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnStopServer() ;

/// @brief Method Reset, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ServerAccept, addr 0x181517840, size 0x30, virtual false, abstract: false, final false
inline void ServerAccept(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method ServerReject, addr 0x181537740, size 0x30, virtual false, abstract: false, final false
inline void ServerReject(::Mirror::NetworkConnectionToClient*  conn) ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnClientAuthenticated() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnClientAuthenticated() ;

constexpr ::Mirror::UnityEventNetworkConnection* const& __cordl_internal_get_OnServerAuthenticated() const;

constexpr ::Mirror::UnityEventNetworkConnection*& __cordl_internal_get_OnServerAuthenticated() ;

constexpr void __cordl_internal_set_OnClientAuthenticated(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnServerAuthenticated(::Mirror::UnityEventNetworkConnection*  value) ;

/// @brief Method .ctor, addr 0x181537770, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkAuthenticator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkAuthenticator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkAuthenticator(NetworkAuthenticator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkAuthenticator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkAuthenticator(NetworkAuthenticator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18296};

/// @brief Field OnServerAuthenticated, offset: 0x20, size: 0x8, def value: None
 ::Mirror::UnityEventNetworkConnection*  ___OnServerAuthenticated;

/// @brief Field OnClientAuthenticated, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnClientAuthenticated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkAuthenticator, ___OnServerAuthenticated) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkAuthenticator, ___OnClientAuthenticated) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkAuthenticator) == 0x30, "Size mismatch!");

} // namespace end def Mirror

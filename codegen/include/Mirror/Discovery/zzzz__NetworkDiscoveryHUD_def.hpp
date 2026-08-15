#pragma once
// IWYU pragma private; include "Mirror/Discovery/NetworkDiscoveryHUD.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkDiscoveryHUD)
namespace Mirror::Discovery {
class NetworkDiscovery;
}
namespace Mirror::Discovery {
struct ServerResponse;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Mirror::Discovery {
class NetworkDiscoveryHUD;
}
// Write type traits
MARK_REF_T(::Mirror::Discovery::NetworkDiscoveryHUD*);
DEFINE_IL2CPP_CLASS(::Mirror::Discovery::NetworkDiscoveryHUD*, "Mirror.Discovery", "NetworkDiscoveryHUD");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace Mirror::Discovery {
// Is value type: false
// CS Name: Mirror.Discovery.NetworkDiscoveryHUD
class CORDL_TYPE NetworkDiscoveryHUD : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field discoveredServers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_discoveredServers, put=__cordl_internal_set_discoveredServers)) ::System::Collections::Generic::Dictionary_2<int64_t,::Mirror::Discovery::ServerResponse>*  discoveredServers;

/// @brief Field networkDiscovery, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkDiscovery, put=__cordl_internal_set_networkDiscovery)) ::UnityW<::Mirror::Discovery::NetworkDiscovery>  networkDiscovery;

/// @brief Field scrollViewPos, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_scrollViewPos, put=__cordl_internal_set_scrollViewPos)) ::UnityEngine::Vector2  scrollViewPos;

/// @brief Method Connect, addr 0x1815334a0, size 0x60, virtual false, abstract: false, final false
inline void Connect(::Mirror::Discovery::ServerResponse  info) ;

/// @brief Method DrawGUI, addr 0x181533500, size 0x5a0, virtual false, abstract: false, final false
inline void DrawGUI() ;

static inline ::Mirror::Discovery::NetworkDiscoveryHUD* New_ctor() ;

/// @brief Method OnDiscoveredServer, addr 0x181533aa0, size 0x40, virtual false, abstract: false, final false
inline void OnDiscoveredServer(::Mirror::Discovery::ServerResponse  info) ;

/// @brief Method OnGUI, addr 0x181533ae0, size 0xe0, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method StopButtons, addr 0x181533bc0, size 0x1d0, virtual false, abstract: false, final false
inline void StopButtons() ;

constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::Mirror::Discovery::ServerResponse>* const& __cordl_internal_get_discoveredServers() const;

constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::Mirror::Discovery::ServerResponse>*& __cordl_internal_get_discoveredServers() ;

constexpr ::UnityW<::Mirror::Discovery::NetworkDiscovery> const& __cordl_internal_get_networkDiscovery() const;

constexpr ::UnityW<::Mirror::Discovery::NetworkDiscovery>& __cordl_internal_get_networkDiscovery() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_scrollViewPos() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_scrollViewPos() ;

constexpr void __cordl_internal_set_discoveredServers(::System::Collections::Generic::Dictionary_2<int64_t,::Mirror::Discovery::ServerResponse>*  value) ;

constexpr void __cordl_internal_set_networkDiscovery(::UnityW<::Mirror::Discovery::NetworkDiscovery>  value) ;

constexpr void __cordl_internal_set_scrollViewPos(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x181533d90, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkDiscoveryHUD() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkDiscoveryHUD", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkDiscoveryHUD(NetworkDiscoveryHUD && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkDiscoveryHUD", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkDiscoveryHUD(NetworkDiscoveryHUD const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19263};

/// @brief Field discoveredServers, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int64_t,::Mirror::Discovery::ServerResponse>*  ___discoveredServers;

/// @brief Field scrollViewPos, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___scrollViewPos;

/// @brief Field networkDiscovery, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Mirror::Discovery::NetworkDiscovery>  ___networkDiscovery;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Discovery::NetworkDiscoveryHUD, ___discoveredServers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Discovery::NetworkDiscoveryHUD, ___scrollViewPos) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::Discovery::NetworkDiscoveryHUD, ___networkDiscovery) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Mirror::Discovery::NetworkDiscoveryHUD) == 0x38, "Size mismatch!");

} // namespace end def Mirror::Discovery

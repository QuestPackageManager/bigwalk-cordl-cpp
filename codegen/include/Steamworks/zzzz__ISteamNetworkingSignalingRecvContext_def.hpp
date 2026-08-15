#pragma once
// IWYU pragma private; include "Steamworks/ISteamNetworkingSignalingRecvContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ISteamNetworkingSignalingRecvContext)
namespace Steamworks {
struct HSteamNetConnection;
}
namespace Steamworks {
struct SteamNetworkingIdentity;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Steamworks {
struct ISteamNetworkingSignalingRecvContext;
}
// Write type traits
MARK_VAL_T(::Steamworks::ISteamNetworkingSignalingRecvContext);
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamNetworkingSignalingRecvContext, "Steamworks", "ISteamNetworkingSignalingRecvContext");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ISteamNetworkingSignalingRecvContext
struct CORDL_TYPE ISteamNetworkingSignalingRecvContext {
public:
// Declarations
/// @brief Method OnConnectRequest, addr 0x1805aa470, size 0x30, virtual false, abstract: false, final false
inline ::System::IntPtr OnConnectRequest(::Steamworks::HSteamNetConnection  hConn, ::by_ref<::Steamworks::SteamNetworkingIdentity>  identityPeer, int32_t  nLocalVirtualPort) ;

/// @brief Method SendRejectionSignal, addr 0x1805aa4a0, size 0x30, virtual false, abstract: false, final false
inline void SendRejectionSignal(::by_ref<::Steamworks::SteamNetworkingIdentity>  identityPeer, ::System::IntPtr  pMsg, int32_t  cbMsg) ;

// Ctor Parameters []
// @brief default ctor
constexpr ISteamNetworkingSignalingRecvContext() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16432};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::ISteamNetworkingSignalingRecvContext) == 0x1, "Size mismatch!");

} // namespace end def Steamworks

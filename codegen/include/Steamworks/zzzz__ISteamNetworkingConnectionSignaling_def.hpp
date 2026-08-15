#pragma once
// IWYU pragma private; include "Steamworks/ISteamNetworkingConnectionSignaling.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ISteamNetworkingConnectionSignaling)
namespace Steamworks {
struct HSteamNetConnection;
}
namespace Steamworks {
struct SteamNetConnectionInfo_t;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Steamworks {
struct ISteamNetworkingConnectionSignaling;
}
// Write type traits
MARK_VAL_T(::Steamworks::ISteamNetworkingConnectionSignaling);
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamNetworkingConnectionSignaling, "Steamworks", "ISteamNetworkingConnectionSignaling");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ISteamNetworkingConnectionSignaling
struct CORDL_TYPE ISteamNetworkingConnectionSignaling {
public:
// Declarations
/// @brief Method Release, addr 0x1805aa420, size 0x20, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method SendSignal, addr 0x1805aa440, size 0x30, virtual false, abstract: false, final false
inline bool SendSignal(::Steamworks::HSteamNetConnection  hConn, ::by_ref<::Steamworks::SteamNetConnectionInfo_t>  info, ::System::IntPtr  pMsg, int32_t  cbMsg) ;

// Ctor Parameters []
// @brief default ctor
constexpr ISteamNetworkingConnectionSignaling() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16431};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::ISteamNetworkingConnectionSignaling) == 0x1, "Size mismatch!");

} // namespace end def Steamworks

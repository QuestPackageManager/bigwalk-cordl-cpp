#pragma once
// IWYU pragma private; include "Steamworks/SteamNetworkPingLocation_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamNetworkPingLocation_t)
// Forward declare root types
namespace Steamworks {
struct SteamNetworkPingLocation_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamNetworkPingLocation_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamNetworkPingLocation_t, "Steamworks", "SteamNetworkPingLocation_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamNetworkPingLocation_t
#pragma pack(push, 8)
struct CORDL_TYPE SteamNetworkPingLocation_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SteamNetworkPingLocation_t() ;

// Ctor Parameters [CppParam { name: "m_data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr SteamNetworkPingLocation_t(::ArrayW<uint8_t>  m_data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16359};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_data, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamNetworkPingLocation_t, m_data) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamNetworkPingLocation_t) == 0x8, "Size mismatch!");

} // namespace end def Steamworks

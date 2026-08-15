#pragma once
// IWYU pragma private; include "Steamworks/SteamPartyBeaconLocation_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__ESteamPartyBeaconLocationType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamPartyBeaconLocation_t)
// Forward declare root types
namespace Steamworks {
struct SteamPartyBeaconLocation_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamPartyBeaconLocation_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamPartyBeaconLocation_t, "Steamworks", "SteamPartyBeaconLocation_t");
// Dependencies Steamworks.ESteamPartyBeaconLocationType
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamPartyBeaconLocation_t
#pragma pack(push, 8)
struct CORDL_TYPE SteamPartyBeaconLocation_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SteamPartyBeaconLocation_t() ;

// Ctor Parameters [CppParam { name: "m_eType", ty: "::Steamworks::ESteamPartyBeaconLocationType", modifiers: "", def_value: None }, CppParam { name: "m_ulLocationID", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr SteamPartyBeaconLocation_t(::Steamworks::ESteamPartyBeaconLocationType  m_eType, uint64_t  m_ulLocationID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16349};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_eType, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::ESteamPartyBeaconLocationType  m_eType;

/// @brief Field m_ulLocationID, offset: 0x8, size: 0x8, def value: None
 uint64_t  m_ulLocationID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamPartyBeaconLocation_t, m_eType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamPartyBeaconLocation_t, m_ulLocationID) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamPartyBeaconLocation_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks

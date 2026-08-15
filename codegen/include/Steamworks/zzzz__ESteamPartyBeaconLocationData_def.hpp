#pragma once
// IWYU pragma private; include "Steamworks/ESteamPartyBeaconLocationData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ESteamPartyBeaconLocationData)
// Forward declare root types
namespace Steamworks {
struct ESteamPartyBeaconLocationData;
}
// Write type traits
MARK_VAL_T(::Steamworks::ESteamPartyBeaconLocationData);
DEFINE_IL2CPP_CLASS(::Steamworks::ESteamPartyBeaconLocationData, "Steamworks", "ESteamPartyBeaconLocationData");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ESteamPartyBeaconLocationData
struct CORDL_TYPE ESteamPartyBeaconLocationData {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ESteamPartyBeaconLocationData_Unwrapped
enum struct __ESteamPartyBeaconLocationData_Unwrapped : int32_t {
__E_k_ESteamPartyBeaconLocationDataInvalid = static_cast<int32_t>(0x0),
__E_k_ESteamPartyBeaconLocationDataName = static_cast<int32_t>(0x1),
__E_k_ESteamPartyBeaconLocationDataIconURLSmall = static_cast<int32_t>(0x2),
__E_k_ESteamPartyBeaconLocationDataIconURLMedium = static_cast<int32_t>(0x3),
__E_k_ESteamPartyBeaconLocationDataIconURLLarge = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ESteamPartyBeaconLocationData_Unwrapped () const noexcept {
return static_cast<__ESteamPartyBeaconLocationData_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ESteamPartyBeaconLocationData() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ESteamPartyBeaconLocationData(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16269};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ESteamPartyBeaconLocationDataIconURLLarge value: I32(4)
static ::Steamworks::ESteamPartyBeaconLocationData const k_ESteamPartyBeaconLocationDataIconURLLarge;

/// @brief Field k_ESteamPartyBeaconLocationDataIconURLMedium value: I32(3)
static ::Steamworks::ESteamPartyBeaconLocationData const k_ESteamPartyBeaconLocationDataIconURLMedium;

/// @brief Field k_ESteamPartyBeaconLocationDataIconURLSmall value: I32(2)
static ::Steamworks::ESteamPartyBeaconLocationData const k_ESteamPartyBeaconLocationDataIconURLSmall;

/// @brief Field k_ESteamPartyBeaconLocationDataInvalid value: I32(0)
static ::Steamworks::ESteamPartyBeaconLocationData const k_ESteamPartyBeaconLocationDataInvalid;

/// @brief Field k_ESteamPartyBeaconLocationDataName value: I32(1)
static ::Steamworks::ESteamPartyBeaconLocationData const k_ESteamPartyBeaconLocationDataName;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ESteamPartyBeaconLocationData, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ESteamPartyBeaconLocationData) == 0x4, "Size mismatch!");

} // namespace end def Steamworks

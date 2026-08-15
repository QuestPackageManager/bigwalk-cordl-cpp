#pragma once
// IWYU pragma private; include "Steamworks/ESteamPartyBeaconLocationType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ESteamPartyBeaconLocationType)
// Forward declare root types
namespace Steamworks {
struct ESteamPartyBeaconLocationType;
}
// Write type traits
MARK_VAL_T(::Steamworks::ESteamPartyBeaconLocationType);
DEFINE_IL2CPP_CLASS(::Steamworks::ESteamPartyBeaconLocationType, "Steamworks", "ESteamPartyBeaconLocationType");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ESteamPartyBeaconLocationType
struct CORDL_TYPE ESteamPartyBeaconLocationType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ESteamPartyBeaconLocationType_Unwrapped
enum struct __ESteamPartyBeaconLocationType_Unwrapped : int32_t {
__E_k_ESteamPartyBeaconLocationType_Invalid = static_cast<int32_t>(0x0),
__E_k_ESteamPartyBeaconLocationType_ChatGroup = static_cast<int32_t>(0x1),
__E_k_ESteamPartyBeaconLocationType_Max = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ESteamPartyBeaconLocationType_Unwrapped () const noexcept {
return static_cast<__ESteamPartyBeaconLocationType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ESteamPartyBeaconLocationType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ESteamPartyBeaconLocationType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16268};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ESteamPartyBeaconLocationType_ChatGroup value: I32(1)
static ::Steamworks::ESteamPartyBeaconLocationType const k_ESteamPartyBeaconLocationType_ChatGroup;

/// @brief Field k_ESteamPartyBeaconLocationType_Invalid value: I32(0)
static ::Steamworks::ESteamPartyBeaconLocationType const k_ESteamPartyBeaconLocationType_Invalid;

/// @brief Field k_ESteamPartyBeaconLocationType_Max value: I32(2)
static ::Steamworks::ESteamPartyBeaconLocationType const k_ESteamPartyBeaconLocationType_Max;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ESteamPartyBeaconLocationType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ESteamPartyBeaconLocationType) == 0x4, "Size mismatch!");

} // namespace end def Steamworks

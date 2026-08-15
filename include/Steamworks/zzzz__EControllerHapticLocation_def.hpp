#pragma once
// IWYU pragma private; include "Steamworks/EControllerHapticLocation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EControllerHapticLocation)
// Forward declare root types
namespace Steamworks {
struct EControllerHapticLocation;
}
// Write type traits
MARK_VAL_T(::Steamworks::EControllerHapticLocation);
DEFINE_IL2CPP_CLASS(::Steamworks::EControllerHapticLocation, "Steamworks", "EControllerHapticLocation");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EControllerHapticLocation
struct CORDL_TYPE EControllerHapticLocation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EControllerHapticLocation_Unwrapped
enum struct __EControllerHapticLocation_Unwrapped : int32_t {
__E_k_EControllerHapticLocation_Left = static_cast<int32_t>(0x1),
__E_k_EControllerHapticLocation_Right = static_cast<int32_t>(0x2),
__E_k_EControllerHapticLocation_Both = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EControllerHapticLocation_Unwrapped () const noexcept {
return static_cast<__EControllerHapticLocation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EControllerHapticLocation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EControllerHapticLocation(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16255};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EControllerHapticLocation_Both value: I32(3)
static ::Steamworks::EControllerHapticLocation const k_EControllerHapticLocation_Both;

/// @brief Field k_EControllerHapticLocation_Left value: I32(1)
static ::Steamworks::EControllerHapticLocation const k_EControllerHapticLocation_Left;

/// @brief Field k_EControllerHapticLocation_Right value: I32(2)
static ::Steamworks::EControllerHapticLocation const k_EControllerHapticLocation_Right;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EControllerHapticLocation, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EControllerHapticLocation) == 0x4, "Size mismatch!");

} // namespace end def Steamworks

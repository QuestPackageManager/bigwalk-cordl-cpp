#pragma once
// IWYU pragma private; include "Steamworks/EControllerHapticType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EControllerHapticType)
// Forward declare root types
namespace Steamworks {
struct EControllerHapticType;
}
// Write type traits
MARK_VAL_T(::Steamworks::EControllerHapticType);
DEFINE_IL2CPP_CLASS(::Steamworks::EControllerHapticType, "Steamworks", "EControllerHapticType");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EControllerHapticType
struct CORDL_TYPE EControllerHapticType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EControllerHapticType_Unwrapped
enum struct __EControllerHapticType_Unwrapped : int32_t {
__E_k_EControllerHapticType_Off = static_cast<int32_t>(0x0),
__E_k_EControllerHapticType_Tick = static_cast<int32_t>(0x1),
__E_k_EControllerHapticType_Click = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EControllerHapticType_Unwrapped () const noexcept {
return static_cast<__EControllerHapticType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EControllerHapticType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EControllerHapticType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16256};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EControllerHapticType_Click value: I32(2)
static ::Steamworks::EControllerHapticType const k_EControllerHapticType_Click;

/// @brief Field k_EControllerHapticType_Off value: I32(0)
static ::Steamworks::EControllerHapticType const k_EControllerHapticType_Off;

/// @brief Field k_EControllerHapticType_Tick value: I32(1)
static ::Steamworks::EControllerHapticType const k_EControllerHapticType_Tick;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EControllerHapticType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EControllerHapticType) == 0x4, "Size mismatch!");

} // namespace end def Steamworks

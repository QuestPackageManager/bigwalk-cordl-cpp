#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseVibrationMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DualSenseVibrationMode)
// Forward declare root types
namespace Rewired::ControllerExtensions {
struct DualSenseVibrationMode;
}
// Write type traits
MARK_VAL_T(::Rewired::ControllerExtensions::DualSenseVibrationMode);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::DualSenseVibrationMode, "Rewired.ControllerExtensions", "DualSenseVibrationMode");
// Dependencies 
namespace Rewired::ControllerExtensions {
// Is value type: true
// CS Name: Rewired.ControllerExtensions.DualSenseVibrationMode
struct CORDL_TYPE DualSenseVibrationMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DualSenseVibrationMode_Unwrapped
enum struct __DualSenseVibrationMode_Unwrapped : int32_t {
__E_Advanced = static_cast<int32_t>(0x1),
__E_Compatible = static_cast<int32_t>(0x2),
__E_Compatible2 = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DualSenseVibrationMode_Unwrapped () const noexcept {
return static_cast<__DualSenseVibrationMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DualSenseVibrationMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DualSenseVibrationMode(int32_t  value__) noexcept;

/// @brief Field Advanced value: I32(1)
static ::Rewired::ControllerExtensions::DualSenseVibrationMode const Advanced;

/// @brief Field Compatible value: I32(2)
static ::Rewired::ControllerExtensions::DualSenseVibrationMode const Compatible;

/// @brief Field Compatible2 value: I32(3)
static ::Rewired::ControllerExtensions::DualSenseVibrationMode const Compatible2;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2681};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseVibrationMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::DualSenseVibrationMode) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions

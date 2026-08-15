#pragma once
// IWYU pragma private; include "Rewired/Platforms/Windows/DirectInput/DirectInputDeviceAxisMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DirectInputDeviceAxisMode)
// Forward declare root types
namespace Rewired::Platforms::Windows::DirectInput {
struct DirectInputDeviceAxisMode;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceAxisMode);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceAxisMode, "Rewired.Platforms.Windows.DirectInput", "DirectInputDeviceAxisMode");
// Dependencies 
namespace Rewired::Platforms::Windows::DirectInput {
// Is value type: true
// CS Name: Rewired.Platforms.Windows.DirectInput.DirectInputDeviceAxisMode
struct CORDL_TYPE DirectInputDeviceAxisMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DirectInputDeviceAxisMode_Unwrapped
enum struct __DirectInputDeviceAxisMode_Unwrapped : int32_t {
__E_Absolute = static_cast<int32_t>(0x0),
__E_Relative = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DirectInputDeviceAxisMode_Unwrapped () const noexcept {
return static_cast<__DirectInputDeviceAxisMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DirectInputDeviceAxisMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DirectInputDeviceAxisMode(int32_t  value__) noexcept;

/// @brief Field Absolute value: I32(0)
static ::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceAxisMode const Absolute;

/// @brief Field Relative value: I32(1)
static ::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceAxisMode const Relative;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5977};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceAxisMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceAxisMode) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Platforms::Windows::DirectInput

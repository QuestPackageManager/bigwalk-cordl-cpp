#pragma once
// IWYU pragma private; include "Rewired/Platforms/Windows/RawInput/DeviceType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeviceType)
// Forward declare root types
namespace Rewired::Platforms::Windows::RawInput {
struct DeviceType;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::Windows::RawInput::DeviceType);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Windows::RawInput::DeviceType, "Rewired.Platforms.Windows.RawInput", "DeviceType");
// Dependencies 
namespace Rewired::Platforms::Windows::RawInput {
// Is value type: true
// CS Name: Rewired.Platforms.Windows.RawInput.DeviceType
struct CORDL_TYPE DeviceType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DeviceType_Unwrapped
enum struct __DeviceType_Unwrapped : int32_t {
__E_Joystick = static_cast<int32_t>(0x0),
__E_Gamepad = static_cast<int32_t>(0x1),
__E_Keyboard = static_cast<int32_t>(0x2),
__E_Mouse = static_cast<int32_t>(0x3),
__E_MultiAxisController = static_cast<int32_t>(0x4),
__E_Unknown = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DeviceType_Unwrapped () const noexcept {
return static_cast<__DeviceType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DeviceType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DeviceType(int32_t  value__) noexcept;

/// @brief Field Gamepad value: I32(1)
static ::Rewired::Platforms::Windows::RawInput::DeviceType const Gamepad;

/// @brief Field Joystick value: I32(0)
static ::Rewired::Platforms::Windows::RawInput::DeviceType const Joystick;

/// @brief Field Keyboard value: I32(2)
static ::Rewired::Platforms::Windows::RawInput::DeviceType const Keyboard;

/// @brief Field Mouse value: I32(3)
static ::Rewired::Platforms::Windows::RawInput::DeviceType const Mouse;

/// @brief Field MultiAxisController value: I32(4)
static ::Rewired::Platforms::Windows::RawInput::DeviceType const MultiAxisController;

/// @brief Field Unknown value: I32(5)
static ::Rewired::Platforms::Windows::RawInput::DeviceType const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5934};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Windows::RawInput::DeviceType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Windows::RawInput::DeviceType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Platforms::Windows::RawInput

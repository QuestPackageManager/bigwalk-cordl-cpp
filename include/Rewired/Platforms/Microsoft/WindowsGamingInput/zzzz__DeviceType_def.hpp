#pragma once
// IWYU pragma private; include "Rewired/Platforms/Microsoft/WindowsGamingInput/DeviceType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeviceType)
// Forward declare root types
namespace Rewired::Platforms::Microsoft::WindowsGamingInput {
struct DeviceType;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::Microsoft::WindowsGamingInput::DeviceType);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Microsoft::WindowsGamingInput::DeviceType, "Rewired.Platforms.Microsoft.WindowsGamingInput", "DeviceType");
// Dependencies 
namespace Rewired::Platforms::Microsoft::WindowsGamingInput {
// Is value type: true
// CS Name: Rewired.Platforms.Microsoft.WindowsGamingInput.DeviceType
struct CORDL_TYPE DeviceType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DeviceType_Unwrapped
enum struct __DeviceType_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Gamepad = static_cast<int32_t>(0x1),
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
static ::Rewired::Platforms::Microsoft::WindowsGamingInput::DeviceType const Gamepad;

/// @brief Field Unknown value: I32(0)
static ::Rewired::Platforms::Microsoft::WindowsGamingInput::DeviceType const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6010};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Microsoft::WindowsGamingInput::DeviceType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Microsoft::WindowsGamingInput::DeviceType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Platforms::Microsoft::WindowsGamingInput

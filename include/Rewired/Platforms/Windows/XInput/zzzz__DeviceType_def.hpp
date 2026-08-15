#pragma once
// IWYU pragma private; include "Rewired/Platforms/Windows/XInput/DeviceType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeviceType)
// Forward declare root types
namespace Rewired::Platforms::Windows::XInput {
struct DeviceType;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::Windows::XInput::DeviceType);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Windows::XInput::DeviceType, "Rewired.Platforms.Windows.XInput", "DeviceType");
// Dependencies 
namespace Rewired::Platforms::Windows::XInput {
// Is value type: true
// CS Name: Rewired.Platforms.Windows.XInput.DeviceType
struct CORDL_TYPE DeviceType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __DeviceType_Unwrapped
enum struct __DeviceType_Unwrapped : uint8_t {
__E_Gamepad = static_cast<uint8_t>(0x1u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DeviceType_Unwrapped () const noexcept {
return static_cast<__DeviceType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DeviceType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr DeviceType(uint8_t  value__) noexcept;

/// @brief Field Gamepad value: U8(1)
static ::Rewired::Platforms::Windows::XInput::DeviceType const Gamepad;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5922};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Windows::XInput::DeviceType, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Windows::XInput::DeviceType) == 0x1, "Size mismatch!");

} // namespace end def Rewired::Platforms::Windows::XInput

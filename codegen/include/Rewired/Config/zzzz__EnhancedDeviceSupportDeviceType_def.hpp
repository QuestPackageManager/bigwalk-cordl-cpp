#pragma once
// IWYU pragma private; include "Rewired/Config/EnhancedDeviceSupportDeviceType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnhancedDeviceSupportDeviceType)
// Forward declare root types
namespace Rewired::Config {
struct EnhancedDeviceSupportDeviceType;
}
// Write type traits
MARK_VAL_T(::Rewired::Config::EnhancedDeviceSupportDeviceType);
DEFINE_IL2CPP_CLASS(::Rewired::Config::EnhancedDeviceSupportDeviceType, "Rewired.Config", "EnhancedDeviceSupportDeviceType");
// Dependencies 
namespace Rewired::Config {
// Is value type: true
// CS Name: Rewired.Config.EnhancedDeviceSupportDeviceType
struct CORDL_TYPE EnhancedDeviceSupportDeviceType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EnhancedDeviceSupportDeviceType_Unwrapped
enum struct __EnhancedDeviceSupportDeviceType_Unwrapped : int32_t {
__E_SonyDualShock4 = static_cast<int32_t>(0x1),
__E_SonyDualSense = static_cast<int32_t>(0x2),
__E_NintendoSwitchProController = static_cast<int32_t>(0x64),
__E_NintendoSwitchJoyConLeft = static_cast<int32_t>(0x65),
__E_NintendoSwitchJoyConRight = static_cast<int32_t>(0x66),
__E_PIEngineeringRailDriver = static_cast<int32_t>(0x3e8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EnhancedDeviceSupportDeviceType_Unwrapped () const noexcept {
return static_cast<__EnhancedDeviceSupportDeviceType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EnhancedDeviceSupportDeviceType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EnhancedDeviceSupportDeviceType(int32_t  value__) noexcept;

/// @brief Field NintendoSwitchJoyConLeft value: I32(101)
static ::Rewired::Config::EnhancedDeviceSupportDeviceType const NintendoSwitchJoyConLeft;

/// @brief Field NintendoSwitchJoyConRight value: I32(102)
static ::Rewired::Config::EnhancedDeviceSupportDeviceType const NintendoSwitchJoyConRight;

/// @brief Field NintendoSwitchProController value: I32(100)
static ::Rewired::Config::EnhancedDeviceSupportDeviceType const NintendoSwitchProController;

/// @brief Field PIEngineeringRailDriver value: I32(1000)
static ::Rewired::Config::EnhancedDeviceSupportDeviceType const PIEngineeringRailDriver;

/// @brief Field SonyDualSense value: I32(2)
static ::Rewired::Config::EnhancedDeviceSupportDeviceType const SonyDualSense;

/// @brief Field SonyDualShock4 value: I32(1)
static ::Rewired::Config::EnhancedDeviceSupportDeviceType const SonyDualShock4;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2721};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Config::EnhancedDeviceSupportDeviceType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Config::EnhancedDeviceSupportDeviceType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Config

#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualShock4MotorType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DualShock4MotorType)
// Forward declare root types
namespace Rewired::ControllerExtensions {
struct DualShock4MotorType;
}
// Write type traits
MARK_VAL_T(::Rewired::ControllerExtensions::DualShock4MotorType);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::DualShock4MotorType, "Rewired.ControllerExtensions", "DualShock4MotorType");
// Dependencies 
namespace Rewired::ControllerExtensions {
// Is value type: true
// CS Name: Rewired.ControllerExtensions.DualShock4MotorType
struct CORDL_TYPE DualShock4MotorType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DualShock4MotorType_Unwrapped
enum struct __DualShock4MotorType_Unwrapped : int32_t {
__E_LeftMotor = static_cast<int32_t>(0x0),
__E_StrongMotor = static_cast<int32_t>(0x0),
__E_RightMotor = static_cast<int32_t>(0x1),
__E_WeakMotor = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DualShock4MotorType_Unwrapped () const noexcept {
return static_cast<__DualShock4MotorType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DualShock4MotorType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DualShock4MotorType(int32_t  value__) noexcept;

/// @brief Field LeftMotor value: I32(0)
static ::Rewired::ControllerExtensions::DualShock4MotorType const LeftMotor;

/// @brief Field RightMotor value: I32(1)
static ::Rewired::ControllerExtensions::DualShock4MotorType const RightMotor;

/// @brief Field StrongMotor value: I32(0)
static ::Rewired::ControllerExtensions::DualShock4MotorType const StrongMotor;

/// @brief Field WeakMotor value: I32(1)
static ::Rewired::ControllerExtensions::DualShock4MotorType const WeakMotor;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2700};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::DualShock4MotorType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::DualShock4MotorType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions

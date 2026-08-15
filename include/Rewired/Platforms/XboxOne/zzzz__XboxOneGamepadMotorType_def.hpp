#pragma once
// IWYU pragma private; include "Rewired/Platforms/XboxOne/XboxOneGamepadMotorType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XboxOneGamepadMotorType)
// Forward declare root types
namespace Rewired::Platforms::XboxOne {
struct XboxOneGamepadMotorType;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType, "Rewired.Platforms.XboxOne", "XboxOneGamepadMotorType");
// Dependencies 
namespace Rewired::Platforms::XboxOne {
// Is value type: true
// CS Name: Rewired.Platforms.XboxOne.XboxOneGamepadMotorType
struct CORDL_TYPE XboxOneGamepadMotorType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XboxOneGamepadMotorType_Unwrapped
enum struct __XboxOneGamepadMotorType_Unwrapped : int32_t {
__E_LeftMotor = static_cast<int32_t>(0x0),
__E_RightMotor = static_cast<int32_t>(0x1),
__E_LeftTriggerMotor = static_cast<int32_t>(0x2),
__E_RightTriggerMotor = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XboxOneGamepadMotorType_Unwrapped () const noexcept {
return static_cast<__XboxOneGamepadMotorType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XboxOneGamepadMotorType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XboxOneGamepadMotorType(int32_t  value__) noexcept;

/// @brief Field LeftMotor value: I32(0)
static ::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType const LeftMotor;

/// @brief Field LeftTriggerMotor value: I32(2)
static ::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType const LeftTriggerMotor;

/// @brief Field RightMotor value: I32(1)
static ::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType const RightMotor;

/// @brief Field RightTriggerMotor value: I32(3)
static ::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType const RightTriggerMotor;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2282};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Platforms::XboxOne

#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseTriggerType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DualSenseTriggerType)
// Forward declare root types
namespace Rewired::ControllerExtensions {
struct DualSenseTriggerType;
}
// Write type traits
MARK_VAL_T(::Rewired::ControllerExtensions::DualSenseTriggerType);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::DualSenseTriggerType, "Rewired.ControllerExtensions", "DualSenseTriggerType");
// Dependencies 
namespace Rewired::ControllerExtensions {
// Is value type: true
// CS Name: Rewired.ControllerExtensions.DualSenseTriggerType
struct CORDL_TYPE DualSenseTriggerType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DualSenseTriggerType_Unwrapped
enum struct __DualSenseTriggerType_Unwrapped : int32_t {
__E_Left = static_cast<int32_t>(0x0),
__E_Right = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DualSenseTriggerType_Unwrapped () const noexcept {
return static_cast<__DualSenseTriggerType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DualSenseTriggerType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DualSenseTriggerType(int32_t  value__) noexcept;

/// @brief Field Left value: I32(0)
static ::Rewired::ControllerExtensions::DualSenseTriggerType const Left;

/// @brief Field Right value: I32(1)
static ::Rewired::ControllerExtensions::DualSenseTriggerType const Right;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2677};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseTriggerType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::DualSenseTriggerType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions

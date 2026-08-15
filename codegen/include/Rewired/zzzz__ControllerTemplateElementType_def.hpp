#pragma once
// IWYU pragma private; include "Rewired/ControllerTemplateElementType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerTemplateElementType)
// Forward declare root types
namespace Rewired {
struct ControllerTemplateElementType;
}
// Write type traits
MARK_VAL_T(::Rewired::ControllerTemplateElementType);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerTemplateElementType, "Rewired", "ControllerTemplateElementType");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.ControllerTemplateElementType
struct CORDL_TYPE ControllerTemplateElementType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ControllerTemplateElementType_Unwrapped
enum struct __ControllerTemplateElementType_Unwrapped : int32_t {
__E_Axis = static_cast<int32_t>(0x0),
__E_Button = static_cast<int32_t>(0x1),
__E_ThumbStick = static_cast<int32_t>(0x2),
__E_DPad = static_cast<int32_t>(0x4),
__E_Stick = static_cast<int32_t>(0x5),
__E_Throttle = static_cast<int32_t>(0x6),
__E_Hat = static_cast<int32_t>(0x7),
__E_Yoke = static_cast<int32_t>(0x8),
__E_Stick6D = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ControllerTemplateElementType_Unwrapped () const noexcept {
return static_cast<__ControllerTemplateElementType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ControllerTemplateElementType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ControllerTemplateElementType(int32_t  value__) noexcept;

/// @brief Field Axis value: I32(0)
static ::Rewired::ControllerTemplateElementType const Axis;

/// @brief Field Button value: I32(1)
static ::Rewired::ControllerTemplateElementType const Button;

/// @brief Field DPad value: I32(4)
static ::Rewired::ControllerTemplateElementType const DPad;

/// @brief Field Hat value: I32(7)
static ::Rewired::ControllerTemplateElementType const Hat;

/// @brief Field Stick value: I32(5)
static ::Rewired::ControllerTemplateElementType const Stick;

/// @brief Field Stick6D value: I32(9)
static ::Rewired::ControllerTemplateElementType const Stick6D;

/// @brief Field Throttle value: I32(6)
static ::Rewired::ControllerTemplateElementType const Throttle;

/// @brief Field ThumbStick value: I32(2)
static ::Rewired::ControllerTemplateElementType const ThumbStick;

/// @brief Field Yoke value: I32(8)
static ::Rewired::ControllerTemplateElementType const Yoke;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1877};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerTemplateElementType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerTemplateElementType) == 0x4, "Size mismatch!");

} // namespace end def Rewired

#pragma once
// IWYU pragma private; include "Rewired/ControllerType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerType)
// Forward declare root types
namespace Rewired {
struct ControllerType;
}
// Write type traits
MARK_VAL_T(::Rewired::ControllerType);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerType, "Rewired", "ControllerType");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.ControllerType
struct CORDL_TYPE ControllerType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ControllerType_Unwrapped
enum struct __ControllerType_Unwrapped : int32_t {
__E_Keyboard = static_cast<int32_t>(0x0),
__E_Mouse = static_cast<int32_t>(0x1),
__E_Joystick = static_cast<int32_t>(0x2),
__E_Custom = static_cast<int32_t>(0x14),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ControllerType_Unwrapped () const noexcept {
return static_cast<__ControllerType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ControllerType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ControllerType(int32_t  value__) noexcept;

/// @brief Field Custom value: I32(20)
static ::Rewired::ControllerType const Custom;

/// @brief Field Joystick value: I32(2)
static ::Rewired::ControllerType const Joystick;

/// @brief Field Keyboard value: I32(0)
static ::Rewired::ControllerType const Keyboard;

/// @brief Field Mouse value: I32(1)
static ::Rewired::ControllerType const Mouse;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1951};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerType) == 0x4, "Size mismatch!");

} // namespace end def Rewired

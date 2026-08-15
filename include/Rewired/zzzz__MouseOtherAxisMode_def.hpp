#pragma once
// IWYU pragma private; include "Rewired/MouseOtherAxisMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MouseOtherAxisMode)
// Forward declare root types
namespace Rewired {
struct MouseOtherAxisMode;
}
// Write type traits
MARK_VAL_T(::Rewired::MouseOtherAxisMode);
DEFINE_IL2CPP_CLASS(::Rewired::MouseOtherAxisMode, "Rewired", "MouseOtherAxisMode");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.MouseOtherAxisMode
struct CORDL_TYPE MouseOtherAxisMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MouseOtherAxisMode_Unwrapped
enum struct __MouseOtherAxisMode_Unwrapped : int32_t {
__E_MouseAxis = static_cast<int32_t>(0x0),
__E_DigitalAxis = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MouseOtherAxisMode_Unwrapped () const noexcept {
return static_cast<__MouseOtherAxisMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MouseOtherAxisMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MouseOtherAxisMode(int32_t  value__) noexcept;

/// @brief Field DigitalAxis value: I32(1)
static ::Rewired::MouseOtherAxisMode const DigitalAxis;

/// @brief Field MouseAxis value: I32(0)
static ::Rewired::MouseOtherAxisMode const MouseAxis;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1945};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::MouseOtherAxisMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::MouseOtherAxisMode) == 0x4, "Size mismatch!");

} // namespace end def Rewired

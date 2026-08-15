#pragma once
// IWYU pragma private; include "Rewired/ControllerSubType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerSubType)
// Forward declare root types
namespace Rewired {
struct ControllerSubType;
}
// Write type traits
MARK_VAL_T(::Rewired::ControllerSubType);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerSubType, "Rewired", "ControllerSubType");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.ControllerSubType
struct CORDL_TYPE ControllerSubType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ControllerSubType_Unwrapped
enum struct __ControllerSubType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Gamepad = static_cast<int32_t>(0x1),
__E_Guitar = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ControllerSubType_Unwrapped () const noexcept {
return static_cast<__ControllerSubType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ControllerSubType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ControllerSubType(int32_t  value__) noexcept;

/// @brief Field Gamepad value: I32(1)
static ::Rewired::ControllerSubType const Gamepad;

/// @brief Field Guitar value: I32(2)
static ::Rewired::ControllerSubType const Guitar;

/// @brief Field None value: I32(0)
static ::Rewired::ControllerSubType const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1964};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerSubType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerSubType) == 0x4, "Size mismatch!");

} // namespace end def Rewired

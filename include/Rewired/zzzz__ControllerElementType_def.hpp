#pragma once
// IWYU pragma private; include "Rewired/ControllerElementType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerElementType)
// Forward declare root types
namespace Rewired {
struct ControllerElementType;
}
// Write type traits
MARK_VAL_T(::Rewired::ControllerElementType);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerElementType, "Rewired", "ControllerElementType");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.ControllerElementType
struct CORDL_TYPE ControllerElementType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ControllerElementType_Unwrapped
enum struct __ControllerElementType_Unwrapped : int32_t {
__E_Axis = static_cast<int32_t>(0x0),
__E_Button = static_cast<int32_t>(0x1),
__E_CompoundElement = static_cast<int32_t>(0x64),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ControllerElementType_Unwrapped () const noexcept {
return static_cast<__ControllerElementType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ControllerElementType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ControllerElementType(int32_t  value__) noexcept;

/// @brief Field Axis value: I32(0)
static ::Rewired::ControllerElementType const Axis;

/// @brief Field Button value: I32(1)
static ::Rewired::ControllerElementType const Button;

/// @brief Field CompoundElement value: I32(100)
static ::Rewired::ControllerElementType const CompoundElement;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1952};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerElementType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerElementType) == 0x4, "Size mismatch!");

} // namespace end def Rewired

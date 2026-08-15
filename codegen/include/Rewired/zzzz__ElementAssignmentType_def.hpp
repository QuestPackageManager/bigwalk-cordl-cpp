#pragma once
// IWYU pragma private; include "Rewired/ElementAssignmentType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ElementAssignmentType)
// Forward declare root types
namespace Rewired {
struct ElementAssignmentType;
}
// Write type traits
MARK_VAL_T(::Rewired::ElementAssignmentType);
DEFINE_IL2CPP_CLASS(::Rewired::ElementAssignmentType, "Rewired", "ElementAssignmentType");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.ElementAssignmentType
struct CORDL_TYPE ElementAssignmentType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ElementAssignmentType_Unwrapped
enum struct __ElementAssignmentType_Unwrapped : int32_t {
__E_FullAxis = static_cast<int32_t>(0x0),
__E_SplitAxis = static_cast<int32_t>(0x1),
__E_Button = static_cast<int32_t>(0x2),
__E_KeyboardKey = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ElementAssignmentType_Unwrapped () const noexcept {
return static_cast<__ElementAssignmentType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ElementAssignmentType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ElementAssignmentType(int32_t  value__) noexcept;

/// @brief Field Button value: I32(2)
static ::Rewired::ElementAssignmentType const Button;

/// @brief Field FullAxis value: I32(0)
static ::Rewired::ElementAssignmentType const FullAxis;

/// @brief Field KeyboardKey value: I32(3)
static ::Rewired::ElementAssignmentType const KeyboardKey;

/// @brief Field SplitAxis value: I32(1)
static ::Rewired::ElementAssignmentType const SplitAxis;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1956};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ElementAssignmentType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ElementAssignmentType) == 0x4, "Size mismatch!");

} // namespace end def Rewired

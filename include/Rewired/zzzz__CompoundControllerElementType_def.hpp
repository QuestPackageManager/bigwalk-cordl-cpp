#pragma once
// IWYU pragma private; include "Rewired/CompoundControllerElementType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompoundControllerElementType)
// Forward declare root types
namespace Rewired {
struct CompoundControllerElementType;
}
// Write type traits
MARK_VAL_T(::Rewired::CompoundControllerElementType);
DEFINE_IL2CPP_CLASS(::Rewired::CompoundControllerElementType, "Rewired", "CompoundControllerElementType");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.CompoundControllerElementType
struct CORDL_TYPE CompoundControllerElementType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CompoundControllerElementType_Unwrapped
enum struct __CompoundControllerElementType_Unwrapped : int32_t {
__E_Axis2D = static_cast<int32_t>(0x0),
__E_DPad = static_cast<int32_t>(0xa),
__E_Hat = static_cast<int32_t>(0xb),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CompoundControllerElementType_Unwrapped () const noexcept {
return static_cast<__CompoundControllerElementType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CompoundControllerElementType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CompoundControllerElementType(int32_t  value__) noexcept;

/// @brief Field Axis2D value: I32(0)
static ::Rewired::CompoundControllerElementType const Axis2D;

/// @brief Field DPad value: I32(10)
static ::Rewired::CompoundControllerElementType const DPad;

/// @brief Field Hat value: I32(11)
static ::Rewired::CompoundControllerElementType const Hat;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1953};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::CompoundControllerElementType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::CompoundControllerElementType) == 0x4, "Size mismatch!");

} // namespace end def Rewired

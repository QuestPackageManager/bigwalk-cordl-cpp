#pragma once
// IWYU pragma private; include "Rewired/DeadZone2DType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeadZone2DType)
// Forward declare root types
namespace Rewired {
struct DeadZone2DType;
}
// Write type traits
MARK_VAL_T(::Rewired::DeadZone2DType);
DEFINE_IL2CPP_CLASS(::Rewired::DeadZone2DType, "Rewired", "DeadZone2DType");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.DeadZone2DType
struct CORDL_TYPE DeadZone2DType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DeadZone2DType_Unwrapped
enum struct __DeadZone2DType_Unwrapped : int32_t {
__E_Radial = static_cast<int32_t>(0x1),
__E_Axial = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DeadZone2DType_Unwrapped () const noexcept {
return static_cast<__DeadZone2DType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DeadZone2DType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DeadZone2DType(int32_t  value__) noexcept;

/// @brief Field Axial value: I32(2)
static ::Rewired::DeadZone2DType const Axial;

/// @brief Field Radial value: I32(1)
static ::Rewired::DeadZone2DType const Radial;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1954};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::DeadZone2DType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::DeadZone2DType) == 0x4, "Size mismatch!");

} // namespace end def Rewired

#pragma once
// IWYU pragma private; include "Rewired/AxisType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AxisType)
// Forward declare root types
namespace Rewired {
struct AxisType;
}
// Write type traits
MARK_VAL_T(::Rewired::AxisType);
DEFINE_IL2CPP_CLASS(::Rewired::AxisType, "Rewired", "AxisType");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.AxisType
struct CORDL_TYPE AxisType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AxisType_Unwrapped
enum struct __AxisType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Normal = static_cast<int32_t>(0x1),
__E_Split = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AxisType_Unwrapped () const noexcept {
return static_cast<__AxisType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AxisType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AxisType(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::Rewired::AxisType const None;

/// @brief Field Normal value: I32(1)
static ::Rewired::AxisType const Normal;

/// @brief Field Split value: I32(2)
static ::Rewired::AxisType const Split;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1947};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::AxisType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::AxisType) == 0x4, "Size mismatch!");

} // namespace end def Rewired

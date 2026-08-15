#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/SpecialAxisType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpecialAxisType)
// Forward declare root types
namespace Rewired::Data::Mapping {
struct SpecialAxisType;
}
// Write type traits
MARK_VAL_T(::Rewired::Data::Mapping::SpecialAxisType);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::SpecialAxisType, "Rewired.Data.Mapping", "SpecialAxisType");
// Dependencies 
namespace Rewired::Data::Mapping {
// Is value type: true
// CS Name: Rewired.Data.Mapping.SpecialAxisType
struct CORDL_TYPE SpecialAxisType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SpecialAxisType_Unwrapped
enum struct __SpecialAxisType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Throttle = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SpecialAxisType_Unwrapped () const noexcept {
return static_cast<__SpecialAxisType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SpecialAxisType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SpecialAxisType(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::Rewired::Data::Mapping::SpecialAxisType const None;

/// @brief Field Throttle value: I32(1)
static ::Rewired::Data::Mapping::SpecialAxisType const Throttle;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2662};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::SpecialAxisType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::SpecialAxisType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping

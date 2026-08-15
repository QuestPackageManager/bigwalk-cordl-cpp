#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/HatType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HatType)
// Forward declare root types
namespace Rewired::Data::Mapping {
struct HatType;
}
// Write type traits
MARK_VAL_T(::Rewired::Data::Mapping::HatType);
DEFINE_IL2CPP_CLASS(::Rewired::Data::Mapping::HatType, "Rewired.Data.Mapping", "HatType");
// Dependencies 
namespace Rewired::Data::Mapping {
// Is value type: true
// CS Name: Rewired.Data.Mapping.HatType
struct CORDL_TYPE HatType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HatType_Unwrapped
enum struct __HatType_Unwrapped : int32_t {
__E_FourWay = static_cast<int32_t>(0x0),
__E_EightWay = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HatType_Unwrapped () const noexcept {
return static_cast<__HatType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HatType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HatType(int32_t  value__) noexcept;

/// @brief Field EightWay value: I32(1)
static ::Rewired::Data::Mapping::HatType const EightWay;

/// @brief Field FourWay value: I32(0)
static ::Rewired::Data::Mapping::HatType const FourWay;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2658};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::Mapping::HatType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::Mapping::HatType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Data::Mapping

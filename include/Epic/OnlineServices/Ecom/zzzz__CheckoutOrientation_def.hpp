#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CheckoutOrientation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CheckoutOrientation)
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct CheckoutOrientation;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::CheckoutOrientation);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::CheckoutOrientation, "Epic.OnlineServices.Ecom", "CheckoutOrientation");
// Dependencies 
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.CheckoutOrientation
struct CORDL_TYPE CheckoutOrientation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CheckoutOrientation_Unwrapped
enum struct __CheckoutOrientation_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Portrait = static_cast<int32_t>(0x1),
__E_Landscape = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CheckoutOrientation_Unwrapped () const noexcept {
return static_cast<__CheckoutOrientation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CheckoutOrientation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CheckoutOrientation(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::Epic::OnlineServices::Ecom::CheckoutOrientation const Default;

/// @brief Field Landscape value: I32(2)
static ::Epic::OnlineServices::Ecom::CheckoutOrientation const Landscape;

/// @brief Field Portrait value: I32(1)
static ::Epic::OnlineServices::Ecom::CheckoutOrientation const Portrait;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8899};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::CheckoutOrientation, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::CheckoutOrientation) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom

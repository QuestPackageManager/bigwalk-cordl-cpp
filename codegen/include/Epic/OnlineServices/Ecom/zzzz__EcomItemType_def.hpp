#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/EcomItemType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EcomItemType)
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct EcomItemType;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::EcomItemType);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::EcomItemType, "Epic.OnlineServices.Ecom", "EcomItemType");
// Dependencies 
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.EcomItemType
struct CORDL_TYPE EcomItemType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EcomItemType_Unwrapped
enum struct __EcomItemType_Unwrapped : int32_t {
__E_Durable = static_cast<int32_t>(0x0),
__E_Consumable = static_cast<int32_t>(0x1),
__E_Other = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EcomItemType_Unwrapped () const noexcept {
return static_cast<__EcomItemType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EcomItemType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EcomItemType(int32_t  value__) noexcept;

/// @brief Field Consumable value: I32(1)
static ::Epic::OnlineServices::Ecom::EcomItemType const Consumable;

/// @brief Field Durable value: I32(0)
static ::Epic::OnlineServices::Ecom::EcomItemType const Durable;

/// @brief Field Other value: I32(2)
static ::Epic::OnlineServices::Ecom::EcomItemType const Other;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8929};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::EcomItemType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::EcomItemType) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom

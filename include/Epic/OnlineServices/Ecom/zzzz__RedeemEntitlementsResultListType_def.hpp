#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/RedeemEntitlementsResultListType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RedeemEntitlementsResultListType)
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct RedeemEntitlementsResultListType;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType, "Epic.OnlineServices.Ecom", "RedeemEntitlementsResultListType");
// Dependencies 
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.RedeemEntitlementsResultListType
struct CORDL_TYPE RedeemEntitlementsResultListType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RedeemEntitlementsResultListType_Unwrapped
enum struct __RedeemEntitlementsResultListType_Unwrapped : int32_t {
__E_Redeemed = static_cast<int32_t>(0x0),
__E_PreviouslyRedeemed = static_cast<int32_t>(0x1),
__E_Invalid = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RedeemEntitlementsResultListType_Unwrapped () const noexcept {
return static_cast<__RedeemEntitlementsResultListType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RedeemEntitlementsResultListType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RedeemEntitlementsResultListType(int32_t  value__) noexcept;

/// @brief Field Invalid value: I32(2)
static ::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType const Invalid;

/// @brief Field PreviouslyRedeemed value: I32(1)
static ::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType const PreviouslyRedeemed;

/// @brief Field Redeemed value: I32(0)
static ::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType const Redeemed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9009};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom

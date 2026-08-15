#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CopyLastRedeemedEntitlementByIndexOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyLastRedeemedEntitlementByIndexOptions)
namespace Epic::OnlineServices {
class EpicAccountId;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct CopyLastRedeemedEntitlementByIndexOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions, "Epic.OnlineServices.Ecom", "CopyLastRedeemedEntitlementByIndexOptions");
// Dependencies 
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.CopyLastRedeemedEntitlementByIndexOptions
struct CORDL_TYPE CopyLastRedeemedEntitlementByIndexOptions {
public:
// Declarations
 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::EpicAccountId*  LocalUserId;

 __declspec(property(get=get_RedeemedEntitlementIndex, put=set_RedeemedEntitlementIndex)) uint32_t  RedeemedEntitlementIndex;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_LocalUserId() ;

/// @brief Method get_RedeemedEntitlementIndex, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_RedeemedEntitlementIndex() ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

/// @brief Method set_RedeemedEntitlementIndex, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_RedeemedEntitlementIndex(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyLastRedeemedEntitlementByIndexOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_RedeemedEntitlementIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr CopyLastRedeemedEntitlementByIndexOptions(::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, uint32_t  _RedeemedEntitlementIndex_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8914};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField;

/// @brief Field <RedeemedEntitlementIndex>k__BackingField, offset: 0x8, size: 0x4, def value: None
 uint32_t  _RedeemedEntitlementIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions, _RedeemedEntitlementIndex_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom

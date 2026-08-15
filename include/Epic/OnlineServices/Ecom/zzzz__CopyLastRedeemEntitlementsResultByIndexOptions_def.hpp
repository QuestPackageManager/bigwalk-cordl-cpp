#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CopyLastRedeemEntitlementsResultByIndexOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Ecom/zzzz__RedeemEntitlementsResultListType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyLastRedeemEntitlementsResultByIndexOptions)
namespace Epic::OnlineServices::Ecom {
struct RedeemEntitlementsResultListType;
}
namespace Epic::OnlineServices {
class EpicAccountId;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct CopyLastRedeemEntitlementsResultByIndexOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptions, "Epic.OnlineServices.Ecom", "CopyLastRedeemEntitlementsResultByIndexOptions");
// Dependencies Epic.OnlineServices.Ecom.RedeemEntitlementsResultListType
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.CopyLastRedeemEntitlementsResultByIndexOptions
struct CORDL_TYPE CopyLastRedeemEntitlementsResultByIndexOptions {
public:
// Declarations
 __declspec(property(get=get_EntitlementIndex, put=set_EntitlementIndex)) uint32_t  EntitlementIndex;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::EpicAccountId*  LocalUserId;

 __declspec(property(get=get_ResultType, put=set_ResultType)) ::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType  ResultType;

/// @brief Method get_EntitlementIndex, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_EntitlementIndex() ;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_LocalUserId() ;

/// @brief Method get_ResultType, addr 0x1803bdb30, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType get_ResultType() ;

/// @brief Method set_EntitlementIndex, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_EntitlementIndex(uint32_t  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

/// @brief Method set_ResultType, addr 0x1804bdb30, size 0x10, virtual false, abstract: false, final false
inline void set_ResultType(::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyLastRedeemEntitlementsResultByIndexOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_EntitlementIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_ResultType_k__BackingField", ty: "::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType", modifiers: "", def_value: None }]
constexpr CopyLastRedeemEntitlementsResultByIndexOptions(::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, uint32_t  _EntitlementIndex_k__BackingField, ::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType  _ResultType_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8912};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField;

/// @brief Field <EntitlementIndex>k__BackingField, offset: 0x8, size: 0x4, def value: None
 uint32_t  _EntitlementIndex_k__BackingField;

/// @brief Field <ResultType>k__BackingField, offset: 0xc, size: 0x4, def value: None
 ::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType  _ResultType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptions, _EntitlementIndex_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptions, _ResultType_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom

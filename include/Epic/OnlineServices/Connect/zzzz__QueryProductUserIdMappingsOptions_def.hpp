#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/QueryProductUserIdMappingsOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__ExternalAccountType_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(QueryProductUserIdMappingsOptions)
namespace Epic::OnlineServices {
struct ExternalAccountType;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
// Forward declare root types
namespace Epic::OnlineServices::Connect {
struct QueryProductUserIdMappingsOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions, "Epic.OnlineServices.Connect", "QueryProductUserIdMappingsOptions");
// Dependencies Epic.OnlineServices.ExternalAccountType, Epic.OnlineServices.ProductUserId
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.QueryProductUserIdMappingsOptions
struct CORDL_TYPE QueryProductUserIdMappingsOptions {
public:
// Declarations
 __declspec(property(get=get_AccountIdType_DEPRECATED, put=set_AccountIdType_DEPRECATED)) ::Epic::OnlineServices::ExternalAccountType  AccountIdType_DEPRECATED;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_ProductUserIds, put=set_ProductUserIds)) ::ArrayW<::Epic::OnlineServices::ProductUserId*>  ProductUserIds;

/// @brief Method get_AccountIdType_DEPRECATED, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ExternalAccountType get_AccountIdType_DEPRECATED() ;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_ProductUserIds, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Epic::OnlineServices::ProductUserId*> get_ProductUserIds() ;

/// @brief Method set_AccountIdType_DEPRECATED, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_AccountIdType_DEPRECATED(::Epic::OnlineServices::ExternalAccountType  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_ProductUserIds, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_ProductUserIds(::ArrayW<::Epic::OnlineServices::ProductUserId*>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryProductUserIdMappingsOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_AccountIdType_DEPRECATED_k__BackingField", ty: "::Epic::OnlineServices::ExternalAccountType", modifiers: "", def_value: None }, CppParam { name: "_ProductUserIds_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::ProductUserId*>", modifiers: "", def_value: None }]
constexpr QueryProductUserIdMappingsOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::ExternalAccountType  _AccountIdType_DEPRECATED_k__BackingField, ::ArrayW<::Epic::OnlineServices::ProductUserId*>  _ProductUserIds_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9207};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <AccountIdType_DEPRECATED>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::Epic::OnlineServices::ExternalAccountType  _AccountIdType_DEPRECATED_k__BackingField;

/// @brief Field <ProductUserIds>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Epic::OnlineServices::ProductUserId*>  _ProductUserIds_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions, _AccountIdType_DEPRECATED_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions, _ProductUserIds_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect

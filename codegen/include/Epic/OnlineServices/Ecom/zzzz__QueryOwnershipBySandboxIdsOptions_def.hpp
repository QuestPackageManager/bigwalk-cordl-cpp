#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/QueryOwnershipBySandboxIdsOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(QueryOwnershipBySandboxIdsOptions)
namespace Epic::OnlineServices {
class EpicAccountId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct QueryOwnershipBySandboxIdsOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptions, "Epic.OnlineServices.Ecom", "QueryOwnershipBySandboxIdsOptions");
// Dependencies Epic.OnlineServices.Utf8String
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.QueryOwnershipBySandboxIdsOptions
struct CORDL_TYPE QueryOwnershipBySandboxIdsOptions {
public:
// Declarations
 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::EpicAccountId*  LocalUserId;

 __declspec(property(get=get_SandboxIds, put=set_SandboxIds)) ::ArrayW<::Epic::OnlineServices::Utf8String*>  SandboxIds;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_LocalUserId() ;

/// @brief Method get_SandboxIds, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Epic::OnlineServices::Utf8String*> get_SandboxIds() ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

/// @brief Method set_SandboxIds, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_SandboxIds(::ArrayW<::Epic::OnlineServices::Utf8String*>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryOwnershipBySandboxIdsOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_SandboxIds_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::Utf8String*>", modifiers: "", def_value: None }]
constexpr QueryOwnershipBySandboxIdsOptions(::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, ::ArrayW<::Epic::OnlineServices::Utf8String*>  _SandboxIds_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8995};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField;

/// @brief Field <SandboxIds>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::Epic::OnlineServices::Utf8String*>  _SandboxIds_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptions, _SandboxIds_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom

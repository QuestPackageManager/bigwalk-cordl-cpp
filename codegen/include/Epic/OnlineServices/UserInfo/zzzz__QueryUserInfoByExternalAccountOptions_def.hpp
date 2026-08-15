#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/QueryUserInfoByExternalAccountOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__ExternalAccountType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(QueryUserInfoByExternalAccountOptions)
namespace Epic::OnlineServices {
class EpicAccountId;
}
namespace Epic::OnlineServices {
struct ExternalAccountType;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::UserInfo {
struct QueryUserInfoByExternalAccountOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountOptions, "Epic.OnlineServices.UserInfo", "QueryUserInfoByExternalAccountOptions");
// Dependencies Epic.OnlineServices.ExternalAccountType
namespace Epic::OnlineServices::UserInfo {
// Is value type: true
// CS Name: Epic.OnlineServices.UserInfo.QueryUserInfoByExternalAccountOptions
struct CORDL_TYPE QueryUserInfoByExternalAccountOptions {
public:
// Declarations
 __declspec(property(get=get_AccountType, put=set_AccountType)) ::Epic::OnlineServices::ExternalAccountType  AccountType;

 __declspec(property(get=get_ExternalAccountId, put=set_ExternalAccountId)) ::Epic::OnlineServices::Utf8String*  ExternalAccountId;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::EpicAccountId*  LocalUserId;

/// @brief Method get_AccountType, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ExternalAccountType get_AccountType() ;

/// @brief Method get_ExternalAccountId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ExternalAccountId() ;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_LocalUserId() ;

/// @brief Method set_AccountType, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_AccountType(::Epic::OnlineServices::ExternalAccountType  value) ;

/// @brief Method set_ExternalAccountId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_ExternalAccountId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryUserInfoByExternalAccountOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_ExternalAccountId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_AccountType_k__BackingField", ty: "::Epic::OnlineServices::ExternalAccountType", modifiers: "", def_value: None }]
constexpr QueryUserInfoByExternalAccountOptions(::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ExternalAccountId_k__BackingField, ::Epic::OnlineServices::ExternalAccountType  _AccountType_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7492};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField;

/// @brief Field <ExternalAccountId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ExternalAccountId_k__BackingField;

/// @brief Field <AccountType>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::ExternalAccountType  _AccountType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountOptions, _ExternalAccountId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountOptions, _AccountType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UserInfo

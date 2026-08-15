#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/ExternalUserInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__ExternalAccountType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ExternalUserInfo)
namespace Epic::OnlineServices {
struct ExternalAccountType;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::UserInfo {
struct ExternalUserInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UserInfo::ExternalUserInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UserInfo::ExternalUserInfo, "Epic.OnlineServices.UserInfo", "ExternalUserInfo");
// Dependencies Epic.OnlineServices.ExternalAccountType
namespace Epic::OnlineServices::UserInfo {
// Is value type: true
// CS Name: Epic.OnlineServices.UserInfo.ExternalUserInfo
struct CORDL_TYPE ExternalUserInfo {
public:
// Declarations
 __declspec(property(get=get_AccountId, put=set_AccountId)) ::Epic::OnlineServices::Utf8String*  AccountId;

 __declspec(property(get=get_AccountType, put=set_AccountType)) ::Epic::OnlineServices::ExternalAccountType  AccountType;

 __declspec(property(get=get_DisplayName, put=set_DisplayName)) ::Epic::OnlineServices::Utf8String*  DisplayName;

 __declspec(property(get=get_DisplayNameSanitized, put=set_DisplayNameSanitized)) ::Epic::OnlineServices::Utf8String*  DisplayNameSanitized;

/// @brief Method get_AccountId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_AccountId() ;

/// @brief Method get_AccountType, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ExternalAccountType get_AccountType() ;

/// @brief Method get_DisplayName, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_DisplayName() ;

/// @brief Method get_DisplayNameSanitized, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_DisplayNameSanitized() ;

/// @brief Method set_AccountId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_AccountId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_AccountType, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_AccountType(::Epic::OnlineServices::ExternalAccountType  value) ;

/// @brief Method set_DisplayName, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_DisplayName(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_DisplayNameSanitized, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_DisplayNameSanitized(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ExternalUserInfo() ;

// Ctor Parameters [CppParam { name: "_AccountType_k__BackingField", ty: "::Epic::OnlineServices::ExternalAccountType", modifiers: "", def_value: None }, CppParam { name: "_AccountId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_DisplayName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_DisplayNameSanitized_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr ExternalUserInfo(::Epic::OnlineServices::ExternalAccountType  _AccountType_k__BackingField, ::Epic::OnlineServices::Utf8String*  _AccountId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DisplayName_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DisplayNameSanitized_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7471};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <AccountType>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::ExternalAccountType  _AccountType_k__BackingField;

/// @brief Field <AccountId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _AccountId_k__BackingField;

/// @brief Field <DisplayName>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _DisplayName_k__BackingField;

/// @brief Field <DisplayNameSanitized>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _DisplayNameSanitized_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UserInfo::ExternalUserInfo, _AccountType_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::ExternalUserInfo, _AccountId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::ExternalUserInfo, _DisplayName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UserInfo::ExternalUserInfo, _DisplayNameSanitized_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UserInfo::ExternalUserInfo) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UserInfo

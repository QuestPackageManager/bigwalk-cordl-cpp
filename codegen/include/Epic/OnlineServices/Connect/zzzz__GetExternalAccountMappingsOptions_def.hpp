#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/GetExternalAccountMappingsOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__ExternalAccountType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GetExternalAccountMappingsOptions)
namespace Epic::OnlineServices {
struct ExternalAccountType;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Connect {
struct GetExternalAccountMappingsOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptions, "Epic.OnlineServices.Connect", "GetExternalAccountMappingsOptions");
// Dependencies Epic.OnlineServices.ExternalAccountType
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.GetExternalAccountMappingsOptions
struct CORDL_TYPE GetExternalAccountMappingsOptions {
public:
// Declarations
 __declspec(property(get=get_AccountIdType, put=set_AccountIdType)) ::Epic::OnlineServices::ExternalAccountType  AccountIdType;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_TargetExternalUserId, put=set_TargetExternalUserId)) ::Epic::OnlineServices::Utf8String*  TargetExternalUserId;

/// @brief Method get_AccountIdType, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ExternalAccountType get_AccountIdType() ;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_TargetExternalUserId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_TargetExternalUserId() ;

/// @brief Method set_AccountIdType, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_AccountIdType(::Epic::OnlineServices::ExternalAccountType  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_TargetExternalUserId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_TargetExternalUserId(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GetExternalAccountMappingsOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_AccountIdType_k__BackingField", ty: "::Epic::OnlineServices::ExternalAccountType", modifiers: "", def_value: None }, CppParam { name: "_TargetExternalUserId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr GetExternalAccountMappingsOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::ExternalAccountType  _AccountIdType_k__BackingField, ::Epic::OnlineServices::Utf8String*  _TargetExternalUserId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9140};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <AccountIdType>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::Epic::OnlineServices::ExternalAccountType  _AccountIdType_k__BackingField;

/// @brief Field <TargetExternalUserId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _TargetExternalUserId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptions, _AccountIdType_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptions, _TargetExternalUserId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect

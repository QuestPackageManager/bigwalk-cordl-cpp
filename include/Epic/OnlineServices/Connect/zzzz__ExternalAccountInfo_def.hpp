#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/ExternalAccountInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__ExternalAccountType_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ExternalAccountInfo)
namespace Epic::OnlineServices {
struct ExternalAccountType;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Connect {
struct ExternalAccountInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::ExternalAccountInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::ExternalAccountInfo, "Epic.OnlineServices.Connect", "ExternalAccountInfo");
// Dependencies Epic.OnlineServices.ExternalAccountType, System.DateTimeOffset, System.Nullable`1<T>
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.ExternalAccountInfo
struct CORDL_TYPE ExternalAccountInfo {
public:
// Declarations
 __declspec(property(get=get_AccountId, put=set_AccountId)) ::Epic::OnlineServices::Utf8String*  AccountId;

 __declspec(property(get=get_AccountIdType, put=set_AccountIdType)) ::Epic::OnlineServices::ExternalAccountType  AccountIdType;

 __declspec(property(get=get_DisplayName, put=set_DisplayName)) ::Epic::OnlineServices::Utf8String*  DisplayName;

 __declspec(property(get=get_LastLoginTime, put=set_LastLoginTime)) ::System::Nullable_1<::System::DateTimeOffset>  LastLoginTime;

 __declspec(property(get=get_ProductUserId, put=set_ProductUserId)) ::Epic::OnlineServices::ProductUserId*  ProductUserId;

/// @brief Method get_AccountId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_AccountId() ;

/// @brief Method get_AccountIdType, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ExternalAccountType get_AccountIdType() ;

/// @brief Method get_DisplayName, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_DisplayName() ;

/// @brief Method get_LastLoginTime, addr 0x1804bda70, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::DateTimeOffset> get_LastLoginTime() ;

/// @brief Method get_ProductUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_ProductUserId() ;

/// @brief Method set_AccountId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_AccountId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_AccountIdType, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_AccountIdType(::Epic::OnlineServices::ExternalAccountType  value) ;

/// @brief Method set_DisplayName, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_DisplayName(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LastLoginTime, addr 0x1804bdab0, size 0x20, virtual false, abstract: false, final false
inline void set_LastLoginTime(::System::Nullable_1<::System::DateTimeOffset>  value) ;

/// @brief Method set_ProductUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ProductUserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ExternalAccountInfo() ;

// Ctor Parameters [CppParam { name: "_ProductUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_DisplayName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_AccountId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_AccountIdType_k__BackingField", ty: "::Epic::OnlineServices::ExternalAccountType", modifiers: "", def_value: None }, CppParam { name: "_LastLoginTime_k__BackingField", ty: "::System::Nullable_1<::System::DateTimeOffset>", modifiers: "", def_value: None }]
constexpr ExternalAccountInfo(::Epic::OnlineServices::ProductUserId*  _ProductUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DisplayName_k__BackingField, ::Epic::OnlineServices::Utf8String*  _AccountId_k__BackingField, ::Epic::OnlineServices::ExternalAccountType  _AccountIdType_k__BackingField, ::System::Nullable_1<::System::DateTimeOffset>  _LastLoginTime_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9138};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <ProductUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _ProductUserId_k__BackingField;

/// @brief Field <DisplayName>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _DisplayName_k__BackingField;

/// @brief Field <AccountId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _AccountId_k__BackingField;

/// @brief Field <AccountIdType>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::Epic::OnlineServices::ExternalAccountType  _AccountIdType_k__BackingField;

/// @brief Field <LastLoginTime>k__BackingField, offset: 0x20, size: 0x18, def value: None
 ::System::Nullable_1<::System::DateTimeOffset>  _LastLoginTime_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Connect::ExternalAccountInfo, _ProductUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::ExternalAccountInfo, _DisplayName_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::ExternalAccountInfo, _AccountId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::ExternalAccountInfo, _AccountIdType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::ExternalAccountInfo, _LastLoginTime_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Connect::ExternalAccountInfo) == 0x38, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect

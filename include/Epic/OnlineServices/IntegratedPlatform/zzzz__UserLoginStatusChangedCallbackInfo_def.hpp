#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/UserLoginStatusChangedCallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__LoginStatus_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UserLoginStatusChangedCallbackInfo)
namespace Epic::OnlineServices {
class EpicAccountId;
}
namespace Epic::OnlineServices {
class ICallbackInfo;
}
namespace Epic::OnlineServices {
struct LoginStatus;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::IntegratedPlatform {
struct UserLoginStatusChangedCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo, "Epic.OnlineServices.IntegratedPlatform", "UserLoginStatusChangedCallbackInfo");
// Dependencies Epic.OnlineServices.LoginStatus
namespace Epic::OnlineServices::IntegratedPlatform {
// Is value type: true
// CS Name: Epic.OnlineServices.IntegratedPlatform.UserLoginStatusChangedCallbackInfo
struct CORDL_TYPE UserLoginStatusChangedCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_AccountId, put=set_AccountId)) ::Epic::OnlineServices::EpicAccountId*  AccountId;

 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_CurrentLoginStatus, put=set_CurrentLoginStatus)) ::Epic::OnlineServices::LoginStatus  CurrentLoginStatus;

 __declspec(property(get=get_LocalPlatformUserId, put=set_LocalPlatformUserId)) ::Epic::OnlineServices::Utf8String*  LocalPlatformUserId;

 __declspec(property(get=get_PlatformType, put=set_PlatformType)) ::Epic::OnlineServices::Utf8String*  PlatformType;

 __declspec(property(get=get_PreviousLoginStatus, put=set_PreviousLoginStatus)) ::Epic::OnlineServices::LoginStatus  PreviousLoginStatus;

 __declspec(property(get=get_ProductUserId, put=set_ProductUserId)) ::Epic::OnlineServices::ProductUserId*  ProductUserId;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_AccountId, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_AccountId() ;

/// @brief Method get_ClientData, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_CurrentLoginStatus, addr 0x1803914b0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::LoginStatus get_CurrentLoginStatus() ;

/// @brief Method get_LocalPlatformUserId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_LocalPlatformUserId() ;

/// @brief Method get_PlatformType, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_PlatformType() ;

/// @brief Method get_PreviousLoginStatus, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::LoginStatus get_PreviousLoginStatus() ;

/// @brief Method get_ProductUserId, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_ProductUserId() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_AccountId, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_AccountId(::Epic::OnlineServices::EpicAccountId*  value) ;

/// @brief Method set_ClientData, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_CurrentLoginStatus, addr 0x1803914d0, size 0x10, virtual false, abstract: false, final false
inline void set_CurrentLoginStatus(::Epic::OnlineServices::LoginStatus  value) ;

/// @brief Method set_LocalPlatformUserId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_LocalPlatformUserId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_PlatformType, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_PlatformType(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_PreviousLoginStatus, addr 0x1803914c0, size 0x10, virtual false, abstract: false, final false
inline void set_PreviousLoginStatus(::Epic::OnlineServices::LoginStatus  value) ;

/// @brief Method set_ProductUserId, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_ProductUserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UserLoginStatusChangedCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_PlatformType_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_LocalPlatformUserId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_AccountId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_ProductUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_PreviousLoginStatus_k__BackingField", ty: "::Epic::OnlineServices::LoginStatus", modifiers: "", def_value: None }, CppParam { name: "_CurrentLoginStatus_k__BackingField", ty: "::Epic::OnlineServices::LoginStatus", modifiers: "", def_value: None }]
constexpr UserLoginStatusChangedCallbackInfo(::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::Utf8String*  _PlatformType_k__BackingField, ::Epic::OnlineServices::Utf8String*  _LocalPlatformUserId_k__BackingField, ::Epic::OnlineServices::EpicAccountId*  _AccountId_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _ProductUserId_k__BackingField, ::Epic::OnlineServices::LoginStatus  _PreviousLoginStatus_k__BackingField, ::Epic::OnlineServices::LoginStatus  _CurrentLoginStatus_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8823};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <ClientData>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <PlatformType>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _PlatformType_k__BackingField;

/// @brief Field <LocalPlatformUserId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _LocalPlatformUserId_k__BackingField;

/// @brief Field <AccountId>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _AccountId_k__BackingField;

/// @brief Field <ProductUserId>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _ProductUserId_k__BackingField;

/// @brief Field <PreviousLoginStatus>k__BackingField, offset: 0x28, size: 0x4, def value: None
 ::Epic::OnlineServices::LoginStatus  _PreviousLoginStatus_k__BackingField;

/// @brief Field <CurrentLoginStatus>k__BackingField, offset: 0x2c, size: 0x4, def value: None
 ::Epic::OnlineServices::LoginStatus  _CurrentLoginStatus_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo, _ClientData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo, _PlatformType_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo, _LocalPlatformUserId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo, _AccountId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo, _ProductUserId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo, _PreviousLoginStatus_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo, _CurrentLoginStatus_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::IntegratedPlatform

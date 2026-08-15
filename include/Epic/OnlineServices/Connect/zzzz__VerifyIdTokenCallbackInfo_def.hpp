#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/VerifyIdTokenCallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__ExternalAccountType_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VerifyIdTokenCallbackInfo)
namespace Epic::OnlineServices {
struct ExternalAccountType;
}
namespace Epic::OnlineServices {
class ICallbackInfo;
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
namespace Epic::OnlineServices::Connect {
struct VerifyIdTokenCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfo, "Epic.OnlineServices.Connect", "VerifyIdTokenCallbackInfo");
// Dependencies Epic.OnlineServices.ExternalAccountType, Epic.OnlineServices.Result
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.VerifyIdTokenCallbackInfo
struct CORDL_TYPE VerifyIdTokenCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_AccountId, put=set_AccountId)) ::Epic::OnlineServices::Utf8String*  AccountId;

 __declspec(property(get=get_AccountIdType, put=set_AccountIdType)) ::Epic::OnlineServices::ExternalAccountType  AccountIdType;

 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_ClientId, put=set_ClientId)) ::Epic::OnlineServices::Utf8String*  ClientId;

 __declspec(property(get=get_DeploymentId, put=set_DeploymentId)) ::Epic::OnlineServices::Utf8String*  DeploymentId;

 __declspec(property(get=get_DeviceType, put=set_DeviceType)) ::Epic::OnlineServices::Utf8String*  DeviceType;

 __declspec(property(get=get_IsAccountInfoPresent, put=set_IsAccountInfoPresent)) bool  IsAccountInfoPresent;

 __declspec(property(get=get_Platform, put=set_Platform)) ::Epic::OnlineServices::Utf8String*  Platform;

 __declspec(property(get=get_ProductId, put=set_ProductId)) ::Epic::OnlineServices::Utf8String*  ProductId;

 __declspec(property(get=get_ProductUserId, put=set_ProductUserId)) ::Epic::OnlineServices::ProductUserId*  ProductUserId;

 __declspec(property(get=get_ResultCode, put=set_ResultCode)) ::Epic::OnlineServices::Result  ResultCode;

 __declspec(property(get=get_SandboxId, put=set_SandboxId)) ::Epic::OnlineServices::Utf8String*  SandboxId;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803ed930, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1804d84b0, size 0xa0, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_AccountId, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_AccountId() ;

/// @brief Method get_AccountIdType, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ExternalAccountType get_AccountIdType() ;

/// @brief Method get_ClientData, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_ClientId, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ClientId() ;

/// @brief Method get_DeploymentId, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_DeploymentId() ;

/// @brief Method get_DeviceType, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_DeviceType() ;

/// @brief Method get_IsAccountInfoPresent, addr 0x18037a0f0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsAccountInfoPresent() ;

/// @brief Method get_Platform, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Platform() ;

/// @brief Method get_ProductId, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ProductId() ;

/// @brief Method get_ProductUserId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_ProductUserId() ;

/// @brief Method get_ResultCode, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result get_ResultCode() ;

/// @brief Method get_SandboxId, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_SandboxId() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_AccountId, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_AccountId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_AccountIdType, addr 0x1802f43d0, size 0x10, virtual false, abstract: false, final false
inline void set_AccountIdType(::Epic::OnlineServices::ExternalAccountType  value) ;

/// @brief Method set_ClientData, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_ClientId, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void set_ClientId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_DeploymentId, addr 0x180308de0, size 0x10, virtual false, abstract: false, final false
inline void set_DeploymentId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_DeviceType, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_DeviceType(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_IsAccountInfoPresent, addr 0x1803a7530, size 0x10, virtual false, abstract: false, final false
inline void set_IsAccountInfoPresent(bool  value) ;

/// @brief Method set_Platform, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_Platform(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ProductId, addr 0x1802e5d90, size 0x10, virtual false, abstract: false, final false
inline void set_ProductId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ProductUserId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_ProductUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_ResultCode, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_ResultCode(::Epic::OnlineServices::Result  value) ;

/// @brief Method set_SandboxId, addr 0x1802e5e30, size 0x10, virtual false, abstract: false, final false
inline void set_SandboxId(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr VerifyIdTokenCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ResultCode_k__BackingField", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_ProductUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_IsAccountInfoPresent_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_AccountIdType_k__BackingField", ty: "::Epic::OnlineServices::ExternalAccountType", modifiers: "", def_value: None }, CppParam { name: "_AccountId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Platform_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_DeviceType_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ClientId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ProductId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_SandboxId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_DeploymentId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr VerifyIdTokenCallbackInfo(::Epic::OnlineServices::Result  _ResultCode_k__BackingField, ::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _ProductUserId_k__BackingField, bool  _IsAccountInfoPresent_k__BackingField, ::Epic::OnlineServices::ExternalAccountType  _AccountIdType_k__BackingField, ::Epic::OnlineServices::Utf8String*  _AccountId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Platform_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DeviceType_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ClientId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ProductId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _SandboxId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DeploymentId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9219};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <ResultCode>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  _ResultCode_k__BackingField;

/// @brief Field <ClientData>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <ProductUserId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _ProductUserId_k__BackingField;

/// @brief Field <IsAccountInfoPresent>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  _IsAccountInfoPresent_k__BackingField;

/// @brief Field <AccountIdType>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 ::Epic::OnlineServices::ExternalAccountType  _AccountIdType_k__BackingField;

/// @brief Field <AccountId>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _AccountId_k__BackingField;

/// @brief Field <Platform>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Platform_k__BackingField;

/// @brief Field <DeviceType>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _DeviceType_k__BackingField;

/// @brief Field <ClientId>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ClientId_k__BackingField;

/// @brief Field <ProductId>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ProductId_k__BackingField;

/// @brief Field <SandboxId>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _SandboxId_k__BackingField;

/// @brief Field <DeploymentId>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _DeploymentId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfo, _ResultCode_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfo, _ClientData_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfo, _ProductUserId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfo, _IsAccountInfoPresent_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfo, _AccountIdType_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfo, _AccountId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfo, _Platform_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfo, _DeviceType_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfo, _ClientId_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfo, _ProductId_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfo, _SandboxId_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfo, _DeploymentId_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfo) == 0x58, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect

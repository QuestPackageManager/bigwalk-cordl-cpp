#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/VerifyIdTokenCallbackInfo.hpp"
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
namespace Epic::OnlineServices::Auth {
struct VerifyIdTokenCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo, "Epic.OnlineServices.Auth", "VerifyIdTokenCallbackInfo");
// Dependencies Epic.OnlineServices.ExternalAccountType, Epic.OnlineServices.Result
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.VerifyIdTokenCallbackInfo
struct CORDL_TYPE VerifyIdTokenCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_ApplicationId, put=set_ApplicationId)) ::Epic::OnlineServices::Utf8String*  ApplicationId;

 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_ClientId, put=set_ClientId)) ::Epic::OnlineServices::Utf8String*  ClientId;

 __declspec(property(get=get_DeploymentId, put=set_DeploymentId)) ::Epic::OnlineServices::Utf8String*  DeploymentId;

 __declspec(property(get=get_DisplayName, put=set_DisplayName)) ::Epic::OnlineServices::Utf8String*  DisplayName;

 __declspec(property(get=get_ExternalAccountDisplayName, put=set_ExternalAccountDisplayName)) ::Epic::OnlineServices::Utf8String*  ExternalAccountDisplayName;

 __declspec(property(get=get_ExternalAccountId, put=set_ExternalAccountId)) ::Epic::OnlineServices::Utf8String*  ExternalAccountId;

 __declspec(property(get=get_ExternalAccountIdType, put=set_ExternalAccountIdType)) ::Epic::OnlineServices::ExternalAccountType  ExternalAccountIdType;

 __declspec(property(get=get_IsExternalAccountInfoPresent, put=set_IsExternalAccountInfoPresent)) bool  IsExternalAccountInfoPresent;

 __declspec(property(get=get_Platform, put=set_Platform)) ::Epic::OnlineServices::Utf8String*  Platform;

 __declspec(property(get=get_ProductId, put=set_ProductId)) ::Epic::OnlineServices::Utf8String*  ProductId;

 __declspec(property(get=get_ResultCode, put=set_ResultCode)) ::Epic::OnlineServices::Result  ResultCode;

 __declspec(property(get=get_SandboxId, put=set_SandboxId)) ::Epic::OnlineServices::Utf8String*  SandboxId;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803ed930, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1804d84b0, size 0xa0, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_ApplicationId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ApplicationId() ;

/// @brief Method get_ClientData, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_ClientId, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ClientId() ;

/// @brief Method get_DeploymentId, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_DeploymentId() ;

/// @brief Method get_DisplayName, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_DisplayName() ;

/// @brief Method get_ExternalAccountDisplayName, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ExternalAccountDisplayName() ;

/// @brief Method get_ExternalAccountId, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ExternalAccountId() ;

/// @brief Method get_ExternalAccountIdType, addr 0x180511540, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ExternalAccountType get_ExternalAccountIdType() ;

/// @brief Method get_IsExternalAccountInfoPresent, addr 0x180391c90, size 0x10, virtual false, abstract: false, final false
inline bool get_IsExternalAccountInfoPresent() ;

/// @brief Method get_Platform, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Platform() ;

/// @brief Method get_ProductId, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ProductId() ;

/// @brief Method get_ResultCode, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result get_ResultCode() ;

/// @brief Method get_SandboxId, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_SandboxId() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_ApplicationId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_ApplicationId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ClientData, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_ClientId, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_ClientId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_DeploymentId, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_DeploymentId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_DisplayName, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void set_DisplayName(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ExternalAccountDisplayName, addr 0x180308de0, size 0x10, virtual false, abstract: false, final false
inline void set_ExternalAccountDisplayName(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ExternalAccountId, addr 0x1802e5e30, size 0x10, virtual false, abstract: false, final false
inline void set_ExternalAccountId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ExternalAccountIdType, addr 0x180511580, size 0x10, virtual false, abstract: false, final false
inline void set_ExternalAccountIdType(::Epic::OnlineServices::ExternalAccountType  value) ;

/// @brief Method set_IsExternalAccountInfoPresent, addr 0x180391cb0, size 0x10, virtual false, abstract: false, final false
inline void set_IsExternalAccountInfoPresent(bool  value) ;

/// @brief Method set_Platform, addr 0x1802f8080, size 0x10, virtual false, abstract: false, final false
inline void set_Platform(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ProductId, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_ProductId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ResultCode, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_ResultCode(::Epic::OnlineServices::Result  value) ;

/// @brief Method set_SandboxId, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_SandboxId(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr VerifyIdTokenCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ResultCode_k__BackingField", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_ApplicationId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ClientId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ProductId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_SandboxId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_DeploymentId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_DisplayName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_IsExternalAccountInfoPresent_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_ExternalAccountIdType_k__BackingField", ty: "::Epic::OnlineServices::ExternalAccountType", modifiers: "", def_value: None }, CppParam { name: "_ExternalAccountId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ExternalAccountDisplayName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Platform_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr VerifyIdTokenCallbackInfo(::Epic::OnlineServices::Result  _ResultCode_k__BackingField, ::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ApplicationId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ClientId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ProductId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _SandboxId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DeploymentId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DisplayName_k__BackingField, bool  _IsExternalAccountInfoPresent_k__BackingField, ::Epic::OnlineServices::ExternalAccountType  _ExternalAccountIdType_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ExternalAccountId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ExternalAccountDisplayName_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Platform_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9291};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <ResultCode>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  _ResultCode_k__BackingField;

/// @brief Field <ClientData>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <ApplicationId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ApplicationId_k__BackingField;

/// @brief Field <ClientId>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ClientId_k__BackingField;

/// @brief Field <ProductId>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ProductId_k__BackingField;

/// @brief Field <SandboxId>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _SandboxId_k__BackingField;

/// @brief Field <DeploymentId>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _DeploymentId_k__BackingField;

/// @brief Field <DisplayName>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _DisplayName_k__BackingField;

/// @brief Field <IsExternalAccountInfoPresent>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  _IsExternalAccountInfoPresent_k__BackingField;

/// @brief Field <ExternalAccountIdType>k__BackingField, offset: 0x44, size: 0x4, def value: None
 ::Epic::OnlineServices::ExternalAccountType  _ExternalAccountIdType_k__BackingField;

/// @brief Field <ExternalAccountId>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ExternalAccountId_k__BackingField;

/// @brief Field <ExternalAccountDisplayName>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ExternalAccountDisplayName_k__BackingField;

/// @brief Field <Platform>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Platform_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo, _ResultCode_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo, _ClientData_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo, _ApplicationId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo, _ClientId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo, _ProductId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo, _SandboxId_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo, _DeploymentId_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo, _DisplayName_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo, _IsExternalAccountInfoPresent_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo, _ExternalAccountIdType_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo, _ExternalAccountId_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo, _ExternalAccountDisplayName_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo, _Platform_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfo) == 0x60, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth

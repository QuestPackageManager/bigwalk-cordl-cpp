#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/LoginCallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Auth/zzzz__AccountFeatureRestrictedInfo_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__PinGrantInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LoginCallbackInfo)
namespace Epic::OnlineServices::Auth {
struct AccountFeatureRestrictedInfo;
}
namespace Epic::OnlineServices::Auth {
struct PinGrantInfo;
}
namespace Epic::OnlineServices {
class ContinuanceToken;
}
namespace Epic::OnlineServices {
class EpicAccountId;
}
namespace Epic::OnlineServices {
class ICallbackInfo;
}
namespace Epic::OnlineServices {
struct Result;
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
struct LoginCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::LoginCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::LoginCallbackInfo, "Epic.OnlineServices.Auth", "LoginCallbackInfo");
// Dependencies Epic.OnlineServices.Auth.AccountFeatureRestrictedInfo, Epic.OnlineServices.Auth.PinGrantInfo, Epic.OnlineServices.Result, System.Nullable`1<T>
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.LoginCallbackInfo
struct CORDL_TYPE LoginCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_AccountFeatureRestrictedInfo_DEPRECATED, put=set_AccountFeatureRestrictedInfo_DEPRECATED)) ::System::Nullable_1<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo>  AccountFeatureRestrictedInfo_DEPRECATED;

 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_ContinuanceToken, put=set_ContinuanceToken)) ::Epic::OnlineServices::ContinuanceToken*  ContinuanceToken;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::EpicAccountId*  LocalUserId;

 __declspec(property(get=get_PinGrantInfo, put=set_PinGrantInfo)) ::System::Nullable_1<::Epic::OnlineServices::Auth::PinGrantInfo>  PinGrantInfo;

 __declspec(property(get=get_ResultCode, put=set_ResultCode)) ::Epic::OnlineServices::Result  ResultCode;

 __declspec(property(get=get_SelectedAccountId, put=set_SelectedAccountId)) ::Epic::OnlineServices::EpicAccountId*  SelectedAccountId;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803ed930, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1804d84b0, size 0xa0, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_AccountFeatureRestrictedInfo_DEPRECATED, addr 0x18051ea30, size 0x10, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo> get_AccountFeatureRestrictedInfo_DEPRECATED() ;

/// @brief Method get_ClientData, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_ContinuanceToken, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ContinuanceToken* get_ContinuanceToken() ;

/// @brief Method get_LocalUserId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_LocalUserId() ;

/// @brief Method get_PinGrantInfo, addr 0x1804e6790, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::Auth::PinGrantInfo> get_PinGrantInfo() ;

/// @brief Method get_ResultCode, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result get_ResultCode() ;

/// @brief Method get_SelectedAccountId, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_SelectedAccountId() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_AccountFeatureRestrictedInfo_DEPRECATED, addr 0x18051ea40, size 0x20, virtual false, abstract: false, final false
inline void set_AccountFeatureRestrictedInfo_DEPRECATED(::System::Nullable_1<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo>  value) ;

/// @brief Method set_ClientData, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_ContinuanceToken, addr 0x1802e5d90, size 0x10, virtual false, abstract: false, final false
inline void set_ContinuanceToken(::Epic::OnlineServices::ContinuanceToken*  value) ;

/// @brief Method set_LocalUserId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

/// @brief Method set_PinGrantInfo, addr 0x1804e67b0, size 0x30, virtual false, abstract: false, final false
inline void set_PinGrantInfo(::System::Nullable_1<::Epic::OnlineServices::Auth::PinGrantInfo>  value) ;

/// @brief Method set_ResultCode, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_ResultCode(::Epic::OnlineServices::Result  value) ;

/// @brief Method set_SelectedAccountId, addr 0x1802f8080, size 0x10, virtual false, abstract: false, final false
inline void set_SelectedAccountId(::Epic::OnlineServices::EpicAccountId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LoginCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ResultCode_k__BackingField", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_PinGrantInfo_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Auth::PinGrantInfo>", modifiers: "", def_value: None }, CppParam { name: "_ContinuanceToken_k__BackingField", ty: "::Epic::OnlineServices::ContinuanceToken*", modifiers: "", def_value: None }, CppParam { name: "_AccountFeatureRestrictedInfo_DEPRECATED_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo>", modifiers: "", def_value: None }, CppParam { name: "_SelectedAccountId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }]
constexpr LoginCallbackInfo(::Epic::OnlineServices::Result  _ResultCode_k__BackingField, ::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::Auth::PinGrantInfo>  _PinGrantInfo_k__BackingField, ::Epic::OnlineServices::ContinuanceToken*  _ContinuanceToken_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo>  _AccountFeatureRestrictedInfo_DEPRECATED_k__BackingField, ::Epic::OnlineServices::EpicAccountId*  _SelectedAccountId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9247};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <ResultCode>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  _ResultCode_k__BackingField;

/// @brief Field <ClientData>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <LocalUserId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField;

/// @brief Field <PinGrantInfo>k__BackingField, offset: 0x18, size: 0x28, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::Auth::PinGrantInfo>  _PinGrantInfo_k__BackingField;

/// @brief Field <ContinuanceToken>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::Epic::OnlineServices::ContinuanceToken*  _ContinuanceToken_k__BackingField;

/// @brief Field <AccountFeatureRestrictedInfo_DEPRECATED>k__BackingField, offset: 0x48, size: 0x10, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo>  _AccountFeatureRestrictedInfo_DEPRECATED_k__BackingField;

/// @brief Field <SelectedAccountId>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _SelectedAccountId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::LoginCallbackInfo, _ResultCode_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::LoginCallbackInfo, _ClientData_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::LoginCallbackInfo, _LocalUserId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::LoginCallbackInfo, _PinGrantInfo_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::LoginCallbackInfo, _ContinuanceToken_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::LoginCallbackInfo, _AccountFeatureRestrictedInfo_DEPRECATED_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::LoginCallbackInfo, _SelectedAccountId_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::LoginCallbackInfo) == 0x60, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth

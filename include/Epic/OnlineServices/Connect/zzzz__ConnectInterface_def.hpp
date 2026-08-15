#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/ConnectInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectInterface)
namespace Epic::OnlineServices::Connect {
struct AddNotifyAuthExpirationOptions;
}
namespace Epic::OnlineServices::Connect {
struct AddNotifyLoginStatusChangedOptions;
}
namespace Epic::OnlineServices::Connect {
struct CopyIdTokenOptions;
}
namespace Epic::OnlineServices::Connect {
struct CopyProductUserExternalAccountByAccountIdOptions;
}
namespace Epic::OnlineServices::Connect {
struct CopyProductUserExternalAccountByAccountTypeOptions;
}
namespace Epic::OnlineServices::Connect {
struct CopyProductUserExternalAccountByIndexOptions;
}
namespace Epic::OnlineServices::Connect {
struct CopyProductUserInfoOptions;
}
namespace Epic::OnlineServices::Connect {
struct CreateDeviceIdOptions;
}
namespace Epic::OnlineServices::Connect {
struct CreateUserOptions;
}
namespace Epic::OnlineServices::Connect {
struct DeleteDeviceIdOptions;
}
namespace Epic::OnlineServices::Connect {
struct ExternalAccountInfo;
}
namespace Epic::OnlineServices::Connect {
struct GetExternalAccountMappingsOptions;
}
namespace Epic::OnlineServices::Connect {
struct GetProductUserExternalAccountCountOptions;
}
namespace Epic::OnlineServices::Connect {
struct GetProductUserIdMappingOptions;
}
namespace Epic::OnlineServices::Connect {
struct IdToken;
}
namespace Epic::OnlineServices::Connect {
struct LinkAccountOptions;
}
namespace Epic::OnlineServices::Connect {
struct LoginOptions;
}
namespace Epic::OnlineServices::Connect {
struct LogoutOptions;
}
namespace Epic::OnlineServices::Connect {
class OnAuthExpirationCallback;
}
namespace Epic::OnlineServices::Connect {
class OnCreateDeviceIdCallback;
}
namespace Epic::OnlineServices::Connect {
class OnCreateUserCallback;
}
namespace Epic::OnlineServices::Connect {
class OnDeleteDeviceIdCallback;
}
namespace Epic::OnlineServices::Connect {
class OnLinkAccountCallback;
}
namespace Epic::OnlineServices::Connect {
class OnLoginCallback;
}
namespace Epic::OnlineServices::Connect {
class OnLoginStatusChangedCallback;
}
namespace Epic::OnlineServices::Connect {
class OnLogoutCallback;
}
namespace Epic::OnlineServices::Connect {
class OnQueryExternalAccountMappingsCallback;
}
namespace Epic::OnlineServices::Connect {
class OnQueryProductUserIdMappingsCallback;
}
namespace Epic::OnlineServices::Connect {
class OnTransferDeviceIdAccountCallback;
}
namespace Epic::OnlineServices::Connect {
class OnUnlinkAccountCallback;
}
namespace Epic::OnlineServices::Connect {
class OnVerifyIdTokenCallback;
}
namespace Epic::OnlineServices::Connect {
struct QueryExternalAccountMappingsOptions;
}
namespace Epic::OnlineServices::Connect {
struct QueryProductUserIdMappingsOptions;
}
namespace Epic::OnlineServices::Connect {
struct TransferDeviceIdAccountOptions;
}
namespace Epic::OnlineServices::Connect {
struct UnlinkAccountOptions;
}
namespace Epic::OnlineServices::Connect {
struct VerifyIdTokenOptions;
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
struct IntPtr;
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
class ConnectInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Connect::ConnectInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::ConnectInterface*, "Epic.OnlineServices.Connect", "ConnectInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::Connect {
// Is value type: false
// CS Name: Epic.OnlineServices.Connect.ConnectInterface
class CORDL_TYPE ConnectInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method AddNotifyAuthExpiration, addr 0x180521f10, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifyAuthExpiration(::by_ref<::Epic::OnlineServices::Connect::AddNotifyAuthExpirationOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnAuthExpirationCallback*  notification) ;

/// @brief Method AddNotifyLoginStatusChanged, addr 0x180522100, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifyLoginStatusChanged(::by_ref<::Epic::OnlineServices::Connect::AddNotifyLoginStatusChangedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnLoginStatusChangedCallback*  notification) ;

/// @brief Method CopyIdToken, addr 0x1805222f0, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyIdToken(::by_ref<::Epic::OnlineServices::Connect::CopyIdTokenOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Connect::IdToken>>  outIdToken) ;

/// @brief Method CopyProductUserExternalAccountByAccountId, addr 0x1805223b0, size 0xe0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyProductUserExternalAccountByAccountId(::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>>  outExternalAccountInfo) ;

/// @brief Method CopyProductUserExternalAccountByAccountType, addr 0x180522490, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyProductUserExternalAccountByAccountType(::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>>  outExternalAccountInfo) ;

/// @brief Method CopyProductUserExternalAccountByIndex, addr 0x180522550, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyProductUserExternalAccountByIndex(::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>>  outExternalAccountInfo) ;

/// @brief Method CopyProductUserInfo, addr 0x180522610, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyProductUserInfo(::by_ref<::Epic::OnlineServices::Connect::CopyProductUserInfoOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>>  outExternalAccountInfo) ;

/// @brief Method CreateDeviceId, addr 0x1805226d0, size 0x200, virtual false, abstract: false, final false
inline void CreateDeviceId(::by_ref<::Epic::OnlineServices::Connect::CreateDeviceIdOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnCreateDeviceIdCallback*  completionDelegate) ;

/// @brief Method CreateUser, addr 0x1805228d0, size 0x200, virtual false, abstract: false, final false
inline void CreateUser(::by_ref<::Epic::OnlineServices::Connect::CreateUserOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnCreateUserCallback*  completionDelegate) ;

/// @brief Method DeleteDeviceId, addr 0x180522ad0, size 0x1d0, virtual false, abstract: false, final false
inline void DeleteDeviceId(::by_ref<::Epic::OnlineServices::Connect::DeleteDeviceIdOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallback*  completionDelegate) ;

/// @brief Method GetExternalAccountMapping, addr 0x180522ca0, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* GetExternalAccountMapping(::by_ref<::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptions>  options) ;

/// @brief Method GetLoggedInUserByIndex, addr 0x180522d60, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* GetLoggedInUserByIndex(int32_t  index) ;

/// @brief Method GetLoggedInUsersCount, addr 0x180522da0, size 0x10, virtual false, abstract: false, final false
inline int32_t GetLoggedInUsersCount() ;

/// @brief Method GetLoginStatus, addr 0x180522db0, size 0x30, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::LoginStatus GetLoginStatus(::Epic::OnlineServices::ProductUserId*  localUserId) ;

/// @brief Method GetProductUserExternalAccountCount, addr 0x180522de0, size 0x70, virtual false, abstract: false, final false
inline uint32_t GetProductUserExternalAccountCount(::by_ref<::Epic::OnlineServices::Connect::GetProductUserExternalAccountCountOptions>  options) ;

/// @brief Method GetProductUserIdMapping, addr 0x180522e50, size 0xf0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result GetProductUserIdMapping(::by_ref<::Epic::OnlineServices::Connect::GetProductUserIdMappingOptions>  options, ::by_ref<::Epic::OnlineServices::Utf8String*>  outBuffer) ;

/// @brief Method LinkAccount, addr 0x180522f40, size 0x230, virtual false, abstract: false, final false
inline void LinkAccount(::by_ref<::Epic::OnlineServices::Connect::LinkAccountOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnLinkAccountCallback*  completionDelegate) ;

/// @brief Method Login, addr 0x180523170, size 0x270, virtual false, abstract: false, final false
inline void Login(::by_ref<::Epic::OnlineServices::Connect::LoginOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnLoginCallback*  completionDelegate) ;

/// @brief Method Logout, addr 0x1805233e0, size 0x200, virtual false, abstract: false, final false
inline void Logout(::by_ref<::Epic::OnlineServices::Connect::LogoutOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnLogoutCallback*  completionDelegate) ;

static inline ::Epic::OnlineServices::Connect::ConnectInterface* New_ctor() ;

static inline ::Epic::OnlineServices::Connect::ConnectInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method QueryExternalAccountMappings, addr 0x1805235e0, size 0x250, virtual false, abstract: false, final false
inline void QueryExternalAccountMappings(::by_ref<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallback*  completionDelegate) ;

/// @brief Method QueryProductUserIdMappings, addr 0x180523830, size 0x250, virtual false, abstract: false, final false
inline void QueryProductUserIdMappings(::by_ref<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallback*  completionDelegate) ;

/// @brief Method RemoveNotifyAuthExpiration, addr 0x180523a80, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyAuthExpiration(uint64_t  inId) ;

/// @brief Method RemoveNotifyLoginStatusChanged, addr 0x180523ab0, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyLoginStatusChanged(uint64_t  inId) ;

/// @brief Method TransferDeviceIdAccount, addr 0x180523ae0, size 0x250, virtual false, abstract: false, final false
inline void TransferDeviceIdAccount(::by_ref<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallback*  completionDelegate) ;

/// @brief Method UnlinkAccount, addr 0x180523d30, size 0x200, virtual false, abstract: false, final false
inline void UnlinkAccount(::by_ref<::Epic::OnlineServices::Connect::UnlinkAccountOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnUnlinkAccountCallback*  completionDelegate) ;

/// @brief Method VerifyIdToken, addr 0x180523f30, size 0x3e0, virtual false, abstract: false, final false
inline void VerifyIdToken(::by_ref<::Epic::OnlineServices::Connect::VerifyIdTokenOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnVerifyIdTokenCallback*  completionDelegate) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConnectInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConnectInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConnectInterface(ConnectInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConnectInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConnectInterface(ConnectInterface const& ) = delete;

/// @brief Field ADDNOTIFYAUTHEXPIRATION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYAUTHEXPIRATION_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYLOGINSTATUSCHANGED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYLOGINSTATUSCHANGED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYIDTOKEN_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYIDTOKEN_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTID_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTTYPE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYPRODUCTUSEREXTERNALACCOUNTBYACCOUNTTYPE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYPRODUCTUSEREXTERNALACCOUNTBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYPRODUCTUSEREXTERNALACCOUNTBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYPRODUCTUSERINFO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYPRODUCTUSERINFO_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field CREATEDEVICEID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  CREATEDEVICEID_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field CREATEDEVICEID_DEVICEMODEL_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  CREATEDEVICEID_DEVICEMODEL_MAX_LENGTH{static_cast<int32_t>(0x40)};

/// @brief Field CREATEUSER_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  CREATEUSER_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field CREDENTIALS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  CREDENTIALS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field DELETEDEVICEID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  DELETEDEVICEID_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field EXTERNALACCOUNTINFO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  EXTERNALACCOUNTINFO_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field EXTERNAL_ACCOUNT_ID_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  EXTERNAL_ACCOUNT_ID_MAX_LENGTH{static_cast<int32_t>(0x100)};

/// @brief Field GETEXTERNALACCOUNTMAPPINGS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETEXTERNALACCOUNTMAPPINGS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETEXTERNALACCOUNTMAPPING_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETEXTERNALACCOUNTMAPPING_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETPRODUCTUSEREXTERNALACCOUNTCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETPRODUCTUSEREXTERNALACCOUNTCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETPRODUCTUSERIDMAPPING_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETPRODUCTUSERIDMAPPING_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field IDTOKEN_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  IDTOKEN_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LINKACCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LINKACCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOGIN_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOGIN_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field LOGOUT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOGOUT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field QUERYEXTERNALACCOUNTMAPPINGS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYEXTERNALACCOUNTMAPPINGS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field QUERYEXTERNALACCOUNTMAPPINGS_MAX_ACCOUNT_IDS offset 0xffffffff size 0x4
static constexpr int32_t  QUERYEXTERNALACCOUNTMAPPINGS_MAX_ACCOUNT_IDS{static_cast<int32_t>(0x80)};

/// @brief Field QUERYPRODUCTUSERIDMAPPINGS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYPRODUCTUSERIDMAPPINGS_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field TIME_UNDEFINED offset 0xffffffff size 0x4
static constexpr int32_t  TIME_UNDEFINED{static_cast<int32_t>(0xffffffff)};

/// @brief Field TRANSFERDEVICEIDACCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  TRANSFERDEVICEIDACCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field UNLINKACCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  UNLINKACCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field USERLOGININFO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  USERLOGININFO_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field USERLOGININFO_DISPLAYNAME_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  USERLOGININFO_DISPLAYNAME_MAX_LENGTH{static_cast<int32_t>(0x20)};

/// @brief Field VERIFYIDTOKEN_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  VERIFYIDTOKEN_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9113};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Connect::ConnectInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect

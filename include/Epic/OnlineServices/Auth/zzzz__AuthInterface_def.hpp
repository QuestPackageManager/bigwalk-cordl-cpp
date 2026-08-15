#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/AuthInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AuthInterface)
namespace Epic::OnlineServices::Auth {
struct AddNotifyLoginStatusChangedOptions;
}
namespace Epic::OnlineServices::Auth {
struct CopyIdTokenOptions;
}
namespace Epic::OnlineServices::Auth {
struct CopyUserAuthTokenOptions;
}
namespace Epic::OnlineServices::Auth {
struct DeletePersistentAuthOptions;
}
namespace Epic::OnlineServices::Auth {
struct IdToken;
}
namespace Epic::OnlineServices::Auth {
struct LinkAccountOptions;
}
namespace Epic::OnlineServices::Auth {
struct LoginOptions;
}
namespace Epic::OnlineServices::Auth {
struct LogoutOptions;
}
namespace Epic::OnlineServices::Auth {
class OnDeletePersistentAuthCallback;
}
namespace Epic::OnlineServices::Auth {
class OnLinkAccountCallback;
}
namespace Epic::OnlineServices::Auth {
class OnLoginCallback;
}
namespace Epic::OnlineServices::Auth {
class OnLoginStatusChangedCallback;
}
namespace Epic::OnlineServices::Auth {
class OnLogoutCallback;
}
namespace Epic::OnlineServices::Auth {
class OnQueryIdTokenCallback;
}
namespace Epic::OnlineServices::Auth {
class OnVerifyIdTokenCallback;
}
namespace Epic::OnlineServices::Auth {
class OnVerifyUserAuthCallback;
}
namespace Epic::OnlineServices::Auth {
struct QueryIdTokenOptions;
}
namespace Epic::OnlineServices::Auth {
struct Token;
}
namespace Epic::OnlineServices::Auth {
struct VerifyIdTokenOptions;
}
namespace Epic::OnlineServices::Auth {
struct VerifyUserAuthOptions;
}
namespace Epic::OnlineServices {
class EpicAccountId;
}
namespace Epic::OnlineServices {
struct LoginStatus;
}
namespace Epic::OnlineServices {
struct Result;
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
namespace Epic::OnlineServices::Auth {
class AuthInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Auth::AuthInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::AuthInterface*, "Epic.OnlineServices.Auth", "AuthInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::Auth {
// Is value type: false
// CS Name: Epic.OnlineServices.Auth.AuthInterface
class CORDL_TYPE AuthInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method AddNotifyLoginStatusChanged, addr 0x180520a40, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifyLoginStatusChanged(::by_ref<::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Auth::OnLoginStatusChangedCallback*  notification) ;

/// @brief Method CopyIdToken, addr 0x180520c30, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyIdToken(::by_ref<::Epic::OnlineServices::Auth::CopyIdTokenOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Auth::IdToken>>  outIdToken) ;

/// @brief Method CopyUserAuthToken, addr 0x180520cf0, size 0x90, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyUserAuthToken(::by_ref<::Epic::OnlineServices::Auth::CopyUserAuthTokenOptions>  options, ::Epic::OnlineServices::EpicAccountId*  localUserId, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Auth::Token>>  outUserAuthToken) ;

/// @brief Method DeletePersistentAuth, addr 0x180520d80, size 0x200, virtual false, abstract: false, final false
inline void DeletePersistentAuth(::by_ref<::Epic::OnlineServices::Auth::DeletePersistentAuthOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallback*  completionDelegate) ;

/// @brief Method GetLoggedInAccountByIndex, addr 0x180520f80, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* GetLoggedInAccountByIndex(int32_t  index) ;

/// @brief Method GetLoggedInAccountsCount, addr 0x180520fc0, size 0x10, virtual false, abstract: false, final false
inline int32_t GetLoggedInAccountsCount() ;

/// @brief Method GetLoginStatus, addr 0x180520fd0, size 0x30, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::LoginStatus GetLoginStatus(::Epic::OnlineServices::EpicAccountId*  localUserId) ;

/// @brief Method GetMergedAccountByIndex, addr 0x180521000, size 0x50, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* GetMergedAccountByIndex(::Epic::OnlineServices::EpicAccountId*  localUserId, uint32_t  index) ;

/// @brief Method GetMergedAccountsCount, addr 0x180521050, size 0x30, virtual false, abstract: false, final false
inline uint32_t GetMergedAccountsCount(::Epic::OnlineServices::EpicAccountId*  localUserId) ;

/// @brief Method GetSelectedAccountId, addr 0x180521080, size 0x60, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result GetSelectedAccountId(::Epic::OnlineServices::EpicAccountId*  localUserId, ::by_ref<::Epic::OnlineServices::EpicAccountId*>  outSelectedAccountId) ;

/// @brief Method LinkAccount, addr 0x1805210e0, size 0x240, virtual false, abstract: false, final false
inline void LinkAccount(::by_ref<::Epic::OnlineServices::Auth::LinkAccountOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Auth::OnLinkAccountCallback*  completionDelegate) ;

/// @brief Method Login, addr 0x180521320, size 0x250, virtual false, abstract: false, final false
inline void Login(::by_ref<::Epic::OnlineServices::Auth::LoginOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Auth::OnLoginCallback*  completionDelegate) ;

/// @brief Method Logout, addr 0x180521570, size 0x200, virtual false, abstract: false, final false
inline void Logout(::by_ref<::Epic::OnlineServices::Auth::LogoutOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Auth::OnLogoutCallback*  completionDelegate) ;

static inline ::Epic::OnlineServices::Auth::AuthInterface* New_ctor() ;

static inline ::Epic::OnlineServices::Auth::AuthInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method QueryIdToken, addr 0x180521770, size 0x230, virtual false, abstract: false, final false
inline void QueryIdToken(::by_ref<::Epic::OnlineServices::Auth::QueryIdTokenOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Auth::OnQueryIdTokenCallback*  completionDelegate) ;

/// @brief Method RemoveNotifyLoginStatusChanged, addr 0x1805219a0, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyLoginStatusChanged(uint64_t  inId) ;

/// @brief Method VerifyIdToken, addr 0x1805219d0, size 0x230, virtual false, abstract: false, final false
inline void VerifyIdToken(::by_ref<::Epic::OnlineServices::Auth::VerifyIdTokenOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Auth::OnVerifyIdTokenCallback*  completionDelegate) ;

/// @brief Method VerifyUserAuth, addr 0x180521c00, size 0x260, virtual false, abstract: false, final false
inline void VerifyUserAuth(::by_ref<::Epic::OnlineServices::Auth::VerifyUserAuthOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Auth::OnVerifyUserAuthCallback*  completionDelegate) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthInterface(AuthInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthInterface(AuthInterface const& ) = delete;

/// @brief Field ACCOUNTFEATURERESTRICTEDINFO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ACCOUNTFEATURERESTRICTEDINFO_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYLOGINSTATUSCHANGED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYLOGINSTATUSCHANGED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYIDTOKEN_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYIDTOKEN_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYUSERAUTHTOKEN_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYUSERAUTHTOKEN_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field CREDENTIALS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  CREDENTIALS_API_LATEST{static_cast<int32_t>(0x4)};

/// @brief Field DELETEPERSISTENTAUTH_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  DELETEPERSISTENTAUTH_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field IDTOKEN_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  IDTOKEN_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LINKACCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LINKACCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LOGIN_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOGIN_API_LATEST{static_cast<int32_t>(0x3)};

/// @brief Field LOGOUT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LOGOUT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field PINGRANTINFO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  PINGRANTINFO_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field QUERYIDTOKEN_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYIDTOKEN_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field TOKEN_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  TOKEN_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field VERIFYIDTOKEN_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  VERIFYIDTOKEN_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field VERIFYUSERAUTH_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  VERIFYUSERAUTH_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9227};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Auth::AuthInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth

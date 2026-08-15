#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/AuthenticationListener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AuthenticationListener)
namespace Epic::OnlineServices::Auth {
struct LoginCallbackInfo;
}
namespace Epic::OnlineServices::Auth {
struct LogoutCallbackInfo;
}
namespace Epic::OnlineServices::Connect {
struct LoginCallbackInfo;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace PlayEveryWare::EpicOnlineServices {
class AuthenticationListener_AuthenticationChangedEventHandler;
}
namespace PlayEveryWare::EpicOnlineServices {
struct AuthenticationListener_LoginChangeKind;
}
namespace PlayEveryWare::EpicOnlineServices {
class AuthenticationListener___c;
}
namespace PlayEveryWare::EpicOnlineServices {
class IAuthInterfaceEventListener;
}
namespace PlayEveryWare::EpicOnlineServices {
class IConnectInterfaceEventListener;
}
namespace PlayEveryWare::EpicOnlineServices {
class IEOSOnAuthLogin;
}
namespace PlayEveryWare::EpicOnlineServices {
class IEOSOnAuthLogout;
}
namespace PlayEveryWare::EpicOnlineServices {
class IEOSOnConnectLogin;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
class Lazy_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
struct AuthenticationListener_LoginChangeKind;
}
namespace PlayEveryWare::EpicOnlineServices {
class AuthenticationListener;
}
namespace PlayEveryWare::EpicOnlineServices {
class AuthenticationListener_AuthenticationChangedEventHandler;
}
namespace PlayEveryWare::EpicOnlineServices {
class AuthenticationListener___c;
}
// Write type traits
MARK_VAL_T(::PlayEveryWare::EpicOnlineServices::AuthenticationListener_LoginChangeKind);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::AuthenticationListener*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::AuthenticationListener_LoginChangeKind, "PlayEveryWare.EpicOnlineServices", "AuthenticationListener/LoginChangeKind");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::AuthenticationListener*, "PlayEveryWare.EpicOnlineServices", "AuthenticationListener");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*, "PlayEveryWare.EpicOnlineServices", "AuthenticationListener/AuthenticationChangedEventHandler");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c*, "PlayEveryWare.EpicOnlineServices", "AuthenticationListener/<>c");
// Dependencies 
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: true
// CS Name: PlayEveryWare.EpicOnlineServices.AuthenticationListener/LoginChangeKind
struct CORDL_TYPE AuthenticationListener_LoginChangeKind {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AuthenticationListener_LoginChangeKind_Unwrapped
enum struct __AuthenticationListener_LoginChangeKind_Unwrapped : int32_t {
__E_Auth = static_cast<int32_t>(0x0),
__E_Connect = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AuthenticationListener_LoginChangeKind_Unwrapped () const noexcept {
return static_cast<__AuthenticationListener_LoginChangeKind_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationListener_LoginChangeKind() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AuthenticationListener_LoginChangeKind(int32_t  value__) noexcept;

/// @brief Field Auth value: I32(0)
static ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_LoginChangeKind const Auth;

/// @brief Field Connect value: I32(1)
static ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_LoginChangeKind const Connect;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18807};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::AuthenticationListener_LoginChangeKind, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::AuthenticationListener_LoginChangeKind) == 0x4, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.MulticastDelegate
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.AuthenticationListener/AuthenticationChangedEventHandler
class CORDL_TYPE AuthenticationListener_AuthenticationChangedEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180535190, size 0x120, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(bool  authenticated, ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_LoginChangeKind  changeType, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1804f6ae0, size 0xc0, virtual true, abstract: false, final false
inline void Invoke(bool  authenticated, ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_LoginChangeKind  changeType) ;

static inline ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805352b0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationListener_AuthenticationChangedEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationListener_AuthenticationChangedEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationListener_AuthenticationChangedEventHandler(AuthenticationListener_AuthenticationChangedEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationListener_AuthenticationChangedEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationListener_AuthenticationChangedEventHandler(AuthenticationListener_AuthenticationChangedEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18808};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler) == 0x80, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.AuthenticationListener/<>c
class CORDL_TYPE AuthenticationListener___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c*  __9;

static inline ::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c* New_ctor() ;

/// @brief Method <.cctor>b__17_0, addr 0x180548e60, size 0x80, virtual false, abstract: false, final false
inline ::PlayEveryWare::EpicOnlineServices::AuthenticationListener* __cctor_b__17_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c* getStaticF___9() ;

static inline void setStaticF___9(::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationListener___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationListener___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationListener___c(AuthenticationListener___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationListener___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationListener___c(AuthenticationListener___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18809};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.Nullable`1<T>, System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.AuthenticationListener
class CORDL_TYPE AuthenticationListener : public ::System::Object {
public:
// Declarations
using AuthenticationChangedEventHandler = ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler;

using LoginChangeKind = ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_LoginChangeKind;

using __c = ::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c;

/// @brief Field AuthenticationChanged, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_AuthenticationChanged, put=__cordl_internal_set_AuthenticationChanged)) ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*  AuthenticationChanged;

 __declspec(property(get=get_IsAuthenticated)) bool  IsAuthenticated;

/// @brief Field _isAuthenticated, offset 0x18, size 0x2 
 __declspec(property(get=__cordl_internal_get__isAuthenticated, put=__cordl_internal_set__isAuthenticated)) ::System::Nullable_1<bool>  _isAuthenticated;

/// @brief Field s_LazyInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_LazyInstance, put=setStaticF_s_LazyInstance)) ::System::Lazy_1<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>*  s_LazyInstance;

/// @brief Convert operator to "::PlayEveryWare::EpicOnlineServices::IAuthInterfaceEventListener"
constexpr operator  ::PlayEveryWare::EpicOnlineServices::IAuthInterfaceEventListener*() noexcept;

/// @brief Convert operator to "::PlayEveryWare::EpicOnlineServices::IConnectInterfaceEventListener"
constexpr operator  ::PlayEveryWare::EpicOnlineServices::IConnectInterfaceEventListener*() noexcept;

/// @brief Convert operator to "::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin"
constexpr operator  ::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin*() noexcept;

/// @brief Convert operator to "::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout"
constexpr operator  ::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout*() noexcept;

/// @brief Convert operator to "::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin"
constexpr operator  ::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x180535360, size 0x70, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::PlayEveryWare::EpicOnlineServices::AuthenticationListener* New_ctor() ;

/// @brief Method OnAuthLogin, addr 0x1805353d0, size 0x20, virtual true, abstract: false, final true
inline void OnAuthLogin(::Epic::OnlineServices::Auth::LoginCallbackInfo  loginCallbackInfo) ;

/// @brief Method OnAuthLogout, addr 0x1805353f0, size 0x20, virtual true, abstract: false, final true
inline void OnAuthLogout(::Epic::OnlineServices::Auth::LogoutCallbackInfo  logoutCallbackInfo) ;

/// @brief Method OnConnectLogin, addr 0x180535410, size 0x30, virtual true, abstract: false, final true
inline void OnConnectLogin(::Epic::OnlineServices::Connect::LoginCallbackInfo  loginCallbackInfo) ;

/// @brief Method TriggerAuthenticationChangedEvent, addr 0x180535440, size 0xb0, virtual false, abstract: false, final false
inline void TriggerAuthenticationChangedEvent(bool  attemptedState, ::Epic::OnlineServices::Result  attemptResult, ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_LoginChangeKind  changeType) ;

constexpr ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler* const& __cordl_internal_get_AuthenticationChanged() const;

constexpr ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*& __cordl_internal_get_AuthenticationChanged() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__isAuthenticated() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get__isAuthenticated() ;

constexpr void __cordl_internal_set_AuthenticationChanged(::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*  value) ;

constexpr void __cordl_internal_set__isAuthenticated(::System::Nullable_1<bool>  value) ;

/// @brief Method .ctor, addr 0x1805355a0, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_AuthenticationChanged, addr 0x180535610, size 0x80, virtual false, abstract: false, final false
inline void add_AuthenticationChanged(::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*  value) ;

static inline ::System::Lazy_1<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>* getStaticF_s_LazyInstance() ;

/// @brief Method get_Instance, addr 0x180535690, size 0x50, virtual false, abstract: false, final false
static inline ::PlayEveryWare::EpicOnlineServices::AuthenticationListener* get_Instance() ;

/// @brief Method get_IsAuthenticated, addr 0x1805356e0, size 0x20, virtual false, abstract: false, final false
inline bool get_IsAuthenticated() ;

/// @brief Convert to "::PlayEveryWare::EpicOnlineServices::IAuthInterfaceEventListener"
constexpr ::PlayEveryWare::EpicOnlineServices::IAuthInterfaceEventListener* i___PlayEveryWare__EpicOnlineServices__IAuthInterfaceEventListener() noexcept;

/// @brief Convert to "::PlayEveryWare::EpicOnlineServices::IConnectInterfaceEventListener"
constexpr ::PlayEveryWare::EpicOnlineServices::IConnectInterfaceEventListener* i___PlayEveryWare__EpicOnlineServices__IConnectInterfaceEventListener() noexcept;

/// @brief Convert to "::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin"
constexpr ::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin* i___PlayEveryWare__EpicOnlineServices__IEOSOnAuthLogin() noexcept;

/// @brief Convert to "::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout"
constexpr ::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout* i___PlayEveryWare__EpicOnlineServices__IEOSOnAuthLogout() noexcept;

/// @brief Convert to "::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin"
constexpr ::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin* i___PlayEveryWare__EpicOnlineServices__IEOSOnConnectLogin() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method remove_AuthenticationChanged, addr 0x180535700, size 0x100, virtual false, abstract: false, final false
inline void remove_AuthenticationChanged(::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*  value) ;

static inline void setStaticF_s_LazyInstance(::System::Lazy_1<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationListener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationListener", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationListener(AuthenticationListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationListener", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationListener(AuthenticationListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18810};

/// @brief Field AuthenticationChanged, offset: 0x10, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*  ___AuthenticationChanged;

/// @brief Field _isAuthenticated, offset: 0x18, size: 0x2, def value: None
 ::System::Nullable_1<bool>  ____isAuthenticated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::AuthenticationListener, ___AuthenticationChanged) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::AuthenticationListener, ____isAuthenticated) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::AuthenticationListener) == 0x20, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices

#pragma once
// IWYU pragma private; include "GlobalNamespace/EOSProjectManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__LoginCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ExternalCredentialType_def.hpp"
#include "Steamworks/zzzz__HAuthTicket_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EOSProjectManager)
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTaskCompletionSource_1;
}
namespace Cysharp::Threading::Tasks {
class UniTaskCompletionSource;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace Epic::OnlineServices::Auth {
struct LoginCallbackInfo;
}
namespace Epic::OnlineServices::Connect {
struct CreateDeviceIdCallbackInfo;
}
namespace Epic::OnlineServices::Connect {
struct CreateUserCallbackInfo;
}
namespace Epic::OnlineServices::Connect {
struct DeleteDeviceIdCallbackInfo;
}
namespace Epic::OnlineServices::Connect {
struct LoginCallbackInfo;
}
namespace Epic::OnlineServices::Connect {
class OnDeleteDeviceIdCallback;
}
namespace Epic::OnlineServices {
class EpicAccountId;
}
namespace Epic::OnlineServices {
struct ExternalCredentialType;
}
namespace GlobalNamespace {
struct EOSProjectManager__AuthenticateUser_d__22;
}
namespace GlobalNamespace {
struct EOSProjectManager__Connect_d__20;
}
namespace GlobalNamespace {
struct EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26;
}
namespace GlobalNamespace {
struct EOSProjectManager__GetSteamAuthToken_d__27;
}
namespace GlobalNamespace {
struct EOSProjectManager__ReconnectAndRecoverLobby_d__25;
}
namespace GlobalNamespace {
struct EOSProjectManager__Setup_d__21;
}
namespace GlobalNamespace {
class EOSProjectManager___c;
}
namespace GlobalNamespace {
class EOSProjectManager___c__DisplayClass34_0;
}
namespace GlobalNamespace {
class EOSProjectManager___c__DisplayClass34_1;
}
namespace GlobalNamespace {
class EOSProjectManager___c__DisplayClass37_0;
}
namespace GlobalNamespace {
class EOSProjectManager___c__DisplayClass38_0;
}
namespace GlobalNamespace {
class EOSProjectManager___c__DisplayClass39_0;
}
namespace GlobalNamespace {
class EOSProjectPlatform;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSManager_OnCreateConnectUserCallback;
}
namespace Shipmate::Porting {
class BaseAuthValues;
}
namespace Steamworks {
template<typename T>
class Callback_1;
}
namespace Steamworks {
struct GetAuthSessionTicketResponse_t;
}
namespace Steamworks {
struct HAuthTicket;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class EOSProjectManager;
}
namespace GlobalNamespace {
class EOSProjectManager___c;
}
namespace GlobalNamespace {
class EOSProjectManager___c__DisplayClass34_0;
}
namespace GlobalNamespace {
class EOSProjectManager___c__DisplayClass34_1;
}
namespace GlobalNamespace {
class EOSProjectManager___c__DisplayClass37_0;
}
namespace GlobalNamespace {
class EOSProjectManager___c__DisplayClass38_0;
}
namespace GlobalNamespace {
class EOSProjectManager___c__DisplayClass39_0;
}
namespace GlobalNamespace {
struct EOSProjectManager__AuthenticateUser_d__22;
}
namespace GlobalNamespace {
struct EOSProjectManager__Connect_d__20;
}
namespace GlobalNamespace {
struct EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26;
}
namespace GlobalNamespace {
struct EOSProjectManager__GetSteamAuthToken_d__27;
}
namespace GlobalNamespace {
struct EOSProjectManager__ReconnectAndRecoverLobby_d__25;
}
namespace GlobalNamespace {
struct EOSProjectManager__Setup_d__21;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EOSProjectManager*);
MARK_REF_T(::GlobalNamespace::EOSProjectManager___c*);
MARK_REF_T(::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0*);
MARK_REF_T(::GlobalNamespace::EOSProjectManager___c__DisplayClass34_1*);
MARK_REF_T(::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0*);
MARK_REF_T(::GlobalNamespace::EOSProjectManager___c__DisplayClass38_0*);
MARK_REF_T(::GlobalNamespace::EOSProjectManager___c__DisplayClass39_0*);
MARK_VAL_T(::GlobalNamespace::EOSProjectManager__AuthenticateUser_d__22);
MARK_VAL_T(::GlobalNamespace::EOSProjectManager__Connect_d__20);
MARK_VAL_T(::GlobalNamespace::EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26);
MARK_VAL_T(::GlobalNamespace::EOSProjectManager__GetSteamAuthToken_d__27);
MARK_VAL_T(::GlobalNamespace::EOSProjectManager__ReconnectAndRecoverLobby_d__25);
MARK_VAL_T(::GlobalNamespace::EOSProjectManager__Setup_d__21);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSProjectManager*, "", "EOSProjectManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSProjectManager___c*, "", "EOSProjectManager/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0*, "", "EOSProjectManager/<>c__DisplayClass34_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSProjectManager___c__DisplayClass34_1*, "", "EOSProjectManager/<>c__DisplayClass34_1");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0*, "", "EOSProjectManager/<>c__DisplayClass37_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSProjectManager___c__DisplayClass38_0*, "", "EOSProjectManager/<>c__DisplayClass38_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSProjectManager___c__DisplayClass39_0*, "", "EOSProjectManager/<>c__DisplayClass39_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSProjectManager__AuthenticateUser_d__22, "", "EOSProjectManager/<AuthenticateUser>d__22");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSProjectManager__Connect_d__20, "", "EOSProjectManager/<Connect>d__20");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26, "", "EOSProjectManager/<GetPS5AndSwitch2AuthToken>d__26");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSProjectManager__GetSteamAuthToken_d__27, "", "EOSProjectManager/<GetSteamAuthToken>d__27");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSProjectManager__ReconnectAndRecoverLobby_d__25, "", "EOSProjectManager/<ReconnectAndRecoverLobby>d__25");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSProjectManager__Setup_d__21, "", "EOSProjectManager/<Setup>d__21");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSProjectManager/<>c
class CORDL_TYPE EOSProjectManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::EOSProjectManager___c*  __9;

/// @brief Field <>9__21_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_0, put=setStaticF___9__21_0)) ::System::Func_1<bool>*  __9__21_0;

/// @brief Field <>9__25_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_0, put=setStaticF___9__25_0)) ::System::Func_1<bool>*  __9__25_0;

/// @brief Field <>9__35_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__35_0, put=setStaticF___9__35_0)) ::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallback*  __9__35_0;

static inline ::GlobalNamespace::EOSProjectManager___c* New_ctor() ;

/// @brief Method <ReconnectAndRecoverLobby>b__25_0, addr 0x18038e280, size 0x40, virtual false, abstract: false, final false
inline bool _ReconnectAndRecoverLobby_b__25_0() ;

/// @brief Method <Setup>b__21_0, addr 0x18038e2c0, size 0x10, virtual false, abstract: false, final false
inline bool _Setup_b__21_0() ;

/// @brief Method <WipeDeviceId>b__35_0, addr 0x18038e2d0, size 0x40, virtual false, abstract: false, final false
inline void _WipeDeviceId_b__35_0(::by_ref<::Epic::OnlineServices::Connect::DeleteDeviceIdCallbackInfo>  info) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::EOSProjectManager___c* getStaticF___9() ;

static inline ::System::Func_1<bool>* getStaticF___9__21_0() ;

static inline ::System::Func_1<bool>* getStaticF___9__25_0() ;

static inline ::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallback* getStaticF___9__35_0() ;

static inline void setStaticF___9(::GlobalNamespace::EOSProjectManager___c*  value) ;

static inline void setStaticF___9__21_0(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__25_0(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__35_0(::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallback*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSProjectManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSProjectManager___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSProjectManager___c(EOSProjectManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSProjectManager___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSProjectManager___c(EOSProjectManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5525};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EOSProjectManager___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSProjectManager/<>c__DisplayClass34_0
class CORDL_TYPE EOSProjectManager___c__DisplayClass34_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::EOSProjectManager>  __4__this;

/// @brief Field displayName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayName, put=__cordl_internal_set_displayName)) ::StringW  displayName;

static inline ::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0* New_ctor() ;

/// @brief Method <EOSDeviceConnect>b__0, addr 0x18038e310, size 0x2a0, virtual false, abstract: false, final false
inline void _EOSDeviceConnect_b__0(::Epic::OnlineServices::Connect::LoginCallbackInfo  info) ;

constexpr ::UnityW<::GlobalNamespace::EOSProjectManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::EOSProjectManager>& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_displayName() const;

constexpr ::StringW& __cordl_internal_get_displayName() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSProjectManager>  value) ;

constexpr void __cordl_internal_set_displayName(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSProjectManager___c__DisplayClass34_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSProjectManager___c__DisplayClass34_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSProjectManager___c__DisplayClass34_0(EOSProjectManager___c__DisplayClass34_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSProjectManager___c__DisplayClass34_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSProjectManager___c__DisplayClass34_0(EOSProjectManager___c__DisplayClass34_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5526};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSProjectManager>  _____4__this;

/// @brief Field displayName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___displayName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0, ___displayName) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Epic.OnlineServices.Connect.LoginCallbackInfo, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSProjectManager/<>c__DisplayClass34_1
class CORDL_TYPE EOSProjectManager___c__DisplayClass34_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0*  CS$__8__locals1;

/// @brief Field info, offset 0x10, size 0x20 
 __declspec(property(get=__cordl_internal_get_info, put=__cordl_internal_set_info)) ::Epic::OnlineServices::Connect::LoginCallbackInfo  info;

static inline ::GlobalNamespace::EOSProjectManager___c__DisplayClass34_1* New_ctor() ;

/// @brief Method <EOSDeviceConnect>b__1, addr 0x18038e5b0, size 0x130, virtual false, abstract: false, final false
inline void _EOSDeviceConnect_b__1(::by_ref<::Epic::OnlineServices::Connect::CreateDeviceIdCallbackInfo>  data) ;

constexpr ::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::Epic::OnlineServices::Connect::LoginCallbackInfo const& __cordl_internal_get_info() const;

constexpr ::Epic::OnlineServices::Connect::LoginCallbackInfo& __cordl_internal_get_info() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0*  value) ;

constexpr void __cordl_internal_set_info(::Epic::OnlineServices::Connect::LoginCallbackInfo  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSProjectManager___c__DisplayClass34_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSProjectManager___c__DisplayClass34_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSProjectManager___c__DisplayClass34_1(EOSProjectManager___c__DisplayClass34_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSProjectManager___c__DisplayClass34_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSProjectManager___c__DisplayClass34_1(EOSProjectManager___c__DisplayClass34_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5527};

/// @brief Field info, offset: 0x10, size: 0x20, def value: None
 ::Epic::OnlineServices::Connect::LoginCallbackInfo  ___info;

/// @brief Field CS$<>8__locals1, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSProjectManager___c__DisplayClass34_1, ___info) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager___c__DisplayClass34_1, ___CS$__8__locals1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSProjectManager___c__DisplayClass34_1) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Epic.OnlineServices.ExternalCredentialType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSProjectManager/<>c__DisplayClass37_0
class CORDL_TYPE EOSProjectManager___c__DisplayClass37_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::EOSProjectManager>  __4__this;

/// @brief Field <>9__1, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__1, put=__cordl_internal_set___9__1)) ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*  __9__1;

/// @brief Field additionalToken, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_additionalToken, put=__cordl_internal_set_additionalToken)) ::StringW  additionalToken;

/// @brief Field credType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_credType, put=__cordl_internal_set_credType)) ::Epic::OnlineServices::ExternalCredentialType  credType;

/// @brief Field displayName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayName, put=__cordl_internal_set_displayName)) ::StringW  displayName;

/// @brief Field tcs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::Cysharp::Threading::Tasks::UniTaskCompletionSource*  tcs;

/// @brief Field token, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_token, put=__cordl_internal_set_token)) ::StringW  token;

static inline ::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0* New_ctor() ;

/// @brief Method <EOSLogin>b__0, addr 0x18038e6e0, size 0x150, virtual false, abstract: false, final false
inline void _EOSLogin_b__0(::Epic::OnlineServices::Connect::LoginCallbackInfo  callback) ;

/// @brief Method <EOSLogin>b__1, addr 0x18038e830, size 0xf0, virtual false, abstract: false, final false
inline void _EOSLogin_b__1(::Epic::OnlineServices::Connect::CreateUserCallbackInfo  create) ;

constexpr ::UnityW<::GlobalNamespace::EOSProjectManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::EOSProjectManager>& __cordl_internal_get___4__this() ;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback* const& __cordl_internal_get___9__1() const;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*& __cordl_internal_get___9__1() ;

constexpr ::StringW const& __cordl_internal_get_additionalToken() const;

constexpr ::StringW& __cordl_internal_get_additionalToken() ;

constexpr ::Epic::OnlineServices::ExternalCredentialType const& __cordl_internal_get_credType() const;

constexpr ::Epic::OnlineServices::ExternalCredentialType& __cordl_internal_get_credType() ;

constexpr ::StringW const& __cordl_internal_get_displayName() const;

constexpr ::StringW& __cordl_internal_get_displayName() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource* const& __cordl_internal_get_tcs() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource*& __cordl_internal_get_tcs() ;

constexpr ::StringW const& __cordl_internal_get_token() const;

constexpr ::StringW& __cordl_internal_get_token() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSProjectManager>  value) ;

constexpr void __cordl_internal_set___9__1(::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*  value) ;

constexpr void __cordl_internal_set_additionalToken(::StringW  value) ;

constexpr void __cordl_internal_set_credType(::Epic::OnlineServices::ExternalCredentialType  value) ;

constexpr void __cordl_internal_set_displayName(::StringW  value) ;

constexpr void __cordl_internal_set_tcs(::Cysharp::Threading::Tasks::UniTaskCompletionSource*  value) ;

constexpr void __cordl_internal_set_token(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSProjectManager___c__DisplayClass37_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSProjectManager___c__DisplayClass37_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSProjectManager___c__DisplayClass37_0(EOSProjectManager___c__DisplayClass37_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSProjectManager___c__DisplayClass37_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSProjectManager___c__DisplayClass37_0(EOSProjectManager___c__DisplayClass37_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5528};

/// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSource*  ___tcs;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSProjectManager>  _____4__this;

/// @brief Field credType, offset: 0x20, size: 0x4, def value: None
 ::Epic::OnlineServices::ExternalCredentialType  ___credType;

/// @brief Field token, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___token;

/// @brief Field displayName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___displayName;

/// @brief Field additionalToken, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___additionalToken;

/// @brief Field <>9__1, offset: 0x40, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*  _____9__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0, ___credType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0, ___token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0, ___displayName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0, ___additionalToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0, _____9__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSProjectManager/<>c__DisplayClass38_0
class CORDL_TYPE EOSProjectManager___c__DisplayClass38_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::EOSProjectManager>  __4__this;

/// @brief Field tcs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::Cysharp::Threading::Tasks::UniTaskCompletionSource*  tcs;

static inline ::GlobalNamespace::EOSProjectManager___c__DisplayClass38_0* New_ctor() ;

/// @brief Method <EOSDevLogin>b__0, addr 0x18038e920, size 0xe0, virtual false, abstract: false, final false
inline void _EOSDevLogin_b__0(::Epic::OnlineServices::Auth::LoginCallbackInfo  loginInfo) ;

constexpr ::UnityW<::GlobalNamespace::EOSProjectManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::EOSProjectManager>& __cordl_internal_get___4__this() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource* const& __cordl_internal_get_tcs() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSProjectManager>  value) ;

constexpr void __cordl_internal_set_tcs(::Cysharp::Threading::Tasks::UniTaskCompletionSource*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSProjectManager___c__DisplayClass38_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSProjectManager___c__DisplayClass38_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSProjectManager___c__DisplayClass38_0(EOSProjectManager___c__DisplayClass38_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSProjectManager___c__DisplayClass38_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSProjectManager___c__DisplayClass38_0(EOSProjectManager___c__DisplayClass38_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5529};

/// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSource*  ___tcs;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSProjectManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSProjectManager___c__DisplayClass38_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager___c__DisplayClass38_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSProjectManager___c__DisplayClass38_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSProjectManager/<>c__DisplayClass39_0
class CORDL_TYPE EOSProjectManager___c__DisplayClass39_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::EOSProjectManager>  __4__this;

/// @brief Field <>9__1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__1, put=__cordl_internal_set___9__1)) ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*  __9__1;

/// @brief Field localUserId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_localUserId, put=__cordl_internal_set_localUserId)) ::Epic::OnlineServices::EpicAccountId*  localUserId;

/// @brief Field tcs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::Cysharp::Threading::Tasks::UniTaskCompletionSource*  tcs;

static inline ::GlobalNamespace::EOSProjectManager___c__DisplayClass39_0* New_ctor() ;

/// @brief Method <StartEpicConnectLoginWithRetry>b__0, addr 0x18038ea00, size 0x150, virtual false, abstract: false, final false
inline void _StartEpicConnectLoginWithRetry_b__0(::Epic::OnlineServices::Connect::LoginCallbackInfo  info) ;

/// @brief Method <StartEpicConnectLoginWithRetry>b__1, addr 0x18038eb50, size 0xe0, virtual false, abstract: false, final false
inline void _StartEpicConnectLoginWithRetry_b__1(::Epic::OnlineServices::Connect::CreateUserCallbackInfo  create) ;

constexpr ::UnityW<::GlobalNamespace::EOSProjectManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::EOSProjectManager>& __cordl_internal_get___4__this() ;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback* const& __cordl_internal_get___9__1() const;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*& __cordl_internal_get___9__1() ;

constexpr ::Epic::OnlineServices::EpicAccountId* const& __cordl_internal_get_localUserId() const;

constexpr ::Epic::OnlineServices::EpicAccountId*& __cordl_internal_get_localUserId() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource* const& __cordl_internal_get_tcs() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSProjectManager>  value) ;

constexpr void __cordl_internal_set___9__1(::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*  value) ;

constexpr void __cordl_internal_set_localUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

constexpr void __cordl_internal_set_tcs(::Cysharp::Threading::Tasks::UniTaskCompletionSource*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSProjectManager___c__DisplayClass39_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSProjectManager___c__DisplayClass39_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSProjectManager___c__DisplayClass39_0(EOSProjectManager___c__DisplayClass39_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSProjectManager___c__DisplayClass39_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSProjectManager___c__DisplayClass39_0(EOSProjectManager___c__DisplayClass39_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5530};

/// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSource*  ___tcs;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSProjectManager>  _____4__this;

/// @brief Field localUserId, offset: 0x20, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  ___localUserId;

/// @brief Field <>9__1, offset: 0x28, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*  _____9__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSProjectManager___c__DisplayClass39_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager___c__DisplayClass39_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager___c__DisplayClass39_0, ___localUserId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager___c__DisplayClass39_0, _____9__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSProjectManager___c__DisplayClass39_0) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSProjectManager/<AuthenticateUser>d__22
struct CORDL_TYPE EOSProjectManager__AuthenticateUser_d__22 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18038a2b0, size 0x4f0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSProjectManager__AuthenticateUser_d__22() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSProjectManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr EOSProjectManager__AuthenticateUser_d__22(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::EOSProjectManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5531};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSProjectManager>  __4__this;

/// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1;

/// @brief Field <>u__2, offset: 0x28, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSProjectManager__AuthenticateUser_d__22, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager__AuthenticateUser_d__22, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager__AuthenticateUser_d__22, __4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager__AuthenticateUser_d__22, __u__1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager__AuthenticateUser_d__22, __u__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSProjectManager__AuthenticateUser_d__22) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSProjectManager/<Connect>d__20
struct CORDL_TYPE EOSProjectManager__Connect_d__20 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18038a840, size 0x730, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSProjectManager__Connect_d__20() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSProjectManager>", modifiers: "", def_value: None }, CppParam { name: "skipWarnings", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr EOSProjectManager__Connect_d__20(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::EOSProjectManager>  __4__this, bool  skipWarnings, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5532};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSProjectManager>  __4__this;

/// @brief Field skipWarnings, offset: 0x20, size: 0x1, def value: None
 bool  skipWarnings;

/// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSProjectManager__Connect_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager__Connect_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager__Connect_d__20, __4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager__Connect_d__20, skipWarnings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager__Connect_d__20, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSProjectManager__Connect_d__20) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSProjectManager/<GetPS5AndSwitch2AuthToken>d__26
struct CORDL_TYPE EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18038af70, size 0x220, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038b190, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Shipmate::Porting::BaseAuthValues*>", modifiers: "", def_value: None }]
constexpr EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Shipmate::Porting::BaseAuthValues*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5533};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder;

/// @brief Field <>u__1, offset: 0x20, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Shipmate::Porting::BaseAuthValues*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26, __u__1) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, Steamworks.HAuthTicket, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSProjectManager/<GetSteamAuthToken>d__27
struct CORDL_TYPE EOSProjectManager__GetSteamAuthToken_d__27 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18038b1b0, size 0x480, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038b190, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSProjectManager__GetSteamAuthToken_d__27() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "_ticketData_5__2", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "_ticketSize_5__3", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<bool,::Steamworks::HAuthTicket>>", modifiers: "", def_value: None }]
constexpr EOSProjectManager__GetSteamAuthToken_d__27(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::ArrayW<uint8_t>  _ticketData_5__2, uint32_t  _ticketSize_5__3, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<bool,::Steamworks::HAuthTicket>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5534};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder;

/// @brief Field <ticketData>5__2, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  _ticketData_5__2;

/// @brief Field <ticketSize>5__3, offset: 0x28, size: 0x4, def value: None
 uint32_t  _ticketSize_5__3;

/// @brief Field <>u__1, offset: 0x30, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<bool,::Steamworks::HAuthTicket>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSProjectManager__GetSteamAuthToken_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager__GetSteamAuthToken_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager__GetSteamAuthToken_d__27, _ticketData_5__2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager__GetSteamAuthToken_d__27, _ticketSize_5__3) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager__GetSteamAuthToken_d__27, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSProjectManager__GetSteamAuthToken_d__27) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSProjectManager/<ReconnectAndRecoverLobby>d__25
struct CORDL_TYPE EOSProjectManager__ReconnectAndRecoverLobby_d__25 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18038ccf0, size 0x7a0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSProjectManager__ReconnectAndRecoverLobby_d__25() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSProjectManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr EOSProjectManager__ReconnectAndRecoverLobby_d__25(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::EOSProjectManager>  __4__this, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<int32_t>  __u__1, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5535};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSProjectManager>  __4__this;

/// @brief Field <>u__1, offset: 0x20, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<int32_t>  __u__1;

/// @brief Field <>u__2, offset: 0x30, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSProjectManager__ReconnectAndRecoverLobby_d__25, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager__ReconnectAndRecoverLobby_d__25, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager__ReconnectAndRecoverLobby_d__25, __4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager__ReconnectAndRecoverLobby_d__25, __u__1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager__ReconnectAndRecoverLobby_d__25, __u__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSProjectManager__ReconnectAndRecoverLobby_d__25) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSProjectManager/<Setup>d__21
struct CORDL_TYPE EOSProjectManager__Setup_d__21 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18038db50, size 0x630, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSProjectManager__Setup_d__21() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSProjectManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr EOSProjectManager__Setup_d__21(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::EOSProjectManager>  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5536};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSProjectManager>  __4__this;

/// @brief Field <>u__1, offset: 0x20, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSProjectManager__Setup_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager__Setup_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager__Setup_d__21, __4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager__Setup_d__21, __u__1) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSProjectManager__Setup_d__21) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.UniTask, Steamworks.HAuthTicket, System.Nullable`1<T>, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSProjectManager
class CORDL_TYPE EOSProjectManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _AuthenticateUser_d__22 = ::GlobalNamespace::EOSProjectManager__AuthenticateUser_d__22;

using _Connect_d__20 = ::GlobalNamespace::EOSProjectManager__Connect_d__20;

using _GetPS5AndSwitch2AuthToken_d__26 = ::GlobalNamespace::EOSProjectManager__GetPS5AndSwitch2AuthToken_d__26;

using _GetSteamAuthToken_d__27 = ::GlobalNamespace::EOSProjectManager__GetSteamAuthToken_d__27;

using _ReconnectAndRecoverLobby_d__25 = ::GlobalNamespace::EOSProjectManager__ReconnectAndRecoverLobby_d__25;

using _Setup_d__21 = ::GlobalNamespace::EOSProjectManager__Setup_d__21;

using __c = ::GlobalNamespace::EOSProjectManager___c;

using __c__DisplayClass34_0 = ::GlobalNamespace::EOSProjectManager___c__DisplayClass34_0;

using __c__DisplayClass34_1 = ::GlobalNamespace::EOSProjectManager___c__DisplayClass34_1;

using __c__DisplayClass37_0 = ::GlobalNamespace::EOSProjectManager___c__DisplayClass37_0;

using __c__DisplayClass38_0 = ::GlobalNamespace::EOSProjectManager___c__DisplayClass38_0;

using __c__DisplayClass39_0 = ::GlobalNamespace::EOSProjectManager___c__DisplayClass39_0;

 __declspec(property(get=get_CurrentConnectTask)) ::System::Nullable_1<::Cysharp::Threading::Tasks::UniTask>  CurrentConnectTask;

 __declspec(property(get=get_IsConnected)) bool  IsConnected;

 __declspec(property(get=get_IsOnRejoinCooldown)) bool  IsOnRejoinCooldown;

/// @brief Field _currentAuthTicket, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__currentAuthTicket, put=setStaticF__currentAuthTicket)) ::System::Nullable_1<::Steamworks::HAuthTicket>  _currentAuthTicket;

/// @brief Field _currentConnectTask, offset 0x38, size 0x18 
 __declspec(property(get=__cordl_internal_get__currentConnectTask, put=__cordl_internal_set__currentConnectTask)) ::System::Nullable_1<::Cysharp::Threading::Tasks::UniTask>  _currentConnectTask;

/// @brief Field _deviceTokenConnectTask, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__deviceTokenConnectTask, put=__cordl_internal_set__deviceTokenConnectTask)) ::Cysharp::Threading::Tasks::UniTaskCompletionSource*  _deviceTokenConnectTask;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::EOSProjectManager>  _instance;

/// @brief Field _platform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__platform, put=__cordl_internal_set__platform)) ::GlobalNamespace::EOSProjectPlatform*  _platform;

/// @brief Field _sessionAuthCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__sessionAuthCallback, put=setStaticF__sessionAuthCallback)) ::Steamworks::Callback_1<::Steamworks::GetAuthSessionTicketResponse_t>*  _sessionAuthCallback;

/// @brief Field _sessionAuthTicketTask, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__sessionAuthTicketTask, put=setStaticF__sessionAuthTicketTask)) ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::Steamworks::HAuthTicket>*  _sessionAuthTicketTask;

/// @brief Field _triedDeviceCreate, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get__triedDeviceCreate, put=__cordl_internal_set__triedDeviceCreate)) bool  _triedDeviceCreate;

/// @brief Field _wasSetup, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__wasSetup, put=__cordl_internal_set__wasSetup)) bool  _wasSetup;

/// @brief Field alreadyRecovering, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_alreadyRecovering, put=__cordl_internal_set_alreadyRecovering)) bool  alreadyRecovering;

/// @brief Field devAuthToolCredentialName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_devAuthToolCredentialName, put=__cordl_internal_set_devAuthToolCredentialName)) ::StringW  devAuthToolCredentialName;

/// @brief Field startedRejoiningCooldownAt, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_startedRejoiningCooldownAt, put=__cordl_internal_set_startedRejoiningCooldownAt)) float_t  startedRejoiningCooldownAt;

/// @brief Method AuthenticateUser, addr 0x18037cdc0, size 0x80, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask AuthenticateUser(bool  skipUpsell) ;

/// @brief Method Awake, addr 0x18037ce40, size 0x80, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CleanupUserLoginToken, addr 0x18037cec0, size 0x60, virtual false, abstract: false, final false
static inline void CleanupUserLoginToken() ;

/// @brief Method ClearSetUp, addr 0x18037cf20, size 0x20, virtual false, abstract: false, final false
inline void ClearSetUp() ;

/// @brief Method Connect, addr 0x18037cf40, size 0x90, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask Connect(bool  skipWarnings) ;

/// @brief Method DoDeviceTokenConnect, addr 0x18037cfd0, size 0x70, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask DoDeviceTokenConnect() ;

/// @brief Method EOSConnectLogin, addr 0x18037d040, size 0x90, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask EOSConnectLogin(::Epic::OnlineServices::ExternalCredentialType  credType, ::StringW  token, ::StringW  displayName, ::StringW  additionalToken) ;

/// @brief Method EOSDevLogin, addr 0x18037d0d0, size 0x230, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask EOSDevLogin() ;

/// @brief Method EOSDeviceConnect, addr 0x18037d300, size 0xb0, virtual false, abstract: false, final false
inline void EOSDeviceConnect(::StringW  displayName) ;

/// @brief Method EOSLogin, addr 0x18037d3b0, size 0x130, virtual false, abstract: false, final false
inline void EOSLogin(::Epic::OnlineServices::ExternalCredentialType  credType, ::StringW  token, ::StringW  displayName, ::StringW  additionalToken, ::Cysharp::Threading::Tasks::UniTaskCompletionSource*  tcs) ;

/// @brief Method GetAuthSessionTicketResponse, addr 0x18037d4e0, size 0x120, virtual false, abstract: false, final false
inline void GetAuthSessionTicketResponse(::Steamworks::GetAuthSessionTicketResponse_t  param) ;

/// @brief Method GetPS5AndSwitch2AuthToken, addr 0x18037d600, size 0x80, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::StringW>* GetPS5AndSwitch2AuthToken() ;

/// @brief Method GetSteamAuthToken, addr 0x18037d680, size 0x90, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::StringW>* GetSteamAuthToken() ;

/// @brief Method IsUserAlreadyLogin, addr 0x18037d710, size 0xf0, virtual false, abstract: false, final false
inline bool IsUserAlreadyLogin() ;

static inline ::GlobalNamespace::EOSProjectManager* New_ctor() ;

/// @brief Method ReconnectAndRecoverLobby, addr 0x18037d800, size 0x90, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask ReconnectAndRecoverLobby() ;

/// @brief Method SetCurrentConnectTask, addr 0x18037d890, size 0x60, virtual false, abstract: false, final false
inline void SetCurrentConnectTask(::Cysharp::Threading::Tasks::UniTask  task) ;

/// @brief Method Setup, addr 0x18037d8f0, size 0x80, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask Setup() ;

/// @brief Method Start, addr 0x18037da30, size 0xf0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartEpicConnectLoginWithRetry, addr 0x18037d970, size 0xc0, virtual false, abstract: false, final false
inline void StartEpicConnectLoginWithRetry(::Epic::OnlineServices::EpicAccountId*  localUserId, ::Cysharp::Threading::Tasks::UniTaskCompletionSource*  tcs) ;

/// @brief Method WipeDeviceId, addr 0x18037db20, size 0xf0, virtual false, abstract: false, final false
inline void WipeDeviceId() ;

constexpr ::System::Nullable_1<::Cysharp::Threading::Tasks::UniTask> const& __cordl_internal_get__currentConnectTask() const;

constexpr ::System::Nullable_1<::Cysharp::Threading::Tasks::UniTask>& __cordl_internal_get__currentConnectTask() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource* const& __cordl_internal_get__deviceTokenConnectTask() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource*& __cordl_internal_get__deviceTokenConnectTask() ;

constexpr ::GlobalNamespace::EOSProjectPlatform* const& __cordl_internal_get__platform() const;

constexpr ::GlobalNamespace::EOSProjectPlatform*& __cordl_internal_get__platform() ;

constexpr bool const& __cordl_internal_get__triedDeviceCreate() const;

constexpr bool& __cordl_internal_get__triedDeviceCreate() ;

constexpr bool const& __cordl_internal_get__wasSetup() const;

constexpr bool& __cordl_internal_get__wasSetup() ;

constexpr bool const& __cordl_internal_get_alreadyRecovering() const;

constexpr bool& __cordl_internal_get_alreadyRecovering() ;

constexpr ::StringW const& __cordl_internal_get_devAuthToolCredentialName() const;

constexpr ::StringW& __cordl_internal_get_devAuthToolCredentialName() ;

constexpr float_t const& __cordl_internal_get_startedRejoiningCooldownAt() const;

constexpr float_t& __cordl_internal_get_startedRejoiningCooldownAt() ;

constexpr void __cordl_internal_set__currentConnectTask(::System::Nullable_1<::Cysharp::Threading::Tasks::UniTask>  value) ;

constexpr void __cordl_internal_set__deviceTokenConnectTask(::Cysharp::Threading::Tasks::UniTaskCompletionSource*  value) ;

constexpr void __cordl_internal_set__platform(::GlobalNamespace::EOSProjectPlatform*  value) ;

constexpr void __cordl_internal_set__triedDeviceCreate(bool  value) ;

constexpr void __cordl_internal_set__wasSetup(bool  value) ;

constexpr void __cordl_internal_set_alreadyRecovering(bool  value) ;

constexpr void __cordl_internal_set_devAuthToolCredentialName(::StringW  value) ;

constexpr void __cordl_internal_set_startedRejoiningCooldownAt(float_t  value) ;

/// @brief Method .ctor, addr 0x18037dc90, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Nullable_1<::Steamworks::HAuthTicket> getStaticF__currentAuthTicket() ;

static inline ::UnityW<::GlobalNamespace::EOSProjectManager> getStaticF__instance() ;

static inline ::Steamworks::Callback_1<::Steamworks::GetAuthSessionTicketResponse_t>* getStaticF__sessionAuthCallback() ;

static inline ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::Steamworks::HAuthTicket>* getStaticF__sessionAuthTicketTask() ;

/// @brief Method get_CurrentConnectTask, addr 0x18037dcd0, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Cysharp::Threading::Tasks::UniTask> get_CurrentConnectTask() ;

/// @brief Method get_Instance, addr 0x18035c810, size 0x40, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::EOSProjectManager> get_Instance() ;

/// @brief Method get_IsConnected, addr 0x18037dcf0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsConnected() ;

/// @brief Method get_IsOnRejoinCooldown, addr 0x18037dd00, size 0x30, virtual false, abstract: false, final false
inline bool get_IsOnRejoinCooldown() ;

static inline void setStaticF__currentAuthTicket(::System::Nullable_1<::Steamworks::HAuthTicket>  value) ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::EOSProjectManager>  value) ;

static inline void setStaticF__sessionAuthCallback(::Steamworks::Callback_1<::Steamworks::GetAuthSessionTicketResponse_t>*  value) ;

static inline void setStaticF__sessionAuthTicketTask(::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::Steamworks::HAuthTicket>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSProjectManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSProjectManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSProjectManager(EOSProjectManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSProjectManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSProjectManager(EOSProjectManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5537};

/// @brief Field devAuthToolCredentialName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___devAuthToolCredentialName;

/// @brief Field _platform, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::EOSProjectPlatform*  ____platform;

/// @brief Field _wasSetup, offset: 0x30, size: 0x1, def value: None
 bool  ____wasSetup;

/// @brief Field startedRejoiningCooldownAt, offset: 0x34, size: 0x4, def value: None
 float_t  ___startedRejoiningCooldownAt;

/// @brief Field _currentConnectTask, offset: 0x38, size: 0x18, def value: None
 ::System::Nullable_1<::Cysharp::Threading::Tasks::UniTask>  ____currentConnectTask;

/// @brief Field alreadyRecovering, offset: 0x50, size: 0x1, def value: None
 bool  ___alreadyRecovering;

/// @brief Field _triedDeviceCreate, offset: 0x51, size: 0x1, def value: None
 bool  ____triedDeviceCreate;

/// @brief Field _deviceTokenConnectTask, offset: 0x58, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSource*  ____deviceTokenConnectTask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSProjectManager, ___devAuthToolCredentialName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager, ____platform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager, ____wasSetup) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager, ___startedRejoiningCooldownAt) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager, ____currentConnectTask) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager, ___alreadyRecovering) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager, ____triedDeviceCreate) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSProjectManager, ____deviceTokenConnectTask) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSProjectManager) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/EOSManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Auth/zzzz__LoginCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginOptions_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__LoginOptions_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__UserLoginInfo_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EOSManager)
namespace Epic::OnlineServices::Achievements {
class AchievementsInterface;
}
namespace Epic::OnlineServices::Auth {
class AuthInterface;
}
namespace Epic::OnlineServices::Auth {
struct DeletePersistentAuthCallbackInfo;
}
namespace Epic::OnlineServices::Auth {
struct LinkAccountCallbackInfo;
}
namespace Epic::OnlineServices::Auth {
struct LinkAccountFlags;
}
namespace Epic::OnlineServices::Auth {
struct LoginCallbackInfo;
}
namespace Epic::OnlineServices::Auth {
struct LoginCredentialType;
}
namespace Epic::OnlineServices::Auth {
struct LoginOptions;
}
namespace Epic::OnlineServices::Auth {
struct LoginStatusChangedCallbackInfo;
}
namespace Epic::OnlineServices::Auth {
struct LogoutCallbackInfo;
}
namespace Epic::OnlineServices::Auth {
class OnDeletePersistentAuthCallback;
}
namespace Epic::OnlineServices::Auth {
class OnLoginStatusChangedCallback;
}
namespace Epic::OnlineServices::Auth {
class OnLogoutCallback;
}
namespace Epic::OnlineServices::Auth {
struct Token;
}
namespace Epic::OnlineServices::Connect {
struct AuthExpirationCallbackInfo;
}
namespace Epic::OnlineServices::Connect {
class ConnectInterface;
}
namespace Epic::OnlineServices::Connect {
struct CreateUserCallbackInfo;
}
namespace Epic::OnlineServices::Connect {
struct LinkAccountCallbackInfo;
}
namespace Epic::OnlineServices::Connect {
struct LoginCallbackInfo;
}
namespace Epic::OnlineServices::Connect {
struct LoginOptions;
}
namespace Epic::OnlineServices::Connect {
struct LoginStatusChangedCallbackInfo;
}
namespace Epic::OnlineServices::Connect {
class OnTransferDeviceIdAccountCallback;
}
namespace Epic::OnlineServices::Connect {
struct TransferDeviceIdAccountCallbackInfo;
}
namespace Epic::OnlineServices::Connect {
struct TransferDeviceIdAccountOptions;
}
namespace Epic::OnlineServices::Connect {
struct UserLoginInfo;
}
namespace Epic::OnlineServices::Ecom {
class EcomInterface;
}
namespace Epic::OnlineServices::Friends {
class FriendsInterface;
}
namespace Epic::OnlineServices::Leaderboards {
class LeaderboardsInterface;
}
namespace Epic::OnlineServices::Lobby {
class LobbyInterface;
}
namespace Epic::OnlineServices::Logging {
struct LogCategory;
}
namespace Epic::OnlineServices::Logging {
struct LogLevel;
}
namespace Epic::OnlineServices::Logging {
struct LogMessage;
}
namespace Epic::OnlineServices::Metrics {
class MetricsInterface;
}
namespace Epic::OnlineServices::Mods {
class ModsInterface;
}
namespace Epic::OnlineServices::P2P {
class P2PInterface;
}
namespace Epic::OnlineServices::Platform {
struct ApplicationStatus;
}
namespace Epic::OnlineServices::Platform {
class PlatformInterface;
}
namespace Epic::OnlineServices::PlayerDataStorage {
class PlayerDataStorageInterface;
}
namespace Epic::OnlineServices::Presence {
class PresenceInterface;
}
namespace Epic::OnlineServices::Presence {
struct SetPresenceCallbackInfo;
}
namespace Epic::OnlineServices::Presence {
class SetPresenceCompleteCallback;
}
namespace Epic::OnlineServices::RTC {
class RTCInterface;
}
namespace Epic::OnlineServices::Sessions {
class SessionsInterface;
}
namespace Epic::OnlineServices::Stats {
class StatsInterface;
}
namespace Epic::OnlineServices::TitleStorage {
class TitleStorageInterface;
}
namespace Epic::OnlineServices::UI {
struct OnDisplaySettingsUpdatedCallbackInfo;
}
namespace Epic::OnlineServices::UI {
class OnDisplaySettingsUpdatedCallback;
}
namespace Epic::OnlineServices::UI {
class UIInterface;
}
namespace Epic::OnlineServices::UserInfo {
class UserInfoInterface;
}
namespace Epic::OnlineServices {
class ContinuanceToken;
}
namespace Epic::OnlineServices {
class EpicAccountId;
}
namespace Epic::OnlineServices {
struct ExternalCredentialType;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace PlayEveryWare::EpicOnlineServices {
class DLLHandle;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSManager_EOSSingleton;
}
namespace PlayEveryWare::EpicOnlineServices {
struct EOSManager_EOSState;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSManager_OnAuthLinkExternalAccountCallback;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSManager_OnAuthLoginCallback;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSManager_OnAuthLogoutCallback;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSManager_OnConnectLinkExternalAccountCallback;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSManager_OnConnectLoginCallback;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSManager_OnCreateConnectUserCallback;
}
namespace PlayEveryWare::EpicOnlineServices {
struct EOSSingleton_EOSManager_EpicLauncherArgs;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSSingleton_EOSManager_PrintDelegateType;
}
namespace PlayEveryWare::EpicOnlineServices {
struct EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSSingleton_EOSManager___c;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSSingleton_EOSManager___c__DisplayClass50_0;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSSingleton_EOSManager___c__DisplayClass51_0;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSSingleton_EOSManager___c__DisplayClass52_0;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSSingleton_EOSManager___c__DisplayClass56_0;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSSingleton_EOSManager___c__DisplayClass56_1;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSSingleton_EOSManager___c__DisplayClass58_0;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSSingleton_EOSManager___c__DisplayClass59_0;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSSingleton_EOSManager___c__DisplayClass59_1;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSSingleton_EOSManager___c__DisplayClass64_0;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSSingleton_EOSManager___c__DisplayClass65_0;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSSingleton_EOSManager___c__DisplayClass67_0;
}
namespace PlayEveryWare::EpicOnlineServices {
class IEOSCoroutineOwner;
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
namespace PlayEveryWare::EpicOnlineServices {
class IEOSSubManager;
}
namespace PlayEveryWare::EpicOnlineServices {
class NotifyEventHandle;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class AsyncCallback;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class IAsyncResult;
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
namespace System {
class Type;
}
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
struct EOSManager_EOSState;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSManager;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSManager_EOSSingleton;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSManager_OnAuthLinkExternalAccountCallback;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSManager_OnAuthLoginCallback;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSManager_OnAuthLogoutCallback;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSManager_OnConnectLinkExternalAccountCallback;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSManager_OnConnectLoginCallback;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSManager_OnCreateConnectUserCallback;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSSingleton_EOSManager_PrintDelegateType;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSSingleton_EOSManager___c;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSSingleton_EOSManager___c__DisplayClass50_0;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSSingleton_EOSManager___c__DisplayClass51_0;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSSingleton_EOSManager___c__DisplayClass52_0;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSSingleton_EOSManager___c__DisplayClass56_0;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSSingleton_EOSManager___c__DisplayClass56_1;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSSingleton_EOSManager___c__DisplayClass58_0;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSSingleton_EOSManager___c__DisplayClass59_0;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSSingleton_EOSManager___c__DisplayClass59_1;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSSingleton_EOSManager___c__DisplayClass64_0;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSSingleton_EOSManager___c__DisplayClass65_0;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSSingleton_EOSManager___c__DisplayClass67_0;
}
namespace PlayEveryWare::EpicOnlineServices {
struct EOSSingleton_EOSManager_EpicLauncherArgs;
}
namespace PlayEveryWare::EpicOnlineServices {
struct EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53;
}
// Write type traits
MARK_VAL_T(::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSManager*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass51_0*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass52_0*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0*);
MARK_VAL_T(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_EpicLauncherArgs);
MARK_VAL_T(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState, "PlayEveryWare.EpicOnlineServices", "EOSManager/EOSState");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSManager*, "PlayEveryWare.EpicOnlineServices", "EOSManager");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*, "PlayEveryWare.EpicOnlineServices", "EOSManager/EOSSingleton");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback*, "PlayEveryWare.EpicOnlineServices", "EOSManager/OnAuthLinkExternalAccountCallback");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*, "PlayEveryWare.EpicOnlineServices", "EOSManager/OnAuthLoginCallback");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*, "PlayEveryWare.EpicOnlineServices", "EOSManager/OnAuthLogoutCallback");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback*, "PlayEveryWare.EpicOnlineServices", "EOSManager/OnConnectLinkExternalAccountCallback");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*, "PlayEveryWare.EpicOnlineServices", "EOSManager/OnConnectLoginCallback");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*, "PlayEveryWare.EpicOnlineServices", "EOSManager/OnCreateConnectUserCallback");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType*, "PlayEveryWare.EpicOnlineServices", "EOSManager/EOSSingleton/PrintDelegateType");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*, "PlayEveryWare.EpicOnlineServices", "EOSManager/EOSSingleton/<>c");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0*, "PlayEveryWare.EpicOnlineServices", "EOSManager/EOSSingleton/<>c__DisplayClass50_0");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass51_0*, "PlayEveryWare.EpicOnlineServices", "EOSManager/EOSSingleton/<>c__DisplayClass51_0");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass52_0*, "PlayEveryWare.EpicOnlineServices", "EOSManager/EOSSingleton/<>c__DisplayClass52_0");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0*, "PlayEveryWare.EpicOnlineServices", "EOSManager/EOSSingleton/<>c__DisplayClass56_0");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1*, "PlayEveryWare.EpicOnlineServices", "EOSManager/EOSSingleton/<>c__DisplayClass56_1");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0*, "PlayEveryWare.EpicOnlineServices", "EOSManager/EOSSingleton/<>c__DisplayClass58_0");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0*, "PlayEveryWare.EpicOnlineServices", "EOSManager/EOSSingleton/<>c__DisplayClass59_0");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1*, "PlayEveryWare.EpicOnlineServices", "EOSManager/EOSSingleton/<>c__DisplayClass59_1");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0*, "PlayEveryWare.EpicOnlineServices", "EOSManager/EOSSingleton/<>c__DisplayClass64_0");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0*, "PlayEveryWare.EpicOnlineServices", "EOSManager/EOSSingleton/<>c__DisplayClass65_0");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0*, "PlayEveryWare.EpicOnlineServices", "EOSManager/EOSSingleton/<>c__DisplayClass67_0");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_EpicLauncherArgs, "PlayEveryWare.EpicOnlineServices", "EOSManager/EOSSingleton/EpicLauncherArgs");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53, "PlayEveryWare.EpicOnlineServices", "EOSManager/EOSSingleton/<StartConnectLoginWithEpicAccount>d__53");
// Dependencies System.MulticastDelegate
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSManager/OnAuthLoginCallback
class CORDL_TYPE EOSManager_OnAuthLoginCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180528360, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Auth::LoginCallbackInfo  loginCallbackInfo, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x180541de0, size 0x160, virtual true, abstract: false, final false
inline void Invoke(::Epic::OnlineServices::Auth::LoginCallbackInfo  loginCallbackInfo) ;

static inline ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180541f40, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSManager_OnAuthLoginCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSManager_OnAuthLoginCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSManager_OnAuthLoginCallback(EOSManager_OnAuthLoginCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSManager_OnAuthLoginCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSManager_OnAuthLoginCallback(EOSManager_OnAuthLoginCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18860};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback) == 0x80, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.MulticastDelegate
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSManager/OnAuthLogoutCallback
class CORDL_TYPE EOSManager_OnAuthLogoutCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180528c00, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Auth::LogoutCallbackInfo  data, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x180541ff0, size 0xe0, virtual true, abstract: false, final false
inline void Invoke(::Epic::OnlineServices::Auth::LogoutCallbackInfo  data) ;

static inline ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805420d0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSManager_OnAuthLogoutCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSManager_OnAuthLogoutCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSManager_OnAuthLogoutCallback(EOSManager_OnAuthLogoutCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSManager_OnAuthLogoutCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSManager_OnAuthLogoutCallback(EOSManager_OnAuthLogoutCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18861};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback) == 0x80, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.MulticastDelegate
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSManager/OnConnectLoginCallback
class CORDL_TYPE EOSManager_OnConnectLoginCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180528300, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Connect::LoginCallbackInfo  loginCallbackInfo, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x180542180, size 0xe0, virtual true, abstract: false, final false
inline void Invoke(::Epic::OnlineServices::Connect::LoginCallbackInfo  loginCallbackInfo) ;

static inline ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180542260, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSManager_OnConnectLoginCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSManager_OnConnectLoginCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSManager_OnConnectLoginCallback(EOSManager_OnConnectLoginCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSManager_OnConnectLoginCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSManager_OnConnectLoginCallback(EOSManager_OnConnectLoginCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18862};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback) == 0x80, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.MulticastDelegate
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSManager/OnCreateConnectUserCallback
class CORDL_TYPE EOSManager_OnCreateConnectUserCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1805275b0, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Connect::CreateUserCallbackInfo  createUserCallbackInfo, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x180541ff0, size 0xe0, virtual true, abstract: false, final false
inline void Invoke(::Epic::OnlineServices::Connect::CreateUserCallbackInfo  createUserCallbackInfo) ;

static inline ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805420d0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSManager_OnCreateConnectUserCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSManager_OnCreateConnectUserCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSManager_OnCreateConnectUserCallback(EOSManager_OnCreateConnectUserCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSManager_OnCreateConnectUserCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSManager_OnCreateConnectUserCallback(EOSManager_OnCreateConnectUserCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18863};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback) == 0x80, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.MulticastDelegate
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSManager/OnConnectLinkExternalAccountCallback
class CORDL_TYPE EOSManager_OnConnectLinkExternalAccountCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180527e60, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Connect::LinkAccountCallbackInfo  linkAccountCallbackInfo, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x180541ff0, size 0xe0, virtual true, abstract: false, final false
inline void Invoke(::Epic::OnlineServices::Connect::LinkAccountCallbackInfo  linkAccountCallbackInfo) ;

static inline ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805420d0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSManager_OnConnectLinkExternalAccountCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSManager_OnConnectLinkExternalAccountCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSManager_OnConnectLinkExternalAccountCallback(EOSManager_OnConnectLinkExternalAccountCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSManager_OnConnectLinkExternalAccountCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSManager_OnConnectLinkExternalAccountCallback(EOSManager_OnConnectLinkExternalAccountCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18864};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback) == 0x80, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.MulticastDelegate
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSManager/OnAuthLinkExternalAccountCallback
class CORDL_TYPE EOSManager_OnAuthLinkExternalAccountCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180527ec0, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Auth::LinkAccountCallbackInfo  linkAccountCallbackInfo, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x180541bf0, size 0x140, virtual true, abstract: false, final false
inline void Invoke(::Epic::OnlineServices::Auth::LinkAccountCallbackInfo  linkAccountCallbackInfo) ;

static inline ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180541d30, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSManager_OnAuthLinkExternalAccountCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSManager_OnAuthLinkExternalAccountCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSManager_OnAuthLinkExternalAccountCallback(EOSManager_OnAuthLinkExternalAccountCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSManager_OnAuthLinkExternalAccountCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSManager_OnAuthLinkExternalAccountCallback(EOSManager_OnAuthLinkExternalAccountCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18865};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback) == 0x80, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies 
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: true
// CS Name: PlayEveryWare.EpicOnlineServices.EOSManager/EOSState
struct CORDL_TYPE EOSManager_EOSState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EOSManager_EOSState_Unwrapped
enum struct __EOSManager_EOSState_Unwrapped : int32_t {
__E_NotStarted = static_cast<int32_t>(0x0),
__E_Starting = static_cast<int32_t>(0x1),
__E_Running = static_cast<int32_t>(0x2),
__E_Suspending = static_cast<int32_t>(0x3),
__E_Suspended = static_cast<int32_t>(0x4),
__E_ShuttingDown = static_cast<int32_t>(0x5),
__E_Shutdown = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EOSManager_EOSState_Unwrapped () const noexcept {
return static_cast<__EOSManager_EOSState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EOSManager_EOSState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EOSManager_EOSState(int32_t  value__) noexcept;

/// @brief Field NotStarted value: I32(0)
static ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState const NotStarted;

/// @brief Field Running value: I32(2)
static ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState const Running;

/// @brief Field Shutdown value: I32(6)
static ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState const Shutdown;

/// @brief Field ShuttingDown value: I32(5)
static ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState const ShuttingDown;

/// @brief Field Starting value: I32(1)
static ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState const Starting;

/// @brief Field Suspended value: I32(4)
static ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState const Suspended;

/// @brief Field Suspending value: I32(3)
static ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState const Suspending;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18866};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState) == 0x4, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies 
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: true
// CS Name: PlayEveryWare.EpicOnlineServices.EOSManager/EOSSingleton/EpicLauncherArgs
struct CORDL_TYPE EOSSingleton_EOSManager_EpicLauncherArgs {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr EOSSingleton_EOSManager_EpicLauncherArgs() ;

// Ctor Parameters [CppParam { name: "authLogin", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "authPassword", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "authType", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "epicApp", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "epicEnv", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "epicUsername", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "epicUserID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "epicLocale", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "epicSandboxID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "epicDeploymentID", ty: "::StringW", modifiers: "", def_value: None }]
constexpr EOSSingleton_EOSManager_EpicLauncherArgs(::StringW  authLogin, ::StringW  authPassword, ::StringW  authType, ::StringW  epicApp, ::StringW  epicEnv, ::StringW  epicUsername, ::StringW  epicUserID, ::StringW  epicLocale, ::StringW  epicSandboxID, ::StringW  epicDeploymentID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18867};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field authLogin, offset: 0x0, size: 0x8, def value: None
 ::StringW  authLogin;

/// @brief Field authPassword, offset: 0x8, size: 0x8, def value: None
 ::StringW  authPassword;

/// @brief Field authType, offset: 0x10, size: 0x8, def value: None
 ::StringW  authType;

/// @brief Field epicApp, offset: 0x18, size: 0x8, def value: None
 ::StringW  epicApp;

/// @brief Field epicEnv, offset: 0x20, size: 0x8, def value: None
 ::StringW  epicEnv;

/// @brief Field epicUsername, offset: 0x28, size: 0x8, def value: None
 ::StringW  epicUsername;

/// @brief Field epicUserID, offset: 0x30, size: 0x8, def value: None
 ::StringW  epicUserID;

/// @brief Field epicLocale, offset: 0x38, size: 0x8, def value: None
 ::StringW  epicLocale;

/// @brief Field epicSandboxID, offset: 0x40, size: 0x8, def value: None
 ::StringW  epicSandboxID;

/// @brief Field epicDeploymentID, offset: 0x48, size: 0x8, def value: None
 ::StringW  epicDeploymentID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_EpicLauncherArgs, authLogin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_EpicLauncherArgs, authPassword) == 0x8, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_EpicLauncherArgs, authType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_EpicLauncherArgs, epicApp) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_EpicLauncherArgs, epicEnv) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_EpicLauncherArgs, epicUsername) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_EpicLauncherArgs, epicUserID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_EpicLauncherArgs, epicLocale) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_EpicLauncherArgs, epicSandboxID) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_EpicLauncherArgs, epicDeploymentID) == 0x48, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_EpicLauncherArgs) == 0x50, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.MulticastDelegate
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSManager/EOSSingleton/PrintDelegateType
class CORDL_TYPE EOSSingleton_EOSManager_PrintDelegateType : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1803e3a20, size 0x30, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  str, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::StringW  str) ;

static inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805450a0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSSingleton_EOSManager_PrintDelegateType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSSingleton_EOSManager_PrintDelegateType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSSingleton_EOSManager_PrintDelegateType(EOSSingleton_EOSManager_PrintDelegateType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSSingleton_EOSManager_PrintDelegateType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSSingleton_EOSManager_PrintDelegateType(EOSSingleton_EOSManager_PrintDelegateType const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18868};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType) == 0x80, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSManager/EOSSingleton/<>c
class CORDL_TYPE EOSSingleton_EOSManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*  __9;

/// @brief Field <>9__36_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__36_0, put=setStaticF___9__36_0)) ::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallback*  __9__36_0;

/// @brief Field <>9__62_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__62_0, put=setStaticF___9__62_0)) ::Epic::OnlineServices::Auth::OnLoginStatusChangedCallback*  __9__62_0;

/// @brief Field <>9__66_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__66_0, put=setStaticF___9__66_0)) ::Epic::OnlineServices::Presence::SetPresenceCompleteCallback*  __9__66_0;

/// @brief Field <>9__69_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__69_0, put=setStaticF___9__69_0)) ::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallback*  __9__69_0;

/// @brief Field <>9__71_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__71_0, put=setStaticF___9__71_0)) ::Epic::OnlineServices::Auth::OnLogoutCallback*  __9__71_0;

static inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c* New_ctor() ;

/// @brief Method <ConfigureAuthStatusCallback>b__62_0, addr 0x180548bb0, size 0x70, virtual false, abstract: false, final false
inline void _ConfigureAuthStatusCallback_b__62_0(::by_ref<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfo>  callbackInfo) ;

/// @brief Method <InitializeOverlay>b__36_0, addr 0x180548c20, size 0x60, virtual false, abstract: false, final false
inline void _InitializeOverlay_b__36_0(::by_ref<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfo>  data) ;

/// @brief Method <OnShutdown>b__71_0, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _OnShutdown_b__71_0(::by_ref<::Epic::OnlineServices::Auth::LogoutCallbackInfo>  data) ;

/// @brief Method <RemovePersistentToken>b__69_0, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _RemovePersistentToken_b__69_0(::by_ref<::Epic::OnlineServices::Auth::DeletePersistentAuthCallbackInfo>  deletePersistentAuthCallbackInfo) ;

/// @brief Method <SetPresenceRichTextForUser>b__66_0, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _SetPresenceRichTextForUser_b__66_0(::by_ref<::Epic::OnlineServices::Presence::SetPresenceCallbackInfo>  callbackInfo) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c* getStaticF___9() ;

static inline ::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallback* getStaticF___9__36_0() ;

static inline ::Epic::OnlineServices::Auth::OnLoginStatusChangedCallback* getStaticF___9__62_0() ;

static inline ::Epic::OnlineServices::Presence::SetPresenceCompleteCallback* getStaticF___9__66_0() ;

static inline ::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallback* getStaticF___9__69_0() ;

static inline ::Epic::OnlineServices::Auth::OnLogoutCallback* getStaticF___9__71_0() ;

static inline void setStaticF___9(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*  value) ;

static inline void setStaticF___9__36_0(::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallback*  value) ;

static inline void setStaticF___9__62_0(::Epic::OnlineServices::Auth::OnLoginStatusChangedCallback*  value) ;

static inline void setStaticF___9__66_0(::Epic::OnlineServices::Presence::SetPresenceCompleteCallback*  value) ;

static inline void setStaticF___9__69_0(::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallback*  value) ;

static inline void setStaticF___9__71_0(::Epic::OnlineServices::Auth::OnLogoutCallback*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSSingleton_EOSManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSSingleton_EOSManager___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSSingleton_EOSManager___c(EOSSingleton_EOSManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSSingleton_EOSManager___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSSingleton_EOSManager___c(EOSSingleton_EOSManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18869};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSManager/EOSSingleton/<>c__DisplayClass50_0
class CORDL_TYPE EOSSingleton_EOSManager___c__DisplayClass50_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  __4__this;

/// @brief Field onCreateUserCallback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCreateUserCallback, put=__cordl_internal_set_onCreateUserCallback)) ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*  onCreateUserCallback;

static inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0* New_ctor() ;

/// @brief Method <CreateConnectUserWithContinuanceToken>b__0, addr 0x180549080, size 0xc0, virtual false, abstract: false, final false
inline void _CreateConnectUserWithContinuanceToken_b__0(::by_ref<::Epic::OnlineServices::Connect::CreateUserCallbackInfo>  createUserCallbackInfo) ;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton* const& __cordl_internal_get___4__this() const;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*& __cordl_internal_get___4__this() ;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback* const& __cordl_internal_get_onCreateUserCallback() const;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*& __cordl_internal_get_onCreateUserCallback() ;

constexpr void __cordl_internal_set___4__this(::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  value) ;

constexpr void __cordl_internal_set_onCreateUserCallback(::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSSingleton_EOSManager___c__DisplayClass50_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSSingleton_EOSManager___c__DisplayClass50_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSSingleton_EOSManager___c__DisplayClass50_0(EOSSingleton_EOSManager___c__DisplayClass50_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSSingleton_EOSManager___c__DisplayClass50_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSSingleton_EOSManager___c__DisplayClass50_0(EOSSingleton_EOSManager___c__DisplayClass50_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18870};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  _____4__this;

/// @brief Field onCreateUserCallback, offset: 0x18, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*  ___onCreateUserCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0, ___onCreateUserCallback) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0) == 0x20, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSManager/EOSSingleton/<>c__DisplayClass51_0
class CORDL_TYPE EOSSingleton_EOSManager___c__DisplayClass51_0 : public ::System::Object {
public:
// Declarations
/// @brief Field callback, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback*  callback;

static inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass51_0* New_ctor() ;

/// @brief Method <AuthLinkExternalAccountWithContinuanceToken>b__0, addr 0x180549140, size 0xe0, virtual false, abstract: false, final false
inline void _AuthLinkExternalAccountWithContinuanceToken_b__0(::by_ref<::Epic::OnlineServices::Auth::LinkAccountCallbackInfo>  linkAccountCallbackInfo) ;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback* const& __cordl_internal_get_callback() const;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback*& __cordl_internal_get_callback() ;

constexpr void __cordl_internal_set_callback(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSSingleton_EOSManager___c__DisplayClass51_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSSingleton_EOSManager___c__DisplayClass51_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSSingleton_EOSManager___c__DisplayClass51_0(EOSSingleton_EOSManager___c__DisplayClass51_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSSingleton_EOSManager___c__DisplayClass51_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSSingleton_EOSManager___c__DisplayClass51_0(EOSSingleton_EOSManager___c__DisplayClass51_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18871};

/// @brief Field callback, offset: 0x10, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback*  ___callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass51_0, ___callback) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass51_0) == 0x18, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSManager/EOSSingleton/<>c__DisplayClass52_0
class CORDL_TYPE EOSSingleton_EOSManager___c__DisplayClass52_0 : public ::System::Object {
public:
// Declarations
/// @brief Field callback, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback*  callback;

static inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass52_0* New_ctor() ;

/// @brief Method <ConnectLinkExternalAccountWithContinuanceToken>b__0, addr 0x180549220, size 0x40, virtual false, abstract: false, final false
inline void _ConnectLinkExternalAccountWithContinuanceToken_b__0(::by_ref<::Epic::OnlineServices::Connect::LinkAccountCallbackInfo>  linkAccountCallbackInfo) ;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback* const& __cordl_internal_get_callback() const;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback*& __cordl_internal_get_callback() ;

constexpr void __cordl_internal_set_callback(::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSSingleton_EOSManager___c__DisplayClass52_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSSingleton_EOSManager___c__DisplayClass52_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSSingleton_EOSManager___c__DisplayClass52_0(EOSSingleton_EOSManager___c__DisplayClass52_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSSingleton_EOSManager___c__DisplayClass52_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSSingleton_EOSManager___c__DisplayClass52_0(EOSSingleton_EOSManager___c__DisplayClass52_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18872};

/// @brief Field callback, offset: 0x10, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback*  ___callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass52_0, ___callback) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass52_0) == 0x18, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies Epic.OnlineServices.Connect.LoginOptions, System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSManager/EOSSingleton/<>c__DisplayClass56_0
class CORDL_TYPE EOSSingleton_EOSManager___c__DisplayClass56_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  __4__this;

/// @brief Field connectLoginOptions, offset 0x20, size 0x30 
 __declspec(property(get=__cordl_internal_get_connectLoginOptions, put=__cordl_internal_set_connectLoginOptions)) ::Epic::OnlineServices::Connect::LoginOptions  connectLoginOptions;

/// @brief Field doConnect, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_doConnect, put=__cordl_internal_set_doConnect)) ::System::Action_1<::Epic::OnlineServices::Connect::LoginOptions>*  doConnect;

/// @brief Field onloginCallback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onloginCallback, put=__cordl_internal_set_onloginCallback)) ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*  onloginCallback;

static inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0* New_ctor() ;

/// @brief Method <StartConnectLoginWithOptions>b__0, addr 0x180549260, size 0xe0, virtual false, abstract: false, final false
inline void _StartConnectLoginWithOptions_b__0(::Epic::OnlineServices::Connect::LoginOptions  loginOptions) ;

/// @brief Method <StartConnectLoginWithOptions>b__1, addr 0x180549340, size 0x120, virtual false, abstract: false, final false
inline void _StartConnectLoginWithOptions_b__1(::System::Threading::Tasks::Task_1<::StringW>*  task) ;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton* const& __cordl_internal_get___4__this() const;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*& __cordl_internal_get___4__this() ;

constexpr ::Epic::OnlineServices::Connect::LoginOptions const& __cordl_internal_get_connectLoginOptions() const;

constexpr ::Epic::OnlineServices::Connect::LoginOptions& __cordl_internal_get_connectLoginOptions() ;

constexpr ::System::Action_1<::Epic::OnlineServices::Connect::LoginOptions>* const& __cordl_internal_get_doConnect() const;

constexpr ::System::Action_1<::Epic::OnlineServices::Connect::LoginOptions>*& __cordl_internal_get_doConnect() ;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback* const& __cordl_internal_get_onloginCallback() const;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*& __cordl_internal_get_onloginCallback() ;

constexpr void __cordl_internal_set___4__this(::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  value) ;

constexpr void __cordl_internal_set_connectLoginOptions(::Epic::OnlineServices::Connect::LoginOptions  value) ;

constexpr void __cordl_internal_set_doConnect(::System::Action_1<::Epic::OnlineServices::Connect::LoginOptions>*  value) ;

constexpr void __cordl_internal_set_onloginCallback(::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSSingleton_EOSManager___c__DisplayClass56_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSSingleton_EOSManager___c__DisplayClass56_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSSingleton_EOSManager___c__DisplayClass56_0(EOSSingleton_EOSManager___c__DisplayClass56_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSSingleton_EOSManager___c__DisplayClass56_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSSingleton_EOSManager___c__DisplayClass56_0(EOSSingleton_EOSManager___c__DisplayClass56_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18873};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  _____4__this;

/// @brief Field onloginCallback, offset: 0x18, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*  ___onloginCallback;

/// @brief Field connectLoginOptions, offset: 0x20, size: 0x30, def value: None
 ::Epic::OnlineServices::Connect::LoginOptions  ___connectLoginOptions;

/// @brief Field doConnect, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<::Epic::OnlineServices::Connect::LoginOptions>*  ___doConnect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0, ___onloginCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0, ___connectLoginOptions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0, ___doConnect) == 0x50, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0) == 0x58, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies Epic.OnlineServices.Connect.LoginOptions, System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSManager/EOSSingleton/<>c__DisplayClass56_1
class CORDL_TYPE EOSSingleton_EOSManager___c__DisplayClass56_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0*  CS$__8__locals1;

/// @brief Field loginOptions, offset 0x10, size 0x30 
 __declspec(property(get=__cordl_internal_get_loginOptions, put=__cordl_internal_set_loginOptions)) ::Epic::OnlineServices::Connect::LoginOptions  loginOptions;

static inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1* New_ctor() ;

/// @brief Method <StartConnectLoginWithOptions>b__2, addr 0x180549460, size 0x1d0, virtual false, abstract: false, final false
inline void _StartConnectLoginWithOptions_b__2(::by_ref<::Epic::OnlineServices::Connect::LoginCallbackInfo>  connectLoginData) ;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::Epic::OnlineServices::Connect::LoginOptions const& __cordl_internal_get_loginOptions() const;

constexpr ::Epic::OnlineServices::Connect::LoginOptions& __cordl_internal_get_loginOptions() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0*  value) ;

constexpr void __cordl_internal_set_loginOptions(::Epic::OnlineServices::Connect::LoginOptions  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSSingleton_EOSManager___c__DisplayClass56_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSSingleton_EOSManager___c__DisplayClass56_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSSingleton_EOSManager___c__DisplayClass56_1(EOSSingleton_EOSManager___c__DisplayClass56_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSSingleton_EOSManager___c__DisplayClass56_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSSingleton_EOSManager___c__DisplayClass56_1(EOSSingleton_EOSManager___c__DisplayClass56_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18874};

/// @brief Field loginOptions, offset: 0x10, size: 0x30, def value: None
 ::Epic::OnlineServices::Connect::LoginOptions  ___loginOptions;

/// @brief Field CS$<>8__locals1, offset: 0x40, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1, ___loginOptions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1, ___CS$__8__locals1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1) == 0x48, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSManager/EOSSingleton/<>c__DisplayClass58_0
class CORDL_TYPE EOSSingleton_EOSManager___c__DisplayClass58_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  __4__this;

/// @brief Field completionDelegate, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_completionDelegate, put=__cordl_internal_set_completionDelegate)) ::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallback*  completionDelegate;

static inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0* New_ctor() ;

/// @brief Method <ConnectTransferDeviceIDAccount>b__0, addr 0x180549630, size 0xa0, virtual false, abstract: false, final false
inline void _ConnectTransferDeviceIDAccount_b__0(::by_ref<::Epic::OnlineServices::Connect::TransferDeviceIdAccountCallbackInfo>  data) ;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton* const& __cordl_internal_get___4__this() const;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*& __cordl_internal_get___4__this() ;

constexpr ::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallback* const& __cordl_internal_get_completionDelegate() const;

constexpr ::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallback*& __cordl_internal_get_completionDelegate() ;

constexpr void __cordl_internal_set___4__this(::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  value) ;

constexpr void __cordl_internal_set_completionDelegate(::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallback*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSSingleton_EOSManager___c__DisplayClass58_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSSingleton_EOSManager___c__DisplayClass58_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSSingleton_EOSManager___c__DisplayClass58_0(EOSSingleton_EOSManager___c__DisplayClass58_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSSingleton_EOSManager___c__DisplayClass58_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSSingleton_EOSManager___c__DisplayClass58_0(EOSSingleton_EOSManager___c__DisplayClass58_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18875};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  _____4__this;

/// @brief Field completionDelegate, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallback*  ___completionDelegate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0, ___completionDelegate) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0) == 0x20, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSManager/EOSSingleton/<>c__DisplayClass59_0
class CORDL_TYPE EOSSingleton_EOSManager___c__DisplayClass59_0 : public ::System::Object {
public:
// Declarations
/// @brief Field onLoginCallback, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onLoginCallback, put=__cordl_internal_set_onLoginCallback)) ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*  onLoginCallback;

static inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0* New_ctor() ;

/// @brief Method <StartPersistentLogin>b__0, addr 0x1805496d0, size 0x190, virtual false, abstract: false, final false
inline void _StartPersistentLogin_b__0(::Epic::OnlineServices::Auth::LoginCallbackInfo  callbackInfo) ;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback* const& __cordl_internal_get_onLoginCallback() const;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*& __cordl_internal_get_onLoginCallback() ;

constexpr void __cordl_internal_set_onLoginCallback(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSSingleton_EOSManager___c__DisplayClass59_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSSingleton_EOSManager___c__DisplayClass59_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSSingleton_EOSManager___c__DisplayClass59_0(EOSSingleton_EOSManager___c__DisplayClass59_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSSingleton_EOSManager___c__DisplayClass59_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSSingleton_EOSManager___c__DisplayClass59_0(EOSSingleton_EOSManager___c__DisplayClass59_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18876};

/// @brief Field onLoginCallback, offset: 0x10, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*  ___onLoginCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0, ___onLoginCallback) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0) == 0x18, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies Epic.OnlineServices.Auth.LoginCallbackInfo, System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSManager/EOSSingleton/<>c__DisplayClass59_1
class CORDL_TYPE EOSSingleton_EOSManager___c__DisplayClass59_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0*  CS$__8__locals1;

/// @brief Field callbackInfo, offset 0x10, size 0x60 
 __declspec(property(get=__cordl_internal_get_callbackInfo, put=__cordl_internal_set_callbackInfo)) ::Epic::OnlineServices::Auth::LoginCallbackInfo  callbackInfo;

static inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1* New_ctor() ;

/// @brief Method <StartPersistentLogin>b__1, addr 0x180549860, size 0x80, virtual false, abstract: false, final false
inline void _StartPersistentLogin_b__1(::by_ref<::Epic::OnlineServices::Auth::DeletePersistentAuthCallbackInfo>  deletePersistentAuthCallbackInfo) ;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::Epic::OnlineServices::Auth::LoginCallbackInfo const& __cordl_internal_get_callbackInfo() const;

constexpr ::Epic::OnlineServices::Auth::LoginCallbackInfo& __cordl_internal_get_callbackInfo() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0*  value) ;

constexpr void __cordl_internal_set_callbackInfo(::Epic::OnlineServices::Auth::LoginCallbackInfo  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSSingleton_EOSManager___c__DisplayClass59_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSSingleton_EOSManager___c__DisplayClass59_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSSingleton_EOSManager___c__DisplayClass59_1(EOSSingleton_EOSManager___c__DisplayClass59_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSSingleton_EOSManager___c__DisplayClass59_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSSingleton_EOSManager___c__DisplayClass59_1(EOSSingleton_EOSManager___c__DisplayClass59_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18877};

/// @brief Field callbackInfo, offset: 0x10, size: 0x60, def value: None
 ::Epic::OnlineServices::Auth::LoginCallbackInfo  ___callbackInfo;

/// @brief Field CS$<>8__locals1, offset: 0x70, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1, ___callbackInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1, ___CS$__8__locals1) == 0x70, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1) == 0x78, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies Epic.OnlineServices.Connect.LoginOptions, System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSManager/EOSSingleton/<>c__DisplayClass64_0
class CORDL_TYPE EOSSingleton_EOSManager___c__DisplayClass64_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  __4__this;

/// @brief Field connectLoginOptions, offset 0x18, size 0x30 
 __declspec(property(get=__cordl_internal_get_connectLoginOptions, put=__cordl_internal_set_connectLoginOptions)) ::Epic::OnlineServices::Connect::LoginOptions  connectLoginOptions;

static inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0* New_ctor() ;

/// @brief Method <ConfigureConnectExpirationCallback>b__0, addr 0x1805498e0, size 0x50, virtual false, abstract: false, final false
inline void _ConfigureConnectExpirationCallback_b__0(::by_ref<::Epic::OnlineServices::Connect::AuthExpirationCallbackInfo>  callbackInfo) ;

/// @brief Method <ConfigureConnectExpirationCallback>b__1, addr 0x180549930, size 0x50, virtual false, abstract: false, final false
inline void _ConfigureConnectExpirationCallback_b__1(uint64_t  handle) ;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton* const& __cordl_internal_get___4__this() const;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*& __cordl_internal_get___4__this() ;

constexpr ::Epic::OnlineServices::Connect::LoginOptions const& __cordl_internal_get_connectLoginOptions() const;

constexpr ::Epic::OnlineServices::Connect::LoginOptions& __cordl_internal_get_connectLoginOptions() ;

constexpr void __cordl_internal_set___4__this(::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  value) ;

constexpr void __cordl_internal_set_connectLoginOptions(::Epic::OnlineServices::Connect::LoginOptions  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSSingleton_EOSManager___c__DisplayClass64_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSSingleton_EOSManager___c__DisplayClass64_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSSingleton_EOSManager___c__DisplayClass64_0(EOSSingleton_EOSManager___c__DisplayClass64_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSSingleton_EOSManager___c__DisplayClass64_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSSingleton_EOSManager___c__DisplayClass64_0(EOSSingleton_EOSManager___c__DisplayClass64_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18878};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  _____4__this;

/// @brief Field connectLoginOptions, offset: 0x18, size: 0x30, def value: None
 ::Epic::OnlineServices::Connect::LoginOptions  ___connectLoginOptions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0, ___connectLoginOptions) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0) == 0x48, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies Epic.OnlineServices.Auth.LoginOptions, System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSManager/EOSSingleton/<>c__DisplayClass65_0
class CORDL_TYPE EOSSingleton_EOSManager___c__DisplayClass65_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  __4__this;

/// @brief Field loginOptions, offset 0x18, size 0x40 
 __declspec(property(get=__cordl_internal_get_loginOptions, put=__cordl_internal_set_loginOptions)) ::Epic::OnlineServices::Auth::LoginOptions  loginOptions;

/// @brief Field onLoginCallback, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_onLoginCallback, put=__cordl_internal_set_onLoginCallback)) ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*  onLoginCallback;

static inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0* New_ctor() ;

/// @brief Method <StartLoginWithLoginOptions>b__0, addr 0x180549980, size 0x2e0, virtual false, abstract: false, final false
inline void _StartLoginWithLoginOptions_b__0(::by_ref<::Epic::OnlineServices::Auth::LoginCallbackInfo>  data) ;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton* const& __cordl_internal_get___4__this() const;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*& __cordl_internal_get___4__this() ;

constexpr ::Epic::OnlineServices::Auth::LoginOptions const& __cordl_internal_get_loginOptions() const;

constexpr ::Epic::OnlineServices::Auth::LoginOptions& __cordl_internal_get_loginOptions() ;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback* const& __cordl_internal_get_onLoginCallback() const;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*& __cordl_internal_get_onLoginCallback() ;

constexpr void __cordl_internal_set___4__this(::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  value) ;

constexpr void __cordl_internal_set_loginOptions(::Epic::OnlineServices::Auth::LoginOptions  value) ;

constexpr void __cordl_internal_set_onLoginCallback(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSSingleton_EOSManager___c__DisplayClass65_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSSingleton_EOSManager___c__DisplayClass65_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSSingleton_EOSManager___c__DisplayClass65_0(EOSSingleton_EOSManager___c__DisplayClass65_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSSingleton_EOSManager___c__DisplayClass65_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSSingleton_EOSManager___c__DisplayClass65_0(EOSSingleton_EOSManager___c__DisplayClass65_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18879};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  _____4__this;

/// @brief Field loginOptions, offset: 0x18, size: 0x40, def value: None
 ::Epic::OnlineServices::Auth::LoginOptions  ___loginOptions;

/// @brief Field onLoginCallback, offset: 0x58, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*  ___onLoginCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0, ___loginOptions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0, ___onLoginCallback) == 0x58, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0) == 0x60, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSManager/EOSSingleton/<>c__DisplayClass67_0
class CORDL_TYPE EOSSingleton_EOSManager___c__DisplayClass67_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  __4__this;

/// @brief Field onLogoutCallback, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onLogoutCallback, put=__cordl_internal_set_onLogoutCallback)) ::Epic::OnlineServices::Auth::OnLogoutCallback*  onLogoutCallback;

static inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0* New_ctor() ;

/// @brief Method <StartLogout>b__0, addr 0x180549c60, size 0xf0, virtual false, abstract: false, final false
inline void _StartLogout_b__0(::by_ref<::Epic::OnlineServices::Auth::LogoutCallbackInfo>  data) ;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton* const& __cordl_internal_get___4__this() const;

constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*& __cordl_internal_get___4__this() ;

constexpr ::Epic::OnlineServices::Auth::OnLogoutCallback* const& __cordl_internal_get_onLogoutCallback() const;

constexpr ::Epic::OnlineServices::Auth::OnLogoutCallback*& __cordl_internal_get_onLogoutCallback() ;

constexpr void __cordl_internal_set___4__this(::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  value) ;

constexpr void __cordl_internal_set_onLogoutCallback(::Epic::OnlineServices::Auth::OnLogoutCallback*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSSingleton_EOSManager___c__DisplayClass67_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSSingleton_EOSManager___c__DisplayClass67_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSSingleton_EOSManager___c__DisplayClass67_0(EOSSingleton_EOSManager___c__DisplayClass67_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSSingleton_EOSManager___c__DisplayClass67_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSSingleton_EOSManager___c__DisplayClass67_0(EOSSingleton_EOSManager___c__DisplayClass67_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18880};

/// @brief Field onLogoutCallback, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Auth::OnLogoutCallback*  ___onLogoutCallback;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0, ___onLogoutCallback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0) == 0x20, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies Epic.OnlineServices.Connect.LoginOptions, Epic.OnlineServices.Connect.UserLoginInfo, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: true
// CS Name: PlayEveryWare.EpicOnlineServices.EOSManager/EOSSingleton/<StartConnectLoginWithEpicAccount>d__53
struct CORDL_TYPE EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1805484f0, size 0x4a0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038a820, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*", modifiers: "", def_value: None }, CppParam { name: "epicAccountId", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "onConnectLoginCallback", ty: "::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*", modifiers: "", def_value: None }, CppParam { name: "_connectLoginOptions_5__2", ty: "::Epic::OnlineServices::Connect::LoginOptions", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Epic::OnlineServices::Connect::UserLoginInfo>", modifiers: "", def_value: None }]
constexpr EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  __4__this, ::Epic::OnlineServices::EpicAccountId*  epicAccountId, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*  onConnectLoginCallback, ::Epic::OnlineServices::Connect::LoginOptions  _connectLoginOptions_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Epic::OnlineServices::Connect::UserLoginInfo>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18881};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  __4__this;

/// @brief Field epicAccountId, offset: 0x30, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  epicAccountId;

/// @brief Field onConnectLoginCallback, offset: 0x38, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*  onConnectLoginCallback;

/// @brief Field <connectLoginOptions>5__2, offset: 0x40, size: 0x30, def value: None
 ::Epic::OnlineServices::Connect::LoginOptions  _connectLoginOptions_5__2;

/// @brief Field <>u__1, offset: 0x70, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Epic::OnlineServices::Connect::UserLoginInfo>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53, epicAccountId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53, onConnectLoginCallback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53, _connectLoginOptions_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53, __u__1) == 0x70, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53) == 0x78, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSManager/EOSSingleton
class CORDL_TYPE EOSManager_EOSSingleton : public ::System::Object {
public:
// Declarations
using EpicLauncherArgs = ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_EpicLauncherArgs;

using PrintDelegateType = ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType;

using _StartConnectLoginWithEpicAccount_d__53 = ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53;

using __c = ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c;

using __c__DisplayClass50_0 = ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0;

using __c__DisplayClass51_0 = ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass51_0;

using __c__DisplayClass52_0 = ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass52_0;

using __c__DisplayClass56_0 = ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0;

using __c__DisplayClass56_1 = ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1;

using __c__DisplayClass58_0 = ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0;

using __c__DisplayClass59_0 = ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0;

using __c__DisplayClass59_1 = ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1;

using __c__DisplayClass64_0 = ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0;

using __c__DisplayClass65_0 = ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0;

using __c__DisplayClass67_0 = ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0;

/// @brief Field LoadedDLLs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LoadedDLLs, put=setStaticF_LoadedDLLs)) ::System::Collections::Generic::Dictionary_2<::StringW,::PlayEveryWare::EpicOnlineServices::DLLHandle*>*  LoadedDLLs;

/// @brief Field hasSetLoggingCallback, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasSetLoggingCallback, put=setStaticF_hasSetLoggingCallback)) bool  hasSetLoggingCallback;

/// @brief Field s_eosPlatformInterface, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_eosPlatformInterface, put=setStaticF_s_eosPlatformInterface)) ::Epic::OnlineServices::Platform::PlatformInterface*  s_eosPlatformInterface;

/// @brief Field s_eosUnloadSDKOnShutdown, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_eosUnloadSDKOnShutdown, put=setStaticF_s_eosUnloadSDKOnShutdown)) bool  s_eosUnloadSDKOnShutdown;

/// @brief Field s_hasInitializedPlatform, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_hasInitializedPlatform, put=setStaticF_s_hasInitializedPlatform)) bool  s_hasInitializedPlatform;

/// @brief Field s_localProductUserId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_localProductUserId, put=setStaticF_s_localProductUserId)) ::Epic::OnlineServices::ProductUserId*  s_localProductUserId;

/// @brief Field s_localUserId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_localUserId, put=setStaticF_s_localUserId)) ::Epic::OnlineServices::EpicAccountId*  s_localUserId;

/// @brief Field s_nextNetworkStatusUpdateTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_nextNetworkStatusUpdateTime, put=setStaticF_s_nextNetworkStatusUpdateTime)) float_t  s_nextNetworkStatusUpdateTime;

/// @brief Field s_notifyConnectAuthExpirationCallbackHandle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_notifyConnectAuthExpirationCallbackHandle, put=setStaticF_s_notifyConnectAuthExpirationCallbackHandle)) ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*  s_notifyConnectAuthExpirationCallbackHandle;

/// @brief Field s_notifyConnectLoginStatusChangedCallbackHandle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_notifyConnectLoginStatusChangedCallbackHandle, put=setStaticF_s_notifyConnectLoginStatusChangedCallbackHandle)) ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*  s_notifyConnectLoginStatusChangedCallbackHandle;

/// @brief Field s_notifyLoginStatusChangedCallbackHandle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_notifyLoginStatusChangedCallbackHandle, put=setStaticF_s_notifyLoginStatusChangedCallbackHandle)) ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*  s_notifyLoginStatusChangedCallbackHandle;

/// @brief Method AddAllAssembliesInCurrentDomain, addr 0x1805392d0, size 0xd0, virtual false, abstract: false, final false
static inline void AddAllAssembliesInCurrentDomain(::System::Collections::Generic::List_1<::System::Reflection::Assembly*>*  list) ;

/// @brief Method AddApplicationCloseListener, addr 0x1805393a0, size 0xa0, virtual false, abstract: false, final false
inline void AddApplicationCloseListener(::System::Action*  listener) ;

/// @brief Method AddAuthLoginListener, addr 0x180539440, size 0x1c0, virtual false, abstract: false, final false
inline void AddAuthLoginListener(::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin*  authLogin) ;

/// @brief Method AddAuthLogoutListener, addr 0x180539600, size 0x1c0, virtual false, abstract: false, final false
inline void AddAuthLogoutListener(::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout*  authLogout) ;

/// @brief Method AddConnectLoginListener, addr 0x1805397c0, size 0x1c0, virtual false, abstract: false, final false
inline void AddConnectLoginListener(::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin*  connectLogin) ;

/// @brief Method ApplyCommandLineArguments, addr 0x180539980, size 0x420, virtual false, abstract: false, final false
inline void ApplyCommandLineArguments() ;

/// @brief Method AuthLinkExternalAccountWithContinuanceToken, addr 0x180539da0, size 0x180, virtual false, abstract: false, final false
inline void AuthLinkExternalAccountWithContinuanceToken(::Epic::OnlineServices::ContinuanceToken*  token, ::Epic::OnlineServices::Auth::LinkAccountFlags  linkAccountFlags, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback*  callback) ;

/// @brief Method ClearConnectId, addr 0x180539f20, size 0xa0, virtual false, abstract: false, final false
inline void ClearConnectId(::Epic::OnlineServices::ProductUserId*  userId) ;

/// @brief Method ConfigureAuthStatusCallback, addr 0x180539fc0, size 0x260, virtual false, abstract: false, final false
inline void ConfigureAuthStatusCallback() ;

/// @brief Method ConfigureConnectExpirationCallback, addr 0x18053a220, size 0x200, virtual false, abstract: false, final false
inline void ConfigureConnectExpirationCallback(::Epic::OnlineServices::Connect::LoginOptions  connectLoginOptions) ;

/// @brief Method ConfigureConnectStatusCallback, addr 0x18053a420, size 0x200, virtual false, abstract: false, final false
inline void ConfigureConnectStatusCallback() ;

/// @brief Method ConnectLinkExternalAccountWithContinuanceToken, addr 0x18053a620, size 0x130, virtual false, abstract: false, final false
inline void ConnectLinkExternalAccountWithContinuanceToken(::Epic::OnlineServices::ContinuanceToken*  token, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback*  callback) ;

/// @brief Method ConnectTransferDeviceIDAccount, addr 0x18053a750, size 0xe0, virtual false, abstract: false, final false
inline void ConnectTransferDeviceIDAccount(::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallback*  completionDelegate) ;

/// @brief Method CreateConnectUserWithContinuanceToken, addr 0x18053a830, size 0xf0, virtual false, abstract: false, final false
inline void CreateConnectUserWithContinuanceToken(::Epic::OnlineServices::ContinuanceToken*  token, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*  onCreateUserCallback) ;

/// @brief Method CreatePlatformInterface, addr 0x18053a920, size 0x30, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Platform::PlatformInterface* CreatePlatformInterface() ;

/// @brief Method EOS_GetPlatformInterface, addr 0x18053a950, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr EOS_GetPlatformInterface() ;

/// @brief Method ForceUnloadEOSLibrary, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void ForceUnloadEOSLibrary() ;

/// @brief Method GetCommandLineArgsFromEpicLauncher, addr 0x18053a9c0, size 0x3d0, virtual false, abstract: false, final false
static inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_EpicLauncherArgs GetCommandLineArgsFromEpicLauncher() ;

/// @brief Method GetDeploymentID, addr 0x18053ad90, size 0x60, virtual false, abstract: false, final false
inline ::StringW GetDeploymentID() ;

/// @brief Method GetEOSAchievementInterface, addr 0x18053adf0, size 0x30, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Achievements::AchievementsInterface* GetEOSAchievementInterface() ;

/// @brief Method GetEOSApplicationStatus, addr 0x18053ae20, size 0x30, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Platform::ApplicationStatus GetEOSApplicationStatus() ;

/// @brief Method GetEOSAuthInterface, addr 0x18053ae50, size 0x30, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Auth::AuthInterface* GetEOSAuthInterface() ;

/// @brief Method GetEOSConnectInterface, addr 0x18053ae80, size 0x30, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Connect::ConnectInterface* GetEOSConnectInterface() ;

/// @brief Method GetEOSEcomInterface, addr 0x18053aeb0, size 0x30, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Ecom::EcomInterface* GetEOSEcomInterface() ;

/// @brief Method GetEOSFriendsInterface, addr 0x18053aee0, size 0x30, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Friends::FriendsInterface* GetEOSFriendsInterface() ;

/// @brief Method GetEOSLeaderboardsInterface, addr 0x18053af10, size 0x30, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Leaderboards::LeaderboardsInterface* GetEOSLeaderboardsInterface() ;

/// @brief Method GetEOSLobbyInterface, addr 0x18053af40, size 0x30, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Lobby::LobbyInterface* GetEOSLobbyInterface() ;

/// @brief Method GetEOSMetricsInterface, addr 0x18053af70, size 0x30, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Metrics::MetricsInterface* GetEOSMetricsInterface() ;

/// @brief Method GetEOSModsInterface, addr 0x18053afa0, size 0x30, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Mods::ModsInterface* GetEOSModsInterface() ;

/// @brief Method GetEOSP2PInterface, addr 0x18053afd0, size 0x30, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::P2P::P2PInterface* GetEOSP2PInterface() ;

/// @brief Method GetEOSPlatformInterface, addr 0x18053b000, size 0x240, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Platform::PlatformInterface* GetEOSPlatformInterface() ;

/// @brief Method GetEOSPresenceInterface, addr 0x18053b240, size 0x30, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Presence::PresenceInterface* GetEOSPresenceInterface() ;

/// @brief Method GetEOSRTCInterface, addr 0x18053b270, size 0x30, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::RTC::RTCInterface* GetEOSRTCInterface() ;

/// @brief Method GetEOSSessionsInterface, addr 0x18053b2a0, size 0x30, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Sessions::SessionsInterface* GetEOSSessionsInterface() ;

/// @brief Method GetEOSStatsInterface, addr 0x18053b2d0, size 0x30, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Stats::StatsInterface* GetEOSStatsInterface() ;

/// @brief Method GetEOSTitleStorageInterface, addr 0x18053b300, size 0x30, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::TitleStorage::TitleStorageInterface* GetEOSTitleStorageInterface() ;

/// @brief Method GetEOSUIInterface, addr 0x18053b330, size 0x30, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::UI::UIInterface* GetEOSUIInterface() ;

/// @brief Method GetEOSUserInfoInterface, addr 0x18053b360, size 0x30, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::UserInfo::UserInfoInterface* GetEOSUserInfoInterface() ;

/// @brief Method GetLocalUserId, addr 0x18053b390, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* GetLocalUserId() ;

/// @brief Method GetLogLevel, addr 0x18053b3d0, size 0x220, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Logging::LogLevel GetLogLevel(::Epic::OnlineServices::Logging::LogCategory  Category) ;

/// @brief Method GetOrCreateManager, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetOrCreateManager() ;

/// @brief Method GetPlayerDataStorageInterface, addr 0x18053b5f0, size 0x60, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface* GetPlayerDataStorageInterface() ;

/// @brief Method GetProductId, addr 0x18053b650, size 0x50, virtual false, abstract: false, final false
inline ::StringW GetProductId() ;

/// @brief Method GetProductUserId, addr 0x18053b6a0, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* GetProductUserId() ;

/// @brief Method GetSandboxId, addr 0x18053b6e0, size 0x40, virtual false, abstract: false, final false
inline ::StringW GetSandboxId() ;

/// @brief Method GetUserAuthTokenForAccountId, addr 0x18053b720, size 0x90, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::Auth::Token> GetUserAuthTokenForAccountId(::Epic::OnlineServices::EpicAccountId*  accountId) ;

/// @brief Method HasLoggedInWithConnect, addr 0x18053b7b0, size 0x40, virtual false, abstract: false, final false
inline bool HasLoggedInWithConnect() ;

/// @brief Method HasShutdown, addr 0x18053b7f0, size 0x40, virtual false, abstract: false, final false
inline bool HasShutdown() ;

/// @brief Method Init, addr 0x18053b830, size 0x320, virtual false, abstract: false, final false
inline void Init(::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*  coroutineOwner, ::StringW  configFileName) ;

/// @brief Method InitializeLogLevels, addr 0x18053bb50, size 0x90, virtual false, abstract: false, final false
inline void InitializeLogLevels() ;

/// @brief Method InitializeNetworkChecks, addr 0x18053bbe0, size 0x40, virtual false, abstract: false, final false
inline void InitializeNetworkChecks(::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*  coroutineOwner) ;

/// @brief Method InitializeOverlay, addr 0x18053bc20, size 0x1a0, virtual false, abstract: false, final false
inline void InitializeOverlay(::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*  coroutineOwner) ;

/// @brief Method InitializePlatformInterface, addr 0x18053bdc0, size 0x60, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result InitializePlatformInterface() ;

/// @brief Method IsEncryptionKeyValid, addr 0x18053be20, size 0x40, virtual false, abstract: false, final false
inline bool IsEncryptionKeyValid() ;

/// @brief Method IsOverlayOpenWithExclusiveInput, addr 0x18053be60, size 0x40, virtual false, abstract: false, final false
inline bool IsOverlayOpenWithExclusiveInput() ;

/// @brief Method LoadDelegatesWithEOSBindingAPI, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void LoadDelegatesWithEOSBindingAPI() ;

/// @brief Method LoadDynamicLibrary, addr 0x18053bea0, size 0x210, virtual false, abstract: false, final false
static inline ::PlayEveryWare::EpicOnlineServices::DLLHandle* LoadDynamicLibrary(::StringW  libraryName) ;

/// @brief Method LoadEOSLibraries, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void LoadEOSLibraries() ;

/// @brief Method Log, addr 0x18053c0b0, size 0xa0, virtual false, abstract: false, final false
static inline void Log(::StringW  toPrint, ::UnityEngine::LogType  type) ;

/// @brief Method MakeLoginOptions, addr 0x18053c150, size 0x140, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Auth::LoginOptions MakeLoginOptions(::Epic::OnlineServices::Auth::LoginCredentialType  loginType, ::Epic::OnlineServices::ExternalCredentialType  externalCredentialType, ::StringW  id, ::StringW  token) ;

static inline ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton* New_ctor() ;

/// @brief Method OnApplicationConstrained, addr 0x18053c290, size 0x70, virtual false, abstract: false, final false
inline void OnApplicationConstrained(bool  isConstrained, bool  shouldUpdateEOSAppStatus) ;

/// @brief Method OnApplicationFocus, addr 0x18053c300, size 0x50, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  hasFocus) ;

/// @brief Method OnApplicationPause, addr 0x18053c350, size 0x50, virtual false, abstract: false, final false
inline void OnApplicationPause(bool  isPaused) ;

/// @brief Method OnApplicationShutdown, addr 0x18053c3a0, size 0x190, virtual false, abstract: false, final false
inline void OnApplicationShutdown() ;

/// @brief Method OnShutdown, addr 0x18053c530, size 0x410, virtual false, abstract: false, final false
inline void OnShutdown() ;

/// @brief Method PUIDToString, addr 0x18053c940, size 0x50, virtual false, abstract: false, final false
inline ::StringW PUIDToString(::Epic::OnlineServices::ProductUserId*  puid) ;

/// @brief Method RegisterForPlatformNotifications, addr 0x18053c990, size 0x30, virtual false, abstract: false, final false
inline void RegisterForPlatformNotifications() ;

/// @brief Method RemoveAuthLoginListener, addr 0x18053c9c0, size 0x1c0, virtual false, abstract: false, final false
inline void RemoveAuthLoginListener(::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin*  authLogin) ;

/// @brief Method RemoveAuthLogoutListener, addr 0x18053cb80, size 0x1c0, virtual false, abstract: false, final false
inline void RemoveAuthLogoutListener(::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout*  authLogout) ;

/// @brief Method RemoveConnectLoginListener, addr 0x18053cd40, size 0x1c0, virtual false, abstract: false, final false
inline void RemoveConnectLoginListener(::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin*  connectLogin) ;

/// @brief Method RemoveManager, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void RemoveManager() ;

/// @brief Method RemovePersistentToken, addr 0x18053cf00, size 0x110, virtual false, abstract: false, final false
inline void RemovePersistentToken() ;

/// @brief Method SetEOSApplicationStatus, addr 0x18053d010, size 0x60, virtual false, abstract: false, final false
inline void SetEOSApplicationStatus(::Epic::OnlineServices::Platform::ApplicationStatus  newStatus) ;

/// @brief Method SetEOSPlatformInterface, addr 0x18053d070, size 0x90, virtual false, abstract: false, final false
inline void SetEOSPlatformInterface(::Epic::OnlineServices::Platform::PlatformInterface*  platformInterface) ;

/// @brief Method SetLocalProductUserId, addr 0x18053d100, size 0x60, virtual false, abstract: false, final false
inline void SetLocalProductUserId(::Epic::OnlineServices::ProductUserId*  localProductUserId) ;

/// @brief Method SetLocalUserId, addr 0x18053d160, size 0x60, virtual false, abstract: false, final false
inline void SetLocalUserId(::Epic::OnlineServices::EpicAccountId*  localUserId) ;

/// @brief Method SetLogLevel, addr 0x18053d1c0, size 0x310, virtual false, abstract: false, final false
inline void SetLogLevel(::Epic::OnlineServices::Logging::LogCategory  Category, ::Epic::OnlineServices::Logging::LogLevel  Level) ;

/// @brief Method SetPresenceRichTextForUser, addr 0x18053d4d0, size 0x1f0, virtual false, abstract: false, final false
inline void SetPresenceRichTextForUser(::Epic::OnlineServices::EpicAccountId*  accountId, ::StringW  richText) ;

/// @brief Method ShouldOverlayReceiveInput, addr 0x18053d6c0, size 0x70, virtual false, abstract: false, final false
inline bool ShouldOverlayReceiveInput() ;

/// @brief Method ShutdownPlatformInterface, addr 0x18053d730, size 0x60, virtual false, abstract: false, final false
inline void ShutdownPlatformInterface() ;

/// @brief Method SimplePrintCallback, addr 0x18053d7e0, size 0x150, virtual false, abstract: false, final false
static inline void SimplePrintCallback(::by_ref<::Epic::OnlineServices::Logging::LogMessage>  message) ;

/// @brief Method SimplePrintCallbackWithCallstack, addr 0x18053d790, size 0x50, virtual false, abstract: false, final false
static inline void SimplePrintCallbackWithCallstack(::Epic::OnlineServices::Logging::LogMessage  message) ;

/// @brief Method SimplePrintStringCallback, addr 0x18053d930, size 0x70, virtual false, abstract: false, final false
static inline void SimplePrintStringCallback(::StringW  str) ;

/// @brief Method StartConnectLoginWithDeviceToken, addr 0x18053d9a0, size 0x180, virtual false, abstract: false, final false
inline void StartConnectLoginWithDeviceToken(::StringW  displayName, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*  onLoginCallback) ;

/// @brief Method StartConnectLoginWithEpicAccount, addr 0x18053db20, size 0xe0, virtual false, abstract: false, final false
inline void StartConnectLoginWithEpicAccount(::Epic::OnlineServices::EpicAccountId*  epicAccountId, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*  onConnectLoginCallback) ;

/// @brief Method StartConnectLoginWithOptions, addr 0x18053de50, size 0x1a0, virtual false, abstract: false, final false
inline void StartConnectLoginWithOptions(::Epic::OnlineServices::Connect::LoginOptions  connectLoginOptions, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*  onloginCallback, bool  requiresAuthRefresh) ;

/// @brief Method StartConnectLoginWithOptions, addr 0x18053dc30, size 0x220, virtual false, abstract: false, final false
inline void StartConnectLoginWithOptions(::Epic::OnlineServices::ExternalCredentialType  externalCredentialType, ::StringW  token, ::StringW  displayname, ::StringW  nsaIdToken, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*  onloginCallback) ;

/// @brief Method StartConnectLoginWithOptions, addr 0x18053dc00, size 0x30, virtual false, abstract: false, final false
inline void StartConnectLoginWithOptions(::Epic::OnlineServices::ExternalCredentialType  externalCredentialType, ::StringW  token, ::StringW  displayname, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*  onloginCallback) ;

/// @brief Method StartLoginWithLoginOptions, addr 0x18053dff0, size 0x150, virtual false, abstract: false, final false
inline void StartLoginWithLoginOptions(::Epic::OnlineServices::Auth::LoginOptions  loginOptions, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*  onLoginCallback) ;

/// @brief Method StartLoginWithLoginTypeAndToken, addr 0x18053e290, size 0x280, virtual false, abstract: false, final false
inline void StartLoginWithLoginTypeAndToken(::Epic::OnlineServices::Auth::LoginCredentialType  loginType, ::Epic::OnlineServices::ExternalCredentialType  externalCredentialType, ::StringW  id, ::StringW  token, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*  onLoginCallback) ;

/// @brief Method StartLoginWithLoginTypeAndToken, addr 0x18053e140, size 0x150, virtual false, abstract: false, final false
inline void StartLoginWithLoginTypeAndToken(::Epic::OnlineServices::Auth::LoginCredentialType  loginType, ::StringW  id, ::StringW  token, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*  onLoginCallback) ;

/// @brief Method StartLogout, addr 0x18053e510, size 0x100, virtual false, abstract: false, final false
inline void StartLogout(::Epic::OnlineServices::EpicAccountId*  accountId, ::Epic::OnlineServices::Auth::OnLogoutCallback*  onLogoutCallback) ;

/// @brief Method StartPersistentLogin, addr 0x18053e610, size 0x110, virtual false, abstract: false, final false
inline void StartPersistentLogin(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*  onLoginCallback) ;

/// @brief Method Tick, addr 0x18053e720, size 0x1c0, virtual false, abstract: false, final false
inline void Tick() ;

/// @brief Method UnloadAllLibraries, addr 0x18053ea90, size 0x140, virtual false, abstract: false, final false
static inline void UnloadAllLibraries() ;

/// @brief Method UpdateApplicationConstrainedState, addr 0x18053ebd0, size 0xb0, virtual false, abstract: false, final false
inline void UpdateApplicationConstrainedState() ;

/// @brief Method UpdateEOSApplicationStatus, addr 0x18053ec80, size 0xc0, virtual false, abstract: false, final false
inline void UpdateEOSApplicationStatus() ;

/// @brief Method UpdateNetworkStatus, addr 0x18053ed40, size 0x30, virtual false, abstract: false, final false
static inline void UpdateNetworkStatus() ;

/// @brief Method <ConfigureAuthStatusCallback>b__62_1, addr 0x18053e8e0, size 0x40, virtual false, abstract: false, final false
inline void _ConfigureAuthStatusCallback_b__62_1(uint64_t  handle) ;

/// @brief Method <ConfigureConnectStatusCallback>b__63_0, addr 0x18053e920, size 0xd0, virtual false, abstract: false, final false
inline void _ConfigureConnectStatusCallback_b__63_0(::by_ref<::Epic::OnlineServices::Connect::LoginStatusChangedCallbackInfo>  callbackInfo) ;

/// @brief Method <ConfigureConnectStatusCallback>b__63_1, addr 0x18053e9f0, size 0x40, virtual false, abstract: false, final false
inline void _ConfigureConnectStatusCallback_b__63_1(uint64_t  handle) ;

/// @brief Method <GetCommandLineArgsFromEpicLauncher>g__ConfigureEpicArgument|49_0, addr 0x18053ea30, size 0x60, virtual false, abstract: false, final false
static inline void _GetCommandLineArgsFromEpicLauncher_g__ConfigureEpicArgument_49_0(::StringW  argument, ::by_ref<::StringW>  argumentString) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::PlayEveryWare::EpicOnlineServices::DLLHandle*>* getStaticF_LoadedDLLs() ;

static inline bool getStaticF_hasSetLoggingCallback() ;

static inline ::Epic::OnlineServices::Platform::PlatformInterface* getStaticF_s_eosPlatformInterface() ;

static inline bool getStaticF_s_eosUnloadSDKOnShutdown() ;

static inline bool getStaticF_s_hasInitializedPlatform() ;

static inline ::Epic::OnlineServices::ProductUserId* getStaticF_s_localProductUserId() ;

static inline ::Epic::OnlineServices::EpicAccountId* getStaticF_s_localUserId() ;

static inline float_t getStaticF_s_nextNetworkStatusUpdateTime() ;

static inline ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle* getStaticF_s_notifyConnectAuthExpirationCallbackHandle() ;

static inline ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle* getStaticF_s_notifyConnectLoginStatusChangedCallbackHandle() ;

static inline ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle* getStaticF_s_notifyLoginStatusChangedCallbackHandle() ;

/// @brief Method global_log_flush_with_function, addr 0x18053edf0, size 0x90, virtual false, abstract: false, final false
static inline void global_log_flush_with_function(::System::IntPtr  ptr) ;

static inline void setStaticF_LoadedDLLs(::System::Collections::Generic::Dictionary_2<::StringW,::PlayEveryWare::EpicOnlineServices::DLLHandle*>*  value) ;

static inline void setStaticF_hasSetLoggingCallback(bool  value) ;

static inline void setStaticF_s_eosPlatformInterface(::Epic::OnlineServices::Platform::PlatformInterface*  value) ;

static inline void setStaticF_s_eosUnloadSDKOnShutdown(bool  value) ;

static inline void setStaticF_s_hasInitializedPlatform(bool  value) ;

static inline void setStaticF_s_localProductUserId(::Epic::OnlineServices::ProductUserId*  value) ;

static inline void setStaticF_s_localUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

static inline void setStaticF_s_nextNetworkStatusUpdateTime(float_t  value) ;

static inline void setStaticF_s_notifyConnectAuthExpirationCallbackHandle(::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*  value) ;

static inline void setStaticF_s_notifyConnectLoginStatusChangedCallbackHandle(::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*  value) ;

static inline void setStaticF_s_notifyLoginStatusChangedCallbackHandle(::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSManager_EOSSingleton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSManager_EOSSingleton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSManager_EOSSingleton(EOSManager_EOSSingleton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSManager_EOSSingleton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSManager_EOSSingleton(EOSManager_EOSSingleton const& ) = delete;

/// @brief Field EOSBinaryName offset 0xffffffff size 0x8
static constexpr ::ConstString  EOSBinaryName{u"EOSSDK-Win64-Shipping"};

/// @brief Field GfxPluginNativeRenderPath offset 0xffffffff size 0x8
static constexpr ::ConstString  GfxPluginNativeRenderPath{u"GfxPluginNativeRender-x64"};

/// @brief Field NetworkStatusUpdateIntervalSecs offset 0xffffffff size 0x4
static constexpr float_t  NetworkStatusUpdateIntervalSecs{static_cast<float_t>(0.5f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18882};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies PlayEveryWare.EpicOnlineServices.EOSManager::EOSState, UnityEngine.MonoBehaviour
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSManager
class CORDL_TYPE EOSManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EOSSingleton = ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton;

using EOSState = ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState;

using OnAuthLinkExternalAccountCallback = ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback;

using OnAuthLoginCallback = ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback;

using OnAuthLogoutCallback = ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback;

using OnConnectLinkExternalAccountCallback = ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback;

using OnConnectLoginCallback = ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback;

using OnCreateConnectUserCallback = ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback;

/// @brief Field CleanupUserLoginToken, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CleanupUserLoginToken, put=setStaticF_CleanupUserLoginToken)) ::System::Action*  CleanupUserLoginToken;

/// @brief Field GetUserLoginInfo, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GetUserLoginInfo, put=setStaticF_GetUserLoginInfo)) ::System::Func_1<::System::Threading::Tasks::Task_1<::Epic::OnlineServices::Connect::UserLoginInfo>*>*  GetUserLoginInfo;

/// @brief Field GetUserLoginToken, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GetUserLoginToken, put=setStaticF_GetUserLoginToken)) ::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*  GetUserLoginToken;

/// @brief Field OnAuthLogin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnAuthLogin, put=setStaticF_OnAuthLogin)) ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*  OnAuthLogin;

/// @brief Field OnAuthLogout, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnAuthLogout, put=setStaticF_OnAuthLogout)) ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*  OnAuthLogout;

/// @brief Field OnConnectLogin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnConnectLogin, put=setStaticF_OnConnectLogin)) ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*  OnConnectLogin;

/// @brief Field ShouldShutdownOnApplicationQuit, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShouldShutdownOnApplicationQuit, put=__cordl_internal_set_ShouldShutdownOnApplicationQuit)) bool  ShouldShutdownOnApplicationQuit;

/// @brief Field logLevels, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_logLevels, put=setStaticF_logLevels)) ::System::Collections::Generic::Dictionary_2<::Epic::OnlineServices::Logging::LogCategory,::Epic::OnlineServices::Logging::LogLevel>*  logLevels;

/// @brief Field loggedInAccountIDs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_loggedInAccountIDs, put=setStaticF_loggedInAccountIDs)) ::System::Collections::Generic::List_1<::Epic::OnlineServices::EpicAccountId*>*  loggedInAccountIDs;

/// @brief Field s_DoesOverlayHaveExcusiveInput, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_DoesOverlayHaveExcusiveInput, put=setStaticF_s_DoesOverlayHaveExcusiveInput)) bool  s_DoesOverlayHaveExcusiveInput;

/// @brief Field s_EOSManagerInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_EOSManagerInstance, put=setStaticF_s_EOSManagerInstance)) ::UnityW<::PlayEveryWare::EpicOnlineServices::EOSManager>  s_EOSManagerInstance;

/// @brief Field s_enqueuedTasks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_enqueuedTasks, put=setStaticF_s_enqueuedTasks)) ::System::Collections::Generic::List_1<::System::Action*>*  s_enqueuedTasks;

/// @brief Field s_enqueuedTasksLock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_enqueuedTasksLock, put=setStaticF_s_enqueuedTasksLock)) ::System::Object*  s_enqueuedTasksLock;

/// @brief Field s_hasFocus, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_hasFocus, put=setStaticF_s_hasFocus)) bool  s_hasFocus;

/// @brief Field s_instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_instance, put=setStaticF_s_instance)) ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  s_instance;

/// @brief Field s_isConstrained, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_isConstrained, put=setStaticF_s_isConstrained)) bool  s_isConstrained;

/// @brief Field s_isOverlayVisible, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_isOverlayVisible, put=setStaticF_s_isOverlayVisible)) bool  s_isOverlayVisible;

/// @brief Field s_isPaused, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_isPaused, put=setStaticF_s_isPaused)) bool  s_isPaused;

/// @brief Field s_onApplicationShutdownCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_onApplicationShutdownCallbacks, put=setStaticF_s_onApplicationShutdownCallbacks)) ::System::Collections::Generic::List_1<::System::Action*>*  s_onApplicationShutdownCallbacks;

/// @brief Field s_state, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_state, put=setStaticF_s_state)) ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState  s_state;

/// @brief Field s_subManagers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_subManagers, put=setStaticF_s_subManagers)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::PlayEveryWare::EpicOnlineServices::IEOSSubManager*>*  s_subManagers;

/// @brief Convert operator to "::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner"
constexpr operator  ::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*() noexcept;

/// @brief Method Awake, addr 0x180538190, size 0x130, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DispatchAsync, addr 0x1805382c0, size 0x1d0, virtual false, abstract: false, final false
static inline void DispatchAsync(::System::Action*  action) ;

/// @brief Method ExecuteQueuedMainThreadTasks, addr 0x180538490, size 0x1d0, virtual false, abstract: false, final false
static inline void ExecuteQueuedMainThreadTasks() ;

static inline ::PlayEveryWare::EpicOnlineServices::EOSManager* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0x180538660, size 0x50, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  hasFocus) ;

/// @brief Method OnApplicationPause, addr 0x1805386b0, size 0x50, virtual false, abstract: false, final false
inline void OnApplicationPause(bool  pauseStatus) ;

/// @brief Method OnApplicationQuitting, addr 0x180538700, size 0x30, virtual false, abstract: false, final false
inline void OnApplicationQuitting() ;

/// @brief Method OnDisable, addr 0x180538730, size 0x50, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180538780, size 0x50, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlayEveryWare.EpicOnlineServices.IEOSCoroutineOwner.StartCoroutine, addr 0x1805387d0, size 0x10, virtual true, abstract: false, final true
inline void PlayEveryWare_EpicOnlineServices_IEOSCoroutineOwner_StartCoroutine(::System::Collections::IEnumerator*  routine) ;

/// @brief Method Update, addr 0x1805387e0, size 0x1d0, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_ShouldShutdownOnApplicationQuit() const;

constexpr bool& __cordl_internal_get_ShouldShutdownOnApplicationQuit() ;

constexpr void __cordl_internal_set_ShouldShutdownOnApplicationQuit(bool  value) ;

/// @brief Method .ctor, addr 0x180538bd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnAuthLogin, addr 0x180538be0, size 0xb0, virtual false, abstract: false, final false
static inline void add_OnAuthLogin(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*  value) ;

/// @brief Method add_OnAuthLogout, addr 0x180538c90, size 0xb0, virtual false, abstract: false, final false
static inline void add_OnAuthLogout(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*  value) ;

/// @brief Method add_OnConnectLogin, addr 0x180538d40, size 0xb0, virtual false, abstract: false, final false
static inline void add_OnConnectLogin(::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*  value) ;

static inline ::System::Action* getStaticF_CleanupUserLoginToken() ;

static inline ::System::Func_1<::System::Threading::Tasks::Task_1<::Epic::OnlineServices::Connect::UserLoginInfo>*>* getStaticF_GetUserLoginInfo() ;

static inline ::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>* getStaticF_GetUserLoginToken() ;

static inline ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback* getStaticF_OnAuthLogin() ;

static inline ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback* getStaticF_OnAuthLogout() ;

static inline ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback* getStaticF_OnConnectLogin() ;

static inline ::System::Collections::Generic::Dictionary_2<::Epic::OnlineServices::Logging::LogCategory,::Epic::OnlineServices::Logging::LogLevel>* getStaticF_logLevels() ;

static inline ::System::Collections::Generic::List_1<::Epic::OnlineServices::EpicAccountId*>* getStaticF_loggedInAccountIDs() ;

static inline bool getStaticF_s_DoesOverlayHaveExcusiveInput() ;

static inline ::UnityW<::PlayEveryWare::EpicOnlineServices::EOSManager> getStaticF_s_EOSManagerInstance() ;

static inline ::System::Collections::Generic::List_1<::System::Action*>* getStaticF_s_enqueuedTasks() ;

static inline ::System::Object* getStaticF_s_enqueuedTasksLock() ;

static inline bool getStaticF_s_hasFocus() ;

static inline ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton* getStaticF_s_instance() ;

static inline bool getStaticF_s_isConstrained() ;

static inline bool getStaticF_s_isOverlayVisible() ;

static inline bool getStaticF_s_isPaused() ;

static inline ::System::Collections::Generic::List_1<::System::Action*>* getStaticF_s_onApplicationShutdownCallbacks() ;

static inline ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState getStaticF_s_state() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::PlayEveryWare::EpicOnlineServices::IEOSSubManager*>* getStaticF_s_subManagers() ;

/// @brief Method get_ApplicationHasFocus, addr 0x180538df0, size 0x40, virtual false, abstract: false, final false
static inline bool get_ApplicationHasFocus() ;

/// @brief Method get_ApplicationIsConstrained, addr 0x180538e30, size 0x40, virtual false, abstract: false, final false
static inline bool get_ApplicationIsConstrained() ;

/// @brief Method get_ApplicationIsPaused, addr 0x180538e70, size 0x40, virtual false, abstract: false, final false
static inline bool get_ApplicationIsPaused() ;

/// @brief Method get_Instance, addr 0x180538eb0, size 0x80, virtual false, abstract: false, final false
static inline ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton* get_Instance() ;

/// @brief Convert to "::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner"
constexpr ::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner* i___PlayEveryWare__EpicOnlineServices__IEOSCoroutineOwner() noexcept;

/// @brief Method remove_OnAuthLogin, addr 0x180538f30, size 0xb0, virtual false, abstract: false, final false
static inline void remove_OnAuthLogin(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*  value) ;

/// @brief Method remove_OnAuthLogout, addr 0x180538fe0, size 0xb0, virtual false, abstract: false, final false
static inline void remove_OnAuthLogout(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*  value) ;

/// @brief Method remove_OnConnectLogin, addr 0x180539090, size 0xb0, virtual false, abstract: false, final false
static inline void remove_OnConnectLogin(::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*  value) ;

static inline void setStaticF_CleanupUserLoginToken(::System::Action*  value) ;

static inline void setStaticF_GetUserLoginInfo(::System::Func_1<::System::Threading::Tasks::Task_1<::Epic::OnlineServices::Connect::UserLoginInfo>*>*  value) ;

static inline void setStaticF_GetUserLoginToken(::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*  value) ;

static inline void setStaticF_OnAuthLogin(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*  value) ;

static inline void setStaticF_OnAuthLogout(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*  value) ;

static inline void setStaticF_OnConnectLogin(::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*  value) ;

static inline void setStaticF_logLevels(::System::Collections::Generic::Dictionary_2<::Epic::OnlineServices::Logging::LogCategory,::Epic::OnlineServices::Logging::LogLevel>*  value) ;

static inline void setStaticF_loggedInAccountIDs(::System::Collections::Generic::List_1<::Epic::OnlineServices::EpicAccountId*>*  value) ;

static inline void setStaticF_s_DoesOverlayHaveExcusiveInput(bool  value) ;

static inline void setStaticF_s_EOSManagerInstance(::UnityW<::PlayEveryWare::EpicOnlineServices::EOSManager>  value) ;

static inline void setStaticF_s_enqueuedTasks(::System::Collections::Generic::List_1<::System::Action*>*  value) ;

static inline void setStaticF_s_enqueuedTasksLock(::System::Object*  value) ;

static inline void setStaticF_s_hasFocus(bool  value) ;

static inline void setStaticF_s_instance(::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  value) ;

static inline void setStaticF_s_isConstrained(bool  value) ;

static inline void setStaticF_s_isOverlayVisible(bool  value) ;

static inline void setStaticF_s_isPaused(bool  value) ;

static inline void setStaticF_s_onApplicationShutdownCallbacks(::System::Collections::Generic::List_1<::System::Action*>*  value) ;

static inline void setStaticF_s_state(::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState  value) ;

static inline void setStaticF_s_subManagers(::System::Collections::Generic::Dictionary_2<::System::Type*,::PlayEveryWare::EpicOnlineServices::IEOSSubManager*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSManager(EOSManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSManager(EOSManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18883};

/// @brief Field ShouldShutdownOnApplicationQuit, offset: 0x20, size: 0x1, def value: None
 bool  ___ShouldShutdownOnApplicationQuit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSManager, ___ShouldShutdownOnApplicationQuit) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSManager) == 0x28, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices

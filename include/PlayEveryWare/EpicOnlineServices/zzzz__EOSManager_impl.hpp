#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/EOSManager.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginCallbackInfo_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginOptions_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__LoginOptions_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__UserLoginInfo_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__EOSManager_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__AchievementsInterface_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__AuthInterface_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__DeletePersistentAuthCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LinkAccountCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LinkAccountFlags_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginCredentialType_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginOptions_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginStatusChangedCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LogoutCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnDeletePersistentAuthCallback_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnLoginStatusChangedCallback_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnLogoutCallback_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__Token_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__AuthExpirationCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__ConnectInterface_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__CreateUserCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__LinkAccountCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__LoginCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__LoginOptions_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__LoginStatusChangedCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnTransferDeviceIdAccountCallback_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__TransferDeviceIdAccountCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__TransferDeviceIdAccountOptions_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__UserLoginInfo_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__EcomInterface_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__FriendsInterface_def.hpp"
#include "Epic/OnlineServices/Leaderboards/zzzz__LeaderboardsInterface_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyInterface_def.hpp"
#include "Epic/OnlineServices/Logging/zzzz__LogCategory_def.hpp"
#include "Epic/OnlineServices/Logging/zzzz__LogLevel_def.hpp"
#include "Epic/OnlineServices/Logging/zzzz__LogMessage_def.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__MetricsInterface_def.hpp"
#include "Epic/OnlineServices/Mods/zzzz__ModsInterface_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__P2PInterface_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__ApplicationStatus_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__PlatformInterface_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__PlayerDataStorageInterface_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceInterface_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__SetPresenceCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__SetPresenceCompleteCallback_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__RTCInterface_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionsInterface_def.hpp"
#include "Epic/OnlineServices/Stats/zzzz__StatsInterface_def.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__TitleStorageInterface_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnDisplaySettingsUpdatedCallbackInfo_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnDisplaySettingsUpdatedCallback_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__UIInterface_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__UserInfoInterface_def.hpp"
#include "Epic/OnlineServices/zzzz__ContinuanceToken_def.hpp"
#include "Epic/OnlineServices/zzzz__EpicAccountId_def.hpp"
#include "Epic/OnlineServices/zzzz__ExternalCredentialType_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__DLLHandle_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__EOSManager_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__IEOSCoroutineOwner_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__IEOSOnAuthLogin_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__IEOSOnAuthLogout_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__IEOSOnConnectLogin_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__IEOSSubManager_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__NotifyEventHandle_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback::*)(::System::Object*, ::System::IntPtr)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180541f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback::*)(::Epic::OnlineServices::Auth::LoginCallbackInfo)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback::Invoke)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180541de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback::*)(::Epic::OnlineServices::Auth::LoginCallbackInfo, ::System::AsyncCallback*, ::System::Object*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180528360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback::*)(::System::IAsyncResult*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback::Invoke(::Epic::OnlineServices::Auth::LoginCallbackInfo  loginCallbackInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loginCallbackInfo);
}
inline ::System::IAsyncResult* PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback::BeginInvoke(::Epic::OnlineServices::Auth::LoginCallbackInfo  loginCallbackInfo, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, loginCallbackInfo, callback, object);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback* PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback::EOSManager_OnAuthLoginCallback()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback::*)(::System::Object*, ::System::IntPtr)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805420d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback::*)(::Epic::OnlineServices::Auth::LogoutCallbackInfo)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback::Invoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180541ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback::*)(::Epic::OnlineServices::Auth::LogoutCallbackInfo, ::System::AsyncCallback*, ::System::Object*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180528c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback::*)(::System::IAsyncResult*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback::Invoke(::Epic::OnlineServices::Auth::LogoutCallbackInfo  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback::BeginInvoke(::Epic::OnlineServices::Auth::LogoutCallbackInfo  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback* PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback::EOSManager_OnAuthLogoutCallback()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback::*)(::System::Object*, ::System::IntPtr)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180542260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback::*)(::Epic::OnlineServices::Connect::LoginCallbackInfo)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback::Invoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180542180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback::*)(::Epic::OnlineServices::Connect::LoginCallbackInfo, ::System::AsyncCallback*, ::System::Object*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180528300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback::*)(::System::IAsyncResult*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback::Invoke(::Epic::OnlineServices::Connect::LoginCallbackInfo  loginCallbackInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loginCallbackInfo);
}
inline ::System::IAsyncResult* PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback::BeginInvoke(::Epic::OnlineServices::Connect::LoginCallbackInfo  loginCallbackInfo, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, loginCallbackInfo, callback, object);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback* PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback::EOSManager_OnConnectLoginCallback()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback::*)(::System::Object*, ::System::IntPtr)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805420d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback::*)(::Epic::OnlineServices::Connect::CreateUserCallbackInfo)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback::Invoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180541ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback::*)(::Epic::OnlineServices::Connect::CreateUserCallbackInfo, ::System::AsyncCallback*, ::System::Object*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805275b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback::*)(::System::IAsyncResult*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback::Invoke(::Epic::OnlineServices::Connect::CreateUserCallbackInfo  createUserCallbackInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, createUserCallbackInfo);
}
inline ::System::IAsyncResult* PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback::BeginInvoke(::Epic::OnlineServices::Connect::CreateUserCallbackInfo  createUserCallbackInfo, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, createUserCallbackInfo, callback, object);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback* PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback::EOSManager_OnCreateConnectUserCallback()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback::*)(::System::Object*, ::System::IntPtr)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805420d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback::*)(::Epic::OnlineServices::Connect::LinkAccountCallbackInfo)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback::Invoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180541ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback::*)(::Epic::OnlineServices::Connect::LinkAccountCallbackInfo, ::System::AsyncCallback*, ::System::Object*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180527e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback::*)(::System::IAsyncResult*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback::Invoke(::Epic::OnlineServices::Connect::LinkAccountCallbackInfo  linkAccountCallbackInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, linkAccountCallbackInfo);
}
inline ::System::IAsyncResult* PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback::BeginInvoke(::Epic::OnlineServices::Connect::LinkAccountCallbackInfo  linkAccountCallbackInfo, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, linkAccountCallbackInfo, callback, object);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback* PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback::EOSManager_OnConnectLinkExternalAccountCallback()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback::*)(::System::Object*, ::System::IntPtr)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180541d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback::*)(::Epic::OnlineServices::Auth::LinkAccountCallbackInfo)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback::Invoke)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180541bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback::*)(::Epic::OnlineServices::Auth::LinkAccountCallbackInfo, ::System::AsyncCallback*, ::System::Object*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180527ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback::*)(::System::IAsyncResult*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback::Invoke(::Epic::OnlineServices::Auth::LinkAccountCallbackInfo  linkAccountCallbackInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, linkAccountCallbackInfo);
}
inline ::System::IAsyncResult* PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback::BeginInvoke(::Epic::OnlineServices::Auth::LinkAccountCallbackInfo  linkAccountCallbackInfo, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, linkAccountCallbackInfo, callback, object);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback* PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback::EOSManager_OnAuthLinkExternalAccountCallback()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState::EOSManager_EOSState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState::EOSManager_EOSState()   {
}
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState  PlayEveryWare::EpicOnlineServices::EOSManager_EOSState::NotStarted{static_cast<int32_t>(0x0)};
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState  PlayEveryWare::EpicOnlineServices::EOSManager_EOSState::Starting{static_cast<int32_t>(0x1)};
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState  PlayEveryWare::EpicOnlineServices::EOSManager_EOSState::Running{static_cast<int32_t>(0x2)};
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState  PlayEveryWare::EpicOnlineServices::EOSManager_EOSState::Suspending{static_cast<int32_t>(0x3)};
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState  PlayEveryWare::EpicOnlineServices::EOSManager_EOSState::Suspended{static_cast<int32_t>(0x4)};
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState  PlayEveryWare::EpicOnlineServices::EOSManager_EOSState::ShuttingDown{static_cast<int32_t>(0x5)};
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState  PlayEveryWare::EpicOnlineServices::EOSManager_EOSState::Shutdown{static_cast<int32_t>(0x6)};
// Ctor Parameters [CppParam { name: "authLogin", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "authPassword", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "authType", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "epicApp", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "epicEnv", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "epicUsername", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "epicUserID", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "epicLocale", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "epicSandboxID", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "epicDeploymentID", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_EpicLauncherArgs::EOSSingleton_EOSManager_EpicLauncherArgs(::StringW  authLogin, ::StringW  authPassword, ::StringW  authType, ::StringW  epicApp, ::StringW  epicEnv, ::StringW  epicUsername, ::StringW  epicUserID, ::StringW  epicLocale, ::StringW  epicSandboxID, ::StringW  epicDeploymentID) noexcept  {
this->authLogin = authLogin;
this->authPassword = authPassword;
this->authType = authType;
this->epicApp = epicApp;
this->epicEnv = epicEnv;
this->epicUsername = epicUsername;
this->epicUserID = epicUserID;
this->epicLocale = epicLocale;
this->epicSandboxID = epicSandboxID;
this->epicDeploymentID = epicDeploymentID;
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_EpicLauncherArgs::EOSSingleton_EOSManager_EpicLauncherArgs()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType::*)(::System::Object*, ::System::IntPtr)>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805450a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType::*)(::StringW)>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType::BeginInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803e3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType::*)(::System::IAsyncResult*)>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType::Invoke(::StringW  str)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, str);
}
inline ::System::IAsyncResult* PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType::BeginInvoke(::StringW  str, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, str, callback, object);
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType* PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType*>(object, method));
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_PrintDelegateType::EOSSingleton_EOSManager_PrintDelegateType()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c._InitializeOverlay_b__36_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::*)(::by_ref<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfo>)>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::_InitializeOverlay_b__36_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180548c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*>(),
                        {"<InitializeOverlay>b__36_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c._ConfigureAuthStatusCallback_b__62_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::*)(::by_ref<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfo>)>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::_ConfigureAuthStatusCallback_b__62_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180548bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*>(),
                        {"<ConfigureAuthStatusCallback>b__62_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c._SetPresenceRichTextForUser_b__66_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::*)(::by_ref<::Epic::OnlineServices::Presence::SetPresenceCallbackInfo>)>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::_SetPresenceRichTextForUser_b__66_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*>(),
                        {"<SetPresenceRichTextForUser>b__66_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::SetPresenceCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c._RemovePersistentToken_b__69_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::*)(::by_ref<::Epic::OnlineServices::Auth::DeletePersistentAuthCallbackInfo>)>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::_RemovePersistentToken_b__69_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*>(),
                        {"<RemovePersistentToken>b__69_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::DeletePersistentAuthCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c._OnShutdown_b__71_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::*)(::by_ref<::Epic::OnlineServices::Auth::LogoutCallbackInfo>)>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::_OnShutdown_b__71_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*>(),
                        {"<OnShutdown>b__71_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LogoutCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::setStaticF___9(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*  value)  {
::cordl_internals::setStaticField<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*, "<>9", ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*>(std::forward<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*>(value));
}
inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c* PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*, "<>9", ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::setStaticF___9__36_0(::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallback*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallback*, "<>9__36_0", ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*>(std::forward<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallback*>(value));
}
inline ::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallback* PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::getStaticF___9__36_0()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallback*, "<>9__36_0", ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::setStaticF___9__62_0(::Epic::OnlineServices::Auth::OnLoginStatusChangedCallback*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Auth::OnLoginStatusChangedCallback*, "<>9__62_0", ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*>(std::forward<::Epic::OnlineServices::Auth::OnLoginStatusChangedCallback*>(value));
}
inline ::Epic::OnlineServices::Auth::OnLoginStatusChangedCallback* PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::getStaticF___9__62_0()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Auth::OnLoginStatusChangedCallback*, "<>9__62_0", ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::setStaticF___9__66_0(::Epic::OnlineServices::Presence::SetPresenceCompleteCallback*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Presence::SetPresenceCompleteCallback*, "<>9__66_0", ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*>(std::forward<::Epic::OnlineServices::Presence::SetPresenceCompleteCallback*>(value));
}
inline ::Epic::OnlineServices::Presence::SetPresenceCompleteCallback* PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::getStaticF___9__66_0()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Presence::SetPresenceCompleteCallback*, "<>9__66_0", ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::setStaticF___9__69_0(::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallback*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallback*, "<>9__69_0", ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*>(std::forward<::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallback*>(value));
}
inline ::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallback* PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::getStaticF___9__69_0()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallback*, "<>9__69_0", ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::setStaticF___9__71_0(::Epic::OnlineServices::Auth::OnLogoutCallback*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Auth::OnLogoutCallback*, "<>9__71_0", ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*>(std::forward<::Epic::OnlineServices::Auth::OnLogoutCallback*>(value));
}
inline ::Epic::OnlineServices::Auth::OnLogoutCallback* PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::getStaticF___9__71_0()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Auth::OnLogoutCallback*, "<>9__71_0", ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::_InitializeOverlay_b__36_0(::by_ref<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfo>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*>(),
                        {"<InitializeOverlay>b__36_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::_ConfigureAuthStatusCallback_b__62_0(::by_ref<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfo>  callbackInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*>(),
                        {"<ConfigureAuthStatusCallback>b__62_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callbackInfo);
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::_SetPresenceRichTextForUser_b__66_0(::by_ref<::Epic::OnlineServices::Presence::SetPresenceCallbackInfo>  callbackInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*>(),
                        {"<SetPresenceRichTextForUser>b__66_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::SetPresenceCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callbackInfo);
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::_RemovePersistentToken_b__69_0(::by_ref<::Epic::OnlineServices::Auth::DeletePersistentAuthCallbackInfo>  deletePersistentAuthCallbackInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*>(),
                        {"<RemovePersistentToken>b__69_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::DeletePersistentAuthCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deletePersistentAuthCallbackInfo);
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::_OnShutdown_b__71_0(::by_ref<::Epic::OnlineServices::Auth::LogoutCallbackInfo>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*>(),
                        {"<OnShutdown>b__71_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LogoutCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c* PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c::EOSSingleton_EOSManager___c()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0._CreateConnectUserWithContinuanceToken_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0::*)(::by_ref<::Epic::OnlineServices::Connect::CreateUserCallbackInfo>)>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0::_CreateConnectUserWithContinuanceToken_b__0)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180549080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0*>(),
                        {"<CreateConnectUserWithContinuanceToken>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CreateUserCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton* const& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0::__cordl_internal_set___4__this(::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0::__cordl_internal_get_onCreateUserCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCreateUserCallback;
}
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback* const& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0::__cordl_internal_get_onCreateUserCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCreateUserCallback;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0::__cordl_internal_set_onCreateUserCallback(::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onCreateUserCallback = value;
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0::_CreateConnectUserWithContinuanceToken_b__0(::by_ref<::Epic::OnlineServices::Connect::CreateUserCallbackInfo>  createUserCallbackInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0*>(),
                        {"<CreateConnectUserWithContinuanceToken>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CreateUserCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, createUserCallbackInfo);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0* PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass50_0::EOSSingleton_EOSManager___c__DisplayClass50_0()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass51_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass51_0::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass51_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass51_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass51_0._AuthLinkExternalAccountWithContinuanceToken_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass51_0::*)(::by_ref<::Epic::OnlineServices::Auth::LinkAccountCallbackInfo>)>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass51_0::_AuthLinkExternalAccountWithContinuanceToken_b__0)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180549140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass51_0*>(),
                        {"<AuthLinkExternalAccountWithContinuanceToken>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LinkAccountCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback*& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass51_0::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback* const& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass51_0::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass51_0::__cordl_internal_set_callback(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass51_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass51_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass51_0::_AuthLinkExternalAccountWithContinuanceToken_b__0(::by_ref<::Epic::OnlineServices::Auth::LinkAccountCallbackInfo>  linkAccountCallbackInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass51_0*>(),
                        {"<AuthLinkExternalAccountWithContinuanceToken>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LinkAccountCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, linkAccountCallbackInfo);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass51_0* PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass51_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass51_0*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass51_0::EOSSingleton_EOSManager___c__DisplayClass51_0()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass52_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass52_0::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass52_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass52_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass52_0._ConnectLinkExternalAccountWithContinuanceToken_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass52_0::*)(::by_ref<::Epic::OnlineServices::Connect::LinkAccountCallbackInfo>)>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass52_0::_ConnectLinkExternalAccountWithContinuanceToken_b__0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180549220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass52_0*>(),
                        {"<ConnectLinkExternalAccountWithContinuanceToken>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::LinkAccountCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback*& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass52_0::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback* const& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass52_0::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass52_0::__cordl_internal_set_callback(::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass52_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass52_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass52_0::_ConnectLinkExternalAccountWithContinuanceToken_b__0(::by_ref<::Epic::OnlineServices::Connect::LinkAccountCallbackInfo>  linkAccountCallbackInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass52_0*>(),
                        {"<ConnectLinkExternalAccountWithContinuanceToken>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::LinkAccountCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, linkAccountCallbackInfo);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass52_0* PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass52_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass52_0*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass52_0::EOSSingleton_EOSManager___c__DisplayClass52_0()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0._StartConnectLoginWithOptions_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0::*)(::Epic::OnlineServices::Connect::LoginOptions)>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0::_StartConnectLoginWithOptions_b__0)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180549260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0*>(),
                        {"<StartConnectLoginWithOptions>b__0", {}, {::i2c::type_of<::Epic::OnlineServices::Connect::LoginOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0._StartConnectLoginWithOptions_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0::*)(::System::Threading::Tasks::Task_1<::StringW>*)>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0::_StartConnectLoginWithOptions_b__1)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180549340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0*>(),
                        {"<StartConnectLoginWithOptions>b__1", {}, {::i2c::type_of<::System::Threading::Tasks::Task_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton* const& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0::__cordl_internal_set___4__this(::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0::__cordl_internal_get_onloginCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onloginCallback;
}
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback* const& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0::__cordl_internal_get_onloginCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onloginCallback;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0::__cordl_internal_set_onloginCallback(::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onloginCallback = value;
}
constexpr ::Epic::OnlineServices::Connect::LoginOptions& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0::__cordl_internal_get_connectLoginOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectLoginOptions;
}
constexpr ::Epic::OnlineServices::Connect::LoginOptions const& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0::__cordl_internal_get_connectLoginOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectLoginOptions;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0::__cordl_internal_set_connectLoginOptions(::Epic::OnlineServices::Connect::LoginOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectLoginOptions = value;
}
constexpr ::System::Action_1<::Epic::OnlineServices::Connect::LoginOptions>*& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0::__cordl_internal_get_doConnect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doConnect;
}
constexpr ::System::Action_1<::Epic::OnlineServices::Connect::LoginOptions>* const& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0::__cordl_internal_get_doConnect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doConnect;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0::__cordl_internal_set_doConnect(::System::Action_1<::Epic::OnlineServices::Connect::LoginOptions>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doConnect = value;
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0::_StartConnectLoginWithOptions_b__0(::Epic::OnlineServices::Connect::LoginOptions  loginOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0*>(),
                        {"<StartConnectLoginWithOptions>b__0", {}, {::i2c::type_of<::Epic::OnlineServices::Connect::LoginOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loginOptions);
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0::_StartConnectLoginWithOptions_b__1(::System::Threading::Tasks::Task_1<::StringW>*  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0*>(),
                        {"<StartConnectLoginWithOptions>b__1", {}, {::i2c::type_of<::System::Threading::Tasks::Task_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, task);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0* PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0::EOSSingleton_EOSManager___c__DisplayClass56_0()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1._StartConnectLoginWithOptions_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1::*)(::by_ref<::Epic::OnlineServices::Connect::LoginCallbackInfo>)>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1::_StartConnectLoginWithOptions_b__2)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180549460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1*>(),
                        {"<StartConnectLoginWithOptions>b__2", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::LoginCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Epic::OnlineServices::Connect::LoginOptions& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1::__cordl_internal_get_loginOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loginOptions;
}
constexpr ::Epic::OnlineServices::Connect::LoginOptions const& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1::__cordl_internal_get_loginOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loginOptions;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1::__cordl_internal_set_loginOptions(::Epic::OnlineServices::Connect::LoginOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loginOptions = value;
}
constexpr ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0*& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0* const& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1::__cordl_internal_set_CS$__8__locals1(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals1 = value;
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1::_StartConnectLoginWithOptions_b__2(::by_ref<::Epic::OnlineServices::Connect::LoginCallbackInfo>  connectLoginData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1*>(),
                        {"<StartConnectLoginWithOptions>b__2", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::LoginCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectLoginData);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1* PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass56_1::EOSSingleton_EOSManager___c__DisplayClass56_1()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0._ConnectTransferDeviceIDAccount_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0::*)(::by_ref<::Epic::OnlineServices::Connect::TransferDeviceIdAccountCallbackInfo>)>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0::_ConnectTransferDeviceIDAccount_b__0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180549630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0*>(),
                        {"<ConnectTransferDeviceIDAccount>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::TransferDeviceIdAccountCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton* const& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0::__cordl_internal_set___4__this(::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallback*& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0::__cordl_internal_get_completionDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completionDelegate;
}
constexpr ::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallback* const& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0::__cordl_internal_get_completionDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completionDelegate;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0::__cordl_internal_set_completionDelegate(::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completionDelegate = value;
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0::_ConnectTransferDeviceIDAccount_b__0(::by_ref<::Epic::OnlineServices::Connect::TransferDeviceIdAccountCallbackInfo>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0*>(),
                        {"<ConnectTransferDeviceIDAccount>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::TransferDeviceIdAccountCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0* PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass58_0::EOSSingleton_EOSManager___c__DisplayClass58_0()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0._StartPersistentLogin_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0::*)(::Epic::OnlineServices::Auth::LoginCallbackInfo)>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0::_StartPersistentLogin_b__0)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1805496d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0*>(),
                        {"<StartPersistentLogin>b__0", {}, {::i2c::type_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0::__cordl_internal_get_onLoginCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLoginCallback;
}
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback* const& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0::__cordl_internal_get_onLoginCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLoginCallback;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0::__cordl_internal_set_onLoginCallback(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onLoginCallback = value;
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0::_StartPersistentLogin_b__0(::Epic::OnlineServices::Auth::LoginCallbackInfo  callbackInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0*>(),
                        {"<StartPersistentLogin>b__0", {}, {::i2c::type_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callbackInfo);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0* PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0::EOSSingleton_EOSManager___c__DisplayClass59_0()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1._StartPersistentLogin_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1::*)(::by_ref<::Epic::OnlineServices::Auth::DeletePersistentAuthCallbackInfo>)>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1::_StartPersistentLogin_b__1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180549860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1*>(),
                        {"<StartPersistentLogin>b__1", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::DeletePersistentAuthCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Epic::OnlineServices::Auth::LoginCallbackInfo& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1::__cordl_internal_get_callbackInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbackInfo;
}
constexpr ::Epic::OnlineServices::Auth::LoginCallbackInfo const& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1::__cordl_internal_get_callbackInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbackInfo;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1::__cordl_internal_set_callbackInfo(::Epic::OnlineServices::Auth::LoginCallbackInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callbackInfo = value;
}
constexpr ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0*& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0* const& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1::__cordl_internal_set_CS$__8__locals1(::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals1 = value;
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1::_StartPersistentLogin_b__1(::by_ref<::Epic::OnlineServices::Auth::DeletePersistentAuthCallbackInfo>  deletePersistentAuthCallbackInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1*>(),
                        {"<StartPersistentLogin>b__1", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::DeletePersistentAuthCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deletePersistentAuthCallbackInfo);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1* PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass59_1::EOSSingleton_EOSManager___c__DisplayClass59_1()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0._ConfigureConnectExpirationCallback_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0::*)(::by_ref<::Epic::OnlineServices::Connect::AuthExpirationCallbackInfo>)>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0::_ConfigureConnectExpirationCallback_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805498e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0*>(),
                        {"<ConfigureConnectExpirationCallback>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::AuthExpirationCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0._ConfigureConnectExpirationCallback_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0::*)(uint64_t)>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0::_ConfigureConnectExpirationCallback_b__1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180549930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0*>(),
                        {"<ConfigureConnectExpirationCallback>b__1", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton* const& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0::__cordl_internal_set___4__this(::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Epic::OnlineServices::Connect::LoginOptions& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0::__cordl_internal_get_connectLoginOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectLoginOptions;
}
constexpr ::Epic::OnlineServices::Connect::LoginOptions const& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0::__cordl_internal_get_connectLoginOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectLoginOptions;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0::__cordl_internal_set_connectLoginOptions(::Epic::OnlineServices::Connect::LoginOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectLoginOptions = value;
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0::_ConfigureConnectExpirationCallback_b__0(::by_ref<::Epic::OnlineServices::Connect::AuthExpirationCallbackInfo>  callbackInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0*>(),
                        {"<ConfigureConnectExpirationCallback>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::AuthExpirationCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callbackInfo);
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0::_ConfigureConnectExpirationCallback_b__1(uint64_t  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0*>(),
                        {"<ConfigureConnectExpirationCallback>b__1", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0* PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass64_0::EOSSingleton_EOSManager___c__DisplayClass64_0()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0._StartLoginWithLoginOptions_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0::*)(::by_ref<::Epic::OnlineServices::Auth::LoginCallbackInfo>)>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0::_StartLoginWithLoginOptions_b__0)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x180549980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0*>(),
                        {"<StartLoginWithLoginOptions>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LoginCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton* const& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0::__cordl_internal_set___4__this(::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Epic::OnlineServices::Auth::LoginOptions& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0::__cordl_internal_get_loginOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loginOptions;
}
constexpr ::Epic::OnlineServices::Auth::LoginOptions const& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0::__cordl_internal_get_loginOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loginOptions;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0::__cordl_internal_set_loginOptions(::Epic::OnlineServices::Auth::LoginOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loginOptions = value;
}
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0::__cordl_internal_get_onLoginCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLoginCallback;
}
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback* const& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0::__cordl_internal_get_onLoginCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLoginCallback;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0::__cordl_internal_set_onLoginCallback(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onLoginCallback = value;
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0::_StartLoginWithLoginOptions_b__0(::by_ref<::Epic::OnlineServices::Auth::LoginCallbackInfo>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0*>(),
                        {"<StartLoginWithLoginOptions>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LoginCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0* PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass65_0::EOSSingleton_EOSManager___c__DisplayClass65_0()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0._StartLogout_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0::*)(::by_ref<::Epic::OnlineServices::Auth::LogoutCallbackInfo>)>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0::_StartLogout_b__0)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180549c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0*>(),
                        {"<StartLogout>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LogoutCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Epic::OnlineServices::Auth::OnLogoutCallback*& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0::__cordl_internal_get_onLogoutCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLogoutCallback;
}
constexpr ::Epic::OnlineServices::Auth::OnLogoutCallback* const& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0::__cordl_internal_get_onLogoutCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLogoutCallback;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0::__cordl_internal_set_onLogoutCallback(::Epic::OnlineServices::Auth::OnLogoutCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onLogoutCallback = value;
}
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton* const& PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0::__cordl_internal_set___4__this(::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0::_StartLogout_b__0(::by_ref<::Epic::OnlineServices::Auth::LogoutCallbackInfo>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0*>(),
                        {"<StartLogout>b__0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LogoutCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0* PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager___c__DisplayClass67_0::EOSSingleton_EOSManager___c__DisplayClass67_0()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53::MoveNext)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x1805484f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038a820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*", modifiers: "", def_value: Some("{}") }, CppParam { name: "epicAccountId", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "onConnectLoginCallback", ty: "::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_connectLoginOptions_5__2", ty: "::Epic::OnlineServices::Connect::LoginOptions", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Epic::OnlineServices::Connect::UserLoginInfo>", modifiers: "", def_value: Some("{}") }]
constexpr ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  __4__this, ::Epic::OnlineServices::EpicAccountId*  epicAccountId, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*  onConnectLoginCallback, ::Epic::OnlineServices::Connect::LoginOptions  _connectLoginOptions_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Epic::OnlineServices::Connect::UserLoginInfo>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->epicAccountId = epicAccountId;
this->onConnectLoginCallback = onConnectLoginCallback;
this->_connectLoginOptions_5__2 = _connectLoginOptions_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53::EOSSingleton_EOSManager__StartConnectLoginWithEpicAccount_d__53()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.SetLocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::Epic::OnlineServices::EpicAccountId*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::SetLocalUserId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18053d160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"SetLocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetLocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::EpicAccountId* (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetLocalUserId)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18053b390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetLocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.PUIDToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::Epic::OnlineServices::ProductUserId*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::PUIDToString)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18053c940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"PUIDToString", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.SetLocalProductUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::Epic::OnlineServices::ProductUserId*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::SetLocalProductUserId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18053d100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"SetLocalProductUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetProductUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetProductUserId)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18053b6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetProductUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetProductId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetProductId)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18053b650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetProductId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetSandboxId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetSandboxId)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18053b6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetSandboxId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetDeploymentID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetDeploymentID)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18053ad90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetDeploymentID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.IsEncryptionKeyValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::IsEncryptionKeyValid)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18053be20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"IsEncryptionKeyValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.HasShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::HasShutdown)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18053b7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"HasShutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.HasLoggedInWithConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::HasLoggedInWithConnect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18053b7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"HasLoggedInWithConnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.ShouldOverlayReceiveInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::ShouldOverlayReceiveInput)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18053d6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"ShouldOverlayReceiveInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.IsOverlayOpenWithExclusiveInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::IsOverlayOpenWithExclusiveInput)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18053be60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"IsOverlayOpenWithExclusiveInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::LogType)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::Log)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18053c0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.AddConnectLoginListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::AddConnectLoginListener)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1805397c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"AddConnectLoginListener", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.AddAuthLoginListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::AddAuthLoginListener)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x180539440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"AddAuthLoginListener", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.AddAuthLogoutListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::AddAuthLogoutListener)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x180539600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"AddAuthLogoutListener", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.AddApplicationCloseListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::System::Action*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::AddApplicationCloseListener)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805393a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"AddApplicationCloseListener", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.RemoveConnectLoginListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::RemoveConnectLoginListener)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18053cd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"RemoveConnectLoginListener", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.RemoveAuthLoginListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::RemoveAuthLoginListener)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18053c9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"RemoveAuthLoginListener", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.RemoveAuthLogoutListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::RemoveAuthLogoutListener)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18053cb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"RemoveAuthLogoutListener", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.InitializePlatformInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::InitializePlatformInterface)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18053bdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"InitializePlatformInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.CreatePlatformInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Platform::PlatformInterface* (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::CreatePlatformInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18053a920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"CreatePlatformInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.InitializeNetworkChecks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::InitializeNetworkChecks)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18053bbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"InitializeNetworkChecks", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.InitializeOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::InitializeOverlay)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18053bc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"InitializeOverlay", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.ApplyCommandLineArguments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::ApplyCommandLineArguments)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x180539980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"ApplyCommandLineArguments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*, ::StringW)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::Init)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x18053b830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"Init", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.RegisterForPlatformNotifications
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::RegisterForPlatformNotifications)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18053c990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"RegisterForPlatformNotifications", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.SimplePrintStringCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::SimplePrintStringCallback)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18053d930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"SimplePrintStringCallback", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.SimplePrintCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Logging::LogMessage>)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::SimplePrintCallback)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18053d7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"SimplePrintCallback", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Logging::LogMessage>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.SetLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::Epic::OnlineServices::Logging::LogCategory, ::Epic::OnlineServices::Logging::LogLevel)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::SetLogLevel)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x18053d1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"SetLogLevel", {}, {::i2c::type_of<::Epic::OnlineServices::Logging::LogCategory>(), ::i2c::type_of<::Epic::OnlineServices::Logging::LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.InitializeLogLevels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::InitializeLogLevels)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18053bb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"InitializeLogLevels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Logging::LogLevel (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::Epic::OnlineServices::Logging::LogCategory)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetLogLevel)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18053b3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetLogLevel", {}, {::i2c::type_of<::Epic::OnlineServices::Logging::LogCategory>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.SimplePrintCallbackWithCallstack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Epic::OnlineServices::Logging::LogMessage)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::SimplePrintCallbackWithCallstack)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18053d790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"SimplePrintCallbackWithCallstack", {}, {::i2c::type_of<::Epic::OnlineServices::Logging::LogMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.MakeLoginOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Auth::LoginOptions (*)(::Epic::OnlineServices::Auth::LoginCredentialType, ::Epic::OnlineServices::ExternalCredentialType, ::StringW, ::StringW)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::MakeLoginOptions)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18053c150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"MakeLoginOptions", {}, {::i2c::type_of<::Epic::OnlineServices::Auth::LoginCredentialType>(), ::i2c::type_of<::Epic::OnlineServices::ExternalCredentialType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetUserAuthTokenForAccountId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Auth::Token> (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::Epic::OnlineServices::EpicAccountId*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetUserAuthTokenForAccountId)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18053b720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetUserAuthTokenForAccountId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetCommandLineArgsFromEpicLauncher
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_EpicLauncherArgs (*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetCommandLineArgsFromEpicLauncher)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x18053a9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetCommandLineArgsFromEpicLauncher", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.CreateConnectUserWithContinuanceToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::Epic::OnlineServices::ContinuanceToken*, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::CreateConnectUserWithContinuanceToken)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18053a830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"CreateConnectUserWithContinuanceToken", {}, {::i2c::type_of<::Epic::OnlineServices::ContinuanceToken*>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.AuthLinkExternalAccountWithContinuanceToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::Epic::OnlineServices::ContinuanceToken*, ::Epic::OnlineServices::Auth::LinkAccountFlags, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::AuthLinkExternalAccountWithContinuanceToken)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x180539da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"AuthLinkExternalAccountWithContinuanceToken", {}, {::i2c::type_of<::Epic::OnlineServices::ContinuanceToken*>(), ::i2c::type_of<::Epic::OnlineServices::Auth::LinkAccountFlags>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.ConnectLinkExternalAccountWithContinuanceToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::Epic::OnlineServices::ContinuanceToken*, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::ConnectLinkExternalAccountWithContinuanceToken)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18053a620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"ConnectLinkExternalAccountWithContinuanceToken", {}, {::i2c::type_of<::Epic::OnlineServices::ContinuanceToken*>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.StartConnectLoginWithEpicAccount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::Epic::OnlineServices::EpicAccountId*, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::StartConnectLoginWithEpicAccount)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18053db20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"StartConnectLoginWithEpicAccount", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.StartConnectLoginWithOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::Epic::OnlineServices::ExternalCredentialType, ::StringW, ::StringW, ::StringW, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::StartConnectLoginWithOptions)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18053dc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"StartConnectLoginWithOptions", {}, {::i2c::type_of<::Epic::OnlineServices::ExternalCredentialType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.StartConnectLoginWithOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::Epic::OnlineServices::ExternalCredentialType, ::StringW, ::StringW, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::StartConnectLoginWithOptions)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18053dc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"StartConnectLoginWithOptions", {}, {::i2c::type_of<::Epic::OnlineServices::ExternalCredentialType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.StartConnectLoginWithOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::Epic::OnlineServices::Connect::LoginOptions, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*, bool)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::StartConnectLoginWithOptions)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18053de50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"StartConnectLoginWithOptions", {}, {::i2c::type_of<::Epic::OnlineServices::Connect::LoginOptions>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.StartConnectLoginWithDeviceToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::StringW, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::StartConnectLoginWithDeviceToken)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18053d9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"StartConnectLoginWithDeviceToken", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.ConnectTransferDeviceIDAccount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions, ::System::Object*, ::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallback*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::ConnectTransferDeviceIDAccount)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18053a750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"ConnectTransferDeviceIDAccount", {}, {::i2c::type_of<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.StartPersistentLogin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::StartPersistentLogin)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18053e610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"StartPersistentLogin", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.StartLoginWithLoginTypeAndToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::Epic::OnlineServices::Auth::LoginCredentialType, ::StringW, ::StringW, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::StartLoginWithLoginTypeAndToken)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18053e140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"StartLoginWithLoginTypeAndToken", {}, {::i2c::type_of<::Epic::OnlineServices::Auth::LoginCredentialType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.StartLoginWithLoginTypeAndToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::Epic::OnlineServices::Auth::LoginCredentialType, ::Epic::OnlineServices::ExternalCredentialType, ::StringW, ::StringW, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::StartLoginWithLoginTypeAndToken)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x18053e290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"StartLoginWithLoginTypeAndToken", {}, {::i2c::type_of<::Epic::OnlineServices::Auth::LoginCredentialType>(), ::i2c::type_of<::Epic::OnlineServices::ExternalCredentialType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.ConfigureAuthStatusCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::ConfigureAuthStatusCallback)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x180539fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"ConfigureAuthStatusCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.ConfigureConnectStatusCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::ConfigureConnectStatusCallback)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18053a420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"ConfigureConnectStatusCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.ConfigureConnectExpirationCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::Epic::OnlineServices::Connect::LoginOptions)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::ConfigureConnectExpirationCallback)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18053a220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"ConfigureConnectExpirationCallback", {}, {::i2c::type_of<::Epic::OnlineServices::Connect::LoginOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.StartLoginWithLoginOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::Epic::OnlineServices::Auth::LoginOptions, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::StartLoginWithLoginOptions)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18053dff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"StartLoginWithLoginOptions", {}, {::i2c::type_of<::Epic::OnlineServices::Auth::LoginOptions>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.SetPresenceRichTextForUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::Epic::OnlineServices::EpicAccountId*, ::StringW)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::SetPresenceRichTextForUser)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18053d4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"SetPresenceRichTextForUser", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.StartLogout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::Epic::OnlineServices::EpicAccountId*, ::Epic::OnlineServices::Auth::OnLogoutCallback*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::StartLogout)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18053e510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"StartLogout", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>(), ::i2c::type_of<::Epic::OnlineServices::Auth::OnLogoutCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.ClearConnectId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::Epic::OnlineServices::ProductUserId*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::ClearConnectId)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180539f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"ClearConnectId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.RemovePersistentToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::RemovePersistentToken)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18053cf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"RemovePersistentToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::Tick)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18053e720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.OnShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::OnShutdown)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x18053c530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"OnShutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.OnApplicationShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::OnApplicationShutdown)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18053c3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"OnApplicationShutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.ShutdownPlatformInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::ShutdownPlatformInterface)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18053d730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"ShutdownPlatformInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetEOSApplicationStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Platform::ApplicationStatus (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSApplicationStatus)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18053ae20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSApplicationStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.SetEOSApplicationStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::Epic::OnlineServices::Platform::ApplicationStatus)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::SetEOSApplicationStatus)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18053d010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"SetEOSApplicationStatus", {}, {::i2c::type_of<::Epic::OnlineServices::Platform::ApplicationStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.UpdateEOSApplicationStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::UpdateEOSApplicationStatus)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18053ec80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"UpdateEOSApplicationStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.OnApplicationPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(bool)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::OnApplicationPause)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18053c350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.OnApplicationFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(bool)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18053c300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.OnApplicationConstrained
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(bool, bool)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::OnApplicationConstrained)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18053c290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"OnApplicationConstrained", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.UpdateApplicationConstrainedState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::UpdateApplicationConstrainedState)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18053ebd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"UpdateApplicationConstrainedState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.UpdateNetworkStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::UpdateNetworkStatus)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18053ed40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"UpdateNetworkStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.EOS_GetPlatformInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::EOS_GetPlatformInterface)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18053a950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"EOS_GetPlatformInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.global_log_flush_with_function
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::global_log_flush_with_function)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18053edf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"global_log_flush_with_function", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetEOSPlatformInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Platform::PlatformInterface* (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSPlatformInterface)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x18053b000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSPlatformInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.SetEOSPlatformInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::Epic::OnlineServices::Platform::PlatformInterface*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::SetEOSPlatformInterface)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18053d070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"SetEOSPlatformInterface", {}, {::i2c::type_of<::Epic::OnlineServices::Platform::PlatformInterface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.AddAllAssembliesInCurrentDomain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::System::Reflection::Assembly*>*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::AddAllAssembliesInCurrentDomain)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805392d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"AddAllAssembliesInCurrentDomain", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Reflection::Assembly*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.LoadDynamicLibrary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayEveryWare::EpicOnlineServices::DLLHandle* (*)(::StringW)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::LoadDynamicLibrary)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18053bea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"LoadDynamicLibrary", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.UnloadAllLibraries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::UnloadAllLibraries)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18053ea90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"UnloadAllLibraries", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.LoadDelegatesWithEOSBindingAPI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::LoadDelegatesWithEOSBindingAPI)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"LoadDelegatesWithEOSBindingAPI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.ForceUnloadEOSLibrary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::ForceUnloadEOSLibrary)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"ForceUnloadEOSLibrary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.LoadEOSLibraries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::LoadEOSLibraries)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"LoadEOSLibraries", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetEOSAuthInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Auth::AuthInterface* (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSAuthInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18053ae50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSAuthInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetEOSAchievementInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Achievements::AchievementsInterface* (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSAchievementInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18053adf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSAchievementInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetEOSConnectInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Connect::ConnectInterface* (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSConnectInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18053ae80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSConnectInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetEOSEcomInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Ecom::EcomInterface* (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSEcomInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18053aeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSEcomInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetEOSFriendsInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Friends::FriendsInterface* (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSFriendsInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18053aee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSFriendsInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetEOSLeaderboardsInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface* (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSLeaderboardsInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18053af10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSLeaderboardsInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetEOSLobbyInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::LobbyInterface* (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSLobbyInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18053af40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSLobbyInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetEOSMetricsInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Metrics::MetricsInterface* (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSMetricsInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18053af70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSMetricsInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetEOSModsInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Mods::ModsInterface* (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSModsInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18053afa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSModsInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetEOSP2PInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::P2P::P2PInterface* (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSP2PInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18053afd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSP2PInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetPlayerDataStorageInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface* (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetPlayerDataStorageInterface)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18053b5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetPlayerDataStorageInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetEOSPresenceInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Presence::PresenceInterface* (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSPresenceInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18053b240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSPresenceInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetEOSRTCInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTC::RTCInterface* (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSRTCInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18053b270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSRTCInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetEOSSessionsInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sessions::SessionsInterface* (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSSessionsInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18053b2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSSessionsInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetEOSStatsInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Stats::StatsInterface* (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSStatsInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18053b2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSStatsInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetEOSTitleStorageInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::TitleStorage::TitleStorageInterface* (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSTitleStorageInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18053b300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSTitleStorageInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetEOSUIInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::UI::UIInterface* (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSUIInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18053b330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSUIInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton.GetEOSUserInfoInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::UserInfo::UserInfoInterface* (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSUserInfoInterface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18053b360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSUserInfoInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton._GetCommandLineArgsFromEpicLauncher_g__ConfigureEpicArgument_49_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<::StringW>)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::_GetCommandLineArgsFromEpicLauncher_g__ConfigureEpicArgument_49_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18053ea30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"<GetCommandLineArgsFromEpicLauncher>g__ConfigureEpicArgument|49_0", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton._ConfigureAuthStatusCallback_b__62_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(uint64_t)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::_ConfigureAuthStatusCallback_b__62_1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18053e8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"<ConfigureAuthStatusCallback>b__62_1", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton._ConfigureConnectStatusCallback_b__63_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(::by_ref<::Epic::OnlineServices::Connect::LoginStatusChangedCallbackInfo>)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::_ConfigureConnectStatusCallback_b__63_0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18053e920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"<ConfigureConnectStatusCallback>b__63_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::LoginStatusChangedCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton._ConfigureConnectStatusCallback_b__63_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::*)(uint64_t)>(&::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::_ConfigureConnectStatusCallback_b__63_1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18053e9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"<ConfigureConnectStatusCallback>b__63_1", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::setStaticF_s_nextNetworkStatusUpdateTime(float_t  value)  {
::cordl_internals::setStaticField<float_t, "s_nextNetworkStatusUpdateTime", ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(std::forward<float_t>(value));
}
inline float_t PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::getStaticF_s_nextNetworkStatusUpdateTime()  {
return ::cordl_internals::getStaticField<float_t, "s_nextNetworkStatusUpdateTime", ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::setStaticF_s_localUserId(::Epic::OnlineServices::EpicAccountId*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::EpicAccountId*, "s_localUserId", ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(std::forward<::Epic::OnlineServices::EpicAccountId*>(value));
}
inline ::Epic::OnlineServices::EpicAccountId* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::getStaticF_s_localUserId()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::EpicAccountId*, "s_localUserId", ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::setStaticF_s_localProductUserId(::Epic::OnlineServices::ProductUserId*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::ProductUserId*, "s_localProductUserId", ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(std::forward<::Epic::OnlineServices::ProductUserId*>(value));
}
inline ::Epic::OnlineServices::ProductUserId* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::getStaticF_s_localProductUserId()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::ProductUserId*, "s_localProductUserId", ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::setStaticF_s_notifyLoginStatusChangedCallbackHandle(::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*  value)  {
::cordl_internals::setStaticField<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*, "s_notifyLoginStatusChangedCallbackHandle", ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(std::forward<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*>(value));
}
inline ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::getStaticF_s_notifyLoginStatusChangedCallbackHandle()  {
return ::cordl_internals::getStaticField<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*, "s_notifyLoginStatusChangedCallbackHandle", ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::setStaticF_s_notifyConnectLoginStatusChangedCallbackHandle(::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*  value)  {
::cordl_internals::setStaticField<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*, "s_notifyConnectLoginStatusChangedCallbackHandle", ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(std::forward<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*>(value));
}
inline ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::getStaticF_s_notifyConnectLoginStatusChangedCallbackHandle()  {
return ::cordl_internals::getStaticField<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*, "s_notifyConnectLoginStatusChangedCallbackHandle", ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::setStaticF_s_notifyConnectAuthExpirationCallbackHandle(::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*  value)  {
::cordl_internals::setStaticField<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*, "s_notifyConnectAuthExpirationCallbackHandle", ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(std::forward<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*>(value));
}
inline ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::getStaticF_s_notifyConnectAuthExpirationCallbackHandle()  {
return ::cordl_internals::getStaticField<::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*, "s_notifyConnectAuthExpirationCallbackHandle", ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::setStaticF_hasSetLoggingCallback(bool  value)  {
::cordl_internals::setStaticField<bool, "hasSetLoggingCallback", ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(std::forward<bool>(value));
}
inline bool PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::getStaticF_hasSetLoggingCallback()  {
return ::cordl_internals::getStaticField<bool, "hasSetLoggingCallback", ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::setStaticF_s_hasInitializedPlatform(bool  value)  {
::cordl_internals::setStaticField<bool, "s_hasInitializedPlatform", ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(std::forward<bool>(value));
}
inline bool PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::getStaticF_s_hasInitializedPlatform()  {
return ::cordl_internals::getStaticField<bool, "s_hasInitializedPlatform", ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::setStaticF_s_eosUnloadSDKOnShutdown(bool  value)  {
::cordl_internals::setStaticField<bool, "s_eosUnloadSDKOnShutdown", ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(std::forward<bool>(value));
}
inline bool PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::getStaticF_s_eosUnloadSDKOnShutdown()  {
return ::cordl_internals::getStaticField<bool, "s_eosUnloadSDKOnShutdown", ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::setStaticF_s_eosPlatformInterface(::Epic::OnlineServices::Platform::PlatformInterface*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Platform::PlatformInterface*, "s_eosPlatformInterface", ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(std::forward<::Epic::OnlineServices::Platform::PlatformInterface*>(value));
}
inline ::Epic::OnlineServices::Platform::PlatformInterface* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::getStaticF_s_eosPlatformInterface()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Platform::PlatformInterface*, "s_eosPlatformInterface", ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::setStaticF_LoadedDLLs(::System::Collections::Generic::Dictionary_2<::StringW,::PlayEveryWare::EpicOnlineServices::DLLHandle*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::PlayEveryWare::EpicOnlineServices::DLLHandle*>*, "LoadedDLLs", ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::PlayEveryWare::EpicOnlineServices::DLLHandle*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::PlayEveryWare::EpicOnlineServices::DLLHandle*>* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::getStaticF_LoadedDLLs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::PlayEveryWare::EpicOnlineServices::DLLHandle*>*, "LoadedDLLs", ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::SetLocalUserId(::Epic::OnlineServices::EpicAccountId*  localUserId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"SetLocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localUserId);
}
inline ::Epic::OnlineServices::EpicAccountId* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetLocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetLocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::EpicAccountId*>(this, ___internal_method);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::PUIDToString(::Epic::OnlineServices::ProductUserId*  puid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"PUIDToString", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, puid);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::SetLocalProductUserId(::Epic::OnlineServices::ProductUserId*  localProductUserId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"SetLocalProductUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localProductUserId);
}
inline ::Epic::OnlineServices::ProductUserId* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetProductUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetProductUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(this, ___internal_method);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetProductId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetProductId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetSandboxId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetSandboxId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetDeploymentID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetDeploymentID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::IsEncryptionKeyValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"IsEncryptionKeyValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::HasShutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"HasShutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::HasLoggedInWithConnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"HasLoggedInWithConnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::ShouldOverlayReceiveInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"ShouldOverlayReceiveInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::IsOverlayOpenWithExclusiveInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"IsOverlayOpenWithExclusiveInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::Log(::StringW  toPrint, ::UnityEngine::LogType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, toPrint, type);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::AddConnectLoginListener(::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin*  connectLogin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"AddConnectLoginListener", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectLogin);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::AddAuthLoginListener(::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin*  authLogin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"AddAuthLoginListener", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, authLogin);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::AddAuthLogoutListener(::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout*  authLogout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"AddAuthLogoutListener", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, authLogout);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::AddApplicationCloseListener(::System::Action*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"AddApplicationCloseListener", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::RemoveConnectLoginListener(::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin*  connectLogin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"RemoveConnectLoginListener", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectLogin);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::RemoveAuthLoginListener(::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin*  authLogin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"RemoveAuthLoginListener", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, authLogin);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::RemoveAuthLogoutListener(::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout*  authLogout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"RemoveAuthLogoutListener", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, authLogout);
}
template<typename T>
inline T PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetOrCreateManager()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                    {"GetOrCreateManager", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::RemoveManager()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                    {"RemoveManager", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Result PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::InitializePlatformInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"InitializePlatformInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Platform::PlatformInterface* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::CreatePlatformInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"CreatePlatformInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Platform::PlatformInterface*>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::InitializeNetworkChecks(::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*  coroutineOwner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"InitializeNetworkChecks", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coroutineOwner);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::InitializeOverlay(::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*  coroutineOwner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"InitializeOverlay", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coroutineOwner);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::ApplyCommandLineArguments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"ApplyCommandLineArguments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::Init(::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*  coroutineOwner, ::StringW  configFileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"Init", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coroutineOwner, configFileName);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::RegisterForPlatformNotifications()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"RegisterForPlatformNotifications", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::SimplePrintStringCallback(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"SimplePrintStringCallback", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, str);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::SimplePrintCallback(::by_ref<::Epic::OnlineServices::Logging::LogMessage>  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"SimplePrintCallback", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Logging::LogMessage>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::SetLogLevel(::Epic::OnlineServices::Logging::LogCategory  Category, ::Epic::OnlineServices::Logging::LogLevel  Level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"SetLogLevel", {}, {::i2c::type_of<::Epic::OnlineServices::Logging::LogCategory>(), ::i2c::type_of<::Epic::OnlineServices::Logging::LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Category, Level);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::InitializeLogLevels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"InitializeLogLevels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Logging::LogLevel PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetLogLevel(::Epic::OnlineServices::Logging::LogCategory  Category)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetLogLevel", {}, {::i2c::type_of<::Epic::OnlineServices::Logging::LogCategory>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Logging::LogLevel>(this, ___internal_method, Category);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::SimplePrintCallbackWithCallstack(::Epic::OnlineServices::Logging::LogMessage  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"SimplePrintCallbackWithCallstack", {}, {::i2c::type_of<::Epic::OnlineServices::Logging::LogMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline ::Epic::OnlineServices::Auth::LoginOptions PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::MakeLoginOptions(::Epic::OnlineServices::Auth::LoginCredentialType  loginType, ::Epic::OnlineServices::ExternalCredentialType  externalCredentialType, ::StringW  id, ::StringW  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"MakeLoginOptions", {}, {::i2c::type_of<::Epic::OnlineServices::Auth::LoginCredentialType>(), ::i2c::type_of<::Epic::OnlineServices::ExternalCredentialType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Auth::LoginOptions>(nullptr, ___internal_method, loginType, externalCredentialType, id, token);
}
inline ::System::Nullable_1<::Epic::OnlineServices::Auth::Token> PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetUserAuthTokenForAccountId(::Epic::OnlineServices::EpicAccountId*  accountId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetUserAuthTokenForAccountId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Auth::Token>>(this, ___internal_method, accountId);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_EpicLauncherArgs PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetCommandLineArgsFromEpicLauncher()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetCommandLineArgsFromEpicLauncher", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayEveryWare::EpicOnlineServices::EOSSingleton_EOSManager_EpicLauncherArgs>(nullptr, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::CreateConnectUserWithContinuanceToken(::Epic::OnlineServices::ContinuanceToken*  token, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*  onCreateUserCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"CreateConnectUserWithContinuanceToken", {}, {::i2c::type_of<::Epic::OnlineServices::ContinuanceToken*>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnCreateConnectUserCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token, onCreateUserCallback);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::AuthLinkExternalAccountWithContinuanceToken(::Epic::OnlineServices::ContinuanceToken*  token, ::Epic::OnlineServices::Auth::LinkAccountFlags  linkAccountFlags, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"AuthLinkExternalAccountWithContinuanceToken", {}, {::i2c::type_of<::Epic::OnlineServices::ContinuanceToken*>(), ::i2c::type_of<::Epic::OnlineServices::Auth::LinkAccountFlags>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLinkExternalAccountCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token, linkAccountFlags, callback);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::ConnectLinkExternalAccountWithContinuanceToken(::Epic::OnlineServices::ContinuanceToken*  token, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"ConnectLinkExternalAccountWithContinuanceToken", {}, {::i2c::type_of<::Epic::OnlineServices::ContinuanceToken*>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLinkExternalAccountCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token, callback);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::StartConnectLoginWithEpicAccount(::Epic::OnlineServices::EpicAccountId*  epicAccountId, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*  onConnectLoginCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"StartConnectLoginWithEpicAccount", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, epicAccountId, onConnectLoginCallback);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::StartConnectLoginWithOptions(::Epic::OnlineServices::ExternalCredentialType  externalCredentialType, ::StringW  token, ::StringW  displayname, ::StringW  nsaIdToken, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*  onloginCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"StartConnectLoginWithOptions", {}, {::i2c::type_of<::Epic::OnlineServices::ExternalCredentialType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, externalCredentialType, token, displayname, nsaIdToken, onloginCallback);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::StartConnectLoginWithOptions(::Epic::OnlineServices::ExternalCredentialType  externalCredentialType, ::StringW  token, ::StringW  displayname, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*  onloginCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"StartConnectLoginWithOptions", {}, {::i2c::type_of<::Epic::OnlineServices::ExternalCredentialType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, externalCredentialType, token, displayname, onloginCallback);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::StartConnectLoginWithOptions(::Epic::OnlineServices::Connect::LoginOptions  connectLoginOptions, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*  onloginCallback, bool  requiresAuthRefresh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"StartConnectLoginWithOptions", {}, {::i2c::type_of<::Epic::OnlineServices::Connect::LoginOptions>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectLoginOptions, onloginCallback, requiresAuthRefresh);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::StartConnectLoginWithDeviceToken(::StringW  displayName, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*  onLoginCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"StartConnectLoginWithDeviceToken", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayName, onLoginCallback);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::ConnectTransferDeviceIDAccount(::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"ConnectTransferDeviceIDAccount", {}, {::i2c::type_of<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::StartPersistentLogin(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*  onLoginCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"StartPersistentLogin", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onLoginCallback);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::StartLoginWithLoginTypeAndToken(::Epic::OnlineServices::Auth::LoginCredentialType  loginType, ::StringW  id, ::StringW  token, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*  onLoginCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"StartLoginWithLoginTypeAndToken", {}, {::i2c::type_of<::Epic::OnlineServices::Auth::LoginCredentialType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loginType, id, token, onLoginCallback);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::StartLoginWithLoginTypeAndToken(::Epic::OnlineServices::Auth::LoginCredentialType  loginType, ::Epic::OnlineServices::ExternalCredentialType  externalCredentialType, ::StringW  id, ::StringW  token, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*  onLoginCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"StartLoginWithLoginTypeAndToken", {}, {::i2c::type_of<::Epic::OnlineServices::Auth::LoginCredentialType>(), ::i2c::type_of<::Epic::OnlineServices::ExternalCredentialType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loginType, externalCredentialType, id, token, onLoginCallback);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::ConfigureAuthStatusCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"ConfigureAuthStatusCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::ConfigureConnectStatusCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"ConfigureConnectStatusCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::ConfigureConnectExpirationCallback(::Epic::OnlineServices::Connect::LoginOptions  connectLoginOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"ConfigureConnectExpirationCallback", {}, {::i2c::type_of<::Epic::OnlineServices::Connect::LoginOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectLoginOptions);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::StartLoginWithLoginOptions(::Epic::OnlineServices::Auth::LoginOptions  loginOptions, ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*  onLoginCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"StartLoginWithLoginOptions", {}, {::i2c::type_of<::Epic::OnlineServices::Auth::LoginOptions>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loginOptions, onLoginCallback);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::SetPresenceRichTextForUser(::Epic::OnlineServices::EpicAccountId*  accountId, ::StringW  richText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"SetPresenceRichTextForUser", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accountId, richText);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::StartLogout(::Epic::OnlineServices::EpicAccountId*  accountId, ::Epic::OnlineServices::Auth::OnLogoutCallback*  onLogoutCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"StartLogout", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>(), ::i2c::type_of<::Epic::OnlineServices::Auth::OnLogoutCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accountId, onLogoutCallback);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::ClearConnectId(::Epic::OnlineServices::ProductUserId*  userId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"ClearConnectId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::RemovePersistentToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"RemovePersistentToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::OnShutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"OnShutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::OnApplicationShutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"OnApplicationShutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::ShutdownPlatformInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"ShutdownPlatformInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Platform::ApplicationStatus PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSApplicationStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSApplicationStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Platform::ApplicationStatus>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::SetEOSApplicationStatus(::Epic::OnlineServices::Platform::ApplicationStatus  newStatus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"SetEOSApplicationStatus", {}, {::i2c::type_of<::Epic::OnlineServices::Platform::ApplicationStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newStatus);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::UpdateEOSApplicationStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"UpdateEOSApplicationStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::OnApplicationPause(bool  isPaused)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isPaused);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::OnApplicationFocus(bool  hasFocus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasFocus);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::OnApplicationConstrained(bool  isConstrained, bool  shouldUpdateEOSAppStatus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"OnApplicationConstrained", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isConstrained, shouldUpdateEOSAppStatus);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::UpdateApplicationConstrainedState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"UpdateApplicationConstrainedState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::UpdateNetworkStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"UpdateNetworkStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::IntPtr PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::EOS_GetPlatformInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"EOS_GetPlatformInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::global_log_flush_with_function(::System::IntPtr  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"global_log_flush_with_function", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr);
}
inline ::Epic::OnlineServices::Platform::PlatformInterface* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSPlatformInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSPlatformInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Platform::PlatformInterface*>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::SetEOSPlatformInterface(::Epic::OnlineServices::Platform::PlatformInterface*  platformInterface)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"SetEOSPlatformInterface", {}, {::i2c::type_of<::Epic::OnlineServices::Platform::PlatformInterface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, platformInterface);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::AddAllAssembliesInCurrentDomain(::System::Collections::Generic::List_1<::System::Reflection::Assembly*>*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"AddAllAssembliesInCurrentDomain", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Reflection::Assembly*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list);
}
inline ::PlayEveryWare::EpicOnlineServices::DLLHandle* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::LoadDynamicLibrary(::StringW  libraryName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"LoadDynamicLibrary", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(nullptr, ___internal_method, libraryName);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::UnloadAllLibraries()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"UnloadAllLibraries", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::LoadDelegatesWithEOSBindingAPI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"LoadDelegatesWithEOSBindingAPI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::ForceUnloadEOSLibrary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"ForceUnloadEOSLibrary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::LoadEOSLibraries()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"LoadEOSLibraries", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::Epic::OnlineServices::Auth::AuthInterface* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSAuthInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSAuthInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Auth::AuthInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Achievements::AchievementsInterface* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSAchievementInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSAchievementInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Achievements::AchievementsInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Connect::ConnectInterface* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSConnectInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSConnectInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Connect::ConnectInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Ecom::EcomInterface* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSEcomInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSEcomInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Ecom::EcomInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Friends::FriendsInterface* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSFriendsInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSFriendsInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Friends::FriendsInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Leaderboards::LeaderboardsInterface* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSLeaderboardsInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSLeaderboardsInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Lobby::LobbyInterface* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSLobbyInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSLobbyInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::LobbyInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Metrics::MetricsInterface* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSMetricsInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSMetricsInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Metrics::MetricsInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Mods::ModsInterface* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSModsInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSModsInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Mods::ModsInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::P2P::P2PInterface* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSP2PInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSP2PInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::P2P::P2PInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetPlayerDataStorageInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetPlayerDataStorageInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Presence::PresenceInterface* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSPresenceInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSPresenceInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Presence::PresenceInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::RTC::RTCInterface* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSRTCInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSRTCInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTC::RTCInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Sessions::SessionsInterface* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSSessionsInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSSessionsInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sessions::SessionsInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Stats::StatsInterface* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSStatsInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSStatsInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Stats::StatsInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::TitleStorage::TitleStorageInterface* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSTitleStorageInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSTitleStorageInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::TitleStorage::TitleStorageInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::UI::UIInterface* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSUIInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSUIInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::UI::UIInterface*>(this, ___internal_method);
}
inline ::Epic::OnlineServices::UserInfo::UserInfoInterface* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::GetEOSUserInfoInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"GetEOSUserInfoInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::_GetCommandLineArgsFromEpicLauncher_g__ConfigureEpicArgument_49_0(::StringW  argument, ::by_ref<::StringW>  argumentString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"<GetCommandLineArgsFromEpicLauncher>g__ConfigureEpicArgument|49_0", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, argument, argumentString);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::_ConfigureAuthStatusCallback_b__62_1(uint64_t  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"<ConfigureAuthStatusCallback>b__62_1", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::_ConfigureConnectStatusCallback_b__63_0(::by_ref<::Epic::OnlineServices::Connect::LoginStatusChangedCallbackInfo>  callbackInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"<ConfigureConnectStatusCallback>b__63_0", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::LoginStatusChangedCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callbackInfo);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::_ConfigureConnectStatusCallback_b__63_1(uint64_t  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(),
                        {"<ConfigureConnectStatusCallback>b__63_1", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton* PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton::EOSManager_EOSSingleton()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager.add_OnAuthLogin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager::add_OnAuthLogin)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180538be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"add_OnAuthLogin", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager.remove_OnAuthLogin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager::remove_OnAuthLogin)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180538f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"remove_OnAuthLogin", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager.add_OnAuthLogout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager::add_OnAuthLogout)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180538c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"add_OnAuthLogout", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager.remove_OnAuthLogout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager::remove_OnAuthLogout)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180538fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"remove_OnAuthLogout", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager.add_OnConnectLogin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager::add_OnConnectLogin)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180538d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"add_OnConnectLogin", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager.remove_OnConnectLogin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager::remove_OnConnectLogin)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180539090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"remove_OnConnectLogin", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager.get_ApplicationIsPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager::get_ApplicationIsPaused)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180538e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"get_ApplicationIsPaused", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager.get_ApplicationHasFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager::get_ApplicationHasFocus)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180538df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"get_ApplicationHasFocus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager.get_ApplicationIsConstrained
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager::get_ApplicationIsConstrained)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180538e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"get_ApplicationIsConstrained", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton* (*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager::get_Instance)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180538eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager::Awake)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180538190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager::Update)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1805387e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager.OnApplicationFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager::*)(bool)>(&::PlayEveryWare::EpicOnlineServices::EOSManager::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180538660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager.OnApplicationPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager::*)(bool)>(&::PlayEveryWare::EpicOnlineServices::EOSManager::OnApplicationPause)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805386b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager::OnEnable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180538780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager::OnDisable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180538730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager.OnApplicationQuitting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager::OnApplicationQuitting)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180538700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"OnApplicationQuitting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager.PlayEveryWare_EpicOnlineServices_IEOSCoroutineOwner_StartCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager::*)(::System::Collections::IEnumerator*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager::PlayEveryWare_EpicOnlineServices_IEOSCoroutineOwner_StartCoroutine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805387d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"PlayEveryWare.EpicOnlineServices.IEOSCoroutineOwner.StartCoroutine", {}, {::i2c::type_of<::System::Collections::IEnumerator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager.DispatchAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::PlayEveryWare::EpicOnlineServices::EOSManager::DispatchAsync)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1805382c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"DispatchAsync", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager.ExecuteQueuedMainThreadTasks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager::ExecuteQueuedMainThreadTasks)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180538490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"ExecuteQueuedMainThreadTasks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::EOSManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::EOSManager::*)()>(&::PlayEveryWare::EpicOnlineServices::EOSManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180538bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& PlayEveryWare::EpicOnlineServices::EOSManager::__cordl_internal_get_ShouldShutdownOnApplicationQuit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShouldShutdownOnApplicationQuit;
}
constexpr bool const& PlayEveryWare::EpicOnlineServices::EOSManager::__cordl_internal_get_ShouldShutdownOnApplicationQuit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShouldShutdownOnApplicationQuit;
}
constexpr void PlayEveryWare::EpicOnlineServices::EOSManager::__cordl_internal_set_ShouldShutdownOnApplicationQuit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShouldShutdownOnApplicationQuit = value;
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::setStaticF_OnAuthLogin(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*  value)  {
::cordl_internals::setStaticField<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*, "OnAuthLogin", ::PlayEveryWare::EpicOnlineServices::EOSManager*>(std::forward<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*>(value));
}
inline ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback* PlayEveryWare::EpicOnlineServices::EOSManager::getStaticF_OnAuthLogin()  {
return ::cordl_internals::getStaticField<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*, "OnAuthLogin", ::PlayEveryWare::EpicOnlineServices::EOSManager*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::setStaticF_OnAuthLogout(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*  value)  {
::cordl_internals::setStaticField<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*, "OnAuthLogout", ::PlayEveryWare::EpicOnlineServices::EOSManager*>(std::forward<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*>(value));
}
inline ::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback* PlayEveryWare::EpicOnlineServices::EOSManager::getStaticF_OnAuthLogout()  {
return ::cordl_internals::getStaticField<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*, "OnAuthLogout", ::PlayEveryWare::EpicOnlineServices::EOSManager*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::setStaticF_OnConnectLogin(::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*  value)  {
::cordl_internals::setStaticField<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*, "OnConnectLogin", ::PlayEveryWare::EpicOnlineServices::EOSManager*>(std::forward<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*>(value));
}
inline ::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback* PlayEveryWare::EpicOnlineServices::EOSManager::getStaticF_OnConnectLogin()  {
return ::cordl_internals::getStaticField<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*, "OnConnectLogin", ::PlayEveryWare::EpicOnlineServices::EOSManager*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::setStaticF_GetUserLoginInfo(::System::Func_1<::System::Threading::Tasks::Task_1<::Epic::OnlineServices::Connect::UserLoginInfo>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::Threading::Tasks::Task_1<::Epic::OnlineServices::Connect::UserLoginInfo>*>*, "GetUserLoginInfo", ::PlayEveryWare::EpicOnlineServices::EOSManager*>(std::forward<::System::Func_1<::System::Threading::Tasks::Task_1<::Epic::OnlineServices::Connect::UserLoginInfo>*>*>(value));
}
inline ::System::Func_1<::System::Threading::Tasks::Task_1<::Epic::OnlineServices::Connect::UserLoginInfo>*>* PlayEveryWare::EpicOnlineServices::EOSManager::getStaticF_GetUserLoginInfo()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::Threading::Tasks::Task_1<::Epic::OnlineServices::Connect::UserLoginInfo>*>*, "GetUserLoginInfo", ::PlayEveryWare::EpicOnlineServices::EOSManager*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::setStaticF_GetUserLoginToken(::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*, "GetUserLoginToken", ::PlayEveryWare::EpicOnlineServices::EOSManager*>(std::forward<::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*>(value));
}
inline ::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>* PlayEveryWare::EpicOnlineServices::EOSManager::getStaticF_GetUserLoginToken()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*, "GetUserLoginToken", ::PlayEveryWare::EpicOnlineServices::EOSManager*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::setStaticF_CleanupUserLoginToken(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "CleanupUserLoginToken", ::PlayEveryWare::EpicOnlineServices::EOSManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* PlayEveryWare::EpicOnlineServices::EOSManager::getStaticF_CleanupUserLoginToken()  {
return ::cordl_internals::getStaticField<::System::Action*, "CleanupUserLoginToken", ::PlayEveryWare::EpicOnlineServices::EOSManager*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::setStaticF_loggedInAccountIDs(::System::Collections::Generic::List_1<::Epic::OnlineServices::EpicAccountId*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Epic::OnlineServices::EpicAccountId*>*, "loggedInAccountIDs", ::PlayEveryWare::EpicOnlineServices::EOSManager*>(std::forward<::System::Collections::Generic::List_1<::Epic::OnlineServices::EpicAccountId*>*>(value));
}
inline ::System::Collections::Generic::List_1<::Epic::OnlineServices::EpicAccountId*>* PlayEveryWare::EpicOnlineServices::EOSManager::getStaticF_loggedInAccountIDs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Epic::OnlineServices::EpicAccountId*>*, "loggedInAccountIDs", ::PlayEveryWare::EpicOnlineServices::EOSManager*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::setStaticF_s_subManagers(::System::Collections::Generic::Dictionary_2<::System::Type*,::PlayEveryWare::EpicOnlineServices::IEOSSubManager*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::PlayEveryWare::EpicOnlineServices::IEOSSubManager*>*, "s_subManagers", ::PlayEveryWare::EpicOnlineServices::EOSManager*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::PlayEveryWare::EpicOnlineServices::IEOSSubManager*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::PlayEveryWare::EpicOnlineServices::IEOSSubManager*>* PlayEveryWare::EpicOnlineServices::EOSManager::getStaticF_s_subManagers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::PlayEveryWare::EpicOnlineServices::IEOSSubManager*>*, "s_subManagers", ::PlayEveryWare::EpicOnlineServices::EOSManager*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::setStaticF_s_onApplicationShutdownCallbacks(::System::Collections::Generic::List_1<::System::Action*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Action*>*, "s_onApplicationShutdownCallbacks", ::PlayEveryWare::EpicOnlineServices::EOSManager*>(std::forward<::System::Collections::Generic::List_1<::System::Action*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Action*>* PlayEveryWare::EpicOnlineServices::EOSManager::getStaticF_s_onApplicationShutdownCallbacks()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Action*>*, "s_onApplicationShutdownCallbacks", ::PlayEveryWare::EpicOnlineServices::EOSManager*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::setStaticF_s_isOverlayVisible(bool  value)  {
::cordl_internals::setStaticField<bool, "s_isOverlayVisible", ::PlayEveryWare::EpicOnlineServices::EOSManager*>(std::forward<bool>(value));
}
inline bool PlayEveryWare::EpicOnlineServices::EOSManager::getStaticF_s_isOverlayVisible()  {
return ::cordl_internals::getStaticField<bool, "s_isOverlayVisible", ::PlayEveryWare::EpicOnlineServices::EOSManager*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::setStaticF_s_DoesOverlayHaveExcusiveInput(bool  value)  {
::cordl_internals::setStaticField<bool, "s_DoesOverlayHaveExcusiveInput", ::PlayEveryWare::EpicOnlineServices::EOSManager*>(std::forward<bool>(value));
}
inline bool PlayEveryWare::EpicOnlineServices::EOSManager::getStaticF_s_DoesOverlayHaveExcusiveInput()  {
return ::cordl_internals::getStaticField<bool, "s_DoesOverlayHaveExcusiveInput", ::PlayEveryWare::EpicOnlineServices::EOSManager*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::setStaticF_logLevels(::System::Collections::Generic::Dictionary_2<::Epic::OnlineServices::Logging::LogCategory,::Epic::OnlineServices::Logging::LogLevel>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Epic::OnlineServices::Logging::LogCategory,::Epic::OnlineServices::Logging::LogLevel>*, "logLevels", ::PlayEveryWare::EpicOnlineServices::EOSManager*>(std::forward<::System::Collections::Generic::Dictionary_2<::Epic::OnlineServices::Logging::LogCategory,::Epic::OnlineServices::Logging::LogLevel>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Epic::OnlineServices::Logging::LogCategory,::Epic::OnlineServices::Logging::LogLevel>* PlayEveryWare::EpicOnlineServices::EOSManager::getStaticF_logLevels()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Epic::OnlineServices::Logging::LogCategory,::Epic::OnlineServices::Logging::LogLevel>*, "logLevels", ::PlayEveryWare::EpicOnlineServices::EOSManager*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::setStaticF_s_EOSManagerInstance(::UnityW<::PlayEveryWare::EpicOnlineServices::EOSManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::PlayEveryWare::EpicOnlineServices::EOSManager>, "s_EOSManagerInstance", ::PlayEveryWare::EpicOnlineServices::EOSManager*>(std::forward<::UnityW<::PlayEveryWare::EpicOnlineServices::EOSManager>>(value));
}
inline ::UnityW<::PlayEveryWare::EpicOnlineServices::EOSManager> PlayEveryWare::EpicOnlineServices::EOSManager::getStaticF_s_EOSManagerInstance()  {
return ::cordl_internals::getStaticField<::UnityW<::PlayEveryWare::EpicOnlineServices::EOSManager>, "s_EOSManagerInstance", ::PlayEveryWare::EpicOnlineServices::EOSManager*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::setStaticF_s_state(::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState  value)  {
::cordl_internals::setStaticField<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState, "s_state", ::PlayEveryWare::EpicOnlineServices::EOSManager*>(std::forward<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState>(value));
}
inline ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState PlayEveryWare::EpicOnlineServices::EOSManager::getStaticF_s_state()  {
return ::cordl_internals::getStaticField<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSState, "s_state", ::PlayEveryWare::EpicOnlineServices::EOSManager*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::setStaticF_s_isPaused(bool  value)  {
::cordl_internals::setStaticField<bool, "s_isPaused", ::PlayEveryWare::EpicOnlineServices::EOSManager*>(std::forward<bool>(value));
}
inline bool PlayEveryWare::EpicOnlineServices::EOSManager::getStaticF_s_isPaused()  {
return ::cordl_internals::getStaticField<bool, "s_isPaused", ::PlayEveryWare::EpicOnlineServices::EOSManager*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::setStaticF_s_hasFocus(bool  value)  {
::cordl_internals::setStaticField<bool, "s_hasFocus", ::PlayEveryWare::EpicOnlineServices::EOSManager*>(std::forward<bool>(value));
}
inline bool PlayEveryWare::EpicOnlineServices::EOSManager::getStaticF_s_hasFocus()  {
return ::cordl_internals::getStaticField<bool, "s_hasFocus", ::PlayEveryWare::EpicOnlineServices::EOSManager*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::setStaticF_s_isConstrained(bool  value)  {
::cordl_internals::setStaticField<bool, "s_isConstrained", ::PlayEveryWare::EpicOnlineServices::EOSManager*>(std::forward<bool>(value));
}
inline bool PlayEveryWare::EpicOnlineServices::EOSManager::getStaticF_s_isConstrained()  {
return ::cordl_internals::getStaticField<bool, "s_isConstrained", ::PlayEveryWare::EpicOnlineServices::EOSManager*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::setStaticF_s_instance(::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*  value)  {
::cordl_internals::setStaticField<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*, "s_instance", ::PlayEveryWare::EpicOnlineServices::EOSManager*>(std::forward<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(value));
}
inline ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton* PlayEveryWare::EpicOnlineServices::EOSManager::getStaticF_s_instance()  {
return ::cordl_internals::getStaticField<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*, "s_instance", ::PlayEveryWare::EpicOnlineServices::EOSManager*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::setStaticF_s_enqueuedTasks(::System::Collections::Generic::List_1<::System::Action*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Action*>*, "s_enqueuedTasks", ::PlayEveryWare::EpicOnlineServices::EOSManager*>(std::forward<::System::Collections::Generic::List_1<::System::Action*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Action*>* PlayEveryWare::EpicOnlineServices::EOSManager::getStaticF_s_enqueuedTasks()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Action*>*, "s_enqueuedTasks", ::PlayEveryWare::EpicOnlineServices::EOSManager*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::setStaticF_s_enqueuedTasksLock(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "s_enqueuedTasksLock", ::PlayEveryWare::EpicOnlineServices::EOSManager*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* PlayEveryWare::EpicOnlineServices::EOSManager::getStaticF_s_enqueuedTasksLock()  {
return ::cordl_internals::getStaticField<::System::Object*, "s_enqueuedTasksLock", ::PlayEveryWare::EpicOnlineServices::EOSManager*>();
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::add_OnAuthLogin(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"add_OnAuthLogin", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::remove_OnAuthLogin(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"remove_OnAuthLogin", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLoginCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::add_OnAuthLogout(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"add_OnAuthLogout", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::remove_OnAuthLogout(::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"remove_OnAuthLogout", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnAuthLogoutCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::add_OnConnectLogin(::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"add_OnConnectLogin", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::remove_OnConnectLogin(::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"remove_OnConnectLogin", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::EOSManager_OnConnectLoginCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool PlayEveryWare::EpicOnlineServices::EOSManager::get_ApplicationIsPaused()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"get_ApplicationIsPaused", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool PlayEveryWare::EpicOnlineServices::EOSManager::get_ApplicationHasFocus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"get_ApplicationHasFocus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool PlayEveryWare::EpicOnlineServices::EOSManager::get_ApplicationIsConstrained()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"get_ApplicationIsConstrained", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton* PlayEveryWare::EpicOnlineServices::EOSManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayEveryWare::EpicOnlineServices::EOSManager_EOSSingleton*>(nullptr, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::OnApplicationFocus(bool  hasFocus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasFocus);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::OnApplicationPause(bool  pauseStatus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pauseStatus);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::OnApplicationQuitting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"OnApplicationQuitting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::PlayEveryWare_EpicOnlineServices_IEOSCoroutineOwner_StartCoroutine(::System::Collections::IEnumerator*  routine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"PlayEveryWare.EpicOnlineServices.IEOSCoroutineOwner.StartCoroutine", {}, {::i2c::type_of<::System::Collections::IEnumerator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, routine);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::DispatchAsync(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"DispatchAsync", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::ExecuteQueuedMainThreadTasks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {"ExecuteQueuedMainThreadTasks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::EOSManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::EOSManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::EOSManager* PlayEveryWare::EpicOnlineServices::EOSManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::EOSManager*>());
}
/// @brief Convert operator to "::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner"
constexpr  PlayEveryWare::EpicOnlineServices::EOSManager::operator ::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*() noexcept {
return static_cast<::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner"
constexpr ::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner* PlayEveryWare::EpicOnlineServices::EOSManager::i___PlayEveryWare__EpicOnlineServices__IEOSCoroutineOwner() noexcept {
return static_cast<::PlayEveryWare::EpicOnlineServices::IEOSCoroutineOwner*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::EOSManager::EOSManager()   {
}

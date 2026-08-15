#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/AuthInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__AuthInterface_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__AddNotifyLoginStatusChangedOptions_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__CopyIdTokenOptions_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__CopyUserAuthTokenOptions_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__DeletePersistentAuthOptions_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__IdToken_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LinkAccountOptions_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginOptions_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LogoutOptions_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnDeletePersistentAuthCallback_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnLinkAccountCallback_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnLoginCallback_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnLoginStatusChangedCallback_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnLogoutCallback_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnQueryIdTokenCallback_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnVerifyIdTokenCallback_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnVerifyUserAuthCallback_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__QueryIdTokenOptions_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__Token_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__VerifyIdTokenOptions_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__VerifyUserAuthOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__EpicAccountId_def.hpp"
#include "Epic/OnlineServices/zzzz__LoginStatus_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::AuthInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::AuthInterface::*)()>(&::Epic::OnlineServices::Auth::AuthInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::AuthInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::AuthInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::Auth::AuthInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::AuthInterface.AddNotifyLoginStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::Auth::AuthInterface::*)(::by_ref<::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptions>, ::System::Object*, ::Epic::OnlineServices::Auth::OnLoginStatusChangedCallback*)>(&::Epic::OnlineServices::Auth::AuthInterface::AddNotifyLoginStatusChanged)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x180520a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"AddNotifyLoginStatusChanged", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Auth::OnLoginStatusChangedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::AuthInterface.CopyIdToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Auth::AuthInterface::*)(::by_ref<::Epic::OnlineServices::Auth::CopyIdTokenOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Auth::IdToken>>)>(&::Epic::OnlineServices::Auth::AuthInterface::CopyIdToken)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180520c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"CopyIdToken", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::CopyIdTokenOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Auth::IdToken>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::AuthInterface.CopyUserAuthToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Auth::AuthInterface::*)(::by_ref<::Epic::OnlineServices::Auth::CopyUserAuthTokenOptions>, ::Epic::OnlineServices::EpicAccountId*, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Auth::Token>>)>(&::Epic::OnlineServices::Auth::AuthInterface::CopyUserAuthToken)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180520cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"CopyUserAuthToken", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::CopyUserAuthTokenOptions>>(), ::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Auth::Token>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::AuthInterface.DeletePersistentAuth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::AuthInterface::*)(::by_ref<::Epic::OnlineServices::Auth::DeletePersistentAuthOptions>, ::System::Object*, ::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallback*)>(&::Epic::OnlineServices::Auth::AuthInterface::DeletePersistentAuth)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180520d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"DeletePersistentAuth", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::DeletePersistentAuthOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::AuthInterface.GetLoggedInAccountByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::EpicAccountId* (::Epic::OnlineServices::Auth::AuthInterface::*)(int32_t)>(&::Epic::OnlineServices::Auth::AuthInterface::GetLoggedInAccountByIndex)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180520f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"GetLoggedInAccountByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::AuthInterface.GetLoggedInAccountsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Epic::OnlineServices::Auth::AuthInterface::*)()>(&::Epic::OnlineServices::Auth::AuthInterface::GetLoggedInAccountsCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180520fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"GetLoggedInAccountsCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::AuthInterface.GetLoginStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::LoginStatus (::Epic::OnlineServices::Auth::AuthInterface::*)(::Epic::OnlineServices::EpicAccountId*)>(&::Epic::OnlineServices::Auth::AuthInterface::GetLoginStatus)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180520fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"GetLoginStatus", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::AuthInterface.GetMergedAccountByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::EpicAccountId* (::Epic::OnlineServices::Auth::AuthInterface::*)(::Epic::OnlineServices::EpicAccountId*, uint32_t)>(&::Epic::OnlineServices::Auth::AuthInterface::GetMergedAccountByIndex)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180521000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"GetMergedAccountByIndex", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::AuthInterface.GetMergedAccountsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Auth::AuthInterface::*)(::Epic::OnlineServices::EpicAccountId*)>(&::Epic::OnlineServices::Auth::AuthInterface::GetMergedAccountsCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180521050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"GetMergedAccountsCount", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::AuthInterface.GetSelectedAccountId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Auth::AuthInterface::*)(::Epic::OnlineServices::EpicAccountId*, ::by_ref<::Epic::OnlineServices::EpicAccountId*>)>(&::Epic::OnlineServices::Auth::AuthInterface::GetSelectedAccountId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180521080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"GetSelectedAccountId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::EpicAccountId*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::AuthInterface.LinkAccount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::AuthInterface::*)(::by_ref<::Epic::OnlineServices::Auth::LinkAccountOptions>, ::System::Object*, ::Epic::OnlineServices::Auth::OnLinkAccountCallback*)>(&::Epic::OnlineServices::Auth::AuthInterface::LinkAccount)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1805210e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"LinkAccount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LinkAccountOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Auth::OnLinkAccountCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::AuthInterface.Login
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::AuthInterface::*)(::by_ref<::Epic::OnlineServices::Auth::LoginOptions>, ::System::Object*, ::Epic::OnlineServices::Auth::OnLoginCallback*)>(&::Epic::OnlineServices::Auth::AuthInterface::Login)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x180521320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"Login", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LoginOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Auth::OnLoginCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::AuthInterface.Logout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::AuthInterface::*)(::by_ref<::Epic::OnlineServices::Auth::LogoutOptions>, ::System::Object*, ::Epic::OnlineServices::Auth::OnLogoutCallback*)>(&::Epic::OnlineServices::Auth::AuthInterface::Logout)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180521570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"Logout", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LogoutOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Auth::OnLogoutCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::AuthInterface.QueryIdToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::AuthInterface::*)(::by_ref<::Epic::OnlineServices::Auth::QueryIdTokenOptions>, ::System::Object*, ::Epic::OnlineServices::Auth::OnQueryIdTokenCallback*)>(&::Epic::OnlineServices::Auth::AuthInterface::QueryIdToken)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x180521770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"QueryIdToken", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::QueryIdTokenOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Auth::OnQueryIdTokenCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::AuthInterface.RemoveNotifyLoginStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::AuthInterface::*)(uint64_t)>(&::Epic::OnlineServices::Auth::AuthInterface::RemoveNotifyLoginStatusChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805219a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"RemoveNotifyLoginStatusChanged", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::AuthInterface.VerifyIdToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::AuthInterface::*)(::by_ref<::Epic::OnlineServices::Auth::VerifyIdTokenOptions>, ::System::Object*, ::Epic::OnlineServices::Auth::OnVerifyIdTokenCallback*)>(&::Epic::OnlineServices::Auth::AuthInterface::VerifyIdToken)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1805219d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"VerifyIdToken", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::VerifyIdTokenOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Auth::OnVerifyIdTokenCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::AuthInterface.VerifyUserAuth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::AuthInterface::*)(::by_ref<::Epic::OnlineServices::Auth::VerifyUserAuthOptions>, ::System::Object*, ::Epic::OnlineServices::Auth::OnVerifyUserAuthCallback*)>(&::Epic::OnlineServices::Auth::AuthInterface::VerifyUserAuth)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x180521c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"VerifyUserAuth", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::VerifyUserAuthOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Auth::OnVerifyUserAuthCallback*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Auth::AuthInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::Auth::AuthInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline uint64_t Epic::OnlineServices::Auth::AuthInterface::AddNotifyLoginStatusChanged(::by_ref<::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Auth::OnLoginStatusChangedCallback*  notification)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"AddNotifyLoginStatusChanged", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::AddNotifyLoginStatusChangedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Auth::OnLoginStatusChangedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notification);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Auth::AuthInterface::CopyIdToken(::by_ref<::Epic::OnlineServices::Auth::CopyIdTokenOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Auth::IdToken>>  outIdToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"CopyIdToken", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::CopyIdTokenOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Auth::IdToken>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outIdToken);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Auth::AuthInterface::CopyUserAuthToken(::by_ref<::Epic::OnlineServices::Auth::CopyUserAuthTokenOptions>  options, ::Epic::OnlineServices::EpicAccountId*  localUserId, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Auth::Token>>  outUserAuthToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"CopyUserAuthToken", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::CopyUserAuthTokenOptions>>(), ::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Auth::Token>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, localUserId, outUserAuthToken);
}
inline void Epic::OnlineServices::Auth::AuthInterface::DeletePersistentAuth(::by_ref<::Epic::OnlineServices::Auth::DeletePersistentAuthOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"DeletePersistentAuth", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::DeletePersistentAuthOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Auth::OnDeletePersistentAuthCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::EpicAccountId* Epic::OnlineServices::Auth::AuthInterface::GetLoggedInAccountByIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"GetLoggedInAccountByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::EpicAccountId*>(this, ___internal_method, index);
}
inline int32_t Epic::OnlineServices::Auth::AuthInterface::GetLoggedInAccountsCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"GetLoggedInAccountsCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Epic::OnlineServices::LoginStatus Epic::OnlineServices::Auth::AuthInterface::GetLoginStatus(::Epic::OnlineServices::EpicAccountId*  localUserId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"GetLoginStatus", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::LoginStatus>(this, ___internal_method, localUserId);
}
inline ::Epic::OnlineServices::EpicAccountId* Epic::OnlineServices::Auth::AuthInterface::GetMergedAccountByIndex(::Epic::OnlineServices::EpicAccountId*  localUserId, uint32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"GetMergedAccountByIndex", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::EpicAccountId*>(this, ___internal_method, localUserId, index);
}
inline uint32_t Epic::OnlineServices::Auth::AuthInterface::GetMergedAccountsCount(::Epic::OnlineServices::EpicAccountId*  localUserId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"GetMergedAccountsCount", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, localUserId);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Auth::AuthInterface::GetSelectedAccountId(::Epic::OnlineServices::EpicAccountId*  localUserId, ::by_ref<::Epic::OnlineServices::EpicAccountId*>  outSelectedAccountId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"GetSelectedAccountId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::EpicAccountId*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, localUserId, outSelectedAccountId);
}
inline void Epic::OnlineServices::Auth::AuthInterface::LinkAccount(::by_ref<::Epic::OnlineServices::Auth::LinkAccountOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Auth::OnLinkAccountCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"LinkAccount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LinkAccountOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Auth::OnLinkAccountCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Auth::AuthInterface::Login(::by_ref<::Epic::OnlineServices::Auth::LoginOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Auth::OnLoginCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"Login", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LoginOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Auth::OnLoginCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Auth::AuthInterface::Logout(::by_ref<::Epic::OnlineServices::Auth::LogoutOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Auth::OnLogoutCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"Logout", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LogoutOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Auth::OnLogoutCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Auth::AuthInterface::QueryIdToken(::by_ref<::Epic::OnlineServices::Auth::QueryIdTokenOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Auth::OnQueryIdTokenCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"QueryIdToken", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::QueryIdTokenOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Auth::OnQueryIdTokenCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Auth::AuthInterface::RemoveNotifyLoginStatusChanged(uint64_t  inId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"RemoveNotifyLoginStatusChanged", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inId);
}
inline void Epic::OnlineServices::Auth::AuthInterface::VerifyIdToken(::by_ref<::Epic::OnlineServices::Auth::VerifyIdTokenOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Auth::OnVerifyIdTokenCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"VerifyIdToken", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::VerifyIdTokenOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Auth::OnVerifyIdTokenCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Auth::AuthInterface::VerifyUserAuth(::by_ref<::Epic::OnlineServices::Auth::VerifyUserAuthOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Auth::OnVerifyUserAuthCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::AuthInterface*>(),
                        {"VerifyUserAuth", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::VerifyUserAuthOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Auth::OnVerifyUserAuthCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::Auth::AuthInterface* Epic::OnlineServices::Auth::AuthInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Auth::AuthInterface*>());
}
inline ::Epic::OnlineServices::Auth::AuthInterface* Epic::OnlineServices::Auth::AuthInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Auth::AuthInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::AuthInterface::AuthInterface()   {
}

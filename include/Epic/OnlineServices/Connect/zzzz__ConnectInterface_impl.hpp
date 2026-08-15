#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/ConnectInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__ConnectInterface_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__AddNotifyAuthExpirationOptions_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__AddNotifyLoginStatusChangedOptions_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__CopyIdTokenOptions_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__CopyProductUserExternalAccountByAccountIdOptions_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__CopyProductUserExternalAccountByAccountTypeOptions_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__CopyProductUserExternalAccountByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__CopyProductUserInfoOptions_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__CreateDeviceIdOptions_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__CreateUserOptions_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__DeleteDeviceIdOptions_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__ExternalAccountInfo_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__GetExternalAccountMappingsOptions_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__GetProductUserExternalAccountCountOptions_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__GetProductUserIdMappingOptions_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__IdToken_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__LinkAccountOptions_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__LoginOptions_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__LogoutOptions_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnAuthExpirationCallback_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnCreateDeviceIdCallback_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnCreateUserCallback_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnDeleteDeviceIdCallback_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnLinkAccountCallback_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnLoginCallback_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnLoginStatusChangedCallback_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnLogoutCallback_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnQueryExternalAccountMappingsCallback_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnQueryProductUserIdMappingsCallback_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnTransferDeviceIdAccountCallback_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnUnlinkAccountCallback_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnVerifyIdTokenCallback_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__QueryExternalAccountMappingsOptions_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__QueryProductUserIdMappingsOptions_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__TransferDeviceIdAccountOptions_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__UnlinkAccountOptions_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__VerifyIdTokenOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__LoginStatus_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::ConnectInterface::*)()>(&::Epic::OnlineServices::Connect::ConnectInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::ConnectInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::Connect::ConnectInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface.AddNotifyAuthExpiration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::Connect::ConnectInterface::*)(::by_ref<::Epic::OnlineServices::Connect::AddNotifyAuthExpirationOptions>, ::System::Object*, ::Epic::OnlineServices::Connect::OnAuthExpirationCallback*)>(&::Epic::OnlineServices::Connect::ConnectInterface::AddNotifyAuthExpiration)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x180521f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"AddNotifyAuthExpiration", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::AddNotifyAuthExpirationOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnAuthExpirationCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface.AddNotifyLoginStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::Connect::ConnectInterface::*)(::by_ref<::Epic::OnlineServices::Connect::AddNotifyLoginStatusChangedOptions>, ::System::Object*, ::Epic::OnlineServices::Connect::OnLoginStatusChangedCallback*)>(&::Epic::OnlineServices::Connect::ConnectInterface::AddNotifyLoginStatusChanged)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x180522100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"AddNotifyLoginStatusChanged", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::AddNotifyLoginStatusChangedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnLoginStatusChangedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface.CopyIdToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Connect::ConnectInterface::*)(::by_ref<::Epic::OnlineServices::Connect::CopyIdTokenOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Connect::IdToken>>)>(&::Epic::OnlineServices::Connect::ConnectInterface::CopyIdToken)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805222f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"CopyIdToken", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CopyIdTokenOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Connect::IdToken>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface.CopyProductUserExternalAccountByAccountId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Connect::ConnectInterface::*)(::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>>)>(&::Epic::OnlineServices::Connect::ConnectInterface::CopyProductUserExternalAccountByAccountId)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805223b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"CopyProductUserExternalAccountByAccountId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface.CopyProductUserExternalAccountByAccountType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Connect::ConnectInterface::*)(::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>>)>(&::Epic::OnlineServices::Connect::ConnectInterface::CopyProductUserExternalAccountByAccountType)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180522490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"CopyProductUserExternalAccountByAccountType", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface.CopyProductUserExternalAccountByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Connect::ConnectInterface::*)(::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>>)>(&::Epic::OnlineServices::Connect::ConnectInterface::CopyProductUserExternalAccountByIndex)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180522550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"CopyProductUserExternalAccountByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface.CopyProductUserInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Connect::ConnectInterface::*)(::by_ref<::Epic::OnlineServices::Connect::CopyProductUserInfoOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>>)>(&::Epic::OnlineServices::Connect::ConnectInterface::CopyProductUserInfo)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180522610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"CopyProductUserInfo", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CopyProductUserInfoOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface.CreateDeviceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::ConnectInterface::*)(::by_ref<::Epic::OnlineServices::Connect::CreateDeviceIdOptions>, ::System::Object*, ::Epic::OnlineServices::Connect::OnCreateDeviceIdCallback*)>(&::Epic::OnlineServices::Connect::ConnectInterface::CreateDeviceId)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1805226d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"CreateDeviceId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CreateDeviceIdOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnCreateDeviceIdCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface.CreateUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::ConnectInterface::*)(::by_ref<::Epic::OnlineServices::Connect::CreateUserOptions>, ::System::Object*, ::Epic::OnlineServices::Connect::OnCreateUserCallback*)>(&::Epic::OnlineServices::Connect::ConnectInterface::CreateUser)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1805228d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"CreateUser", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CreateUserOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnCreateUserCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface.DeleteDeviceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::ConnectInterface::*)(::by_ref<::Epic::OnlineServices::Connect::DeleteDeviceIdOptions>, ::System::Object*, ::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallback*)>(&::Epic::OnlineServices::Connect::ConnectInterface::DeleteDeviceId)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180522ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"DeleteDeviceId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::DeleteDeviceIdOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface.GetExternalAccountMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Connect::ConnectInterface::*)(::by_ref<::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptions>)>(&::Epic::OnlineServices::Connect::ConnectInterface::GetExternalAccountMapping)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180522ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"GetExternalAccountMapping", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface.GetLoggedInUserByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Connect::ConnectInterface::*)(int32_t)>(&::Epic::OnlineServices::Connect::ConnectInterface::GetLoggedInUserByIndex)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180522d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"GetLoggedInUserByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface.GetLoggedInUsersCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Epic::OnlineServices::Connect::ConnectInterface::*)()>(&::Epic::OnlineServices::Connect::ConnectInterface::GetLoggedInUsersCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180522da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"GetLoggedInUsersCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface.GetLoginStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::LoginStatus (::Epic::OnlineServices::Connect::ConnectInterface::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::Connect::ConnectInterface::GetLoginStatus)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180522db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"GetLoginStatus", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface.GetProductUserExternalAccountCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Connect::ConnectInterface::*)(::by_ref<::Epic::OnlineServices::Connect::GetProductUserExternalAccountCountOptions>)>(&::Epic::OnlineServices::Connect::ConnectInterface::GetProductUserExternalAccountCount)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180522de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"GetProductUserExternalAccountCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::GetProductUserExternalAccountCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface.GetProductUserIdMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Connect::ConnectInterface::*)(::by_ref<::Epic::OnlineServices::Connect::GetProductUserIdMappingOptions>, ::by_ref<::Epic::OnlineServices::Utf8String*>)>(&::Epic::OnlineServices::Connect::ConnectInterface::GetProductUserIdMapping)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180522e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"GetProductUserIdMapping", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::GetProductUserIdMappingOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface.LinkAccount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::ConnectInterface::*)(::by_ref<::Epic::OnlineServices::Connect::LinkAccountOptions>, ::System::Object*, ::Epic::OnlineServices::Connect::OnLinkAccountCallback*)>(&::Epic::OnlineServices::Connect::ConnectInterface::LinkAccount)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x180522f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"LinkAccount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::LinkAccountOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnLinkAccountCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface.Login
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::ConnectInterface::*)(::by_ref<::Epic::OnlineServices::Connect::LoginOptions>, ::System::Object*, ::Epic::OnlineServices::Connect::OnLoginCallback*)>(&::Epic::OnlineServices::Connect::ConnectInterface::Login)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x180523170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"Login", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::LoginOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnLoginCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface.Logout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::ConnectInterface::*)(::by_ref<::Epic::OnlineServices::Connect::LogoutOptions>, ::System::Object*, ::Epic::OnlineServices::Connect::OnLogoutCallback*)>(&::Epic::OnlineServices::Connect::ConnectInterface::Logout)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1805233e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"Logout", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::LogoutOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnLogoutCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface.QueryExternalAccountMappings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::ConnectInterface::*)(::by_ref<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions>, ::System::Object*, ::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallback*)>(&::Epic::OnlineServices::Connect::ConnectInterface::QueryExternalAccountMappings)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1805235e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"QueryExternalAccountMappings", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface.QueryProductUserIdMappings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::ConnectInterface::*)(::by_ref<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions>, ::System::Object*, ::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallback*)>(&::Epic::OnlineServices::Connect::ConnectInterface::QueryProductUserIdMappings)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x180523830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"QueryProductUserIdMappings", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface.RemoveNotifyAuthExpiration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::ConnectInterface::*)(uint64_t)>(&::Epic::OnlineServices::Connect::ConnectInterface::RemoveNotifyAuthExpiration)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180523a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"RemoveNotifyAuthExpiration", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface.RemoveNotifyLoginStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::ConnectInterface::*)(uint64_t)>(&::Epic::OnlineServices::Connect::ConnectInterface::RemoveNotifyLoginStatusChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180523ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"RemoveNotifyLoginStatusChanged", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface.TransferDeviceIdAccount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::ConnectInterface::*)(::by_ref<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>, ::System::Object*, ::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallback*)>(&::Epic::OnlineServices::Connect::ConnectInterface::TransferDeviceIdAccount)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x180523ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"TransferDeviceIdAccount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface.UnlinkAccount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::ConnectInterface::*)(::by_ref<::Epic::OnlineServices::Connect::UnlinkAccountOptions>, ::System::Object*, ::Epic::OnlineServices::Connect::OnUnlinkAccountCallback*)>(&::Epic::OnlineServices::Connect::ConnectInterface::UnlinkAccount)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180523d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"UnlinkAccount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::UnlinkAccountOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnUnlinkAccountCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::ConnectInterface.VerifyIdToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::ConnectInterface::*)(::by_ref<::Epic::OnlineServices::Connect::VerifyIdTokenOptions>, ::System::Object*, ::Epic::OnlineServices::Connect::OnVerifyIdTokenCallback*)>(&::Epic::OnlineServices::Connect::ConnectInterface::VerifyIdToken)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x180523f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"VerifyIdToken", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::VerifyIdTokenOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnVerifyIdTokenCallback*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Connect::ConnectInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::Connect::ConnectInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline uint64_t Epic::OnlineServices::Connect::ConnectInterface::AddNotifyAuthExpiration(::by_ref<::Epic::OnlineServices::Connect::AddNotifyAuthExpirationOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnAuthExpirationCallback*  notification)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"AddNotifyAuthExpiration", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::AddNotifyAuthExpirationOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnAuthExpirationCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notification);
}
inline uint64_t Epic::OnlineServices::Connect::ConnectInterface::AddNotifyLoginStatusChanged(::by_ref<::Epic::OnlineServices::Connect::AddNotifyLoginStatusChangedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnLoginStatusChangedCallback*  notification)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"AddNotifyLoginStatusChanged", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::AddNotifyLoginStatusChangedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnLoginStatusChangedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notification);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Connect::ConnectInterface::CopyIdToken(::by_ref<::Epic::OnlineServices::Connect::CopyIdTokenOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Connect::IdToken>>  outIdToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"CopyIdToken", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CopyIdTokenOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Connect::IdToken>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outIdToken);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Connect::ConnectInterface::CopyProductUserExternalAccountByAccountId(::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>>  outExternalAccountInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"CopyProductUserExternalAccountByAccountId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outExternalAccountInfo);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Connect::ConnectInterface::CopyProductUserExternalAccountByAccountType(::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>>  outExternalAccountInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"CopyProductUserExternalAccountByAccountType", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountTypeOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outExternalAccountInfo);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Connect::ConnectInterface::CopyProductUserExternalAccountByIndex(::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>>  outExternalAccountInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"CopyProductUserExternalAccountByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outExternalAccountInfo);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Connect::ConnectInterface::CopyProductUserInfo(::by_ref<::Epic::OnlineServices::Connect::CopyProductUserInfoOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>>  outExternalAccountInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"CopyProductUserInfo", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CopyProductUserInfoOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Connect::ExternalAccountInfo>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outExternalAccountInfo);
}
inline void Epic::OnlineServices::Connect::ConnectInterface::CreateDeviceId(::by_ref<::Epic::OnlineServices::Connect::CreateDeviceIdOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnCreateDeviceIdCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"CreateDeviceId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CreateDeviceIdOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnCreateDeviceIdCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Connect::ConnectInterface::CreateUser(::by_ref<::Epic::OnlineServices::Connect::CreateUserOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnCreateUserCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"CreateUser", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CreateUserOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnCreateUserCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Connect::ConnectInterface::DeleteDeviceId(::by_ref<::Epic::OnlineServices::Connect::DeleteDeviceIdOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"DeleteDeviceId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::DeleteDeviceIdOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Connect::ConnectInterface::GetExternalAccountMapping(::by_ref<::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"GetExternalAccountMapping", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::GetExternalAccountMappingsOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Connect::ConnectInterface::GetLoggedInUserByIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"GetLoggedInUserByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(this, ___internal_method, index);
}
inline int32_t Epic::OnlineServices::Connect::ConnectInterface::GetLoggedInUsersCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"GetLoggedInUsersCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Epic::OnlineServices::LoginStatus Epic::OnlineServices::Connect::ConnectInterface::GetLoginStatus(::Epic::OnlineServices::ProductUserId*  localUserId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"GetLoginStatus", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::LoginStatus>(this, ___internal_method, localUserId);
}
inline uint32_t Epic::OnlineServices::Connect::ConnectInterface::GetProductUserExternalAccountCount(::by_ref<::Epic::OnlineServices::Connect::GetProductUserExternalAccountCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"GetProductUserExternalAccountCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::GetProductUserExternalAccountCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Connect::ConnectInterface::GetProductUserIdMapping(::by_ref<::Epic::OnlineServices::Connect::GetProductUserIdMappingOptions>  options, ::by_ref<::Epic::OnlineServices::Utf8String*>  outBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"GetProductUserIdMapping", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::GetProductUserIdMappingOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outBuffer);
}
inline void Epic::OnlineServices::Connect::ConnectInterface::LinkAccount(::by_ref<::Epic::OnlineServices::Connect::LinkAccountOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnLinkAccountCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"LinkAccount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::LinkAccountOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnLinkAccountCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Connect::ConnectInterface::Login(::by_ref<::Epic::OnlineServices::Connect::LoginOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnLoginCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"Login", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::LoginOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnLoginCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Connect::ConnectInterface::Logout(::by_ref<::Epic::OnlineServices::Connect::LogoutOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnLogoutCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"Logout", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::LogoutOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnLogoutCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Connect::ConnectInterface::QueryExternalAccountMappings(::by_ref<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"QueryExternalAccountMappings", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Connect::ConnectInterface::QueryProductUserIdMappings(::by_ref<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"QueryProductUserIdMappings", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Connect::ConnectInterface::RemoveNotifyAuthExpiration(uint64_t  inId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"RemoveNotifyAuthExpiration", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inId);
}
inline void Epic::OnlineServices::Connect::ConnectInterface::RemoveNotifyLoginStatusChanged(uint64_t  inId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"RemoveNotifyLoginStatusChanged", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inId);
}
inline void Epic::OnlineServices::Connect::ConnectInterface::TransferDeviceIdAccount(::by_ref<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"TransferDeviceIdAccount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Connect::ConnectInterface::UnlinkAccount(::by_ref<::Epic::OnlineServices::Connect::UnlinkAccountOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnUnlinkAccountCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"UnlinkAccount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::UnlinkAccountOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnUnlinkAccountCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Connect::ConnectInterface::VerifyIdToken(::by_ref<::Epic::OnlineServices::Connect::VerifyIdTokenOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Connect::OnVerifyIdTokenCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::ConnectInterface*>(),
                        {"VerifyIdToken", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::VerifyIdTokenOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Connect::OnVerifyIdTokenCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::Connect::ConnectInterface* Epic::OnlineServices::Connect::ConnectInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Connect::ConnectInterface*>());
}
inline ::Epic::OnlineServices::Connect::ConnectInterface* Epic::OnlineServices::Connect::ConnectInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Connect::ConnectInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::ConnectInterface::ConnectInterface()   {
}

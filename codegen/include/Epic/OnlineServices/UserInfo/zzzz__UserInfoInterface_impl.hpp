#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/UserInfoInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__UserInfoInterface_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__BestDisplayName_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__CopyBestDisplayNameOptions_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__CopyBestDisplayNameWithPlatformOptions_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__CopyExternalUserInfoByAccountIdOptions_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__CopyExternalUserInfoByAccountTypeOptions_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__CopyExternalUserInfoByIndexOptions_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__CopyUserInfoOptions_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__ExternalUserInfo_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__GetExternalUserInfoCountOptions_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__GetLocalPlatformTypeOptions_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__OnQueryUserInfoByDisplayNameCallback_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__OnQueryUserInfoByExternalAccountCallback_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__OnQueryUserInfoCallback_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__QueryUserInfoByDisplayNameOptions_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__QueryUserInfoByExternalAccountOptions_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__QueryUserInfoOptions_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__UserInfoData_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::UserInfoInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::UserInfoInterface::*)()>(&::Epic::OnlineServices::UserInfo::UserInfoInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::UserInfoInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::UserInfoInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::UserInfo::UserInfoInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::UserInfoInterface.CopyBestDisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::UserInfo::UserInfoInterface::*)(::by_ref<::Epic::OnlineServices::UserInfo::CopyBestDisplayNameOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::BestDisplayName>>)>(&::Epic::OnlineServices::UserInfo::UserInfoInterface::CopyBestDisplayName)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1804e4d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(),
                        {"CopyBestDisplayName", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::CopyBestDisplayNameOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::BestDisplayName>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::UserInfoInterface.CopyBestDisplayNameWithPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::UserInfo::UserInfoInterface::*)(::by_ref<::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::BestDisplayName>>)>(&::Epic::OnlineServices::UserInfo::UserInfoInterface::CopyBestDisplayNameWithPlatform)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1804e4bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(),
                        {"CopyBestDisplayNameWithPlatform", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::BestDisplayName>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::UserInfoInterface.CopyExternalUserInfoByAccountId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::UserInfo::UserInfoInterface::*)(::by_ref<::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountIdOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::ExternalUserInfo>>)>(&::Epic::OnlineServices::UserInfo::UserInfoInterface::CopyExternalUserInfoByAccountId)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1804e4eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(),
                        {"CopyExternalUserInfoByAccountId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountIdOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::ExternalUserInfo>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::UserInfoInterface.CopyExternalUserInfoByAccountType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::UserInfo::UserInfoInterface::*)(::by_ref<::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountTypeOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::ExternalUserInfo>>)>(&::Epic::OnlineServices::UserInfo::UserInfoInterface::CopyExternalUserInfoByAccountType)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1804e4fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(),
                        {"CopyExternalUserInfoByAccountType", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountTypeOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::ExternalUserInfo>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::UserInfoInterface.CopyExternalUserInfoByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::UserInfo::UserInfoInterface::*)(::by_ref<::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::ExternalUserInfo>>)>(&::Epic::OnlineServices::UserInfo::UserInfoInterface::CopyExternalUserInfoByIndex)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1804e5110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(),
                        {"CopyExternalUserInfoByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::ExternalUserInfo>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::UserInfoInterface.CopyUserInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::UserInfo::UserInfoInterface::*)(::by_ref<::Epic::OnlineServices::UserInfo::CopyUserInfoOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::UserInfoData>>)>(&::Epic::OnlineServices::UserInfo::UserInfoInterface::CopyUserInfo)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1804e5270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(),
                        {"CopyUserInfo", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::CopyUserInfoOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::UserInfoData>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::UserInfoInterface.GetExternalUserInfoCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::UserInfo::UserInfoInterface::*)(::by_ref<::Epic::OnlineServices::UserInfo::GetExternalUserInfoCountOptions>)>(&::Epic::OnlineServices::UserInfo::UserInfoInterface::GetExternalUserInfoCount)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804e5420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(),
                        {"GetExternalUserInfoCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::GetExternalUserInfoCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::UserInfoInterface.GetLocalPlatformType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::UserInfo::UserInfoInterface::*)(::by_ref<::Epic::OnlineServices::UserInfo::GetLocalPlatformTypeOptions>)>(&::Epic::OnlineServices::UserInfo::UserInfoInterface::GetLocalPlatformType)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804e5540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(),
                        {"GetLocalPlatformType", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::GetLocalPlatformTypeOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::UserInfoInterface.QueryUserInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::UserInfoInterface::*)(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoOptions>, ::System::Object*, ::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback*)>(&::Epic::OnlineServices::UserInfo::UserInfoInterface::QueryUserInfo)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1804e5aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(),
                        {"QueryUserInfo", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::UserInfoInterface.QueryUserInfoByDisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::UserInfoInterface::*)(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameOptions>, ::System::Object*, ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback*)>(&::Epic::OnlineServices::UserInfo::UserInfoInterface::QueryUserInfoByDisplayName)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1804e55e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(),
                        {"QueryUserInfoByDisplayName", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::UserInfoInterface.QueryUserInfoByExternalAccount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::UserInfoInterface::*)(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountOptions>, ::System::Object*, ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback*)>(&::Epic::OnlineServices::UserInfo::UserInfoInterface::QueryUserInfoByExternalAccount)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1804e5840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(),
                        {"QueryUserInfoByExternalAccount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UserInfo::UserInfoInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::UserInfo::UserInfoInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::UserInfo::UserInfoInterface::CopyBestDisplayName(::by_ref<::Epic::OnlineServices::UserInfo::CopyBestDisplayNameOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::BestDisplayName>>  outBestDisplayName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(),
                        {"CopyBestDisplayName", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::CopyBestDisplayNameOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::BestDisplayName>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outBestDisplayName);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::UserInfo::UserInfoInterface::CopyBestDisplayNameWithPlatform(::by_ref<::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::BestDisplayName>>  outBestDisplayName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(),
                        {"CopyBestDisplayNameWithPlatform", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::CopyBestDisplayNameWithPlatformOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::BestDisplayName>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outBestDisplayName);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::UserInfo::UserInfoInterface::CopyExternalUserInfoByAccountId(::by_ref<::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountIdOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::ExternalUserInfo>>  outExternalUserInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(),
                        {"CopyExternalUserInfoByAccountId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountIdOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::ExternalUserInfo>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outExternalUserInfo);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::UserInfo::UserInfoInterface::CopyExternalUserInfoByAccountType(::by_ref<::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountTypeOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::ExternalUserInfo>>  outExternalUserInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(),
                        {"CopyExternalUserInfoByAccountType", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountTypeOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::ExternalUserInfo>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outExternalUserInfo);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::UserInfo::UserInfoInterface::CopyExternalUserInfoByIndex(::by_ref<::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::ExternalUserInfo>>  outExternalUserInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(),
                        {"CopyExternalUserInfoByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::ExternalUserInfo>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outExternalUserInfo);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::UserInfo::UserInfoInterface::CopyUserInfo(::by_ref<::Epic::OnlineServices::UserInfo::CopyUserInfoOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::UserInfoData>>  outUserInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(),
                        {"CopyUserInfo", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::CopyUserInfoOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::UserInfo::UserInfoData>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outUserInfo);
}
inline uint32_t Epic::OnlineServices::UserInfo::UserInfoInterface::GetExternalUserInfoCount(::by_ref<::Epic::OnlineServices::UserInfo::GetExternalUserInfoCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(),
                        {"GetExternalUserInfoCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::GetExternalUserInfoCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline uint32_t Epic::OnlineServices::UserInfo::UserInfoInterface::GetLocalPlatformType(::by_ref<::Epic::OnlineServices::UserInfo::GetLocalPlatformTypeOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(),
                        {"GetLocalPlatformType", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::GetLocalPlatformTypeOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::UserInfo::UserInfoInterface::QueryUserInfo(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(),
                        {"QueryUserInfo", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::UserInfo::UserInfoInterface::QueryUserInfoByDisplayName(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(),
                        {"QueryUserInfoByDisplayName", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::UserInfo::UserInfoInterface::QueryUserInfoByExternalAccount(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(),
                        {"QueryUserInfoByExternalAccount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::UserInfo::UserInfoInterface* Epic::OnlineServices::UserInfo::UserInfoInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::UserInfo::UserInfoInterface*>());
}
inline ::Epic::OnlineServices::UserInfo::UserInfoInterface* Epic::OnlineServices::UserInfo::UserInfoInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::UserInfo::UserInfoInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UserInfo::UserInfoInterface::UserInfoInterface()   {
}

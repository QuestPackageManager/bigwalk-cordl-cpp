#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/UserLoginStatusChangedCallbackInfo.hpp"
#include "Epic/OnlineServices/zzzz__LoginStatus_impl.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__UserLoginStatusChangedCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__EpicAccountId_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__LoginStatus_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo.get_ClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::*)()>(&::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::get_ClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"get_ClientData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo.set_ClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::*)(::System::Object*)>(&::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::set_ClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"set_ClientData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo.get_PlatformType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::*)()>(&::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::get_PlatformType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"get_PlatformType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo.set_PlatformType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::set_PlatformType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"set_PlatformType", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo.get_LocalPlatformUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::*)()>(&::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::get_LocalPlatformUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"get_LocalPlatformUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo.set_LocalPlatformUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::set_LocalPlatformUserId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"set_LocalPlatformUserId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo.get_AccountId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::EpicAccountId* (::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::*)()>(&::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::get_AccountId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"get_AccountId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo.set_AccountId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::*)(::Epic::OnlineServices::EpicAccountId*)>(&::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::set_AccountId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"set_AccountId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo.get_ProductUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::*)()>(&::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::get_ProductUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"get_ProductUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo.set_ProductUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::set_ProductUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"set_ProductUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo.get_PreviousLoginStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::LoginStatus (::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::*)()>(&::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::get_PreviousLoginStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"get_PreviousLoginStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo.set_PreviousLoginStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::*)(::Epic::OnlineServices::LoginStatus)>(&::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::set_PreviousLoginStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"set_PreviousLoginStatus", {}, {::i2c::type_of<::Epic::OnlineServices::LoginStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo.get_CurrentLoginStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::LoginStatus (::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::*)()>(&::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::get_CurrentLoginStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"get_CurrentLoginStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo.set_CurrentLoginStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::*)(::Epic::OnlineServices::LoginStatus)>(&::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::set_CurrentLoginStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"set_CurrentLoginStatus", {}, {::i2c::type_of<::Epic::OnlineServices::LoginStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo.GetClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::*)()>(&::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::GetClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"GetClientData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo.GetResultCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Result> (::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::*)()>(&::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::GetResultCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"GetResultCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Object* Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::get_ClientData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"get_ClientData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::set_ClientData(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"set_ClientData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::get_PlatformType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"get_PlatformType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::set_PlatformType(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"set_PlatformType", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::get_LocalPlatformUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"get_LocalPlatformUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::set_LocalPlatformUserId(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"set_LocalPlatformUserId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::EpicAccountId* Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::get_AccountId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"get_AccountId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::EpicAccountId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::set_AccountId(::Epic::OnlineServices::EpicAccountId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"set_AccountId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::get_ProductUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"get_ProductUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::set_ProductUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"set_ProductUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::LoginStatus Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::get_PreviousLoginStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"get_PreviousLoginStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::LoginStatus>(*this, ___internal_method);
}
inline void Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::set_PreviousLoginStatus(::Epic::OnlineServices::LoginStatus  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"set_PreviousLoginStatus", {}, {::i2c::type_of<::Epic::OnlineServices::LoginStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::LoginStatus Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::get_CurrentLoginStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"get_CurrentLoginStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::LoginStatus>(*this, ___internal_method);
}
inline void Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::set_CurrentLoginStatus(::Epic::OnlineServices::LoginStatus  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"set_CurrentLoginStatus", {}, {::i2c::type_of<::Epic::OnlineServices::LoginStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Object* Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::GetClientData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"GetClientData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline ::System::Nullable_1<::Epic::OnlineServices::Result> Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::GetResultCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>(),
                        {"GetResultCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Result>>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr  Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::operator ::Epic::OnlineServices::ICallbackInfo*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::i___Epic__OnlineServices__ICallbackInfo()  {
return static_cast<::Epic::OnlineServices::ICallbackInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PlatformType_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_LocalPlatformUserId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_AccountId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ProductUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PreviousLoginStatus_k__BackingField", ty: "::Epic::OnlineServices::LoginStatus", modifiers: "", def_value: Some("{}") }, CppParam { name: "_CurrentLoginStatus_k__BackingField", ty: "::Epic::OnlineServices::LoginStatus", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::UserLoginStatusChangedCallbackInfo(::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::Utf8String*  _PlatformType_k__BackingField, ::Epic::OnlineServices::Utf8String*  _LocalPlatformUserId_k__BackingField, ::Epic::OnlineServices::EpicAccountId*  _AccountId_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _ProductUserId_k__BackingField, ::Epic::OnlineServices::LoginStatus  _PreviousLoginStatus_k__BackingField, ::Epic::OnlineServices::LoginStatus  _CurrentLoginStatus_k__BackingField) noexcept  {
this->_ClientData_k__BackingField = _ClientData_k__BackingField;
this->_PlatformType_k__BackingField = _PlatformType_k__BackingField;
this->_LocalPlatformUserId_k__BackingField = _LocalPlatformUserId_k__BackingField;
this->_AccountId_k__BackingField = _AccountId_k__BackingField;
this->_ProductUserId_k__BackingField = _ProductUserId_k__BackingField;
this->_PreviousLoginStatus_k__BackingField = _PreviousLoginStatus_k__BackingField;
this->_CurrentLoginStatus_k__BackingField = _CurrentLoginStatus_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo::UserLoginStatusChangedCallbackInfo()   {
}

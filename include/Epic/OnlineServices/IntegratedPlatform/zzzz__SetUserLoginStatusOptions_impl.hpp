#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/SetUserLoginStatusOptions.hpp"
#include "Epic/OnlineServices/zzzz__LoginStatus_impl.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__SetUserLoginStatusOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__LoginStatus_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions.get_PlatformType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions::*)()>(&::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions::get_PlatformType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions>(),
                        {"get_PlatformType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions.set_PlatformType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions::set_PlatformType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions>(),
                        {"set_PlatformType", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions.get_LocalPlatformUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions::*)()>(&::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions::get_LocalPlatformUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions>(),
                        {"get_LocalPlatformUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions.set_LocalPlatformUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions::set_LocalPlatformUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions>(),
                        {"set_LocalPlatformUserId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions.get_CurrentLoginStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::LoginStatus (::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions::*)()>(&::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions::get_CurrentLoginStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions>(),
                        {"get_CurrentLoginStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions.set_CurrentLoginStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions::*)(::Epic::OnlineServices::LoginStatus)>(&::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions::set_CurrentLoginStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions>(),
                        {"set_CurrentLoginStatus", {}, {::i2c::type_of<::Epic::OnlineServices::LoginStatus>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions::get_PlatformType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions>(),
                        {"get_PlatformType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions::set_PlatformType(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions>(),
                        {"set_PlatformType", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions::get_LocalPlatformUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions>(),
                        {"get_LocalPlatformUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions::set_LocalPlatformUserId(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions>(),
                        {"set_LocalPlatformUserId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::LoginStatus Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions::get_CurrentLoginStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions>(),
                        {"get_CurrentLoginStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::LoginStatus>(*this, ___internal_method);
}
inline void Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions::set_CurrentLoginStatus(::Epic::OnlineServices::LoginStatus  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions>(),
                        {"set_CurrentLoginStatus", {}, {::i2c::type_of<::Epic::OnlineServices::LoginStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_PlatformType_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_LocalPlatformUserId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_CurrentLoginStatus_k__BackingField", ty: "::Epic::OnlineServices::LoginStatus", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions::SetUserLoginStatusOptions(::Epic::OnlineServices::Utf8String*  _PlatformType_k__BackingField, ::Epic::OnlineServices::Utf8String*  _LocalPlatformUserId_k__BackingField, ::Epic::OnlineServices::LoginStatus  _CurrentLoginStatus_k__BackingField) noexcept  {
this->_PlatformType_k__BackingField = _PlatformType_k__BackingField;
this->_LocalPlatformUserId_k__BackingField = _LocalPlatformUserId_k__BackingField;
this->_CurrentLoginStatus_k__BackingField = _CurrentLoginStatus_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions::SetUserLoginStatusOptions()   {
}

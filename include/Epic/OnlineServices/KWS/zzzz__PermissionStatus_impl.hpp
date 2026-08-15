#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/PermissionStatus.hpp"
#include "Epic/OnlineServices/KWS/zzzz__KWSPermissionStatus_impl.hpp"
#include "Epic/OnlineServices/KWS/zzzz__PermissionStatus_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__KWSPermissionStatus_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::KWS::PermissionStatus.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::KWS::PermissionStatus::*)()>(&::Epic::OnlineServices::KWS::PermissionStatus::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::PermissionStatus>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::PermissionStatus.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::KWS::PermissionStatus::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::KWS::PermissionStatus::set_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::PermissionStatus>(),
                        {"set_Name", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::PermissionStatus.get_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::KWS::KWSPermissionStatus (::Epic::OnlineServices::KWS::PermissionStatus::*)()>(&::Epic::OnlineServices::KWS::PermissionStatus::get_Status)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::PermissionStatus>(),
                        {"get_Status", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::PermissionStatus.set_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::KWS::PermissionStatus::*)(::Epic::OnlineServices::KWS::KWSPermissionStatus)>(&::Epic::OnlineServices::KWS::PermissionStatus::set_Status)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::PermissionStatus>(),
                        {"set_Status", {}, {::i2c::type_of<::Epic::OnlineServices::KWS::KWSPermissionStatus>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::KWS::PermissionStatus::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::PermissionStatus>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::KWS::PermissionStatus::set_Name(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::PermissionStatus>(),
                        {"set_Name", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::KWS::KWSPermissionStatus Epic::OnlineServices::KWS::PermissionStatus::get_Status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::PermissionStatus>(),
                        {"get_Status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::KWS::KWSPermissionStatus>(*this, ___internal_method);
}
inline void Epic::OnlineServices::KWS::PermissionStatus::set_Status(::Epic::OnlineServices::KWS::KWSPermissionStatus  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::PermissionStatus>(),
                        {"set_Status", {}, {::i2c::type_of<::Epic::OnlineServices::KWS::KWSPermissionStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Name_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Status_k__BackingField", ty: "::Epic::OnlineServices::KWS::KWSPermissionStatus", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::KWS::PermissionStatus::PermissionStatus(::Epic::OnlineServices::Utf8String*  _Name_k__BackingField, ::Epic::OnlineServices::KWS::KWSPermissionStatus  _Status_k__BackingField) noexcept  {
this->_Name_k__BackingField = _Name_k__BackingField;
this->_Status_k__BackingField = _Status_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::KWS::PermissionStatus::PermissionStatus()   {
}

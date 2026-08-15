#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/ExternalUserInfo.hpp"
#include "Epic/OnlineServices/zzzz__ExternalAccountType_impl.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__ExternalUserInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ExternalAccountType_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::ExternalUserInfo.get_AccountType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ExternalAccountType (::Epic::OnlineServices::UserInfo::ExternalUserInfo::*)()>(&::Epic::OnlineServices::UserInfo::ExternalUserInfo::get_AccountType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::ExternalUserInfo>(),
                        {"get_AccountType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::ExternalUserInfo.set_AccountType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::ExternalUserInfo::*)(::Epic::OnlineServices::ExternalAccountType)>(&::Epic::OnlineServices::UserInfo::ExternalUserInfo::set_AccountType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::ExternalUserInfo>(),
                        {"set_AccountType", {}, {::i2c::type_of<::Epic::OnlineServices::ExternalAccountType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::ExternalUserInfo.get_AccountId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::UserInfo::ExternalUserInfo::*)()>(&::Epic::OnlineServices::UserInfo::ExternalUserInfo::get_AccountId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::ExternalUserInfo>(),
                        {"get_AccountId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::ExternalUserInfo.set_AccountId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::ExternalUserInfo::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::UserInfo::ExternalUserInfo::set_AccountId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::ExternalUserInfo>(),
                        {"set_AccountId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::ExternalUserInfo.get_DisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::UserInfo::ExternalUserInfo::*)()>(&::Epic::OnlineServices::UserInfo::ExternalUserInfo::get_DisplayName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::ExternalUserInfo>(),
                        {"get_DisplayName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::ExternalUserInfo.set_DisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::ExternalUserInfo::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::UserInfo::ExternalUserInfo::set_DisplayName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::ExternalUserInfo>(),
                        {"set_DisplayName", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::ExternalUserInfo.get_DisplayNameSanitized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::UserInfo::ExternalUserInfo::*)()>(&::Epic::OnlineServices::UserInfo::ExternalUserInfo::get_DisplayNameSanitized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::ExternalUserInfo>(),
                        {"get_DisplayNameSanitized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::ExternalUserInfo.set_DisplayNameSanitized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::ExternalUserInfo::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::UserInfo::ExternalUserInfo::set_DisplayNameSanitized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::ExternalUserInfo>(),
                        {"set_DisplayNameSanitized", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::ExternalAccountType Epic::OnlineServices::UserInfo::ExternalUserInfo::get_AccountType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::ExternalUserInfo>(),
                        {"get_AccountType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ExternalAccountType>(*this, ___internal_method);
}
inline void Epic::OnlineServices::UserInfo::ExternalUserInfo::set_AccountType(::Epic::OnlineServices::ExternalAccountType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::ExternalUserInfo>(),
                        {"set_AccountType", {}, {::i2c::type_of<::Epic::OnlineServices::ExternalAccountType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::UserInfo::ExternalUserInfo::get_AccountId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::ExternalUserInfo>(),
                        {"get_AccountId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::UserInfo::ExternalUserInfo::set_AccountId(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::ExternalUserInfo>(),
                        {"set_AccountId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::UserInfo::ExternalUserInfo::get_DisplayName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::ExternalUserInfo>(),
                        {"get_DisplayName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::UserInfo::ExternalUserInfo::set_DisplayName(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::ExternalUserInfo>(),
                        {"set_DisplayName", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::UserInfo::ExternalUserInfo::get_DisplayNameSanitized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::ExternalUserInfo>(),
                        {"get_DisplayNameSanitized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::UserInfo::ExternalUserInfo::set_DisplayNameSanitized(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::ExternalUserInfo>(),
                        {"set_DisplayNameSanitized", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_AccountType_k__BackingField", ty: "::Epic::OnlineServices::ExternalAccountType", modifiers: "", def_value: Some("{}") }, CppParam { name: "_AccountId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_DisplayName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_DisplayNameSanitized_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UserInfo::ExternalUserInfo::ExternalUserInfo(::Epic::OnlineServices::ExternalAccountType  _AccountType_k__BackingField, ::Epic::OnlineServices::Utf8String*  _AccountId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DisplayName_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DisplayNameSanitized_k__BackingField) noexcept  {
this->_AccountType_k__BackingField = _AccountType_k__BackingField;
this->_AccountId_k__BackingField = _AccountId_k__BackingField;
this->_DisplayName_k__BackingField = _DisplayName_k__BackingField;
this->_DisplayNameSanitized_k__BackingField = _DisplayNameSanitized_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UserInfo::ExternalUserInfo::ExternalUserInfo()   {
}

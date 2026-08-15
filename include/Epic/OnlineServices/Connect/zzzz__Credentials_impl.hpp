#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/Credentials.hpp"
#include "Epic/OnlineServices/zzzz__ExternalCredentialType_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__Credentials_def.hpp"
#include "Epic/OnlineServices/zzzz__ExternalCredentialType_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::Credentials.get_Token
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Connect::Credentials::*)()>(&::Epic::OnlineServices::Connect::Credentials::get_Token)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::Credentials>(),
                        {"get_Token", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::Credentials.set_Token
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::Credentials::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Connect::Credentials::set_Token)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::Credentials>(),
                        {"set_Token", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::Credentials.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ExternalCredentialType (::Epic::OnlineServices::Connect::Credentials::*)()>(&::Epic::OnlineServices::Connect::Credentials::get_Type)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::Credentials>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::Credentials.set_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::Credentials::*)(::Epic::OnlineServices::ExternalCredentialType)>(&::Epic::OnlineServices::Connect::Credentials::set_Type)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::Credentials>(),
                        {"set_Type", {}, {::i2c::type_of<::Epic::OnlineServices::ExternalCredentialType>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Connect::Credentials::get_Token()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::Credentials>(),
                        {"get_Token", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Connect::Credentials::set_Token(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::Credentials>(),
                        {"set_Token", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ExternalCredentialType Epic::OnlineServices::Connect::Credentials::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::Credentials>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ExternalCredentialType>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Connect::Credentials::set_Type(::Epic::OnlineServices::ExternalCredentialType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::Credentials>(),
                        {"set_Type", {}, {::i2c::type_of<::Epic::OnlineServices::ExternalCredentialType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Token_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Type_k__BackingField", ty: "::Epic::OnlineServices::ExternalCredentialType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Connect::Credentials::Credentials(::Epic::OnlineServices::Utf8String*  _Token_k__BackingField, ::Epic::OnlineServices::ExternalCredentialType  _Type_k__BackingField) noexcept  {
this->_Token_k__BackingField = _Token_k__BackingField;
this->_Type_k__BackingField = _Type_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::Credentials::Credentials()   {
}

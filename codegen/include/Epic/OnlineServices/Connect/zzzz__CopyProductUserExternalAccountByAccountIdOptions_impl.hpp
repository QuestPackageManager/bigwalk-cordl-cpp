#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/CopyProductUserExternalAccountByAccountIdOptions.hpp"
#include "Epic/OnlineServices/Connect/zzzz__CopyProductUserExternalAccountByAccountIdOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions.get_TargetUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions::*)()>(&::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions::get_TargetUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>(),
                        {"get_TargetUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions.set_TargetUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions::set_TargetUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>(),
                        {"set_TargetUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions.get_AccountId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions::*)()>(&::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions::get_AccountId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>(),
                        {"get_AccountId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions.set_AccountId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions::set_AccountId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>(),
                        {"set_AccountId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions::get_TargetUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>(),
                        {"get_TargetUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions::set_TargetUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>(),
                        {"set_TargetUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions::get_AccountId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>(),
                        {"get_AccountId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions::set_AccountId(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions>(),
                        {"set_AccountId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_TargetUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_AccountId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions::CopyProductUserExternalAccountByAccountIdOptions(::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _AccountId_k__BackingField) noexcept  {
this->_TargetUserId_k__BackingField = _TargetUserId_k__BackingField;
this->_AccountId_k__BackingField = _AccountId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::CopyProductUserExternalAccountByAccountIdOptions::CopyProductUserExternalAccountByAccountIdOptions()   {
}

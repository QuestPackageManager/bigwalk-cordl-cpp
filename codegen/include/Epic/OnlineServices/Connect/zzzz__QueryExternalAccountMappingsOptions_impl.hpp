#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/QueryExternalAccountMappingsOptions.hpp"
#include "Epic/OnlineServices/zzzz__ExternalAccountType_impl.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__QueryExternalAccountMappingsOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ExternalAccountType_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions::*)()>(&::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions::set_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions.get_AccountIdType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ExternalAccountType (::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions::*)()>(&::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions::get_AccountIdType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions>(),
                        {"get_AccountIdType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions.set_AccountIdType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions::*)(::Epic::OnlineServices::ExternalAccountType)>(&::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions::set_AccountIdType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions>(),
                        {"set_AccountIdType", {}, {::i2c::type_of<::Epic::OnlineServices::ExternalAccountType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions.get_ExternalAccountIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Epic::OnlineServices::Utf8String*> (::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions::*)()>(&::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions::get_ExternalAccountIds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions>(),
                        {"get_ExternalAccountIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions.set_ExternalAccountIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions::*)(::ArrayW<::Epic::OnlineServices::Utf8String*>)>(&::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions::set_ExternalAccountIds)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions>(),
                        {"set_ExternalAccountIds", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions::set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ExternalAccountType Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions::get_AccountIdType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions>(),
                        {"get_AccountIdType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ExternalAccountType>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions::set_AccountIdType(::Epic::OnlineServices::ExternalAccountType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions>(),
                        {"set_AccountIdType", {}, {::i2c::type_of<::Epic::OnlineServices::ExternalAccountType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::ArrayW<::Epic::OnlineServices::Utf8String*> Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions::get_ExternalAccountIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions>(),
                        {"get_ExternalAccountIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Epic::OnlineServices::Utf8String*>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions::set_ExternalAccountIds(::ArrayW<::Epic::OnlineServices::Utf8String*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions>(),
                        {"set_ExternalAccountIds", {}, {::i2c::type_of<::ArrayW<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_AccountIdType_k__BackingField", ty: "::Epic::OnlineServices::ExternalAccountType", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ExternalAccountIds_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::Utf8String*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions::QueryExternalAccountMappingsOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::ExternalAccountType  _AccountIdType_k__BackingField, ::ArrayW<::Epic::OnlineServices::Utf8String*>  _ExternalAccountIds_k__BackingField) noexcept  {
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
this->_AccountIdType_k__BackingField = _AccountIdType_k__BackingField;
this->_ExternalAccountIds_k__BackingField = _ExternalAccountIds_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::QueryExternalAccountMappingsOptions::QueryExternalAccountMappingsOptions()   {
}

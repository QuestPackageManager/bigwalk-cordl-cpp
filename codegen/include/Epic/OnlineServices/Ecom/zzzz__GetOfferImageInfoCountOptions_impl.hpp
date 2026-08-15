#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/GetOfferImageInfoCountOptions.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__GetOfferImageInfoCountOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__EpicAccountId_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::EpicAccountId* (::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions::*)()>(&::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions::*)(::Epic::OnlineServices::EpicAccountId*)>(&::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions::set_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions.get_OfferId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions::*)()>(&::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions::get_OfferId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions>(),
                        {"get_OfferId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions.set_OfferId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions::set_OfferId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions>(),
                        {"set_OfferId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::EpicAccountId* Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::EpicAccountId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions::set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::EpicAccountId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions::get_OfferId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions>(),
                        {"get_OfferId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions::set_OfferId(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions>(),
                        {"set_OfferId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OfferId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions::GetOfferImageInfoCountOptions(::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _OfferId_k__BackingField) noexcept  {
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
this->_OfferId_k__BackingField = _OfferId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions::GetOfferImageInfoCountOptions()   {
}

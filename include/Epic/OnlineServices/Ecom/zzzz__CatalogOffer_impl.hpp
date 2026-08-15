#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CatalogOffer.hpp"
#include "Epic/OnlineServices/zzzz__Result_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CatalogOffer_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.get_ServerIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Epic::OnlineServices::Ecom::CatalogOffer::*)()>(&::Epic::OnlineServices::Ecom::CatalogOffer::get_ServerIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_ServerIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.set_ServerIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CatalogOffer::*)(int32_t)>(&::Epic::OnlineServices::Ecom::CatalogOffer::set_ServerIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_ServerIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.get_CatalogNamespace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Ecom::CatalogOffer::*)()>(&::Epic::OnlineServices::Ecom::CatalogOffer::get_CatalogNamespace)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_CatalogNamespace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.set_CatalogNamespace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CatalogOffer::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Ecom::CatalogOffer::set_CatalogNamespace)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_CatalogNamespace", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.get_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Ecom::CatalogOffer::*)()>(&::Epic::OnlineServices::Ecom::CatalogOffer::get_Id)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_Id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.set_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CatalogOffer::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Ecom::CatalogOffer::set_Id)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_Id", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.get_TitleText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Ecom::CatalogOffer::*)()>(&::Epic::OnlineServices::Ecom::CatalogOffer::get_TitleText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_TitleText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.set_TitleText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CatalogOffer::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Ecom::CatalogOffer::set_TitleText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_TitleText", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.get_DescriptionText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Ecom::CatalogOffer::*)()>(&::Epic::OnlineServices::Ecom::CatalogOffer::get_DescriptionText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_DescriptionText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.set_DescriptionText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CatalogOffer::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Ecom::CatalogOffer::set_DescriptionText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_DescriptionText", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.get_LongDescriptionText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Ecom::CatalogOffer::*)()>(&::Epic::OnlineServices::Ecom::CatalogOffer::get_LongDescriptionText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_LongDescriptionText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.set_LongDescriptionText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CatalogOffer::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Ecom::CatalogOffer::set_LongDescriptionText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_LongDescriptionText", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.get_TechnicalDetailsText_DEPRECATED
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Ecom::CatalogOffer::*)()>(&::Epic::OnlineServices::Ecom::CatalogOffer::get_TechnicalDetailsText_DEPRECATED)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_TechnicalDetailsText_DEPRECATED", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.set_TechnicalDetailsText_DEPRECATED
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CatalogOffer::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Ecom::CatalogOffer::set_TechnicalDetailsText_DEPRECATED)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_TechnicalDetailsText_DEPRECATED", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.get_CurrencyCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Ecom::CatalogOffer::*)()>(&::Epic::OnlineServices::Ecom::CatalogOffer::get_CurrencyCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_CurrencyCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.set_CurrencyCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CatalogOffer::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Ecom::CatalogOffer::set_CurrencyCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_CurrencyCode", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.get_PriceResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Ecom::CatalogOffer::*)()>(&::Epic::OnlineServices::Ecom::CatalogOffer::get_PriceResult)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803eb0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_PriceResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.set_PriceResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CatalogOffer::*)(::Epic::OnlineServices::Result)>(&::Epic::OnlineServices::Ecom::CatalogOffer::set_PriceResult)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180511530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_PriceResult", {}, {::i2c::type_of<::Epic::OnlineServices::Result>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.get_OriginalPrice_DEPRECATED
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Ecom::CatalogOffer::*)()>(&::Epic::OnlineServices::Ecom::CatalogOffer::get_OriginalPrice_DEPRECATED)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180511540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_OriginalPrice_DEPRECATED", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.set_OriginalPrice_DEPRECATED
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CatalogOffer::*)(uint32_t)>(&::Epic::OnlineServices::Ecom::CatalogOffer::set_OriginalPrice_DEPRECATED)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180511580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_OriginalPrice_DEPRECATED", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.get_CurrentPrice_DEPRECATED
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Ecom::CatalogOffer::*)()>(&::Epic::OnlineServices::Ecom::CatalogOffer::get_CurrentPrice_DEPRECATED)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d4dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_CurrentPrice_DEPRECATED", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.set_CurrentPrice_DEPRECATED
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CatalogOffer::*)(uint32_t)>(&::Epic::OnlineServices::Ecom::CatalogOffer::set_CurrentPrice_DEPRECATED)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d4ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_CurrentPrice_DEPRECATED", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.get_DiscountPercentage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Epic::OnlineServices::Ecom::CatalogOffer::*)()>(&::Epic::OnlineServices::Ecom::CatalogOffer::get_DiscountPercentage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804a5a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_DiscountPercentage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.set_DiscountPercentage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CatalogOffer::*)(uint8_t)>(&::Epic::OnlineServices::Ecom::CatalogOffer::set_DiscountPercentage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804a5a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_DiscountPercentage", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.get_ExpirationTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Epic::OnlineServices::Ecom::CatalogOffer::*)()>(&::Epic::OnlineServices::Ecom::CatalogOffer::get_ExpirationTimestamp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_ExpirationTimestamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.set_ExpirationTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CatalogOffer::*)(int64_t)>(&::Epic::OnlineServices::Ecom::CatalogOffer::set_ExpirationTimestamp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180316040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_ExpirationTimestamp", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.get_PurchasedCount_DEPRECATED
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Ecom::CatalogOffer::*)()>(&::Epic::OnlineServices::Ecom::CatalogOffer::get_PurchasedCount_DEPRECATED)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_PurchasedCount_DEPRECATED", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.set_PurchasedCount_DEPRECATED
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CatalogOffer::*)(uint32_t)>(&::Epic::OnlineServices::Ecom::CatalogOffer::set_PurchasedCount_DEPRECATED)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_PurchasedCount_DEPRECATED", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.get_PurchaseLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Epic::OnlineServices::Ecom::CatalogOffer::*)()>(&::Epic::OnlineServices::Ecom::CatalogOffer::get_PurchaseLimit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_PurchaseLimit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.set_PurchaseLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CatalogOffer::*)(int32_t)>(&::Epic::OnlineServices::Ecom::CatalogOffer::set_PurchaseLimit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_PurchaseLimit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.get_AvailableForPurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::Ecom::CatalogOffer::*)()>(&::Epic::OnlineServices::Ecom::CatalogOffer::get_AvailableForPurchase)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_AvailableForPurchase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.set_AvailableForPurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CatalogOffer::*)(bool)>(&::Epic::OnlineServices::Ecom::CatalogOffer::set_AvailableForPurchase)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ac420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_AvailableForPurchase", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.get_OriginalPrice64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::Ecom::CatalogOffer::*)()>(&::Epic::OnlineServices::Ecom::CatalogOffer::get_OriginalPrice64)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_OriginalPrice64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.set_OriginalPrice64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CatalogOffer::*)(uint64_t)>(&::Epic::OnlineServices::Ecom::CatalogOffer::set_OriginalPrice64)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180511570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_OriginalPrice64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.get_CurrentPrice64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::Ecom::CatalogOffer::*)()>(&::Epic::OnlineServices::Ecom::CatalogOffer::get_CurrentPrice64)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039fe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_CurrentPrice64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.set_CurrentPrice64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CatalogOffer::*)(uint64_t)>(&::Epic::OnlineServices::Ecom::CatalogOffer::set_CurrentPrice64)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180511550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_CurrentPrice64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.get_DecimalPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Ecom::CatalogOffer::*)()>(&::Epic::OnlineServices::Ecom::CatalogOffer::get_DecimalPoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803becf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_DecimalPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.set_DecimalPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CatalogOffer::*)(uint32_t)>(&::Epic::OnlineServices::Ecom::CatalogOffer::set_DecimalPoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180511560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_DecimalPoint", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.get_ReleaseDateTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Epic::OnlineServices::Ecom::CatalogOffer::*)()>(&::Epic::OnlineServices::Ecom::CatalogOffer::get_ReleaseDateTimestamp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_ReleaseDateTimestamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.set_ReleaseDateTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CatalogOffer::*)(int64_t)>(&::Epic::OnlineServices::Ecom::CatalogOffer::set_ReleaseDateTimestamp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180511590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_ReleaseDateTimestamp", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.get_EffectiveDateTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Epic::OnlineServices::Ecom::CatalogOffer::*)()>(&::Epic::OnlineServices::Ecom::CatalogOffer::get_EffectiveDateTimestamp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_EffectiveDateTimestamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOffer.set_EffectiveDateTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CatalogOffer::*)(int64_t)>(&::Epic::OnlineServices::Ecom::CatalogOffer::set_EffectiveDateTimestamp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_EffectiveDateTimestamp", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Epic::OnlineServices::Ecom::CatalogOffer::get_ServerIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_ServerIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CatalogOffer::set_ServerIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_ServerIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Ecom::CatalogOffer::get_CatalogNamespace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_CatalogNamespace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CatalogOffer::set_CatalogNamespace(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_CatalogNamespace", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Ecom::CatalogOffer::get_Id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_Id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CatalogOffer::set_Id(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_Id", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Ecom::CatalogOffer::get_TitleText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_TitleText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CatalogOffer::set_TitleText(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_TitleText", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Ecom::CatalogOffer::get_DescriptionText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_DescriptionText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CatalogOffer::set_DescriptionText(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_DescriptionText", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Ecom::CatalogOffer::get_LongDescriptionText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_LongDescriptionText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CatalogOffer::set_LongDescriptionText(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_LongDescriptionText", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Ecom::CatalogOffer::get_TechnicalDetailsText_DEPRECATED()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_TechnicalDetailsText_DEPRECATED", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CatalogOffer::set_TechnicalDetailsText_DEPRECATED(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_TechnicalDetailsText_DEPRECATED", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Ecom::CatalogOffer::get_CurrencyCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_CurrencyCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CatalogOffer::set_CurrencyCode(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_CurrencyCode", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Ecom::CatalogOffer::get_PriceResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_PriceResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CatalogOffer::set_PriceResult(::Epic::OnlineServices::Result  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_PriceResult", {}, {::i2c::type_of<::Epic::OnlineServices::Result>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t Epic::OnlineServices::Ecom::CatalogOffer::get_OriginalPrice_DEPRECATED()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_OriginalPrice_DEPRECATED", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CatalogOffer::set_OriginalPrice_DEPRECATED(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_OriginalPrice_DEPRECATED", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t Epic::OnlineServices::Ecom::CatalogOffer::get_CurrentPrice_DEPRECATED()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_CurrentPrice_DEPRECATED", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CatalogOffer::set_CurrentPrice_DEPRECATED(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_CurrentPrice_DEPRECATED", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint8_t Epic::OnlineServices::Ecom::CatalogOffer::get_DiscountPercentage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_DiscountPercentage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CatalogOffer::set_DiscountPercentage(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_DiscountPercentage", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int64_t Epic::OnlineServices::Ecom::CatalogOffer::get_ExpirationTimestamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_ExpirationTimestamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CatalogOffer::set_ExpirationTimestamp(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_ExpirationTimestamp", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t Epic::OnlineServices::Ecom::CatalogOffer::get_PurchasedCount_DEPRECATED()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_PurchasedCount_DEPRECATED", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CatalogOffer::set_PurchasedCount_DEPRECATED(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_PurchasedCount_DEPRECATED", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Epic::OnlineServices::Ecom::CatalogOffer::get_PurchaseLimit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_PurchaseLimit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CatalogOffer::set_PurchaseLimit(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_PurchaseLimit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::Ecom::CatalogOffer::get_AvailableForPurchase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_AvailableForPurchase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CatalogOffer::set_AvailableForPurchase(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_AvailableForPurchase", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint64_t Epic::OnlineServices::Ecom::CatalogOffer::get_OriginalPrice64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_OriginalPrice64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CatalogOffer::set_OriginalPrice64(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_OriginalPrice64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint64_t Epic::OnlineServices::Ecom::CatalogOffer::get_CurrentPrice64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_CurrentPrice64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CatalogOffer::set_CurrentPrice64(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_CurrentPrice64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t Epic::OnlineServices::Ecom::CatalogOffer::get_DecimalPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_DecimalPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CatalogOffer::set_DecimalPoint(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_DecimalPoint", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int64_t Epic::OnlineServices::Ecom::CatalogOffer::get_ReleaseDateTimestamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_ReleaseDateTimestamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CatalogOffer::set_ReleaseDateTimestamp(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_ReleaseDateTimestamp", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int64_t Epic::OnlineServices::Ecom::CatalogOffer::get_EffectiveDateTimestamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"get_EffectiveDateTimestamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::CatalogOffer::set_EffectiveDateTimestamp(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOffer>(),
                        {"set_EffectiveDateTimestamp", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_ServerIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_CatalogNamespace_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Id_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_TitleText_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_DescriptionText_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_LongDescriptionText_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_TechnicalDetailsText_DEPRECATED_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_CurrencyCode_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PriceResult_k__BackingField", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OriginalPrice_DEPRECATED_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_CurrentPrice_DEPRECATED_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_DiscountPercentage_k__BackingField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ExpirationTimestamp_k__BackingField", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PurchasedCount_DEPRECATED_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PurchaseLimit_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_AvailableForPurchase_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OriginalPrice64_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_CurrentPrice64_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_DecimalPoint_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ReleaseDateTimestamp_k__BackingField", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_EffectiveDateTimestamp_k__BackingField", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::CatalogOffer::CatalogOffer(int32_t  _ServerIndex_k__BackingField, ::Epic::OnlineServices::Utf8String*  _CatalogNamespace_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Id_k__BackingField, ::Epic::OnlineServices::Utf8String*  _TitleText_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DescriptionText_k__BackingField, ::Epic::OnlineServices::Utf8String*  _LongDescriptionText_k__BackingField, ::Epic::OnlineServices::Utf8String*  _TechnicalDetailsText_DEPRECATED_k__BackingField, ::Epic::OnlineServices::Utf8String*  _CurrencyCode_k__BackingField, ::Epic::OnlineServices::Result  _PriceResult_k__BackingField, uint32_t  _OriginalPrice_DEPRECATED_k__BackingField, uint32_t  _CurrentPrice_DEPRECATED_k__BackingField, uint8_t  _DiscountPercentage_k__BackingField, int64_t  _ExpirationTimestamp_k__BackingField, uint32_t  _PurchasedCount_DEPRECATED_k__BackingField, int32_t  _PurchaseLimit_k__BackingField, bool  _AvailableForPurchase_k__BackingField, uint64_t  _OriginalPrice64_k__BackingField, uint64_t  _CurrentPrice64_k__BackingField, uint32_t  _DecimalPoint_k__BackingField, int64_t  _ReleaseDateTimestamp_k__BackingField, int64_t  _EffectiveDateTimestamp_k__BackingField) noexcept  {
this->_ServerIndex_k__BackingField = _ServerIndex_k__BackingField;
this->_CatalogNamespace_k__BackingField = _CatalogNamespace_k__BackingField;
this->_Id_k__BackingField = _Id_k__BackingField;
this->_TitleText_k__BackingField = _TitleText_k__BackingField;
this->_DescriptionText_k__BackingField = _DescriptionText_k__BackingField;
this->_LongDescriptionText_k__BackingField = _LongDescriptionText_k__BackingField;
this->_TechnicalDetailsText_DEPRECATED_k__BackingField = _TechnicalDetailsText_DEPRECATED_k__BackingField;
this->_CurrencyCode_k__BackingField = _CurrencyCode_k__BackingField;
this->_PriceResult_k__BackingField = _PriceResult_k__BackingField;
this->_OriginalPrice_DEPRECATED_k__BackingField = _OriginalPrice_DEPRECATED_k__BackingField;
this->_CurrentPrice_DEPRECATED_k__BackingField = _CurrentPrice_DEPRECATED_k__BackingField;
this->_DiscountPercentage_k__BackingField = _DiscountPercentage_k__BackingField;
this->_ExpirationTimestamp_k__BackingField = _ExpirationTimestamp_k__BackingField;
this->_PurchasedCount_DEPRECATED_k__BackingField = _PurchasedCount_DEPRECATED_k__BackingField;
this->_PurchaseLimit_k__BackingField = _PurchaseLimit_k__BackingField;
this->_AvailableForPurchase_k__BackingField = _AvailableForPurchase_k__BackingField;
this->_OriginalPrice64_k__BackingField = _OriginalPrice64_k__BackingField;
this->_CurrentPrice64_k__BackingField = _CurrentPrice64_k__BackingField;
this->_DecimalPoint_k__BackingField = _DecimalPoint_k__BackingField;
this->_ReleaseDateTimestamp_k__BackingField = _ReleaseDateTimestamp_k__BackingField;
this->_EffectiveDateTimestamp_k__BackingField = _EffectiveDateTimestamp_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::CatalogOffer::CatalogOffer()   {
}

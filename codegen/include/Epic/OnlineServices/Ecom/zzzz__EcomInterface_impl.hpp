#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/EcomInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__EcomInterface_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CatalogItem_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CatalogOffer_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CatalogRelease_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CheckoutOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CopyEntitlementByIdOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CopyEntitlementByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CopyEntitlementByNameAndIndexOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CopyItemByIdOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CopyItemImageInfoByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CopyItemReleaseByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CopyLastRedeemEntitlementsResultByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CopyLastRedeemedEntitlementByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CopyOfferByIdOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CopyOfferByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CopyOfferImageInfoByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CopyOfferItemByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CopyTransactionByIdOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CopyTransactionByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__Entitlement_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__GetEntitlementsByNameCountOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__GetEntitlementsCountOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__GetItemImageInfoCountOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__GetItemReleaseCountOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__GetLastRedeemEntitlementsResultCountOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__GetLastRedeemedEntitlementsCountOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__GetOfferCountOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__GetOfferImageInfoCountOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__GetOfferItemCountOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__GetTransactionCountOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__KeyImageInfo_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OnCheckoutCallback_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OnQueryEntitlementTokenCallback_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OnQueryEntitlementsCallback_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OnQueryOffersCallback_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OnQueryOwnershipBySandboxIdsCallback_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OnQueryOwnershipCallback_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OnQueryOwnershipTokenCallback_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OnRedeemEntitlementsCallback_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__QueryEntitlementTokenOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__QueryEntitlementsOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__QueryOffersOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__QueryOwnershipBySandboxIdsOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__QueryOwnershipOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__QueryOwnershipTokenOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__RedeemEntitlementsOptions_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__Transaction_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::EcomInterface::*)()>(&::Epic::OnlineServices::Ecom::EcomInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::EcomInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::Ecom::EcomInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.Checkout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::CheckoutOptions>, ::System::Object*, ::Epic::OnlineServices::Ecom::OnCheckoutCallback*)>(&::Epic::OnlineServices::Ecom::EcomInterface::Checkout)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x180513850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"Checkout", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CheckoutOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Ecom::OnCheckoutCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.CopyEntitlementById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::CopyEntitlementByIdOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::Entitlement>>)>(&::Epic::OnlineServices::Ecom::EcomInterface::CopyEntitlementById)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180513ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyEntitlementById", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyEntitlementByIdOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::Entitlement>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.CopyEntitlementByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::CopyEntitlementByIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::Entitlement>>)>(&::Epic::OnlineServices::Ecom::EcomInterface::CopyEntitlementByIndex)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180513ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyEntitlementByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyEntitlementByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::Entitlement>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.CopyEntitlementByNameAndIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::CopyEntitlementByNameAndIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::Entitlement>>)>(&::Epic::OnlineServices::Ecom::EcomInterface::CopyEntitlementByNameAndIndex)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180513c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyEntitlementByNameAndIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyEntitlementByNameAndIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::Entitlement>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.CopyItemById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::CopyItemByIdOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogItem>>)>(&::Epic::OnlineServices::Ecom::EcomInterface::CopyItemById)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180513d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyItemById", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyItemByIdOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogItem>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.CopyItemImageInfoByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::CopyItemImageInfoByIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::KeyImageInfo>>)>(&::Epic::OnlineServices::Ecom::EcomInterface::CopyItemImageInfoByIndex)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180513e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyItemImageInfoByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyItemImageInfoByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::KeyImageInfo>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.CopyItemReleaseByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::CopyItemReleaseByIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogRelease>>)>(&::Epic::OnlineServices::Ecom::EcomInterface::CopyItemReleaseByIndex)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180513f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyItemReleaseByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyItemReleaseByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogRelease>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.CopyLastRedeemEntitlementsResultByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptions>, ::by_ref<::Epic::OnlineServices::Utf8String*>)>(&::Epic::OnlineServices::Ecom::EcomInterface::CopyLastRedeemEntitlementsResultByIndex)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180513fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyLastRedeemEntitlementsResultByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.CopyLastRedeemedEntitlementByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions>, ::by_ref<::Epic::OnlineServices::Utf8String*>)>(&::Epic::OnlineServices::Ecom::EcomInterface::CopyLastRedeemedEntitlementByIndex)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805140c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyLastRedeemedEntitlementByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.CopyOfferById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::CopyOfferByIdOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogOffer>>)>(&::Epic::OnlineServices::Ecom::EcomInterface::CopyOfferById)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805141a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyOfferById", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyOfferByIdOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogOffer>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.CopyOfferByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::CopyOfferByIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogOffer>>)>(&::Epic::OnlineServices::Ecom::EcomInterface::CopyOfferByIndex)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180514280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyOfferByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyOfferByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogOffer>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.CopyOfferImageInfoByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::KeyImageInfo>>)>(&::Epic::OnlineServices::Ecom::EcomInterface::CopyOfferImageInfoByIndex)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180514340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyOfferImageInfoByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::KeyImageInfo>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.CopyOfferItemByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::CopyOfferItemByIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogItem>>)>(&::Epic::OnlineServices::Ecom::EcomInterface::CopyOfferItemByIndex)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180514420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyOfferItemByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyOfferItemByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogItem>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.CopyTransactionById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::CopyTransactionByIdOptions>, ::by_ref<::Epic::OnlineServices::Ecom::Transaction*>)>(&::Epic::OnlineServices::Ecom::EcomInterface::CopyTransactionById)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180514500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyTransactionById", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyTransactionByIdOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::Transaction*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.CopyTransactionByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::CopyTransactionByIndexOptions>, ::by_ref<::Epic::OnlineServices::Ecom::Transaction*>)>(&::Epic::OnlineServices::Ecom::EcomInterface::CopyTransactionByIndex)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805145d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyTransactionByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyTransactionByIndexOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::Transaction*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.GetEntitlementsByNameCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::GetEntitlementsByNameCountOptions>)>(&::Epic::OnlineServices::Ecom::EcomInterface::GetEntitlementsByNameCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180514680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"GetEntitlementsByNameCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::GetEntitlementsByNameCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.GetEntitlementsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::GetEntitlementsCountOptions>)>(&::Epic::OnlineServices::Ecom::EcomInterface::GetEntitlementsCount)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180514710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"GetEntitlementsCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::GetEntitlementsCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.GetItemImageInfoCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::GetItemImageInfoCountOptions>)>(&::Epic::OnlineServices::Ecom::EcomInterface::GetItemImageInfoCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180514780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"GetItemImageInfoCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::GetItemImageInfoCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.GetItemReleaseCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::GetItemReleaseCountOptions>)>(&::Epic::OnlineServices::Ecom::EcomInterface::GetItemReleaseCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180514810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"GetItemReleaseCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::GetItemReleaseCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.GetLastRedeemEntitlementsResultCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions>)>(&::Epic::OnlineServices::Ecom::EcomInterface::GetLastRedeemEntitlementsResultCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805148a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"GetLastRedeemEntitlementsResultCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.GetLastRedeemedEntitlementsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::GetLastRedeemedEntitlementsCountOptions>)>(&::Epic::OnlineServices::Ecom::EcomInterface::GetLastRedeemedEntitlementsCount)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180514920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"GetLastRedeemedEntitlementsCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::GetLastRedeemedEntitlementsCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.GetOfferCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::GetOfferCountOptions>)>(&::Epic::OnlineServices::Ecom::EcomInterface::GetOfferCount)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180514990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"GetOfferCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::GetOfferCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.GetOfferImageInfoCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions>)>(&::Epic::OnlineServices::Ecom::EcomInterface::GetOfferImageInfoCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180514a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"GetOfferImageInfoCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.GetOfferItemCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::GetOfferItemCountOptions>)>(&::Epic::OnlineServices::Ecom::EcomInterface::GetOfferItemCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180514a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"GetOfferItemCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::GetOfferItemCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.GetTransactionCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::GetTransactionCountOptions>)>(&::Epic::OnlineServices::Ecom::EcomInterface::GetTransactionCount)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180514b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"GetTransactionCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::GetTransactionCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.QueryEntitlementToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::QueryEntitlementTokenOptions>, ::System::Object*, ::Epic::OnlineServices::Ecom::OnQueryEntitlementTokenCallback*)>(&::Epic::OnlineServices::Ecom::EcomInterface::QueryEntitlementToken)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x180514b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"QueryEntitlementToken", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::QueryEntitlementTokenOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Ecom::OnQueryEntitlementTokenCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.QueryEntitlements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::QueryEntitlementsOptions>, ::System::Object*, ::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallback*)>(&::Epic::OnlineServices::Ecom::EcomInterface::QueryEntitlements)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x180514dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"QueryEntitlements", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::QueryEntitlementsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.QueryOffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::QueryOffersOptions>, ::System::Object*, ::Epic::OnlineServices::Ecom::OnQueryOffersCallback*)>(&::Epic::OnlineServices::Ecom::EcomInterface::QueryOffers)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x180515040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"QueryOffers", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::QueryOffersOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Ecom::OnQueryOffersCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.QueryOwnership
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipOptions>, ::System::Object*, ::Epic::OnlineServices::Ecom::OnQueryOwnershipCallback*)>(&::Epic::OnlineServices::Ecom::EcomInterface::QueryOwnership)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x180515710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"QueryOwnership", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.QueryOwnershipBySandboxIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptions>, ::System::Object*, ::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback*)>(&::Epic::OnlineServices::Ecom::EcomInterface::QueryOwnershipBySandboxIds)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x180515270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"QueryOwnershipBySandboxIds", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.QueryOwnershipToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipTokenOptions>, ::System::Object*, ::Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallback*)>(&::Epic::OnlineServices::Ecom::EcomInterface::QueryOwnershipToken)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1805154b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"QueryOwnershipToken", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipTokenOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::EcomInterface.RedeemEntitlements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::EcomInterface::*)(::by_ref<::Epic::OnlineServices::Ecom::RedeemEntitlementsOptions>, ::System::Object*, ::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallback*)>(&::Epic::OnlineServices::Ecom::EcomInterface::RedeemEntitlements)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x180515970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"RedeemEntitlements", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::RedeemEntitlementsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallback*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Ecom::EcomInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::EcomInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline void Epic::OnlineServices::Ecom::EcomInterface::Checkout(::by_ref<::Epic::OnlineServices::Ecom::CheckoutOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Ecom::OnCheckoutCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"Checkout", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CheckoutOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Ecom::OnCheckoutCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Ecom::EcomInterface::CopyEntitlementById(::by_ref<::Epic::OnlineServices::Ecom::CopyEntitlementByIdOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::Entitlement>>  outEntitlement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyEntitlementById", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyEntitlementByIdOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::Entitlement>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outEntitlement);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Ecom::EcomInterface::CopyEntitlementByIndex(::by_ref<::Epic::OnlineServices::Ecom::CopyEntitlementByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::Entitlement>>  outEntitlement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyEntitlementByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyEntitlementByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::Entitlement>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outEntitlement);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Ecom::EcomInterface::CopyEntitlementByNameAndIndex(::by_ref<::Epic::OnlineServices::Ecom::CopyEntitlementByNameAndIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::Entitlement>>  outEntitlement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyEntitlementByNameAndIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyEntitlementByNameAndIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::Entitlement>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outEntitlement);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Ecom::EcomInterface::CopyItemById(::by_ref<::Epic::OnlineServices::Ecom::CopyItemByIdOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogItem>>  outItem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyItemById", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyItemByIdOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogItem>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outItem);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Ecom::EcomInterface::CopyItemImageInfoByIndex(::by_ref<::Epic::OnlineServices::Ecom::CopyItemImageInfoByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::KeyImageInfo>>  outImageInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyItemImageInfoByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyItemImageInfoByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::KeyImageInfo>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outImageInfo);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Ecom::EcomInterface::CopyItemReleaseByIndex(::by_ref<::Epic::OnlineServices::Ecom::CopyItemReleaseByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogRelease>>  outRelease)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyItemReleaseByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyItemReleaseByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogRelease>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outRelease);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Ecom::EcomInterface::CopyLastRedeemEntitlementsResultByIndex(::by_ref<::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptions>  options, ::by_ref<::Epic::OnlineServices::Utf8String*>  outEntitlementId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyLastRedeemEntitlementsResultByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outEntitlementId);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Ecom::EcomInterface::CopyLastRedeemedEntitlementByIndex(::by_ref<::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions>  options, ::by_ref<::Epic::OnlineServices::Utf8String*>  outRedeemedEntitlementId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyLastRedeemedEntitlementByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outRedeemedEntitlementId);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Ecom::EcomInterface::CopyOfferById(::by_ref<::Epic::OnlineServices::Ecom::CopyOfferByIdOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogOffer>>  outOffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyOfferById", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyOfferByIdOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogOffer>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outOffer);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Ecom::EcomInterface::CopyOfferByIndex(::by_ref<::Epic::OnlineServices::Ecom::CopyOfferByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogOffer>>  outOffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyOfferByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyOfferByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogOffer>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outOffer);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Ecom::EcomInterface::CopyOfferImageInfoByIndex(::by_ref<::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::KeyImageInfo>>  outImageInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyOfferImageInfoByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyOfferImageInfoByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::KeyImageInfo>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outImageInfo);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Ecom::EcomInterface::CopyOfferItemByIndex(::by_ref<::Epic::OnlineServices::Ecom::CopyOfferItemByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogItem>>  outItem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyOfferItemByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyOfferItemByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogItem>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outItem);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Ecom::EcomInterface::CopyTransactionById(::by_ref<::Epic::OnlineServices::Ecom::CopyTransactionByIdOptions>  options, ::by_ref<::Epic::OnlineServices::Ecom::Transaction*>  outTransaction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyTransactionById", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyTransactionByIdOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::Transaction*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outTransaction);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Ecom::EcomInterface::CopyTransactionByIndex(::by_ref<::Epic::OnlineServices::Ecom::CopyTransactionByIndexOptions>  options, ::by_ref<::Epic::OnlineServices::Ecom::Transaction*>  outTransaction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"CopyTransactionByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CopyTransactionByIndexOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::Transaction*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outTransaction);
}
inline uint32_t Epic::OnlineServices::Ecom::EcomInterface::GetEntitlementsByNameCount(::by_ref<::Epic::OnlineServices::Ecom::GetEntitlementsByNameCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"GetEntitlementsByNameCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::GetEntitlementsByNameCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline uint32_t Epic::OnlineServices::Ecom::EcomInterface::GetEntitlementsCount(::by_ref<::Epic::OnlineServices::Ecom::GetEntitlementsCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"GetEntitlementsCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::GetEntitlementsCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline uint32_t Epic::OnlineServices::Ecom::EcomInterface::GetItemImageInfoCount(::by_ref<::Epic::OnlineServices::Ecom::GetItemImageInfoCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"GetItemImageInfoCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::GetItemImageInfoCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline uint32_t Epic::OnlineServices::Ecom::EcomInterface::GetItemReleaseCount(::by_ref<::Epic::OnlineServices::Ecom::GetItemReleaseCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"GetItemReleaseCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::GetItemReleaseCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline uint32_t Epic::OnlineServices::Ecom::EcomInterface::GetLastRedeemEntitlementsResultCount(::by_ref<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"GetLastRedeemEntitlementsResultCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::GetLastRedeemEntitlementsResultCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline uint32_t Epic::OnlineServices::Ecom::EcomInterface::GetLastRedeemedEntitlementsCount(::by_ref<::Epic::OnlineServices::Ecom::GetLastRedeemedEntitlementsCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"GetLastRedeemedEntitlementsCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::GetLastRedeemedEntitlementsCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline uint32_t Epic::OnlineServices::Ecom::EcomInterface::GetOfferCount(::by_ref<::Epic::OnlineServices::Ecom::GetOfferCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"GetOfferCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::GetOfferCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline uint32_t Epic::OnlineServices::Ecom::EcomInterface::GetOfferImageInfoCount(::by_ref<::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"GetOfferImageInfoCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::GetOfferImageInfoCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline uint32_t Epic::OnlineServices::Ecom::EcomInterface::GetOfferItemCount(::by_ref<::Epic::OnlineServices::Ecom::GetOfferItemCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"GetOfferItemCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::GetOfferItemCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline uint32_t Epic::OnlineServices::Ecom::EcomInterface::GetTransactionCount(::by_ref<::Epic::OnlineServices::Ecom::GetTransactionCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"GetTransactionCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::GetTransactionCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::Ecom::EcomInterface::QueryEntitlementToken(::by_ref<::Epic::OnlineServices::Ecom::QueryEntitlementTokenOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Ecom::OnQueryEntitlementTokenCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"QueryEntitlementToken", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::QueryEntitlementTokenOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Ecom::OnQueryEntitlementTokenCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Ecom::EcomInterface::QueryEntitlements(::by_ref<::Epic::OnlineServices::Ecom::QueryEntitlementsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"QueryEntitlements", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::QueryEntitlementsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Ecom::EcomInterface::QueryOffers(::by_ref<::Epic::OnlineServices::Ecom::QueryOffersOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Ecom::OnQueryOffersCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"QueryOffers", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::QueryOffersOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Ecom::OnQueryOffersCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Ecom::EcomInterface::QueryOwnership(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Ecom::OnQueryOwnershipCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"QueryOwnership", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Ecom::EcomInterface::QueryOwnershipBySandboxIds(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"QueryOwnershipBySandboxIds", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Ecom::EcomInterface::QueryOwnershipToken(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipTokenOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"QueryOwnershipToken", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipTokenOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Ecom::EcomInterface::RedeemEntitlements(::by_ref<::Epic::OnlineServices::Ecom::RedeemEntitlementsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::EcomInterface*>(),
                        {"RedeemEntitlements", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::RedeemEntitlementsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::Ecom::EcomInterface* Epic::OnlineServices::Ecom::EcomInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Ecom::EcomInterface*>());
}
inline ::Epic::OnlineServices::Ecom::EcomInterface* Epic::OnlineServices::Ecom::EcomInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Ecom::EcomInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::EcomInterface::EcomInterface()   {
}

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CatalogOfferInternal.hpp"
#include "Epic/OnlineServices/zzzz__Result_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CatalogOfferInternal_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CatalogOffer_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::CatalogOfferInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::CatalogOfferInternal::*)(::by_ref<::Epic::OnlineServices::Ecom::CatalogOffer>)>(&::Epic::OnlineServices::Ecom::CatalogOfferInternal::Get)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x180511920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOfferInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CatalogOffer>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Ecom::CatalogOfferInternal::Get(::by_ref<::Epic::OnlineServices::Ecom::CatalogOffer>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::CatalogOfferInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CatalogOffer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogOffer>"
constexpr  Epic::OnlineServices::Ecom::CatalogOfferInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogOffer>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogOffer>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogOffer>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogOffer>* Epic::OnlineServices::Ecom::CatalogOfferInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Ecom__CatalogOffer_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogOffer>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ServerIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CatalogNamespace", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Id", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TitleText", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DescriptionText", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LongDescriptionText", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TechnicalDetailsText_DEPRECATED", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurrencyCode", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PriceResult", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OriginalPrice_DEPRECATED", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurrentPrice_DEPRECATED", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DiscountPercentage", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ExpirationTimestamp", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PurchasedCount_DEPRECATED", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PurchaseLimit", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AvailableForPurchase", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OriginalPrice64", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurrentPrice64", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DecimalPoint", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ReleaseDateTimestamp", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EffectiveDateTimestamp", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::CatalogOfferInternal::CatalogOfferInternal(int32_t  m_ApiVersion, int32_t  m_ServerIndex, ::System::IntPtr  m_CatalogNamespace, ::System::IntPtr  m_Id, ::System::IntPtr  m_TitleText, ::System::IntPtr  m_DescriptionText, ::System::IntPtr  m_LongDescriptionText, ::System::IntPtr  m_TechnicalDetailsText_DEPRECATED, ::System::IntPtr  m_CurrencyCode, ::Epic::OnlineServices::Result  m_PriceResult, uint32_t  m_OriginalPrice_DEPRECATED, uint32_t  m_CurrentPrice_DEPRECATED, uint8_t  m_DiscountPercentage, int64_t  m_ExpirationTimestamp, uint32_t  m_PurchasedCount_DEPRECATED, int32_t  m_PurchaseLimit, int32_t  m_AvailableForPurchase, uint64_t  m_OriginalPrice64, uint64_t  m_CurrentPrice64, uint32_t  m_DecimalPoint, int64_t  m_ReleaseDateTimestamp, int64_t  m_EffectiveDateTimestamp) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_ServerIndex = m_ServerIndex;
this->m_CatalogNamespace = m_CatalogNamespace;
this->m_Id = m_Id;
this->m_TitleText = m_TitleText;
this->m_DescriptionText = m_DescriptionText;
this->m_LongDescriptionText = m_LongDescriptionText;
this->m_TechnicalDetailsText_DEPRECATED = m_TechnicalDetailsText_DEPRECATED;
this->m_CurrencyCode = m_CurrencyCode;
this->m_PriceResult = m_PriceResult;
this->m_OriginalPrice_DEPRECATED = m_OriginalPrice_DEPRECATED;
this->m_CurrentPrice_DEPRECATED = m_CurrentPrice_DEPRECATED;
this->m_DiscountPercentage = m_DiscountPercentage;
this->m_ExpirationTimestamp = m_ExpirationTimestamp;
this->m_PurchasedCount_DEPRECATED = m_PurchasedCount_DEPRECATED;
this->m_PurchaseLimit = m_PurchaseLimit;
this->m_AvailableForPurchase = m_AvailableForPurchase;
this->m_OriginalPrice64 = m_OriginalPrice64;
this->m_CurrentPrice64 = m_CurrentPrice64;
this->m_DecimalPoint = m_DecimalPoint;
this->m_ReleaseDateTimestamp = m_ReleaseDateTimestamp;
this->m_EffectiveDateTimestamp = m_EffectiveDateTimestamp;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::CatalogOfferInternal::CatalogOfferInternal()   {
}

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CatalogOfferInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CatalogOfferInternal)
namespace Epic::OnlineServices::Ecom {
struct CatalogOffer;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct CatalogOfferInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::CatalogOfferInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::CatalogOfferInternal, "Epic.OnlineServices.Ecom", "CatalogOfferInternal");
// Dependencies Epic.OnlineServices.Result, System.IntPtr
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.CatalogOfferInternal
struct CORDL_TYPE CatalogOfferInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogOffer>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogOffer>*() ;

/// @brief Method Get, addr 0x180511920, size 0x2d0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Ecom::CatalogOffer>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogOffer>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogOffer>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Ecom__CatalogOffer_() ;

// Ctor Parameters []
// @brief default ctor
constexpr CatalogOfferInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ServerIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CatalogNamespace", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Id", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TitleText", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_DescriptionText", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LongDescriptionText", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TechnicalDetailsText_DEPRECATED", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_CurrencyCode", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_PriceResult", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "m_OriginalPrice_DEPRECATED", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_CurrentPrice_DEPRECATED", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_DiscountPercentage", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_ExpirationTimestamp", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_PurchasedCount_DEPRECATED", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_PurchaseLimit", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AvailableForPurchase", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_OriginalPrice64", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_CurrentPrice64", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_DecimalPoint", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_ReleaseDateTimestamp", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_EffectiveDateTimestamp", ty: "int64_t", modifiers: "", def_value: None }]
constexpr CatalogOfferInternal(int32_t  m_ApiVersion, int32_t  m_ServerIndex, ::System::IntPtr  m_CatalogNamespace, ::System::IntPtr  m_Id, ::System::IntPtr  m_TitleText, ::System::IntPtr  m_DescriptionText, ::System::IntPtr  m_LongDescriptionText, ::System::IntPtr  m_TechnicalDetailsText_DEPRECATED, ::System::IntPtr  m_CurrencyCode, ::Epic::OnlineServices::Result  m_PriceResult, uint32_t  m_OriginalPrice_DEPRECATED, uint32_t  m_CurrentPrice_DEPRECATED, uint8_t  m_DiscountPercentage, int64_t  m_ExpirationTimestamp, uint32_t  m_PurchasedCount_DEPRECATED, int32_t  m_PurchaseLimit, int32_t  m_AvailableForPurchase, uint64_t  m_OriginalPrice64, uint64_t  m_CurrentPrice64, uint32_t  m_DecimalPoint, int64_t  m_ReleaseDateTimestamp, int64_t  m_EffectiveDateTimestamp) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8890};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_ServerIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  m_ServerIndex;

/// @brief Field m_CatalogNamespace, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_CatalogNamespace;

/// @brief Field m_Id, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_Id;

/// @brief Field m_TitleText, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_TitleText;

/// @brief Field m_DescriptionText, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_DescriptionText;

/// @brief Field m_LongDescriptionText, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_LongDescriptionText;

/// @brief Field m_TechnicalDetailsText_DEPRECATED, offset: 0x30, size: 0x8, def value: None
 ::System::IntPtr  m_TechnicalDetailsText_DEPRECATED;

/// @brief Field m_CurrencyCode, offset: 0x38, size: 0x8, def value: None
 ::System::IntPtr  m_CurrencyCode;

/// @brief Field m_PriceResult, offset: 0x40, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  m_PriceResult;

/// @brief Field m_OriginalPrice_DEPRECATED, offset: 0x44, size: 0x4, def value: None
 uint32_t  m_OriginalPrice_DEPRECATED;

/// @brief Field m_CurrentPrice_DEPRECATED, offset: 0x48, size: 0x4, def value: None
 uint32_t  m_CurrentPrice_DEPRECATED;

/// @brief Field m_DiscountPercentage, offset: 0x4c, size: 0x1, def value: None
 uint8_t  m_DiscountPercentage;

/// @brief Field m_ExpirationTimestamp, offset: 0x50, size: 0x8, def value: None
 int64_t  m_ExpirationTimestamp;

/// @brief Field m_PurchasedCount_DEPRECATED, offset: 0x58, size: 0x4, def value: None
 uint32_t  m_PurchasedCount_DEPRECATED;

/// @brief Field m_PurchaseLimit, offset: 0x5c, size: 0x4, def value: None
 int32_t  m_PurchaseLimit;

/// @brief Field m_AvailableForPurchase, offset: 0x60, size: 0x4, def value: None
 int32_t  m_AvailableForPurchase;

/// @brief Field m_OriginalPrice64, offset: 0x68, size: 0x8, def value: None
 uint64_t  m_OriginalPrice64;

/// @brief Field m_CurrentPrice64, offset: 0x70, size: 0x8, def value: None
 uint64_t  m_CurrentPrice64;

/// @brief Field m_DecimalPoint, offset: 0x78, size: 0x4, def value: None
 uint32_t  m_DecimalPoint;

/// @brief Field m_ReleaseDateTimestamp, offset: 0x80, size: 0x8, def value: None
 int64_t  m_ReleaseDateTimestamp;

/// @brief Field m_EffectiveDateTimestamp, offset: 0x88, size: 0x8, def value: None
 int64_t  m_EffectiveDateTimestamp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOfferInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOfferInternal, m_ServerIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOfferInternal, m_CatalogNamespace) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOfferInternal, m_Id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOfferInternal, m_TitleText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOfferInternal, m_DescriptionText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOfferInternal, m_LongDescriptionText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOfferInternal, m_TechnicalDetailsText_DEPRECATED) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOfferInternal, m_CurrencyCode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOfferInternal, m_PriceResult) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOfferInternal, m_OriginalPrice_DEPRECATED) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOfferInternal, m_CurrentPrice_DEPRECATED) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOfferInternal, m_DiscountPercentage) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOfferInternal, m_ExpirationTimestamp) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOfferInternal, m_PurchasedCount_DEPRECATED) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOfferInternal, m_PurchaseLimit) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOfferInternal, m_AvailableForPurchase) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOfferInternal, m_OriginalPrice64) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOfferInternal, m_CurrentPrice64) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOfferInternal, m_DecimalPoint) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOfferInternal, m_ReleaseDateTimestamp) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOfferInternal, m_EffectiveDateTimestamp) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::CatalogOfferInternal) == 0x90, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom

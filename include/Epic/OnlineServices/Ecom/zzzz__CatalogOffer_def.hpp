#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CatalogOffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CatalogOffer)
namespace Epic::OnlineServices {
struct Result;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct CatalogOffer;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::CatalogOffer);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::CatalogOffer, "Epic.OnlineServices.Ecom", "CatalogOffer");
// Dependencies Epic.OnlineServices.Result
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.CatalogOffer
struct CORDL_TYPE CatalogOffer {
public:
// Declarations
 __declspec(property(get=get_AvailableForPurchase, put=set_AvailableForPurchase)) bool  AvailableForPurchase;

 __declspec(property(get=get_CatalogNamespace, put=set_CatalogNamespace)) ::Epic::OnlineServices::Utf8String*  CatalogNamespace;

 __declspec(property(get=get_CurrencyCode, put=set_CurrencyCode)) ::Epic::OnlineServices::Utf8String*  CurrencyCode;

 __declspec(property(get=get_CurrentPrice64, put=set_CurrentPrice64)) uint64_t  CurrentPrice64;

 __declspec(property(get=get_CurrentPrice_DEPRECATED, put=set_CurrentPrice_DEPRECATED)) uint32_t  CurrentPrice_DEPRECATED;

 __declspec(property(get=get_DecimalPoint, put=set_DecimalPoint)) uint32_t  DecimalPoint;

 __declspec(property(get=get_DescriptionText, put=set_DescriptionText)) ::Epic::OnlineServices::Utf8String*  DescriptionText;

 __declspec(property(get=get_DiscountPercentage, put=set_DiscountPercentage)) uint8_t  DiscountPercentage;

 __declspec(property(get=get_EffectiveDateTimestamp, put=set_EffectiveDateTimestamp)) int64_t  EffectiveDateTimestamp;

 __declspec(property(get=get_ExpirationTimestamp, put=set_ExpirationTimestamp)) int64_t  ExpirationTimestamp;

 __declspec(property(get=get_Id, put=set_Id)) ::Epic::OnlineServices::Utf8String*  Id;

 __declspec(property(get=get_LongDescriptionText, put=set_LongDescriptionText)) ::Epic::OnlineServices::Utf8String*  LongDescriptionText;

 __declspec(property(get=get_OriginalPrice64, put=set_OriginalPrice64)) uint64_t  OriginalPrice64;

 __declspec(property(get=get_OriginalPrice_DEPRECATED, put=set_OriginalPrice_DEPRECATED)) uint32_t  OriginalPrice_DEPRECATED;

 __declspec(property(get=get_PriceResult, put=set_PriceResult)) ::Epic::OnlineServices::Result  PriceResult;

 __declspec(property(get=get_PurchaseLimit, put=set_PurchaseLimit)) int32_t  PurchaseLimit;

 __declspec(property(get=get_PurchasedCount_DEPRECATED, put=set_PurchasedCount_DEPRECATED)) uint32_t  PurchasedCount_DEPRECATED;

 __declspec(property(get=get_ReleaseDateTimestamp, put=set_ReleaseDateTimestamp)) int64_t  ReleaseDateTimestamp;

 __declspec(property(get=get_ServerIndex, put=set_ServerIndex)) int32_t  ServerIndex;

 __declspec(property(get=get_TechnicalDetailsText_DEPRECATED, put=set_TechnicalDetailsText_DEPRECATED)) ::Epic::OnlineServices::Utf8String*  TechnicalDetailsText_DEPRECATED;

 __declspec(property(get=get_TitleText, put=set_TitleText)) ::Epic::OnlineServices::Utf8String*  TitleText;

/// @brief Method get_AvailableForPurchase, addr 0x1802e75b0, size 0x10, virtual false, abstract: false, final false
inline bool get_AvailableForPurchase() ;

/// @brief Method get_CatalogNamespace, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_CatalogNamespace() ;

/// @brief Method get_CurrencyCode, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_CurrencyCode() ;

/// @brief Method get_CurrentPrice64, addr 0x18039fe40, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_CurrentPrice64() ;

/// @brief Method get_CurrentPrice_DEPRECATED, addr 0x1803d4dd0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_CurrentPrice_DEPRECATED() ;

/// @brief Method get_DecimalPoint, addr 0x1803becf0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_DecimalPoint() ;

/// @brief Method get_DescriptionText, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_DescriptionText() ;

/// @brief Method get_DiscountPercentage, addr 0x1804a5a20, size 0x10, virtual false, abstract: false, final false
inline uint8_t get_DiscountPercentage() ;

/// @brief Method get_EffectiveDateTimestamp, addr 0x1802e5800, size 0x10, virtual false, abstract: false, final false
inline int64_t get_EffectiveDateTimestamp() ;

/// @brief Method get_ExpirationTimestamp, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline int64_t get_ExpirationTimestamp() ;

/// @brief Method get_Id, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Id() ;

/// @brief Method get_LongDescriptionText, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_LongDescriptionText() ;

/// @brief Method get_OriginalPrice64, addr 0x1802e5710, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_OriginalPrice64() ;

/// @brief Method get_OriginalPrice_DEPRECATED, addr 0x180511540, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_OriginalPrice_DEPRECATED() ;

/// @brief Method get_PriceResult, addr 0x1803eb0e0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result get_PriceResult() ;

/// @brief Method get_PurchaseLimit, addr 0x180503b40, size 0x10, virtual false, abstract: false, final false
inline int32_t get_PurchaseLimit() ;

/// @brief Method get_PurchasedCount_DEPRECATED, addr 0x1802e0b20, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_PurchasedCount_DEPRECATED() ;

/// @brief Method get_ReleaseDateTimestamp, addr 0x1802ec4c0, size 0x10, virtual false, abstract: false, final false
inline int64_t get_ReleaseDateTimestamp() ;

/// @brief Method get_ServerIndex, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_ServerIndex() ;

/// @brief Method get_TechnicalDetailsText_DEPRECATED, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_TechnicalDetailsText_DEPRECATED() ;

/// @brief Method get_TitleText, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_TitleText() ;

/// @brief Method set_AvailableForPurchase, addr 0x1803ac420, size 0x10, virtual false, abstract: false, final false
inline void set_AvailableForPurchase(bool  value) ;

/// @brief Method set_CatalogNamespace, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_CatalogNamespace(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_CurrencyCode, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void set_CurrencyCode(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_CurrentPrice64, addr 0x180511550, size 0x10, virtual false, abstract: false, final false
inline void set_CurrentPrice64(uint64_t  value) ;

/// @brief Method set_CurrentPrice_DEPRECATED, addr 0x1803d4ea0, size 0x10, virtual false, abstract: false, final false
inline void set_CurrentPrice_DEPRECATED(uint32_t  value) ;

/// @brief Method set_DecimalPoint, addr 0x180511560, size 0x10, virtual false, abstract: false, final false
inline void set_DecimalPoint(uint32_t  value) ;

/// @brief Method set_DescriptionText, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_DescriptionText(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_DiscountPercentage, addr 0x1804a5a50, size 0x10, virtual false, abstract: false, final false
inline void set_DiscountPercentage(uint8_t  value) ;

/// @brief Method set_EffectiveDateTimestamp, addr 0x1802e5b50, size 0x10, virtual false, abstract: false, final false
inline void set_EffectiveDateTimestamp(int64_t  value) ;

/// @brief Method set_ExpirationTimestamp, addr 0x180316040, size 0x10, virtual false, abstract: false, final false
inline void set_ExpirationTimestamp(int64_t  value) ;

/// @brief Method set_Id, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_Id(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LongDescriptionText, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_LongDescriptionText(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_OriginalPrice64, addr 0x180511570, size 0x10, virtual false, abstract: false, final false
inline void set_OriginalPrice64(uint64_t  value) ;

/// @brief Method set_OriginalPrice_DEPRECATED, addr 0x180511580, size 0x10, virtual false, abstract: false, final false
inline void set_OriginalPrice_DEPRECATED(uint32_t  value) ;

/// @brief Method set_PriceResult, addr 0x180511530, size 0x10, virtual false, abstract: false, final false
inline void set_PriceResult(::Epic::OnlineServices::Result  value) ;

/// @brief Method set_PurchaseLimit, addr 0x180503ba0, size 0x10, virtual false, abstract: false, final false
inline void set_PurchaseLimit(int32_t  value) ;

/// @brief Method set_PurchasedCount_DEPRECATED, addr 0x1802e0d10, size 0x10, virtual false, abstract: false, final false
inline void set_PurchasedCount_DEPRECATED(uint32_t  value) ;

/// @brief Method set_ReleaseDateTimestamp, addr 0x180511590, size 0x10, virtual false, abstract: false, final false
inline void set_ReleaseDateTimestamp(int64_t  value) ;

/// @brief Method set_ServerIndex, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_ServerIndex(int32_t  value) ;

/// @brief Method set_TechnicalDetailsText_DEPRECATED, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_TechnicalDetailsText_DEPRECATED(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_TitleText, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_TitleText(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CatalogOffer() ;

// Ctor Parameters [CppParam { name: "_ServerIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_CatalogNamespace_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Id_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_TitleText_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_DescriptionText_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_LongDescriptionText_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_TechnicalDetailsText_DEPRECATED_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_CurrencyCode_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_PriceResult_k__BackingField", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "_OriginalPrice_DEPRECATED_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_CurrentPrice_DEPRECATED_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_DiscountPercentage_k__BackingField", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_ExpirationTimestamp_k__BackingField", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "_PurchasedCount_DEPRECATED_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_PurchaseLimit_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_AvailableForPurchase_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_OriginalPrice64_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_CurrentPrice64_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_DecimalPoint_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_ReleaseDateTimestamp_k__BackingField", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "_EffectiveDateTimestamp_k__BackingField", ty: "int64_t", modifiers: "", def_value: None }]
constexpr CatalogOffer(int32_t  _ServerIndex_k__BackingField, ::Epic::OnlineServices::Utf8String*  _CatalogNamespace_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Id_k__BackingField, ::Epic::OnlineServices::Utf8String*  _TitleText_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DescriptionText_k__BackingField, ::Epic::OnlineServices::Utf8String*  _LongDescriptionText_k__BackingField, ::Epic::OnlineServices::Utf8String*  _TechnicalDetailsText_DEPRECATED_k__BackingField, ::Epic::OnlineServices::Utf8String*  _CurrencyCode_k__BackingField, ::Epic::OnlineServices::Result  _PriceResult_k__BackingField, uint32_t  _OriginalPrice_DEPRECATED_k__BackingField, uint32_t  _CurrentPrice_DEPRECATED_k__BackingField, uint8_t  _DiscountPercentage_k__BackingField, int64_t  _ExpirationTimestamp_k__BackingField, uint32_t  _PurchasedCount_DEPRECATED_k__BackingField, int32_t  _PurchaseLimit_k__BackingField, bool  _AvailableForPurchase_k__BackingField, uint64_t  _OriginalPrice64_k__BackingField, uint64_t  _CurrentPrice64_k__BackingField, uint32_t  _DecimalPoint_k__BackingField, int64_t  _ReleaseDateTimestamp_k__BackingField, int64_t  _EffectiveDateTimestamp_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8889};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field <ServerIndex>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _ServerIndex_k__BackingField;

/// @brief Field <CatalogNamespace>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _CatalogNamespace_k__BackingField;

/// @brief Field <Id>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Id_k__BackingField;

/// @brief Field <TitleText>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _TitleText_k__BackingField;

/// @brief Field <DescriptionText>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _DescriptionText_k__BackingField;

/// @brief Field <LongDescriptionText>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _LongDescriptionText_k__BackingField;

/// @brief Field <TechnicalDetailsText_DEPRECATED>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _TechnicalDetailsText_DEPRECATED_k__BackingField;

/// @brief Field <CurrencyCode>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _CurrencyCode_k__BackingField;

/// @brief Field <PriceResult>k__BackingField, offset: 0x40, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  _PriceResult_k__BackingField;

/// @brief Field <OriginalPrice_DEPRECATED>k__BackingField, offset: 0x44, size: 0x4, def value: None
 uint32_t  _OriginalPrice_DEPRECATED_k__BackingField;

/// @brief Field <CurrentPrice_DEPRECATED>k__BackingField, offset: 0x48, size: 0x4, def value: None
 uint32_t  _CurrentPrice_DEPRECATED_k__BackingField;

/// @brief Field <DiscountPercentage>k__BackingField, offset: 0x4c, size: 0x1, def value: None
 uint8_t  _DiscountPercentage_k__BackingField;

/// @brief Field <ExpirationTimestamp>k__BackingField, offset: 0x50, size: 0x8, def value: None
 int64_t  _ExpirationTimestamp_k__BackingField;

/// @brief Field <PurchasedCount_DEPRECATED>k__BackingField, offset: 0x58, size: 0x4, def value: None
 uint32_t  _PurchasedCount_DEPRECATED_k__BackingField;

/// @brief Field <PurchaseLimit>k__BackingField, offset: 0x5c, size: 0x4, def value: None
 int32_t  _PurchaseLimit_k__BackingField;

/// @brief Field <AvailableForPurchase>k__BackingField, offset: 0x60, size: 0x1, def value: None
 bool  _AvailableForPurchase_k__BackingField;

/// @brief Field <OriginalPrice64>k__BackingField, offset: 0x68, size: 0x8, def value: None
 uint64_t  _OriginalPrice64_k__BackingField;

/// @brief Field <CurrentPrice64>k__BackingField, offset: 0x70, size: 0x8, def value: None
 uint64_t  _CurrentPrice64_k__BackingField;

/// @brief Field <DecimalPoint>k__BackingField, offset: 0x78, size: 0x4, def value: None
 uint32_t  _DecimalPoint_k__BackingField;

/// @brief Field <ReleaseDateTimestamp>k__BackingField, offset: 0x80, size: 0x8, def value: None
 int64_t  _ReleaseDateTimestamp_k__BackingField;

/// @brief Field <EffectiveDateTimestamp>k__BackingField, offset: 0x88, size: 0x8, def value: None
 int64_t  _EffectiveDateTimestamp_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOffer, _ServerIndex_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOffer, _CatalogNamespace_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOffer, _Id_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOffer, _TitleText_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOffer, _DescriptionText_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOffer, _LongDescriptionText_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOffer, _TechnicalDetailsText_DEPRECATED_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOffer, _CurrencyCode_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOffer, _PriceResult_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOffer, _OriginalPrice_DEPRECATED_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOffer, _CurrentPrice_DEPRECATED_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOffer, _DiscountPercentage_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOffer, _ExpirationTimestamp_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOffer, _PurchasedCount_DEPRECATED_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOffer, _PurchaseLimit_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOffer, _AvailableForPurchase_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOffer, _OriginalPrice64_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOffer, _CurrentPrice64_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOffer, _DecimalPoint_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOffer, _ReleaseDateTimestamp_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogOffer, _EffectiveDateTimestamp_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::CatalogOffer) == 0x90, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom

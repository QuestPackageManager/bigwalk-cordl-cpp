#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CatalogItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Ecom/zzzz__EcomItemType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CatalogItem)
namespace Epic::OnlineServices::Ecom {
struct EcomItemType;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct CatalogItem;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::CatalogItem);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::CatalogItem, "Epic.OnlineServices.Ecom", "CatalogItem");
// Dependencies Epic.OnlineServices.Ecom.EcomItemType
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.CatalogItem
struct CORDL_TYPE CatalogItem {
public:
// Declarations
 __declspec(property(get=get_CatalogNamespace, put=set_CatalogNamespace)) ::Epic::OnlineServices::Utf8String*  CatalogNamespace;

 __declspec(property(get=get_DescriptionText, put=set_DescriptionText)) ::Epic::OnlineServices::Utf8String*  DescriptionText;

 __declspec(property(get=get_DeveloperText, put=set_DeveloperText)) ::Epic::OnlineServices::Utf8String*  DeveloperText;

 __declspec(property(get=get_EntitlementEndTimestamp, put=set_EntitlementEndTimestamp)) int64_t  EntitlementEndTimestamp;

 __declspec(property(get=get_EntitlementName, put=set_EntitlementName)) ::Epic::OnlineServices::Utf8String*  EntitlementName;

 __declspec(property(get=get_Id, put=set_Id)) ::Epic::OnlineServices::Utf8String*  Id;

 __declspec(property(get=get_ItemType, put=set_ItemType)) ::Epic::OnlineServices::Ecom::EcomItemType  ItemType;

 __declspec(property(get=get_LongDescriptionText, put=set_LongDescriptionText)) ::Epic::OnlineServices::Utf8String*  LongDescriptionText;

 __declspec(property(get=get_TechnicalDetailsText, put=set_TechnicalDetailsText)) ::Epic::OnlineServices::Utf8String*  TechnicalDetailsText;

 __declspec(property(get=get_TitleText, put=set_TitleText)) ::Epic::OnlineServices::Utf8String*  TitleText;

/// @brief Method get_CatalogNamespace, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_CatalogNamespace() ;

/// @brief Method get_DescriptionText, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_DescriptionText() ;

/// @brief Method get_DeveloperText, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_DeveloperText() ;

/// @brief Method get_EntitlementEndTimestamp, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline int64_t get_EntitlementEndTimestamp() ;

/// @brief Method get_EntitlementName, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_EntitlementName() ;

/// @brief Method get_Id, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Id() ;

/// @brief Method get_ItemType, addr 0x1803eb0e0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Ecom::EcomItemType get_ItemType() ;

/// @brief Method get_LongDescriptionText, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_LongDescriptionText() ;

/// @brief Method get_TechnicalDetailsText, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_TechnicalDetailsText() ;

/// @brief Method get_TitleText, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_TitleText() ;

/// @brief Method set_CatalogNamespace, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_CatalogNamespace(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_DescriptionText, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_DescriptionText(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_DeveloperText, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void set_DeveloperText(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_EntitlementEndTimestamp, addr 0x180511520, size 0x10, virtual false, abstract: false, final false
inline void set_EntitlementEndTimestamp(int64_t  value) ;

/// @brief Method set_EntitlementName, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_EntitlementName(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_Id, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_Id(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ItemType, addr 0x180511530, size 0x10, virtual false, abstract: false, final false
inline void set_ItemType(::Epic::OnlineServices::Ecom::EcomItemType  value) ;

/// @brief Method set_LongDescriptionText, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_LongDescriptionText(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_TechnicalDetailsText, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_TechnicalDetailsText(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_TitleText, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_TitleText(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CatalogItem() ;

// Ctor Parameters [CppParam { name: "_CatalogNamespace_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Id_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_EntitlementName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_TitleText_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_DescriptionText_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_LongDescriptionText_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_TechnicalDetailsText_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_DeveloperText_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ItemType_k__BackingField", ty: "::Epic::OnlineServices::Ecom::EcomItemType", modifiers: "", def_value: None }, CppParam { name: "_EntitlementEndTimestamp_k__BackingField", ty: "int64_t", modifiers: "", def_value: None }]
constexpr CatalogItem(::Epic::OnlineServices::Utf8String*  _CatalogNamespace_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Id_k__BackingField, ::Epic::OnlineServices::Utf8String*  _EntitlementName_k__BackingField, ::Epic::OnlineServices::Utf8String*  _TitleText_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DescriptionText_k__BackingField, ::Epic::OnlineServices::Utf8String*  _LongDescriptionText_k__BackingField, ::Epic::OnlineServices::Utf8String*  _TechnicalDetailsText_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DeveloperText_k__BackingField, ::Epic::OnlineServices::Ecom::EcomItemType  _ItemType_k__BackingField, int64_t  _EntitlementEndTimestamp_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8887};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <CatalogNamespace>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _CatalogNamespace_k__BackingField;

/// @brief Field <Id>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Id_k__BackingField;

/// @brief Field <EntitlementName>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _EntitlementName_k__BackingField;

/// @brief Field <TitleText>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _TitleText_k__BackingField;

/// @brief Field <DescriptionText>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _DescriptionText_k__BackingField;

/// @brief Field <LongDescriptionText>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _LongDescriptionText_k__BackingField;

/// @brief Field <TechnicalDetailsText>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _TechnicalDetailsText_k__BackingField;

/// @brief Field <DeveloperText>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _DeveloperText_k__BackingField;

/// @brief Field <ItemType>k__BackingField, offset: 0x40, size: 0x4, def value: None
 ::Epic::OnlineServices::Ecom::EcomItemType  _ItemType_k__BackingField;

/// @brief Field <EntitlementEndTimestamp>k__BackingField, offset: 0x48, size: 0x8, def value: None
 int64_t  _EntitlementEndTimestamp_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogItem, _CatalogNamespace_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogItem, _Id_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogItem, _EntitlementName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogItem, _TitleText_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogItem, _DescriptionText_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogItem, _LongDescriptionText_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogItem, _TechnicalDetailsText_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogItem, _DeveloperText_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogItem, _ItemType_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogItem, _EntitlementEndTimestamp_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::CatalogItem) == 0x50, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom

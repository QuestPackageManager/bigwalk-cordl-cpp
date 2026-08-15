#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CatalogItemInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Ecom/zzzz__EcomItemType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CatalogItemInternal)
namespace Epic::OnlineServices::Ecom {
struct CatalogItem;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct CatalogItemInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::CatalogItemInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::CatalogItemInternal, "Epic.OnlineServices.Ecom", "CatalogItemInternal");
// Dependencies Epic.OnlineServices.Ecom.EcomItemType, System.IntPtr
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.CatalogItemInternal
struct CORDL_TYPE CatalogItemInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogItem>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogItem>*() ;

/// @brief Method Get, addr 0x180511750, size 0x1d0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Ecom::CatalogItem>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogItem>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogItem>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Ecom__CatalogItem_() ;

// Ctor Parameters []
// @brief default ctor
constexpr CatalogItemInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CatalogNamespace", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Id", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_EntitlementName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TitleText", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_DescriptionText", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LongDescriptionText", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TechnicalDetailsText", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_DeveloperText", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ItemType", ty: "::Epic::OnlineServices::Ecom::EcomItemType", modifiers: "", def_value: None }, CppParam { name: "m_EntitlementEndTimestamp", ty: "int64_t", modifiers: "", def_value: None }]
constexpr CatalogItemInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_CatalogNamespace, ::System::IntPtr  m_Id, ::System::IntPtr  m_EntitlementName, ::System::IntPtr  m_TitleText, ::System::IntPtr  m_DescriptionText, ::System::IntPtr  m_LongDescriptionText, ::System::IntPtr  m_TechnicalDetailsText, ::System::IntPtr  m_DeveloperText, ::Epic::OnlineServices::Ecom::EcomItemType  m_ItemType, int64_t  m_EntitlementEndTimestamp) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8888};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_CatalogNamespace, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_CatalogNamespace;

/// @brief Field m_Id, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_Id;

/// @brief Field m_EntitlementName, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_EntitlementName;

/// @brief Field m_TitleText, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_TitleText;

/// @brief Field m_DescriptionText, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_DescriptionText;

/// @brief Field m_LongDescriptionText, offset: 0x30, size: 0x8, def value: None
 ::System::IntPtr  m_LongDescriptionText;

/// @brief Field m_TechnicalDetailsText, offset: 0x38, size: 0x8, def value: None
 ::System::IntPtr  m_TechnicalDetailsText;

/// @brief Field m_DeveloperText, offset: 0x40, size: 0x8, def value: None
 ::System::IntPtr  m_DeveloperText;

/// @brief Field m_ItemType, offset: 0x48, size: 0x4, def value: None
 ::Epic::OnlineServices::Ecom::EcomItemType  m_ItemType;

/// @brief Field m_EntitlementEndTimestamp, offset: 0x50, size: 0x8, def value: None
 int64_t  m_EntitlementEndTimestamp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogItemInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogItemInternal, m_CatalogNamespace) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogItemInternal, m_Id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogItemInternal, m_EntitlementName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogItemInternal, m_TitleText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogItemInternal, m_DescriptionText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogItemInternal, m_LongDescriptionText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogItemInternal, m_TechnicalDetailsText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogItemInternal, m_DeveloperText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogItemInternal, m_ItemType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogItemInternal, m_EntitlementEndTimestamp) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::CatalogItemInternal) == 0x58, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom

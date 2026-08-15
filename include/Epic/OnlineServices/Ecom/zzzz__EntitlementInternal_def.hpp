#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/EntitlementInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EntitlementInternal)
namespace Epic::OnlineServices::Ecom {
struct Entitlement;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct EntitlementInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::EntitlementInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::EntitlementInternal, "Epic.OnlineServices.Ecom", "EntitlementInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.EntitlementInternal
struct CORDL_TYPE EntitlementInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::Entitlement>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::Entitlement>*() ;

/// @brief Method Get, addr 0x180515bb0, size 0x110, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Ecom::Entitlement>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::Entitlement>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::Entitlement>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Ecom__Entitlement_() ;

// Ctor Parameters []
// @brief default ctor
constexpr EntitlementInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_EntitlementName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_EntitlementId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_CatalogItemId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ServerIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Redeemed", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_EndTimestamp", ty: "int64_t", modifiers: "", def_value: None }]
constexpr EntitlementInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_EntitlementName, ::System::IntPtr  m_EntitlementId, ::System::IntPtr  m_CatalogItemId, int32_t  m_ServerIndex, int32_t  m_Redeemed, int64_t  m_EndTimestamp) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8931};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_EntitlementName, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_EntitlementName;

/// @brief Field m_EntitlementId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_EntitlementId;

/// @brief Field m_CatalogItemId, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_CatalogItemId;

/// @brief Field m_ServerIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  m_ServerIndex;

/// @brief Field m_Redeemed, offset: 0x24, size: 0x4, def value: None
 int32_t  m_Redeemed;

/// @brief Field m_EndTimestamp, offset: 0x28, size: 0x8, def value: None
 int64_t  m_EndTimestamp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::EntitlementInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::EntitlementInternal, m_EntitlementName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::EntitlementInternal, m_EntitlementId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::EntitlementInternal, m_CatalogItemId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::EntitlementInternal, m_ServerIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::EntitlementInternal, m_Redeemed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::EntitlementInternal, m_EndTimestamp) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::EntitlementInternal) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom

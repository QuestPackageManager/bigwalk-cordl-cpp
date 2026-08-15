#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/QueryEntitlementsOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryEntitlementsOptionsInternal)
namespace Epic::OnlineServices::Ecom {
struct QueryEntitlementsOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct QueryEntitlementsOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::QueryEntitlementsOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::QueryEntitlementsOptionsInternal, "Epic.OnlineServices.Ecom", "QueryEntitlementsOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.QueryEntitlementsOptionsInternal
struct CORDL_TYPE QueryEntitlementsOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::QueryEntitlementsOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::QueryEntitlementsOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804f1a20, size 0x40, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x18051d340, size 0x130, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Ecom::QueryEntitlementsOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::QueryEntitlementsOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::QueryEntitlementsOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Ecom__QueryEntitlementsOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryEntitlementsOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_EntitlementNames", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_EntitlementNameCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_IncludeRedeemed", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_OverrideCatalogNamespace", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr QueryEntitlementsOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_EntitlementNames, uint32_t  m_EntitlementNameCount, int32_t  m_IncludeRedeemed, ::System::IntPtr  m_OverrideCatalogNamespace) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8988};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_EntitlementNames, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_EntitlementNames;

/// @brief Field m_EntitlementNameCount, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_EntitlementNameCount;

/// @brief Field m_IncludeRedeemed, offset: 0x1c, size: 0x4, def value: None
 int32_t  m_IncludeRedeemed;

/// @brief Field m_OverrideCatalogNamespace, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_OverrideCatalogNamespace;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::QueryEntitlementsOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::QueryEntitlementsOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::QueryEntitlementsOptionsInternal, m_EntitlementNames) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::QueryEntitlementsOptionsInternal, m_EntitlementNameCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::QueryEntitlementsOptionsInternal, m_IncludeRedeemed) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::QueryEntitlementsOptionsInternal, m_OverrideCatalogNamespace) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::QueryEntitlementsOptionsInternal) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom

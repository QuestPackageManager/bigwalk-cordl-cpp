#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/QueryEntitlementTokenOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryEntitlementTokenOptionsInternal)
namespace Epic::OnlineServices::Ecom {
struct QueryEntitlementTokenOptions;
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
struct QueryEntitlementTokenOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::QueryEntitlementTokenOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::QueryEntitlementTokenOptionsInternal, "Epic.OnlineServices.Ecom", "QueryEntitlementTokenOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.QueryEntitlementTokenOptionsInternal
struct CORDL_TYPE QueryEntitlementTokenOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::QueryEntitlementTokenOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::QueryEntitlementTokenOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6820, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x18051d1e0, size 0xa0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Ecom::QueryEntitlementTokenOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::QueryEntitlementTokenOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::QueryEntitlementTokenOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Ecom__QueryEntitlementTokenOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryEntitlementTokenOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_EntitlementNames", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_EntitlementNameCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr QueryEntitlementTokenOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_EntitlementNames, uint32_t  m_EntitlementNameCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8984};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_EntitlementNames, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_EntitlementNames;

/// @brief Field m_EntitlementNameCount, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_EntitlementNameCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::QueryEntitlementTokenOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::QueryEntitlementTokenOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::QueryEntitlementTokenOptionsInternal, m_EntitlementNames) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::QueryEntitlementTokenOptionsInternal, m_EntitlementNameCount) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::QueryEntitlementTokenOptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom

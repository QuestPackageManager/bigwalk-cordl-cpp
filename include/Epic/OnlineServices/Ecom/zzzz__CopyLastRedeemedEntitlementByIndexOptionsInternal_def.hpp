#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CopyLastRedeemedEntitlementByIndexOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyLastRedeemedEntitlementByIndexOptionsInternal)
namespace Epic::OnlineServices::Ecom {
struct CopyLastRedeemedEntitlementByIndexOptions;
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
struct CopyLastRedeemedEntitlementByIndexOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptionsInternal, "Epic.OnlineServices.Ecom", "CopyLastRedeemedEntitlementByIndexOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.CopyLastRedeemedEntitlementByIndexOptionsInternal
struct CORDL_TYPE CopyLastRedeemedEntitlementByIndexOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804e72b0, size 0x80, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Ecom__CopyLastRedeemedEntitlementByIndexOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyLastRedeemedEntitlementByIndexOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_RedeemedEntitlementIndex", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr CopyLastRedeemedEntitlementByIndexOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, uint32_t  m_RedeemedEntitlementIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8915};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_RedeemedEntitlementIndex, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_RedeemedEntitlementIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptionsInternal, m_RedeemedEntitlementIndex) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::CopyLastRedeemedEntitlementByIndexOptionsInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom

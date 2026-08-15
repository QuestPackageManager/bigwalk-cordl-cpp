#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CheckoutOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Ecom/zzzz__CheckoutOrientation_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CheckoutOptionsInternal)
namespace Epic::OnlineServices::Ecom {
struct CheckoutOptions;
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
struct CheckoutOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::CheckoutOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::CheckoutOptionsInternal, "Epic.OnlineServices.Ecom", "CheckoutOptionsInternal");
// Dependencies Epic.OnlineServices.Ecom.CheckoutOrientation, System.IntPtr
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.CheckoutOptionsInternal
struct CORDL_TYPE CheckoutOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CheckoutOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CheckoutOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804f1a20, size 0x40, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180511e00, size 0xd0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Ecom::CheckoutOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CheckoutOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CheckoutOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Ecom__CheckoutOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CheckoutOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_OverrideCatalogNamespace", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_EntryCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Entries", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_PreferredOrientation", ty: "::Epic::OnlineServices::Ecom::CheckoutOrientation", modifiers: "", def_value: None }]
constexpr CheckoutOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_OverrideCatalogNamespace, uint32_t  m_EntryCount, ::System::IntPtr  m_Entries, ::Epic::OnlineServices::Ecom::CheckoutOrientation  m_PreferredOrientation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8898};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_OverrideCatalogNamespace, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_OverrideCatalogNamespace;

/// @brief Field m_EntryCount, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_EntryCount;

/// @brief Field m_Entries, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_Entries;

/// @brief Field m_PreferredOrientation, offset: 0x28, size: 0x4, def value: None
 ::Epic::OnlineServices::Ecom::CheckoutOrientation  m_PreferredOrientation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::CheckoutOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CheckoutOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CheckoutOptionsInternal, m_OverrideCatalogNamespace) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CheckoutOptionsInternal, m_EntryCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CheckoutOptionsInternal, m_Entries) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CheckoutOptionsInternal, m_PreferredOrientation) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::CheckoutOptionsInternal) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom

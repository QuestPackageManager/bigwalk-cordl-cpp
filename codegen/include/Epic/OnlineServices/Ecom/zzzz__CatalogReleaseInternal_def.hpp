#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CatalogReleaseInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CatalogReleaseInternal)
namespace Epic::OnlineServices::Ecom {
struct CatalogRelease;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct CatalogReleaseInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::CatalogReleaseInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::CatalogReleaseInternal, "Epic.OnlineServices.Ecom", "CatalogReleaseInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.CatalogReleaseInternal
struct CORDL_TYPE CatalogReleaseInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogRelease>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogRelease>*() ;

/// @brief Method Get, addr 0x180511bf0, size 0xf0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Ecom::CatalogRelease>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogRelease>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::CatalogRelease>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Ecom__CatalogRelease_() ;

// Ctor Parameters []
// @brief default ctor
constexpr CatalogReleaseInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CompatibleAppIdCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_CompatibleAppIds", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_CompatiblePlatformCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_CompatiblePlatforms", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ReleaseNote", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr CatalogReleaseInternal(int32_t  m_ApiVersion, uint32_t  m_CompatibleAppIdCount, ::System::IntPtr  m_CompatibleAppIds, uint32_t  m_CompatiblePlatformCount, ::System::IntPtr  m_CompatiblePlatforms, ::System::IntPtr  m_ReleaseNote) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8892};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_CompatibleAppIdCount, offset: 0x4, size: 0x4, def value: None
 uint32_t  m_CompatibleAppIdCount;

/// @brief Field m_CompatibleAppIds, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_CompatibleAppIds;

/// @brief Field m_CompatiblePlatformCount, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_CompatiblePlatformCount;

/// @brief Field m_CompatiblePlatforms, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_CompatiblePlatforms;

/// @brief Field m_ReleaseNote, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_ReleaseNote;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogReleaseInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogReleaseInternal, m_CompatibleAppIdCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogReleaseInternal, m_CompatibleAppIds) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogReleaseInternal, m_CompatiblePlatformCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogReleaseInternal, m_CompatiblePlatforms) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CatalogReleaseInternal, m_ReleaseNote) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::CatalogReleaseInternal) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom

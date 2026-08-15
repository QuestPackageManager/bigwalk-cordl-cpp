#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/SandboxIdItemOwnershipInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SandboxIdItemOwnershipInternal)
namespace Epic::OnlineServices::Ecom {
struct SandboxIdItemOwnership;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct SandboxIdItemOwnershipInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::SandboxIdItemOwnershipInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::SandboxIdItemOwnershipInternal, "Epic.OnlineServices.Ecom", "SandboxIdItemOwnershipInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.SandboxIdItemOwnershipInternal
struct CORDL_TYPE SandboxIdItemOwnershipInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::SandboxIdItemOwnership>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::SandboxIdItemOwnership>*() ;

/// @brief Method Get, addr 0x18051dee0, size 0x150, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Ecom::SandboxIdItemOwnership>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::SandboxIdItemOwnership>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::SandboxIdItemOwnership>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Ecom__SandboxIdItemOwnership_() ;

// Ctor Parameters []
// @brief default ctor
constexpr SandboxIdItemOwnershipInternal() ;

// Ctor Parameters [CppParam { name: "m_SandboxId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_OwnedCatalogItemIds", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_OwnedCatalogItemIdsCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr SandboxIdItemOwnershipInternal(::System::IntPtr  m_SandboxId, ::System::IntPtr  m_OwnedCatalogItemIds, uint32_t  m_OwnedCatalogItemIdsCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9011};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_SandboxId, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_SandboxId;

/// @brief Field m_OwnedCatalogItemIds, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_OwnedCatalogItemIds;

/// @brief Field m_OwnedCatalogItemIdsCount, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_OwnedCatalogItemIdsCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::SandboxIdItemOwnershipInternal, m_SandboxId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::SandboxIdItemOwnershipInternal, m_OwnedCatalogItemIds) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::SandboxIdItemOwnershipInternal, m_OwnedCatalogItemIdsCount) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::SandboxIdItemOwnershipInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom

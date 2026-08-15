#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/ItemOwnershipInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Ecom/zzzz__OwnershipStatus_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ItemOwnershipInternal)
namespace Epic::OnlineServices::Ecom {
struct ItemOwnership;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct ItemOwnershipInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::ItemOwnershipInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::ItemOwnershipInternal, "Epic.OnlineServices.Ecom", "ItemOwnershipInternal");
// Dependencies Epic.OnlineServices.Ecom.OwnershipStatus, System.IntPtr
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.ItemOwnershipInternal
struct CORDL_TYPE ItemOwnershipInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::ItemOwnership>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::ItemOwnership>*() ;

/// @brief Method Get, addr 0x180517910, size 0x90, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Ecom::ItemOwnership>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::ItemOwnership>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::ItemOwnership>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Ecom__ItemOwnership_() ;

// Ctor Parameters []
// @brief default ctor
constexpr ItemOwnershipInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Id", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_OwnershipStatus", ty: "::Epic::OnlineServices::Ecom::OwnershipStatus", modifiers: "", def_value: None }]
constexpr ItemOwnershipInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Id, ::Epic::OnlineServices::Ecom::OwnershipStatus  m_OwnershipStatus) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8953};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_Id, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_Id;

/// @brief Field m_OwnershipStatus, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::Ecom::OwnershipStatus  m_OwnershipStatus;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::ItemOwnershipInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::ItemOwnershipInternal, m_Id) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::ItemOwnershipInternal, m_OwnershipStatus) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::ItemOwnershipInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom

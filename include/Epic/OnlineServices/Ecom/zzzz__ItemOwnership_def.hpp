#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/ItemOwnership.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Ecom/zzzz__OwnershipStatus_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ItemOwnership)
namespace Epic::OnlineServices::Ecom {
struct OwnershipStatus;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct ItemOwnership;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::ItemOwnership);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::ItemOwnership, "Epic.OnlineServices.Ecom", "ItemOwnership");
// Dependencies Epic.OnlineServices.Ecom.OwnershipStatus
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.ItemOwnership
struct CORDL_TYPE ItemOwnership {
public:
// Declarations
 __declspec(property(get=get_Id, put=set_Id)) ::Epic::OnlineServices::Utf8String*  Id;

 __declspec(property(get=get_OwnershipStatus, put=set_OwnershipStatus)) ::Epic::OnlineServices::Ecom::OwnershipStatus  OwnershipStatus;

/// @brief Method get_Id, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Id() ;

/// @brief Method get_OwnershipStatus, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Ecom::OwnershipStatus get_OwnershipStatus() ;

/// @brief Method set_Id, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_Id(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_OwnershipStatus, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_OwnershipStatus(::Epic::OnlineServices::Ecom::OwnershipStatus  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ItemOwnership() ;

// Ctor Parameters [CppParam { name: "_Id_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_OwnershipStatus_k__BackingField", ty: "::Epic::OnlineServices::Ecom::OwnershipStatus", modifiers: "", def_value: None }]
constexpr ItemOwnership(::Epic::OnlineServices::Utf8String*  _Id_k__BackingField, ::Epic::OnlineServices::Ecom::OwnershipStatus  _OwnershipStatus_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8952};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <Id>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Id_k__BackingField;

/// @brief Field <OwnershipStatus>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::Epic::OnlineServices::Ecom::OwnershipStatus  _OwnershipStatus_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::ItemOwnership, _Id_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::ItemOwnership, _OwnershipStatus_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::ItemOwnership) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom

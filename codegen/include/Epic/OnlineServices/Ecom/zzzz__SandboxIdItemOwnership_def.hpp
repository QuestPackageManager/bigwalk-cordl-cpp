#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/SandboxIdItemOwnership.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SandboxIdItemOwnership)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct SandboxIdItemOwnership;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::SandboxIdItemOwnership);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::SandboxIdItemOwnership, "Epic.OnlineServices.Ecom", "SandboxIdItemOwnership");
// Dependencies Epic.OnlineServices.Utf8String
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.SandboxIdItemOwnership
struct CORDL_TYPE SandboxIdItemOwnership {
public:
// Declarations
 __declspec(property(get=get_OwnedCatalogItemIds, put=set_OwnedCatalogItemIds)) ::ArrayW<::Epic::OnlineServices::Utf8String*>  OwnedCatalogItemIds;

 __declspec(property(get=get_SandboxId, put=set_SandboxId)) ::Epic::OnlineServices::Utf8String*  SandboxId;

/// @brief Method get_OwnedCatalogItemIds, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Epic::OnlineServices::Utf8String*> get_OwnedCatalogItemIds() ;

/// @brief Method get_SandboxId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_SandboxId() ;

/// @brief Method set_OwnedCatalogItemIds, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_OwnedCatalogItemIds(::ArrayW<::Epic::OnlineServices::Utf8String*>  value) ;

/// @brief Method set_SandboxId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_SandboxId(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SandboxIdItemOwnership() ;

// Ctor Parameters [CppParam { name: "_SandboxId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_OwnedCatalogItemIds_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::Utf8String*>", modifiers: "", def_value: None }]
constexpr SandboxIdItemOwnership(::Epic::OnlineServices::Utf8String*  _SandboxId_k__BackingField, ::ArrayW<::Epic::OnlineServices::Utf8String*>  _OwnedCatalogItemIds_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9010};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <SandboxId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _SandboxId_k__BackingField;

/// @brief Field <OwnedCatalogItemIds>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::Epic::OnlineServices::Utf8String*>  _OwnedCatalogItemIds_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::SandboxIdItemOwnership, _SandboxId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::SandboxIdItemOwnership, _OwnedCatalogItemIds_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::SandboxIdItemOwnership) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom

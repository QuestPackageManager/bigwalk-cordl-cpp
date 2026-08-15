#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/GetItemReleaseCountOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(GetItemReleaseCountOptions)
namespace Epic::OnlineServices {
class EpicAccountId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct GetItemReleaseCountOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::GetItemReleaseCountOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::GetItemReleaseCountOptions, "Epic.OnlineServices.Ecom", "GetItemReleaseCountOptions");
// Dependencies 
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.GetItemReleaseCountOptions
struct CORDL_TYPE GetItemReleaseCountOptions {
public:
// Declarations
 __declspec(property(get=get_ItemId, put=set_ItemId)) ::Epic::OnlineServices::Utf8String*  ItemId;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::EpicAccountId*  LocalUserId;

/// @brief Method get_ItemId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ItemId() ;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_LocalUserId() ;

/// @brief Method set_ItemId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_ItemId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GetItemReleaseCountOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_ItemId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr GetItemReleaseCountOptions(::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ItemId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8938};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField;

/// @brief Field <ItemId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ItemId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::GetItemReleaseCountOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::GetItemReleaseCountOptions, _ItemId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::GetItemReleaseCountOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom

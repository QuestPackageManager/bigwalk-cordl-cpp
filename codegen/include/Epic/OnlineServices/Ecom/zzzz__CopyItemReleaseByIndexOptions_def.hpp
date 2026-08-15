#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CopyItemReleaseByIndexOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyItemReleaseByIndexOptions)
namespace Epic::OnlineServices {
class EpicAccountId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct CopyItemReleaseByIndexOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::CopyItemReleaseByIndexOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::CopyItemReleaseByIndexOptions, "Epic.OnlineServices.Ecom", "CopyItemReleaseByIndexOptions");
// Dependencies 
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.CopyItemReleaseByIndexOptions
struct CORDL_TYPE CopyItemReleaseByIndexOptions {
public:
// Declarations
 __declspec(property(get=get_ItemId, put=set_ItemId)) ::Epic::OnlineServices::Utf8String*  ItemId;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::EpicAccountId*  LocalUserId;

 __declspec(property(get=get_ReleaseIndex, put=set_ReleaseIndex)) uint32_t  ReleaseIndex;

/// @brief Method get_ItemId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ItemId() ;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_LocalUserId() ;

/// @brief Method get_ReleaseIndex, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_ReleaseIndex() ;

/// @brief Method set_ItemId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_ItemId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

/// @brief Method set_ReleaseIndex, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_ReleaseIndex(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyItemReleaseByIndexOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_ItemId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ReleaseIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr CopyItemReleaseByIndexOptions(::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ItemId_k__BackingField, uint32_t  _ReleaseIndex_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8910};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField;

/// @brief Field <ItemId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ItemId_k__BackingField;

/// @brief Field <ReleaseIndex>k__BackingField, offset: 0x10, size: 0x4, def value: None
 uint32_t  _ReleaseIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::CopyItemReleaseByIndexOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CopyItemReleaseByIndexOptions, _ItemId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CopyItemReleaseByIndexOptions, _ReleaseIndex_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::CopyItemReleaseByIndexOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom

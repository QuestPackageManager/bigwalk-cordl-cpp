#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Friends/GetFriendAtIndexOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetFriendAtIndexOptions)
namespace Epic::OnlineServices {
class EpicAccountId;
}
// Forward declare root types
namespace Epic::OnlineServices::Friends {
struct GetFriendAtIndexOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Friends::GetFriendAtIndexOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Friends::GetFriendAtIndexOptions, "Epic.OnlineServices.Friends", "GetFriendAtIndexOptions");
// Dependencies 
namespace Epic::OnlineServices::Friends {
// Is value type: true
// CS Name: Epic.OnlineServices.Friends.GetFriendAtIndexOptions
struct CORDL_TYPE GetFriendAtIndexOptions {
public:
// Declarations
 __declspec(property(get=get_Index, put=set_Index)) int32_t  Index;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::EpicAccountId*  LocalUserId;

/// @brief Method get_Index, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Index() ;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_LocalUserId() ;

/// @brief Method set_Index, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_Index(int32_t  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GetFriendAtIndexOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_Index_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GetFriendAtIndexOptions(::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, int32_t  _Index_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8847};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField;

/// @brief Field <Index>k__BackingField, offset: 0x8, size: 0x4, def value: None
 int32_t  _Index_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Friends::GetFriendAtIndexOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Friends::GetFriendAtIndexOptions, _Index_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Friends::GetFriendAtIndexOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Friends

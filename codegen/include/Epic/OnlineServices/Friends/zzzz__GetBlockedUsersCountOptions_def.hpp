#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Friends/GetBlockedUsersCountOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(GetBlockedUsersCountOptions)
namespace Epic::OnlineServices {
class EpicAccountId;
}
// Forward declare root types
namespace Epic::OnlineServices::Friends {
struct GetBlockedUsersCountOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Friends::GetBlockedUsersCountOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Friends::GetBlockedUsersCountOptions, "Epic.OnlineServices.Friends", "GetBlockedUsersCountOptions");
// Dependencies 
namespace Epic::OnlineServices::Friends {
// Is value type: true
// CS Name: Epic.OnlineServices.Friends.GetBlockedUsersCountOptions
struct CORDL_TYPE GetBlockedUsersCountOptions {
public:
// Declarations
 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::EpicAccountId*  LocalUserId;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_LocalUserId() ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GetBlockedUsersCountOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }]
constexpr GetBlockedUsersCountOptions(::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8845};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Friends::GetBlockedUsersCountOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Friends::GetBlockedUsersCountOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Friends

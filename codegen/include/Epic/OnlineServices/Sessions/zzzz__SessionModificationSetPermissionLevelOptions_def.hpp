#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionModificationSetPermissionLevelOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Sessions/zzzz__OnlineSessionPermissionLevel_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SessionModificationSetPermissionLevelOptions)
namespace Epic::OnlineServices::Sessions {
struct OnlineSessionPermissionLevel;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct SessionModificationSetPermissionLevelOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions, "Epic.OnlineServices.Sessions", "SessionModificationSetPermissionLevelOptions");
// Dependencies Epic.OnlineServices.Sessions.OnlineSessionPermissionLevel
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.SessionModificationSetPermissionLevelOptions
struct CORDL_TYPE SessionModificationSetPermissionLevelOptions {
public:
// Declarations
 __declspec(property(get=get_PermissionLevel, put=set_PermissionLevel)) ::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel  PermissionLevel;

/// @brief Method get_PermissionLevel, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel get_PermissionLevel() ;

/// @brief Method set_PermissionLevel, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_PermissionLevel(::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionModificationSetPermissionLevelOptions() ;

// Ctor Parameters [CppParam { name: "_PermissionLevel_k__BackingField", ty: "::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel", modifiers: "", def_value: None }]
constexpr SessionModificationSetPermissionLevelOptions(::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel  _PermissionLevel_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7833};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <PermissionLevel>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel  _PermissionLevel_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions, _PermissionLevel_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions

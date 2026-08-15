#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionModificationSetInvitesAllowedOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(SessionModificationSetInvitesAllowedOptions)
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct SessionModificationSetInvitesAllowedOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions, "Epic.OnlineServices.Sessions", "SessionModificationSetInvitesAllowedOptions");
// Dependencies 
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.SessionModificationSetInvitesAllowedOptions
struct CORDL_TYPE SessionModificationSetInvitesAllowedOptions {
public:
// Declarations
 __declspec(property(get=get_InvitesAllowed, put=set_InvitesAllowed)) bool  InvitesAllowed;

/// @brief Method get_InvitesAllowed, addr 0x180311f90, size 0x20, virtual false, abstract: false, final false
inline bool get_InvitesAllowed() ;

/// @brief Method set_InvitesAllowed, addr 0x1804bda60, size 0x10, virtual false, abstract: false, final false
inline void set_InvitesAllowed(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionModificationSetInvitesAllowedOptions() ;

// Ctor Parameters [CppParam { name: "_InvitesAllowed_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr SessionModificationSetInvitesAllowedOptions(bool  _InvitesAllowed_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7827};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field <InvitesAllowed>k__BackingField, offset: 0x0, size: 0x1, def value: None
 bool  _InvitesAllowed_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions, _InvitesAllowed_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions) == 0x1, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions

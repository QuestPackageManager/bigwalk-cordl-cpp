#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyModificationSetInvitesAllowedOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(LobbyModificationSetInvitesAllowedOptions)
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct LobbyModificationSetInvitesAllowedOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions, "Epic.OnlineServices.Lobby", "LobbyModificationSetInvitesAllowedOptions");
// Dependencies 
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.LobbyModificationSetInvitesAllowedOptions
struct CORDL_TYPE LobbyModificationSetInvitesAllowedOptions {
public:
// Declarations
 __declspec(property(get=get_InvitesAllowed, put=set_InvitesAllowed)) bool  InvitesAllowed;

/// @brief Method get_InvitesAllowed, addr 0x180311f90, size 0x20, virtual false, abstract: false, final false
inline bool get_InvitesAllowed() ;

/// @brief Method set_InvitesAllowed, addr 0x1804bda60, size 0x10, virtual false, abstract: false, final false
inline void set_InvitesAllowed(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LobbyModificationSetInvitesAllowedOptions() ;

// Ctor Parameters [CppParam { name: "_InvitesAllowed_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr LobbyModificationSetInvitesAllowedOptions(bool  _InvitesAllowed_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8562};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field <InvitesAllowed>k__BackingField, offset: 0x0, size: 0x1, def value: None
 bool  _InvitesAllowed_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions, _InvitesAllowed_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions) == 0x1, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyModificationSetPermissionLevelOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Lobby/zzzz__LobbyPermissionLevel_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LobbyModificationSetPermissionLevelOptions)
namespace Epic::OnlineServices::Lobby {
struct LobbyPermissionLevel;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct LobbyModificationSetPermissionLevelOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions, "Epic.OnlineServices.Lobby", "LobbyModificationSetPermissionLevelOptions");
// Dependencies Epic.OnlineServices.Lobby.LobbyPermissionLevel
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.LobbyModificationSetPermissionLevelOptions
struct CORDL_TYPE LobbyModificationSetPermissionLevelOptions {
public:
// Declarations
 __declspec(property(get=get_PermissionLevel, put=set_PermissionLevel)) ::Epic::OnlineServices::Lobby::LobbyPermissionLevel  PermissionLevel;

/// @brief Method get_PermissionLevel, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Lobby::LobbyPermissionLevel get_PermissionLevel() ;

/// @brief Method set_PermissionLevel, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_PermissionLevel(::Epic::OnlineServices::Lobby::LobbyPermissionLevel  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LobbyModificationSetPermissionLevelOptions() ;

// Ctor Parameters [CppParam { name: "_PermissionLevel_k__BackingField", ty: "::Epic::OnlineServices::Lobby::LobbyPermissionLevel", modifiers: "", def_value: None }]
constexpr LobbyModificationSetPermissionLevelOptions(::Epic::OnlineServices::Lobby::LobbyPermissionLevel  _PermissionLevel_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8566};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <PermissionLevel>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Lobby::LobbyPermissionLevel  _PermissionLevel_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions, _PermissionLevel_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby

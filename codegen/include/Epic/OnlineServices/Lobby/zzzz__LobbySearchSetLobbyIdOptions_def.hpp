#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbySearchSetLobbyIdOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(LobbySearchSetLobbyIdOptions)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct LobbySearchSetLobbyIdOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::LobbySearchSetLobbyIdOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LobbySearchSetLobbyIdOptions, "Epic.OnlineServices.Lobby", "LobbySearchSetLobbyIdOptions");
// Dependencies 
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.LobbySearchSetLobbyIdOptions
struct CORDL_TYPE LobbySearchSetLobbyIdOptions {
public:
// Declarations
 __declspec(property(get=get_LobbyId, put=set_LobbyId)) ::Epic::OnlineServices::Utf8String*  LobbyId;

/// @brief Method get_LobbyId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_LobbyId() ;

/// @brief Method set_LobbyId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LobbyId(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LobbySearchSetLobbyIdOptions() ;

// Ctor Parameters [CppParam { name: "_LobbyId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr LobbySearchSetLobbyIdOptions(::Epic::OnlineServices::Utf8String*  _LobbyId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8584};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <LobbyId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _LobbyId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbySearchSetLobbyIdOptions, _LobbyId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::LobbySearchSetLobbyIdOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/UpdateLobbyOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(UpdateLobbyOptions)
namespace Epic::OnlineServices::Lobby {
class LobbyModification;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct UpdateLobbyOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::UpdateLobbyOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::UpdateLobbyOptions, "Epic.OnlineServices.Lobby", "UpdateLobbyOptions");
// Dependencies 
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.UpdateLobbyOptions
struct CORDL_TYPE UpdateLobbyOptions {
public:
// Declarations
 __declspec(property(get=get_LobbyModificationHandle, put=set_LobbyModificationHandle)) ::Epic::OnlineServices::Lobby::LobbyModification*  LobbyModificationHandle;

/// @brief Method get_LobbyModificationHandle, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Lobby::LobbyModification* get_LobbyModificationHandle() ;

/// @brief Method set_LobbyModificationHandle, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LobbyModificationHandle(::Epic::OnlineServices::Lobby::LobbyModification*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UpdateLobbyOptions() ;

// Ctor Parameters [CppParam { name: "_LobbyModificationHandle_k__BackingField", ty: "::Epic::OnlineServices::Lobby::LobbyModification*", modifiers: "", def_value: None }]
constexpr UpdateLobbyOptions(::Epic::OnlineServices::Lobby::LobbyModification*  _LobbyModificationHandle_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8694};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <LobbyModificationHandle>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Lobby::LobbyModification*  _LobbyModificationHandle_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::UpdateLobbyOptions, _LobbyModificationHandle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::UpdateLobbyOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby

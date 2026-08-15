#pragma once
// IWYU pragma private; include "Mirror/NetworkLobbyPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkRoomPlayer_def.hpp"
CORDL_MODULE_EXPORT(NetworkLobbyPlayer)
// Forward declare root types
namespace Mirror {
class NetworkLobbyPlayer;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkLobbyPlayer*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkLobbyPlayer*, "Mirror", "NetworkLobbyPlayer");
// Dependencies Mirror.NetworkRoomPlayer
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkLobbyPlayer
class CORDL_TYPE NetworkLobbyPlayer : public ::Mirror::NetworkRoomPlayer {
public:
// Declarations
/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::NetworkLobbyPlayer* New_ctor() ;

/// @brief Method .ctor, addr 0x18151de60, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkLobbyPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkLobbyPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkLobbyPlayer(NetworkLobbyPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkLobbyPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkLobbyPlayer(NetworkLobbyPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19237};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::NetworkLobbyPlayer) == 0x70, "Size mismatch!");

} // namespace end def Mirror

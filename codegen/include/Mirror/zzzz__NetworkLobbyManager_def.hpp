#pragma once
// IWYU pragma private; include "Mirror/NetworkLobbyManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkRoomManager_def.hpp"
CORDL_MODULE_EXPORT(NetworkLobbyManager)
// Forward declare root types
namespace Mirror {
class NetworkLobbyManager;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkLobbyManager*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkLobbyManager*, "Mirror", "NetworkLobbyManager");
// Dependencies Mirror.NetworkRoomManager
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkLobbyManager
class CORDL_TYPE NetworkLobbyManager : public ::Mirror::NetworkRoomManager {
public:
// Declarations
static inline ::Mirror::NetworkLobbyManager* New_ctor() ;

/// @brief Method .ctor, addr 0x18151ddc0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkLobbyManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkLobbyManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkLobbyManager(NetworkLobbyManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkLobbyManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkLobbyManager(NetworkLobbyManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19236};

/// @brief Size padding 0xc8 - 0xc0 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::NetworkLobbyManager) == 0xc8, "Size mismatch!");

} // namespace end def Mirror

#pragma once
// IWYU pragma private; include "Steamworks/LobbyGameCreated_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LobbyGameCreated_t)
// Forward declare root types
namespace Steamworks {
struct LobbyGameCreated_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::LobbyGameCreated_t);
DEFINE_IL2CPP_CLASS(::Steamworks::LobbyGameCreated_t, "Steamworks", "LobbyGameCreated_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.LobbyGameCreated_t
#pragma pack(push, 8)
struct CORDL_TYPE LobbyGameCreated_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LobbyGameCreated_t() ;

// Ctor Parameters [CppParam { name: "m_ulSteamIDLobby", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_ulSteamIDGameServer", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_unIP", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_usPort", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr LobbyGameCreated_t(uint64_t  m_ulSteamIDLobby, uint64_t  m_ulSteamIDGameServer, uint32_t  m_unIP, uint16_t  m_usPort) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16110};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x1fd)};

/// @brief Field m_ulSteamIDLobby, offset: 0x0, size: 0x8, def value: None
 uint64_t  m_ulSteamIDLobby;

/// @brief Field m_ulSteamIDGameServer, offset: 0x8, size: 0x8, def value: None
 uint64_t  m_ulSteamIDGameServer;

/// @brief Field m_unIP, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_unIP;

/// @brief Field m_usPort, offset: 0x14, size: 0x2, def value: None
 uint16_t  m_usPort;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::LobbyGameCreated_t, m_ulSteamIDLobby) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LobbyGameCreated_t, m_ulSteamIDGameServer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LobbyGameCreated_t, m_unIP) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LobbyGameCreated_t, m_usPort) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Steamworks::LobbyGameCreated_t) == 0x18, "Size mismatch!");

} // namespace end def Steamworks

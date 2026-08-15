#pragma once
// IWYU pragma private; include "Steamworks/LobbyInvite_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LobbyInvite_t)
// Forward declare root types
namespace Steamworks {
struct LobbyInvite_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::LobbyInvite_t);
DEFINE_IL2CPP_CLASS(::Steamworks::LobbyInvite_t, "Steamworks", "LobbyInvite_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.LobbyInvite_t
#pragma pack(push, 8)
struct CORDL_TYPE LobbyInvite_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LobbyInvite_t() ;

// Ctor Parameters [CppParam { name: "m_ulSteamIDUser", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_ulSteamIDLobby", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_ulGameID", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr LobbyInvite_t(uint64_t  m_ulSteamIDUser, uint64_t  m_ulSteamIDLobby, uint64_t  m_ulGameID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16105};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x1f7)};

/// @brief Field m_ulSteamIDUser, offset: 0x0, size: 0x8, def value: None
 uint64_t  m_ulSteamIDUser;

/// @brief Field m_ulSteamIDLobby, offset: 0x8, size: 0x8, def value: None
 uint64_t  m_ulSteamIDLobby;

/// @brief Field m_ulGameID, offset: 0x10, size: 0x8, def value: None
 uint64_t  m_ulGameID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::LobbyInvite_t, m_ulSteamIDUser) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LobbyInvite_t, m_ulSteamIDLobby) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LobbyInvite_t, m_ulGameID) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Steamworks::LobbyInvite_t) == 0x18, "Size mismatch!");

} // namespace end def Steamworks

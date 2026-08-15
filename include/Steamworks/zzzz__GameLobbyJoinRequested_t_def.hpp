#pragma once
// IWYU pragma private; include "Steamworks/GameLobbyJoinRequested_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameLobbyJoinRequested_t)
// Forward declare root types
namespace Steamworks {
struct GameLobbyJoinRequested_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::GameLobbyJoinRequested_t);
DEFINE_IL2CPP_CLASS(::Steamworks::GameLobbyJoinRequested_t, "Steamworks", "GameLobbyJoinRequested_t");
// Dependencies Steamworks.CSteamID
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.GameLobbyJoinRequested_t
#pragma pack(push, 8)
struct CORDL_TYPE GameLobbyJoinRequested_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameLobbyJoinRequested_t() ;

// Ctor Parameters [CppParam { name: "m_steamIDLobby", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }, CppParam { name: "m_steamIDFriend", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }]
constexpr GameLobbyJoinRequested_t(::Steamworks::CSteamID  m_steamIDLobby, ::Steamworks::CSteamID  m_steamIDFriend) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16037};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x14d)};

/// @brief Field m_steamIDLobby, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_steamIDLobby;

/// @brief Field m_steamIDFriend, offset: 0x8, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_steamIDFriend;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::GameLobbyJoinRequested_t, m_steamIDLobby) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GameLobbyJoinRequested_t, m_steamIDFriend) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::GameLobbyJoinRequested_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks

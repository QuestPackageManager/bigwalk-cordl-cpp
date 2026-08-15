#pragma once
// IWYU pragma private; include "Steamworks/GameConnectedChatJoin_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameConnectedChatJoin_t)
// Forward declare root types
namespace Steamworks {
struct GameConnectedChatJoin_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::GameConnectedChatJoin_t);
DEFINE_IL2CPP_CLASS(::Steamworks::GameConnectedChatJoin_t, "Steamworks", "GameConnectedChatJoin_t");
// Dependencies Steamworks.CSteamID
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.GameConnectedChatJoin_t
#pragma pack(push, 8)
struct CORDL_TYPE GameConnectedChatJoin_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameConnectedChatJoin_t() ;

// Ctor Parameters [CppParam { name: "m_steamIDClanChat", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }, CppParam { name: "m_steamIDUser", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }]
constexpr GameConnectedChatJoin_t(::Steamworks::CSteamID  m_steamIDClanChat, ::Steamworks::CSteamID  m_steamIDUser) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16043};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x153)};

/// @brief Field m_steamIDClanChat, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_steamIDClanChat;

/// @brief Field m_steamIDUser, offset: 0x8, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_steamIDUser;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::GameConnectedChatJoin_t, m_steamIDClanChat) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GameConnectedChatJoin_t, m_steamIDUser) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::GameConnectedChatJoin_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks

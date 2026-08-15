#pragma once
// IWYU pragma private; include "Steamworks/FriendGameInfo_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CGameID_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FriendGameInfo_t)
// Forward declare root types
namespace Steamworks {
struct FriendGameInfo_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::FriendGameInfo_t);
DEFINE_IL2CPP_CLASS(::Steamworks::FriendGameInfo_t, "Steamworks", "FriendGameInfo_t");
// Dependencies Steamworks.CGameID, Steamworks.CSteamID
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.FriendGameInfo_t
#pragma pack(push, 8)
struct CORDL_TYPE FriendGameInfo_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FriendGameInfo_t() ;

// Ctor Parameters [CppParam { name: "m_gameID", ty: "::Steamworks::CGameID", modifiers: "", def_value: None }, CppParam { name: "m_unGameIP", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_usGamePort", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_usQueryPort", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_steamIDLobby", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }]
constexpr FriendGameInfo_t(::Steamworks::CGameID  m_gameID, uint32_t  m_unGameIP, uint16_t  m_usGamePort, uint16_t  m_usQueryPort, ::Steamworks::CSteamID  m_steamIDLobby) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16344};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_gameID, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::CGameID  m_gameID;

/// @brief Field m_unGameIP, offset: 0x8, size: 0x4, def value: None
 uint32_t  m_unGameIP;

/// @brief Field m_usGamePort, offset: 0xc, size: 0x2, def value: None
 uint16_t  m_usGamePort;

/// @brief Field m_usQueryPort, offset: 0xe, size: 0x2, def value: None
 uint16_t  m_usQueryPort;

/// @brief Field m_steamIDLobby, offset: 0x10, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_steamIDLobby;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::FriendGameInfo_t, m_gameID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::FriendGameInfo_t, m_unGameIP) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::FriendGameInfo_t, m_usGamePort) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Steamworks::FriendGameInfo_t, m_usQueryPort) == 0xe, "Offset mismatch!");

static_assert(offsetof(::Steamworks::FriendGameInfo_t, m_steamIDLobby) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Steamworks::FriendGameInfo_t) == 0x18, "Size mismatch!");

} // namespace end def Steamworks

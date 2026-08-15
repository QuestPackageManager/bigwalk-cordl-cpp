#pragma once
// IWYU pragma private; include "Steamworks/GameConnectedChatLeave_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameConnectedChatLeave_t)
// Forward declare root types
namespace Steamworks {
struct GameConnectedChatLeave_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::GameConnectedChatLeave_t);
DEFINE_IL2CPP_CLASS(::Steamworks::GameConnectedChatLeave_t, "Steamworks", "GameConnectedChatLeave_t");
// Dependencies Steamworks.CSteamID
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.GameConnectedChatLeave_t
#pragma pack(push, 1)
struct CORDL_TYPE GameConnectedChatLeave_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameConnectedChatLeave_t() ;

// Ctor Parameters [CppParam { name: "m_steamIDClanChat", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }, CppParam { name: "m_steamIDUser", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }, CppParam { name: "m_bKicked", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_bDropped", ty: "bool", modifiers: "", def_value: None }]
constexpr GameConnectedChatLeave_t(::Steamworks::CSteamID  m_steamIDClanChat, ::Steamworks::CSteamID  m_steamIDUser, bool  m_bKicked, bool  m_bDropped) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16044};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x12};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x154)};

/// @brief Field m_steamIDClanChat, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_steamIDClanChat;

/// @brief Field m_steamIDUser, offset: 0x8, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_steamIDUser;

/// @brief Field m_bKicked, offset: 0x10, size: 0x1, def value: None
 bool  m_bKicked;

/// @brief Field m_bDropped, offset: 0x11, size: 0x1, def value: None
 bool  m_bDropped;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::GameConnectedChatLeave_t, m_steamIDClanChat) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GameConnectedChatLeave_t, m_steamIDUser) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GameConnectedChatLeave_t, m_bKicked) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GameConnectedChatLeave_t, m_bDropped) == 0x11, "Offset mismatch!");

static_assert(sizeof(::Steamworks::GameConnectedChatLeave_t) == 0x12, "Size mismatch!");

} // namespace end def Steamworks

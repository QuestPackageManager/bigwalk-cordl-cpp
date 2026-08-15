#pragma once
// IWYU pragma private; include "Steamworks/GameConnectedClanChatMsg_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameConnectedClanChatMsg_t)
// Forward declare root types
namespace Steamworks {
struct GameConnectedClanChatMsg_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::GameConnectedClanChatMsg_t);
DEFINE_IL2CPP_CLASS(::Steamworks::GameConnectedClanChatMsg_t, "Steamworks", "GameConnectedClanChatMsg_t");
// Dependencies Steamworks.CSteamID
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.GameConnectedClanChatMsg_t
#pragma pack(push, 4)
struct CORDL_TYPE GameConnectedClanChatMsg_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameConnectedClanChatMsg_t() ;

// Ctor Parameters [CppParam { name: "m_steamIDClanChat", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }, CppParam { name: "m_steamIDUser", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }, CppParam { name: "m_iMessageID", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GameConnectedClanChatMsg_t(::Steamworks::CSteamID  m_steamIDClanChat, ::Steamworks::CSteamID  m_steamIDUser, int32_t  m_iMessageID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16042};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x152)};

/// @brief Field m_steamIDClanChat, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_steamIDClanChat;

/// @brief Field m_steamIDUser, offset: 0x8, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_steamIDUser;

/// @brief Field m_iMessageID, offset: 0x10, size: 0x4, def value: None
 int32_t  m_iMessageID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::GameConnectedClanChatMsg_t, m_steamIDClanChat) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GameConnectedClanChatMsg_t, m_steamIDUser) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GameConnectedClanChatMsg_t, m_iMessageID) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Steamworks::GameConnectedClanChatMsg_t) == 0x14, "Size mismatch!");

} // namespace end def Steamworks

#pragma once
// IWYU pragma private; include "Steamworks/GameConnectedFriendChatMsg_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameConnectedFriendChatMsg_t)
// Forward declare root types
namespace Steamworks {
struct GameConnectedFriendChatMsg_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::GameConnectedFriendChatMsg_t);
DEFINE_IL2CPP_CLASS(::Steamworks::GameConnectedFriendChatMsg_t, "Steamworks", "GameConnectedFriendChatMsg_t");
// Dependencies Steamworks.CSteamID
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.GameConnectedFriendChatMsg_t
#pragma pack(push, 4)
struct CORDL_TYPE GameConnectedFriendChatMsg_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameConnectedFriendChatMsg_t() ;

// Ctor Parameters [CppParam { name: "m_steamIDUser", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }, CppParam { name: "m_iMessageID", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GameConnectedFriendChatMsg_t(::Steamworks::CSteamID  m_steamIDUser, int32_t  m_iMessageID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16047};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x157)};

/// @brief Field m_steamIDUser, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_steamIDUser;

/// @brief Field m_iMessageID, offset: 0x8, size: 0x4, def value: None
 int32_t  m_iMessageID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::GameConnectedFriendChatMsg_t, m_steamIDUser) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GameConnectedFriendChatMsg_t, m_iMessageID) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::GameConnectedFriendChatMsg_t) == 0xc, "Size mismatch!");

} // namespace end def Steamworks

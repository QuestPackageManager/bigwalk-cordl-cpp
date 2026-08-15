#pragma once
// IWYU pragma private; include "Steamworks/LobbyChatMsg_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LobbyChatMsg_t)
// Forward declare root types
namespace Steamworks {
struct LobbyChatMsg_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::LobbyChatMsg_t);
DEFINE_IL2CPP_CLASS(::Steamworks::LobbyChatMsg_t, "Steamworks", "LobbyChatMsg_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.LobbyChatMsg_t
#pragma pack(push, 8)
struct CORDL_TYPE LobbyChatMsg_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LobbyChatMsg_t() ;

// Ctor Parameters [CppParam { name: "m_ulSteamIDLobby", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_ulSteamIDUser", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_eChatEntryType", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_iChatID", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr LobbyChatMsg_t(uint64_t  m_ulSteamIDLobby, uint64_t  m_ulSteamIDUser, uint8_t  m_eChatEntryType, uint32_t  m_iChatID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16109};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x1fb)};

/// @brief Field m_ulSteamIDLobby, offset: 0x0, size: 0x8, def value: None
 uint64_t  m_ulSteamIDLobby;

/// @brief Field m_ulSteamIDUser, offset: 0x8, size: 0x8, def value: None
 uint64_t  m_ulSteamIDUser;

/// @brief Field m_eChatEntryType, offset: 0x10, size: 0x1, def value: None
 uint8_t  m_eChatEntryType;

/// @brief Field m_iChatID, offset: 0x14, size: 0x4, def value: None
 uint32_t  m_iChatID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::LobbyChatMsg_t, m_ulSteamIDLobby) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LobbyChatMsg_t, m_ulSteamIDUser) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LobbyChatMsg_t, m_eChatEntryType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LobbyChatMsg_t, m_iChatID) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Steamworks::LobbyChatMsg_t) == 0x18, "Size mismatch!");

} // namespace end def Steamworks

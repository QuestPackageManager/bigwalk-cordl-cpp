#pragma once
// IWYU pragma private; include "Steamworks/LobbyEnter_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LobbyEnter_t)
// Forward declare root types
namespace Steamworks {
struct LobbyEnter_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::LobbyEnter_t);
DEFINE_IL2CPP_CLASS(::Steamworks::LobbyEnter_t, "Steamworks", "LobbyEnter_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.LobbyEnter_t
#pragma pack(push, 8)
struct CORDL_TYPE LobbyEnter_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LobbyEnter_t() ;

// Ctor Parameters [CppParam { name: "m_ulSteamIDLobby", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_rgfChatPermissions", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_bLocked", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_EChatRoomEnterResponse", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr LobbyEnter_t(uint64_t  m_ulSteamIDLobby, uint32_t  m_rgfChatPermissions, bool  m_bLocked, uint32_t  m_EChatRoomEnterResponse) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16106};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x1f8)};

/// @brief Field m_ulSteamIDLobby, offset: 0x0, size: 0x8, def value: None
 uint64_t  m_ulSteamIDLobby;

/// @brief Field m_rgfChatPermissions, offset: 0x8, size: 0x4, def value: None
 uint32_t  m_rgfChatPermissions;

/// @brief Field m_bLocked, offset: 0xc, size: 0x1, def value: None
 bool  m_bLocked;

/// @brief Field m_EChatRoomEnterResponse, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_EChatRoomEnterResponse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::LobbyEnter_t, m_ulSteamIDLobby) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LobbyEnter_t, m_rgfChatPermissions) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LobbyEnter_t, m_bLocked) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LobbyEnter_t, m_EChatRoomEnterResponse) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Steamworks::LobbyEnter_t) == 0x18, "Size mismatch!");

} // namespace end def Steamworks

#pragma once
// IWYU pragma private; include "Steamworks/LobbyKicked_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LobbyKicked_t)
// Forward declare root types
namespace Steamworks {
struct LobbyKicked_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::LobbyKicked_t);
DEFINE_IL2CPP_CLASS(::Steamworks::LobbyKicked_t, "Steamworks", "LobbyKicked_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.LobbyKicked_t
#pragma pack(push, 8)
struct CORDL_TYPE LobbyKicked_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LobbyKicked_t() ;

// Ctor Parameters [CppParam { name: "m_ulSteamIDLobby", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_ulSteamIDAdmin", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_bKickedDueToDisconnect", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr LobbyKicked_t(uint64_t  m_ulSteamIDLobby, uint64_t  m_ulSteamIDAdmin, uint8_t  m_bKickedDueToDisconnect) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16112};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x200)};

/// @brief Field m_ulSteamIDLobby, offset: 0x0, size: 0x8, def value: None
 uint64_t  m_ulSteamIDLobby;

/// @brief Field m_ulSteamIDAdmin, offset: 0x8, size: 0x8, def value: None
 uint64_t  m_ulSteamIDAdmin;

/// @brief Field m_bKickedDueToDisconnect, offset: 0x10, size: 0x1, def value: None
 uint8_t  m_bKickedDueToDisconnect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::LobbyKicked_t, m_ulSteamIDLobby) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LobbyKicked_t, m_ulSteamIDAdmin) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LobbyKicked_t, m_bKickedDueToDisconnect) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Steamworks::LobbyKicked_t) == 0x18, "Size mismatch!");

} // namespace end def Steamworks

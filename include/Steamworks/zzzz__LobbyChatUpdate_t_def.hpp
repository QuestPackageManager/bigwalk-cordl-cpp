#pragma once
// IWYU pragma private; include "Steamworks/LobbyChatUpdate_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LobbyChatUpdate_t)
// Forward declare root types
namespace Steamworks {
struct LobbyChatUpdate_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::LobbyChatUpdate_t);
DEFINE_IL2CPP_CLASS(::Steamworks::LobbyChatUpdate_t, "Steamworks", "LobbyChatUpdate_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.LobbyChatUpdate_t
#pragma pack(push, 8)
struct CORDL_TYPE LobbyChatUpdate_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LobbyChatUpdate_t() ;

// Ctor Parameters [CppParam { name: "m_ulSteamIDLobby", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_ulSteamIDUserChanged", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_ulSteamIDMakingChange", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_rgfChatMemberStateChange", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr LobbyChatUpdate_t(uint64_t  m_ulSteamIDLobby, uint64_t  m_ulSteamIDUserChanged, uint64_t  m_ulSteamIDMakingChange, uint32_t  m_rgfChatMemberStateChange) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16108};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x1fa)};

/// @brief Field m_ulSteamIDLobby, offset: 0x0, size: 0x8, def value: None
 uint64_t  m_ulSteamIDLobby;

/// @brief Field m_ulSteamIDUserChanged, offset: 0x8, size: 0x8, def value: None
 uint64_t  m_ulSteamIDUserChanged;

/// @brief Field m_ulSteamIDMakingChange, offset: 0x10, size: 0x8, def value: None
 uint64_t  m_ulSteamIDMakingChange;

/// @brief Field m_rgfChatMemberStateChange, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_rgfChatMemberStateChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::LobbyChatUpdate_t, m_ulSteamIDLobby) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LobbyChatUpdate_t, m_ulSteamIDUserChanged) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LobbyChatUpdate_t, m_ulSteamIDMakingChange) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::LobbyChatUpdate_t, m_rgfChatMemberStateChange) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Steamworks::LobbyChatUpdate_t) == 0x20, "Size mismatch!");

} // namespace end def Steamworks

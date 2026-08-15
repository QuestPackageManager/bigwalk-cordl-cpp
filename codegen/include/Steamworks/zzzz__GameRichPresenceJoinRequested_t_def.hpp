#pragma once
// IWYU pragma private; include "Steamworks/GameRichPresenceJoinRequested_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameRichPresenceJoinRequested_t)
// Forward declare root types
namespace Steamworks {
struct GameRichPresenceJoinRequested_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::GameRichPresenceJoinRequested_t);
DEFINE_IL2CPP_CLASS(::Steamworks::GameRichPresenceJoinRequested_t, "Steamworks", "GameRichPresenceJoinRequested_t");
// Dependencies Steamworks.CSteamID
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.GameRichPresenceJoinRequested_t
#pragma pack(push, 8)
struct CORDL_TYPE GameRichPresenceJoinRequested_t {
public:
// Declarations
 __declspec(property(get=get_m_rgchConnect, put=set_m_rgchConnect)) ::StringW  m_rgchConnect;

/// @brief Method get_m_rgchConnect, addr 0x18054f030, size 0x80, virtual false, abstract: false, final false
inline ::StringW get_m_rgchConnect() ;

/// @brief Method set_m_rgchConnect, addr 0x18054f680, size 0x1d0, virtual false, abstract: false, final false
inline void set_m_rgchConnect(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GameRichPresenceJoinRequested_t() ;

// Ctor Parameters [CppParam { name: "m_steamIDFriend", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }, CppParam { name: "m_rgchConnect_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr GameRichPresenceJoinRequested_t(::Steamworks::CSteamID  m_steamIDFriend, ::ArrayW<uint8_t>  m_rgchConnect_) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16041};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x151)};

/// @brief Field m_steamIDFriend, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_steamIDFriend;

/// @brief Field m_rgchConnect_, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_rgchConnect_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::GameRichPresenceJoinRequested_t, m_steamIDFriend) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GameRichPresenceJoinRequested_t, m_rgchConnect_) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::GameRichPresenceJoinRequested_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks

#pragma once
// IWYU pragma private; include "Steamworks/FriendRichPresenceUpdate_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FriendRichPresenceUpdate_t)
// Forward declare root types
namespace Steamworks {
struct FriendRichPresenceUpdate_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::FriendRichPresenceUpdate_t);
DEFINE_IL2CPP_CLASS(::Steamworks::FriendRichPresenceUpdate_t, "Steamworks", "FriendRichPresenceUpdate_t");
// Dependencies Steamworks.AppId_t, Steamworks.CSteamID
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.FriendRichPresenceUpdate_t
#pragma pack(push, 4)
struct CORDL_TYPE FriendRichPresenceUpdate_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FriendRichPresenceUpdate_t() ;

// Ctor Parameters [CppParam { name: "m_steamIDFriend", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }, CppParam { name: "m_nAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: None }]
constexpr FriendRichPresenceUpdate_t(::Steamworks::CSteamID  m_steamIDFriend, ::Steamworks::AppId_t  m_nAppID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16040};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x150)};

/// @brief Field m_steamIDFriend, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_steamIDFriend;

/// @brief Field m_nAppID, offset: 0x8, size: 0x4, def value: None
 ::Steamworks::AppId_t  m_nAppID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::FriendRichPresenceUpdate_t, m_steamIDFriend) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::FriendRichPresenceUpdate_t, m_nAppID) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::FriendRichPresenceUpdate_t) == 0xc, "Size mismatch!");

} // namespace end def Steamworks

#pragma once
// IWYU pragma private; include "Steamworks/RequestPlayersForGameResultCallback_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__EResult_def.hpp"
#include "Steamworks/zzzz__PlayerAcceptState_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RequestPlayersForGameResultCallback_t)
// Forward declare root types
namespace Steamworks {
struct RequestPlayersForGameResultCallback_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::RequestPlayersForGameResultCallback_t);
DEFINE_IL2CPP_CLASS(::Steamworks::RequestPlayersForGameResultCallback_t, "Steamworks", "RequestPlayersForGameResultCallback_t");
// Dependencies Steamworks.CSteamID, Steamworks.EResult, Steamworks.PlayerAcceptState_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.RequestPlayersForGameResultCallback_t
#pragma pack(push, 8)
struct CORDL_TYPE RequestPlayersForGameResultCallback_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RequestPlayersForGameResultCallback_t() ;

// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_ullSearchID", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_SteamIDPlayerFound", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }, CppParam { name: "m_SteamIDLobby", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }, CppParam { name: "m_ePlayerAcceptState", ty: "::Steamworks::PlayerAcceptState_t", modifiers: "", def_value: None }, CppParam { name: "m_nPlayerIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_nTotalPlayersFound", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_nTotalPlayersAcceptedGame", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_nSuggestedTeamIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ullUniqueGameID", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr RequestPlayersForGameResultCallback_t(::Steamworks::EResult  m_eResult, uint64_t  m_ullSearchID, ::Steamworks::CSteamID  m_SteamIDPlayerFound, ::Steamworks::CSteamID  m_SteamIDLobby, ::Steamworks::PlayerAcceptState_t  m_ePlayerAcceptState, int32_t  m_nPlayerIndex, int32_t  m_nTotalPlayersFound, int32_t  m_nTotalPlayersAcceptedGame, int32_t  m_nSuggestedTeamIndex, uint64_t  m_ullUniqueGameID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16118};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x145c)};

/// @brief Field m_eResult, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field m_ullSearchID, offset: 0x8, size: 0x8, def value: None
 uint64_t  m_ullSearchID;

/// @brief Field m_SteamIDPlayerFound, offset: 0x10, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_SteamIDPlayerFound;

/// @brief Field m_SteamIDLobby, offset: 0x18, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_SteamIDLobby;

/// @brief Field m_ePlayerAcceptState, offset: 0x20, size: 0x4, def value: None
 ::Steamworks::PlayerAcceptState_t  m_ePlayerAcceptState;

/// @brief Field m_nPlayerIndex, offset: 0x24, size: 0x4, def value: None
 int32_t  m_nPlayerIndex;

/// @brief Field m_nTotalPlayersFound, offset: 0x28, size: 0x4, def value: None
 int32_t  m_nTotalPlayersFound;

/// @brief Field m_nTotalPlayersAcceptedGame, offset: 0x2c, size: 0x4, def value: None
 int32_t  m_nTotalPlayersAcceptedGame;

/// @brief Field m_nSuggestedTeamIndex, offset: 0x30, size: 0x4, def value: None
 int32_t  m_nSuggestedTeamIndex;

/// @brief Field m_ullUniqueGameID, offset: 0x38, size: 0x8, def value: None
 uint64_t  m_ullUniqueGameID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::RequestPlayersForGameResultCallback_t, m_eResult) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RequestPlayersForGameResultCallback_t, m_ullSearchID) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RequestPlayersForGameResultCallback_t, m_SteamIDPlayerFound) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RequestPlayersForGameResultCallback_t, m_SteamIDLobby) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RequestPlayersForGameResultCallback_t, m_ePlayerAcceptState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RequestPlayersForGameResultCallback_t, m_nPlayerIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RequestPlayersForGameResultCallback_t, m_nTotalPlayersFound) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RequestPlayersForGameResultCallback_t, m_nTotalPlayersAcceptedGame) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RequestPlayersForGameResultCallback_t, m_nSuggestedTeamIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RequestPlayersForGameResultCallback_t, m_ullUniqueGameID) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Steamworks::RequestPlayersForGameResultCallback_t) == 0x40, "Size mismatch!");

} // namespace end def Steamworks

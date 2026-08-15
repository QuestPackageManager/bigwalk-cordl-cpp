#pragma once
// IWYU pragma private; include "Steamworks/SearchForGameResultCallback_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__EResult_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SearchForGameResultCallback_t)
// Forward declare root types
namespace Steamworks {
struct SearchForGameResultCallback_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SearchForGameResultCallback_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SearchForGameResultCallback_t, "Steamworks", "SearchForGameResultCallback_t");
// Dependencies Steamworks.CSteamID, Steamworks.EResult
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SearchForGameResultCallback_t
#pragma pack(push, 8)
struct CORDL_TYPE SearchForGameResultCallback_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SearchForGameResultCallback_t() ;

// Ctor Parameters [CppParam { name: "m_ullSearchID", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_nCountPlayersInGame", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_nCountAcceptedGame", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_steamIDHost", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }, CppParam { name: "m_bFinalCallback", ty: "bool", modifiers: "", def_value: None }]
constexpr SearchForGameResultCallback_t(uint64_t  m_ullSearchID, ::Steamworks::EResult  m_eResult, int32_t  m_nCountPlayersInGame, int32_t  m_nCountAcceptedGame, ::Steamworks::CSteamID  m_steamIDHost, bool  m_bFinalCallback) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16116};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x1452)};

/// @brief Field m_ullSearchID, offset: 0x0, size: 0x8, def value: None
 uint64_t  m_ullSearchID;

/// @brief Field m_eResult, offset: 0x8, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field m_nCountPlayersInGame, offset: 0xc, size: 0x4, def value: None
 int32_t  m_nCountPlayersInGame;

/// @brief Field m_nCountAcceptedGame, offset: 0x10, size: 0x4, def value: None
 int32_t  m_nCountAcceptedGame;

/// @brief Field m_steamIDHost, offset: 0x14, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_steamIDHost;

/// @brief Field m_bFinalCallback, offset: 0x1c, size: 0x1, def value: None
 bool  m_bFinalCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SearchForGameResultCallback_t, m_ullSearchID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SearchForGameResultCallback_t, m_eResult) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SearchForGameResultCallback_t, m_nCountPlayersInGame) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SearchForGameResultCallback_t, m_nCountAcceptedGame) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SearchForGameResultCallback_t, m_steamIDHost) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SearchForGameResultCallback_t, m_bFinalCallback) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SearchForGameResultCallback_t) == 0x20, "Size mismatch!");

} // namespace end def Steamworks

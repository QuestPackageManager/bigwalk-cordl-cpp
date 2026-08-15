#pragma once
// IWYU pragma private; include "Steamworks/SearchForGameProgressCallback_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__EResult_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SearchForGameProgressCallback_t)
// Forward declare root types
namespace Steamworks {
struct SearchForGameProgressCallback_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SearchForGameProgressCallback_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SearchForGameProgressCallback_t, "Steamworks", "SearchForGameProgressCallback_t");
// Dependencies Steamworks.CSteamID, Steamworks.EResult
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SearchForGameProgressCallback_t
#pragma pack(push, 8)
struct CORDL_TYPE SearchForGameProgressCallback_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SearchForGameProgressCallback_t() ;

// Ctor Parameters [CppParam { name: "m_ullSearchID", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_lobbyID", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }, CppParam { name: "m_steamIDEndedSearch", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }, CppParam { name: "m_nSecondsRemainingEstimate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_cPlayersSearching", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SearchForGameProgressCallback_t(uint64_t  m_ullSearchID, ::Steamworks::EResult  m_eResult, ::Steamworks::CSteamID  m_lobbyID, ::Steamworks::CSteamID  m_steamIDEndedSearch, int32_t  m_nSecondsRemainingEstimate, int32_t  m_cPlayersSearching) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16115};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x1451)};

/// @brief Field m_ullSearchID, offset: 0x0, size: 0x8, def value: None
 uint64_t  m_ullSearchID;

/// @brief Field m_eResult, offset: 0x8, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field m_lobbyID, offset: 0xc, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_lobbyID;

/// @brief Field m_steamIDEndedSearch, offset: 0x14, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_steamIDEndedSearch;

/// @brief Field m_nSecondsRemainingEstimate, offset: 0x1c, size: 0x4, def value: None
 int32_t  m_nSecondsRemainingEstimate;

/// @brief Field m_cPlayersSearching, offset: 0x20, size: 0x4, def value: None
 int32_t  m_cPlayersSearching;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SearchForGameProgressCallback_t, m_ullSearchID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SearchForGameProgressCallback_t, m_eResult) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SearchForGameProgressCallback_t, m_lobbyID) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SearchForGameProgressCallback_t, m_steamIDEndedSearch) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SearchForGameProgressCallback_t, m_nSecondsRemainingEstimate) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SearchForGameProgressCallback_t, m_cPlayersSearching) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SearchForGameProgressCallback_t) == 0x28, "Size mismatch!");

} // namespace end def Steamworks

#pragma once
// IWYU pragma private; include "Steamworks/SteamGameSearch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamGameSearch)
namespace Steamworks {
struct CSteamID;
}
namespace Steamworks {
struct EGameSearchErrorCode_t;
}
namespace Steamworks {
struct EPlayerResult_t;
}
// Forward declare root types
namespace Steamworks {
class SteamGameSearch;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamGameSearch*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamGameSearch*, "Steamworks", "SteamGameSearch");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamGameSearch
class CORDL_TYPE SteamGameSearch : public ::System::Object {
public:
// Declarations
/// @brief Method AcceptGame, addr 0x1805ab790, size 0x30, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t AcceptGame() ;

/// @brief Method AddGameSearchParams, addr 0x1805ab7c0, size 0x170, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t AddGameSearchParams(::StringW  pchKeyToFind, ::StringW  pchValuesToFind) ;

/// @brief Method CancelRequestPlayersForGame, addr 0x1805ab930, size 0x30, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t CancelRequestPlayersForGame() ;

/// @brief Method DeclineGame, addr 0x1805ab960, size 0x30, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t DeclineGame() ;

/// @brief Method EndGame, addr 0x1805ab9c0, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t EndGame(uint64_t  ullUniqueGameID) ;

/// @brief Method EndGameSearch, addr 0x1805ab990, size 0x30, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t EndGameSearch() ;

/// @brief Method HostConfirmGameStart, addr 0x1805aba00, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t HostConfirmGameStart(uint64_t  ullUniqueGameID) ;

/// @brief Method RequestPlayersForGame, addr 0x1805aba40, size 0x60, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t RequestPlayersForGame(int32_t  nPlayerMin, int32_t  nPlayerMax, int32_t  nMaxTeamSize) ;

/// @brief Method RetrieveConnectionDetails, addr 0x1805abaa0, size 0xb0, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t RetrieveConnectionDetails(::Steamworks::CSteamID  steamIDHost, ::by_ref<::StringW>  pchConnectionDetails, int32_t  cubConnectionDetails) ;

/// @brief Method SearchForGameSolo, addr 0x1805abb50, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t SearchForGameSolo(int32_t  nPlayerMin, int32_t  nPlayerMax) ;

/// @brief Method SearchForGameWithLobby, addr 0x1805abb90, size 0x60, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t SearchForGameWithLobby(::Steamworks::CSteamID  steamIDLobby, int32_t  nPlayerMin, int32_t  nPlayerMax) ;

/// @brief Method SetConnectionDetails, addr 0x1805abbf0, size 0xf0, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t SetConnectionDetails(::StringW  pchConnectionDetails, int32_t  cubConnectionDetails) ;

/// @brief Method SetGameHostParams, addr 0x1805abce0, size 0x170, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t SetGameHostParams(::StringW  pchKey, ::StringW  pchValue) ;

/// @brief Method SubmitPlayerResult, addr 0x1805abe50, size 0x60, virtual false, abstract: false, final false
static inline ::Steamworks::EGameSearchErrorCode_t SubmitPlayerResult(uint64_t  ullUniqueGameID, ::Steamworks::CSteamID  steamIDPlayer, ::Steamworks::EPlayerResult_t  EPlayerResult) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamGameSearch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamGameSearch", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamGameSearch(SteamGameSearch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamGameSearch", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamGameSearch(SteamGameSearch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16380};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamGameSearch) == 0x10, "Size mismatch!");

} // namespace end def Steamworks

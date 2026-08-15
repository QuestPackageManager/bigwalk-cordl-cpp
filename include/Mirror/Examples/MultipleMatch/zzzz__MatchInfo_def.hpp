#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/MatchInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MatchInfo)
// Forward declare root types
namespace Mirror::Examples::MultipleMatch {
struct MatchInfo;
}
// Write type traits
MARK_VAL_T(::Mirror::Examples::MultipleMatch::MatchInfo);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleMatch::MatchInfo, "Mirror.Examples.MultipleMatch", "MatchInfo");
// Dependencies System.Guid
namespace Mirror::Examples::MultipleMatch {
// Is value type: true
// CS Name: Mirror.Examples.MultipleMatch.MatchInfo
struct CORDL_TYPE MatchInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MatchInfo() ;

// Ctor Parameters [CppParam { name: "matchId", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "players", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "maxPlayers", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr MatchInfo(::System::Guid  matchId, uint8_t  players, uint8_t  maxPlayers) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19304};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field matchId, offset: 0x0, size: 0x10, def value: None
 ::System::Guid  matchId;

/// @brief Field players, offset: 0x10, size: 0x1, def value: None
 uint8_t  players;

/// @brief Field maxPlayers, offset: 0x11, size: 0x1, def value: None
 uint8_t  maxPlayers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchInfo, matchId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchInfo, players) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchInfo, maxPlayers) == 0x11, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleMatch::MatchInfo) == 0x14, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleMatch

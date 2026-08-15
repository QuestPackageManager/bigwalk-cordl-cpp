#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/MatchPlayerData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/Examples/MultipleMatch/zzzz__CellValue_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MatchPlayerData)
// Forward declare root types
namespace Mirror::Examples::MultipleMatch {
struct MatchPlayerData;
}
// Write type traits
MARK_VAL_T(::Mirror::Examples::MultipleMatch::MatchPlayerData);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleMatch::MatchPlayerData, "Mirror.Examples.MultipleMatch", "MatchPlayerData");
// Dependencies Mirror.Examples.MultipleMatch.CellValue
namespace Mirror::Examples::MultipleMatch {
// Is value type: true
// CS Name: Mirror.Examples.MultipleMatch.MatchPlayerData
struct CORDL_TYPE MatchPlayerData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MatchPlayerData() ;

// Ctor Parameters [CppParam { name: "playerIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "wins", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "currentScore", ty: "::Mirror::Examples::MultipleMatch::CellValue", modifiers: "", def_value: None }]
constexpr MatchPlayerData(int32_t  playerIndex, int32_t  wins, ::Mirror::Examples::MultipleMatch::CellValue  currentScore) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19306};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field playerIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  playerIndex;

/// @brief Field wins, offset: 0x4, size: 0x4, def value: None
 int32_t  wins;

/// @brief Field currentScore, offset: 0x8, size: 0x2, def value: None
 ::Mirror::Examples::MultipleMatch::CellValue  currentScore;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchPlayerData, playerIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchPlayerData, wins) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::MatchPlayerData, currentScore) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleMatch::MatchPlayerData) == 0xc, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleMatch

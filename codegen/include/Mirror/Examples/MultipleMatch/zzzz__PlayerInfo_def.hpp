#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/PlayerInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerInfo)
// Forward declare root types
namespace Mirror::Examples::MultipleMatch {
struct PlayerInfo;
}
// Write type traits
MARK_VAL_T(::Mirror::Examples::MultipleMatch::PlayerInfo);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleMatch::PlayerInfo, "Mirror.Examples.MultipleMatch", "PlayerInfo");
// Dependencies System.Guid
namespace Mirror::Examples::MultipleMatch {
// Is value type: true
// CS Name: Mirror.Examples.MultipleMatch.PlayerInfo
struct CORDL_TYPE PlayerInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PlayerInfo() ;

// Ctor Parameters [CppParam { name: "playerIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ready", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "matchId", ty: "::System::Guid", modifiers: "", def_value: None }]
constexpr PlayerInfo(int32_t  playerIndex, bool  ready, ::System::Guid  matchId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19305};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field playerIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  playerIndex;

/// @brief Field ready, offset: 0x4, size: 0x1, def value: None
 bool  ready;

/// @brief Field matchId, offset: 0x8, size: 0x10, def value: None
 ::System::Guid  matchId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleMatch::PlayerInfo, playerIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::PlayerInfo, ready) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::PlayerInfo, matchId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleMatch::PlayerInfo) == 0x18, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleMatch

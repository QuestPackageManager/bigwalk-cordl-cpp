#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/ClientMatchMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/Examples/MultipleMatch/zzzz__ClientMatchOperation_def.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__MatchInfo_def.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__PlayerInfo_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ClientMatchMessage)
namespace Mirror::Examples::MultipleMatch {
struct MatchInfo;
}
namespace Mirror::Examples::MultipleMatch {
struct PlayerInfo;
}
namespace Mirror {
class NetworkMessage;
}
// Forward declare root types
namespace Mirror::Examples::MultipleMatch {
struct ClientMatchMessage;
}
// Write type traits
MARK_VAL_T(::Mirror::Examples::MultipleMatch::ClientMatchMessage);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleMatch::ClientMatchMessage, "Mirror.Examples.MultipleMatch", "ClientMatchMessage");
// Dependencies Mirror.Examples.MultipleMatch.ClientMatchOperation, Mirror.Examples.MultipleMatch.MatchInfo, Mirror.Examples.MultipleMatch.PlayerInfo, System.Guid
namespace Mirror::Examples::MultipleMatch {
// Is value type: true
// CS Name: Mirror.Examples.MultipleMatch.ClientMatchMessage
struct CORDL_TYPE ClientMatchMessage {
public:
// Declarations
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr operator  ::Mirror::NetworkMessage*() ;

/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* i___Mirror__NetworkMessage() ;

// Ctor Parameters []
// @brief default ctor
constexpr ClientMatchMessage() ;

// Ctor Parameters [CppParam { name: "clientMatchOperation", ty: "::Mirror::Examples::MultipleMatch::ClientMatchOperation", modifiers: "", def_value: None }, CppParam { name: "matchId", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "matchInfos", ty: "::ArrayW<::Mirror::Examples::MultipleMatch::MatchInfo>", modifiers: "", def_value: None }, CppParam { name: "playerInfos", ty: "::ArrayW<::Mirror::Examples::MultipleMatch::PlayerInfo>", modifiers: "", def_value: None }]
constexpr ClientMatchMessage(::Mirror::Examples::MultipleMatch::ClientMatchOperation  clientMatchOperation, ::System::Guid  matchId, ::ArrayW<::Mirror::Examples::MultipleMatch::MatchInfo>  matchInfos, ::ArrayW<::Mirror::Examples::MultipleMatch::PlayerInfo>  playerInfos) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19303};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field clientMatchOperation, offset: 0x0, size: 0x1, def value: None
 ::Mirror::Examples::MultipleMatch::ClientMatchOperation  clientMatchOperation;

/// @brief Field matchId, offset: 0x4, size: 0x10, def value: None
 ::System::Guid  matchId;

/// @brief Field matchInfos, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Mirror::Examples::MultipleMatch::MatchInfo>  matchInfos;

/// @brief Field playerInfos, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Mirror::Examples::MultipleMatch::PlayerInfo>  playerInfos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleMatch::ClientMatchMessage, clientMatchOperation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::ClientMatchMessage, matchId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::ClientMatchMessage, matchInfos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::ClientMatchMessage, playerInfos) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleMatch::ClientMatchMessage) == 0x28, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleMatch

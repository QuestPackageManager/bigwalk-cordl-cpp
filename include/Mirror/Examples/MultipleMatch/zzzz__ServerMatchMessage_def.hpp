#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/ServerMatchMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/Examples/MultipleMatch/zzzz__ServerMatchOperation_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ServerMatchMessage)
namespace Mirror {
class NetworkMessage;
}
// Forward declare root types
namespace Mirror::Examples::MultipleMatch {
struct ServerMatchMessage;
}
// Write type traits
MARK_VAL_T(::Mirror::Examples::MultipleMatch::ServerMatchMessage);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::MultipleMatch::ServerMatchMessage, "Mirror.Examples.MultipleMatch", "ServerMatchMessage");
// Dependencies Mirror.Examples.MultipleMatch.ServerMatchOperation, System.Guid
namespace Mirror::Examples::MultipleMatch {
// Is value type: true
// CS Name: Mirror.Examples.MultipleMatch.ServerMatchMessage
struct CORDL_TYPE ServerMatchMessage {
public:
// Declarations
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr operator  ::Mirror::NetworkMessage*() ;

/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* i___Mirror__NetworkMessage() ;

// Ctor Parameters []
// @brief default ctor
constexpr ServerMatchMessage() ;

// Ctor Parameters [CppParam { name: "serverMatchOperation", ty: "::Mirror::Examples::MultipleMatch::ServerMatchOperation", modifiers: "", def_value: None }, CppParam { name: "matchId", ty: "::System::Guid", modifiers: "", def_value: None }]
constexpr ServerMatchMessage(::Mirror::Examples::MultipleMatch::ServerMatchOperation  serverMatchOperation, ::System::Guid  matchId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19302};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field serverMatchOperation, offset: 0x0, size: 0x1, def value: None
 ::Mirror::Examples::MultipleMatch::ServerMatchOperation  serverMatchOperation;

/// @brief Field matchId, offset: 0x4, size: 0x10, def value: None
 ::System::Guid  matchId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::MultipleMatch::ServerMatchMessage, serverMatchOperation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::MultipleMatch::ServerMatchMessage, matchId) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::MultipleMatch::ServerMatchMessage) == 0x14, "Size mismatch!");

} // namespace end def Mirror::Examples::MultipleMatch

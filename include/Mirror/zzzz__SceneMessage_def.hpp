#pragma once
// IWYU pragma private; include "Mirror/SceneMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__SceneOperation_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SceneMessage)
namespace Mirror {
class NetworkMessage;
}
// Forward declare root types
namespace Mirror {
struct SceneMessage;
}
// Write type traits
MARK_VAL_T(::Mirror::SceneMessage);
DEFINE_IL2CPP_CLASS(::Mirror::SceneMessage, "Mirror", "SceneMessage");
// Dependencies Mirror.SceneOperation
namespace Mirror {
// Is value type: true
// CS Name: Mirror.SceneMessage
struct CORDL_TYPE SceneMessage {
public:
// Declarations
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr operator  ::Mirror::NetworkMessage*() ;

/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* i___Mirror__NetworkMessage() ;

// Ctor Parameters []
// @brief default ctor
constexpr SceneMessage() ;

// Ctor Parameters [CppParam { name: "sceneName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sceneOperation", ty: "::Mirror::SceneOperation", modifiers: "", def_value: None }, CppParam { name: "customHandling", ty: "bool", modifiers: "", def_value: None }]
constexpr SceneMessage(::StringW  sceneName, ::Mirror::SceneOperation  sceneOperation, bool  customHandling) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18281};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field sceneName, offset: 0x0, size: 0x8, def value: None
 ::StringW  sceneName;

/// @brief Field sceneOperation, offset: 0x8, size: 0x1, def value: None
 ::Mirror::SceneOperation  sceneOperation;

/// @brief Field customHandling, offset: 0x9, size: 0x1, def value: None
 bool  customHandling;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SceneMessage, sceneName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::SceneMessage, sceneOperation) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mirror::SceneMessage, customHandling) == 0x9, "Offset mismatch!");

static_assert(sizeof(::Mirror::SceneMessage) == 0x10, "Size mismatch!");

} // namespace end def Mirror

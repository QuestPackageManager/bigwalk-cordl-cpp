#pragma once
// IWYU pragma private; include "Mirror/SpawnMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpawnMessage)
namespace Mirror {
class NetworkMessage;
}
// Forward declare root types
namespace Mirror {
struct SpawnMessage;
}
// Write type traits
MARK_VAL_T(::Mirror::SpawnMessage);
DEFINE_IL2CPP_CLASS(::Mirror::SpawnMessage, "Mirror", "SpawnMessage");
// Dependencies System.ArraySegment`1<T>, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Mirror {
// Is value type: true
// CS Name: Mirror.SpawnMessage
struct CORDL_TYPE SpawnMessage {
public:
// Declarations
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr operator  ::Mirror::NetworkMessage*() ;

/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* i___Mirror__NetworkMessage() ;

// Ctor Parameters []
// @brief default ctor
constexpr SpawnMessage() ;

// Ctor Parameters [CppParam { name: "netId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "isLocalPlayer", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isOwner", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "sceneId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "assetId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "payload", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: None }]
constexpr SpawnMessage(uint32_t  netId, bool  isLocalPlayer, bool  isOwner, uint64_t  sceneId, uint32_t  assetId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale, ::System::ArraySegment_1<uint8_t>  payload) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18286};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field netId, offset: 0x0, size: 0x4, def value: None
 uint32_t  netId;

/// @brief Field isLocalPlayer, offset: 0x4, size: 0x1, def value: None
 bool  isLocalPlayer;

/// @brief Field isOwner, offset: 0x5, size: 0x1, def value: None
 bool  isOwner;

/// @brief Field sceneId, offset: 0x8, size: 0x8, def value: None
 uint64_t  sceneId;

/// @brief Field assetId, offset: 0x10, size: 0x4, def value: None
 uint32_t  assetId;

/// @brief Field position, offset: 0x14, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field rotation, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Quaternion  rotation;

/// @brief Field scale, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  scale;

/// @brief Field payload, offset: 0x40, size: 0x10, def value: None
 ::System::ArraySegment_1<uint8_t>  payload;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SpawnMessage, netId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::SpawnMessage, isLocalPlayer) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Mirror::SpawnMessage, isOwner) == 0x5, "Offset mismatch!");

static_assert(offsetof(::Mirror::SpawnMessage, sceneId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mirror::SpawnMessage, assetId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::SpawnMessage, position) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Mirror::SpawnMessage, rotation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::SpawnMessage, scale) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::SpawnMessage, payload) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Mirror::SpawnMessage) == 0x50, "Size mismatch!");

} // namespace end def Mirror

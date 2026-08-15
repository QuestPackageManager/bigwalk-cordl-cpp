#pragma once
// IWYU pragma private; include "GlobalNamespace/TextChatMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerLookSet_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TextChatMessage)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
struct PlayerLookSet_LookColor;
}
namespace GlobalNamespace {
class TextChatSource;
}
// Forward declare root types
namespace GlobalNamespace {
struct TextChatMessage;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TextChatMessage);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextChatMessage, "", "TextChatMessage");
// Dependencies PlayerLookSet::LookColor
namespace GlobalNamespace {
// Is value type: true
// CS Name: TextChatMessage
struct CORDL_TYPE TextChatMessage {
public:
// Declarations
/// @brief Method RefreshMessageWithTags, addr 0x180456bc0, size 0x60, virtual false, abstract: false, final false
inline void RefreshMessageWithTags(::GlobalNamespace::TextChatSource*  textChatSource) ;

/// @brief Method WrapInTags, addr 0x180456c20, size 0x190, virtual false, abstract: false, final false
static inline ::StringW WrapInTags(::StringW  message, ::GlobalNamespace::PlayerLookSet_LookColor  lookColor, ::GlobalNamespace::TextChatSource*  outputSource) ;

/// @brief Method .ctor, addr 0x180456db0, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::GlobalNamespace::PlayerCharacter*  playerCharacter, ::GlobalNamespace::PlayerLookSet_LookColor  lookColor, float_t  timeCreated, bool  isInaudible) ;

// Ctor Parameters []
// @brief default ctor
constexpr TextChatMessage() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "messageWithTags", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "lookColor", ty: "::GlobalNamespace::PlayerLookSet_LookColor", modifiers: "", def_value: None }, CppParam { name: "timeCreated", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "hasBeenBroadcast", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "sendingPlayer", ty: "::UnityW<::GlobalNamespace::PlayerCharacter>", modifiers: "", def_value: None }, CppParam { name: "isInaudible", ty: "bool", modifiers: "", def_value: None }]
constexpr TextChatMessage(::StringW  message, ::StringW  messageWithTags, ::GlobalNamespace::PlayerLookSet_LookColor  lookColor, float_t  timeCreated, bool  hasBeenBroadcast, ::UnityW<::GlobalNamespace::PlayerCharacter>  sendingPlayer, bool  isInaudible) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5330};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field message, offset: 0x0, size: 0x8, def value: None
 ::StringW  message;

/// @brief Field messageWithTags, offset: 0x8, size: 0x8, def value: None
 ::StringW  messageWithTags;

/// @brief Field lookColor, offset: 0x10, size: 0x18, def value: None
 ::GlobalNamespace::PlayerLookSet_LookColor  lookColor;

/// @brief Field timeCreated, offset: 0x28, size: 0x4, def value: None
 float_t  timeCreated;

/// @brief Field hasBeenBroadcast, offset: 0x2c, size: 0x1, def value: None
 bool  hasBeenBroadcast;

/// @brief Field sendingPlayer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  sendingPlayer;

/// @brief Field isInaudible, offset: 0x38, size: 0x1, def value: None
 bool  isInaudible;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextChatMessage, message) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatMessage, messageWithTags) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatMessage, lookColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatMessage, timeCreated) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatMessage, hasBeenBroadcast) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatMessage, sendingPlayer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatMessage, isInaudible) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextChatMessage) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace

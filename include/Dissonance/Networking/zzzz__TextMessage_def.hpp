#pragma once
// IWYU pragma private; include "Dissonance/Networking/TextMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/zzzz__ChannelType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TextMessage)
namespace Dissonance {
struct ChannelType;
}
// Forward declare root types
namespace Dissonance::Networking {
struct TextMessage;
}
// Write type traits
MARK_VAL_T(::Dissonance::Networking::TextMessage);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::TextMessage, "Dissonance.Networking", "TextMessage");
// Dependencies Dissonance.ChannelType
namespace Dissonance::Networking {
// Is value type: true
// CS Name: Dissonance.Networking.TextMessage
struct CORDL_TYPE TextMessage {
public:
// Declarations
/// @brief Method .ctor, addr 0x1805eb730, size 0x190, virtual false, abstract: false, final false
inline void _ctor(::StringW  sender, ::Dissonance::ChannelType  recipientType, ::StringW  recipient, ::StringW  message) ;

// Ctor Parameters []
// @brief default ctor
constexpr TextMessage() ;

// Ctor Parameters [CppParam { name: "Sender", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "RecipientType", ty: "::Dissonance::ChannelType", modifiers: "", def_value: None }, CppParam { name: "Recipient", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: None }]
constexpr TextMessage(::StringW  Sender, ::Dissonance::ChannelType  RecipientType, ::StringW  Recipient, ::StringW  Message) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16879};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Sender, offset: 0x0, size: 0x8, def value: None
 ::StringW  Sender;

/// @brief Field RecipientType, offset: 0x8, size: 0x4, def value: None
 ::Dissonance::ChannelType  RecipientType;

/// @brief Field Recipient, offset: 0x10, size: 0x8, def value: None
 ::StringW  Recipient;

/// @brief Field Message, offset: 0x18, size: 0x8, def value: None
 ::StringW  Message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Networking::TextMessage, Sender) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::TextMessage, RecipientType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::TextMessage, Recipient) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::TextMessage, Message) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Networking::TextMessage) == 0x20, "Size mismatch!");

} // namespace end def Dissonance::Networking

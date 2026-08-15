#pragma once
// IWYU pragma private; include "Dissonance/Networking/TextPacket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/zzzz__ChannelType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextPacket)
namespace Dissonance {
struct ChannelType;
}
// Forward declare root types
namespace Dissonance::Networking {
struct TextPacket;
}
// Write type traits
MARK_VAL_T(::Dissonance::Networking::TextPacket);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::TextPacket, "Dissonance.Networking", "TextPacket");
// Dependencies Dissonance.ChannelType
namespace Dissonance::Networking {
// Is value type: true
// CS Name: Dissonance.Networking.TextPacket
struct CORDL_TYPE TextPacket {
public:
// Declarations
/// @brief Method .ctor, addr 0x1805eb8c0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(uint16_t  sender, ::Dissonance::ChannelType  recipientType, uint16_t  recipient, ::StringW  text) ;

// Ctor Parameters []
// @brief default ctor
constexpr TextPacket() ;

// Ctor Parameters [CppParam { name: "Sender", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "RecipientType", ty: "::Dissonance::ChannelType", modifiers: "", def_value: None }, CppParam { name: "Recipient", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "Text", ty: "::StringW", modifiers: "", def_value: None }]
constexpr TextPacket(uint16_t  Sender, ::Dissonance::ChannelType  RecipientType, uint16_t  Recipient, ::StringW  Text) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16892};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Sender, offset: 0x0, size: 0x2, def value: None
 uint16_t  Sender;

/// @brief Field RecipientType, offset: 0x4, size: 0x4, def value: None
 ::Dissonance::ChannelType  RecipientType;

/// @brief Field Recipient, offset: 0x8, size: 0x2, def value: None
 uint16_t  Recipient;

/// @brief Field Text, offset: 0x10, size: 0x8, def value: None
 ::StringW  Text;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Networking::TextPacket, Sender) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::TextPacket, RecipientType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::TextPacket, Recipient) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::TextPacket, Text) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Networking::TextPacket) == 0x18, "Size mismatch!");

} // namespace end def Dissonance::Networking

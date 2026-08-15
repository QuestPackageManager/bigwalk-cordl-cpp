#pragma once
// IWYU pragma private; include "Dissonance/Networking/MessageTypes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MessageTypes)
// Forward declare root types
namespace Dissonance::Networking {
struct MessageTypes;
}
// Write type traits
MARK_VAL_T(::Dissonance::Networking::MessageTypes);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::MessageTypes, "Dissonance.Networking", "MessageTypes");
// Dependencies 
namespace Dissonance::Networking {
// Is value type: true
// CS Name: Dissonance.Networking.MessageTypes
struct CORDL_TYPE MessageTypes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __MessageTypes_Unwrapped
enum struct __MessageTypes_Unwrapped : uint8_t {
__E_ClientState = static_cast<uint8_t>(0x1u),
__E_VoiceData = static_cast<uint8_t>(0x2u),
__E_TextData = static_cast<uint8_t>(0x3u),
__E_HandshakeRequest = static_cast<uint8_t>(0x4u),
__E_HandshakeResponse = static_cast<uint8_t>(0x5u),
__E_ErrorWrongSession = static_cast<uint8_t>(0x6u),
__E_ServerRelayReliable = static_cast<uint8_t>(0x7u),
__E_ServerRelayUnreliable = static_cast<uint8_t>(0x8u),
__E_DeltaChannelState = static_cast<uint8_t>(0x9u),
__E_RemoveClient = static_cast<uint8_t>(0xau),
__E_HandshakeP2P = static_cast<uint8_t>(0xbu),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MessageTypes_Unwrapped () const noexcept {
return static_cast<__MessageTypes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MessageTypes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr MessageTypes(uint8_t  value__) noexcept;

/// @brief Field ClientState value: U8(1)
static ::Dissonance::Networking::MessageTypes const ClientState;

/// @brief Field DeltaChannelState value: U8(9)
static ::Dissonance::Networking::MessageTypes const DeltaChannelState;

/// @brief Field ErrorWrongSession value: U8(6)
static ::Dissonance::Networking::MessageTypes const ErrorWrongSession;

/// @brief Field HandshakeP2P value: U8(11)
static ::Dissonance::Networking::MessageTypes const HandshakeP2P;

/// @brief Field HandshakeRequest value: U8(4)
static ::Dissonance::Networking::MessageTypes const HandshakeRequest;

/// @brief Field HandshakeResponse value: U8(5)
static ::Dissonance::Networking::MessageTypes const HandshakeResponse;

/// @brief Field RemoveClient value: U8(10)
static ::Dissonance::Networking::MessageTypes const RemoveClient;

/// @brief Field ServerRelayReliable value: U8(7)
static ::Dissonance::Networking::MessageTypes const ServerRelayReliable;

/// @brief Field ServerRelayUnreliable value: U8(8)
static ::Dissonance::Networking::MessageTypes const ServerRelayUnreliable;

/// @brief Field TextData value: U8(3)
static ::Dissonance::Networking::MessageTypes const TextData;

/// @brief Field VoiceData value: U8(2)
static ::Dissonance::Networking::MessageTypes const VoiceData;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16886};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Networking::MessageTypes, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Networking::MessageTypes) == 0x1, "Size mismatch!");

} // namespace end def Dissonance::Networking

#pragma once
// IWYU pragma private; include "Dissonance/Networking/MessageTypes.hpp"
#include "Dissonance/Networking/zzzz__MessageTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Networking::MessageTypes::MessageTypes(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::Networking::MessageTypes::MessageTypes()   {
}
constexpr ::Dissonance::Networking::MessageTypes  Dissonance::Networking::MessageTypes::ClientState{static_cast<uint8_t>(0x1u)};
constexpr ::Dissonance::Networking::MessageTypes  Dissonance::Networking::MessageTypes::VoiceData{static_cast<uint8_t>(0x2u)};
constexpr ::Dissonance::Networking::MessageTypes  Dissonance::Networking::MessageTypes::TextData{static_cast<uint8_t>(0x3u)};
constexpr ::Dissonance::Networking::MessageTypes  Dissonance::Networking::MessageTypes::HandshakeRequest{static_cast<uint8_t>(0x4u)};
constexpr ::Dissonance::Networking::MessageTypes  Dissonance::Networking::MessageTypes::HandshakeResponse{static_cast<uint8_t>(0x5u)};
constexpr ::Dissonance::Networking::MessageTypes  Dissonance::Networking::MessageTypes::ErrorWrongSession{static_cast<uint8_t>(0x6u)};
constexpr ::Dissonance::Networking::MessageTypes  Dissonance::Networking::MessageTypes::ServerRelayReliable{static_cast<uint8_t>(0x7u)};
constexpr ::Dissonance::Networking::MessageTypes  Dissonance::Networking::MessageTypes::ServerRelayUnreliable{static_cast<uint8_t>(0x8u)};
constexpr ::Dissonance::Networking::MessageTypes  Dissonance::Networking::MessageTypes::DeltaChannelState{static_cast<uint8_t>(0x9u)};
constexpr ::Dissonance::Networking::MessageTypes  Dissonance::Networking::MessageTypes::RemoveClient{static_cast<uint8_t>(0xau)};
constexpr ::Dissonance::Networking::MessageTypes  Dissonance::Networking::MessageTypes::HandshakeP2P{static_cast<uint8_t>(0xbu)};

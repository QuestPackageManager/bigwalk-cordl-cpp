#pragma once
// IWYU pragma private; include "Dissonance/Audio/Codecs/Codec.hpp"
#include "Dissonance/Audio/Codecs/zzzz__Codec_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Audio::Codecs::Codec::Codec(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Codecs::Codec::Codec()   {
}
constexpr ::Dissonance::Audio::Codecs::Codec  Dissonance::Audio::Codecs::Codec::Identity{static_cast<uint8_t>(0x0u)};
constexpr ::Dissonance::Audio::Codecs::Codec  Dissonance::Audio::Codecs::Codec::Opus{static_cast<uint8_t>(0x1u)};

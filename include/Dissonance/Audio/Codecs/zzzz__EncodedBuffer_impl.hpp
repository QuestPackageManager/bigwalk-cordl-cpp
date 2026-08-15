#pragma once
// IWYU pragma private; include "Dissonance/Audio/Codecs/EncodedBuffer.hpp"
#include "System/zzzz__ArraySegment_1_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Dissonance/Audio/Codecs/zzzz__EncodedBuffer_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Codecs::EncodedBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::EncodedBuffer::*)(::System::Nullable_1<::System::ArraySegment_1<uint8_t>>, bool)>(&::Dissonance::Audio::Codecs::EncodedBuffer::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805f4f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::EncodedBuffer>(),
                        {".ctor", {}, {::i2c::type_of<::System::Nullable_1<::System::ArraySegment_1<uint8_t>>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Audio::Codecs::EncodedBuffer::_ctor(::System::Nullable_1<::System::ArraySegment_1<uint8_t>>  encoded, bool  packetLost)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::EncodedBuffer>(),
                        {".ctor", {}, {::i2c::type_of<::System::Nullable_1<::System::ArraySegment_1<uint8_t>>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, encoded, packetLost);
}
// Ctor Parameters [CppParam { name: "Encoded", ty: "::System::Nullable_1<::System::ArraySegment_1<uint8_t>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "PacketLost", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Audio::Codecs::EncodedBuffer::EncodedBuffer(::System::Nullable_1<::System::ArraySegment_1<uint8_t>>  Encoded, bool  PacketLost) noexcept  {
this->Encoded = Encoded;
this->PacketLost = PacketLost;
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Codecs::EncodedBuffer::EncodedBuffer()   {
}

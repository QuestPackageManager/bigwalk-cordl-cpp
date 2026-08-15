#pragma once
// IWYU pragma private; include "Dissonance/Audio/Codecs/IVoiceDecoder.hpp"
#include "Dissonance/Audio/Codecs/zzzz__IVoiceDecoder_def.hpp"
#include "Dissonance/Audio/Codecs/zzzz__EncodedBuffer_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Codecs::IVoiceDecoder.get_Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NAudio::Wave::WaveFormat* (::Dissonance::Audio::Codecs::IVoiceDecoder::*)()>(&::Dissonance::Audio::Codecs::IVoiceDecoder::get_Format)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Codecs::IVoiceDecoder*>(),
                    {::i2c::class_of<::Dissonance::Audio::Codecs::IVoiceDecoder*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::IVoiceDecoder.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::IVoiceDecoder::*)()>(&::Dissonance::Audio::Codecs::IVoiceDecoder::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Codecs::IVoiceDecoder*>(),
                    {::i2c::class_of<::Dissonance::Audio::Codecs::IVoiceDecoder*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::IVoiceDecoder.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Codecs::IVoiceDecoder::*)(::Dissonance::Audio::Codecs::EncodedBuffer, ::System::ArraySegment_1<float_t>)>(&::Dissonance::Audio::Codecs::IVoiceDecoder::Decode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Codecs::IVoiceDecoder*>(),
                    {::i2c::class_of<::Dissonance::Audio::Codecs::IVoiceDecoder*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::NAudio::Wave::WaveFormat* Dissonance::Audio::Codecs::IVoiceDecoder::get_Format()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Codecs::IVoiceDecoder*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::NAudio::Wave::WaveFormat*>(this, ___internal_method);
}
inline void Dissonance::Audio::Codecs::IVoiceDecoder::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Codecs::IVoiceDecoder*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Dissonance::Audio::Codecs::IVoiceDecoder::Decode(::Dissonance::Audio::Codecs::EncodedBuffer  input, ::System::ArraySegment_1<float_t>  output)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Codecs::IVoiceDecoder*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, output);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Dissonance::Audio::Codecs::IVoiceDecoder::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Dissonance::Audio::Codecs::IVoiceDecoder::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}

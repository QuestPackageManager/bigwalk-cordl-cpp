#pragma once
// IWYU pragma private; include "Dissonance/Audio/Codecs/Silence/SilenceDecoder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/Codecs/Silence/zzzz__SilenceDecoder_def.hpp"
#include "Dissonance/Audio/Codecs/zzzz__EncodedBuffer_def.hpp"
#include "Dissonance/Audio/Codecs/zzzz__IVoiceDecoder_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__FrameFormat_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Silence::SilenceDecoder.get_Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NAudio::Wave::WaveFormat* (::Dissonance::Audio::Codecs::Silence::SilenceDecoder::*)()>(&::Dissonance::Audio::Codecs::Silence::SilenceDecoder::get_Format)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Silence::SilenceDecoder*>(),
                        {"get_Format", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Silence::SilenceDecoder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Silence::SilenceDecoder::*)(::Dissonance::Audio::Playback::FrameFormat)>(&::Dissonance::Audio::Codecs::Silence::SilenceDecoder::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805f9e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Silence::SilenceDecoder*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Playback::FrameFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Silence::SilenceDecoder.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Silence::SilenceDecoder::*)()>(&::Dissonance::Audio::Codecs::Silence::SilenceDecoder::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Silence::SilenceDecoder*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Silence::SilenceDecoder.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Silence::SilenceDecoder::*)()>(&::Dissonance::Audio::Codecs::Silence::SilenceDecoder::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Silence::SilenceDecoder*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Silence::SilenceDecoder.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Codecs::Silence::SilenceDecoder::*)(::Dissonance::Audio::Codecs::EncodedBuffer, ::System::ArraySegment_1<float_t>)>(&::Dissonance::Audio::Codecs::Silence::SilenceDecoder::Decode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805f9e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Silence::SilenceDecoder*>(),
                        {"Decode", {}, {::i2c::type_of<::Dissonance::Audio::Codecs::EncodedBuffer>(), ::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Dissonance::Audio::Codecs::Silence::SilenceDecoder::__cordl_internal_get__frameSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameSize;
}
constexpr int32_t const& Dissonance::Audio::Codecs::Silence::SilenceDecoder::__cordl_internal_get__frameSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameSize;
}
constexpr void Dissonance::Audio::Codecs::Silence::SilenceDecoder::__cordl_internal_set__frameSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frameSize = value;
}
constexpr ::NAudio::Wave::WaveFormat*& Dissonance::Audio::Codecs::Silence::SilenceDecoder::__cordl_internal_get__format()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____format;
}
constexpr ::NAudio::Wave::WaveFormat* const& Dissonance::Audio::Codecs::Silence::SilenceDecoder::__cordl_internal_get__format() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____format;
}
constexpr void Dissonance::Audio::Codecs::Silence::SilenceDecoder::__cordl_internal_set__format(::NAudio::Wave::WaveFormat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____format = value;
}
inline ::NAudio::Wave::WaveFormat* Dissonance::Audio::Codecs::Silence::SilenceDecoder::get_Format()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Silence::SilenceDecoder*>(),
                        {"get_Format", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NAudio::Wave::WaveFormat*>(this, ___internal_method);
}
inline void Dissonance::Audio::Codecs::Silence::SilenceDecoder::_ctor(::Dissonance::Audio::Playback::FrameFormat  frameFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Silence::SilenceDecoder*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Playback::FrameFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frameFormat);
}
inline void Dissonance::Audio::Codecs::Silence::SilenceDecoder::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Silence::SilenceDecoder*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Codecs::Silence::SilenceDecoder::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Silence::SilenceDecoder*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Dissonance::Audio::Codecs::Silence::SilenceDecoder::Decode(::Dissonance::Audio::Codecs::EncodedBuffer  input, ::System::ArraySegment_1<float_t>  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Silence::SilenceDecoder*>(),
                        {"Decode", {}, {::i2c::type_of<::Dissonance::Audio::Codecs::EncodedBuffer>(), ::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, output);
}
inline ::Dissonance::Audio::Codecs::Silence::SilenceDecoder* Dissonance::Audio::Codecs::Silence::SilenceDecoder::New_ctor(::Dissonance::Audio::Playback::FrameFormat  frameFormat)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Codecs::Silence::SilenceDecoder*>(frameFormat));
}
/// @brief Convert operator to "::Dissonance::Audio::Codecs::IVoiceDecoder"
constexpr  Dissonance::Audio::Codecs::Silence::SilenceDecoder::operator ::Dissonance::Audio::Codecs::IVoiceDecoder*() noexcept {
return static_cast<::Dissonance::Audio::Codecs::IVoiceDecoder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Codecs::IVoiceDecoder"
constexpr ::Dissonance::Audio::Codecs::IVoiceDecoder* Dissonance::Audio::Codecs::Silence::SilenceDecoder::i___Dissonance__Audio__Codecs__IVoiceDecoder() noexcept {
return static_cast<::Dissonance::Audio::Codecs::IVoiceDecoder*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Dissonance::Audio::Codecs::Silence::SilenceDecoder::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Dissonance::Audio::Codecs::Silence::SilenceDecoder::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Codecs::Silence::SilenceDecoder::SilenceDecoder()   {
}

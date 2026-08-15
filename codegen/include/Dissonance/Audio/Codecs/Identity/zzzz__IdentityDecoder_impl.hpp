#pragma once
// IWYU pragma private; include "Dissonance/Audio/Codecs/Identity/IdentityDecoder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/Codecs/Identity/zzzz__IdentityDecoder_def.hpp"
#include "Dissonance/Audio/Codecs/zzzz__EncodedBuffer_def.hpp"
#include "Dissonance/Audio/Codecs/zzzz__IVoiceDecoder_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Identity::IdentityDecoder.get_Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NAudio::Wave::WaveFormat* (::Dissonance::Audio::Codecs::Identity::IdentityDecoder::*)()>(&::Dissonance::Audio::Codecs::Identity::IdentityDecoder::get_Format)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Identity::IdentityDecoder*>(),
                        {"get_Format", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Identity::IdentityDecoder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Identity::IdentityDecoder::*)(::NAudio::Wave::WaveFormat*)>(&::Dissonance::Audio::Codecs::Identity::IdentityDecoder::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Identity::IdentityDecoder*>(),
                        {".ctor", {}, {::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Identity::IdentityDecoder.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Identity::IdentityDecoder::*)()>(&::Dissonance::Audio::Codecs::Identity::IdentityDecoder::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Identity::IdentityDecoder*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Identity::IdentityDecoder.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Codecs::Identity::IdentityDecoder::*)(::Dissonance::Audio::Codecs::EncodedBuffer, ::System::ArraySegment_1<float_t>)>(&::Dissonance::Audio::Codecs::Identity::IdentityDecoder::Decode)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1805f5ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Identity::IdentityDecoder*>(),
                        {"Decode", {}, {::i2c::type_of<::Dissonance::Audio::Codecs::EncodedBuffer>(), ::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Identity::IdentityDecoder.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Identity::IdentityDecoder::*)()>(&::Dissonance::Audio::Codecs::Identity::IdentityDecoder::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Identity::IdentityDecoder*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::NAudio::Wave::WaveFormat*& Dissonance::Audio::Codecs::Identity::IdentityDecoder::__cordl_internal_get__format()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____format;
}
constexpr ::NAudio::Wave::WaveFormat* const& Dissonance::Audio::Codecs::Identity::IdentityDecoder::__cordl_internal_get__format() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____format;
}
constexpr void Dissonance::Audio::Codecs::Identity::IdentityDecoder::__cordl_internal_set__format(::NAudio::Wave::WaveFormat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____format = value;
}
inline ::NAudio::Wave::WaveFormat* Dissonance::Audio::Codecs::Identity::IdentityDecoder::get_Format()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Identity::IdentityDecoder*>(),
                        {"get_Format", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NAudio::Wave::WaveFormat*>(this, ___internal_method);
}
inline void Dissonance::Audio::Codecs::Identity::IdentityDecoder::_ctor(::NAudio::Wave::WaveFormat*  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Identity::IdentityDecoder*>(),
                        {".ctor", {}, {::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format);
}
inline void Dissonance::Audio::Codecs::Identity::IdentityDecoder::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Identity::IdentityDecoder*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Dissonance::Audio::Codecs::Identity::IdentityDecoder::Decode(::Dissonance::Audio::Codecs::EncodedBuffer  input, ::System::ArraySegment_1<float_t>  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Identity::IdentityDecoder*>(),
                        {"Decode", {}, {::i2c::type_of<::Dissonance::Audio::Codecs::EncodedBuffer>(), ::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, output);
}
inline void Dissonance::Audio::Codecs::Identity::IdentityDecoder::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Identity::IdentityDecoder*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Audio::Codecs::Identity::IdentityDecoder* Dissonance::Audio::Codecs::Identity::IdentityDecoder::New_ctor(::NAudio::Wave::WaveFormat*  format)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Codecs::Identity::IdentityDecoder*>(format));
}
/// @brief Convert operator to "::Dissonance::Audio::Codecs::IVoiceDecoder"
constexpr  Dissonance::Audio::Codecs::Identity::IdentityDecoder::operator ::Dissonance::Audio::Codecs::IVoiceDecoder*() noexcept {
return static_cast<::Dissonance::Audio::Codecs::IVoiceDecoder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Codecs::IVoiceDecoder"
constexpr ::Dissonance::Audio::Codecs::IVoiceDecoder* Dissonance::Audio::Codecs::Identity::IdentityDecoder::i___Dissonance__Audio__Codecs__IVoiceDecoder() noexcept {
return static_cast<::Dissonance::Audio::Codecs::IVoiceDecoder*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Dissonance::Audio::Codecs::Identity::IdentityDecoder::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Dissonance::Audio::Codecs::Identity::IdentityDecoder::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Codecs::Identity::IdentityDecoder::IdentityDecoder()   {
}

#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/SoftClipSampleSource.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/Playback/zzzz__SoftClipSampleSource_def.hpp"
#include "Dissonance/Audio/Codecs/Opus/zzzz__OpusNative_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__ISampleSource_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__SessionContext_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Playback::SoftClipSampleSource.get_WaveFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NAudio::Wave::WaveFormat* (::Dissonance::Audio::Playback::SoftClipSampleSource::*)()>(&::Dissonance::Audio::Playback::SoftClipSampleSource::get_WaveFormat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805e9550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SoftClipSampleSource*>(),
                        {"get_WaveFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SoftClipSampleSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SoftClipSampleSource::*)(::Dissonance::Audio::Playback::ISampleSource*)>(&::Dissonance::Audio::Playback::SoftClipSampleSource::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805e94e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SoftClipSampleSource*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Playback::ISampleSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SoftClipSampleSource.Prepare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SoftClipSampleSource::*)(::Dissonance::Audio::Playback::SessionContext)>(&::Dissonance::Audio::Playback::SoftClipSampleSource::Prepare)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805e92f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SoftClipSampleSource*>(),
                        {"Prepare", {}, {::i2c::type_of<::Dissonance::Audio::Playback::SessionContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SoftClipSampleSource.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Playback::SoftClipSampleSource::*)(::System::ArraySegment_1<float_t>)>(&::Dissonance::Audio::Playback::SoftClipSampleSource::Read)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805e93a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SoftClipSampleSource*>(),
                        {"Read", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SoftClipSampleSource.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SoftClipSampleSource::*)()>(&::Dissonance::Audio::Playback::SoftClipSampleSource::Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805e94a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SoftClipSampleSource*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Dissonance::Audio::Playback::ISampleSource*& Dissonance::Audio::Playback::SoftClipSampleSource::__cordl_internal_get__upstream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____upstream;
}
constexpr ::Dissonance::Audio::Playback::ISampleSource* const& Dissonance::Audio::Playback::SoftClipSampleSource::__cordl_internal_get__upstream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____upstream;
}
constexpr void Dissonance::Audio::Playback::SoftClipSampleSource::__cordl_internal_set__upstream(::Dissonance::Audio::Playback::ISampleSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____upstream = value;
}
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip*& Dissonance::Audio::Playback::SoftClipSampleSource::__cordl_internal_get__clipper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipper;
}
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip* const& Dissonance::Audio::Playback::SoftClipSampleSource::__cordl_internal_get__clipper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipper;
}
constexpr void Dissonance::Audio::Playback::SoftClipSampleSource::__cordl_internal_set__clipper(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusSoftClip*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clipper = value;
}
inline ::NAudio::Wave::WaveFormat* Dissonance::Audio::Playback::SoftClipSampleSource::get_WaveFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SoftClipSampleSource*>(),
                        {"get_WaveFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NAudio::Wave::WaveFormat*>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::SoftClipSampleSource::_ctor(::Dissonance::Audio::Playback::ISampleSource*  upstream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SoftClipSampleSource*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Playback::ISampleSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, upstream);
}
inline void Dissonance::Audio::Playback::SoftClipSampleSource::Prepare(::Dissonance::Audio::Playback::SessionContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SoftClipSampleSource*>(),
                        {"Prepare", {}, {::i2c::type_of<::Dissonance::Audio::Playback::SessionContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline bool Dissonance::Audio::Playback::SoftClipSampleSource::Read(::System::ArraySegment_1<float_t>  samples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SoftClipSampleSource*>(),
                        {"Read", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, samples);
}
inline void Dissonance::Audio::Playback::SoftClipSampleSource::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SoftClipSampleSource*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::SoftClipSampleSource* Dissonance::Audio::Playback::SoftClipSampleSource::New_ctor(::Dissonance::Audio::Playback::ISampleSource*  upstream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Playback::SoftClipSampleSource*>(upstream));
}
/// @brief Convert operator to "::Dissonance::Audio::Playback::ISampleSource"
constexpr  Dissonance::Audio::Playback::SoftClipSampleSource::operator ::Dissonance::Audio::Playback::ISampleSource*() noexcept {
return static_cast<::Dissonance::Audio::Playback::ISampleSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Playback::ISampleSource"
constexpr ::Dissonance::Audio::Playback::ISampleSource* Dissonance::Audio::Playback::SoftClipSampleSource::i___Dissonance__Audio__Playback__ISampleSource() noexcept {
return static_cast<::Dissonance::Audio::Playback::ISampleSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Playback::SoftClipSampleSource::SoftClipSampleSource()   {
}

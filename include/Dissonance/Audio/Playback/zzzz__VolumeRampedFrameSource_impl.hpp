#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/VolumeRampedFrameSource.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/Playback/zzzz__VolumeRampedFrameSource_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IFrameSource_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IVolumeProvider_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__SessionContext_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Playback::VolumeRampedFrameSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::VolumeRampedFrameSource::*)(::Dissonance::Audio::Playback::IFrameSource*, ::Dissonance::Audio::Playback::IVolumeProvider*)>(&::Dissonance::Audio::Playback::VolumeRampedFrameSource::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803224a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::VolumeRampedFrameSource*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Playback::IFrameSource*>(), ::i2c::type_of<::Dissonance::Audio::Playback::IVolumeProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::VolumeRampedFrameSource.get_FrameSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Dissonance::Audio::Playback::VolumeRampedFrameSource::*)()>(&::Dissonance::Audio::Playback::VolumeRampedFrameSource::get_FrameSize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805fa480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::VolumeRampedFrameSource*>(),
                        {"get_FrameSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::VolumeRampedFrameSource.get_WaveFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NAudio::Wave::WaveFormat* (::Dissonance::Audio::Playback::VolumeRampedFrameSource::*)()>(&::Dissonance::Audio::Playback::VolumeRampedFrameSource::get_WaveFormat)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1805e0c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::VolumeRampedFrameSource*>(),
                        {"get_WaveFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::VolumeRampedFrameSource.Prepare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::VolumeRampedFrameSource::*)(::Dissonance::Audio::Playback::SessionContext)>(&::Dissonance::Audio::Playback::VolumeRampedFrameSource::Prepare)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805e0810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::VolumeRampedFrameSource*>(),
                        {"Prepare", {}, {::i2c::type_of<::Dissonance::Audio::Playback::SessionContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::VolumeRampedFrameSource.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Playback::VolumeRampedFrameSource::*)(::System::ArraySegment_1<float_t>)>(&::Dissonance::Audio::Playback::VolumeRampedFrameSource::Read)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1805fa1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::VolumeRampedFrameSource*>(),
                        {"Read", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::VolumeRampedFrameSource.ApplyFlatAttenuation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ArraySegment_1<float_t>, float_t)>(&::Dissonance::Audio::Playback::VolumeRampedFrameSource::ApplyFlatAttenuation)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805fa0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::VolumeRampedFrameSource*>(),
                        {"ApplyFlatAttenuation", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::VolumeRampedFrameSource.ApplyRampedAttenuation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ArraySegment_1<float_t>, float_t, float_t)>(&::Dissonance::Audio::Playback::VolumeRampedFrameSource::ApplyRampedAttenuation)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805fa140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::VolumeRampedFrameSource*>(),
                        {"ApplyRampedAttenuation", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::VolumeRampedFrameSource.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::VolumeRampedFrameSource::*)()>(&::Dissonance::Audio::Playback::VolumeRampedFrameSource::Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805fa440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::VolumeRampedFrameSource*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Dissonance::Audio::Playback::IFrameSource*& Dissonance::Audio::Playback::VolumeRampedFrameSource::__cordl_internal_get__source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr ::Dissonance::Audio::Playback::IFrameSource* const& Dissonance::Audio::Playback::VolumeRampedFrameSource::__cordl_internal_get__source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr void Dissonance::Audio::Playback::VolumeRampedFrameSource::__cordl_internal_set__source(::Dissonance::Audio::Playback::IFrameSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____source = value;
}
constexpr ::Dissonance::Audio::Playback::IVolumeProvider*& Dissonance::Audio::Playback::VolumeRampedFrameSource::__cordl_internal_get__volumeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeProvider;
}
constexpr ::Dissonance::Audio::Playback::IVolumeProvider* const& Dissonance::Audio::Playback::VolumeRampedFrameSource::__cordl_internal_get__volumeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeProvider;
}
constexpr void Dissonance::Audio::Playback::VolumeRampedFrameSource::__cordl_internal_set__volumeProvider(::Dissonance::Audio::Playback::IVolumeProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____volumeProvider = value;
}
constexpr float_t& Dissonance::Audio::Playback::VolumeRampedFrameSource::__cordl_internal_get__targetVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetVolume;
}
constexpr float_t const& Dissonance::Audio::Playback::VolumeRampedFrameSource::__cordl_internal_get__targetVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetVolume;
}
constexpr void Dissonance::Audio::Playback::VolumeRampedFrameSource::__cordl_internal_set__targetVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetVolume = value;
}
constexpr float_t& Dissonance::Audio::Playback::VolumeRampedFrameSource::__cordl_internal_get__currentVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentVolume;
}
constexpr float_t const& Dissonance::Audio::Playback::VolumeRampedFrameSource::__cordl_internal_get__currentVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentVolume;
}
constexpr void Dissonance::Audio::Playback::VolumeRampedFrameSource::__cordl_internal_set__currentVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentVolume = value;
}
inline void Dissonance::Audio::Playback::VolumeRampedFrameSource::_ctor(::Dissonance::Audio::Playback::IFrameSource*  source, ::Dissonance::Audio::Playback::IVolumeProvider*  volumeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::VolumeRampedFrameSource*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Playback::IFrameSource*>(), ::i2c::type_of<::Dissonance::Audio::Playback::IVolumeProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, volumeProvider);
}
inline uint32_t Dissonance::Audio::Playback::VolumeRampedFrameSource::get_FrameSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::VolumeRampedFrameSource*>(),
                        {"get_FrameSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline ::NAudio::Wave::WaveFormat* Dissonance::Audio::Playback::VolumeRampedFrameSource::get_WaveFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::VolumeRampedFrameSource*>(),
                        {"get_WaveFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NAudio::Wave::WaveFormat*>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::VolumeRampedFrameSource::Prepare(::Dissonance::Audio::Playback::SessionContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::VolumeRampedFrameSource*>(),
                        {"Prepare", {}, {::i2c::type_of<::Dissonance::Audio::Playback::SessionContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline bool Dissonance::Audio::Playback::VolumeRampedFrameSource::Read(::System::ArraySegment_1<float_t>  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::VolumeRampedFrameSource*>(),
                        {"Read", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, frame);
}
inline void Dissonance::Audio::Playback::VolumeRampedFrameSource::ApplyFlatAttenuation(::System::ArraySegment_1<float_t>  frame, float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::VolumeRampedFrameSource*>(),
                        {"ApplyFlatAttenuation", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, frame, volume);
}
inline void Dissonance::Audio::Playback::VolumeRampedFrameSource::ApplyRampedAttenuation(::System::ArraySegment_1<float_t>  frame, float_t  start, float_t  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::VolumeRampedFrameSource*>(),
                        {"ApplyRampedAttenuation", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, frame, start, end);
}
inline void Dissonance::Audio::Playback::VolumeRampedFrameSource::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::VolumeRampedFrameSource*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::VolumeRampedFrameSource* Dissonance::Audio::Playback::VolumeRampedFrameSource::New_ctor(::Dissonance::Audio::Playback::IFrameSource*  source, ::Dissonance::Audio::Playback::IVolumeProvider*  volumeProvider)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Playback::VolumeRampedFrameSource*>(source, volumeProvider));
}
/// @brief Convert operator to "::Dissonance::Audio::Playback::IFrameSource"
constexpr  Dissonance::Audio::Playback::VolumeRampedFrameSource::operator ::Dissonance::Audio::Playback::IFrameSource*() noexcept {
return static_cast<::Dissonance::Audio::Playback::IFrameSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Playback::IFrameSource"
constexpr ::Dissonance::Audio::Playback::IFrameSource* Dissonance::Audio::Playback::VolumeRampedFrameSource::i___Dissonance__Audio__Playback__IFrameSource() noexcept {
return static_cast<::Dissonance::Audio::Playback::IFrameSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Playback::VolumeRampedFrameSource::VolumeRampedFrameSource()   {
}

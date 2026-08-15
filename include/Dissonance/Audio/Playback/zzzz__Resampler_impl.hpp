#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/Resampler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/Playback/zzzz__Resampler_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IRateProvider_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__ISampleSource_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__SessionContext_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "NAudio/Dsp/zzzz__WdlResampler_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Playback::Resampler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::Resampler::*)(::Dissonance::Audio::Playback::ISampleSource*, ::Dissonance::Audio::Playback::IRateProvider*)>(&::Dissonance::Audio::Playback::Resampler::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805e7860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::Resampler*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Playback::ISampleSource*>(), ::i2c::type_of<::Dissonance::Audio::Playback::IRateProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::Resampler.get_WaveFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NAudio::Wave::WaveFormat* (::Dissonance::Audio::Playback::Resampler::*)()>(&::Dissonance::Audio::Playback::Resampler::get_WaveFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805e7960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::Resampler*>(),
                        {"get_WaveFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::Resampler.Prepare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::Resampler::*)(::Dissonance::Audio::Playback::SessionContext)>(&::Dissonance::Audio::Playback::Resampler::Prepare)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805e73a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::Resampler*>(),
                        {"Prepare", {}, {::i2c::type_of<::Dissonance::Audio::Playback::SessionContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::Resampler.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Playback::Resampler::*)(::System::ArraySegment_1<float_t>)>(&::Dissonance::Audio::Playback::Resampler::Read)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1805e7460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::Resampler*>(),
                        {"Read", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::Resampler.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::Resampler::*)()>(&::Dissonance::Audio::Playback::Resampler::Reset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805e76e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::Resampler*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::Resampler.OnAudioConfigurationChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::Resampler::*)(bool)>(&::Dissonance::Audio::Playback::Resampler::OnAudioConfigurationChanged)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805e7300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::Resampler*>(),
                        {"OnAudioConfigurationChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::Resampler.SetOutputRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::Resampler::*)(::System::Nullable_1<int32_t>)>(&::Dissonance::Audio::Playback::Resampler::SetOutputRate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805e7730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::Resampler*>(),
                        {"SetOutputRate", {}, {::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Dissonance::Audio::Playback::ISampleSource*& Dissonance::Audio::Playback::Resampler::__cordl_internal_get__source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr ::Dissonance::Audio::Playback::ISampleSource* const& Dissonance::Audio::Playback::Resampler::__cordl_internal_get__source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr void Dissonance::Audio::Playback::Resampler::__cordl_internal_set__source(::Dissonance::Audio::Playback::ISampleSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____source = value;
}
constexpr ::Dissonance::Audio::Playback::IRateProvider*& Dissonance::Audio::Playback::Resampler::__cordl_internal_get__rate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rate;
}
constexpr ::Dissonance::Audio::Playback::IRateProvider* const& Dissonance::Audio::Playback::Resampler::__cordl_internal_get__rate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rate;
}
constexpr void Dissonance::Audio::Playback::Resampler::__cordl_internal_set__rate(::Dissonance::Audio::Playback::IRateProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rate = value;
}
constexpr ::NAudio::Wave::WaveFormat*& Dissonance::Audio::Playback::Resampler::__cordl_internal_get__outputFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputFormat;
}
constexpr ::NAudio::Wave::WaveFormat* const& Dissonance::Audio::Playback::Resampler::__cordl_internal_get__outputFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputFormat;
}
constexpr void Dissonance::Audio::Playback::Resampler::__cordl_internal_set__outputFormat(::NAudio::Wave::WaveFormat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputFormat = value;
}
constexpr ::NAudio::Dsp::WdlResampler*& Dissonance::Audio::Playback::Resampler::__cordl_internal_get__resampler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resampler;
}
constexpr ::NAudio::Dsp::WdlResampler* const& Dissonance::Audio::Playback::Resampler::__cordl_internal_get__resampler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resampler;
}
constexpr void Dissonance::Audio::Playback::Resampler::__cordl_internal_set__resampler(::NAudio::Dsp::WdlResampler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resampler = value;
}
constexpr bool& Dissonance::Audio::Playback::Resampler::__cordl_internal_get__fixedRateEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fixedRateEnabled;
}
constexpr bool const& Dissonance::Audio::Playback::Resampler::__cordl_internal_get__fixedRateEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fixedRateEnabled;
}
constexpr void Dissonance::Audio::Playback::Resampler::__cordl_internal_set__fixedRateEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fixedRateEnabled = value;
}
inline void Dissonance::Audio::Playback::Resampler::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Playback::Resampler*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Audio::Playback::Resampler::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Playback::Resampler*>();
}
inline void Dissonance::Audio::Playback::Resampler::_ctor(::Dissonance::Audio::Playback::ISampleSource*  source, ::Dissonance::Audio::Playback::IRateProvider*  rate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::Resampler*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Playback::ISampleSource*>(), ::i2c::type_of<::Dissonance::Audio::Playback::IRateProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, rate);
}
inline ::NAudio::Wave::WaveFormat* Dissonance::Audio::Playback::Resampler::get_WaveFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::Resampler*>(),
                        {"get_WaveFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NAudio::Wave::WaveFormat*>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::Resampler::Prepare(::Dissonance::Audio::Playback::SessionContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::Resampler*>(),
                        {"Prepare", {}, {::i2c::type_of<::Dissonance::Audio::Playback::SessionContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline bool Dissonance::Audio::Playback::Resampler::Read(::System::ArraySegment_1<float_t>  samples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::Resampler*>(),
                        {"Read", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, samples);
}
inline void Dissonance::Audio::Playback::Resampler::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::Resampler*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::Resampler::OnAudioConfigurationChanged(bool  deviceWasChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::Resampler*>(),
                        {"OnAudioConfigurationChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deviceWasChanged);
}
inline void Dissonance::Audio::Playback::Resampler::SetOutputRate(::System::Nullable_1<int32_t>  rate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::Resampler*>(),
                        {"SetOutputRate", {}, {::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rate);
}
inline ::Dissonance::Audio::Playback::Resampler* Dissonance::Audio::Playback::Resampler::New_ctor(::Dissonance::Audio::Playback::ISampleSource*  source, ::Dissonance::Audio::Playback::IRateProvider*  rate)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Playback::Resampler*>(source, rate));
}
/// @brief Convert operator to "::Dissonance::Audio::Playback::ISampleSource"
constexpr  Dissonance::Audio::Playback::Resampler::operator ::Dissonance::Audio::Playback::ISampleSource*() noexcept {
return static_cast<::Dissonance::Audio::Playback::ISampleSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Playback::ISampleSource"
constexpr ::Dissonance::Audio::Playback::ISampleSource* Dissonance::Audio::Playback::Resampler::i___Dissonance__Audio__Playback__ISampleSource() noexcept {
return static_cast<::Dissonance::Audio::Playback::ISampleSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Playback::Resampler::Resampler()   {
}

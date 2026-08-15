#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/Resampler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/Capture/zzzz__Resampler_def.hpp"
#include "NAudio/Dsp/zzzz__WdlResampler_def.hpp"
#include "NAudio/Wave/zzzz__ISampleProvider_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Capture::Resampler.get_WaveFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NAudio::Wave::WaveFormat* (::Dissonance::Audio::Capture::Resampler::*)()>(&::Dissonance::Audio::Capture::Resampler::get_WaveFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::Resampler*>(),
                        {"get_WaveFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::Resampler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::Resampler::*)(::NAudio::Wave::ISampleProvider*, int32_t)>(&::Dissonance::Audio::Capture::Resampler::_ctor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1805f8ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::Resampler*>(),
                        {".ctor", {}, {::i2c::type_of<::NAudio::Wave::ISampleProvider*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::Resampler.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Capture::Resampler::*)(::ArrayW<float_t>, int32_t, int32_t)>(&::Dissonance::Audio::Capture::Resampler::Read)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1805f8d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::Resampler*>(),
                        {"Read", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::Resampler.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::Resampler::*)()>(&::Dissonance::Audio::Capture::Resampler::Reset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805f8ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::Resampler*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::NAudio::Wave::WaveFormat*& Dissonance::Audio::Capture::Resampler::__cordl_internal_get__format()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____format;
}
constexpr ::NAudio::Wave::WaveFormat* const& Dissonance::Audio::Capture::Resampler::__cordl_internal_get__format() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____format;
}
constexpr void Dissonance::Audio::Capture::Resampler::__cordl_internal_set__format(::NAudio::Wave::WaveFormat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____format = value;
}
constexpr ::NAudio::Dsp::WdlResampler*& Dissonance::Audio::Capture::Resampler::__cordl_internal_get__resampler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resampler;
}
constexpr ::NAudio::Dsp::WdlResampler* const& Dissonance::Audio::Capture::Resampler::__cordl_internal_get__resampler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resampler;
}
constexpr void Dissonance::Audio::Capture::Resampler::__cordl_internal_set__resampler(::NAudio::Dsp::WdlResampler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resampler = value;
}
constexpr ::NAudio::Wave::ISampleProvider*& Dissonance::Audio::Capture::Resampler::__cordl_internal_get__source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr ::NAudio::Wave::ISampleProvider* const& Dissonance::Audio::Capture::Resampler::__cordl_internal_get__source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr void Dissonance::Audio::Capture::Resampler::__cordl_internal_set__source(::NAudio::Wave::ISampleProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____source = value;
}
inline ::NAudio::Wave::WaveFormat* Dissonance::Audio::Capture::Resampler::get_WaveFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::Resampler*>(),
                        {"get_WaveFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NAudio::Wave::WaveFormat*>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::Resampler::_ctor(::NAudio::Wave::ISampleProvider*  source, int32_t  newSampleRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::Resampler*>(),
                        {".ctor", {}, {::i2c::type_of<::NAudio::Wave::ISampleProvider*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, newSampleRate);
}
inline int32_t Dissonance::Audio::Capture::Resampler::Read(::ArrayW<float_t>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::Resampler*>(),
                        {"Read", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline void Dissonance::Audio::Capture::Resampler::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::Resampler*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Audio::Capture::Resampler* Dissonance::Audio::Capture::Resampler::New_ctor(::NAudio::Wave::ISampleProvider*  source, int32_t  newSampleRate)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Capture::Resampler*>(source, newSampleRate));
}
/// @brief Convert operator to "::NAudio::Wave::ISampleProvider"
constexpr  Dissonance::Audio::Capture::Resampler::operator ::NAudio::Wave::ISampleProvider*() noexcept {
return static_cast<::NAudio::Wave::ISampleProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::NAudio::Wave::ISampleProvider"
constexpr ::NAudio::Wave::ISampleProvider* Dissonance::Audio::Capture::Resampler::i___NAudio__Wave__ISampleProvider() noexcept {
return static_cast<::NAudio::Wave::ISampleProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Capture::Resampler::Resampler()   {
}

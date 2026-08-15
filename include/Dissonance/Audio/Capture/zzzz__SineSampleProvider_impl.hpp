#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/SineSampleProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/Capture/zzzz__SineSampleProvider_def.hpp"
#include "NAudio/Wave/zzzz__ISampleProvider_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Capture::SineSampleProvider.get_Frequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Capture::SineSampleProvider::*)()>(&::Dissonance::Audio::Capture::SineSampleProvider::get_Frequency)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18048d8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::SineSampleProvider*>(),
                        {"get_Frequency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::SineSampleProvider.get_WaveFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NAudio::Wave::WaveFormat* (::Dissonance::Audio::Capture::SineSampleProvider::*)()>(&::Dissonance::Audio::Capture::SineSampleProvider::get_WaveFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::SineSampleProvider*>(),
                        {"get_WaveFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::SineSampleProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::SineSampleProvider::*)(::NAudio::Wave::WaveFormat*, float_t)>(&::Dissonance::Audio::Capture::SineSampleProvider::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805f9f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::SineSampleProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::NAudio::Wave::WaveFormat*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::SineSampleProvider.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Capture::SineSampleProvider::*)(::ArrayW<float_t>, int32_t, int32_t)>(&::Dissonance::Audio::Capture::SineSampleProvider::Read)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805f9e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::SineSampleProvider*>(),
                        {"Read", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::NAudio::Wave::WaveFormat*& Dissonance::Audio::Capture::SineSampleProvider::__cordl_internal_get__format()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____format;
}
constexpr ::NAudio::Wave::WaveFormat* const& Dissonance::Audio::Capture::SineSampleProvider::__cordl_internal_get__format() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____format;
}
constexpr void Dissonance::Audio::Capture::SineSampleProvider::__cordl_internal_set__format(::NAudio::Wave::WaveFormat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____format = value;
}
constexpr float_t& Dissonance::Audio::Capture::SineSampleProvider::__cordl_internal_get__frequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frequency;
}
constexpr float_t const& Dissonance::Audio::Capture::SineSampleProvider::__cordl_internal_get__frequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frequency;
}
constexpr void Dissonance::Audio::Capture::SineSampleProvider::__cordl_internal_set__frequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frequency = value;
}
constexpr double_t& Dissonance::Audio::Capture::SineSampleProvider::__cordl_internal_get__step()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____step;
}
constexpr double_t const& Dissonance::Audio::Capture::SineSampleProvider::__cordl_internal_get__step() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____step;
}
constexpr void Dissonance::Audio::Capture::SineSampleProvider::__cordl_internal_set__step(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____step = value;
}
constexpr double_t& Dissonance::Audio::Capture::SineSampleProvider::__cordl_internal_get__index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index;
}
constexpr double_t const& Dissonance::Audio::Capture::SineSampleProvider::__cordl_internal_get__index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index;
}
constexpr void Dissonance::Audio::Capture::SineSampleProvider::__cordl_internal_set__index(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____index = value;
}
inline float_t Dissonance::Audio::Capture::SineSampleProvider::get_Frequency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::SineSampleProvider*>(),
                        {"get_Frequency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::NAudio::Wave::WaveFormat* Dissonance::Audio::Capture::SineSampleProvider::get_WaveFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::SineSampleProvider*>(),
                        {"get_WaveFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NAudio::Wave::WaveFormat*>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::SineSampleProvider::_ctor(::NAudio::Wave::WaveFormat*  format, float_t  frequency)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::SineSampleProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::NAudio::Wave::WaveFormat*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, frequency);
}
inline int32_t Dissonance::Audio::Capture::SineSampleProvider::Read(::ArrayW<float_t>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::SineSampleProvider*>(),
                        {"Read", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline ::Dissonance::Audio::Capture::SineSampleProvider* Dissonance::Audio::Capture::SineSampleProvider::New_ctor(::NAudio::Wave::WaveFormat*  format, float_t  frequency)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Capture::SineSampleProvider*>(format, frequency));
}
/// @brief Convert operator to "::NAudio::Wave::ISampleProvider"
constexpr  Dissonance::Audio::Capture::SineSampleProvider::operator ::NAudio::Wave::ISampleProvider*() noexcept {
return static_cast<::NAudio::Wave::ISampleProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::NAudio::Wave::ISampleProvider"
constexpr ::NAudio::Wave::ISampleProvider* Dissonance::Audio::Capture::SineSampleProvider::i___NAudio__Wave__ISampleProvider() noexcept {
return static_cast<::NAudio::Wave::ISampleProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Capture::SineSampleProvider::SineSampleProvider()   {
}

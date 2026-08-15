#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/FrameToSampleConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/Playback/zzzz__FrameToSampleConverter_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IFrameSource_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__ISampleSource_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__SessionContext_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Playback::FrameToSampleConverter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::FrameToSampleConverter::*)(::Dissonance::Audio::Playback::IFrameSource*)>(&::Dissonance::Audio::Playback::FrameToSampleConverter::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::FrameToSampleConverter*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Playback::IFrameSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::FrameToSampleConverter.get_WaveFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NAudio::Wave::WaveFormat* (::Dissonance::Audio::Playback::FrameToSampleConverter::*)()>(&::Dissonance::Audio::Playback::FrameToSampleConverter::get_WaveFormat)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1805e0c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::FrameToSampleConverter*>(),
                        {"get_WaveFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::FrameToSampleConverter.Prepare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::FrameToSampleConverter::*)(::Dissonance::Audio::Playback::SessionContext)>(&::Dissonance::Audio::Playback::FrameToSampleConverter::Prepare)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805e0810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::FrameToSampleConverter*>(),
                        {"Prepare", {}, {::i2c::type_of<::Dissonance::Audio::Playback::SessionContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::FrameToSampleConverter.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Playback::FrameToSampleConverter::*)(::System::ArraySegment_1<float_t>)>(&::Dissonance::Audio::Playback::FrameToSampleConverter::Read)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1805e08c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::FrameToSampleConverter*>(),
                        {"Read", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::FrameToSampleConverter.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::FrameToSampleConverter::*)()>(&::Dissonance::Audio::Playback::FrameToSampleConverter::Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805e0aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::FrameToSampleConverter*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Dissonance::Audio::Playback::IFrameSource*& Dissonance::Audio::Playback::FrameToSampleConverter::__cordl_internal_get__source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr ::Dissonance::Audio::Playback::IFrameSource* const& Dissonance::Audio::Playback::FrameToSampleConverter::__cordl_internal_get__source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr void Dissonance::Audio::Playback::FrameToSampleConverter::__cordl_internal_set__source(::Dissonance::Audio::Playback::IFrameSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____source = value;
}
constexpr ::ArrayW<float_t>& Dissonance::Audio::Playback::FrameToSampleConverter::__cordl_internal_get__temp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____temp;
}
constexpr ::ArrayW<float_t> const& Dissonance::Audio::Playback::FrameToSampleConverter::__cordl_internal_get__temp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____temp;
}
constexpr void Dissonance::Audio::Playback::FrameToSampleConverter::__cordl_internal_set__temp(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____temp = value;
}
constexpr bool& Dissonance::Audio::Playback::FrameToSampleConverter::__cordl_internal_get__upstreamComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____upstreamComplete;
}
constexpr bool const& Dissonance::Audio::Playback::FrameToSampleConverter::__cordl_internal_get__upstreamComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____upstreamComplete;
}
constexpr void Dissonance::Audio::Playback::FrameToSampleConverter::__cordl_internal_set__upstreamComplete(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____upstreamComplete = value;
}
constexpr int32_t& Dissonance::Audio::Playback::FrameToSampleConverter::__cordl_internal_get__firstSample()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstSample;
}
constexpr int32_t const& Dissonance::Audio::Playback::FrameToSampleConverter::__cordl_internal_get__firstSample() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstSample;
}
constexpr void Dissonance::Audio::Playback::FrameToSampleConverter::__cordl_internal_set__firstSample(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstSample = value;
}
constexpr int32_t& Dissonance::Audio::Playback::FrameToSampleConverter::__cordl_internal_get__lastSample()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSample;
}
constexpr int32_t const& Dissonance::Audio::Playback::FrameToSampleConverter::__cordl_internal_get__lastSample() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSample;
}
constexpr void Dissonance::Audio::Playback::FrameToSampleConverter::__cordl_internal_set__lastSample(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastSample = value;
}
inline void Dissonance::Audio::Playback::FrameToSampleConverter::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Playback::FrameToSampleConverter*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Audio::Playback::FrameToSampleConverter::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Playback::FrameToSampleConverter*>();
}
inline void Dissonance::Audio::Playback::FrameToSampleConverter::_ctor(::Dissonance::Audio::Playback::IFrameSource*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::FrameToSampleConverter*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Playback::IFrameSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline ::NAudio::Wave::WaveFormat* Dissonance::Audio::Playback::FrameToSampleConverter::get_WaveFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::FrameToSampleConverter*>(),
                        {"get_WaveFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NAudio::Wave::WaveFormat*>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::FrameToSampleConverter::Prepare(::Dissonance::Audio::Playback::SessionContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::FrameToSampleConverter*>(),
                        {"Prepare", {}, {::i2c::type_of<::Dissonance::Audio::Playback::SessionContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline bool Dissonance::Audio::Playback::FrameToSampleConverter::Read(::System::ArraySegment_1<float_t>  samples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::FrameToSampleConverter*>(),
                        {"Read", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, samples);
}
inline void Dissonance::Audio::Playback::FrameToSampleConverter::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::FrameToSampleConverter*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::FrameToSampleConverter* Dissonance::Audio::Playback::FrameToSampleConverter::New_ctor(::Dissonance::Audio::Playback::IFrameSource*  source)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Playback::FrameToSampleConverter*>(source));
}
/// @brief Convert operator to "::Dissonance::Audio::Playback::ISampleSource"
constexpr  Dissonance::Audio::Playback::FrameToSampleConverter::operator ::Dissonance::Audio::Playback::ISampleSource*() noexcept {
return static_cast<::Dissonance::Audio::Playback::ISampleSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Playback::ISampleSource"
constexpr ::Dissonance::Audio::Playback::ISampleSource* Dissonance::Audio::Playback::FrameToSampleConverter::i___Dissonance__Audio__Playback__ISampleSource() noexcept {
return static_cast<::Dissonance::Audio::Playback::ISampleSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Playback::FrameToSampleConverter::FrameToSampleConverter()   {
}

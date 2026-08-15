#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/SampleToFrameProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/Capture/zzzz__SampleToFrameProvider_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__IFrameProvider_def.hpp"
#include "NAudio/Wave/zzzz__ISampleProvider_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Capture::SampleToFrameProvider.get_WaveFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NAudio::Wave::WaveFormat* (::Dissonance::Audio::Capture::SampleToFrameProvider::*)()>(&::Dissonance::Audio::Capture::SampleToFrameProvider::get_WaveFormat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805f9dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::SampleToFrameProvider*>(),
                        {"get_WaveFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::SampleToFrameProvider.get_FrameSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Dissonance::Audio::Capture::SampleToFrameProvider::*)()>(&::Dissonance::Audio::Capture::SampleToFrameProvider::get_FrameSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::SampleToFrameProvider*>(),
                        {"get_FrameSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::SampleToFrameProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::SampleToFrameProvider::*)(::NAudio::Wave::ISampleProvider*, uint32_t)>(&::Dissonance::Audio::Capture::SampleToFrameProvider::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805f9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::SampleToFrameProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::NAudio::Wave::ISampleProvider*>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::SampleToFrameProvider.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Capture::SampleToFrameProvider::*)(::System::ArraySegment_1<float_t>)>(&::Dissonance::Audio::Capture::SampleToFrameProvider::Read)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1805f9bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::SampleToFrameProvider*>(),
                        {"Read", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::SampleToFrameProvider.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::SampleToFrameProvider::*)()>(&::Dissonance::Audio::Capture::SampleToFrameProvider::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805e1b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::SampleToFrameProvider*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::NAudio::Wave::ISampleProvider*& Dissonance::Audio::Capture::SampleToFrameProvider::__cordl_internal_get__source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr ::NAudio::Wave::ISampleProvider* const& Dissonance::Audio::Capture::SampleToFrameProvider::__cordl_internal_get__source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr void Dissonance::Audio::Capture::SampleToFrameProvider::__cordl_internal_set__source(::NAudio::Wave::ISampleProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____source = value;
}
constexpr uint32_t& Dissonance::Audio::Capture::SampleToFrameProvider::__cordl_internal_get__frameSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameSize;
}
constexpr uint32_t const& Dissonance::Audio::Capture::SampleToFrameProvider::__cordl_internal_get__frameSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameSize;
}
constexpr void Dissonance::Audio::Capture::SampleToFrameProvider::__cordl_internal_set__frameSize(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frameSize = value;
}
constexpr int32_t& Dissonance::Audio::Capture::SampleToFrameProvider::__cordl_internal_get__samplesInFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____samplesInFrame;
}
constexpr int32_t const& Dissonance::Audio::Capture::SampleToFrameProvider::__cordl_internal_get__samplesInFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____samplesInFrame;
}
constexpr void Dissonance::Audio::Capture::SampleToFrameProvider::__cordl_internal_set__samplesInFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____samplesInFrame = value;
}
constexpr ::ArrayW<float_t>& Dissonance::Audio::Capture::SampleToFrameProvider::__cordl_internal_get__frame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frame;
}
constexpr ::ArrayW<float_t> const& Dissonance::Audio::Capture::SampleToFrameProvider::__cordl_internal_get__frame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frame;
}
constexpr void Dissonance::Audio::Capture::SampleToFrameProvider::__cordl_internal_set__frame(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frame = value;
}
inline ::NAudio::Wave::WaveFormat* Dissonance::Audio::Capture::SampleToFrameProvider::get_WaveFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::SampleToFrameProvider*>(),
                        {"get_WaveFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NAudio::Wave::WaveFormat*>(this, ___internal_method);
}
inline uint32_t Dissonance::Audio::Capture::SampleToFrameProvider::get_FrameSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::SampleToFrameProvider*>(),
                        {"get_FrameSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::SampleToFrameProvider::_ctor(::NAudio::Wave::ISampleProvider*  source, uint32_t  frameSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::SampleToFrameProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::NAudio::Wave::ISampleProvider*>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, frameSize);
}
inline bool Dissonance::Audio::Capture::SampleToFrameProvider::Read(::System::ArraySegment_1<float_t>  outBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::SampleToFrameProvider*>(),
                        {"Read", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, outBuffer);
}
inline void Dissonance::Audio::Capture::SampleToFrameProvider::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::SampleToFrameProvider*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Audio::Capture::SampleToFrameProvider* Dissonance::Audio::Capture::SampleToFrameProvider::New_ctor(::NAudio::Wave::ISampleProvider*  source, uint32_t  frameSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Capture::SampleToFrameProvider*>(source, frameSize));
}
/// @brief Convert operator to "::Dissonance::Audio::Capture::IFrameProvider"
constexpr  Dissonance::Audio::Capture::SampleToFrameProvider::operator ::Dissonance::Audio::Capture::IFrameProvider*() noexcept {
return static_cast<::Dissonance::Audio::Capture::IFrameProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Capture::IFrameProvider"
constexpr ::Dissonance::Audio::Capture::IFrameProvider* Dissonance::Audio::Capture::SampleToFrameProvider::i___Dissonance__Audio__Capture__IFrameProvider() noexcept {
return static_cast<::Dissonance::Audio::Capture::IFrameProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Capture::SampleToFrameProvider::SampleToFrameProvider()   {
}

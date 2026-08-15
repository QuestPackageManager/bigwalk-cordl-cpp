#pragma once
// IWYU pragma private; include "Dissonance/Audio/Codecs/Opus/OpusEncoder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/Codecs/Opus/zzzz__OpusEncoder_def.hpp"
#include "Dissonance/Audio/Codecs/Opus/zzzz__OpusNative_def.hpp"
#include "Dissonance/Audio/Codecs/zzzz__IVoiceEncoder_def.hpp"
#include "Dissonance/zzzz__AudioQuality_def.hpp"
#include "Dissonance/zzzz__FrameSize_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusEncoder.get_SampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Codecs::Opus::OpusEncoder::*)()>(&::Dissonance::Audio::Codecs::Opus::OpusEncoder::get_SampleRate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805f8100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusEncoder*>(),
                        {"get_SampleRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusEncoder.set_PacketLoss
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Opus::OpusEncoder::*)(float_t)>(&::Dissonance::Audio::Codecs::Opus::OpusEncoder::set_PacketLoss)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805f8240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusEncoder*>(),
                        {"set_PacketLoss", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusEncoder.get_FrameSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Codecs::Opus::OpusEncoder::*)()>(&::Dissonance::Audio::Codecs::Opus::OpusEncoder::get_FrameSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusEncoder*>(),
                        {"get_FrameSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusEncoder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Opus::OpusEncoder::*)(::Dissonance::AudioQuality, ::Dissonance::FrameSize, bool)>(&::Dissonance::Audio::Codecs::Opus::OpusEncoder::_ctor)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1805f7b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusEncoder*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::AudioQuality>(), ::i2c::type_of<::Dissonance::FrameSize>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusEncoder.GetTargetBitrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Dissonance::AudioQuality)>(&::Dissonance::Audio::Codecs::Opus::OpusEncoder::GetTargetBitrate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805f7330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusEncoder*>(),
                        {"GetTargetBitrate", {}, {::i2c::type_of<::Dissonance::AudioQuality>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusEncoder.GetFrameSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Dissonance::FrameSize)>(&::Dissonance::Audio::Codecs::Opus::OpusEncoder::GetFrameSize)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1805f7190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusEncoder*>(),
                        {"GetFrameSize", {}, {::i2c::type_of<::Dissonance::FrameSize>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusEncoder.Encode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArraySegment_1<uint8_t> (::Dissonance::Audio::Codecs::Opus::OpusEncoder::*)(::System::ArraySegment_1<float_t>, ::System::ArraySegment_1<uint8_t>)>(&::Dissonance::Audio::Codecs::Opus::OpusEncoder::Encode)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1805f7010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusEncoder*>(),
                        {"Encode", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusEncoder.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Opus::OpusEncoder::*)()>(&::Dissonance::Audio::Codecs::Opus::OpusEncoder::Reset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805f7a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusEncoder*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::OpusEncoder.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Opus::OpusEncoder::*)()>(&::Dissonance::Audio::Codecs::Opus::OpusEncoder::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805f69b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusEncoder*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*& Dissonance::Audio::Codecs::Opus::OpusEncoder::__cordl_internal_get__encoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoder;
}
constexpr ::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder* const& Dissonance::Audio::Codecs::Opus::OpusEncoder::__cordl_internal_get__encoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoder;
}
constexpr void Dissonance::Audio::Codecs::Opus::OpusEncoder::__cordl_internal_set__encoder(::Dissonance::Audio::Codecs::Opus::OpusNative_OpusEncoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encoder = value;
}
constexpr int32_t& Dissonance::Audio::Codecs::Opus::OpusEncoder::__cordl_internal_get__frameSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameSize;
}
constexpr int32_t const& Dissonance::Audio::Codecs::Opus::OpusEncoder::__cordl_internal_get__frameSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameSize;
}
constexpr void Dissonance::Audio::Codecs::Opus::OpusEncoder::__cordl_internal_set__frameSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frameSize = value;
}
inline void Dissonance::Audio::Codecs::Opus::OpusEncoder::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Codecs::Opus::OpusEncoder*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Audio::Codecs::Opus::OpusEncoder::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Codecs::Opus::OpusEncoder*>();
}
inline void Dissonance::Audio::Codecs::Opus::OpusEncoder::setStaticF_PermittedFrameSizesSamples(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "PermittedFrameSizesSamples", ::Dissonance::Audio::Codecs::Opus::OpusEncoder*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Dissonance::Audio::Codecs::Opus::OpusEncoder::getStaticF_PermittedFrameSizesSamples()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "PermittedFrameSizesSamples", ::Dissonance::Audio::Codecs::Opus::OpusEncoder*>();
}
inline int32_t Dissonance::Audio::Codecs::Opus::OpusEncoder::get_SampleRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusEncoder*>(),
                        {"get_SampleRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Dissonance::Audio::Codecs::Opus::OpusEncoder::set_PacketLoss(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusEncoder*>(),
                        {"set_PacketLoss", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Dissonance::Audio::Codecs::Opus::OpusEncoder::get_FrameSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusEncoder*>(),
                        {"get_FrameSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Dissonance::Audio::Codecs::Opus::OpusEncoder::_ctor(::Dissonance::AudioQuality  quality, ::Dissonance::FrameSize  frameSize, bool  fec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusEncoder*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::AudioQuality>(), ::i2c::type_of<::Dissonance::FrameSize>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, quality, frameSize, fec);
}
inline int32_t Dissonance::Audio::Codecs::Opus::OpusEncoder::GetTargetBitrate(::Dissonance::AudioQuality  quality)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusEncoder*>(),
                        {"GetTargetBitrate", {}, {::i2c::type_of<::Dissonance::AudioQuality>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, quality);
}
inline int32_t Dissonance::Audio::Codecs::Opus::OpusEncoder::GetFrameSize(::Dissonance::FrameSize  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusEncoder*>(),
                        {"GetFrameSize", {}, {::i2c::type_of<::Dissonance::FrameSize>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, size);
}
inline ::System::ArraySegment_1<uint8_t> Dissonance::Audio::Codecs::Opus::OpusEncoder::Encode(::System::ArraySegment_1<float_t>  samples, ::System::ArraySegment_1<uint8_t>  encodedBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusEncoder*>(),
                        {"Encode", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<uint8_t>>(this, ___internal_method, samples, encodedBuffer);
}
inline void Dissonance::Audio::Codecs::Opus::OpusEncoder::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusEncoder*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Codecs::Opus::OpusEncoder::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::OpusEncoder*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Audio::Codecs::Opus::OpusEncoder* Dissonance::Audio::Codecs::Opus::OpusEncoder::New_ctor(::Dissonance::AudioQuality  quality, ::Dissonance::FrameSize  frameSize, bool  fec)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Codecs::Opus::OpusEncoder*>(quality, frameSize, fec));
}
/// @brief Convert operator to "::Dissonance::Audio::Codecs::IVoiceEncoder"
constexpr  Dissonance::Audio::Codecs::Opus::OpusEncoder::operator ::Dissonance::Audio::Codecs::IVoiceEncoder*() noexcept {
return static_cast<::Dissonance::Audio::Codecs::IVoiceEncoder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Codecs::IVoiceEncoder"
constexpr ::Dissonance::Audio::Codecs::IVoiceEncoder* Dissonance::Audio::Codecs::Opus::OpusEncoder::i___Dissonance__Audio__Codecs__IVoiceEncoder() noexcept {
return static_cast<::Dissonance::Audio::Codecs::IVoiceEncoder*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Dissonance::Audio::Codecs::Opus::OpusEncoder::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Dissonance::Audio::Codecs::Opus::OpusEncoder::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Codecs::Opus::OpusEncoder::OpusEncoder()   {
}

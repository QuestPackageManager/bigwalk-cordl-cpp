#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/EncoderPipeline.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/Capture/zzzz__EncoderPipeline_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__BufferedSampleProvider_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__IFrameProvider_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__IMicrophoneSubscriber_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__Resampler_def.hpp"
#include "Dissonance/Audio/Codecs/zzzz__IVoiceEncoder_def.hpp"
#include "Dissonance/Networking/zzzz__ICommsNetwork_def.hpp"
#include "Dissonance/Threading/zzzz__ReadonlyLockedValue_1_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Capture::EncoderPipeline.get_Stopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Capture::EncoderPipeline::*)()>(&::Dissonance::Audio::Capture::EncoderPipeline::get_Stopped)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805f5a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::EncoderPipeline*>(),
                        {"get_Stopped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::EncoderPipeline.get_Stopping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Capture::EncoderPipeline::*)()>(&::Dissonance::Audio::Capture::EncoderPipeline::get_Stopping)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805f5aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::EncoderPipeline*>(),
                        {"get_Stopping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::EncoderPipeline.get_TransmissionPacketLoss
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Capture::EncoderPipeline::*)()>(&::Dissonance::Audio::Capture::EncoderPipeline::get_TransmissionPacketLoss)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180315260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::EncoderPipeline*>(),
                        {"get_TransmissionPacketLoss", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::EncoderPipeline.set_TransmissionPacketLoss
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::EncoderPipeline::*)(float_t)>(&::Dissonance::Audio::Capture::EncoderPipeline::set_TransmissionPacketLoss)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803dccc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::EncoderPipeline*>(),
                        {"set_TransmissionPacketLoss", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::EncoderPipeline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::EncoderPipeline::*)(::NAudio::Wave::WaveFormat*, ::Dissonance::Audio::Codecs::IVoiceEncoder*, ::Dissonance::Networking::ICommsNetwork*)>(&::Dissonance::Audio::Capture::EncoderPipeline::_ctor)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1805f5840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::EncoderPipeline*>(),
                        {".ctor", {}, {::i2c::type_of<::NAudio::Wave::WaveFormat*>(), ::i2c::type_of<::Dissonance::Audio::Codecs::IVoiceEncoder*>(), ::i2c::type_of<::Dissonance::Networking::ICommsNetwork*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::EncoderPipeline.ReceiveMicrophoneData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::EncoderPipeline::*)(::System::ArraySegment_1<float_t>, ::NAudio::Wave::WaveFormat*)>(&::Dissonance::Audio::Capture::EncoderPipeline::ReceiveMicrophoneData)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x1805f5340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::EncoderPipeline*>(),
                        {"ReceiveMicrophoneData", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>(), ::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::EncoderPipeline.EncodeFrames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Capture::EncoderPipeline::*)(::Dissonance::Audio::Codecs::IVoiceEncoder*, int32_t)>(&::Dissonance::Audio::Capture::EncoderPipeline::EncodeFrames)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1805f5070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::EncoderPipeline*>(),
                        {"EncodeFrames", {}, {::i2c::type_of<::Dissonance::Audio::Codecs::IVoiceEncoder*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::EncoderPipeline.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::EncoderPipeline::*)()>(&::Dissonance::Audio::Capture::EncoderPipeline::Reset)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805f5660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::EncoderPipeline*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::EncoderPipeline.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::EncoderPipeline::*)()>(&::Dissonance::Audio::Capture::EncoderPipeline::Stop)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805f5780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::EncoderPipeline*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::EncoderPipeline.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::EncoderPipeline::*)()>(&::Dissonance::Audio::Capture::EncoderPipeline::Dispose)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805f4fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::EncoderPipeline*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_get__encodedBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encodedBytes;
}
constexpr ::ArrayW<uint8_t> const& Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_get__encodedBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encodedBytes;
}
constexpr void Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_set__encodedBytes(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encodedBytes = value;
}
constexpr ::ArrayW<float_t>& Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_get__plainSamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____plainSamples;
}
constexpr ::ArrayW<float_t> const& Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_get__plainSamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____plainSamples;
}
constexpr void Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_set__plainSamples(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____plainSamples = value;
}
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Audio::Codecs::IVoiceEncoder*>*& Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_get__encoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoder;
}
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Audio::Codecs::IVoiceEncoder*>* const& Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_get__encoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoder;
}
constexpr void Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_set__encoder(::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Audio::Codecs::IVoiceEncoder*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encoder = value;
}
constexpr ::Dissonance::Networking::ICommsNetwork*& Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_get__net()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____net;
}
constexpr ::Dissonance::Networking::ICommsNetwork* const& Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_get__net() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____net;
}
constexpr void Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_set__net(::Dissonance::Networking::ICommsNetwork*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____net = value;
}
constexpr ::Dissonance::Audio::Capture::BufferedSampleProvider*& Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_get__input()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____input;
}
constexpr ::Dissonance::Audio::Capture::BufferedSampleProvider* const& Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_get__input() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____input;
}
constexpr void Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_set__input(::Dissonance::Audio::Capture::BufferedSampleProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____input = value;
}
constexpr ::Dissonance::Audio::Capture::Resampler*& Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_get__resampler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resampler;
}
constexpr ::Dissonance::Audio::Capture::Resampler* const& Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_get__resampler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resampler;
}
constexpr void Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_set__resampler(::Dissonance::Audio::Capture::Resampler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resampler = value;
}
constexpr ::Dissonance::Audio::Capture::IFrameProvider*& Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_get__output()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____output;
}
constexpr ::Dissonance::Audio::Capture::IFrameProvider* const& Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_get__output() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____output;
}
constexpr void Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_set__output(::Dissonance::Audio::Capture::IFrameProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____output = value;
}
constexpr ::NAudio::Wave::WaveFormat*& Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_get__inputFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputFormat;
}
constexpr ::NAudio::Wave::WaveFormat* const& Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_get__inputFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputFormat;
}
constexpr void Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_set__inputFormat(::NAudio::Wave::WaveFormat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputFormat = value;
}
constexpr bool& Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_get__stopped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stopped;
}
constexpr bool const& Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_get__stopped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stopped;
}
constexpr void Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_set__stopped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stopped = value;
}
constexpr bool& Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_get__stopping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stopping;
}
constexpr bool const& Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_get__stopping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stopping;
}
constexpr void Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_set__stopping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stopping = value;
}
constexpr bool& Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
constexpr float_t& Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_get__TransmissionPacketLoss_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TransmissionPacketLoss_k__BackingField;
}
constexpr float_t const& Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_get__TransmissionPacketLoss_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TransmissionPacketLoss_k__BackingField;
}
constexpr void Dissonance::Audio::Capture::EncoderPipeline::__cordl_internal_set__TransmissionPacketLoss_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TransmissionPacketLoss_k__BackingField = value;
}
inline void Dissonance::Audio::Capture::EncoderPipeline::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Capture::EncoderPipeline*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Audio::Capture::EncoderPipeline::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Capture::EncoderPipeline*>();
}
inline bool Dissonance::Audio::Capture::EncoderPipeline::get_Stopped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::EncoderPipeline*>(),
                        {"get_Stopped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Dissonance::Audio::Capture::EncoderPipeline::get_Stopping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::EncoderPipeline*>(),
                        {"get_Stopping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Dissonance::Audio::Capture::EncoderPipeline::get_TransmissionPacketLoss()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::EncoderPipeline*>(),
                        {"get_TransmissionPacketLoss", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::EncoderPipeline::set_TransmissionPacketLoss(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::EncoderPipeline*>(),
                        {"set_TransmissionPacketLoss", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Audio::Capture::EncoderPipeline::_ctor(::NAudio::Wave::WaveFormat*  inputFormat, ::Dissonance::Audio::Codecs::IVoiceEncoder*  encoder, ::Dissonance::Networking::ICommsNetwork*  net)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::EncoderPipeline*>(),
                        {".ctor", {}, {::i2c::type_of<::NAudio::Wave::WaveFormat*>(), ::i2c::type_of<::Dissonance::Audio::Codecs::IVoiceEncoder*>(), ::i2c::type_of<::Dissonance::Networking::ICommsNetwork*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputFormat, encoder, net);
}
inline void Dissonance::Audio::Capture::EncoderPipeline::ReceiveMicrophoneData(::System::ArraySegment_1<float_t>  inputSamples, ::NAudio::Wave::WaveFormat*  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::EncoderPipeline*>(),
                        {"ReceiveMicrophoneData", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>(), ::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputSamples, format);
}
inline int32_t Dissonance::Audio::Capture::EncoderPipeline::EncodeFrames(::Dissonance::Audio::Codecs::IVoiceEncoder*  encoder, int32_t  maxCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::EncoderPipeline*>(),
                        {"EncodeFrames", {}, {::i2c::type_of<::Dissonance::Audio::Codecs::IVoiceEncoder*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, encoder, maxCount);
}
inline void Dissonance::Audio::Capture::EncoderPipeline::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::EncoderPipeline*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::EncoderPipeline::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::EncoderPipeline*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::EncoderPipeline::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::EncoderPipeline*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Audio::Capture::EncoderPipeline* Dissonance::Audio::Capture::EncoderPipeline::New_ctor(::NAudio::Wave::WaveFormat*  inputFormat, ::Dissonance::Audio::Codecs::IVoiceEncoder*  encoder, ::Dissonance::Networking::ICommsNetwork*  net)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Capture::EncoderPipeline*>(inputFormat, encoder, net));
}
/// @brief Convert operator to "::Dissonance::Audio::Capture::IMicrophoneSubscriber"
constexpr  Dissonance::Audio::Capture::EncoderPipeline::operator ::Dissonance::Audio::Capture::IMicrophoneSubscriber*() noexcept {
return static_cast<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Capture::IMicrophoneSubscriber"
constexpr ::Dissonance::Audio::Capture::IMicrophoneSubscriber* Dissonance::Audio::Capture::EncoderPipeline::i___Dissonance__Audio__Capture__IMicrophoneSubscriber() noexcept {
return static_cast<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Dissonance::Audio::Capture::EncoderPipeline::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Dissonance::Audio::Capture::EncoderPipeline::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Capture::EncoderPipeline::EncoderPipeline()   {
}

#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/BasicMicrophoneCapture.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Dissonance/Audio/Capture/zzzz__BasicMicrophoneCapture_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__BufferedSampleProvider_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__IFrameProvider_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__IMicrophoneCapture_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__IMicrophoneDeviceList_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__IMicrophoneSubscriber_def.hpp"
#include "Dissonance/Audio/zzzz__AudioFileWriter_def.hpp"
#include "Dissonance/Datastructures/zzzz__POTBuffer_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasicMicrophoneCapture.get_Clip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::Dissonance::Audio::Capture::BasicMicrophoneCapture::*)()>(&::Dissonance::Audio::Capture::BasicMicrophoneCapture::get_Clip)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"get_Clip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasicMicrophoneCapture.get_Device
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Audio::Capture::BasicMicrophoneCapture::*)()>(&::Dissonance::Audio::Capture::BasicMicrophoneCapture::get_Device)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"get_Device", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasicMicrophoneCapture.get_Latency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::Dissonance::Audio::Capture::BasicMicrophoneCapture::*)()>(&::Dissonance::Audio::Capture::BasicMicrophoneCapture::get_Latency)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"get_Latency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasicMicrophoneCapture.set_Latency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasicMicrophoneCapture::*)(::System::TimeSpan)>(&::Dissonance::Audio::Capture::BasicMicrophoneCapture::set_Latency)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180511590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"set_Latency", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasicMicrophoneCapture.get_IsRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Capture::BasicMicrophoneCapture::*)()>(&::Dissonance::Audio::Capture::BasicMicrophoneCapture::get_IsRecording)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805f3820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"get_IsRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasicMicrophoneCapture.StartCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NAudio::Wave::WaveFormat* (::Dissonance::Audio::Capture::BasicMicrophoneCapture::*)(::StringW)>(&::Dissonance::Audio::Capture::BasicMicrophoneCapture::StartCapture)> {
  constexpr static std::size_t size = 0x680;
  constexpr static std::size_t addrs = 0x1805f2d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasicMicrophoneCapture.ChooseMicName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Dissonance::Audio::Capture::BasicMicrophoneCapture::ChooseMicName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805f23d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"ChooseMicName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasicMicrophoneCapture.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasicMicrophoneCapture::*)()>(&::Dissonance::Audio::Capture::BasicMicrophoneCapture::OnDestroy)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805f29e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasicMicrophoneCapture.StopCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasicMicrophoneCapture::*)()>(&::Dissonance::Audio::Capture::BasicMicrophoneCapture::StopCapture)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1805f3380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasicMicrophoneCapture.OnAudioDeviceChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasicMicrophoneCapture::*)(bool)>(&::Dissonance::Audio::Capture::BasicMicrophoneCapture::OnAudioDeviceChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805f29d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"OnAudioDeviceChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasicMicrophoneCapture.UpdateSubscribers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Capture::BasicMicrophoneCapture::*)()>(&::Dissonance::Audio::Capture::BasicMicrophoneCapture::UpdateSubscribers)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1805f35b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"UpdateSubscribers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasicMicrophoneCapture.DrainMicSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasicMicrophoneCapture::*)()>(&::Dissonance::Audio::Capture::BasicMicrophoneCapture::DrainMicSamples)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x1805f2530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"DrainMicSamples", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasicMicrophoneCapture.ConsumeSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasicMicrophoneCapture::*)(::System::ArraySegment_1<float_t>)>(&::Dissonance::Audio::Capture::BasicMicrophoneCapture::ConsumeSamples)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805f2460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"ConsumeSamples", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasicMicrophoneCapture.SendFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasicMicrophoneCapture::*)()>(&::Dissonance::Audio::Capture::BasicMicrophoneCapture::SendFrame)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1805f2a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"SendFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasicMicrophoneCapture.Subscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasicMicrophoneCapture::*)(::Dissonance::Audio::Capture::IMicrophoneSubscriber*)>(&::Dissonance::Audio::Capture::BasicMicrophoneCapture::Subscribe)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805f34f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"Subscribe", {}, {::i2c::type_of<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasicMicrophoneCapture.Unsubscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Capture::BasicMicrophoneCapture::*)(::Dissonance::Audio::Capture::IMicrophoneSubscriber*)>(&::Dissonance::Audio::Capture::BasicMicrophoneCapture::Unsubscribe)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805f3570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"Unsubscribe", {}, {::i2c::type_of<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasicMicrophoneCapture.GetDevices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasicMicrophoneCapture::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::Dissonance::Audio::Capture::BasicMicrophoneCapture::GetDevices)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805f2990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"GetDevices", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::BasicMicrophoneCapture._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::BasicMicrophoneCapture::*)()>(&::Dissonance::Audio::Capture::BasicMicrophoneCapture::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805f37a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint8_t& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__maxReadBufferPower()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxReadBufferPower;
}
constexpr uint8_t const& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__maxReadBufferPower() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxReadBufferPower;
}
constexpr void Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_set__maxReadBufferPower(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxReadBufferPower = value;
}
constexpr ::Dissonance::Datastructures::POTBuffer*& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__readBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readBuffer;
}
constexpr ::Dissonance::Datastructures::POTBuffer* const& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__readBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readBuffer;
}
constexpr void Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_set__readBuffer(::Dissonance::Datastructures::POTBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readBuffer = value;
}
constexpr ::Dissonance::Audio::Capture::BufferedSampleProvider*& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__rawMicSamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rawMicSamples;
}
constexpr ::Dissonance::Audio::Capture::BufferedSampleProvider* const& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__rawMicSamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rawMicSamples;
}
constexpr void Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_set__rawMicSamples(::Dissonance::Audio::Capture::BufferedSampleProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rawMicSamples = value;
}
constexpr ::Dissonance::Audio::Capture::IFrameProvider*& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__rawMicFrames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rawMicFrames;
}
constexpr ::Dissonance::Audio::Capture::IFrameProvider* const& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__rawMicFrames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rawMicFrames;
}
constexpr void Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_set__rawMicFrames(::Dissonance::Audio::Capture::IFrameProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rawMicFrames = value;
}
constexpr ::ArrayW<float_t>& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__frame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frame;
}
constexpr ::ArrayW<float_t> const& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__frame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frame;
}
constexpr void Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_set__frame(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frame = value;
}
constexpr ::NAudio::Wave::WaveFormat*& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__format()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____format;
}
constexpr ::NAudio::Wave::WaveFormat* const& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__format() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____format;
}
constexpr void Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_set__format(::NAudio::Wave::WaveFormat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____format = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__clip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__clip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clip;
}
constexpr void Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_set__clip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clip = value;
}
constexpr int32_t& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__readHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readHead;
}
constexpr int32_t const& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__readHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readHead;
}
constexpr void Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_set__readHead(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readHead = value;
}
constexpr bool& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
constexpr ::StringW& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__micName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micName;
}
constexpr ::StringW const& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__micName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micName;
}
constexpr void Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_set__micName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____micName = value;
}
constexpr bool& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__audioDeviceChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioDeviceChanged;
}
constexpr bool const& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__audioDeviceChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioDeviceChanged;
}
constexpr void Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_set__audioDeviceChanged(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioDeviceChanged = value;
}
constexpr ::Dissonance::Audio::AudioFileWriter*& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__microphoneDiagnosticOutput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneDiagnosticOutput;
}
constexpr ::Dissonance::Audio::AudioFileWriter* const& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__microphoneDiagnosticOutput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneDiagnosticOutput;
}
constexpr void Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_set__microphoneDiagnosticOutput(::Dissonance::Audio::AudioFileWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____microphoneDiagnosticOutput = value;
}
constexpr ::System::Collections::Generic::List_1<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>*& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__subscribers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subscribers;
}
constexpr ::System::Collections::Generic::List_1<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>* const& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__subscribers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subscribers;
}
constexpr void Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_set__subscribers(::System::Collections::Generic::List_1<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____subscribers = value;
}
constexpr ::System::TimeSpan& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__Latency_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Latency_k__BackingField;
}
constexpr ::System::TimeSpan const& Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_get__Latency_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Latency_k__BackingField;
}
constexpr void Dissonance::Audio::Capture::BasicMicrophoneCapture::__cordl_internal_set__Latency_k__BackingField(::System::TimeSpan  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Latency_k__BackingField = value;
}
inline void Dissonance::Audio::Capture::BasicMicrophoneCapture::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Audio::Capture::BasicMicrophoneCapture::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Capture::BasicMicrophoneCapture*>();
}
inline ::UnityW<::UnityEngine::AudioClip> Dissonance::Audio::Capture::BasicMicrophoneCapture::get_Clip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"get_Clip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline ::StringW Dissonance::Audio::Capture::BasicMicrophoneCapture::get_Device()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"get_Device", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::TimeSpan Dissonance::Audio::Capture::BasicMicrophoneCapture::get_Latency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"get_Latency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::BasicMicrophoneCapture::set_Latency(::System::TimeSpan  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"set_Latency", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::Audio::Capture::BasicMicrophoneCapture::get_IsRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"get_IsRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::NAudio::Wave::WaveFormat* Dissonance::Audio::Capture::BasicMicrophoneCapture::StartCapture(::StringW  inputMicName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::NAudio::Wave::WaveFormat*>(this, ___internal_method, inputMicName);
}
inline ::StringW Dissonance::Audio::Capture::BasicMicrophoneCapture::ChooseMicName(::StringW  micName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"ChooseMicName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, micName);
}
inline void Dissonance::Audio::Capture::BasicMicrophoneCapture::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::BasicMicrophoneCapture::StopCapture()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::BasicMicrophoneCapture::OnAudioDeviceChanged(bool  deviceWasChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"OnAudioDeviceChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deviceWasChanged);
}
inline bool Dissonance::Audio::Capture::BasicMicrophoneCapture::UpdateSubscribers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"UpdateSubscribers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::BasicMicrophoneCapture::DrainMicSamples()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"DrainMicSamples", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::BasicMicrophoneCapture::ConsumeSamples(::System::ArraySegment_1<float_t>  samples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"ConsumeSamples", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samples);
}
inline void Dissonance::Audio::Capture::BasicMicrophoneCapture::SendFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"SendFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::BasicMicrophoneCapture::Subscribe(::Dissonance::Audio::Capture::IMicrophoneSubscriber*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"Subscribe", {}, {::i2c::type_of<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline bool Dissonance::Audio::Capture::BasicMicrophoneCapture::Unsubscribe(::Dissonance::Audio::Capture::IMicrophoneSubscriber*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"Unsubscribe", {}, {::i2c::type_of<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, listener);
}
inline void Dissonance::Audio::Capture::BasicMicrophoneCapture::GetDevices(::System::Collections::Generic::List_1<::StringW>*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {"GetDevices", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline void Dissonance::Audio::Capture::BasicMicrophoneCapture::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Audio::Capture::BasicMicrophoneCapture* Dissonance::Audio::Capture::BasicMicrophoneCapture::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Capture::BasicMicrophoneCapture*>());
}
/// @brief Convert operator to "::Dissonance::Audio::Capture::IMicrophoneCapture"
constexpr  Dissonance::Audio::Capture::BasicMicrophoneCapture::operator ::Dissonance::Audio::Capture::IMicrophoneCapture*() noexcept {
return static_cast<::Dissonance::Audio::Capture::IMicrophoneCapture*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Capture::IMicrophoneCapture"
constexpr ::Dissonance::Audio::Capture::IMicrophoneCapture* Dissonance::Audio::Capture::BasicMicrophoneCapture::i___Dissonance__Audio__Capture__IMicrophoneCapture() noexcept {
return static_cast<::Dissonance::Audio::Capture::IMicrophoneCapture*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Dissonance::Audio::Capture::IMicrophoneDeviceList"
constexpr  Dissonance::Audio::Capture::BasicMicrophoneCapture::operator ::Dissonance::Audio::Capture::IMicrophoneDeviceList*() noexcept {
return static_cast<::Dissonance::Audio::Capture::IMicrophoneDeviceList*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Capture::IMicrophoneDeviceList"
constexpr ::Dissonance::Audio::Capture::IMicrophoneDeviceList* Dissonance::Audio::Capture::BasicMicrophoneCapture::i___Dissonance__Audio__Capture__IMicrophoneDeviceList() noexcept {
return static_cast<::Dissonance::Audio::Capture::IMicrophoneDeviceList*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Capture::BasicMicrophoneCapture::BasicMicrophoneCapture()   {
}

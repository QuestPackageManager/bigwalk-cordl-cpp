#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/CapturePipelineManager.hpp"
#include "Dissonance/zzzz__FrameSkipDetector_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/Capture/zzzz__CapturePipelineManager_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__EncoderPipeline_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__IAmplitudeProvider_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__IMicrophoneCapture_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__IMicrophoneSubscriber_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__IPreprocessingPipeline_def.hpp"
#include "Dissonance/Networking/zzzz__ICommsNetwork_def.hpp"
#include "Dissonance/Networking/zzzz__NetworkMode_def.hpp"
#include "Dissonance/VAD/zzzz__IVoiceActivationListener_def.hpp"
#include "Dissonance/zzzz__CodecSettingsLoader_def.hpp"
#include "Dissonance/zzzz__ILossEstimator_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "Dissonance/zzzz__PacketLossMonitor_def.hpp"
#include "Dissonance/zzzz__PlayerChannels_def.hpp"
#include "Dissonance/zzzz__RoomChannels_def.hpp"
#include "Dissonance/zzzz__VoicePlayerState_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Capture::CapturePipelineManager.get_Microphone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Capture::IMicrophoneCapture* (::Dissonance::Audio::Capture::CapturePipelineManager::*)()>(&::Dissonance::Audio::Capture::CapturePipelineManager::get_Microphone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"get_Microphone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::CapturePipelineManager.get_MicrophoneName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Audio::Capture::CapturePipelineManager::*)()>(&::Dissonance::Audio::Capture::CapturePipelineManager::get_MicrophoneName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180312ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"get_MicrophoneName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::CapturePipelineManager.set_MicrophoneName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::CapturePipelineManager::*)(::StringW)>(&::Dissonance::Audio::Capture::CapturePipelineManager::set_MicrophoneName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805f4db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"set_MicrophoneName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::CapturePipelineManager.get_PacketLoss
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Capture::CapturePipelineManager::*)()>(&::Dissonance::Audio::Capture::CapturePipelineManager::get_PacketLoss)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805f4d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"get_PacketLoss", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::CapturePipelineManager.get_Amplitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Capture::CapturePipelineManager::*)()>(&::Dissonance::Audio::Capture::CapturePipelineManager::get_Amplitude)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805f4d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"get_Amplitude", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::CapturePipelineManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::CapturePipelineManager::*)(::Dissonance::CodecSettingsLoader*, ::Dissonance::RoomChannels*, ::Dissonance::PlayerChannels*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*, int32_t)>(&::Dissonance::Audio::Capture::CapturePipelineManager::_ctor)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1805f4b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::CodecSettingsLoader*>(), ::i2c::type_of<::Dissonance::RoomChannels*>(), ::i2c::type_of<::Dissonance::PlayerChannels*>(), ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::CapturePipelineManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::CapturePipelineManager::*)(::Dissonance::Networking::ICommsNetwork*, ::Dissonance::Audio::Capture::IMicrophoneCapture*)>(&::Dissonance::Audio::Capture::CapturePipelineManager::Start)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1805f4240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"Start", {}, {::i2c::type_of<::Dissonance::Networking::ICommsNetwork*>(), ::i2c::type_of<::Dissonance::Audio::Capture::IMicrophoneCapture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::CapturePipelineManager.OnAudioDeviceChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::CapturePipelineManager::*)(bool)>(&::Dissonance::Audio::Capture::CapturePipelineManager::OnAudioDeviceChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805f3b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"OnAudioDeviceChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::CapturePipelineManager.IsMobilePlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Dissonance::Audio::Capture::CapturePipelineManager::IsMobilePlatform)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805f3b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"IsMobilePlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::CapturePipelineManager.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::CapturePipelineManager::*)()>(&::Dissonance::Audio::Capture::CapturePipelineManager::Destroy)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805f3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"Destroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::CapturePipelineManager.Net_ModeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::CapturePipelineManager::*)(::Dissonance::Networking::NetworkMode)>(&::Dissonance::Audio::Capture::CapturePipelineManager::Net_ModeChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805f3b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"Net_ModeChanged", {}, {::i2c::type_of<::Dissonance::Networking::NetworkMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::CapturePipelineManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::CapturePipelineManager::*)(bool, float_t)>(&::Dissonance::Audio::Capture::CapturePipelineManager::Update)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x1805f4710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"Update", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::CapturePipelineManager.StopTransmissionPipeline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::CapturePipelineManager::*)()>(&::Dissonance::Audio::Capture::CapturePipelineManager::StopTransmissionPipeline)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805f43a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"StopTransmissionPipeline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::CapturePipelineManager.RestartTransmissionPipeline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::CapturePipelineManager::*)(::StringW)>(&::Dissonance::Audio::Capture::CapturePipelineManager::RestartTransmissionPipeline)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x1805f3ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"RestartTransmissionPipeline", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::CapturePipelineManager.CreatePreprocessor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Capture::IPreprocessingPipeline* (::Dissonance::Audio::Capture::CapturePipelineManager::*)(::NAudio::Wave::WaveFormat*)>(&::Dissonance::Audio::Capture::CapturePipelineManager::CreatePreprocessor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805f39b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::CapturePipelineManager.Subscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::CapturePipelineManager::*)(::Dissonance::VAD::IVoiceActivationListener*)>(&::Dissonance::Audio::Capture::CapturePipelineManager::Subscribe)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805f4550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"Subscribe", {}, {::i2c::type_of<::Dissonance::VAD::IVoiceActivationListener*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::CapturePipelineManager.Unsubscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::CapturePipelineManager::*)(::Dissonance::VAD::IVoiceActivationListener*)>(&::Dissonance::Audio::Capture::CapturePipelineManager::Unsubscribe)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805f4690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"Unsubscribe", {}, {::i2c::type_of<::Dissonance::VAD::IVoiceActivationListener*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::CapturePipelineManager.Subscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::CapturePipelineManager::*)(::Dissonance::Audio::Capture::IMicrophoneSubscriber*)>(&::Dissonance::Audio::Capture::CapturePipelineManager::Subscribe)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805f4490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"Subscribe", {}, {::i2c::type_of<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::CapturePipelineManager.Unsubscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::CapturePipelineManager::*)(::Dissonance::Audio::Capture::IMicrophoneSubscriber*)>(&::Dissonance::Audio::Capture::CapturePipelineManager::Unsubscribe)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805f4610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"Unsubscribe", {}, {::i2c::type_of<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::CapturePipelineManager.Pause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::CapturePipelineManager::*)()>(&::Dissonance::Audio::Capture::CapturePipelineManager::Pause)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805f3b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"Pause", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::CapturePipelineManager.Resume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::CapturePipelineManager::*)(::StringW)>(&::Dissonance::Audio::Capture::CapturePipelineManager::Resume)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805f4210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"Resume", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::CapturePipelineManager.ForceReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::CapturePipelineManager::*)()>(&::Dissonance::Audio::Capture::CapturePipelineManager::ForceReset)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805f3ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"ForceReset", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__isMobilePlatform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMobilePlatform;
}
constexpr bool const& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__isMobilePlatform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMobilePlatform;
}
constexpr void Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_set__isMobilePlatform(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isMobilePlatform = value;
}
constexpr ::Dissonance::CodecSettingsLoader*& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__codecSettingsLoader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codecSettingsLoader;
}
constexpr ::Dissonance::CodecSettingsLoader* const& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__codecSettingsLoader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codecSettingsLoader;
}
constexpr void Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_set__codecSettingsLoader(::Dissonance::CodecSettingsLoader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____codecSettingsLoader = value;
}
constexpr ::Dissonance::RoomChannels*& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__roomChannels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomChannels;
}
constexpr ::Dissonance::RoomChannels* const& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__roomChannels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomChannels;
}
constexpr void Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_set__roomChannels(::Dissonance::RoomChannels*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____roomChannels = value;
}
constexpr ::Dissonance::PlayerChannels*& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__playerChannels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerChannels;
}
constexpr ::Dissonance::PlayerChannels* const& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__playerChannels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerChannels;
}
constexpr void Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_set__playerChannels(::Dissonance::PlayerChannels*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerChannels = value;
}
constexpr ::Dissonance::PacketLossMonitor*& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__receivingPacketLossMonitor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivingPacketLossMonitor;
}
constexpr ::Dissonance::PacketLossMonitor* const& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__receivingPacketLossMonitor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivingPacketLossMonitor;
}
constexpr void Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_set__receivingPacketLossMonitor(::Dissonance::PacketLossMonitor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____receivingPacketLossMonitor = value;
}
constexpr ::Dissonance::Networking::ICommsNetwork*& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__network()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____network;
}
constexpr ::Dissonance::Networking::ICommsNetwork* const& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__network() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____network;
}
constexpr void Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_set__network(::Dissonance::Networking::ICommsNetwork*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____network = value;
}
constexpr ::Dissonance::Audio::Capture::IMicrophoneCapture*& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__microphone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphone;
}
constexpr ::Dissonance::Audio::Capture::IMicrophoneCapture* const& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__microphone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphone;
}
constexpr void Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_set__microphone(::Dissonance::Audio::Capture::IMicrophoneCapture*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____microphone = value;
}
constexpr ::Dissonance::Audio::Capture::IPreprocessingPipeline*& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__preprocessor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preprocessor;
}
constexpr ::Dissonance::Audio::Capture::IPreprocessingPipeline* const& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__preprocessor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preprocessor;
}
constexpr void Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_set__preprocessor(::Dissonance::Audio::Capture::IPreprocessingPipeline*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____preprocessor = value;
}
constexpr ::Dissonance::Audio::Capture::EncoderPipeline*& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__encoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoder;
}
constexpr ::Dissonance::Audio::Capture::EncoderPipeline* const& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__encoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoder;
}
constexpr void Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_set__encoder(::Dissonance::Audio::Capture::EncoderPipeline*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encoder = value;
}
constexpr bool& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__encounteredFatalException()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encounteredFatalException;
}
constexpr bool const& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__encounteredFatalException() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encounteredFatalException;
}
constexpr void Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_set__encounteredFatalException(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encounteredFatalException = value;
}
constexpr bool& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__netModeRequiresPipeline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____netModeRequiresPipeline;
}
constexpr bool const& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__netModeRequiresPipeline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____netModeRequiresPipeline;
}
constexpr void Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_set__netModeRequiresPipeline(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____netModeRequiresPipeline = value;
}
constexpr bool& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__cannotStartMic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cannotStartMic;
}
constexpr bool const& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__cannotStartMic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cannotStartMic;
}
constexpr void Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_set__cannotStartMic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cannotStartMic = value;
}
constexpr bool& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__encoderSubscribed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoderSubscribed;
}
constexpr bool const& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__encoderSubscribed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoderSubscribed;
}
constexpr void Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_set__encoderSubscribed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encoderSubscribed = value;
}
constexpr int32_t& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__startupDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startupDelay;
}
constexpr int32_t const& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__startupDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startupDelay;
}
constexpr void Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_set__startupDelay(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startupDelay = value;
}
constexpr ::Dissonance::FrameSkipDetector& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__skipDetector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skipDetector;
}
constexpr ::Dissonance::FrameSkipDetector const& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__skipDetector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skipDetector;
}
constexpr void Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_set__skipDetector(::Dissonance::FrameSkipDetector  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____skipDetector = value;
}
constexpr ::System::Collections::Generic::List_1<::Dissonance::VAD::IVoiceActivationListener*>*& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__activationListeners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activationListeners;
}
constexpr ::System::Collections::Generic::List_1<::Dissonance::VAD::IVoiceActivationListener*>* const& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__activationListeners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activationListeners;
}
constexpr void Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_set__activationListeners(::System::Collections::Generic::List_1<::Dissonance::VAD::IVoiceActivationListener*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activationListeners = value;
}
constexpr ::System::Collections::Generic::List_1<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>*& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__audioListeners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioListeners;
}
constexpr ::System::Collections::Generic::List_1<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>* const& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__audioListeners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioListeners;
}
constexpr void Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_set__audioListeners(::System::Collections::Generic::List_1<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioListeners = value;
}
constexpr ::StringW& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__micName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micName;
}
constexpr ::StringW const& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__micName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micName;
}
constexpr void Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_set__micName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____micName = value;
}
constexpr bool& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__pendingResetRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingResetRequest;
}
constexpr bool const& Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_get__pendingResetRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingResetRequest;
}
constexpr void Dissonance::Audio::Capture::CapturePipelineManager::__cordl_internal_set__pendingResetRequest(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pendingResetRequest = value;
}
inline void Dissonance::Audio::Capture::CapturePipelineManager::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Capture::CapturePipelineManager*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Audio::Capture::CapturePipelineManager::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Capture::CapturePipelineManager*>();
}
inline ::Dissonance::Audio::Capture::IMicrophoneCapture* Dissonance::Audio::Capture::CapturePipelineManager::get_Microphone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"get_Microphone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Capture::IMicrophoneCapture*>(this, ___internal_method);
}
inline ::StringW Dissonance::Audio::Capture::CapturePipelineManager::get_MicrophoneName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"get_MicrophoneName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::CapturePipelineManager::set_MicrophoneName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"set_MicrophoneName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Dissonance::Audio::Capture::CapturePipelineManager::get_PacketLoss()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"get_PacketLoss", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Dissonance::Audio::Capture::CapturePipelineManager::get_Amplitude()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"get_Amplitude", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::CapturePipelineManager::_ctor(::Dissonance::CodecSettingsLoader*  codecSettingsLoader, ::Dissonance::RoomChannels*  roomChannels, ::Dissonance::PlayerChannels*  playerChannels, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*  players, int32_t  startupDelay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::CodecSettingsLoader*>(), ::i2c::type_of<::Dissonance::RoomChannels*>(), ::i2c::type_of<::Dissonance::PlayerChannels*>(), ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, codecSettingsLoader, roomChannels, playerChannels, players, startupDelay);
}
inline void Dissonance::Audio::Capture::CapturePipelineManager::Start(::Dissonance::Networking::ICommsNetwork*  network, ::Dissonance::Audio::Capture::IMicrophoneCapture*  microphone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"Start", {}, {::i2c::type_of<::Dissonance::Networking::ICommsNetwork*>(), ::i2c::type_of<::Dissonance::Audio::Capture::IMicrophoneCapture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, network, microphone);
}
inline void Dissonance::Audio::Capture::CapturePipelineManager::OnAudioDeviceChanged(bool  devicewaschanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"OnAudioDeviceChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, devicewaschanged);
}
inline bool Dissonance::Audio::Capture::CapturePipelineManager::IsMobilePlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"IsMobilePlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Dissonance::Audio::Capture::CapturePipelineManager::Destroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"Destroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::CapturePipelineManager::Net_ModeChanged(::Dissonance::Networking::NetworkMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"Net_ModeChanged", {}, {::i2c::type_of<::Dissonance::Networking::NetworkMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline void Dissonance::Audio::Capture::CapturePipelineManager::Update(bool  muted, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"Update", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, muted, deltaTime);
}
inline void Dissonance::Audio::Capture::CapturePipelineManager::StopTransmissionPipeline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"StopTransmissionPipeline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::CapturePipelineManager::RestartTransmissionPipeline(::StringW  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"RestartTransmissionPipeline", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
inline ::Dissonance::Audio::Capture::IPreprocessingPipeline* Dissonance::Audio::Capture::CapturePipelineManager::CreatePreprocessor(::NAudio::Wave::WaveFormat*  format)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Capture::IPreprocessingPipeline*>(this, ___internal_method, format);
}
inline void Dissonance::Audio::Capture::CapturePipelineManager::Subscribe(::Dissonance::VAD::IVoiceActivationListener*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"Subscribe", {}, {::i2c::type_of<::Dissonance::VAD::IVoiceActivationListener*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline void Dissonance::Audio::Capture::CapturePipelineManager::Unsubscribe(::Dissonance::VAD::IVoiceActivationListener*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"Unsubscribe", {}, {::i2c::type_of<::Dissonance::VAD::IVoiceActivationListener*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline void Dissonance::Audio::Capture::CapturePipelineManager::Subscribe(::Dissonance::Audio::Capture::IMicrophoneSubscriber*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"Subscribe", {}, {::i2c::type_of<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline void Dissonance::Audio::Capture::CapturePipelineManager::Unsubscribe(::Dissonance::Audio::Capture::IMicrophoneSubscriber*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"Unsubscribe", {}, {::i2c::type_of<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline void Dissonance::Audio::Capture::CapturePipelineManager::Pause()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"Pause", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::CapturePipelineManager::Resume(::StringW  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"Resume", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
inline void Dissonance::Audio::Capture::CapturePipelineManager::ForceReset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::CapturePipelineManager*>(),
                        {"ForceReset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Audio::Capture::CapturePipelineManager* Dissonance::Audio::Capture::CapturePipelineManager::New_ctor(::Dissonance::CodecSettingsLoader*  codecSettingsLoader, ::Dissonance::RoomChannels*  roomChannels, ::Dissonance::PlayerChannels*  playerChannels, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::VoicePlayerState*>*  players, int32_t  startupDelay)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Capture::CapturePipelineManager*>(codecSettingsLoader, roomChannels, playerChannels, players, startupDelay));
}
/// @brief Convert operator to "::Dissonance::Audio::Capture::IAmplitudeProvider"
constexpr  Dissonance::Audio::Capture::CapturePipelineManager::operator ::Dissonance::Audio::Capture::IAmplitudeProvider*() noexcept {
return static_cast<::Dissonance::Audio::Capture::IAmplitudeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Capture::IAmplitudeProvider"
constexpr ::Dissonance::Audio::Capture::IAmplitudeProvider* Dissonance::Audio::Capture::CapturePipelineManager::i___Dissonance__Audio__Capture__IAmplitudeProvider() noexcept {
return static_cast<::Dissonance::Audio::Capture::IAmplitudeProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Dissonance::ILossEstimator"
constexpr  Dissonance::Audio::Capture::CapturePipelineManager::operator ::Dissonance::ILossEstimator*() noexcept {
return static_cast<::Dissonance::ILossEstimator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::ILossEstimator"
constexpr ::Dissonance::ILossEstimator* Dissonance::Audio::Capture::CapturePipelineManager::i___Dissonance__ILossEstimator() noexcept {
return static_cast<::Dissonance::ILossEstimator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Capture::CapturePipelineManager::CapturePipelineManager()   {
}

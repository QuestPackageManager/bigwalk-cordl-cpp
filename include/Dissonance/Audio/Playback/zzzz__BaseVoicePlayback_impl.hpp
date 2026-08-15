#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/BaseVoicePlayback.hpp"
#include "Dissonance/Audio/Playback/zzzz__FrameFormat_impl.hpp"
#include "Dissonance/zzzz__CodecSettings_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Dissonance/Audio/Playback/zzzz__BaseVoicePlayback_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IPriorityManager_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IRemoteChannelProvider_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IVoicePlaybackInternal_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IVoicePlayback_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IVolumeProvider_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__PlaybackOptions_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__SpeechSessionStream_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__SpeechSession_def.hpp"
#include "Dissonance/Networking/zzzz__VoicePacket_def.hpp"
#include "Dissonance/zzzz__ChannelPriority_def.hpp"
#include "Dissonance/zzzz__CodecSettings_def.hpp"
#include "Dissonance/zzzz__RemoteChannel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.get_LatestPlaybackOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Dissonance::Audio::Playback::PlaybackOptions> (::Dissonance::Audio::Playback::BaseVoicePlayback::*)()>(&::Dissonance::Audio::Playback::BaseVoicePlayback::get_LatestPlaybackOptions)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1805d8b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"get_LatestPlaybackOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.get_Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Dissonance::Audio::Playback::BaseVoicePlayback::*)()>(&::Dissonance::Audio::Playback::BaseVoicePlayback::get_Transform)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805d8d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"get_Transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.get_IsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Playback::BaseVoicePlayback::*)()>(&::Dissonance::Audio::Playback::BaseVoicePlayback::get_IsActive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d8aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"get_IsActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.get_AllowPositionalPlayback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Playback::BaseVoicePlayback::*)()>(&::Dissonance::Audio::Playback::BaseVoicePlayback::get_AllowPositionalPlayback)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180347a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"get_AllowPositionalPlayback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.set_AllowPositionalPlayback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::BaseVoicePlayback::*)(bool)>(&::Dissonance::Audio::Playback::BaseVoicePlayback::set_AllowPositionalPlayback)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180452bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"set_AllowPositionalPlayback", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.get_IsMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Playback::BaseVoicePlayback::*)()>(&::Dissonance::Audio::Playback::BaseVoicePlayback::get_IsMuted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d8ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"get_IsMuted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.set_IsMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::BaseVoicePlayback::*)(bool)>(&::Dissonance::Audio::Playback::BaseVoicePlayback::set_IsMuted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d8d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"set_IsMuted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.get_PlaybackVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Playback::BaseVoicePlayback::*)()>(&::Dissonance::Audio::Playback::BaseVoicePlayback::get_PlaybackVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"get_PlaybackVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.set_PlaybackVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::BaseVoicePlayback::*)(float_t)>(&::Dissonance::Audio::Playback::BaseVoicePlayback::set_PlaybackVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"set_PlaybackVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.get_PlayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Audio::Playback::BaseVoicePlayback::*)()>(&::Dissonance::Audio::Playback::BaseVoicePlayback::get_PlayerName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805d8ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"get_PlayerName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.set_PlayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::BaseVoicePlayback::*)(::StringW)>(&::Dissonance::Audio::Playback::BaseVoicePlayback::set_PlayerName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d8d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"set_PlayerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.Dissonance_Audio_Playback_IVoicePlayback_get_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::ChannelPriority (::Dissonance::Audio::Playback::BaseVoicePlayback::*)()>(&::Dissonance::Audio::Playback::BaseVoicePlayback::Dissonance_Audio_Playback_IVoicePlayback_get_Priority)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805d86c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"Dissonance.Audio.Playback.IVoicePlayback.get_Priority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.Dissonance_Audio_Playback_IVolumeProvider_get_TargetVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Playback::BaseVoicePlayback::*)()>(&::Dissonance::Audio::Playback::BaseVoicePlayback::Dissonance_Audio_Playback_IVolumeProvider_get_TargetVolume)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805d8720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"Dissonance.Audio.Playback.IVolumeProvider.get_TargetVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.get_Jitter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Playback::BaseVoicePlayback::*)()>(&::Dissonance::Audio::Playback::BaseVoicePlayback::get_Jitter)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805d8af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"get_Jitter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.get_PacketLoss
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<float_t> (::Dissonance::Audio::Playback::BaseVoicePlayback::*)()>(&::Dissonance::Audio::Playback::BaseVoicePlayback::get_PacketLoss)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d8c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"get_PacketLoss", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.get_IsSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Playback::BaseVoicePlayback::*)()>(&::Dissonance::Audio::Playback::BaseVoicePlayback::get_IsSpeaking)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805d8ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"get_IsSpeaking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.Dissonance_Audio_Playback_IVoicePlaybackInternal_get_CodecSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::CodecSettings (::Dissonance::Audio::Playback::BaseVoicePlayback::*)()>(&::Dissonance::Audio::Playback::BaseVoicePlayback::Dissonance_Audio_Playback_IVoicePlaybackInternal_get_CodecSettings)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805d85c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"Dissonance.Audio.Playback.IVoicePlaybackInternal.get_CodecSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.Dissonance_Audio_Playback_IVoicePlaybackInternal_set_CodecSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::BaseVoicePlayback::*)(::Dissonance::CodecSettings)>(&::Dissonance::Audio::Playback::BaseVoicePlayback::Dissonance_Audio_Playback_IVoicePlaybackInternal_set_CodecSettings)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805d85e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"Dissonance.Audio.Playback.IVoicePlaybackInternal.set_CodecSettings", {}, {::i2c::type_of<::Dissonance::CodecSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::BaseVoicePlayback::*)()>(&::Dissonance::Audio::Playback::BaseVoicePlayback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805d89e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::BaseVoicePlayback::*)(::Dissonance::Audio::Playback::IPriorityManager*, ::Dissonance::Audio::Playback::IVolumeProvider*)>(&::Dissonance::Audio::Playback::BaseVoicePlayback::Setup)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805d8950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::BaseVoicePlayback::*)()>(&::Dissonance::Audio::Playback::BaseVoicePlayback::Start)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::BaseVoicePlayback::*)()>(&::Dissonance::Audio::Playback::BaseVoicePlayback::OnDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::BaseVoicePlayback::*)()>(&::Dissonance::Audio::Playback::BaseVoicePlayback::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::BaseVoicePlayback::*)()>(&::Dissonance::Audio::Playback::BaseVoicePlayback::OnDisable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805d8870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::BaseVoicePlayback::*)()>(&::Dissonance::Audio::Playback::BaseVoicePlayback::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.GetRemoteChannels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::BaseVoicePlayback::*)(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*)>(&::Dissonance::Audio::Playback::BaseVoicePlayback::GetRemoteChannels)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d87e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"GetRemoteChannels", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.Dissonance_Audio_Playback_IVoicePlaybackInternal_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::BaseVoicePlayback::*)()>(&::Dissonance::Audio::Playback::BaseVoicePlayback::Dissonance_Audio_Playback_IVoicePlaybackInternal_Reset)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1805d8350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"Dissonance.Audio.Playback.IVoicePlaybackInternal.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.Dissonance_Audio_Playback_IVoicePlaybackInternal_SetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::BaseVoicePlayback::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Dissonance::Audio::Playback::BaseVoicePlayback::Dissonance_Audio_Playback_IVoicePlaybackInternal_SetTransform)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805d8480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"Dissonance.Audio.Playback.IVoicePlaybackInternal.SetTransform", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.SetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::BaseVoicePlayback::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Dissonance::Audio::Playback::BaseVoicePlayback::SetTransform)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805d88b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.Dissonance_Audio_Playback_IVoicePlaybackInternal_StartPlayback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::BaseVoicePlayback::*)()>(&::Dissonance::Audio::Playback::BaseVoicePlayback::Dissonance_Audio_Playback_IVoicePlaybackInternal_StartPlayback)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805d84c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"Dissonance.Audio.Playback.IVoicePlaybackInternal.StartPlayback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.Dissonance_Audio_Playback_IVoicePlaybackInternal_StopPlayback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::BaseVoicePlayback::*)()>(&::Dissonance::Audio::Playback::BaseVoicePlayback::Dissonance_Audio_Playback_IVoicePlaybackInternal_StopPlayback)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805d8520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"Dissonance.Audio.Playback.IVoicePlaybackInternal.StopPlayback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.Dissonance_Audio_Playback_IVoicePlaybackInternal_ReceiveAudioPacket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::BaseVoicePlayback::*)(::Dissonance::Networking::VoicePacket)>(&::Dissonance::Audio::Playback::BaseVoicePlayback::Dissonance_Audio_Playback_IVoicePlaybackInternal_ReceiveAudioPacket)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1805d8160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"Dissonance.Audio.Playback.IVoicePlaybackInternal.ReceiveAudioPacket", {}, {::i2c::type_of<::Dissonance::Networking::VoicePacket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.Dissonance_Audio_Playback_IVoicePlaybackInternal_ForceReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::BaseVoicePlayback::*)()>(&::Dissonance::Audio::Playback::BaseVoicePlayback::Dissonance_Audio_Playback_IVoicePlaybackInternal_ForceReset)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805d8060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"Dissonance.Audio.Playback.IVoicePlaybackInternal.ForceReset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.TryDequeueSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession> (::Dissonance::Audio::Playback::BaseVoicePlayback::*)(::System::Nullable_1<int32_t>)>(&::Dissonance::Audio::Playback::BaseVoicePlayback::TryDequeueSession)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805d8990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"TryDequeueSession", {}, {::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.TryGetActiveSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession> (::Dissonance::Audio::Playback::BaseVoicePlayback::*)()>(&::Dissonance::Audio::Playback::BaseVoicePlayback::TryGetActiveSession)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::BaseVoicePlayback.get_Amplitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Playback::BaseVoicePlayback::*)()>(&::Dissonance::Audio::Playback::BaseVoicePlayback::get_Amplitude)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(), 38}
                ));
    return ___internal_method;
  }
};
constexpr ::Dissonance::Audio::Playback::IPriorityManager*& Dissonance::Audio::Playback::BaseVoicePlayback::__cordl_internal_get__priorityManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____priorityManager;
}
constexpr ::Dissonance::Audio::Playback::IPriorityManager* const& Dissonance::Audio::Playback::BaseVoicePlayback::__cordl_internal_get__priorityManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____priorityManager;
}
constexpr void Dissonance::Audio::Playback::BaseVoicePlayback::__cordl_internal_set__priorityManager(::Dissonance::Audio::Playback::IPriorityManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____priorityManager = value;
}
constexpr ::Dissonance::Audio::Playback::IVolumeProvider*& Dissonance::Audio::Playback::BaseVoicePlayback::__cordl_internal_get__volumeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeProvider;
}
constexpr ::Dissonance::Audio::Playback::IVolumeProvider* const& Dissonance::Audio::Playback::BaseVoicePlayback::__cordl_internal_get__volumeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeProvider;
}
constexpr void Dissonance::Audio::Playback::BaseVoicePlayback::__cordl_internal_set__volumeProvider(::Dissonance::Audio::Playback::IVolumeProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____volumeProvider = value;
}
constexpr ::Dissonance::Audio::Playback::SpeechSessionStream*& Dissonance::Audio::Playback::BaseVoicePlayback::__cordl_internal_get__sessions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessions;
}
constexpr ::Dissonance::Audio::Playback::SpeechSessionStream* const& Dissonance::Audio::Playback::BaseVoicePlayback::__cordl_internal_get__sessions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessions;
}
constexpr void Dissonance::Audio::Playback::BaseVoicePlayback::__cordl_internal_set__sessions(::Dissonance::Audio::Playback::SpeechSessionStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sessions = value;
}
constexpr ::Dissonance::Audio::Playback::FrameFormat& Dissonance::Audio::Playback::BaseVoicePlayback::__cordl_internal_get__frameFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameFormat;
}
constexpr ::Dissonance::Audio::Playback::FrameFormat const& Dissonance::Audio::Playback::BaseVoicePlayback::__cordl_internal_get__frameFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameFormat;
}
constexpr void Dissonance::Audio::Playback::BaseVoicePlayback::__cordl_internal_set__frameFormat(::Dissonance::Audio::Playback::FrameFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frameFormat = value;
}
constexpr ::Dissonance::CodecSettings& Dissonance::Audio::Playback::BaseVoicePlayback::__cordl_internal_get__codecSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codecSettings;
}
constexpr ::Dissonance::CodecSettings const& Dissonance::Audio::Playback::BaseVoicePlayback::__cordl_internal_get__codecSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codecSettings;
}
constexpr void Dissonance::Audio::Playback::BaseVoicePlayback::__cordl_internal_set__codecSettings(::Dissonance::CodecSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____codecSettings = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Dissonance::Audio::Playback::BaseVoicePlayback::__cordl_internal_get__transformCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformCache;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Dissonance::Audio::Playback::BaseVoicePlayback::__cordl_internal_get__transformCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformCache;
}
constexpr void Dissonance::Audio::Playback::BaseVoicePlayback::__cordl_internal_set__transformCache(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transformCache = value;
}
constexpr bool& Dissonance::Audio::Playback::BaseVoicePlayback::__cordl_internal_get__AllowPositionalPlayback_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowPositionalPlayback_k__BackingField;
}
constexpr bool const& Dissonance::Audio::Playback::BaseVoicePlayback::__cordl_internal_get__AllowPositionalPlayback_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowPositionalPlayback_k__BackingField;
}
constexpr void Dissonance::Audio::Playback::BaseVoicePlayback::__cordl_internal_set__AllowPositionalPlayback_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AllowPositionalPlayback_k__BackingField = value;
}
constexpr bool& Dissonance::Audio::Playback::BaseVoicePlayback::__cordl_internal_get__IsMuted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsMuted_k__BackingField;
}
constexpr bool const& Dissonance::Audio::Playback::BaseVoicePlayback::__cordl_internal_get__IsMuted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsMuted_k__BackingField;
}
constexpr void Dissonance::Audio::Playback::BaseVoicePlayback::__cordl_internal_set__IsMuted_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsMuted_k__BackingField = value;
}
constexpr float_t& Dissonance::Audio::Playback::BaseVoicePlayback::__cordl_internal_get__PlaybackVolume_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlaybackVolume_k__BackingField;
}
constexpr float_t const& Dissonance::Audio::Playback::BaseVoicePlayback::__cordl_internal_get__PlaybackVolume_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlaybackVolume_k__BackingField;
}
constexpr void Dissonance::Audio::Playback::BaseVoicePlayback::__cordl_internal_set__PlaybackVolume_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlaybackVolume_k__BackingField = value;
}
inline ::System::Nullable_1<::Dissonance::Audio::Playback::PlaybackOptions> Dissonance::Audio::Playback::BaseVoicePlayback::get_LatestPlaybackOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"get_LatestPlaybackOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Dissonance::Audio::Playback::PlaybackOptions>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Dissonance::Audio::Playback::BaseVoicePlayback::get_Transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"get_Transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline bool Dissonance::Audio::Playback::BaseVoicePlayback::get_IsActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"get_IsActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Dissonance::Audio::Playback::BaseVoicePlayback::get_AllowPositionalPlayback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"get_AllowPositionalPlayback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::BaseVoicePlayback::set_AllowPositionalPlayback(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"set_AllowPositionalPlayback", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::Audio::Playback::BaseVoicePlayback::get_IsMuted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"get_IsMuted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::BaseVoicePlayback::set_IsMuted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"set_IsMuted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Dissonance::Audio::Playback::BaseVoicePlayback::get_PlaybackVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"get_PlaybackVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::BaseVoicePlayback::set_PlaybackVolume(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"set_PlaybackVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Dissonance::Audio::Playback::BaseVoicePlayback::get_PlayerName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"get_PlayerName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::BaseVoicePlayback::set_PlayerName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"set_PlayerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Dissonance::ChannelPriority Dissonance::Audio::Playback::BaseVoicePlayback::Dissonance_Audio_Playback_IVoicePlayback_get_Priority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"Dissonance.Audio.Playback.IVoicePlayback.get_Priority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelPriority>(this, ___internal_method);
}
inline float_t Dissonance::Audio::Playback::BaseVoicePlayback::Dissonance_Audio_Playback_IVolumeProvider_get_TargetVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"Dissonance.Audio.Playback.IVolumeProvider.get_TargetVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Dissonance::Audio::Playback::BaseVoicePlayback::get_Jitter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"get_Jitter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::System::Nullable_1<float_t> Dissonance::Audio::Playback::BaseVoicePlayback::get_PacketLoss()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"get_PacketLoss", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<float_t>>(this, ___internal_method);
}
inline bool Dissonance::Audio::Playback::BaseVoicePlayback::get_IsSpeaking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"get_IsSpeaking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Dissonance::CodecSettings Dissonance::Audio::Playback::BaseVoicePlayback::Dissonance_Audio_Playback_IVoicePlaybackInternal_get_CodecSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"Dissonance.Audio.Playback.IVoicePlaybackInternal.get_CodecSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::CodecSettings>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::BaseVoicePlayback::Dissonance_Audio_Playback_IVoicePlaybackInternal_set_CodecSettings(::Dissonance::CodecSettings  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"Dissonance.Audio.Playback.IVoicePlaybackInternal.set_CodecSettings", {}, {::i2c::type_of<::Dissonance::CodecSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Audio::Playback::BaseVoicePlayback::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::BaseVoicePlayback::Setup(::Dissonance::Audio::Playback::IPriorityManager*  priority, ::Dissonance::Audio::Playback::IVolumeProvider*  volume)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, priority, volume);
}
inline void Dissonance::Audio::Playback::BaseVoicePlayback::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::BaseVoicePlayback::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::BaseVoicePlayback::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::BaseVoicePlayback::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::BaseVoicePlayback::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::BaseVoicePlayback::GetRemoteChannels(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"GetRemoteChannels", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline void Dissonance::Audio::Playback::BaseVoicePlayback::Dissonance_Audio_Playback_IVoicePlaybackInternal_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"Dissonance.Audio.Playback.IVoicePlaybackInternal.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::BaseVoicePlayback::Dissonance_Audio_Playback_IVoicePlaybackInternal_SetTransform(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"Dissonance.Audio.Playback.IVoicePlaybackInternal.SetTransform", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, rot);
}
inline void Dissonance::Audio::Playback::BaseVoicePlayback::SetTransform(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, rot);
}
inline void Dissonance::Audio::Playback::BaseVoicePlayback::Dissonance_Audio_Playback_IVoicePlaybackInternal_StartPlayback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"Dissonance.Audio.Playback.IVoicePlaybackInternal.StartPlayback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::BaseVoicePlayback::Dissonance_Audio_Playback_IVoicePlaybackInternal_StopPlayback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"Dissonance.Audio.Playback.IVoicePlaybackInternal.StopPlayback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::BaseVoicePlayback::Dissonance_Audio_Playback_IVoicePlaybackInternal_ReceiveAudioPacket(::Dissonance::Networking::VoicePacket  packet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"Dissonance.Audio.Playback.IVoicePlaybackInternal.ReceiveAudioPacket", {}, {::i2c::type_of<::Dissonance::Networking::VoicePacket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
inline void Dissonance::Audio::Playback::BaseVoicePlayback::Dissonance_Audio_Playback_IVoicePlaybackInternal_ForceReset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"Dissonance.Audio.Playback.IVoicePlaybackInternal.ForceReset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession> Dissonance::Audio::Playback::BaseVoicePlayback::TryDequeueSession(::System::Nullable_1<int32_t>  outputRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(),
                        {"TryDequeueSession", {}, {::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession>>(this, ___internal_method, outputRate);
}
inline ::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession> Dissonance::Audio::Playback::BaseVoicePlayback::TryGetActiveSession()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession>>(this, ___internal_method);
}
inline float_t Dissonance::Audio::Playback::BaseVoicePlayback::get_Amplitude()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::BaseVoicePlayback*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::BaseVoicePlayback* Dissonance::Audio::Playback::BaseVoicePlayback::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Playback::BaseVoicePlayback*>());
}
/// @brief Convert operator to "::Dissonance::Audio::Playback::IVoicePlaybackInternal"
constexpr  Dissonance::Audio::Playback::BaseVoicePlayback::operator ::Dissonance::Audio::Playback::IVoicePlaybackInternal*() noexcept {
return static_cast<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Playback::IVoicePlaybackInternal"
constexpr ::Dissonance::Audio::Playback::IVoicePlaybackInternal* Dissonance::Audio::Playback::BaseVoicePlayback::i___Dissonance__Audio__Playback__IVoicePlaybackInternal() noexcept {
return static_cast<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Dissonance::Audio::Playback::IRemoteChannelProvider"
constexpr  Dissonance::Audio::Playback::BaseVoicePlayback::operator ::Dissonance::Audio::Playback::IRemoteChannelProvider*() noexcept {
return static_cast<::Dissonance::Audio::Playback::IRemoteChannelProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Playback::IRemoteChannelProvider"
constexpr ::Dissonance::Audio::Playback::IRemoteChannelProvider* Dissonance::Audio::Playback::BaseVoicePlayback::i___Dissonance__Audio__Playback__IRemoteChannelProvider() noexcept {
return static_cast<::Dissonance::Audio::Playback::IRemoteChannelProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Dissonance::Audio::Playback::IVoicePlayback"
constexpr  Dissonance::Audio::Playback::BaseVoicePlayback::operator ::Dissonance::Audio::Playback::IVoicePlayback*() noexcept {
return static_cast<::Dissonance::Audio::Playback::IVoicePlayback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Playback::IVoicePlayback"
constexpr ::Dissonance::Audio::Playback::IVoicePlayback* Dissonance::Audio::Playback::BaseVoicePlayback::i___Dissonance__Audio__Playback__IVoicePlayback() noexcept {
return static_cast<::Dissonance::Audio::Playback::IVoicePlayback*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Dissonance::Audio::Playback::IVolumeProvider"
constexpr  Dissonance::Audio::Playback::BaseVoicePlayback::operator ::Dissonance::Audio::Playback::IVolumeProvider*() noexcept {
return static_cast<::Dissonance::Audio::Playback::IVolumeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Playback::IVolumeProvider"
constexpr ::Dissonance::Audio::Playback::IVolumeProvider* Dissonance::Audio::Playback::BaseVoicePlayback::i___Dissonance__Audio__Playback__IVolumeProvider() noexcept {
return static_cast<::Dissonance::Audio::Playback::IVolumeProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Playback::BaseVoicePlayback::BaseVoicePlayback()   {
}

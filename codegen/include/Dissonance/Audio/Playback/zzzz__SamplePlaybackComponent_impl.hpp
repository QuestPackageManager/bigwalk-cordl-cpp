#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/SamplePlaybackComponent.hpp"
#include "Dissonance/Audio/Playback/zzzz__SessionContext_impl.hpp"
#include "Dissonance/Audio/Playback/zzzz__SpeechSession_impl.hpp"
#include "GlobalNamespace/zzzz__VoiceCompressor_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Dissonance/Audio/Playback/zzzz__SamplePlaybackComponent_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__SpeechSession_def.hpp"
#include "Dissonance/Audio/zzzz__AudioFileWriter_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "GlobalNamespace/zzzz__IAudioFilter_def.hpp"
#include "GlobalNamespace/zzzz__IVoiceDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__VoiceCompressor_def.hpp"
#include "System/Threading/zzzz__ReaderWriterLockSlim_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.get_HasActiveSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)()>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::get_HasActiveSession)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805e8f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"get_HasActiveSession", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.get_Session
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession> (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)()>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::get_Session)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805e8fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"get_Session", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.set_Session
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)(::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession>)>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::set_Session)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805e90e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"set_Session", {}, {::i2c::type_of<::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.get_ARV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)()>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::get_ARV)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805e8f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"get_ARV", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.get_PreClipPeak
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)()>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::get_PreClipPeak)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805e8fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"get_PreClipPeak", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.get_OutputARV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)()>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::get_OutputARV)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805e8f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"get_OutputARV", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.get_CompressorReduction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)()>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::get_CompressorReduction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805e8f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"get_CompressorReduction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.get_CachedVoiceData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)()>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::get_CachedVoiceData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"get_CachedVoiceData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.set_CachedVoiceData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)(::ArrayW<float_t>)>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::set_CachedVoiceData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803d3a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"set_CachedVoiceData", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.get_CachedVoiceWriteHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)()>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::get_CachedVoiceWriteHead)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805e8f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"get_CachedVoiceWriteHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.set_CachedVoiceWriteHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)(int32_t)>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::set_CachedVoiceWriteHead)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805e90c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"set_CachedVoiceWriteHead", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.get_RecommendedVoiceReadHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)()>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::get_RecommendedVoiceReadHead)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805e8fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"get_RecommendedVoiceReadHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.add_OnWriteHeadJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)(::System::Action*)>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::add_OnWriteHeadJump)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805e8e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"add_OnWriteHeadJump", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.remove_OnWriteHeadJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)(::System::Action*)>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::remove_OnWriteHeadJump)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805e9010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"remove_OnWriteHeadJump", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.get_InternalBypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)()>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::get_InternalBypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805e8f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"get_InternalBypass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.set_InternalBypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)(bool)>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::set_InternalBypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805e90d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"set_InternalBypass", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.get_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)()>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::get_Bypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805e8f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"get_Bypass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.set_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)(bool)>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::set_Bypass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805e90b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"set_Bypass", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.get_AmplitudeOnlyMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)()>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::get_AmplitudeOnlyMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805e8f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"get_AmplitudeOnlyMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.set_AmplitudeOnlyMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)(bool)>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::set_AmplitudeOnlyMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805e90a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"set_AmplitudeOnlyMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)(::Dissonance::Audio::Playback::SpeechSession)>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::Play)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x1805e8120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"Play", {}, {::i2c::type_of<::Dissonance::Audio::Playback::SpeechSession>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)()>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::Start)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805e8d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)()>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::OnEnable)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1805e7fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)()>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::OnDisable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805e7f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.UpdateVariables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)(float_t)>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::UpdateVariables)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"UpdateVariables", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.ProcessSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)(::by_ref<::ArrayW<float_t>>, int32_t)>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::ProcessSamples)> {
  constexpr static std::size_t size = 0x8f0;
  constexpr static std::size_t addrs = 0x1805e8450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"ProcessSamples", {}, {::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.ApplyReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)()>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::ApplyReset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805e7a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"ApplyReset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.SoftClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::SoftClip)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805e8d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"SoftClip", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Dissonance::Audio::Playback::SpeechSession, ::ArrayW<float_t>, int32_t, ::ArrayW<float_t>, ::Dissonance::Audio::AudioFileWriter*, ::ArrayW<float_t>, int32_t, bool, float_t, ::by_ref<float_t>, ::by_ref<::GlobalNamespace::VoiceCompressor>, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::Filter)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x1805e7a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"Filter", {}, {::i2c::type_of<::Dissonance::Audio::Playback::SpeechSession>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::Dissonance::Audio::AudioFileWriter*>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::VoiceCompressor>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent.InitializeRawBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)(bool)>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::InitializeRawBuffer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805e7e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"InitializeRawBuffer", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::SamplePlaybackComponent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::SamplePlaybackComponent::*)()>(&::Dissonance::Audio::Playback::SamplePlaybackComponent::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805e8e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t>& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__temp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____temp;
}
constexpr ::ArrayW<float_t> const& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__temp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____temp;
}
constexpr void Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_set__temp(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____temp = value;
}
constexpr ::Dissonance::Audio::AudioFileWriter*& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__diagnosticOutput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____diagnosticOutput;
}
constexpr ::Dissonance::Audio::AudioFileWriter* const& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__diagnosticOutput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____diagnosticOutput;
}
constexpr void Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_set__diagnosticOutput(::Dissonance::Audio::AudioFileWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____diagnosticOutput = value;
}
constexpr ::Dissonance::Audio::Playback::SessionContext& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__lastPlayedSessionContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastPlayedSessionContext;
}
constexpr ::Dissonance::Audio::Playback::SessionContext const& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__lastPlayedSessionContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastPlayedSessionContext;
}
constexpr void Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_set__lastPlayedSessionContext(::Dissonance::Audio::Playback::SessionContext  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastPlayedSessionContext = value;
}
constexpr ::System::Threading::ReaderWriterLockSlim*& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__sessionLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessionLock;
}
constexpr ::System::Threading::ReaderWriterLockSlim* const& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__sessionLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessionLock;
}
constexpr void Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_set__sessionLock(::System::Threading::ReaderWriterLockSlim*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sessionLock = value;
}
constexpr ::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession>& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__Session_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Session_k__BackingField;
}
constexpr ::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession> const& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__Session_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Session_k__BackingField;
}
constexpr void Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_set__Session_k__BackingField(::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Session_k__BackingField = value;
}
constexpr float_t& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__arv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arv;
}
constexpr float_t const& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__arv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arv;
}
constexpr void Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_set__arv(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____arv = value;
}
constexpr float_t& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__preClipPeak()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preClipPeak;
}
constexpr float_t const& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__preClipPeak() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preClipPeak;
}
constexpr void Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_set__preClipPeak(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____preClipPeak = value;
}
constexpr float_t& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__outputArv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputArv;
}
constexpr float_t const& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__outputArv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputArv;
}
constexpr void Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_set__outputArv(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputArv = value;
}
constexpr float_t& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__compressorReduction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compressorReduction;
}
constexpr float_t const& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__compressorReduction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compressorReduction;
}
constexpr void Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_set__compressorReduction(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____compressorReduction = value;
}
constexpr float_t& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get_MakeupGain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MakeupGain;
}
constexpr float_t const& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get_MakeupGain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MakeupGain;
}
constexpr void Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_set_MakeupGain(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MakeupGain = value;
}
constexpr float_t& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__currentGain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentGain;
}
constexpr float_t const& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__currentGain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentGain;
}
constexpr void Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_set__currentGain(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentGain = value;
}
constexpr ::GlobalNamespace::VoiceCompressor& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__compressor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compressor;
}
constexpr ::GlobalNamespace::VoiceCompressor const& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__compressor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compressor;
}
constexpr void Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_set__compressor(::GlobalNamespace::VoiceCompressor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____compressor = value;
}
constexpr ::ArrayW<float_t>& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__CachedVoiceData_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CachedVoiceData_k__BackingField;
}
constexpr ::ArrayW<float_t> const& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__CachedVoiceData_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CachedVoiceData_k__BackingField;
}
constexpr void Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_set__CachedVoiceData_k__BackingField(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CachedVoiceData_k__BackingField = value;
}
constexpr int32_t& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__CachedVoiceWriteHead_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CachedVoiceWriteHead_k__BackingField;
}
constexpr int32_t const& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__CachedVoiceWriteHead_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CachedVoiceWriteHead_k__BackingField;
}
constexpr void Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_set__CachedVoiceWriteHead_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CachedVoiceWriteHead_k__BackingField = value;
}
constexpr ::System::Action*& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get_OnWriteHeadJump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnWriteHeadJump;
}
constexpr ::System::Action* const& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get_OnWriteHeadJump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnWriteHeadJump;
}
constexpr void Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_set_OnWriteHeadJump(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnWriteHeadJump = value;
}
constexpr bool& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__internalBypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalBypass;
}
constexpr bool const& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__internalBypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalBypass;
}
constexpr void Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_set__internalBypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____internalBypass = value;
}
constexpr bool& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__bypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypass;
}
constexpr bool const& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__bypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypass;
}
constexpr void Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_set__bypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bypass = value;
}
constexpr bool& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__AmplitudeOnlyMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AmplitudeOnlyMode_k__BackingField;
}
constexpr bool const& Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_get__AmplitudeOnlyMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AmplitudeOnlyMode_k__BackingField;
}
constexpr void Dissonance::Audio::Playback::SamplePlaybackComponent::__cordl_internal_set__AmplitudeOnlyMode_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AmplitudeOnlyMode_k__BackingField = value;
}
inline void Dissonance::Audio::Playback::SamplePlaybackComponent::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Playback::SamplePlaybackComponent*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Audio::Playback::SamplePlaybackComponent::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Playback::SamplePlaybackComponent*>();
}
inline bool Dissonance::Audio::Playback::SamplePlaybackComponent::get_HasActiveSession()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"get_HasActiveSession", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession> Dissonance::Audio::Playback::SamplePlaybackComponent::get_Session()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"get_Session", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession>>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::SamplePlaybackComponent::set_Session(::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"set_Session", {}, {::i2c::type_of<::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Dissonance::Audio::Playback::SamplePlaybackComponent::get_ARV()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"get_ARV", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Dissonance::Audio::Playback::SamplePlaybackComponent::get_PreClipPeak()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"get_PreClipPeak", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Dissonance::Audio::Playback::SamplePlaybackComponent::get_OutputARV()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"get_OutputARV", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Dissonance::Audio::Playback::SamplePlaybackComponent::get_CompressorReduction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"get_CompressorReduction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::ArrayW<float_t> Dissonance::Audio::Playback::SamplePlaybackComponent::get_CachedVoiceData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"get_CachedVoiceData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::SamplePlaybackComponent::set_CachedVoiceData(::ArrayW<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"set_CachedVoiceData", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Dissonance::Audio::Playback::SamplePlaybackComponent::get_CachedVoiceWriteHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"get_CachedVoiceWriteHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::SamplePlaybackComponent::set_CachedVoiceWriteHead(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"set_CachedVoiceWriteHead", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Dissonance::Audio::Playback::SamplePlaybackComponent::get_RecommendedVoiceReadHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"get_RecommendedVoiceReadHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::SamplePlaybackComponent::add_OnWriteHeadJump(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"add_OnWriteHeadJump", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Audio::Playback::SamplePlaybackComponent::remove_OnWriteHeadJump(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"remove_OnWriteHeadJump", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::Audio::Playback::SamplePlaybackComponent::get_InternalBypass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"get_InternalBypass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::SamplePlaybackComponent::set_InternalBypass(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"set_InternalBypass", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::Audio::Playback::SamplePlaybackComponent::get_Bypass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"get_Bypass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::SamplePlaybackComponent::set_Bypass(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"set_Bypass", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::Audio::Playback::SamplePlaybackComponent::get_AmplitudeOnlyMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"get_AmplitudeOnlyMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::SamplePlaybackComponent::set_AmplitudeOnlyMode(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"set_AmplitudeOnlyMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Audio::Playback::SamplePlaybackComponent::Play(::Dissonance::Audio::Playback::SpeechSession  session)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"Play", {}, {::i2c::type_of<::Dissonance::Audio::Playback::SpeechSession>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, session);
}
inline void Dissonance::Audio::Playback::SamplePlaybackComponent::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::SamplePlaybackComponent::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::SamplePlaybackComponent::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::SamplePlaybackComponent::UpdateVariables(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"UpdateVariables", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void Dissonance::Audio::Playback::SamplePlaybackComponent::ProcessSamples(::by_ref<::ArrayW<float_t>>  data, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"ProcessSamples", {}, {::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channels);
}
inline void Dissonance::Audio::Playback::SamplePlaybackComponent::ApplyReset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"ApplyReset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Dissonance::Audio::Playback::SamplePlaybackComponent::SoftClip(float_t  sample, float_t  magnitude)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"SoftClip", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, sample, magnitude);
}
inline bool Dissonance::Audio::Playback::SamplePlaybackComponent::Filter(::Dissonance::Audio::Playback::SpeechSession  session, ::ArrayW<float_t>  output, int32_t  channels, ::ArrayW<float_t>  temp, ::Dissonance::Audio::AudioFileWriter*  diagnosticOutput, ::ArrayW<float_t>  raw, int32_t  rawWritePos, bool  bypass, float_t  targetGain, ::by_ref<float_t>  currentGain, ::by_ref<::GlobalNamespace::VoiceCompressor>  compressor, ::by_ref<float_t>  arv, ::by_ref<float_t>  outputArv, ::by_ref<float_t>  preClipPeak, ::by_ref<float_t>  reduction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"Filter", {}, {::i2c::type_of<::Dissonance::Audio::Playback::SpeechSession>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::Dissonance::Audio::AudioFileWriter*>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::VoiceCompressor>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, session, output, channels, temp, diagnosticOutput, raw, rawWritePos, bypass, targetGain, currentGain, compressor, arv, outputArv, preClipPeak, reduction);
}
inline void Dissonance::Audio::Playback::SamplePlaybackComponent::InitializeRawBuffer(bool  deviceWasChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {"InitializeRawBuffer", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deviceWasChanged);
}
inline void Dissonance::Audio::Playback::SamplePlaybackComponent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::SamplePlaybackComponent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::SamplePlaybackComponent* Dissonance::Audio::Playback::SamplePlaybackComponent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Playback::SamplePlaybackComponent*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioFilter"
constexpr  Dissonance::Audio::Playback::SamplePlaybackComponent::operator ::GlobalNamespace::IAudioFilter*() noexcept {
return static_cast<::GlobalNamespace::IAudioFilter*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioFilter"
constexpr ::GlobalNamespace::IAudioFilter* Dissonance::Audio::Playback::SamplePlaybackComponent::i___GlobalNamespace__IAudioFilter() noexcept {
return static_cast<::GlobalNamespace::IAudioFilter*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IVoiceDataProvider"
constexpr  Dissonance::Audio::Playback::SamplePlaybackComponent::operator ::GlobalNamespace::IVoiceDataProvider*() noexcept {
return static_cast<::GlobalNamespace::IVoiceDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IVoiceDataProvider"
constexpr ::GlobalNamespace::IVoiceDataProvider* Dissonance::Audio::Playback::SamplePlaybackComponent::i___GlobalNamespace__IVoiceDataProvider() noexcept {
return static_cast<::GlobalNamespace::IVoiceDataProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Playback::SamplePlaybackComponent::SamplePlaybackComponent()   {
}

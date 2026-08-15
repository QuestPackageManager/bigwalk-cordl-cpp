#pragma once
// IWYU pragma private; include "GlobalNamespace/SoundCue.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_impl.hpp"
#include "GlobalNamespace/zzzz__VoiceLimitBehaviorType_impl.hpp"
#include "GlobalNamespace/zzzz__VoltageControlledAmplifier_impl.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "GlobalNamespace/zzzz__AudioBus_def.hpp"
#include "GlobalNamespace/zzzz__AudioOcclusionConfig_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCTerm_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCXProvider_def.hpp"
#include "GlobalNamespace/zzzz__AudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__ISoundBankable_def.hpp"
#include "GlobalNamespace/zzzz__ISoundCueProvider_def.hpp"
#include "GlobalNamespace/zzzz__IVirtualizable_def.hpp"
#include "GlobalNamespace/zzzz__VoiceLimitBehaviorType_def.hpp"
#include "GlobalNamespace/zzzz__VoltageControlledAmplifier_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_Clip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_Clip)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_Clip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.set_Clip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundCue::*)(::UnityEngine::AudioClip*)>(&::GlobalNamespace::SoundCue::set_Clip)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_Clip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_Priority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_Priority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.set_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundCue::*)(int32_t)>(&::GlobalNamespace::SoundCue::set_Priority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803164e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_Priority", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_Bus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioBus> (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_Bus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_Bus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.set_Bus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundCue::*)(::GlobalNamespace::AudioBus*)>(&::GlobalNamespace::SoundCue::set_Bus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_Bus", {}, {::i2c::type_of<::GlobalNamespace::AudioBus*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_Volume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolume* (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_Volume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_Volume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.set_Volume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundCue::*)(::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::SoundCue::set_Volume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_Volume", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_Pitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_Pitch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f7fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_Pitch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.set_Pitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundCue::*)(float_t)>(&::GlobalNamespace::SoundCue::set_Pitch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_Pitch", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_Pan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_Pan)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_Pan", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.set_Pan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundCue::*)(float_t)>(&::GlobalNamespace::SoundCue::set_Pan)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_Pan", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_SpatialBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_SpatialBlend)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_SpatialBlend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.set_SpatialBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundCue::*)(float_t)>(&::GlobalNamespace::SoundCue::set_SpatialBlend)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_SpatialBlend", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_Spread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_Spread)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_Spread", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.set_Spread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundCue::*)(float_t)>(&::GlobalNamespace::SoundCue::set_Spread)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180307250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_Spread", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_Doppler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_Doppler)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_Doppler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.set_Doppler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundCue::*)(float_t)>(&::GlobalNamespace::SoundCue::set_Doppler)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_Doppler", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_Loop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_Loop)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804a5a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_Loop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.set_Loop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundCue::*)(bool)>(&::GlobalNamespace::SoundCue::set_Loop)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804a5a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_Loop", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_RandomTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_RandomTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804a5a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_RandomTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.set_RandomTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundCue::*)(bool)>(&::GlobalNamespace::SoundCue::set_RandomTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804a5a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_RandomTime", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_FadeIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_FadeIn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180356140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_FadeIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.set_FadeIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundCue::*)(float_t)>(&::GlobalNamespace::SoundCue::set_FadeIn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803561c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_FadeIn", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_FadeOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_FadeOut)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180315260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_FadeOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.set_FadeOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundCue::*)(float_t)>(&::GlobalNamespace::SoundCue::set_FadeOut)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803dccc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_FadeOut", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_RTPCXProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioRTPCXProvider> (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_RTPCXProvider)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_RTPCXProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.set_RTPCXProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundCue::*)(::GlobalNamespace::AudioRTPCXProvider*)>(&::GlobalNamespace::SoundCue::set_RTPCXProvider)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_RTPCXProvider", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPCXProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_OcclusionConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioOcclusionConfig> (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_OcclusionConfig)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_OcclusionConfig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.set_OcclusionConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundCue::*)(::GlobalNamespace::AudioOcclusionConfig*)>(&::GlobalNamespace::SoundCue::set_OcclusionConfig)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d49a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_OcclusionConfig", {}, {::i2c::type_of<::GlobalNamespace::AudioOcclusionConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_VoiceLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_VoiceLimit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d5ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_VoiceLimit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.set_VoiceLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundCue::*)(int32_t)>(&::GlobalNamespace::SoundCue::set_VoiceLimit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d5ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_VoiceLimit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_VoiceLimitBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::VoiceLimitBehaviorType (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_VoiceLimitBehavior)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803fa750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_VoiceLimitBehavior", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.set_VoiceLimitBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundCue::*)(::GlobalNamespace::VoiceLimitBehaviorType)>(&::GlobalNamespace::SoundCue::set_VoiceLimitBehavior)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804a5a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_VoiceLimitBehavior", {}, {::i2c::type_of<::GlobalNamespace::VoiceLimitBehaviorType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_Cooldown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_Cooldown)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_Cooldown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.set_Cooldown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundCue::*)(float_t)>(&::GlobalNamespace::SoundCue::set_Cooldown)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_Cooldown", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_Delay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_Delay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180483530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_Delay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.set_Delay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundCue::*)(float_t)>(&::GlobalNamespace::SoundCue::set_Delay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804a5a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_Delay", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_Offset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_Offset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180483520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_Offset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.set_Offset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundCue::*)(float_t)>(&::GlobalNamespace::SoundCue::set_Offset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804a5a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_Offset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_DontAutoHibernate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_DontAutoHibernate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_DontAutoHibernate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_VCAs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::VoltageControlledAmplifier>> (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_VCAs)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180312ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_VCAs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_Attenuation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioRTPCTerm* (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_Attenuation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_Attenuation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_AttenuationLerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_AttenuationLerp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804a5780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_AttenuationLerp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_VolumeRTPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioRTPCTerm* (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_VolumeRTPC)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180322750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_VolumeRTPC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_VolumeRTPCLerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_VolumeRTPCLerp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d9950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_VolumeRTPCLerp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_PitchRTPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioRTPCTerm* (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_PitchRTPC)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d9940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_PitchRTPC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_PitchRTPCLerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_PitchRTPCLerp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18032ef70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_PitchRTPCLerp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_PanRTPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioRTPCTerm* (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_PanRTPC)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803223b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_PanRTPC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_PanRTPCLerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_PanRTPCLerp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_PanRTPCLerp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_SpatialBlendRTPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioRTPCTerm* (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_SpatialBlendRTPC)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_SpatialBlendRTPC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_SpatialBlendRTPCLerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_SpatialBlendRTPCLerp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_SpatialBlendRTPCLerp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_SpreadRTPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioRTPCTerm* (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_SpreadRTPC)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_SpreadRTPC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_SpreadRTPCLerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_SpreadRTPCLerp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_SpreadRTPCLerp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.get_HasRTPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::get_HasRTPC)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1804a5790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_HasRTPC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::OnEnable)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1804a5320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::OnValidate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.GetCue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SoundCue> (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::GetCue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"GetCue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue.GetAllCues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundCue>>* (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::GetAllCues)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804a52d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"GetAllCues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundCue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundCue::*)()>(&::GlobalNamespace::SoundCue::_ctor)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1804a5540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::SoundCue::__cordl_internal_get__clip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::SoundCue::__cordl_internal_get__clip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clip;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__clip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clip = value;
}
constexpr int32_t& GlobalNamespace::SoundCue::__cordl_internal_get__priority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____priority;
}
constexpr int32_t const& GlobalNamespace::SoundCue::__cordl_internal_get__priority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____priority;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__priority(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____priority = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioBus>& GlobalNamespace::SoundCue::__cordl_internal_get__bus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bus;
}
constexpr ::UnityW<::GlobalNamespace::AudioBus> const& GlobalNamespace::SoundCue::__cordl_internal_get__bus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bus;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__bus(::UnityW<::GlobalNamespace::AudioBus>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bus = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::SoundCue::__cordl_internal_get__volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volume;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::SoundCue::__cordl_internal_get__volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volume;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__volume(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____volume = value;
}
constexpr float_t& GlobalNamespace::SoundCue::__cordl_internal_get__pitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitch;
}
constexpr float_t const& GlobalNamespace::SoundCue::__cordl_internal_get__pitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitch;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__pitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pitch = value;
}
constexpr float_t& GlobalNamespace::SoundCue::__cordl_internal_get__pan()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pan;
}
constexpr float_t const& GlobalNamespace::SoundCue::__cordl_internal_get__pan() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pan;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__pan(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pan = value;
}
constexpr float_t& GlobalNamespace::SoundCue::__cordl_internal_get__spatialBlend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spatialBlend;
}
constexpr float_t const& GlobalNamespace::SoundCue::__cordl_internal_get__spatialBlend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spatialBlend;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__spatialBlend(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spatialBlend = value;
}
constexpr float_t& GlobalNamespace::SoundCue::__cordl_internal_get__spread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spread;
}
constexpr float_t const& GlobalNamespace::SoundCue::__cordl_internal_get__spread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spread;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__spread(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spread = value;
}
constexpr float_t& GlobalNamespace::SoundCue::__cordl_internal_get__doppler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doppler;
}
constexpr float_t const& GlobalNamespace::SoundCue::__cordl_internal_get__doppler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doppler;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__doppler(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doppler = value;
}
constexpr bool& GlobalNamespace::SoundCue::__cordl_internal_get__loop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loop;
}
constexpr bool const& GlobalNamespace::SoundCue::__cordl_internal_get__loop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loop;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__loop(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loop = value;
}
constexpr bool& GlobalNamespace::SoundCue::__cordl_internal_get__randomTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____randomTime;
}
constexpr bool const& GlobalNamespace::SoundCue::__cordl_internal_get__randomTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____randomTime;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__randomTime(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____randomTime = value;
}
constexpr float_t& GlobalNamespace::SoundCue::__cordl_internal_get__fadeIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeIn;
}
constexpr float_t const& GlobalNamespace::SoundCue::__cordl_internal_get__fadeIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeIn;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__fadeIn(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadeIn = value;
}
constexpr float_t& GlobalNamespace::SoundCue::__cordl_internal_get__fadeOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeOut;
}
constexpr float_t const& GlobalNamespace::SoundCue::__cordl_internal_get__fadeOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeOut;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__fadeOut(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadeOut = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider>& GlobalNamespace::SoundCue::__cordl_internal_get__rtpcxProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rtpcxProvider;
}
constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider> const& GlobalNamespace::SoundCue::__cordl_internal_get__rtpcxProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rtpcxProvider;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__rtpcxProvider(::UnityW<::GlobalNamespace::AudioRTPCXProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rtpcxProvider = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioOcclusionConfig>& GlobalNamespace::SoundCue::__cordl_internal_get__occlusionConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____occlusionConfig;
}
constexpr ::UnityW<::GlobalNamespace::AudioOcclusionConfig> const& GlobalNamespace::SoundCue::__cordl_internal_get__occlusionConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____occlusionConfig;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__occlusionConfig(::UnityW<::GlobalNamespace::AudioOcclusionConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____occlusionConfig = value;
}
constexpr int32_t& GlobalNamespace::SoundCue::__cordl_internal_get__voiceLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceLimit;
}
constexpr int32_t const& GlobalNamespace::SoundCue::__cordl_internal_get__voiceLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceLimit;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__voiceLimit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voiceLimit = value;
}
constexpr ::GlobalNamespace::VoiceLimitBehaviorType& GlobalNamespace::SoundCue::__cordl_internal_get__voiceLimitBehavior()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceLimitBehavior;
}
constexpr ::GlobalNamespace::VoiceLimitBehaviorType const& GlobalNamespace::SoundCue::__cordl_internal_get__voiceLimitBehavior() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceLimitBehavior;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__voiceLimitBehavior(::GlobalNamespace::VoiceLimitBehaviorType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voiceLimitBehavior = value;
}
constexpr float_t& GlobalNamespace::SoundCue::__cordl_internal_get__cooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cooldown;
}
constexpr float_t const& GlobalNamespace::SoundCue::__cordl_internal_get__cooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cooldown;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__cooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cooldown = value;
}
constexpr float_t& GlobalNamespace::SoundCue::__cordl_internal_get__Cooldown_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Cooldown_k__BackingField;
}
constexpr float_t const& GlobalNamespace::SoundCue::__cordl_internal_get__Cooldown_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Cooldown_k__BackingField;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__Cooldown_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Cooldown_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::SoundCue::__cordl_internal_get__delay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delay;
}
constexpr float_t const& GlobalNamespace::SoundCue::__cordl_internal_get__delay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delay;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__delay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____delay = value;
}
constexpr float_t& GlobalNamespace::SoundCue::__cordl_internal_get__Delay_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Delay_k__BackingField;
}
constexpr float_t const& GlobalNamespace::SoundCue::__cordl_internal_get__Delay_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Delay_k__BackingField;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__Delay_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Delay_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::SoundCue::__cordl_internal_get__offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr float_t const& GlobalNamespace::SoundCue::__cordl_internal_get__offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__offset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offset = value;
}
constexpr float_t& GlobalNamespace::SoundCue::__cordl_internal_get__Offset_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Offset_k__BackingField;
}
constexpr float_t const& GlobalNamespace::SoundCue::__cordl_internal_get__Offset_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Offset_k__BackingField;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__Offset_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Offset_k__BackingField = value;
}
constexpr bool& GlobalNamespace::SoundCue::__cordl_internal_get__dontHibernate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dontHibernate;
}
constexpr bool const& GlobalNamespace::SoundCue::__cordl_internal_get__dontHibernate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dontHibernate;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__dontHibernate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dontHibernate = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::VoltageControlledAmplifier>>& GlobalNamespace::SoundCue::__cordl_internal_get__vcas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vcas;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::VoltageControlledAmplifier>> const& GlobalNamespace::SoundCue::__cordl_internal_get__vcas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vcas;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__vcas(::ArrayW<::UnityW<::GlobalNamespace::VoltageControlledAmplifier>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vcas = value;
}
constexpr ::GlobalNamespace::AudioRTPCTerm*& GlobalNamespace::SoundCue::__cordl_internal_get__attenuation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attenuation;
}
constexpr ::GlobalNamespace::AudioRTPCTerm* const& GlobalNamespace::SoundCue::__cordl_internal_get__attenuation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attenuation;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__attenuation(::GlobalNamespace::AudioRTPCTerm*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attenuation = value;
}
constexpr float_t& GlobalNamespace::SoundCue::__cordl_internal_get__attenuationLerp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attenuationLerp;
}
constexpr float_t const& GlobalNamespace::SoundCue::__cordl_internal_get__attenuationLerp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attenuationLerp;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__attenuationLerp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attenuationLerp = value;
}
constexpr ::GlobalNamespace::AudioRTPCTerm*& GlobalNamespace::SoundCue::__cordl_internal_get__volumeRTPC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeRTPC;
}
constexpr ::GlobalNamespace::AudioRTPCTerm* const& GlobalNamespace::SoundCue::__cordl_internal_get__volumeRTPC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeRTPC;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__volumeRTPC(::GlobalNamespace::AudioRTPCTerm*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____volumeRTPC = value;
}
constexpr float_t& GlobalNamespace::SoundCue::__cordl_internal_get__volumeRTPCLerp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeRTPCLerp;
}
constexpr float_t const& GlobalNamespace::SoundCue::__cordl_internal_get__volumeRTPCLerp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeRTPCLerp;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__volumeRTPCLerp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____volumeRTPCLerp = value;
}
constexpr ::GlobalNamespace::AudioRTPCTerm*& GlobalNamespace::SoundCue::__cordl_internal_get__pitchRTPC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitchRTPC;
}
constexpr ::GlobalNamespace::AudioRTPCTerm* const& GlobalNamespace::SoundCue::__cordl_internal_get__pitchRTPC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitchRTPC;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__pitchRTPC(::GlobalNamespace::AudioRTPCTerm*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pitchRTPC = value;
}
constexpr float_t& GlobalNamespace::SoundCue::__cordl_internal_get__pitchRTPCLerp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitchRTPCLerp;
}
constexpr float_t const& GlobalNamespace::SoundCue::__cordl_internal_get__pitchRTPCLerp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitchRTPCLerp;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__pitchRTPCLerp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pitchRTPCLerp = value;
}
constexpr ::GlobalNamespace::AudioRTPCTerm*& GlobalNamespace::SoundCue::__cordl_internal_get__panRTPC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____panRTPC;
}
constexpr ::GlobalNamespace::AudioRTPCTerm* const& GlobalNamespace::SoundCue::__cordl_internal_get__panRTPC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____panRTPC;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__panRTPC(::GlobalNamespace::AudioRTPCTerm*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____panRTPC = value;
}
constexpr float_t& GlobalNamespace::SoundCue::__cordl_internal_get__panRTPCLerp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____panRTPCLerp;
}
constexpr float_t const& GlobalNamespace::SoundCue::__cordl_internal_get__panRTPCLerp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____panRTPCLerp;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__panRTPCLerp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____panRTPCLerp = value;
}
constexpr ::GlobalNamespace::AudioRTPCTerm*& GlobalNamespace::SoundCue::__cordl_internal_get__spatialBlendRTPC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spatialBlendRTPC;
}
constexpr ::GlobalNamespace::AudioRTPCTerm* const& GlobalNamespace::SoundCue::__cordl_internal_get__spatialBlendRTPC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spatialBlendRTPC;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__spatialBlendRTPC(::GlobalNamespace::AudioRTPCTerm*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spatialBlendRTPC = value;
}
constexpr float_t& GlobalNamespace::SoundCue::__cordl_internal_get__spatialBlendRTPCLerp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spatialBlendRTPCLerp;
}
constexpr float_t const& GlobalNamespace::SoundCue::__cordl_internal_get__spatialBlendRTPCLerp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spatialBlendRTPCLerp;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__spatialBlendRTPCLerp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spatialBlendRTPCLerp = value;
}
constexpr ::GlobalNamespace::AudioRTPCTerm*& GlobalNamespace::SoundCue::__cordl_internal_get__spreadRTPC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spreadRTPC;
}
constexpr ::GlobalNamespace::AudioRTPCTerm* const& GlobalNamespace::SoundCue::__cordl_internal_get__spreadRTPC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spreadRTPC;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__spreadRTPC(::GlobalNamespace::AudioRTPCTerm*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spreadRTPC = value;
}
constexpr float_t& GlobalNamespace::SoundCue::__cordl_internal_get__spreadRTPCLerp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spreadRTPCLerp;
}
constexpr float_t const& GlobalNamespace::SoundCue::__cordl_internal_get__spreadRTPCLerp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spreadRTPCLerp;
}
constexpr void GlobalNamespace::SoundCue::__cordl_internal_set__spreadRTPCLerp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spreadRTPCLerp = value;
}
inline ::UnityW<::UnityEngine::AudioClip> GlobalNamespace::SoundCue::get_Clip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_Clip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void GlobalNamespace::SoundCue::set_Clip(::UnityEngine::AudioClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_Clip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::SoundCue::get_Priority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_Priority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::SoundCue::set_Priority(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_Priority", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::AudioBus> GlobalNamespace::SoundCue::get_Bus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_Bus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioBus>>(this, ___internal_method);
}
inline void GlobalNamespace::SoundCue::set_Bus(::GlobalNamespace::AudioBus*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_Bus", {}, {::i2c::type_of<::GlobalNamespace::AudioBus*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioVolume* GlobalNamespace::SoundCue::get_Volume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_Volume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolume*>(this, ___internal_method);
}
inline void GlobalNamespace::SoundCue::set_Volume(::GlobalNamespace::AudioVolume*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_Volume", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::SoundCue::get_Pitch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_Pitch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SoundCue::set_Pitch(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_Pitch", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::SoundCue::get_Pan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_Pan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SoundCue::set_Pan(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_Pan", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::SoundCue::get_SpatialBlend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_SpatialBlend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SoundCue::set_SpatialBlend(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_SpatialBlend", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::SoundCue::get_Spread()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_Spread", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SoundCue::set_Spread(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_Spread", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::SoundCue::get_Doppler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_Doppler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SoundCue::set_Doppler(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_Doppler", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::SoundCue::get_Loop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_Loop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SoundCue::set_Loop(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_Loop", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::SoundCue::get_RandomTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_RandomTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SoundCue::set_RandomTime(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_RandomTime", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::SoundCue::get_FadeIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_FadeIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SoundCue::set_FadeIn(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_FadeIn", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::SoundCue::get_FadeOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_FadeOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SoundCue::set_FadeOut(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_FadeOut", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::AudioRTPCXProvider> GlobalNamespace::SoundCue::get_RTPCXProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_RTPCXProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioRTPCXProvider>>(this, ___internal_method);
}
inline void GlobalNamespace::SoundCue::set_RTPCXProvider(::GlobalNamespace::AudioRTPCXProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_RTPCXProvider", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPCXProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::AudioOcclusionConfig> GlobalNamespace::SoundCue::get_OcclusionConfig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_OcclusionConfig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioOcclusionConfig>>(this, ___internal_method);
}
inline void GlobalNamespace::SoundCue::set_OcclusionConfig(::GlobalNamespace::AudioOcclusionConfig*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_OcclusionConfig", {}, {::i2c::type_of<::GlobalNamespace::AudioOcclusionConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::SoundCue::get_VoiceLimit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_VoiceLimit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::SoundCue::set_VoiceLimit(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_VoiceLimit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::VoiceLimitBehaviorType GlobalNamespace::SoundCue::get_VoiceLimitBehavior()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_VoiceLimitBehavior", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VoiceLimitBehaviorType>(this, ___internal_method);
}
inline void GlobalNamespace::SoundCue::set_VoiceLimitBehavior(::GlobalNamespace::VoiceLimitBehaviorType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_VoiceLimitBehavior", {}, {::i2c::type_of<::GlobalNamespace::VoiceLimitBehaviorType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::SoundCue::get_Cooldown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_Cooldown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SoundCue::set_Cooldown(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_Cooldown", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::SoundCue::get_Delay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_Delay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SoundCue::set_Delay(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_Delay", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::SoundCue::get_Offset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_Offset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SoundCue::set_Offset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"set_Offset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::SoundCue::get_DontAutoHibernate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_DontAutoHibernate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::GlobalNamespace::VoltageControlledAmplifier>> GlobalNamespace::SoundCue::get_VCAs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_VCAs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::VoltageControlledAmplifier>>>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioRTPCTerm* GlobalNamespace::SoundCue::get_Attenuation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_Attenuation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioRTPCTerm*>(this, ___internal_method);
}
inline float_t GlobalNamespace::SoundCue::get_AttenuationLerp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_AttenuationLerp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioRTPCTerm* GlobalNamespace::SoundCue::get_VolumeRTPC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_VolumeRTPC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioRTPCTerm*>(this, ___internal_method);
}
inline float_t GlobalNamespace::SoundCue::get_VolumeRTPCLerp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_VolumeRTPCLerp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioRTPCTerm* GlobalNamespace::SoundCue::get_PitchRTPC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_PitchRTPC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioRTPCTerm*>(this, ___internal_method);
}
inline float_t GlobalNamespace::SoundCue::get_PitchRTPCLerp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_PitchRTPCLerp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioRTPCTerm* GlobalNamespace::SoundCue::get_PanRTPC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_PanRTPC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioRTPCTerm*>(this, ___internal_method);
}
inline float_t GlobalNamespace::SoundCue::get_PanRTPCLerp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_PanRTPCLerp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioRTPCTerm* GlobalNamespace::SoundCue::get_SpatialBlendRTPC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_SpatialBlendRTPC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioRTPCTerm*>(this, ___internal_method);
}
inline float_t GlobalNamespace::SoundCue::get_SpatialBlendRTPCLerp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_SpatialBlendRTPCLerp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioRTPCTerm* GlobalNamespace::SoundCue::get_SpreadRTPC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_SpreadRTPC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioRTPCTerm*>(this, ___internal_method);
}
inline float_t GlobalNamespace::SoundCue::get_SpreadRTPCLerp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_SpreadRTPCLerp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::SoundCue::get_HasRTPC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"get_HasRTPC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SoundCue::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SoundCue::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SoundCue> GlobalNamespace::SoundCue::GetCue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"GetCue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SoundCue>>(this, ___internal_method);
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundCue>>* GlobalNamespace::SoundCue::GetAllCues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {"GetAllCues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundCue>>*>(this, ___internal_method);
}
inline void GlobalNamespace::SoundCue::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundCue*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SoundCue* GlobalNamespace::SoundCue::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SoundCue*>());
}
/// @brief Convert operator to "::GlobalNamespace::ISoundCueProvider"
constexpr  GlobalNamespace::SoundCue::operator ::GlobalNamespace::ISoundCueProvider*() noexcept {
return static_cast<::GlobalNamespace::ISoundCueProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISoundCueProvider"
constexpr ::GlobalNamespace::ISoundCueProvider* GlobalNamespace::SoundCue::i___GlobalNamespace__ISoundCueProvider() noexcept {
return static_cast<::GlobalNamespace::ISoundCueProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ISoundBankable"
constexpr  GlobalNamespace::SoundCue::operator ::GlobalNamespace::ISoundBankable*() noexcept {
return static_cast<::GlobalNamespace::ISoundBankable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISoundBankable"
constexpr ::GlobalNamespace::ISoundBankable* GlobalNamespace::SoundCue::i___GlobalNamespace__ISoundBankable() noexcept {
return static_cast<::GlobalNamespace::ISoundBankable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IVirtualizable"
constexpr  GlobalNamespace::SoundCue::operator ::GlobalNamespace::IVirtualizable*() noexcept {
return static_cast<::GlobalNamespace::IVirtualizable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IVirtualizable"
constexpr ::GlobalNamespace::IVirtualizable* GlobalNamespace::SoundCue::i___GlobalNamespace__IVirtualizable() noexcept {
return static_cast<::GlobalNamespace::IVirtualizable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SoundCue::SoundCue()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/MusicPlayer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MusicPlayer_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__AudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__BasicDelay_def.hpp"
#include "GlobalNamespace/zzzz__BiquadFilters_def.hpp"
#include "GlobalNamespace/zzzz__Distortion_def.hpp"
#include "GlobalNamespace/zzzz__IAudioRTPCXProvider_def.hpp"
#include "GlobalNamespace/zzzz__MusicGroup_def.hpp"
#include "GlobalNamespace/zzzz__PropertyBlockHelper_def.hpp"
#include "GlobalNamespace/zzzz__WaterDepthSampleData_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MusicPlayer.get_MusicConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MusicGroup> (::GlobalNamespace::MusicPlayer::*)()>(&::GlobalNamespace::MusicPlayer::get_MusicConfig)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"get_MusicConfig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPlayer.set_MusicConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicPlayer::*)(::GlobalNamespace::MusicGroup*)>(&::GlobalNamespace::MusicPlayer::set_MusicConfig)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803d99e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"set_MusicConfig", {}, {::i2c::type_of<::GlobalNamespace::MusicGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPlayer.get_Asset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioAsset> (::GlobalNamespace::MusicPlayer::*)()>(&::GlobalNamespace::MusicPlayer::get_Asset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"get_Asset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPlayer.set_Asset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicPlayer::*)(::GlobalNamespace::AudioAsset*)>(&::GlobalNamespace::MusicPlayer::set_Asset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803d99a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"set_Asset", {}, {::i2c::type_of<::GlobalNamespace::AudioAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPlayer.get_Duration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MusicPlayer::*)()>(&::GlobalNamespace::MusicPlayer::get_Duration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d9950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"get_Duration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPlayer.set_Duration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicPlayer::*)(float_t)>(&::GlobalNamespace::MusicPlayer::set_Duration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d99d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"set_Duration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPlayer.get_ASC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioSourceController> (::GlobalNamespace::MusicPlayer::*)()>(&::GlobalNamespace::MusicPlayer::get_ASC)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d9940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"get_ASC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPlayer.set_ASC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicPlayer::*)(::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::MusicPlayer::set_ASC)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803d9970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"set_ASC", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPlayer.get_Amplitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MusicPlayer::*)()>(&::GlobalNamespace::MusicPlayer::get_Amplitude)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18032ef70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"get_Amplitude", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPlayer.set_Amplitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicPlayer::*)(float_t)>(&::GlobalNamespace::MusicPlayer::set_Amplitude)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d9990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"set_Amplitude", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPlayer.get_MusicMuteVol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolume* (*)()>(&::GlobalNamespace::MusicPlayer::get_MusicMuteVol)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803d1900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"get_MusicMuteVol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPlayer.set_MusicMuteVol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::MusicPlayer::set_MusicMuteVol)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803d9a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"set_MusicMuteVol", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPlayer.get_XProviderIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MusicPlayer::*)()>(&::GlobalNamespace::MusicPlayer::get_XProviderIdentifier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d9960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"get_XProviderIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPlayer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicPlayer::*)()>(&::GlobalNamespace::MusicPlayer::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803d8460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPlayer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicPlayer::*)()>(&::GlobalNamespace::MusicPlayer::OnEnable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803d8db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPlayer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicPlayer::*)()>(&::GlobalNamespace::MusicPlayer::OnDisable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803d8d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPlayer.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicPlayer::*)()>(&::GlobalNamespace::MusicPlayer::OnDestroy)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803d8cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPlayer.ManualUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicPlayer::*)()>(&::GlobalNamespace::MusicPlayer::ManualUpdate)> {
  constexpr static std::size_t size = 0x6f0;
  constexpr static std::size_t addrs = 0x1803d8600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"ManualUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPlayer.Sync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicPlayer::*)(float_t, float_t)>(&::GlobalNamespace::MusicPlayer::Sync)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803d9770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"Sync", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPlayer.SetSyncPitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicPlayer::*)(float_t)>(&::GlobalNamespace::MusicPlayer::SetSyncPitch)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803d96b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"SetSyncPitch", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPlayer.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicPlayer::*)(::UnityEngine::AudioClip*)>(&::GlobalNamespace::MusicPlayer::Play)> {
  constexpr static std::size_t size = 0x710;
  constexpr static std::size_t addrs = 0x1803d8e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPlayer.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicPlayer::*)(float_t)>(&::GlobalNamespace::MusicPlayer::Stop)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803d9700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"Stop", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPlayer.SetDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicPlayer::*)()>(&::GlobalNamespace::MusicPlayer::SetDuration)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803d9620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"SetDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPlayer.SetAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicPlayer::*)(::GlobalNamespace::MusicGroup*, int32_t)>(&::GlobalNamespace::MusicPlayer::SetAsset)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803d9510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"SetAsset", {}, {::i2c::type_of<::GlobalNamespace::MusicGroup*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPlayer.GetX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MusicPlayer::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::MusicPlayer::GetX)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803d8500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicPlayer::*)()>(&::GlobalNamespace::MusicPlayer::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803d98c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPlayer._Play_g___clearRef_54_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::MusicPlayer*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::MusicPlayer::_Play_g___clearRef_54_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"<Play>g___clearRef|54_0", {}, {::i2c::type_of<::GlobalNamespace::MusicPlayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MusicGroup>& GlobalNamespace::MusicPlayer::__cordl_internal_get__musicConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____musicConfig;
}
constexpr ::UnityW<::GlobalNamespace::MusicGroup> const& GlobalNamespace::MusicPlayer::__cordl_internal_get__musicConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____musicConfig;
}
constexpr void GlobalNamespace::MusicPlayer::__cordl_internal_set__musicConfig(::UnityW<::GlobalNamespace::MusicGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____musicConfig = value;
}
constexpr int32_t& GlobalNamespace::MusicPlayer::__cordl_internal_get_Index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Index;
}
constexpr int32_t const& GlobalNamespace::MusicPlayer::__cordl_internal_get_Index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Index;
}
constexpr void GlobalNamespace::MusicPlayer::__cordl_internal_set_Index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Index = value;
}
constexpr float_t& GlobalNamespace::MusicPlayer::__cordl_internal_get_directionalEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directionalEffect;
}
constexpr float_t const& GlobalNamespace::MusicPlayer::__cordl_internal_get_directionalEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directionalEffect;
}
constexpr void GlobalNamespace::MusicPlayer::__cordl_internal_set_directionalEffect(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___directionalEffect = value;
}
constexpr float_t& GlobalNamespace::MusicPlayer::__cordl_internal_get_CloseDistDistortion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CloseDistDistortion;
}
constexpr float_t const& GlobalNamespace::MusicPlayer::__cordl_internal_get_CloseDistDistortion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CloseDistDistortion;
}
constexpr void GlobalNamespace::MusicPlayer::__cordl_internal_set_CloseDistDistortion(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CloseDistDistortion = value;
}
constexpr float_t& GlobalNamespace::MusicPlayer::__cordl_internal_get_DistortionDryWet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DistortionDryWet;
}
constexpr float_t const& GlobalNamespace::MusicPlayer::__cordl_internal_get_DistortionDryWet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DistortionDryWet;
}
constexpr void GlobalNamespace::MusicPlayer::__cordl_internal_set_DistortionDryWet(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DistortionDryWet = value;
}
constexpr float_t& GlobalNamespace::MusicPlayer::__cordl_internal_get_CloseDistBassBoost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CloseDistBassBoost;
}
constexpr float_t const& GlobalNamespace::MusicPlayer::__cordl_internal_get_CloseDistBassBoost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CloseDistBassBoost;
}
constexpr void GlobalNamespace::MusicPlayer::__cordl_internal_set_CloseDistBassBoost(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CloseDistBassBoost = value;
}
constexpr float_t& GlobalNamespace::MusicPlayer::__cordl_internal_get_DistanceFiltering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DistanceFiltering;
}
constexpr float_t const& GlobalNamespace::MusicPlayer::__cordl_internal_get_DistanceFiltering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DistanceFiltering;
}
constexpr void GlobalNamespace::MusicPlayer::__cordl_internal_set_DistanceFiltering(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DistanceFiltering = value;
}
constexpr float_t& GlobalNamespace::MusicPlayer::__cordl_internal_get_OcclusionFiltering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OcclusionFiltering;
}
constexpr float_t const& GlobalNamespace::MusicPlayer::__cordl_internal_get_OcclusionFiltering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OcclusionFiltering;
}
constexpr void GlobalNamespace::MusicPlayer::__cordl_internal_set_OcclusionFiltering(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OcclusionFiltering = value;
}
constexpr float_t& GlobalNamespace::MusicPlayer::__cordl_internal_get_FilterDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilterDistance;
}
constexpr float_t const& GlobalNamespace::MusicPlayer::__cordl_internal_get_FilterDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilterDistance;
}
constexpr void GlobalNamespace::MusicPlayer::__cordl_internal_set_FilterDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FilterDistance = value;
}
constexpr bool& GlobalNamespace::MusicPlayer::__cordl_internal_get_Delay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Delay;
}
constexpr bool const& GlobalNamespace::MusicPlayer::__cordl_internal_get_Delay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Delay;
}
constexpr void GlobalNamespace::MusicPlayer::__cordl_internal_set_Delay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Delay = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::MusicPlayer::__cordl_internal_get__asset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asset;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::MusicPlayer::__cordl_internal_get__asset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asset;
}
constexpr void GlobalNamespace::MusicPlayer::__cordl_internal_set__asset(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____asset = value;
}
constexpr float_t& GlobalNamespace::MusicPlayer::__cordl_internal_get__duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____duration;
}
constexpr float_t const& GlobalNamespace::MusicPlayer::__cordl_internal_get__duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____duration;
}
constexpr void GlobalNamespace::MusicPlayer::__cordl_internal_set__duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____duration = value;
}
constexpr ::UnityW<::GlobalNamespace::WaterDepthSampleData>& GlobalNamespace::MusicPlayer::__cordl_internal_get_WaterDepthData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterDepthData;
}
constexpr ::UnityW<::GlobalNamespace::WaterDepthSampleData> const& GlobalNamespace::MusicPlayer::__cordl_internal_get_WaterDepthData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterDepthData;
}
constexpr void GlobalNamespace::MusicPlayer::__cordl_internal_set_WaterDepthData(::UnityW<::GlobalNamespace::WaterDepthSampleData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WaterDepthData = value;
}
constexpr ::UnityW<::GlobalNamespace::BiquadFilters>& GlobalNamespace::MusicPlayer::__cordl_internal_get__highShelfFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highShelfFilter;
}
constexpr ::UnityW<::GlobalNamespace::BiquadFilters> const& GlobalNamespace::MusicPlayer::__cordl_internal_get__highShelfFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highShelfFilter;
}
constexpr void GlobalNamespace::MusicPlayer::__cordl_internal_set__highShelfFilter(::UnityW<::GlobalNamespace::BiquadFilters>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____highShelfFilter = value;
}
constexpr ::UnityW<::GlobalNamespace::BiquadFilters>& GlobalNamespace::MusicPlayer::__cordl_internal_get__lowShelfFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lowShelfFilter;
}
constexpr ::UnityW<::GlobalNamespace::BiquadFilters> const& GlobalNamespace::MusicPlayer::__cordl_internal_get__lowShelfFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lowShelfFilter;
}
constexpr void GlobalNamespace::MusicPlayer::__cordl_internal_set__lowShelfFilter(::UnityW<::GlobalNamespace::BiquadFilters>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lowShelfFilter = value;
}
constexpr ::UnityW<::GlobalNamespace::BasicDelay>& GlobalNamespace::MusicPlayer::__cordl_internal_get__delayFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayFilter;
}
constexpr ::UnityW<::GlobalNamespace::BasicDelay> const& GlobalNamespace::MusicPlayer::__cordl_internal_get__delayFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayFilter;
}
constexpr void GlobalNamespace::MusicPlayer::__cordl_internal_set__delayFilter(::UnityW<::GlobalNamespace::BasicDelay>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____delayFilter = value;
}
constexpr float_t& GlobalNamespace::MusicPlayer::__cordl_internal_get__delayTimeMs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayTimeMs;
}
constexpr float_t const& GlobalNamespace::MusicPlayer::__cordl_internal_get__delayTimeMs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayTimeMs;
}
constexpr void GlobalNamespace::MusicPlayer::__cordl_internal_set__delayTimeMs(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____delayTimeMs = value;
}
constexpr ::UnityW<::GlobalNamespace::Distortion>& GlobalNamespace::MusicPlayer::__cordl_internal_get__distortionFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distortionFilter;
}
constexpr ::UnityW<::GlobalNamespace::Distortion> const& GlobalNamespace::MusicPlayer::__cordl_internal_get__distortionFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distortionFilter;
}
constexpr void GlobalNamespace::MusicPlayer::__cordl_internal_set__distortionFilter(::UnityW<::GlobalNamespace::Distortion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____distortionFilter = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::MusicPlayer::__cordl_internal_get__amplitudeBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amplitudeBuffer;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::MusicPlayer::__cordl_internal_get__amplitudeBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amplitudeBuffer;
}
constexpr void GlobalNamespace::MusicPlayer::__cordl_internal_set__amplitudeBuffer(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____amplitudeBuffer = value;
}
constexpr ::UnityW<::GlobalNamespace::PropertyBlockHelper>& GlobalNamespace::MusicPlayer::__cordl_internal_get_propertyBlockHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyBlockHelper;
}
constexpr ::UnityW<::GlobalNamespace::PropertyBlockHelper> const& GlobalNamespace::MusicPlayer::__cordl_internal_get_propertyBlockHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyBlockHelper;
}
constexpr void GlobalNamespace::MusicPlayer::__cordl_internal_set_propertyBlockHelper(::UnityW<::GlobalNamespace::PropertyBlockHelper>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertyBlockHelper = value;
}
constexpr float_t& GlobalNamespace::MusicPlayer::__cordl_internal_get_amplitudeScalar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amplitudeScalar;
}
constexpr float_t const& GlobalNamespace::MusicPlayer::__cordl_internal_get_amplitudeScalar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amplitudeScalar;
}
constexpr void GlobalNamespace::MusicPlayer::__cordl_internal_set_amplitudeScalar(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___amplitudeScalar = value;
}
constexpr ::StringW& GlobalNamespace::MusicPlayer::__cordl_internal_get_propertyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyName;
}
constexpr ::StringW const& GlobalNamespace::MusicPlayer::__cordl_internal_get_propertyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyName;
}
constexpr void GlobalNamespace::MusicPlayer::__cordl_internal_set_propertyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertyName = value;
}
constexpr float_t& GlobalNamespace::MusicPlayer::__cordl_internal_get__Duration_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Duration_k__BackingField;
}
constexpr float_t const& GlobalNamespace::MusicPlayer::__cordl_internal_get__Duration_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Duration_k__BackingField;
}
constexpr void GlobalNamespace::MusicPlayer::__cordl_internal_set__Duration_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Duration_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::MusicPlayer::__cordl_internal_get__ASC_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ASC_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::MusicPlayer::__cordl_internal_get__ASC_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ASC_k__BackingField;
}
constexpr void GlobalNamespace::MusicPlayer::__cordl_internal_set__ASC_k__BackingField(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ASC_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::MusicPlayer::__cordl_internal_get__Amplitude_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Amplitude_k__BackingField;
}
constexpr float_t const& GlobalNamespace::MusicPlayer::__cordl_internal_get__Amplitude_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Amplitude_k__BackingField;
}
constexpr void GlobalNamespace::MusicPlayer::__cordl_internal_set__Amplitude_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Amplitude_k__BackingField = value;
}
inline void GlobalNamespace::MusicPlayer::setStaticF__MusicMuteVol_k__BackingField(::GlobalNamespace::AudioVolume*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::AudioVolume*, "<MusicMuteVol>k__BackingField", ::GlobalNamespace::MusicPlayer*>(std::forward<::GlobalNamespace::AudioVolume*>(value));
}
inline ::GlobalNamespace::AudioVolume* GlobalNamespace::MusicPlayer::getStaticF__MusicMuteVol_k__BackingField()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::AudioVolume*, "<MusicMuteVol>k__BackingField", ::GlobalNamespace::MusicPlayer*>();
}
inline ::UnityW<::GlobalNamespace::MusicGroup> GlobalNamespace::MusicPlayer::get_MusicConfig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"get_MusicConfig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MusicGroup>>(this, ___internal_method);
}
inline void GlobalNamespace::MusicPlayer::set_MusicConfig(::GlobalNamespace::MusicGroup*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"set_MusicConfig", {}, {::i2c::type_of<::GlobalNamespace::MusicGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::AudioAsset> GlobalNamespace::MusicPlayer::get_Asset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"get_Asset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioAsset>>(this, ___internal_method);
}
inline void GlobalNamespace::MusicPlayer::set_Asset(::GlobalNamespace::AudioAsset*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"set_Asset", {}, {::i2c::type_of<::GlobalNamespace::AudioAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::MusicPlayer::get_Duration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"get_Duration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::MusicPlayer::set_Duration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"set_Duration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::AudioSourceController> GlobalNamespace::MusicPlayer::get_ASC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"get_ASC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioSourceController>>(this, ___internal_method);
}
inline void GlobalNamespace::MusicPlayer::set_ASC(::GlobalNamespace::AudioSourceController*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"set_ASC", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::MusicPlayer::get_Amplitude()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"get_Amplitude", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::MusicPlayer::set_Amplitude(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"set_Amplitude", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioVolume* GlobalNamespace::MusicPlayer::get_MusicMuteVol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"get_MusicMuteVol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolume*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MusicPlayer::set_MusicMuteVol(::GlobalNamespace::AudioVolume*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"set_MusicMuteVol", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MusicPlayer::get_XProviderIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"get_XProviderIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MusicPlayer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MusicPlayer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MusicPlayer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MusicPlayer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MusicPlayer::ManualUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"ManualUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MusicPlayer::Sync(float_t  absoluteTime, float_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"Sync", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, absoluteTime, offset);
}
inline void GlobalNamespace::MusicPlayer::SetSyncPitch(float_t  multiplier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"SetSyncPitch", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplier);
}
inline void GlobalNamespace::MusicPlayer::Play(::UnityEngine::AudioClip*  clipOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipOverride);
}
inline void GlobalNamespace::MusicPlayer::Stop(float_t  fadeoutOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"Stop", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fadeoutOverride);
}
inline void GlobalNamespace::MusicPlayer::SetDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"SetDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MusicPlayer::SetAsset(::GlobalNamespace::MusicGroup*  group, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"SetAsset", {}, {::i2c::type_of<::GlobalNamespace::MusicGroup*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group, index);
}
inline bool GlobalNamespace::MusicPlayer::GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xType, x);
}
inline void GlobalNamespace::MusicPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MusicPlayer::_Play_g___clearRef_54_0(::GlobalNamespace::MusicPlayer*  p, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicPlayer*>(),
                        {"<Play>g___clearRef|54_0", {}, {::i2c::type_of<::GlobalNamespace::MusicPlayer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, c);
}
inline ::GlobalNamespace::MusicPlayer* GlobalNamespace::MusicPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MusicPlayer*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr  GlobalNamespace::MusicPlayer::operator ::GlobalNamespace::IAudioRTPCXProvider*() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCXProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr ::GlobalNamespace::IAudioRTPCXProvider* GlobalNamespace::MusicPlayer::i___GlobalNamespace__IAudioRTPCXProvider() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCXProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MusicPlayer::MusicPlayer()   {
}

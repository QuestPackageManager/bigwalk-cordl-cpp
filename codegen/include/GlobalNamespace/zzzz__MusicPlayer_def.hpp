#pragma once
// IWYU pragma private; include "GlobalNamespace/MusicPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MusicPlayer)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace GlobalNamespace {
class AudioVolume;
}
namespace GlobalNamespace {
class BasicDelay;
}
namespace GlobalNamespace {
class BiquadFilters;
}
namespace GlobalNamespace {
class Distortion;
}
namespace GlobalNamespace {
class IAudioRTPCXProvider;
}
namespace GlobalNamespace {
class MusicGroup;
}
namespace GlobalNamespace {
class PropertyBlockHelper;
}
namespace GlobalNamespace {
class WaterDepthSampleData;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class MusicPlayer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MusicPlayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MusicPlayer*, "", "MusicPlayer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MusicPlayer
class CORDL_TYPE MusicPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ASC, put=set_ASC)) ::UnityW<::GlobalNamespace::AudioSourceController>  ASC;

 __declspec(property(get=get_Amplitude, put=set_Amplitude)) float_t  Amplitude;

 __declspec(property(get=get_Asset, put=set_Asset)) ::UnityW<::GlobalNamespace::AudioAsset>  Asset;

/// @brief Field CloseDistBassBoost, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_CloseDistBassBoost, put=__cordl_internal_set_CloseDistBassBoost)) float_t  CloseDistBassBoost;

/// @brief Field CloseDistDistortion, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_CloseDistDistortion, put=__cordl_internal_set_CloseDistDistortion)) float_t  CloseDistDistortion;

/// @brief Field Delay, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_Delay, put=__cordl_internal_set_Delay)) bool  Delay;

/// @brief Field DistanceFiltering, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_DistanceFiltering, put=__cordl_internal_set_DistanceFiltering)) float_t  DistanceFiltering;

/// @brief Field DistortionDryWet, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_DistortionDryWet, put=__cordl_internal_set_DistortionDryWet)) float_t  DistortionDryWet;

 __declspec(property(get=get_Duration, put=set_Duration)) float_t  Duration;

/// @brief Field FilterDistance, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_FilterDistance, put=__cordl_internal_set_FilterDistance)) float_t  FilterDistance;

/// @brief Field Index, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Index, put=__cordl_internal_set_Index)) int32_t  Index;

 __declspec(property(get=get_MusicConfig, put=set_MusicConfig)) ::UnityW<::GlobalNamespace::MusicGroup>  MusicConfig;

/// @brief Field OcclusionFiltering, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_OcclusionFiltering, put=__cordl_internal_set_OcclusionFiltering)) float_t  OcclusionFiltering;

/// @brief Field WaterDepthData, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_WaterDepthData, put=__cordl_internal_set_WaterDepthData)) ::UnityW<::GlobalNamespace::WaterDepthSampleData>  WaterDepthData;

 __declspec(property(get=get_XProviderIdentifier)) ::StringW  XProviderIdentifier;

/// @brief Field <ASC>k__BackingField, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__ASC_k__BackingField, put=__cordl_internal_set__ASC_k__BackingField)) ::UnityW<::GlobalNamespace::AudioSourceController>  _ASC_k__BackingField;

/// @brief Field <Amplitude>k__BackingField, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get__Amplitude_k__BackingField, put=__cordl_internal_set__Amplitude_k__BackingField)) float_t  _Amplitude_k__BackingField;

/// @brief Field <Duration>k__BackingField, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__Duration_k__BackingField, put=__cordl_internal_set__Duration_k__BackingField)) float_t  _Duration_k__BackingField;

/// @brief Field <MusicMuteVol>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__MusicMuteVol_k__BackingField, put=setStaticF__MusicMuteVol_k__BackingField)) ::GlobalNamespace::AudioVolume*  _MusicMuteVol_k__BackingField;

/// @brief Field _amplitudeBuffer, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__amplitudeBuffer, put=__cordl_internal_set__amplitudeBuffer)) ::ArrayW<float_t>  _amplitudeBuffer;

/// @brief Field _asset, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__asset, put=__cordl_internal_set__asset)) ::UnityW<::GlobalNamespace::AudioAsset>  _asset;

/// @brief Field _delayFilter, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__delayFilter, put=__cordl_internal_set__delayFilter)) ::UnityW<::GlobalNamespace::BasicDelay>  _delayFilter;

/// @brief Field _delayTimeMs, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__delayTimeMs, put=__cordl_internal_set__delayTimeMs)) float_t  _delayTimeMs;

/// @brief Field _distortionFilter, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__distortionFilter, put=__cordl_internal_set__distortionFilter)) ::UnityW<::GlobalNamespace::Distortion>  _distortionFilter;

/// @brief Field _duration, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__duration, put=__cordl_internal_set__duration)) float_t  _duration;

/// @brief Field _highShelfFilter, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__highShelfFilter, put=__cordl_internal_set__highShelfFilter)) ::UnityW<::GlobalNamespace::BiquadFilters>  _highShelfFilter;

/// @brief Field _lowShelfFilter, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__lowShelfFilter, put=__cordl_internal_set__lowShelfFilter)) ::UnityW<::GlobalNamespace::BiquadFilters>  _lowShelfFilter;

/// @brief Field _musicConfig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__musicConfig, put=__cordl_internal_set__musicConfig)) ::UnityW<::GlobalNamespace::MusicGroup>  _musicConfig;

/// @brief Field amplitudeScalar, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_amplitudeScalar, put=__cordl_internal_set_amplitudeScalar)) float_t  amplitudeScalar;

/// @brief Field directionalEffect, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_directionalEffect, put=__cordl_internal_set_directionalEffect)) float_t  directionalEffect;

/// @brief Field propertyBlockHelper, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_propertyBlockHelper, put=__cordl_internal_set_propertyBlockHelper)) ::UnityW<::GlobalNamespace::PropertyBlockHelper>  propertyBlockHelper;

/// @brief Field propertyName, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_propertyName, put=__cordl_internal_set_propertyName)) ::StringW  propertyName;

/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr operator  ::GlobalNamespace::IAudioRTPCXProvider*() noexcept;

/// @brief Method Awake, addr 0x1803d8460, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetX, addr 0x1803d8500, size 0x100, virtual true, abstract: false, final true
inline bool GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

/// @brief Method ManualUpdate, addr 0x1803d8600, size 0x6f0, virtual false, abstract: false, final false
inline void ManualUpdate() ;

static inline ::GlobalNamespace::MusicPlayer* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1803d8cf0, size 0x50, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1803d8d40, size 0x70, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803d8db0, size 0x50, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Play, addr 0x1803d8e00, size 0x710, virtual false, abstract: false, final false
inline void Play(::UnityEngine::AudioClip*  clipOverride) ;

/// @brief Method SetAsset, addr 0x1803d9510, size 0x110, virtual false, abstract: false, final false
inline void SetAsset(::GlobalNamespace::MusicGroup*  group, int32_t  index) ;

/// @brief Method SetDuration, addr 0x1803d9620, size 0x90, virtual false, abstract: false, final false
inline void SetDuration() ;

/// @brief Method SetSyncPitch, addr 0x1803d96b0, size 0x50, virtual false, abstract: false, final false
inline void SetSyncPitch(float_t  multiplier) ;

/// @brief Method Stop, addr 0x1803d9700, size 0x70, virtual false, abstract: false, final false
inline void Stop(float_t  fadeoutOverride) ;

/// @brief Method Sync, addr 0x1803d9770, size 0x80, virtual false, abstract: false, final false
inline void Sync(float_t  absoluteTime, float_t  offset) ;

/// @brief Method <Play>g___clearRef|54_0, addr 0x1803d97f0, size 0x70, virtual false, abstract: false, final false
static inline void _Play_g___clearRef_54_0(::GlobalNamespace::MusicPlayer*  p, ::GlobalNamespace::AudioSourceController*  c) ;

constexpr float_t const& __cordl_internal_get_CloseDistBassBoost() const;

constexpr float_t& __cordl_internal_get_CloseDistBassBoost() ;

constexpr float_t const& __cordl_internal_get_CloseDistDistortion() const;

constexpr float_t& __cordl_internal_get_CloseDistDistortion() ;

constexpr bool const& __cordl_internal_get_Delay() const;

constexpr bool& __cordl_internal_get_Delay() ;

constexpr float_t const& __cordl_internal_get_DistanceFiltering() const;

constexpr float_t& __cordl_internal_get_DistanceFiltering() ;

constexpr float_t const& __cordl_internal_get_DistortionDryWet() const;

constexpr float_t& __cordl_internal_get_DistortionDryWet() ;

constexpr float_t const& __cordl_internal_get_FilterDistance() const;

constexpr float_t& __cordl_internal_get_FilterDistance() ;

constexpr int32_t const& __cordl_internal_get_Index() const;

constexpr int32_t& __cordl_internal_get_Index() ;

constexpr float_t const& __cordl_internal_get_OcclusionFiltering() const;

constexpr float_t& __cordl_internal_get_OcclusionFiltering() ;

constexpr ::UnityW<::GlobalNamespace::WaterDepthSampleData> const& __cordl_internal_get_WaterDepthData() const;

constexpr ::UnityW<::GlobalNamespace::WaterDepthSampleData>& __cordl_internal_get_WaterDepthData() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__ASC_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__ASC_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Amplitude_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Amplitude_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Duration_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Duration_k__BackingField() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__amplitudeBuffer() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__amplitudeBuffer() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get__asset() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get__asset() ;

constexpr ::UnityW<::GlobalNamespace::BasicDelay> const& __cordl_internal_get__delayFilter() const;

constexpr ::UnityW<::GlobalNamespace::BasicDelay>& __cordl_internal_get__delayFilter() ;

constexpr float_t const& __cordl_internal_get__delayTimeMs() const;

constexpr float_t& __cordl_internal_get__delayTimeMs() ;

constexpr ::UnityW<::GlobalNamespace::Distortion> const& __cordl_internal_get__distortionFilter() const;

constexpr ::UnityW<::GlobalNamespace::Distortion>& __cordl_internal_get__distortionFilter() ;

constexpr float_t const& __cordl_internal_get__duration() const;

constexpr float_t& __cordl_internal_get__duration() ;

constexpr ::UnityW<::GlobalNamespace::BiquadFilters> const& __cordl_internal_get__highShelfFilter() const;

constexpr ::UnityW<::GlobalNamespace::BiquadFilters>& __cordl_internal_get__highShelfFilter() ;

constexpr ::UnityW<::GlobalNamespace::BiquadFilters> const& __cordl_internal_get__lowShelfFilter() const;

constexpr ::UnityW<::GlobalNamespace::BiquadFilters>& __cordl_internal_get__lowShelfFilter() ;

constexpr ::UnityW<::GlobalNamespace::MusicGroup> const& __cordl_internal_get__musicConfig() const;

constexpr ::UnityW<::GlobalNamespace::MusicGroup>& __cordl_internal_get__musicConfig() ;

constexpr float_t const& __cordl_internal_get_amplitudeScalar() const;

constexpr float_t& __cordl_internal_get_amplitudeScalar() ;

constexpr float_t const& __cordl_internal_get_directionalEffect() const;

constexpr float_t& __cordl_internal_get_directionalEffect() ;

constexpr ::UnityW<::GlobalNamespace::PropertyBlockHelper> const& __cordl_internal_get_propertyBlockHelper() const;

constexpr ::UnityW<::GlobalNamespace::PropertyBlockHelper>& __cordl_internal_get_propertyBlockHelper() ;

constexpr ::StringW const& __cordl_internal_get_propertyName() const;

constexpr ::StringW& __cordl_internal_get_propertyName() ;

constexpr void __cordl_internal_set_CloseDistBassBoost(float_t  value) ;

constexpr void __cordl_internal_set_CloseDistDistortion(float_t  value) ;

constexpr void __cordl_internal_set_Delay(bool  value) ;

constexpr void __cordl_internal_set_DistanceFiltering(float_t  value) ;

constexpr void __cordl_internal_set_DistortionDryWet(float_t  value) ;

constexpr void __cordl_internal_set_FilterDistance(float_t  value) ;

constexpr void __cordl_internal_set_Index(int32_t  value) ;

constexpr void __cordl_internal_set_OcclusionFiltering(float_t  value) ;

constexpr void __cordl_internal_set_WaterDepthData(::UnityW<::GlobalNamespace::WaterDepthSampleData>  value) ;

constexpr void __cordl_internal_set__ASC_k__BackingField(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__Amplitude_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Duration_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__amplitudeBuffer(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__asset(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set__delayFilter(::UnityW<::GlobalNamespace::BasicDelay>  value) ;

constexpr void __cordl_internal_set__delayTimeMs(float_t  value) ;

constexpr void __cordl_internal_set__distortionFilter(::UnityW<::GlobalNamespace::Distortion>  value) ;

constexpr void __cordl_internal_set__duration(float_t  value) ;

constexpr void __cordl_internal_set__highShelfFilter(::UnityW<::GlobalNamespace::BiquadFilters>  value) ;

constexpr void __cordl_internal_set__lowShelfFilter(::UnityW<::GlobalNamespace::BiquadFilters>  value) ;

constexpr void __cordl_internal_set__musicConfig(::UnityW<::GlobalNamespace::MusicGroup>  value) ;

constexpr void __cordl_internal_set_amplitudeScalar(float_t  value) ;

constexpr void __cordl_internal_set_directionalEffect(float_t  value) ;

constexpr void __cordl_internal_set_propertyBlockHelper(::UnityW<::GlobalNamespace::PropertyBlockHelper>  value) ;

constexpr void __cordl_internal_set_propertyName(::StringW  value) ;

/// @brief Method .ctor, addr 0x1803d98c0, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::AudioVolume* getStaticF__MusicMuteVol_k__BackingField() ;

/// @brief Method get_ASC, addr 0x1803d9940, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioSourceController> get_ASC() ;

/// @brief Method get_Amplitude, addr 0x18032ef70, size 0x10, virtual false, abstract: false, final false
inline float_t get_Amplitude() ;

/// @brief Method get_Asset, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioAsset> get_Asset() ;

/// @brief Method get_Duration, addr 0x1803d9950, size 0x10, virtual false, abstract: false, final false
inline float_t get_Duration() ;

/// @brief Method get_MusicConfig, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::MusicGroup> get_MusicConfig() ;

/// @brief Method get_MusicMuteVol, addr 0x1803d1900, size 0x90, virtual false, abstract: false, final false
static inline ::GlobalNamespace::AudioVolume* get_MusicMuteVol() ;

/// @brief Method get_XProviderIdentifier, addr 0x1803d9960, size 0x10, virtual true, abstract: false, final true
inline ::StringW get_XProviderIdentifier() ;

/// @brief Convert to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr ::GlobalNamespace::IAudioRTPCXProvider* i___GlobalNamespace__IAudioRTPCXProvider() noexcept;

static inline void setStaticF__MusicMuteVol_k__BackingField(::GlobalNamespace::AudioVolume*  value) ;

/// @brief Method set_ASC, addr 0x1803d9970, size 0x20, virtual false, abstract: false, final false
inline void set_ASC(::GlobalNamespace::AudioSourceController*  value) ;

/// @brief Method set_Amplitude, addr 0x1803d9990, size 0x10, virtual false, abstract: false, final false
inline void set_Amplitude(float_t  value) ;

/// @brief Method set_Asset, addr 0x1803d99a0, size 0x30, virtual false, abstract: false, final false
inline void set_Asset(::GlobalNamespace::AudioAsset*  value) ;

/// @brief Method set_Duration, addr 0x1803d99d0, size 0x10, virtual false, abstract: false, final false
inline void set_Duration(float_t  value) ;

/// @brief Method set_MusicConfig, addr 0x1803d99e0, size 0xb0, virtual false, abstract: false, final false
inline void set_MusicConfig(::GlobalNamespace::MusicGroup*  value) ;

/// @brief Method set_MusicMuteVol, addr 0x1803d9a90, size 0x50, virtual false, abstract: false, final false
static inline void set_MusicMuteVol(::GlobalNamespace::AudioVolume*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MusicPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MusicPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MusicPlayer(MusicPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MusicPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MusicPlayer(MusicPlayer const& ) = delete;

/// @brief Field DELAY_STEP offset 0xffffffff size 0x4
static constexpr int32_t  DELAY_STEP{static_cast<int32_t>(0x10)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4854};

/// @brief Field _musicConfig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MusicGroup>  ____musicConfig;

/// @brief Field Index, offset: 0x28, size: 0x4, def value: None
 int32_t  ___Index;

/// @brief Field directionalEffect, offset: 0x2c, size: 0x4, def value: None
 float_t  ___directionalEffect;

/// @brief Field CloseDistDistortion, offset: 0x30, size: 0x4, def value: None
 float_t  ___CloseDistDistortion;

/// @brief Field DistortionDryWet, offset: 0x34, size: 0x4, def value: None
 float_t  ___DistortionDryWet;

/// @brief Field CloseDistBassBoost, offset: 0x38, size: 0x4, def value: None
 float_t  ___CloseDistBassBoost;

/// @brief Field DistanceFiltering, offset: 0x3c, size: 0x4, def value: None
 float_t  ___DistanceFiltering;

/// @brief Field OcclusionFiltering, offset: 0x40, size: 0x4, def value: None
 float_t  ___OcclusionFiltering;

/// @brief Field FilterDistance, offset: 0x44, size: 0x4, def value: None
 float_t  ___FilterDistance;

/// @brief Field Delay, offset: 0x48, size: 0x1, def value: None
 bool  ___Delay;

/// @brief Field _asset, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ____asset;

/// @brief Field _duration, offset: 0x58, size: 0x4, def value: None
 float_t  ____duration;

/// @brief Field WaterDepthData, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::WaterDepthSampleData>  ___WaterDepthData;

/// @brief Field _highShelfFilter, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BiquadFilters>  ____highShelfFilter;

/// @brief Field _lowShelfFilter, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BiquadFilters>  ____lowShelfFilter;

/// @brief Field _delayFilter, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BasicDelay>  ____delayFilter;

/// @brief Field _delayTimeMs, offset: 0x80, size: 0x4, def value: None
 float_t  ____delayTimeMs;

/// @brief Field _distortionFilter, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Distortion>  ____distortionFilter;

/// @brief Field _amplitudeBuffer, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<float_t>  ____amplitudeBuffer;

/// @brief Field propertyBlockHelper, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropertyBlockHelper>  ___propertyBlockHelper;

/// @brief Field amplitudeScalar, offset: 0xa0, size: 0x4, def value: None
 float_t  ___amplitudeScalar;

/// @brief Field propertyName, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ___propertyName;

/// @brief Field <Duration>k__BackingField, offset: 0xb0, size: 0x4, def value: None
 float_t  ____Duration_k__BackingField;

/// @brief Field <ASC>k__BackingField, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____ASC_k__BackingField;

/// @brief Field <Amplitude>k__BackingField, offset: 0xc0, size: 0x4, def value: None
 float_t  ____Amplitude_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MusicPlayer, ____musicConfig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPlayer, ___Index) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPlayer, ___directionalEffect) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPlayer, ___CloseDistDistortion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPlayer, ___DistortionDryWet) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPlayer, ___CloseDistBassBoost) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPlayer, ___DistanceFiltering) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPlayer, ___OcclusionFiltering) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPlayer, ___FilterDistance) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPlayer, ___Delay) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPlayer, ____asset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPlayer, ____duration) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPlayer, ___WaterDepthData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPlayer, ____highShelfFilter) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPlayer, ____lowShelfFilter) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPlayer, ____delayFilter) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPlayer, ____delayTimeMs) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPlayer, ____distortionFilter) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPlayer, ____amplitudeBuffer) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPlayer, ___propertyBlockHelper) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPlayer, ___amplitudeScalar) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPlayer, ___propertyName) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPlayer, ____Duration_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPlayer, ____ASC_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPlayer, ____Amplitude_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MusicPlayer) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace

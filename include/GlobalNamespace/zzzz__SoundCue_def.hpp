#pragma once
// IWYU pragma private; include "GlobalNamespace/SoundCue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__VoiceLimitBehaviorType_def.hpp"
#include "GlobalNamespace/zzzz__VoltageControlledAmplifier_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SoundCue)
namespace GlobalNamespace {
class AudioBus;
}
namespace GlobalNamespace {
class AudioOcclusionConfig;
}
namespace GlobalNamespace {
class AudioRTPCTerm;
}
namespace GlobalNamespace {
class AudioRTPCXProvider;
}
namespace GlobalNamespace {
class AudioVolume;
}
namespace GlobalNamespace {
class ISoundBankable;
}
namespace GlobalNamespace {
class ISoundCueProvider;
}
namespace GlobalNamespace {
class IVirtualizable;
}
namespace GlobalNamespace {
struct VoiceLimitBehaviorType;
}
namespace GlobalNamespace {
class VoltageControlledAmplifier;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class SoundCue;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SoundCue*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SoundCue*, "", "SoundCue");
// Dependencies AudioAsset, VoiceLimitBehaviorType, VoltageControlledAmplifier
namespace GlobalNamespace {
// Is value type: false
// CS Name: SoundCue
class CORDL_TYPE SoundCue : public ::GlobalNamespace::AudioAsset {
public:
// Declarations
 __declspec(property(get=get_Attenuation)) ::GlobalNamespace::AudioRTPCTerm*  Attenuation;

 __declspec(property(get=get_AttenuationLerp)) float_t  AttenuationLerp;

 __declspec(property(get=get_Bus, put=set_Bus)) ::UnityW<::GlobalNamespace::AudioBus>  Bus;

 __declspec(property(get=get_Clip, put=set_Clip)) ::UnityW<::UnityEngine::AudioClip>  Clip;

 __declspec(property(get=get_Cooldown, put=set_Cooldown)) float_t  Cooldown;

 __declspec(property(get=get_Delay, put=set_Delay)) float_t  Delay;

 __declspec(property(get=get_DontAutoHibernate)) bool  DontAutoHibernate;

 __declspec(property(get=get_Doppler, put=set_Doppler)) float_t  Doppler;

 __declspec(property(get=get_FadeIn, put=set_FadeIn)) float_t  FadeIn;

 __declspec(property(get=get_FadeOut, put=set_FadeOut)) float_t  FadeOut;

 __declspec(property(get=get_HasRTPC)) bool  HasRTPC;

 __declspec(property(get=get_Loop, put=set_Loop)) bool  Loop;

 __declspec(property(get=get_OcclusionConfig, put=set_OcclusionConfig)) ::UnityW<::GlobalNamespace::AudioOcclusionConfig>  OcclusionConfig;

 __declspec(property(get=get_Offset, put=set_Offset)) float_t  Offset;

 __declspec(property(get=get_Pan, put=set_Pan)) float_t  Pan;

 __declspec(property(get=get_PanRTPC)) ::GlobalNamespace::AudioRTPCTerm*  PanRTPC;

 __declspec(property(get=get_PanRTPCLerp)) float_t  PanRTPCLerp;

 __declspec(property(get=get_Pitch, put=set_Pitch)) float_t  Pitch;

 __declspec(property(get=get_PitchRTPC)) ::GlobalNamespace::AudioRTPCTerm*  PitchRTPC;

 __declspec(property(get=get_PitchRTPCLerp)) float_t  PitchRTPCLerp;

 __declspec(property(get=get_Priority, put=set_Priority)) int32_t  Priority;

 __declspec(property(get=get_RTPCXProvider, put=set_RTPCXProvider)) ::UnityW<::GlobalNamespace::AudioRTPCXProvider>  RTPCXProvider;

 __declspec(property(get=get_RandomTime, put=set_RandomTime)) bool  RandomTime;

 __declspec(property(get=get_SpatialBlend, put=set_SpatialBlend)) float_t  SpatialBlend;

 __declspec(property(get=get_SpatialBlendRTPC)) ::GlobalNamespace::AudioRTPCTerm*  SpatialBlendRTPC;

 __declspec(property(get=get_SpatialBlendRTPCLerp)) float_t  SpatialBlendRTPCLerp;

 __declspec(property(get=get_Spread, put=set_Spread)) float_t  Spread;

 __declspec(property(get=get_SpreadRTPC)) ::GlobalNamespace::AudioRTPCTerm*  SpreadRTPC;

 __declspec(property(get=get_SpreadRTPCLerp)) float_t  SpreadRTPCLerp;

 __declspec(property(get=get_VCAs)) ::ArrayW<::UnityW<::GlobalNamespace::VoltageControlledAmplifier>>  VCAs;

 __declspec(property(get=get_VoiceLimit, put=set_VoiceLimit)) int32_t  VoiceLimit;

 __declspec(property(get=get_VoiceLimitBehavior, put=set_VoiceLimitBehavior)) ::GlobalNamespace::VoiceLimitBehaviorType  VoiceLimitBehavior;

 __declspec(property(get=get_Volume, put=set_Volume)) ::GlobalNamespace::AudioVolume*  Volume;

 __declspec(property(get=get_VolumeRTPC)) ::GlobalNamespace::AudioRTPCTerm*  VolumeRTPC;

 __declspec(property(get=get_VolumeRTPCLerp)) float_t  VolumeRTPCLerp;

/// @brief Field <Cooldown>k__BackingField, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__Cooldown_k__BackingField, put=__cordl_internal_set__Cooldown_k__BackingField)) float_t  _Cooldown_k__BackingField;

/// @brief Field <Delay>k__BackingField, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Delay_k__BackingField, put=__cordl_internal_set__Delay_k__BackingField)) float_t  _Delay_k__BackingField;

/// @brief Field <Offset>k__BackingField, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__Offset_k__BackingField, put=__cordl_internal_set__Offset_k__BackingField)) float_t  _Offset_k__BackingField;

/// @brief Field _attenuation, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__attenuation, put=__cordl_internal_set__attenuation)) ::GlobalNamespace::AudioRTPCTerm*  _attenuation;

/// @brief Field _attenuationLerp, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__attenuationLerp, put=__cordl_internal_set__attenuationLerp)) float_t  _attenuationLerp;

/// @brief Field _bus, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__bus, put=__cordl_internal_set__bus)) ::UnityW<::GlobalNamespace::AudioBus>  _bus;

/// @brief Field _clip, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__clip, put=__cordl_internal_set__clip)) ::UnityW<::UnityEngine::AudioClip>  _clip;

/// @brief Field _cooldown, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__cooldown, put=__cordl_internal_set__cooldown)) float_t  _cooldown;

/// @brief Field _delay, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__delay, put=__cordl_internal_set__delay)) float_t  _delay;

/// @brief Field _dontHibernate, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__dontHibernate, put=__cordl_internal_set__dontHibernate)) bool  _dontHibernate;

/// @brief Field _doppler, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__doppler, put=__cordl_internal_set__doppler)) float_t  _doppler;

/// @brief Field _fadeIn, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeIn, put=__cordl_internal_set__fadeIn)) float_t  _fadeIn;

/// @brief Field _fadeOut, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeOut, put=__cordl_internal_set__fadeOut)) float_t  _fadeOut;

/// @brief Field _loop, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get__loop, put=__cordl_internal_set__loop)) bool  _loop;

/// @brief Field _occlusionConfig, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__occlusionConfig, put=__cordl_internal_set__occlusionConfig)) ::UnityW<::GlobalNamespace::AudioOcclusionConfig>  _occlusionConfig;

/// @brief Field _offset, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__offset, put=__cordl_internal_set__offset)) float_t  _offset;

/// @brief Field _pan, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__pan, put=__cordl_internal_set__pan)) float_t  _pan;

/// @brief Field _panRTPC, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__panRTPC, put=__cordl_internal_set__panRTPC)) ::GlobalNamespace::AudioRTPCTerm*  _panRTPC;

/// @brief Field _panRTPCLerp, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get__panRTPCLerp, put=__cordl_internal_set__panRTPCLerp)) float_t  _panRTPCLerp;

/// @brief Field _pitch, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__pitch, put=__cordl_internal_set__pitch)) float_t  _pitch;

/// @brief Field _pitchRTPC, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__pitchRTPC, put=__cordl_internal_set__pitchRTPC)) ::GlobalNamespace::AudioRTPCTerm*  _pitchRTPC;

/// @brief Field _pitchRTPCLerp, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get__pitchRTPCLerp, put=__cordl_internal_set__pitchRTPCLerp)) float_t  _pitchRTPCLerp;

/// @brief Field _priority, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__priority, put=__cordl_internal_set__priority)) int32_t  _priority;

/// @brief Field _randomTime, offset 0x4d, size 0x1 
 __declspec(property(get=__cordl_internal_get__randomTime, put=__cordl_internal_set__randomTime)) bool  _randomTime;

/// @brief Field _rtpcxProvider, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__rtpcxProvider, put=__cordl_internal_set__rtpcxProvider)) ::UnityW<::GlobalNamespace::AudioRTPCXProvider>  _rtpcxProvider;

/// @brief Field _spatialBlend, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__spatialBlend, put=__cordl_internal_set__spatialBlend)) float_t  _spatialBlend;

/// @brief Field _spatialBlendRTPC, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__spatialBlendRTPC, put=__cordl_internal_set__spatialBlendRTPC)) ::GlobalNamespace::AudioRTPCTerm*  _spatialBlendRTPC;

/// @brief Field _spatialBlendRTPCLerp, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get__spatialBlendRTPCLerp, put=__cordl_internal_set__spatialBlendRTPCLerp)) float_t  _spatialBlendRTPCLerp;

/// @brief Field _spread, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__spread, put=__cordl_internal_set__spread)) float_t  _spread;

/// @brief Field _spreadRTPC, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__spreadRTPC, put=__cordl_internal_set__spreadRTPC)) ::GlobalNamespace::AudioRTPCTerm*  _spreadRTPC;

/// @brief Field _spreadRTPCLerp, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get__spreadRTPCLerp, put=__cordl_internal_set__spreadRTPCLerp)) float_t  _spreadRTPCLerp;

/// @brief Field _vcas, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__vcas, put=__cordl_internal_set__vcas)) ::ArrayW<::UnityW<::GlobalNamespace::VoltageControlledAmplifier>>  _vcas;

/// @brief Field _voiceLimit, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__voiceLimit, put=__cordl_internal_set__voiceLimit)) int32_t  _voiceLimit;

/// @brief Field _voiceLimitBehavior, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__voiceLimitBehavior, put=__cordl_internal_set__voiceLimitBehavior)) ::GlobalNamespace::VoiceLimitBehaviorType  _voiceLimitBehavior;

/// @brief Field _volume, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__volume, put=__cordl_internal_set__volume)) ::GlobalNamespace::AudioVolume*  _volume;

/// @brief Field _volumeRTPC, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__volumeRTPC, put=__cordl_internal_set__volumeRTPC)) ::GlobalNamespace::AudioRTPCTerm*  _volumeRTPC;

/// @brief Field _volumeRTPCLerp, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__volumeRTPCLerp, put=__cordl_internal_set__volumeRTPCLerp)) float_t  _volumeRTPCLerp;

/// @brief Convert operator to "::GlobalNamespace::ISoundBankable"
constexpr operator  ::GlobalNamespace::ISoundBankable*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::ISoundCueProvider"
constexpr operator  ::GlobalNamespace::ISoundCueProvider*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IVirtualizable"
constexpr operator  ::GlobalNamespace::IVirtualizable*() noexcept;

/// @brief Method GetAllCues, addr 0x1804a52d0, size 0x50, virtual true, abstract: false, final true
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundCue>>* GetAllCues() ;

/// @brief Method GetCue, addr 0x1802e0ba0, size 0x10, virtual true, abstract: false, final true
inline ::UnityW<::GlobalNamespace::SoundCue> GetCue() ;

static inline ::GlobalNamespace::SoundCue* New_ctor() ;

/// @brief Method OnEnable, addr 0x1804a5320, size 0x220, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnValidate() ;

constexpr float_t const& __cordl_internal_get__Cooldown_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Cooldown_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Delay_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Delay_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Offset_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Offset_k__BackingField() ;

constexpr ::GlobalNamespace::AudioRTPCTerm* const& __cordl_internal_get__attenuation() const;

constexpr ::GlobalNamespace::AudioRTPCTerm*& __cordl_internal_get__attenuation() ;

constexpr float_t const& __cordl_internal_get__attenuationLerp() const;

constexpr float_t& __cordl_internal_get__attenuationLerp() ;

constexpr ::UnityW<::GlobalNamespace::AudioBus> const& __cordl_internal_get__bus() const;

constexpr ::UnityW<::GlobalNamespace::AudioBus>& __cordl_internal_get__bus() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__clip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__clip() ;

constexpr float_t const& __cordl_internal_get__cooldown() const;

constexpr float_t& __cordl_internal_get__cooldown() ;

constexpr float_t const& __cordl_internal_get__delay() const;

constexpr float_t& __cordl_internal_get__delay() ;

constexpr bool const& __cordl_internal_get__dontHibernate() const;

constexpr bool& __cordl_internal_get__dontHibernate() ;

constexpr float_t const& __cordl_internal_get__doppler() const;

constexpr float_t& __cordl_internal_get__doppler() ;

constexpr float_t const& __cordl_internal_get__fadeIn() const;

constexpr float_t& __cordl_internal_get__fadeIn() ;

constexpr float_t const& __cordl_internal_get__fadeOut() const;

constexpr float_t& __cordl_internal_get__fadeOut() ;

constexpr bool const& __cordl_internal_get__loop() const;

constexpr bool& __cordl_internal_get__loop() ;

constexpr ::UnityW<::GlobalNamespace::AudioOcclusionConfig> const& __cordl_internal_get__occlusionConfig() const;

constexpr ::UnityW<::GlobalNamespace::AudioOcclusionConfig>& __cordl_internal_get__occlusionConfig() ;

constexpr float_t const& __cordl_internal_get__offset() const;

constexpr float_t& __cordl_internal_get__offset() ;

constexpr float_t const& __cordl_internal_get__pan() const;

constexpr float_t& __cordl_internal_get__pan() ;

constexpr ::GlobalNamespace::AudioRTPCTerm* const& __cordl_internal_get__panRTPC() const;

constexpr ::GlobalNamespace::AudioRTPCTerm*& __cordl_internal_get__panRTPC() ;

constexpr float_t const& __cordl_internal_get__panRTPCLerp() const;

constexpr float_t& __cordl_internal_get__panRTPCLerp() ;

constexpr float_t const& __cordl_internal_get__pitch() const;

constexpr float_t& __cordl_internal_get__pitch() ;

constexpr ::GlobalNamespace::AudioRTPCTerm* const& __cordl_internal_get__pitchRTPC() const;

constexpr ::GlobalNamespace::AudioRTPCTerm*& __cordl_internal_get__pitchRTPC() ;

constexpr float_t const& __cordl_internal_get__pitchRTPCLerp() const;

constexpr float_t& __cordl_internal_get__pitchRTPCLerp() ;

constexpr int32_t const& __cordl_internal_get__priority() const;

constexpr int32_t& __cordl_internal_get__priority() ;

constexpr bool const& __cordl_internal_get__randomTime() const;

constexpr bool& __cordl_internal_get__randomTime() ;

constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider> const& __cordl_internal_get__rtpcxProvider() const;

constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider>& __cordl_internal_get__rtpcxProvider() ;

constexpr float_t const& __cordl_internal_get__spatialBlend() const;

constexpr float_t& __cordl_internal_get__spatialBlend() ;

constexpr ::GlobalNamespace::AudioRTPCTerm* const& __cordl_internal_get__spatialBlendRTPC() const;

constexpr ::GlobalNamespace::AudioRTPCTerm*& __cordl_internal_get__spatialBlendRTPC() ;

constexpr float_t const& __cordl_internal_get__spatialBlendRTPCLerp() const;

constexpr float_t& __cordl_internal_get__spatialBlendRTPCLerp() ;

constexpr float_t const& __cordl_internal_get__spread() const;

constexpr float_t& __cordl_internal_get__spread() ;

constexpr ::GlobalNamespace::AudioRTPCTerm* const& __cordl_internal_get__spreadRTPC() const;

constexpr ::GlobalNamespace::AudioRTPCTerm*& __cordl_internal_get__spreadRTPC() ;

constexpr float_t const& __cordl_internal_get__spreadRTPCLerp() const;

constexpr float_t& __cordl_internal_get__spreadRTPCLerp() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::VoltageControlledAmplifier>> const& __cordl_internal_get__vcas() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::VoltageControlledAmplifier>>& __cordl_internal_get__vcas() ;

constexpr int32_t const& __cordl_internal_get__voiceLimit() const;

constexpr int32_t& __cordl_internal_get__voiceLimit() ;

constexpr ::GlobalNamespace::VoiceLimitBehaviorType const& __cordl_internal_get__voiceLimitBehavior() const;

constexpr ::GlobalNamespace::VoiceLimitBehaviorType& __cordl_internal_get__voiceLimitBehavior() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__volume() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__volume() ;

constexpr ::GlobalNamespace::AudioRTPCTerm* const& __cordl_internal_get__volumeRTPC() const;

constexpr ::GlobalNamespace::AudioRTPCTerm*& __cordl_internal_get__volumeRTPC() ;

constexpr float_t const& __cordl_internal_get__volumeRTPCLerp() const;

constexpr float_t& __cordl_internal_get__volumeRTPCLerp() ;

constexpr void __cordl_internal_set__Cooldown_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Delay_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Offset_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__attenuation(::GlobalNamespace::AudioRTPCTerm*  value) ;

constexpr void __cordl_internal_set__attenuationLerp(float_t  value) ;

constexpr void __cordl_internal_set__bus(::UnityW<::GlobalNamespace::AudioBus>  value) ;

constexpr void __cordl_internal_set__clip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__cooldown(float_t  value) ;

constexpr void __cordl_internal_set__delay(float_t  value) ;

constexpr void __cordl_internal_set__dontHibernate(bool  value) ;

constexpr void __cordl_internal_set__doppler(float_t  value) ;

constexpr void __cordl_internal_set__fadeIn(float_t  value) ;

constexpr void __cordl_internal_set__fadeOut(float_t  value) ;

constexpr void __cordl_internal_set__loop(bool  value) ;

constexpr void __cordl_internal_set__occlusionConfig(::UnityW<::GlobalNamespace::AudioOcclusionConfig>  value) ;

constexpr void __cordl_internal_set__offset(float_t  value) ;

constexpr void __cordl_internal_set__pan(float_t  value) ;

constexpr void __cordl_internal_set__panRTPC(::GlobalNamespace::AudioRTPCTerm*  value) ;

constexpr void __cordl_internal_set__panRTPCLerp(float_t  value) ;

constexpr void __cordl_internal_set__pitch(float_t  value) ;

constexpr void __cordl_internal_set__pitchRTPC(::GlobalNamespace::AudioRTPCTerm*  value) ;

constexpr void __cordl_internal_set__pitchRTPCLerp(float_t  value) ;

constexpr void __cordl_internal_set__priority(int32_t  value) ;

constexpr void __cordl_internal_set__randomTime(bool  value) ;

constexpr void __cordl_internal_set__rtpcxProvider(::UnityW<::GlobalNamespace::AudioRTPCXProvider>  value) ;

constexpr void __cordl_internal_set__spatialBlend(float_t  value) ;

constexpr void __cordl_internal_set__spatialBlendRTPC(::GlobalNamespace::AudioRTPCTerm*  value) ;

constexpr void __cordl_internal_set__spatialBlendRTPCLerp(float_t  value) ;

constexpr void __cordl_internal_set__spread(float_t  value) ;

constexpr void __cordl_internal_set__spreadRTPC(::GlobalNamespace::AudioRTPCTerm*  value) ;

constexpr void __cordl_internal_set__spreadRTPCLerp(float_t  value) ;

constexpr void __cordl_internal_set__vcas(::ArrayW<::UnityW<::GlobalNamespace::VoltageControlledAmplifier>>  value) ;

constexpr void __cordl_internal_set__voiceLimit(int32_t  value) ;

constexpr void __cordl_internal_set__voiceLimitBehavior(::GlobalNamespace::VoiceLimitBehaviorType  value) ;

constexpr void __cordl_internal_set__volume(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__volumeRTPC(::GlobalNamespace::AudioRTPCTerm*  value) ;

constexpr void __cordl_internal_set__volumeRTPCLerp(float_t  value) ;

/// @brief Method .ctor, addr 0x1804a5540, size 0x240, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Attenuation, addr 0x1802ec4b0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioRTPCTerm* get_Attenuation() ;

/// @brief Method get_AttenuationLerp, addr 0x1804a5780, size 0x10, virtual false, abstract: false, final false
inline float_t get_AttenuationLerp() ;

/// @brief Method get_Bus, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioBus> get_Bus() ;

/// @brief Method get_Clip, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_Clip() ;

/// @brief Method get_Cooldown, addr 0x180474bc0, size 0x10, virtual true, abstract: false, final true
inline float_t get_Cooldown() ;

/// @brief Method get_Delay, addr 0x180483530, size 0x10, virtual false, abstract: false, final false
inline float_t get_Delay() ;

/// @brief Method get_DontAutoHibernate, addr 0x1803b2d60, size 0x10, virtual false, abstract: false, final false
inline bool get_DontAutoHibernate() ;

/// @brief Method get_Doppler, addr 0x1802f8050, size 0x10, virtual false, abstract: false, final false
inline float_t get_Doppler() ;

/// @brief Method get_FadeIn, addr 0x180356140, size 0x10, virtual false, abstract: false, final false
inline float_t get_FadeIn() ;

/// @brief Method get_FadeOut, addr 0x180315260, size 0x10, virtual false, abstract: false, final false
inline float_t get_FadeOut() ;

/// @brief Method get_HasRTPC, addr 0x1804a5790, size 0x290, virtual false, abstract: false, final false
inline bool get_HasRTPC() ;

/// @brief Method get_Loop, addr 0x1804a5a20, size 0x10, virtual false, abstract: false, final false
inline bool get_Loop() ;

/// @brief Method get_OcclusionConfig, addr 0x1803a74d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioOcclusionConfig> get_OcclusionConfig() ;

/// @brief Method get_Offset, addr 0x180483520, size 0x10, virtual false, abstract: false, final false
inline float_t get_Offset() ;

/// @brief Method get_Pan, addr 0x1802e2d90, size 0x10, virtual false, abstract: false, final false
inline float_t get_Pan() ;

/// @brief Method get_PanRTPC, addr 0x1803223b0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioRTPCTerm* get_PanRTPC() ;

/// @brief Method get_PanRTPCLerp, addr 0x180371800, size 0x10, virtual false, abstract: false, final false
inline float_t get_PanRTPCLerp() ;

/// @brief Method get_Pitch, addr 0x1802f7fd0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Pitch() ;

/// @brief Method get_PitchRTPC, addr 0x1803d9940, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioRTPCTerm* get_PitchRTPC() ;

/// @brief Method get_PitchRTPCLerp, addr 0x18032ef70, size 0x10, virtual false, abstract: false, final false
inline float_t get_PitchRTPCLerp() ;

/// @brief Method get_Priority, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Priority() ;

/// @brief Method get_RTPCXProvider, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioRTPCXProvider> get_RTPCXProvider() ;

/// @brief Method get_RandomTime, addr 0x1804a5a30, size 0x10, virtual false, abstract: false, final false
inline bool get_RandomTime() ;

/// @brief Method get_SpatialBlend, addr 0x1802e2b90, size 0x10, virtual false, abstract: false, final false
inline float_t get_SpatialBlend() ;

/// @brief Method get_SpatialBlendRTPC, addr 0x1803b2dc0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioRTPCTerm* get_SpatialBlendRTPC() ;

/// @brief Method get_SpatialBlendRTPCLerp, addr 0x1803b2de0, size 0x10, virtual false, abstract: false, final false
inline float_t get_SpatialBlendRTPCLerp() ;

/// @brief Method get_Spread, addr 0x1802e2d80, size 0x10, virtual false, abstract: false, final false
inline float_t get_Spread() ;

/// @brief Method get_SpreadRTPC, addr 0x180474bf0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioRTPCTerm* get_SpreadRTPC() ;

/// @brief Method get_SpreadRTPCLerp, addr 0x180474c00, size 0x10, virtual false, abstract: false, final false
inline float_t get_SpreadRTPCLerp() ;

/// @brief Method get_VCAs, addr 0x180312ea0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::GlobalNamespace::VoltageControlledAmplifier>> get_VCAs() ;

/// @brief Method get_VoiceLimit, addr 0x1803d5ab0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_VoiceLimit() ;

/// @brief Method get_VoiceLimitBehavior, addr 0x1803fa750, size 0x10, virtual true, abstract: false, final true
inline ::GlobalNamespace::VoiceLimitBehaviorType get_VoiceLimitBehavior() ;

/// @brief Method get_Volume, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioVolume* get_Volume() ;

/// @brief Method get_VolumeRTPC, addr 0x180322750, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioRTPCTerm* get_VolumeRTPC() ;

/// @brief Method get_VolumeRTPCLerp, addr 0x1803d9950, size 0x10, virtual false, abstract: false, final false
inline float_t get_VolumeRTPCLerp() ;

/// @brief Convert to "::GlobalNamespace::ISoundBankable"
constexpr ::GlobalNamespace::ISoundBankable* i___GlobalNamespace__ISoundBankable() noexcept;

/// @brief Convert to "::GlobalNamespace::ISoundCueProvider"
constexpr ::GlobalNamespace::ISoundCueProvider* i___GlobalNamespace__ISoundCueProvider() noexcept;

/// @brief Convert to "::GlobalNamespace::IVirtualizable"
constexpr ::GlobalNamespace::IVirtualizable* i___GlobalNamespace__IVirtualizable() noexcept;

/// @brief Method set_Bus, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_Bus(::GlobalNamespace::AudioBus*  value) ;

/// @brief Method set_Clip, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_Clip(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_Cooldown, addr 0x180474c60, size 0x10, virtual false, abstract: false, final false
inline void set_Cooldown(float_t  value) ;

/// @brief Method set_Delay, addr 0x1804a5a40, size 0x10, virtual false, abstract: false, final false
inline void set_Delay(float_t  value) ;

/// @brief Method set_Doppler, addr 0x18046fb70, size 0x10, virtual false, abstract: false, final false
inline void set_Doppler(float_t  value) ;

/// @brief Method set_FadeIn, addr 0x1803561c0, size 0x10, virtual false, abstract: false, final false
inline void set_FadeIn(float_t  value) ;

/// @brief Method set_FadeOut, addr 0x1803dccc0, size 0x10, virtual false, abstract: false, final false
inline void set_FadeOut(float_t  value) ;

/// @brief Method set_Loop, addr 0x1804a5a50, size 0x10, virtual false, abstract: false, final false
inline void set_Loop(bool  value) ;

/// @brief Method set_OcclusionConfig, addr 0x1803d49a0, size 0x10, virtual false, abstract: false, final false
inline void set_OcclusionConfig(::GlobalNamespace::AudioOcclusionConfig*  value) ;

/// @brief Method set_Offset, addr 0x1804a5a60, size 0x10, virtual false, abstract: false, final false
inline void set_Offset(float_t  value) ;

/// @brief Method set_Pan, addr 0x1802e2ff0, size 0x10, virtual false, abstract: false, final false
inline void set_Pan(float_t  value) ;

/// @brief Method set_Pitch, addr 0x18046fb80, size 0x10, virtual false, abstract: false, final false
inline void set_Pitch(float_t  value) ;

/// @brief Method set_Priority, addr 0x1803164e0, size 0x10, virtual false, abstract: false, final false
inline void set_Priority(int32_t  value) ;

/// @brief Method set_RTPCXProvider, addr 0x1802f8080, size 0x10, virtual false, abstract: false, final false
inline void set_RTPCXProvider(::GlobalNamespace::AudioRTPCXProvider*  value) ;

/// @brief Method set_RandomTime, addr 0x1804a5a70, size 0x10, virtual false, abstract: false, final false
inline void set_RandomTime(bool  value) ;

/// @brief Method set_SpatialBlend, addr 0x1802e2f60, size 0x10, virtual false, abstract: false, final false
inline void set_SpatialBlend(float_t  value) ;

/// @brief Method set_Spread, addr 0x180307250, size 0x10, virtual false, abstract: false, final false
inline void set_Spread(float_t  value) ;

/// @brief Method set_VoiceLimit, addr 0x1803d5ac0, size 0x10, virtual false, abstract: false, final false
inline void set_VoiceLimit(int32_t  value) ;

/// @brief Method set_VoiceLimitBehavior, addr 0x1804a5a80, size 0x10, virtual false, abstract: false, final false
inline void set_VoiceLimitBehavior(::GlobalNamespace::VoiceLimitBehaviorType  value) ;

/// @brief Method set_Volume, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_Volume(::GlobalNamespace::AudioVolume*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SoundCue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SoundCue", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SoundCue(SoundCue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SoundCue", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SoundCue(SoundCue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17641};

/// @brief Field _clip, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____clip;

/// @brief Field _priority, offset: 0x20, size: 0x4, def value: None
 int32_t  ____priority;

/// @brief Field _bus, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioBus>  ____bus;

/// @brief Field _volume, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____volume;

/// @brief Field _pitch, offset: 0x38, size: 0x4, def value: None
 float_t  ____pitch;

/// @brief Field _pan, offset: 0x3c, size: 0x4, def value: None
 float_t  ____pan;

/// @brief Field _spatialBlend, offset: 0x40, size: 0x4, def value: None
 float_t  ____spatialBlend;

/// @brief Field _spread, offset: 0x44, size: 0x4, def value: None
 float_t  ____spread;

/// @brief Field _doppler, offset: 0x48, size: 0x4, def value: None
 float_t  ____doppler;

/// @brief Field _loop, offset: 0x4c, size: 0x1, def value: None
 bool  ____loop;

/// @brief Field _randomTime, offset: 0x4d, size: 0x1, def value: None
 bool  ____randomTime;

/// @brief Field _fadeIn, offset: 0x50, size: 0x4, def value: None
 float_t  ____fadeIn;

/// @brief Field _fadeOut, offset: 0x54, size: 0x4, def value: None
 float_t  ____fadeOut;

/// @brief Field _rtpcxProvider, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRTPCXProvider>  ____rtpcxProvider;

/// @brief Field _occlusionConfig, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioOcclusionConfig>  ____occlusionConfig;

/// @brief Field _voiceLimit, offset: 0x68, size: 0x4, def value: None
 int32_t  ____voiceLimit;

/// @brief Field _voiceLimitBehavior, offset: 0x6c, size: 0x4, def value: None
 ::GlobalNamespace::VoiceLimitBehaviorType  ____voiceLimitBehavior;

/// @brief Field _cooldown, offset: 0x70, size: 0x4, def value: None
 float_t  ____cooldown;

/// @brief Field <Cooldown>k__BackingField, offset: 0x74, size: 0x4, def value: None
 float_t  ____Cooldown_k__BackingField;

/// @brief Field _delay, offset: 0x78, size: 0x4, def value: None
 float_t  ____delay;

/// @brief Field <Delay>k__BackingField, offset: 0x7c, size: 0x4, def value: None
 float_t  ____Delay_k__BackingField;

/// @brief Field _offset, offset: 0x80, size: 0x4, def value: None
 float_t  ____offset;

/// @brief Field <Offset>k__BackingField, offset: 0x84, size: 0x4, def value: None
 float_t  ____Offset_k__BackingField;

/// @brief Field _dontHibernate, offset: 0x88, size: 0x1, def value: None
 bool  ____dontHibernate;

/// @brief Field _vcas, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::VoltageControlledAmplifier>>  ____vcas;

/// @brief Field _attenuation, offset: 0x98, size: 0x8, def value: None
 ::GlobalNamespace::AudioRTPCTerm*  ____attenuation;

/// @brief Field _attenuationLerp, offset: 0xa0, size: 0x4, def value: None
 float_t  ____attenuationLerp;

/// @brief Field _volumeRTPC, offset: 0xa8, size: 0x8, def value: None
 ::GlobalNamespace::AudioRTPCTerm*  ____volumeRTPC;

/// @brief Field _volumeRTPCLerp, offset: 0xb0, size: 0x4, def value: None
 float_t  ____volumeRTPCLerp;

/// @brief Field _pitchRTPC, offset: 0xb8, size: 0x8, def value: None
 ::GlobalNamespace::AudioRTPCTerm*  ____pitchRTPC;

/// @brief Field _pitchRTPCLerp, offset: 0xc0, size: 0x4, def value: None
 float_t  ____pitchRTPCLerp;

/// @brief Field _panRTPC, offset: 0xc8, size: 0x8, def value: None
 ::GlobalNamespace::AudioRTPCTerm*  ____panRTPC;

/// @brief Field _panRTPCLerp, offset: 0xd0, size: 0x4, def value: None
 float_t  ____panRTPCLerp;

/// @brief Field _spatialBlendRTPC, offset: 0xd8, size: 0x8, def value: None
 ::GlobalNamespace::AudioRTPCTerm*  ____spatialBlendRTPC;

/// @brief Field _spatialBlendRTPCLerp, offset: 0xe0, size: 0x4, def value: None
 float_t  ____spatialBlendRTPCLerp;

/// @brief Field _spreadRTPC, offset: 0xe8, size: 0x8, def value: None
 ::GlobalNamespace::AudioRTPCTerm*  ____spreadRTPC;

/// @brief Field _spreadRTPCLerp, offset: 0xf0, size: 0x4, def value: None
 float_t  ____spreadRTPCLerp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SoundCue, ____clip) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____priority) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____bus) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____volume) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____pitch) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____pan) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____spatialBlend) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____spread) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____doppler) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____loop) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____randomTime) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____fadeIn) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____fadeOut) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____rtpcxProvider) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____occlusionConfig) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____voiceLimit) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____voiceLimitBehavior) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____cooldown) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____Cooldown_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____delay) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____Delay_k__BackingField) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____offset) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____Offset_k__BackingField) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____dontHibernate) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____vcas) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____attenuation) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____attenuationLerp) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____volumeRTPC) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____volumeRTPCLerp) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____pitchRTPC) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____pitchRTPCLerp) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____panRTPC) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____panRTPCLerp) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____spatialBlendRTPC) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____spatialBlendRTPCLerp) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____spreadRTPC) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundCue, ____spreadRTPCLerp) == 0xf0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SoundCue) == 0xf8, "Size mismatch!");

} // namespace end def GlobalNamespace

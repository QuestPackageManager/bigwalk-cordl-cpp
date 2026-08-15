#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerVoicePlaybackControl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerVoicePlaybackControl)
namespace Dissonance::Audio::Playback {
class SamplePlaybackComponent;
}
namespace Dissonance::Audio::Playback {
class VoicePlayback;
}
namespace GlobalNamespace {
class AudibilityDebug;
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
class BiquadFilters;
}
namespace GlobalNamespace {
class IAudioRTPCXProvider;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class PlayerVoicePlaybackControl___c;
}
namespace GlobalNamespace {
class SoundCue;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace UnityEngine::Audio {
class AudioMixer;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioClip_PCMReaderCallback;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerVoicePlaybackControl;
}
namespace GlobalNamespace {
class PlayerVoicePlaybackControl___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerVoicePlaybackControl*);
MARK_REF_T(::GlobalNamespace::PlayerVoicePlaybackControl___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerVoicePlaybackControl*, "", "PlayerVoicePlaybackControl");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerVoicePlaybackControl___c*, "", "PlayerVoicePlaybackControl/<>c");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerVoicePlaybackControl/<>c
class CORDL_TYPE PlayerVoicePlaybackControl___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::PlayerVoicePlaybackControl___c*  __9;

/// @brief Field <>9__50_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__50_0, put=setStaticF___9__50_0)) ::UnityEngine::AudioClip_PCMReaderCallback*  __9__50_0;

static inline ::GlobalNamespace::PlayerVoicePlaybackControl___c* New_ctor() ;

/// @brief Method <RebuildCachedClip>b__50_0, addr 0x18038e250, size 0x30, virtual false, abstract: false, final false
inline void _RebuildCachedClip_b__50_0(::ArrayW<float_t>  buf) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::PlayerVoicePlaybackControl___c* getStaticF___9() ;

static inline ::UnityEngine::AudioClip_PCMReaderCallback* getStaticF___9__50_0() ;

static inline void setStaticF___9(::GlobalNamespace::PlayerVoicePlaybackControl___c*  value) ;

static inline void setStaticF___9__50_0(::UnityEngine::AudioClip_PCMReaderCallback*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerVoicePlaybackControl___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerVoicePlaybackControl___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerVoicePlaybackControl___c(PlayerVoicePlaybackControl___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerVoicePlaybackControl___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerVoicePlaybackControl___c(PlayerVoicePlaybackControl___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5515};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PlayerVoicePlaybackControl___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerVoicePlaybackControl
class CORDL_TYPE PlayerVoicePlaybackControl : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::PlayerVoicePlaybackControl___c;

/// @brief Field AttenuationCurve, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_AttenuationCurve, put=__cordl_internal_set_AttenuationCurve)) ::UnityEngine::AnimationCurve*  AttenuationCurve;

/// @brief Field AudibilityDebugGUI, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AudibilityDebugGUI, put=setStaticF_AudibilityDebugGUI)) ::GlobalNamespace::AudibilityDebug*  AudibilityDebugGUI;

/// @brief Field FilterAngleCurve, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_FilterAngleCurve, put=__cordl_internal_set_FilterAngleCurve)) ::UnityEngine::AnimationCurve*  FilterAngleCurve;

/// @brief Field FilterDistanceCurve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_FilterDistanceCurve, put=__cordl_internal_set_FilterDistanceCurve)) ::UnityEngine::AnimationCurve*  FilterDistanceCurve;

/// @brief Field GibberishCue, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_GibberishCue, put=__cordl_internal_set_GibberishCue)) ::UnityW<::GlobalNamespace::SoundCue>  GibberishCue;

/// @brief Field PARAM_DRY, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PARAM_DRY, put=setStaticF_PARAM_DRY)) ::ArrayW<::StringW>  PARAM_DRY;

/// @brief Field PARAM_HIGH, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PARAM_HIGH, put=setStaticF_PARAM_HIGH)) ::ArrayW<::StringW>  PARAM_HIGH;

/// @brief Field PARAM_REVERB_BOOST_WET, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PARAM_REVERB_BOOST_WET, put=setStaticF_PARAM_REVERB_BOOST_WET)) ::ArrayW<::StringW>  PARAM_REVERB_BOOST_WET;

/// @brief Field PARAM_REVERB_FALL_WET, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PARAM_REVERB_FALL_WET, put=setStaticF_PARAM_REVERB_FALL_WET)) ::ArrayW<::StringW>  PARAM_REVERB_FALL_WET;

 __declspec(property(get=get_PeakARV)) float_t  PeakARV;

 __declspec(property(get=get_SmoothedARV)) float_t  SmoothedARV;

 __declspec(property(get=get_SourceController)) ::UnityW<::GlobalNamespace::AudioSourceController>  SourceController;

/// @brief Field SpatialVolCurve, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_SpatialVolCurve, put=__cordl_internal_set_SpatialVolCurve)) ::UnityEngine::AnimationCurve*  SpatialVolCurve;

 __declspec(property(get=get_TwoDMode, put=set_TwoDMode)) bool  TwoDMode;

 __declspec(property(get=get_XProviderIdentifier)) ::StringW  XProviderIdentifier;

/// @brief Field <TwoDMode>k__BackingField, offset 0xc4, size 0x1 
 __declspec(property(get=__cordl_internal_get__TwoDMode_k__BackingField, put=__cordl_internal_set__TwoDMode_k__BackingField)) bool  _TwoDMode_k__BackingField;

/// @brief Field _amplitudeVol, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__amplitudeVol, put=__cordl_internal_set__amplitudeVol)) ::GlobalNamespace::AudioVolume*  _amplitudeVol;

/// @brief Field _attenuation, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__attenuation, put=__cordl_internal_set__attenuation)) float_t  _attenuation;

/// @brief Field _blindFoldFilter, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__blindFoldFilter, put=__cordl_internal_set__blindFoldFilter)) ::UnityW<::GlobalNamespace::BiquadFilters>  _blindFoldFilter;

/// @brief Field _cachedClip, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedClip, put=__cordl_internal_set__cachedClip)) ::UnityW<::UnityEngine::AudioClip>  _cachedClip;

/// @brief Field _cue, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__cue, put=__cordl_internal_set__cue)) ::UnityW<::GlobalNamespace::SoundCue>  _cue;

/// @brief Field _eqFilter, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__eqFilter, put=__cordl_internal_set__eqFilter)) ::UnityW<::GlobalNamespace::BiquadFilters>  _eqFilter;

/// @brief Field _fallWetLvl, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__fallWetLvl, put=__cordl_internal_set__fallWetLvl)) float_t  _fallWetLvl;

/// @brief Field _gibberishMode, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__gibberishMode, put=setStaticF__gibberishMode)) bool  _gibberishMode;

/// @brief Field _index, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__index, put=__cordl_internal_set__index)) int32_t  _index;

/// @brief Field _mixer, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__mixer, put=__cordl_internal_set__mixer)) ::UnityW<::UnityEngine::Audio::AudioMixer>  _mixer;

/// @brief Field _outdoornessVol, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__outdoornessVol, put=__cordl_internal_set__outdoornessVol)) ::GlobalNamespace::AudioVolume*  _outdoornessVol;

/// @brief Field _peakARV, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get__peakARV, put=__cordl_internal_set__peakARV)) float_t  _peakARV;

/// @brief Field _smoothedARV, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get__smoothedARV, put=__cordl_internal_set__smoothedARV)) float_t  _smoothedARV;

/// @brief Field _sourceController, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__sourceController, put=__cordl_internal_set__sourceController)) ::UnityW<::GlobalNamespace::AudioSourceController>  _sourceController;

/// @brief Field _speechlessVol, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__speechlessVol, put=__cordl_internal_set__speechlessVol)) ::GlobalNamespace::AudioVolume*  _speechlessVol;

/// @brief Field controls, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_controls, put=setStaticF_controls)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>>*  controls;

/// @brief Field cueStack, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cueStack, put=setStaticF_cueStack)) ::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::SoundCue>>*  cueStack;

/// @brief Field dissonanceSampleProvider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_dissonanceSampleProvider, put=__cordl_internal_set_dissonanceSampleProvider)) ::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent>  dissonanceSampleProvider;

/// @brief Field playerCharacter, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field voiceBlockingMask, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_voiceBlockingMask, put=__cordl_internal_set_voiceBlockingMask)) ::UnityEngine::LayerMask  voiceBlockingMask;

/// @brief Field voicePlayback, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_voicePlayback, put=__cordl_internal_set_voicePlayback)) ::UnityW<::Dissonance::Audio::Playback::VoicePlayback>  voicePlayback;

/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr operator  ::GlobalNamespace::IAudioRTPCXProvider*() noexcept;

/// @brief Method Awake, addr 0x180380130, size 0x80, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FindByPlayerName, addr 0x1803801b0, size 0xd0, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl> FindByPlayerName(::StringW  playerName) ;

/// @brief Method GetX, addr 0x180380280, size 0xf0, virtual true, abstract: false, final true
inline bool GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

/// @brief Method Initialize, addr 0x180380370, size 0x160, virtual false, abstract: false, final false
static inline void Initialize() ;

static inline ::GlobalNamespace::PlayerVoicePlaybackControl* New_ctor() ;

/// @brief Method OnAudioDeviceChange, addr 0x1803804d0, size 0x80, virtual false, abstract: false, final false
inline void OnAudioDeviceChange(bool  deviceChanged) ;

/// @brief Method OnDestroy, addr 0x180380550, size 0x50, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1803805a0, size 0x170, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180380710, size 0x1d0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlayGibberish, addr 0x1803808e0, size 0x430, virtual false, abstract: false, final false
inline void PlayGibberish() ;

/// @brief Method PlayVoice, addr 0x180380d10, size 0x4c0, virtual false, abstract: false, final false
inline void PlayVoice() ;

/// @brief Method RebuildCachedClip, addr 0x1803811d0, size 0x230, virtual false, abstract: false, final false
inline void RebuildCachedClip() ;

/// @brief Method SetBlindFoldMode, addr 0x180381400, size 0x1a0, virtual false, abstract: false, final false
inline void SetBlindFoldMode(bool  active) ;

/// @brief Method Update, addr 0x180381600, size 0xa70, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method <PlayGibberish>g___clearRef|56_0, addr 0x1803815a0, size 0x60, virtual false, abstract: false, final false
static inline void _PlayGibberish_g___clearRef_56_0(::GlobalNamespace::PlayerVoicePlaybackControl*  p, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayVoice>g___clearRef|55_0, addr 0x1803815a0, size 0x60, virtual false, abstract: false, final false
static inline void _PlayVoice_g___clearRef_55_0(::GlobalNamespace::PlayerVoicePlaybackControl*  p, ::GlobalNamespace::AudioSourceController*  c) ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_AttenuationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_AttenuationCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_FilterAngleCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_FilterAngleCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_FilterDistanceCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_FilterDistanceCurve() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_GibberishCue() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_GibberishCue() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_SpatialVolCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_SpatialVolCurve() ;

constexpr bool const& __cordl_internal_get__TwoDMode_k__BackingField() const;

constexpr bool& __cordl_internal_get__TwoDMode_k__BackingField() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__amplitudeVol() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__amplitudeVol() ;

constexpr float_t const& __cordl_internal_get__attenuation() const;

constexpr float_t& __cordl_internal_get__attenuation() ;

constexpr ::UnityW<::GlobalNamespace::BiquadFilters> const& __cordl_internal_get__blindFoldFilter() const;

constexpr ::UnityW<::GlobalNamespace::BiquadFilters>& __cordl_internal_get__blindFoldFilter() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__cachedClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__cachedClip() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get__cue() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get__cue() ;

constexpr ::UnityW<::GlobalNamespace::BiquadFilters> const& __cordl_internal_get__eqFilter() const;

constexpr ::UnityW<::GlobalNamespace::BiquadFilters>& __cordl_internal_get__eqFilter() ;

constexpr float_t const& __cordl_internal_get__fallWetLvl() const;

constexpr float_t& __cordl_internal_get__fallWetLvl() ;

constexpr int32_t const& __cordl_internal_get__index() const;

constexpr int32_t& __cordl_internal_get__index() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& __cordl_internal_get__mixer() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& __cordl_internal_get__mixer() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__outdoornessVol() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__outdoornessVol() ;

constexpr float_t const& __cordl_internal_get__peakARV() const;

constexpr float_t& __cordl_internal_get__peakARV() ;

constexpr float_t const& __cordl_internal_get__smoothedARV() const;

constexpr float_t& __cordl_internal_get__smoothedARV() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__sourceController() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__sourceController() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__speechlessVol() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__speechlessVol() ;

constexpr ::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent> const& __cordl_internal_get_dissonanceSampleProvider() const;

constexpr ::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent>& __cordl_internal_get_dissonanceSampleProvider() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_voiceBlockingMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_voiceBlockingMask() ;

constexpr ::UnityW<::Dissonance::Audio::Playback::VoicePlayback> const& __cordl_internal_get_voicePlayback() const;

constexpr ::UnityW<::Dissonance::Audio::Playback::VoicePlayback>& __cordl_internal_get_voicePlayback() ;

constexpr void __cordl_internal_set_AttenuationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_FilterAngleCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_FilterDistanceCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_GibberishCue(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_SpatialVolCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__TwoDMode_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__amplitudeVol(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__attenuation(float_t  value) ;

constexpr void __cordl_internal_set__blindFoldFilter(::UnityW<::GlobalNamespace::BiquadFilters>  value) ;

constexpr void __cordl_internal_set__cachedClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__cue(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set__eqFilter(::UnityW<::GlobalNamespace::BiquadFilters>  value) ;

constexpr void __cordl_internal_set__fallWetLvl(float_t  value) ;

constexpr void __cordl_internal_set__index(int32_t  value) ;

constexpr void __cordl_internal_set__mixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value) ;

constexpr void __cordl_internal_set__outdoornessVol(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__peakARV(float_t  value) ;

constexpr void __cordl_internal_set__smoothedARV(float_t  value) ;

constexpr void __cordl_internal_set__sourceController(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__speechlessVol(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set_dissonanceSampleProvider(::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent>  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_voiceBlockingMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_voicePlayback(::UnityW<::Dissonance::Audio::Playback::VoicePlayback>  value) ;

/// @brief Method .ctor, addr 0x1803825b0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::AudibilityDebug* getStaticF_AudibilityDebugGUI() ;

static inline ::ArrayW<::StringW> getStaticF_PARAM_DRY() ;

static inline ::ArrayW<::StringW> getStaticF_PARAM_HIGH() ;

static inline ::ArrayW<::StringW> getStaticF_PARAM_REVERB_BOOST_WET() ;

static inline ::ArrayW<::StringW> getStaticF_PARAM_REVERB_FALL_WET() ;

static inline bool getStaticF__gibberishMode() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>>* getStaticF_controls() ;

static inline ::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::SoundCue>>* getStaticF_cueStack() ;

/// @brief Method get_GibberishMode, addr 0x180382690, size 0x40, virtual false, abstract: false, final false
static inline bool get_GibberishMode() ;

/// @brief Method get_PeakARV, addr 0x18032ef70, size 0x10, virtual false, abstract: false, final false
inline float_t get_PeakARV() ;

/// @brief Method get_SmoothedARV, addr 0x1803826d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_SmoothedARV() ;

/// @brief Method get_SourceController, addr 0x1802e5800, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioSourceController> get_SourceController() ;

/// @brief Method get_TwoDMode, addr 0x1803826e0, size 0x10, virtual false, abstract: false, final false
inline bool get_TwoDMode() ;

/// @brief Method get_XProviderIdentifier, addr 0x18037a100, size 0x3f0, virtual true, abstract: false, final true
inline ::StringW get_XProviderIdentifier() ;

/// @brief Convert to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr ::GlobalNamespace::IAudioRTPCXProvider* i___GlobalNamespace__IAudioRTPCXProvider() noexcept;

static inline void setStaticF_AudibilityDebugGUI(::GlobalNamespace::AudibilityDebug*  value) ;

static inline void setStaticF_PARAM_DRY(::ArrayW<::StringW>  value) ;

static inline void setStaticF_PARAM_HIGH(::ArrayW<::StringW>  value) ;

static inline void setStaticF_PARAM_REVERB_BOOST_WET(::ArrayW<::StringW>  value) ;

static inline void setStaticF_PARAM_REVERB_FALL_WET(::ArrayW<::StringW>  value) ;

static inline void setStaticF__gibberishMode(bool  value) ;

static inline void setStaticF_controls(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>>*  value) ;

static inline void setStaticF_cueStack(::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::SoundCue>>*  value) ;

/// @brief Method set_GibberishMode, addr 0x1803826f0, size 0x130, virtual false, abstract: false, final false
static inline void set_GibberishMode(bool  value) ;

/// @brief Method set_TwoDMode, addr 0x180382820, size 0x40, virtual false, abstract: false, final false
inline void set_TwoDMode(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerVoicePlaybackControl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerVoicePlaybackControl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerVoicePlaybackControl(PlayerVoicePlaybackControl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerVoicePlaybackControl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerVoicePlaybackControl(PlayerVoicePlaybackControl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5516};

/// @brief Field voicePlayback, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Dissonance::Audio::Playback::VoicePlayback>  ___voicePlayback;

/// @brief Field dissonanceSampleProvider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent>  ___dissonanceSampleProvider;

/// @brief Field voiceBlockingMask, offset: 0x30, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___voiceBlockingMask;

/// @brief Field playerCharacter, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field FilterDistanceCurve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___FilterDistanceCurve;

/// @brief Field FilterAngleCurve, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___FilterAngleCurve;

/// @brief Field AttenuationCurve, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___AttenuationCurve;

/// @brief Field SpatialVolCurve, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___SpatialVolCurve;

/// @brief Field GibberishCue, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___GibberishCue;

/// @brief Field _cue, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ____cue;

/// @brief Field _index, offset: 0x70, size: 0x4, def value: None
 int32_t  ____index;

/// @brief Field _mixer, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixer>  ____mixer;

/// @brief Field _cachedClip, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____cachedClip;

/// @brief Field _sourceController, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____sourceController;

/// @brief Field _eqFilter, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BiquadFilters>  ____eqFilter;

/// @brief Field _attenuation, offset: 0x98, size: 0x4, def value: None
 float_t  ____attenuation;

/// @brief Field _outdoornessVol, offset: 0xa0, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____outdoornessVol;

/// @brief Field _amplitudeVol, offset: 0xa8, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____amplitudeVol;

/// @brief Field _speechlessVol, offset: 0xb0, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____speechlessVol;

/// @brief Field _fallWetLvl, offset: 0xb8, size: 0x4, def value: None
 float_t  ____fallWetLvl;

/// @brief Field _smoothedARV, offset: 0xbc, size: 0x4, def value: None
 float_t  ____smoothedARV;

/// @brief Field _peakARV, offset: 0xc0, size: 0x4, def value: None
 float_t  ____peakARV;

/// @brief Field <TwoDMode>k__BackingField, offset: 0xc4, size: 0x1, def value: None
 bool  ____TwoDMode_k__BackingField;

/// @brief Field _blindFoldFilter, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BiquadFilters>  ____blindFoldFilter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerVoicePlaybackControl, ___voicePlayback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVoicePlaybackControl, ___dissonanceSampleProvider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVoicePlaybackControl, ___voiceBlockingMask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVoicePlaybackControl, ___playerCharacter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVoicePlaybackControl, ___FilterDistanceCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVoicePlaybackControl, ___FilterAngleCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVoicePlaybackControl, ___AttenuationCurve) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVoicePlaybackControl, ___SpatialVolCurve) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVoicePlaybackControl, ___GibberishCue) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVoicePlaybackControl, ____cue) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVoicePlaybackControl, ____index) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVoicePlaybackControl, ____mixer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVoicePlaybackControl, ____cachedClip) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVoicePlaybackControl, ____sourceController) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVoicePlaybackControl, ____eqFilter) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVoicePlaybackControl, ____attenuation) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVoicePlaybackControl, ____outdoornessVol) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVoicePlaybackControl, ____amplitudeVol) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVoicePlaybackControl, ____speechlessVol) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVoicePlaybackControl, ____fallWetLvl) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVoicePlaybackControl, ____smoothedARV) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVoicePlaybackControl, ____peakARV) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVoicePlaybackControl, ____TwoDMode_k__BackingField) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVoicePlaybackControl, ____blindFoldFilter) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerVoicePlaybackControl) == 0xd0, "Size mismatch!");

} // namespace end def GlobalNamespace

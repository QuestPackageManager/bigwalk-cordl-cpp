#pragma once
// IWYU pragma private; include "GlobalNamespace/GlobalAudioEffects.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixer_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GlobalAudioEffects)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioEvent;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace GlobalNamespace {
class GlobalAudioEffects__RecoverMicrophone_d__72;
}
namespace GlobalNamespace {
class MenuMusicPlayer;
}
namespace GlobalNamespace {
class SoundCue;
}
namespace GlobalNamespace {
class TrainAudio;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Audio {
class AudioMixer;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalAudioEffects;
}
namespace GlobalNamespace {
class GlobalAudioEffects__RecoverMicrophone_d__72;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GlobalAudioEffects*);
MARK_REF_T(::GlobalNamespace::GlobalAudioEffects__RecoverMicrophone_d__72*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GlobalAudioEffects*, "", "GlobalAudioEffects");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GlobalAudioEffects__RecoverMicrophone_d__72*, "", "GlobalAudioEffects/<RecoverMicrophone>d__72");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GlobalAudioEffects/<RecoverMicrophone>d__72
class CORDL_TYPE GlobalAudioEffects__RecoverMicrophone_d__72 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GlobalAudioEffects>  __4__this;

/// @brief Field <i>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__2, put=__cordl_internal_set__i_5__2)) int32_t  _i_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1803e2090, size 0x280, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::GlobalNamespace::GlobalAudioEffects__RecoverMicrophone_d__72* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GlobalAudioEffects> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GlobalAudioEffects>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__i_5__2() const;

constexpr int32_t& __cordl_internal_get__i_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GlobalAudioEffects>  value) ;

constexpr void __cordl_internal_set__i_5__2(int32_t  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GlobalAudioEffects__RecoverMicrophone_d__72() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlobalAudioEffects__RecoverMicrophone_d__72", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalAudioEffects__RecoverMicrophone_d__72(GlobalAudioEffects__RecoverMicrophone_d__72 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalAudioEffects__RecoverMicrophone_d__72", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalAudioEffects__RecoverMicrophone_d__72(GlobalAudioEffects__RecoverMicrophone_d__72 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4842};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GlobalAudioEffects>  _____4__this;

/// @brief Field <i>5__2, offset: 0x28, size: 0x4, def value: None
 int32_t  ____i_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GlobalAudioEffects__RecoverMicrophone_d__72, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalAudioEffects__RecoverMicrophone_d__72, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalAudioEffects__RecoverMicrophone_d__72, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalAudioEffects__RecoverMicrophone_d__72, ____i_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GlobalAudioEffects__RecoverMicrophone_d__72) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies SoundCue, UnityEngine.Audio.AudioMixer, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GlobalAudioEffects
class CORDL_TYPE GlobalAudioEffects : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _RecoverMicrophone_d__72 = ::GlobalNamespace::GlobalAudioEffects__RecoverMicrophone_d__72;

/// @brief Field BlindfoldLoop, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_BlindfoldLoop, put=__cordl_internal_set_BlindfoldLoop)) ::UnityW<::GlobalNamespace::AudioAsset>  BlindfoldLoop;

/// @brief Field Goodbye1WhiteLoop, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_Goodbye1WhiteLoop, put=__cordl_internal_set_Goodbye1WhiteLoop)) ::UnityW<::GlobalNamespace::SoundCue>  Goodbye1WhiteLoop;

/// @brief Field ImpactsMixer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_ImpactsMixer, put=__cordl_internal_set_ImpactsMixer)) ::UnityW<::UnityEngine::Audio::AudioMixer>  ImpactsMixer;

/// @brief Field MegaphoneMixers, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_MegaphoneMixers, put=__cordl_internal_set_MegaphoneMixers)) ::ArrayW<::UnityW<::UnityEngine::Audio::AudioMixer>>  MegaphoneMixers;

/// @brief Field MenuAudio, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_MenuAudio, put=__cordl_internal_set_MenuAudio)) ::UnityW<::GlobalNamespace::MenuMusicPlayer>  MenuAudio;

/// @brief Field Mixer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Mixer, put=__cordl_internal_set_Mixer)) ::UnityW<::UnityEngine::Audio::AudioMixer>  Mixer;

/// @brief Field MusicPitchDeduction, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_MusicPitchDeduction, put=__cordl_internal_set_MusicPitchDeduction)) float_t  MusicPitchDeduction;

/// @brief Field SpeechlessPitchDeduction, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_SpeechlessPitchDeduction, put=__cordl_internal_set_SpeechlessPitchDeduction)) float_t  SpeechlessPitchDeduction;

/// @brief Field StageSpeakerMixer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_StageSpeakerMixer, put=__cordl_internal_set_StageSpeakerMixer)) ::UnityW<::UnityEngine::Audio::AudioMixer>  StageSpeakerMixer;

/// @brief Field StageSpeakerPosition, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_StageSpeakerPosition, put=__cordl_internal_set_StageSpeakerPosition)) ::UnityEngine::Vector3  StageSpeakerPosition;

/// @brief Field StageSpeakerReverbHFCurve, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_StageSpeakerReverbHFCurve, put=__cordl_internal_set_StageSpeakerReverbHFCurve)) ::UnityEngine::AnimationCurve*  StageSpeakerReverbHFCurve;

/// @brief Field StageSpeakerReverbLvlCurve, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_StageSpeakerReverbLvlCurve, put=__cordl_internal_set_StageSpeakerReverbLvlCurve)) ::UnityEngine::AnimationCurve*  StageSpeakerReverbLvlCurve;

 __declspec(property(get=get_TrainAudioManager, put=set_TrainAudioManager)) ::UnityW<::GlobalNamespace::TrainAudio>  TrainAudioManager;

/// @brief Field VoiceCues, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_VoiceCues, put=__cordl_internal_set_VoiceCues)) ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  VoiceCues;

/// @brief Field VoiceMixer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_VoiceMixer, put=__cordl_internal_set_VoiceMixer)) ::UnityW<::UnityEngine::Audio::AudioMixer>  VoiceMixer;

 __declspec(property(get=get_VoiceSptialBlend, put=set_VoiceSptialBlend)) float_t  VoiceSptialBlend;

/// @brief Field WalkieTalkieMixer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_WalkieTalkieMixer, put=__cordl_internal_set_WalkieTalkieMixer)) ::UnityW<::UnityEngine::Audio::AudioMixer>  WalkieTalkieMixer;

 __declspec(property(get=get_WorldJustStarted, put=set_WorldJustStarted)) bool  WorldJustStarted;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::GlobalNamespace::GlobalAudioEffects>  _Instance_k__BackingField;

/// @brief Field <TrainAudioManager>k__BackingField, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__TrainAudioManager_k__BackingField, put=__cordl_internal_set__TrainAudioManager_k__BackingField)) ::UnityW<::GlobalNamespace::TrainAudio>  _TrainAudioManager_k__BackingField;

/// @brief Field <VoiceSptialBlend>k__BackingField, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__VoiceSptialBlend_k__BackingField, put=__cordl_internal_set__VoiceSptialBlend_k__BackingField)) float_t  _VoiceSptialBlend_k__BackingField;

/// @brief Field <WorldJustStarted>k__BackingField, offset 0xbc, size 0x1 
 __declspec(property(get=__cordl_internal_get__WorldJustStarted_k__BackingField, put=__cordl_internal_set__WorldJustStarted_k__BackingField)) bool  _WorldJustStarted_k__BackingField;

/// @brief Field _blindfoldLoopEvent, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__blindfoldLoopEvent, put=__cordl_internal_set__blindfoldLoopEvent)) ::GlobalNamespace::AudioEvent*  _blindfoldLoopEvent;

/// @brief Field _goodbye1WhiteLoopASC, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__goodbye1WhiteLoopASC, put=__cordl_internal_set__goodbye1WhiteLoopASC)) ::UnityW<::GlobalNamespace::AudioSourceController>  _goodbye1WhiteLoopASC;

/// @brief Field _micRecovery, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__micRecovery, put=__cordl_internal_set__micRecovery)) ::UnityEngine::Coroutine*  _micRecovery;

/// @brief Field _micRecoveryDelays, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__micRecoveryDelays, put=setStaticF__micRecoveryDelays)) ::ArrayW<float_t>  _micRecoveryDelays;

/// @brief Field _worldSFXFadeIn, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__worldSFXFadeIn, put=__cordl_internal_set__worldSFXFadeIn)) float_t  _worldSFXFadeIn;

/// @brief Method Awake, addr 0x1803d19f0, size 0x1d0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GlobalAudioEffects* New_ctor() ;

/// @brief Method OnAudioConfigChanged, addr 0x1803d1bc0, size 0x90, virtual false, abstract: false, final false
inline void OnAudioConfigChanged(bool  deviceChanged) ;

/// @brief Method OnDestroy, addr 0x1803d1c50, size 0x50, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnWorldDestroyed, addr 0x1803d1ca0, size 0xb0, virtual false, abstract: false, final false
inline void OnWorldDestroyed() ;

/// @brief Method OnWorldStarted, addr 0x1803d1d50, size 0xb0, virtual false, abstract: false, final false
inline void OnWorldStarted() ;

/// @brief Method RecoverMicrophone, addr 0x1803d1e00, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* RecoverMicrophone() ;

/// @brief Method ResetAll, addr 0x1803d1e50, size 0x250, virtual false, abstract: false, final false
inline void ResetAll() ;

/// @brief Method ResetSpeechlessness, addr 0x1803d20a0, size 0x100, virtual false, abstract: false, final false
inline void ResetSpeechlessness() ;

/// @brief Method SetBlindfold, addr 0x1803d21a0, size 0x1f0, virtual false, abstract: false, final false
inline void SetBlindfold(bool  active) ;

/// @brief Method SetDSPBufferSize, addr 0x1803d2390, size 0x120, virtual false, abstract: false, final false
static inline bool SetDSPBufferSize(int32_t  bufferSize) ;

/// @brief Method SetHeadphone, addr 0x1803d24b0, size 0xe0, virtual false, abstract: false, final false
inline void SetHeadphone(bool  active) ;

/// @brief Method SetMasterLimiterThreshold, addr 0x1803d2590, size 0x50, virtual false, abstract: false, final false
inline void SetMasterLimiterThreshold(float_t  dB) ;

/// @brief Method SetMusic3DVol, addr 0x1803d25e0, size 0x60, virtual false, abstract: false, final false
inline void SetMusic3DVol(float_t  vol) ;

/// @brief Method SetSFXBusVol, addr 0x1803d2640, size 0x90, virtual false, abstract: false, final false
inline void SetSFXBusVol(float_t  vol) ;

/// @brief Method SetSuperWetBlackTower, addr 0x1803d26d0, size 0x60, virtual false, abstract: false, final false
inline void SetSuperWetBlackTower(float_t  vol) ;

/// @brief Method SetSuperWetEnding, addr 0x1803d2730, size 0x60, virtual false, abstract: false, final false
inline void SetSuperWetEnding(float_t  vol) ;

/// @brief Method SetVoiceNormalVol, addr 0x1803d2790, size 0x80, virtual false, abstract: false, final false
inline void SetVoiceNormalVol(float_t  vol) ;

/// @brief Method SetVoiceSuperWetVol, addr 0x1803d2810, size 0x60, virtual false, abstract: false, final false
inline void SetVoiceSuperWetVol(float_t  vol) ;

/// @brief Method ToggleFilterBypass, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool ToggleFilterBypass() ;

/// @brief Method ToggleFilterBypass, addr 0x1803d2870, size 0x210, virtual false, abstract: false, final false
static inline bool ToggleFilterBypass(::System::Type*  filterType) ;

/// @brief Method ToggleUnityFilterBypass, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool ToggleUnityFilterBypass() ;

/// @brief Method ToggleUnityFilterBypass, addr 0x1803d2a80, size 0x210, virtual false, abstract: false, final false
static inline bool ToggleUnityFilterBypass(::System::Type*  filterType) ;

/// @brief Method Update, addr 0x1803d2e30, size 0xad0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method <OnWorldStarted>b__90_0, addr 0x1803d2c90, size 0x140, virtual false, abstract: false, final false
inline void _OnWorldStarted_b__90_0(int32_t  _) ;

/// @brief Method <OnWorldStarted>g___clearRef|90_1, addr 0x1803d2dd0, size 0x60, virtual false, abstract: false, final false
static inline void _OnWorldStarted_g___clearRef_90_1(::GlobalNamespace::GlobalAudioEffects*  g, ::GlobalNamespace::AudioSourceController*  c) ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_BlindfoldLoop() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_BlindfoldLoop() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_Goodbye1WhiteLoop() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_Goodbye1WhiteLoop() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& __cordl_internal_get_ImpactsMixer() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& __cordl_internal_get_ImpactsMixer() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Audio::AudioMixer>> const& __cordl_internal_get_MegaphoneMixers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Audio::AudioMixer>>& __cordl_internal_get_MegaphoneMixers() ;

constexpr ::UnityW<::GlobalNamespace::MenuMusicPlayer> const& __cordl_internal_get_MenuAudio() const;

constexpr ::UnityW<::GlobalNamespace::MenuMusicPlayer>& __cordl_internal_get_MenuAudio() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& __cordl_internal_get_Mixer() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& __cordl_internal_get_Mixer() ;

constexpr float_t const& __cordl_internal_get_MusicPitchDeduction() const;

constexpr float_t& __cordl_internal_get_MusicPitchDeduction() ;

constexpr float_t const& __cordl_internal_get_SpeechlessPitchDeduction() const;

constexpr float_t& __cordl_internal_get_SpeechlessPitchDeduction() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& __cordl_internal_get_StageSpeakerMixer() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& __cordl_internal_get_StageSpeakerMixer() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_StageSpeakerPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_StageSpeakerPosition() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_StageSpeakerReverbHFCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_StageSpeakerReverbHFCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_StageSpeakerReverbLvlCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_StageSpeakerReverbLvlCurve() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>> const& __cordl_internal_get_VoiceCues() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>& __cordl_internal_get_VoiceCues() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& __cordl_internal_get_VoiceMixer() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& __cordl_internal_get_VoiceMixer() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& __cordl_internal_get_WalkieTalkieMixer() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& __cordl_internal_get_WalkieTalkieMixer() ;

constexpr ::UnityW<::GlobalNamespace::TrainAudio> const& __cordl_internal_get__TrainAudioManager_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::TrainAudio>& __cordl_internal_get__TrainAudioManager_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__VoiceSptialBlend_k__BackingField() const;

constexpr float_t& __cordl_internal_get__VoiceSptialBlend_k__BackingField() ;

constexpr bool const& __cordl_internal_get__WorldJustStarted_k__BackingField() const;

constexpr bool& __cordl_internal_get__WorldJustStarted_k__BackingField() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__blindfoldLoopEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__blindfoldLoopEvent() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__goodbye1WhiteLoopASC() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__goodbye1WhiteLoopASC() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__micRecovery() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__micRecovery() ;

constexpr float_t const& __cordl_internal_get__worldSFXFadeIn() const;

constexpr float_t& __cordl_internal_get__worldSFXFadeIn() ;

constexpr void __cordl_internal_set_BlindfoldLoop(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_Goodbye1WhiteLoop(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_ImpactsMixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value) ;

constexpr void __cordl_internal_set_MegaphoneMixers(::ArrayW<::UnityW<::UnityEngine::Audio::AudioMixer>>  value) ;

constexpr void __cordl_internal_set_MenuAudio(::UnityW<::GlobalNamespace::MenuMusicPlayer>  value) ;

constexpr void __cordl_internal_set_Mixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value) ;

constexpr void __cordl_internal_set_MusicPitchDeduction(float_t  value) ;

constexpr void __cordl_internal_set_SpeechlessPitchDeduction(float_t  value) ;

constexpr void __cordl_internal_set_StageSpeakerMixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value) ;

constexpr void __cordl_internal_set_StageSpeakerPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_StageSpeakerReverbHFCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_StageSpeakerReverbLvlCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_VoiceCues(::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  value) ;

constexpr void __cordl_internal_set_VoiceMixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value) ;

constexpr void __cordl_internal_set_WalkieTalkieMixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value) ;

constexpr void __cordl_internal_set__TrainAudioManager_k__BackingField(::UnityW<::GlobalNamespace::TrainAudio>  value) ;

constexpr void __cordl_internal_set__VoiceSptialBlend_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__WorldJustStarted_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__blindfoldLoopEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set__goodbye1WhiteLoopASC(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__micRecovery(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__worldSFXFadeIn(float_t  value) ;

/// @brief Method .ctor, addr 0x1803d3970, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::GlobalAudioEffects> getStaticF__Instance_k__BackingField() ;

static inline ::ArrayW<float_t> getStaticF__micRecoveryDelays() ;

/// @brief Method get_Instance, addr 0x1803d39a0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GlobalAudioEffects> get_Instance() ;

/// @brief Method get_TrainAudioManager, addr 0x1802edc30, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::TrainAudio> get_TrainAudioManager() ;

/// @brief Method get_VoiceSptialBlend, addr 0x1803d39c0, size 0x10, virtual false, abstract: false, final false
inline float_t get_VoiceSptialBlend() ;

/// @brief Method get_WorldJustStarted, addr 0x1803d39d0, size 0x10, virtual false, abstract: false, final false
inline bool get_WorldJustStarted() ;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::GlobalAudioEffects>  value) ;

static inline void setStaticF__micRecoveryDelays(::ArrayW<float_t>  value) ;

/// @brief Method set_Instance, addr 0x1803d39e0, size 0x30, virtual false, abstract: false, final false
static inline void set_Instance(::GlobalNamespace::GlobalAudioEffects*  value) ;

/// @brief Method set_TrainAudioManager, addr 0x1803d3a10, size 0x20, virtual false, abstract: false, final false
inline void set_TrainAudioManager(::GlobalNamespace::TrainAudio*  value) ;

/// @brief Method set_VoiceSptialBlend, addr 0x1803d3a30, size 0x10, virtual false, abstract: false, final false
inline void set_VoiceSptialBlend(float_t  value) ;

/// @brief Method set_WorldJustStarted, addr 0x1803d3a40, size 0x10, virtual false, abstract: false, final false
inline void set_WorldJustStarted(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GlobalAudioEffects() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlobalAudioEffects", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalAudioEffects(GlobalAudioEffects && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalAudioEffects", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalAudioEffects(GlobalAudioEffects const& ) = delete;

/// @brief Field PARAM_AMB_EXT_VOL offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_AMB_EXT_VOL{u"AmbExtVol"};

/// @brief Field PARAM_BIOME_AMB_PITCH offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_BIOME_AMB_PITCH{u"BiomeAmbPitch"};

/// @brief Field PARAM_EQ_GAIN_1K offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_EQ_GAIN_1K{u"MasterFreqGain1k"};

/// @brief Field PARAM_EQ_GAIN_3K offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_EQ_GAIN_3K{u"MasterFreqGain3k"};

/// @brief Field PARAM_FOLEY_PITCH offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_FOLEY_PITCH{u"FoleyPitch"};

/// @brief Field PARAM_FOOTSTEP_DRY offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_FOOTSTEP_DRY{u"FootstepDry"};

/// @brief Field PARAM_FOOTSTEP_SUPERWET offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_FOOTSTEP_SUPERWET{u"FootstepSuperWet"};

/// @brief Field PARAM_FOOTSTEP_VOL offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_FOOTSTEP_VOL{u"FootstepVol"};

/// @brief Field PARAM_IMPACTS_HP offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_IMPACTS_HP{u"ImpactsHP"};

/// @brief Field PARAM_LP offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_LP{u"MasterLP"};

/// @brief Field PARAM_MASTER_LIMITER_THRESHOLD offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_MASTER_LIMITER_THRESHOLD{u"MasterLimiterThreshold"};

/// @brief Field PARAM_MASTER_WET offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_MASTER_WET{u"MasterWet"};

/// @brief Field PARAM_MEGAPHONE_PITCH offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_MEGAPHONE_PITCH{u"MegaphonePitch"};

/// @brief Field PARAM_MUS_3D_VOL offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_MUS_3D_VOL{u"Music3DVol"};

/// @brief Field PARAM_OCEAN_VOL offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_OCEAN_VOL{u"OceanAmbVol"};

/// @brief Field PARAM_PROP_PITCH offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_PROP_PITCH{u"PropPitch"};

/// @brief Field PARAM_SFX_DRY offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_SFX_DRY{u"SFX_Dry"};

/// @brief Field PARAM_SFX_SUPERWET offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_SFX_SUPERWET{u"SFX_SuperWet"};

/// @brief Field PARAM_SFX_WET offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_SFX_WET{u"SFX_Wet"};

/// @brief Field PARAM_SPEAKER_REVERB_HF offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_SPEAKER_REVERB_HF{u"ReverbHF"};

/// @brief Field PARAM_SPEAKER_REVERB_LVL offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_SPEAKER_REVERB_LVL{u"ReverbLvl"};

/// @brief Field PARAM_SUPERWET_BLACKTOWER offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_SUPERWET_BLACKTOWER{u"SuperWet_BlackTower"};

/// @brief Field PARAM_SUPERWET_BLINDFOLD offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_SUPERWET_BLINDFOLD{u"SuperWet_Blindfold"};

/// @brief Field PARAM_SUPERWET_ENDING offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_SUPERWET_ENDING{u"SuperWet_Ending"};

/// @brief Field PARAM_SUPERWET_PITCH offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_SUPERWET_PITCH{u"SuperWetPitch"};

/// @brief Field PARAM_SUPERWET_SPEECHLESSNESS offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_SUPERWET_SPEECHLESSNESS{u"SuperWet_Speechlessness"};

/// @brief Field PARAM_TRAIN_HORN_DRY offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_TRAIN_HORN_DRY{u"DryLvl"};

/// @brief Field PARAM_TRAIN_HORN_WET offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_TRAIN_HORN_WET{u"WetLvl"};

/// @brief Field PARAM_VOICE_DRY offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_VOICE_DRY{u"Voice_Dry"};

/// @brief Field PARAM_VOICE_PITCH offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_VOICE_PITCH{u"VoicePitch"};

/// @brief Field PARAM_VOICE_SUPERWET offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_VOICE_SUPERWET{u"Voice_SuperWet"};

/// @brief Field PARAM_VOICE_WET offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_VOICE_WET{u"Voice_Wet"};

/// @brief Field PARAM_WALKIETALKIE_PITCH offset 0xffffffff size 0x8
static constexpr ::ConstString  PARAM_WALKIETALKIE_PITCH{u"WalkieTalkiePitch"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4843};

/// @brief Field VoiceCues, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  ___VoiceCues;

/// @brief Field Mixer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixer>  ___Mixer;

/// @brief Field VoiceMixer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixer>  ___VoiceMixer;

/// @brief Field WalkieTalkieMixer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixer>  ___WalkieTalkieMixer;

/// @brief Field MegaphoneMixers, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Audio::AudioMixer>>  ___MegaphoneMixers;

/// @brief Field ImpactsMixer, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixer>  ___ImpactsMixer;

/// @brief Field StageSpeakerMixer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixer>  ___StageSpeakerMixer;

/// @brief Field StageSpeakerPosition, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___StageSpeakerPosition;

/// @brief Field StageSpeakerReverbHFCurve, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___StageSpeakerReverbHFCurve;

/// @brief Field StageSpeakerReverbLvlCurve, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___StageSpeakerReverbLvlCurve;

/// @brief Field BlindfoldLoop, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___BlindfoldLoop;

/// @brief Field SpeechlessPitchDeduction, offset: 0x80, size: 0x4, def value: None
 float_t  ___SpeechlessPitchDeduction;

/// @brief Field MusicPitchDeduction, offset: 0x84, size: 0x4, def value: None
 float_t  ___MusicPitchDeduction;

/// @brief Field MenuAudio, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MenuMusicPlayer>  ___MenuAudio;

/// @brief Field Goodbye1WhiteLoop, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___Goodbye1WhiteLoop;

/// @brief Field _blindfoldLoopEvent, offset: 0x98, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____blindfoldLoopEvent;

/// @brief Field _goodbye1WhiteLoopASC, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____goodbye1WhiteLoopASC;

/// @brief Field _worldSFXFadeIn, offset: 0xa8, size: 0x4, def value: None
 float_t  ____worldSFXFadeIn;

/// @brief Field _micRecovery, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____micRecovery;

/// @brief Field <VoiceSptialBlend>k__BackingField, offset: 0xb8, size: 0x4, def value: None
 float_t  ____VoiceSptialBlend_k__BackingField;

/// @brief Field <WorldJustStarted>k__BackingField, offset: 0xbc, size: 0x1, def value: None
 bool  ____WorldJustStarted_k__BackingField;

/// @brief Field <TrainAudioManager>k__BackingField, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrainAudio>  ____TrainAudioManager_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GlobalAudioEffects, ___VoiceCues) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalAudioEffects, ___Mixer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalAudioEffects, ___VoiceMixer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalAudioEffects, ___WalkieTalkieMixer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalAudioEffects, ___MegaphoneMixers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalAudioEffects, ___ImpactsMixer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalAudioEffects, ___StageSpeakerMixer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalAudioEffects, ___StageSpeakerPosition) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalAudioEffects, ___StageSpeakerReverbHFCurve) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalAudioEffects, ___StageSpeakerReverbLvlCurve) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalAudioEffects, ___BlindfoldLoop) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalAudioEffects, ___SpeechlessPitchDeduction) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalAudioEffects, ___MusicPitchDeduction) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalAudioEffects, ___MenuAudio) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalAudioEffects, ___Goodbye1WhiteLoop) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalAudioEffects, ____blindfoldLoopEvent) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalAudioEffects, ____goodbye1WhiteLoopASC) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalAudioEffects, ____worldSFXFadeIn) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalAudioEffects, ____micRecovery) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalAudioEffects, ____VoiceSptialBlend_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalAudioEffects, ____WorldJustStarted_k__BackingField) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalAudioEffects, ____TrainAudioManager_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GlobalAudioEffects) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace

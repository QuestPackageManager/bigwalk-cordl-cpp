#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalVoicePlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalVoicePlayer)
namespace Dissonance {
class VoicePlayerState;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace GlobalNamespace {
class AudioVolume;
}
namespace GlobalNamespace {
class LocalVoicePlayerMicrophoneCache;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class SoundCue;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalVoicePlayer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LocalVoicePlayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalVoicePlayer*, "", "LocalVoicePlayer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalVoicePlayer
class CORDL_TYPE LocalVoicePlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ASC, put=set_ASC)) ::UnityW<::GlobalNamespace::AudioSourceController>  ASC;

/// @brief Field AmpGating, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_AmpGating, put=__cordl_internal_set_AmpGating)) bool  AmpGating;

/// @brief Field Cue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Cue, put=__cordl_internal_set_Cue)) ::UnityW<::GlobalNamespace::SoundCue>  Cue;

/// @brief Field NonStop, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_NonStop, put=__cordl_internal_set_NonStop)) bool  NonStop;

/// @brief Field OnPlay, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlay, put=__cordl_internal_set_OnPlay)) ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  OnPlay;

 __declspec(property(get=get_Volume)) ::GlobalNamespace::AudioVolume*  Volume;

/// @brief Field <ASC>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__ASC_k__BackingField, put=__cordl_internal_set__ASC_k__BackingField)) ::UnityW<::GlobalNamespace::AudioSourceController>  _ASC_k__BackingField;

/// @brief Field _bufferSize, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__bufferSize, put=__cordl_internal_set__bufferSize)) int32_t  _bufferSize;

/// @brief Field _cachedClip, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedClip, put=__cordl_internal_set__cachedClip)) ::UnityW<::UnityEngine::AudioClip>  _cachedClip;

/// @brief Field _gateVol, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__gateVol, put=__cordl_internal_set__gateVol)) float_t  _gateVol;

/// @brief Field _microphoneCache, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__microphoneCache, put=__cordl_internal_set__microphoneCache)) ::UnityW<::GlobalNamespace::LocalVoicePlayerMicrophoneCache>  _microphoneCache;

/// @brief Field _player, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__player, put=__cordl_internal_set__player)) ::UnityW<::GlobalNamespace::PlayerCharacter>  _player;

/// @brief Field _voiceState, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__voiceState, put=__cordl_internal_set__voiceState)) ::Dissonance::VoicePlayerState*  _voiceState;

/// @brief Field _volume, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__volume, put=__cordl_internal_set__volume)) ::GlobalNamespace::AudioVolume*  _volume;

/// @brief Method Awake, addr 0x1803d3e90, size 0x60, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckAndRestart, addr 0x1803d3ef0, size 0x50, virtual false, abstract: false, final false
inline void CheckAndRestart() ;

/// @brief Method LateUpdate, addr 0x1803d3f40, size 0x2e0, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::LocalVoicePlayer* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1803d4220, size 0x40, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDissonanceStart, addr 0x1803d4260, size 0x300, virtual false, abstract: false, final false
inline void OnDissonanceStart() ;

/// @brief Method Play, addr 0x1803d4560, size 0x110, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method Start, addr 0x1803d4670, size 0x150, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Stop, addr 0x1803d4220, size 0x40, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method <OnDissonanceStart>g___clearRef|23_0, addr 0x1803d47c0, size 0x50, virtual false, abstract: false, final false
static inline void _OnDissonanceStart_g___clearRef_23_0(::GlobalNamespace::LocalVoicePlayer*  p, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <Start>b__20_0, addr 0x180308de0, size 0x10, virtual false, abstract: false, final false
inline void _Start_b__20_0(::GlobalNamespace::PlayerCharacter*  p) ;

constexpr bool const& __cordl_internal_get_AmpGating() const;

constexpr bool& __cordl_internal_get_AmpGating() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_Cue() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_Cue() ;

constexpr bool const& __cordl_internal_get_NonStop() const;

constexpr bool& __cordl_internal_get_NonStop() ;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& __cordl_internal_get_OnPlay() const;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& __cordl_internal_get_OnPlay() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__ASC_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__ASC_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__bufferSize() const;

constexpr int32_t& __cordl_internal_get__bufferSize() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__cachedClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__cachedClip() ;

constexpr float_t const& __cordl_internal_get__gateVol() const;

constexpr float_t& __cordl_internal_get__gateVol() ;

constexpr ::UnityW<::GlobalNamespace::LocalVoicePlayerMicrophoneCache> const& __cordl_internal_get__microphoneCache() const;

constexpr ::UnityW<::GlobalNamespace::LocalVoicePlayerMicrophoneCache>& __cordl_internal_get__microphoneCache() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get__player() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get__player() ;

constexpr ::Dissonance::VoicePlayerState* const& __cordl_internal_get__voiceState() const;

constexpr ::Dissonance::VoicePlayerState*& __cordl_internal_get__voiceState() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__volume() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__volume() ;

constexpr void __cordl_internal_set_AmpGating(bool  value) ;

constexpr void __cordl_internal_set_Cue(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_NonStop(bool  value) ;

constexpr void __cordl_internal_set_OnPlay(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

constexpr void __cordl_internal_set__ASC_k__BackingField(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__bufferSize(int32_t  value) ;

constexpr void __cordl_internal_set__cachedClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__gateVol(float_t  value) ;

constexpr void __cordl_internal_set__microphoneCache(::UnityW<::GlobalNamespace::LocalVoicePlayerMicrophoneCache>  value) ;

constexpr void __cordl_internal_set__player(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set__voiceState(::Dissonance::VoicePlayerState*  value) ;

constexpr void __cordl_internal_set__volume(::GlobalNamespace::AudioVolume*  value) ;

/// @brief Method .ctor, addr 0x1803d4810, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnPlay, addr 0x1803d4880, size 0x90, virtual false, abstract: false, final false
inline void add_OnPlay(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

/// @brief Method get_ASC, addr 0x1803a74d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioSourceController> get_ASC() ;

/// @brief Method get_Volume, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioVolume* get_Volume() ;

/// @brief Method remove_OnPlay, addr 0x1803d4910, size 0x90, virtual false, abstract: false, final false
inline void remove_OnPlay(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

/// @brief Method set_ASC, addr 0x1803d49a0, size 0x10, virtual false, abstract: false, final false
inline void set_ASC(::GlobalNamespace::AudioSourceController*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalVoicePlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalVoicePlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalVoicePlayer(LocalVoicePlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalVoicePlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalVoicePlayer(LocalVoicePlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4845};

/// @brief Field Cue, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___Cue;

/// @brief Field NonStop, offset: 0x28, size: 0x1, def value: None
 bool  ___NonStop;

/// @brief Field AmpGating, offset: 0x29, size: 0x1, def value: None
 bool  ___AmpGating;

/// @brief Field _cachedClip, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____cachedClip;

/// @brief Field _volume, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____volume;

/// @brief Field _voiceState, offset: 0x40, size: 0x8, def value: None
 ::Dissonance::VoicePlayerState*  ____voiceState;

/// @brief Field _bufferSize, offset: 0x48, size: 0x4, def value: None
 int32_t  ____bufferSize;

/// @brief Field _gateVol, offset: 0x4c, size: 0x4, def value: None
 float_t  ____gateVol;

/// @brief Field _player, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ____player;

/// @brief Field _microphoneCache, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalVoicePlayerMicrophoneCache>  ____microphoneCache;

/// @brief Field <ASC>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____ASC_k__BackingField;

/// @brief Field OnPlay, offset: 0x68, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  ___OnPlay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalVoicePlayer, ___Cue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalVoicePlayer, ___NonStop) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalVoicePlayer, ___AmpGating) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalVoicePlayer, ____cachedClip) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalVoicePlayer, ____volume) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalVoicePlayer, ____voiceState) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalVoicePlayer, ____bufferSize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalVoicePlayer, ____gateVol) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalVoicePlayer, ____player) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalVoicePlayer, ____microphoneCache) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalVoicePlayer, ____ASC_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalVoicePlayer, ___OnPlay) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalVoicePlayer) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace

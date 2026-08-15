#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectPipeVideoAudio.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PeckEffectPipeVideoAudio)
namespace GlobalNamespace {
class AudioSourceController;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PeckEffectPipeVideoAudio___c;
}
namespace GlobalNamespace {
class SoundCue;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
namespace GlobalNamespace {
class VideoPlayerAudioAssigner;
}
namespace UnityEngine::Audio {
class AudioMixer;
}
namespace UnityEngine {
class AudioClip_PCMReaderCallback;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectPipeVideoAudio;
}
namespace GlobalNamespace {
class PeckEffectPipeVideoAudio___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectPipeVideoAudio*);
MARK_REF_T(::GlobalNamespace::PeckEffectPipeVideoAudio___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectPipeVideoAudio*, "", "PeckEffectPipeVideoAudio");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectPipeVideoAudio___c*, "", "PeckEffectPipeVideoAudio/<>c");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectPipeVideoAudio/<>c
class CORDL_TYPE PeckEffectPipeVideoAudio___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::PeckEffectPipeVideoAudio___c*  __9;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::UnityEngine::AudioClip_PCMReaderCallback*  __9__7_0;

static inline ::GlobalNamespace::PeckEffectPipeVideoAudio___c* New_ctor() ;

/// @brief Method <Awake>b__7_0, addr 0x18041a100, size 0x30, virtual false, abstract: false, final false
inline void _Awake_b__7_0(::ArrayW<float_t>  buf) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::PeckEffectPipeVideoAudio___c* getStaticF___9() ;

static inline ::UnityEngine::AudioClip_PCMReaderCallback* getStaticF___9__7_0() ;

static inline void setStaticF___9(::GlobalNamespace::PeckEffectPipeVideoAudio___c*  value) ;

static inline void setStaticF___9__7_0(::UnityEngine::AudioClip_PCMReaderCallback*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectPipeVideoAudio___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectPipeVideoAudio___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectPipeVideoAudio___c(PeckEffectPipeVideoAudio___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectPipeVideoAudio___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectPipeVideoAudio___c(PeckEffectPipeVideoAudio___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5400};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PeckEffectPipeVideoAudio___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectPipeVideoAudio
class CORDL_TYPE PeckEffectPipeVideoAudio : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::PeckEffectPipeVideoAudio___c;

/// @brief Field _cachedClip, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedClip, put=__cordl_internal_set__cachedClip)) ::UnityW<::UnityEngine::AudioClip>  _cachedClip;

/// @brief Field _sourceController, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__sourceController, put=__cordl_internal_set__sourceController)) ::UnityW<::GlobalNamespace::AudioSourceController>  _sourceController;

/// @brief Field audioCue, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioCue, put=__cordl_internal_set_audioCue)) ::UnityW<::GlobalNamespace::SoundCue>  audioCue;

/// @brief Field audioTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioTransform, put=__cordl_internal_set_audioTransform)) ::UnityW<::UnityEngine::Transform>  audioTransform;

/// @brief Field bigScreenMixer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_bigScreenMixer, put=__cordl_internal_set_bigScreenMixer)) ::UnityW<::UnityEngine::Audio::AudioMixer>  bigScreenMixer;

/// @brief Field logVerbose, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field trackedStateSystem, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_trackedStateSystem, put=__cordl_internal_set_trackedStateSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  trackedStateSystem;

/// @brief Method Awake, addr 0x18044b550, size 0x1e0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectPipeVideoAudio* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18044b730, size 0x60, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x18044b790, size 0x40, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method Peck, addr 0x18044b7d0, size 0x2f0, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method Play, addr 0x18044bac0, size 0x130, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method Stop, addr 0x18044b790, size 0x40, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method Update, addr 0x18044bc60, size 0x160, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method <Peck>g___onStop|11_0, addr 0x18044bbf0, size 0x70, virtual false, abstract: false, final false
static inline void _Peck_g___onStop_11_0(::GlobalNamespace::VideoPlayerAudioAssigner*  p, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <Play>g___clearRef|12_0, addr 0x1803d59b0, size 0x50, virtual false, abstract: false, final false
static inline void _Play_g___clearRef_12_0(::GlobalNamespace::PeckEffectPipeVideoAudio*  p, ::GlobalNamespace::AudioSourceController*  c) ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__cachedClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__cachedClip() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__sourceController() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__sourceController() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_audioCue() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_audioCue() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_audioTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_audioTransform() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& __cordl_internal_get_bigScreenMixer() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& __cordl_internal_get_bigScreenMixer() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_trackedStateSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_trackedStateSystem() ;

constexpr void __cordl_internal_set__cachedClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__sourceController(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set_audioCue(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_audioTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_bigScreenMixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_trackedStateSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectPipeVideoAudio() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectPipeVideoAudio", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectPipeVideoAudio(PeckEffectPipeVideoAudio && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectPipeVideoAudio", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectPipeVideoAudio(PeckEffectPipeVideoAudio const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5401};

/// @brief Field trackedStateSystem, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___trackedStateSystem;

/// @brief Field audioCue, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___audioCue;

/// @brief Field audioTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___audioTransform;

/// @brief Field bigScreenMixer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixer>  ___bigScreenMixer;

/// @brief Field logVerbose, offset: 0x40, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field _cachedClip, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____cachedClip;

/// @brief Field _sourceController, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____sourceController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectPipeVideoAudio, ___trackedStateSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPipeVideoAudio, ___audioCue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPipeVideoAudio, ___audioTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPipeVideoAudio, ___bigScreenMixer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPipeVideoAudio, ___logVerbose) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPipeVideoAudio, ____cachedClip) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPipeVideoAudio, ____sourceController) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectPipeVideoAudio) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace

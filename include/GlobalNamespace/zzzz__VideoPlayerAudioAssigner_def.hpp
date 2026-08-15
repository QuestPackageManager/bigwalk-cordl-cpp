#pragma once
// IWYU pragma private; include "GlobalNamespace/VideoPlayerAudioAssigner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VideoPlayerAudioAssigner)
namespace GlobalNamespace {
class AudioSourceController;
}
namespace GlobalNamespace {
class SoundCue;
}
namespace GlobalNamespace {
class VideoPlayerAudioAssigner___c;
}
namespace UnityEngine::Video {
class VideoPlayer;
}
namespace UnityEngine {
class AudioClip_PCMReaderCallback;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class VideoPlayerAudioAssigner;
}
namespace GlobalNamespace {
class VideoPlayerAudioAssigner___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VideoPlayerAudioAssigner*);
MARK_REF_T(::GlobalNamespace::VideoPlayerAudioAssigner___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VideoPlayerAudioAssigner*, "", "VideoPlayerAudioAssigner");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VideoPlayerAudioAssigner___c*, "", "VideoPlayerAudioAssigner/<>c");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VideoPlayerAudioAssigner/<>c
class CORDL_TYPE VideoPlayerAudioAssigner___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::VideoPlayerAudioAssigner___c*  __9;

/// @brief Field <>9__4_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_0, put=setStaticF___9__4_0)) ::UnityEngine::AudioClip_PCMReaderCallback*  __9__4_0;

static inline ::GlobalNamespace::VideoPlayerAudioAssigner___c* New_ctor() ;

/// @brief Method <Awake>b__4_0, addr 0x18041a100, size 0x30, virtual false, abstract: false, final false
inline void _Awake_b__4_0(::ArrayW<float_t>  buf) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::VideoPlayerAudioAssigner___c* getStaticF___9() ;

static inline ::UnityEngine::AudioClip_PCMReaderCallback* getStaticF___9__4_0() ;

static inline void setStaticF___9(::GlobalNamespace::VideoPlayerAudioAssigner___c*  value) ;

static inline void setStaticF___9__4_0(::UnityEngine::AudioClip_PCMReaderCallback*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoPlayerAudioAssigner___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayerAudioAssigner___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoPlayerAudioAssigner___c(VideoPlayerAudioAssigner___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayerAudioAssigner___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoPlayerAudioAssigner___c(VideoPlayerAudioAssigner___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5153};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::VideoPlayerAudioAssigner___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: VideoPlayerAudioAssigner
class CORDL_TYPE VideoPlayerAudioAssigner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::VideoPlayerAudioAssigner___c;

/// @brief Field _cachedClip, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedClip, put=__cordl_internal_set__cachedClip)) ::UnityW<::UnityEngine::AudioClip>  _cachedClip;

/// @brief Field _sourceController, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__sourceController, put=__cordl_internal_set__sourceController)) ::UnityW<::GlobalNamespace::AudioSourceController>  _sourceController;

/// @brief Field audioCue, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioCue, put=__cordl_internal_set_audioCue)) ::UnityW<::GlobalNamespace::SoundCue>  audioCue;

/// @brief Field videoPlayer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_videoPlayer, put=__cordl_internal_set_videoPlayer)) ::UnityW<::UnityEngine::Video::VideoPlayer>  videoPlayer;

/// @brief Method Awake, addr 0x18041b2d0, size 0x1f0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::VideoPlayerAudioAssigner* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18041b4c0, size 0x60, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1803f5730, size 0x40, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18041b520, size 0x60, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlaySource, addr 0x18041b580, size 0x1e0, virtual false, abstract: false, final false
inline void PlaySource() ;

/// @brief Method Refresh, addr 0x18041b760, size 0x80, virtual false, abstract: false, final false
inline void Refresh() ;

/// @brief Method SetAudioSource, addr 0x18041b7e0, size 0x40, virtual false, abstract: false, final false
inline void SetAudioSource(::UnityEngine::AudioSource*  newSource) ;

/// @brief Method SetToDefault, addr 0x18041b820, size 0x50, virtual false, abstract: false, final false
inline void SetToDefault() ;

/// @brief Method <PlaySource>g___onStop|11_0, addr 0x18041b870, size 0x360, virtual false, abstract: false, final false
static inline void _PlaySource_g___onStop_11_0(::GlobalNamespace::VideoPlayerAudioAssigner*  p, ::GlobalNamespace::AudioSourceController*  c) ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__cachedClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__cachedClip() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__sourceController() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__sourceController() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_audioCue() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_audioCue() ;

constexpr ::UnityW<::UnityEngine::Video::VideoPlayer> const& __cordl_internal_get_videoPlayer() const;

constexpr ::UnityW<::UnityEngine::Video::VideoPlayer>& __cordl_internal_get_videoPlayer() ;

constexpr void __cordl_internal_set__cachedClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__sourceController(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set_audioCue(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_videoPlayer(::UnityW<::UnityEngine::Video::VideoPlayer>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoPlayerAudioAssigner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayerAudioAssigner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoPlayerAudioAssigner(VideoPlayerAudioAssigner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayerAudioAssigner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoPlayerAudioAssigner(VideoPlayerAudioAssigner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5154};

/// @brief Field videoPlayer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Video::VideoPlayer>  ___videoPlayer;

/// @brief Field audioCue, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___audioCue;

/// @brief Field _cachedClip, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____cachedClip;

/// @brief Field _sourceController, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____sourceController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VideoPlayerAudioAssigner, ___videoPlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VideoPlayerAudioAssigner, ___audioCue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VideoPlayerAudioAssigner, ____cachedClip) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VideoPlayerAudioAssigner, ____sourceController) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VideoPlayerAudioAssigner) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace

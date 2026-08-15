#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/VoicePlayback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/Audio/Playback/zzzz__BaseVoicePlayback_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VoicePlayback)
namespace Dissonance::Audio::Playback {
class IPriorityManager;
}
namespace Dissonance::Audio::Playback {
class IVolumeProvider;
}
namespace Dissonance::Audio::Playback {
class SamplePlaybackComponent;
}
namespace Dissonance::Audio::Playback {
struct SpeechSession;
}
namespace Dissonance {
class Log;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance::Audio::Playback {
class VoicePlayback;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Playback::VoicePlayback*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::VoicePlayback*, "Dissonance.Audio.Playback", "VoicePlayback");
// Dependencies Dissonance.Audio.Playback.BaseVoicePlayback, System.Nullable`1<T>
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.VoicePlayback
class CORDL_TYPE VoicePlayback : public ::Dissonance::Audio::Playback::BaseVoicePlayback {
public:
// Declarations
 __declspec(property(get=get_Amplitude)) float_t  Amplitude;

/// @brief Field AudioSourceController, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_AudioSourceController, put=__cordl_internal_set_AudioSourceController)) ::UnityW<::GlobalNamespace::AudioSourceController>  AudioSourceController;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

/// @brief Field OnPlay, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlay, put=__cordl_internal_set_OnPlay)) ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  OnPlay;

/// @brief Field _player, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__player, put=__cordl_internal_set__player)) ::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent>  _player;

/// @brief Field _savedSpatialBlend, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__savedSpatialBlend, put=__cordl_internal_set__savedSpatialBlend)) ::System::Nullable_1<float_t>  _savedSpatialBlend;

/// @brief Method Awake, addr 0x1805eda60, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Dissonance::Audio::Playback::VoicePlayback* New_ctor() ;

/// @brief Method OnDisable, addr 0x1805d8870, size 0x40, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Setup, addr 0x1805d8950, size 0x40, virtual true, abstract: false, final false
inline void Setup(::Dissonance::Audio::Playback::IPriorityManager*  priority, ::Dissonance::Audio::Playback::IVolumeProvider*  volume) ;

/// @brief Method TryGetActiveSession, addr 0x1805edab0, size 0x90, virtual true, abstract: false, final false
inline ::System::Nullable_1<::Dissonance::Audio::Playback::SpeechSession> TryGetActiveSession() ;

/// @brief Method Update, addr 0x1805edc20, size 0x130, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdatePositionalPlayback, addr 0x1805edb40, size 0xe0, virtual false, abstract: false, final false
inline void UpdatePositionalPlayback() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get_AudioSourceController() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get_AudioSourceController() ;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& __cordl_internal_get_OnPlay() const;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& __cordl_internal_get_OnPlay() ;

constexpr ::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent> const& __cordl_internal_get__player() const;

constexpr ::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent>& __cordl_internal_get__player() ;

constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get__savedSpatialBlend() const;

constexpr ::System::Nullable_1<float_t>& __cordl_internal_get__savedSpatialBlend() ;

constexpr void __cordl_internal_set_AudioSourceController(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set_OnPlay(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

constexpr void __cordl_internal_set__player(::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent>  value) ;

constexpr void __cordl_internal_set__savedSpatialBlend(::System::Nullable_1<float_t>  value) ;

/// @brief Method .ctor, addr 0x1805d89e0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnPlay, addr 0x1805edda0, size 0x90, virtual false, abstract: false, final false
inline void add_OnPlay(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_Amplitude, addr 0x1805ede30, size 0x50, virtual true, abstract: false, final false
inline float_t get_Amplitude() ;

/// @brief Method remove_OnPlay, addr 0x1805ede80, size 0x90, virtual false, abstract: false, final false
inline void remove_OnPlay(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoicePlayback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoicePlayback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VoicePlayback(VoicePlayback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoicePlayback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoicePlayback(VoicePlayback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16992};

/// @brief Field AudioSourceController, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ___AudioSourceController;

/// @brief Field OnPlay, offset: 0x78, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  ___OnPlay;

/// @brief Field _player, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::Dissonance::Audio::Playback::SamplePlaybackComponent>  ____player;

/// @brief Field _savedSpatialBlend, offset: 0x88, size: 0x8, def value: None
 ::System::Nullable_1<float_t>  ____savedSpatialBlend;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Playback::VoicePlayback, ___AudioSourceController) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::VoicePlayback, ___OnPlay) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::VoicePlayback, ____player) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::VoicePlayback, ____savedSpatialBlend) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Playback::VoicePlayback) == 0x90, "Size mismatch!");

} // namespace end def Dissonance::Audio::Playback
